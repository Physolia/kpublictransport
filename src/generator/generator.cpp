/*
    Copyright (C) 2020 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "stringtable.h"

#include <overpassquery.h>
#include <overpassquerymanager.h>

#include <QColor>
#include <QCommandLineParser>
#include <QCoreApplication>
#include <QDebug>
#include <QFile>

static QIODevice *s_out = nullptr;

struct RouteInfo {
    OSM::Id relId;
    OSM::BoundingBox bbox;
    QString name;
    QColor color;
    // TODO line type
    QString wdId;
};

void augmentFromWikidata(std::vector<RouteInfo> &&routes);
void generateIndex(std::vector<RouteInfo> &&routes);
void generateCode(std::vector<RouteInfo> &&routes, std::map<uint64_t, std::vector<std::size_t>> &&zIndex);

RouteInfo routeInfoFromRelation(const OSM::Relation &rel)
{
    RouteInfo info;
    info.relId = rel.id;
    info.bbox = rel.bbox;
    info.name = OSM::tagValue(rel, QLatin1String("ref"));
    const auto colStr = OSM::tagValue(rel, QLatin1String("colour"));
    if (!colStr.isEmpty()) {
        info.color = QColor(colStr);
    }
    info.wdId = OSM::tagValue(rel, QLatin1String("wikidata"));
    return info;
}

void processOSMData(OSM::DataSet &&dataSet)
{
    qDebug() << "got" << dataSet.relations.size() << "relations from OSM";

    // split relations into route_master elements and route elements
    auto splitIt = std::partition(dataSet.relations.begin(), dataSet.relations.end(), [](const auto &rel) {
        return OSM::tagValue(rel, QLatin1String("type")) == QLatin1String("route_master");
    });
    sort(splitIt, dataSet.relations.end());
    const auto routeMasterCount = std::distance(dataSet.relations.begin(), splitIt);
    qDebug() << "  containing" << routeMasterCount << "route masters and" << (dataSet.relations.size() - routeMasterCount) << "routes";

    // resolve route masters first, and then consider the remaining routes that have no route_master
    std::vector<RouteInfo> routes;
    for (auto i = 0; i < routeMasterCount; ++i) {
        auto &rel = dataSet.relations[i];
        auto info = routeInfoFromRelation(rel);

        const auto members = std::move(rel.members); // reference will become invalid once we start to modify below
        for (const auto &mem : members) {
            auto memIt = std::lower_bound(dataSet.relations.begin() + routeMasterCount, dataSet.relations.end(), mem.id);
            if (memIt == dataSet.relations.end() || (*memIt).id != mem.id) {
                continue;
            }

            // merge content
            const QColor col(OSM::tagValue(*memIt, QLatin1String("colour")));
            if (info.color.isValid() && col.isValid() && info.color != col) {
                qWarning() << "color conflict:" << info.relId << (*memIt).id << info.name << info.color.name() << col.name();
            } else if (col.isValid()) {
                info.color = col;
            }
            const auto wId = OSM::tagValue(*memIt, QLatin1String("wikidata"));
            if (!info.wdId.isEmpty() && !wId.isEmpty() && info.wdId != wId) {
                qWarning() << "wikidata id conflict:" << info.relId << (*memIt).id << info.name << info.wdId << wId;
            } else if (!wId.isEmpty()) {
                info.wdId = wId;
            }
            info.bbox = OSM::unite(info.bbox, (*memIt).bbox);

            dataSet.relations.erase(memIt);
        }
        routes.push_back(std::move(info));
    }

    // deal with routes without a route master
    qDebug() << "  " << (dataSet.relations.size() - routeMasterCount) << "dangling routes remaining";
    for (auto it = dataSet.relations.begin() + routeMasterCount; it != dataSet.relations.end(); ++it) {
        auto info = routeInfoFromRelation(*it);
        routes.push_back(std::move(info));
    }
    qDebug() << "merged routes:" << routes.size();

    // filter useless routes
    routes.erase(std::remove_if(routes.begin(), routes.end(), [](const auto &info) {
        return info.name.isEmpty() || !info.bbox.isValid() || (!info.color.isValid() && info.wdId.isEmpty());
    }), routes.end());
    // check for uniqueness of (bbox, name) - would break indexing and can happen for lines without a route_master relation
    for (auto lit = routes.begin(); lit != routes.end(); ++lit) {
        routes.erase(std::remove_if(lit + 1, routes.end(), [lit](const auto &rhs) {
            return (*lit).name == rhs.name && OSM::intersects((*lit).bbox, rhs.bbox);
        }), routes.end());
    }
    qDebug() << "routes after filtering:" << routes.size();

    augmentFromWikidata(std::move(routes));
}

void augmentFromWikidata(std::vector<RouteInfo> &&routes)
{
    // TODO
    generateIndex(std::move(routes));
}

void generateIndex(std::vector<RouteInfo> &&routes)
{
    // find the smallest distance between two bboxes with a name collision
    std::sort(routes.begin(), routes.end(), [](const auto &lhs, const auto &rhs) {
        return lhs.name < rhs.name;
    });
    auto minDist = std::numeric_limits<uint32_t>::max();
    for (auto lit = routes.begin(); lit != routes.end(); ++lit) { // for each name
        auto rit = std::upper_bound(lit, routes.end(), (*lit).name, [](const auto &lhs, const auto &rhs) { return lhs < rhs.name; });
        if (lit + 1 == rit || rit == routes.end()) { // only a single route with that name
            continue;
        }
        --rit;

        for (; lit != rit; ++lit) {  // for each pair with equal name
            for (auto it = lit + 1; it != rit; ++it) {
                minDist = std::min(minDist,
                    std::max(OSM::latitudeDistance((*lit).bbox, (*it).bbox),
                             OSM::longitudeDifference((*lit).bbox, (*it).bbox)));
            }
        }
    }
    qDebug() << "minimum bbox distance is" << minDist;
    qDebug() << "z hash size is" << __builtin_clz(minDist) + 1;

    // order routes by OSM id, to increase output stability
    std::sort(routes.begin(), routes.end(), [](const auto &lhs, const auto &rhs) { return lhs.relId < rhs.relId; });
    std::map<uint64_t, std::vector<std::size_t>> zIndex;
    // TODO tile bboxes at the z-level derived from the above minimum distance
    // TODO sort route index vectors by name

    generateCode(std::move(routes), std::move(zIndex));
}

void generateCode(std::vector<RouteInfo> &&routes, std::map<uint64_t, std::vector<std::size_t>> &&zIndex)
{
    // write header
    s_out->write("/* Generated code, do not edit. */\n\n");

    // create and write string table
    StringTable strTab;
    for (const auto &route : routes) {
        strTab.addString(route.name);
    }
    strTab.writeCode(QStringLiteral("line_data_stringtab"), s_out);

    // write route table
    // TODO this doesn't create valid code yet
    s_out->write("static const LineData line_data[] = {\n");
    for (const auto &route : routes) {
        s_out->write("    { ");
        s_out->write(QByteArray::number((int)strTab.stringOffset(route.name)));
        s_out->write(", 0x");
        s_out->write(QByteArray::number(route.color.rgb(), 16));
        s_out->write(" }, // OSM: ");
        s_out->write(QByteArray::number((long long)route.relId));
        s_out->write(" WD: ");
        s_out->write(route.wdId.toUtf8());
        s_out->write("\n");
    }
    s_out->write("};\n");

    // TODO write bucket table
    // TODO write z index

    QCoreApplication::quit();
}

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    QCommandLineParser parser;
    parser.addHelpOption();
    QCommandLineOption outFileOption({ QStringLiteral("o") }, QStringLiteral("Output file name"), QStringLiteral("out"));
    parser.addOption(outFileOption);
    parser.process(app);

    QFile out(parser.value(outFileOption));
    if (!out.open(QFile::WriteOnly)) {
        qCritical() << "Failed to open output file:" << out.errorString();
        return 1;
    }
    s_out = &out;

    OSM::OverpassQueryManager osmMgr;
    OSM::OverpassQuery osmQuery;
    QFile f(QStringLiteral(":/routes.overpassql"));
    if (!f.open(QFile::ReadOnly)) {
        qCritical() << f.errorString();
        return 1;
    }
    osmQuery.setQuery(QString::fromUtf8(f.readAll()));

    // TODO subset for testing only
    osmQuery.setBoundingBox({9.0, 52.0, 5.0, 2.0});
    osmQuery.setTileSize({2.0, 2.0});

    QObject::connect(&osmQuery, &OSM::OverpassQuery::finished, [&osmQuery]() {
        if (osmQuery.error() != OSM::OverpassQuery::NoError) {
            qCritical() << "Overpass query failed.";
            QCoreApplication::exit(1);
        } else {
            processOSMData(osmQuery.takeResult());
        }
    });
    osmMgr.execute(&osmQuery);

    return QCoreApplication::exec();
}
