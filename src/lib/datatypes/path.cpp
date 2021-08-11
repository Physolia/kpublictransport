/*
    SPDX-FileCopyrightText: 2021 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#include "path.h"
#include "datatypes_p.h"
#include "json_p.h"
#include "../geo/geojson_p.h"
#include "location.h"

#include <QLineF>

using namespace KPublicTransport;

namespace KPublicTransport {
class PathSectionPrivate : public QSharedData {
public:
    QPolygonF path;
    QString description;
    int floorLevelChange = 0;
    PathSection::Maneuver maneuver = PathSection::Move;
};
}

KPUBLICTRANSPORT_MAKE_GADGET(PathSection)
KPUBLICTRANSPORT_MAKE_PROPERTY(PathSection, QPolygonF, path, setPath)
KPUBLICTRANSPORT_MAKE_PROPERTY(PathSection, QString, description, setDescription)
KPUBLICTRANSPORT_MAKE_PROPERTY(PathSection, int, floorLevelChange, setFloorLevelChange)
KPUBLICTRANSPORT_MAKE_PROPERTY(PathSection, PathSection::Maneuver, maneuver, setManeuver)

int PathSection::distance() const
{
    if (d->path.size() < 2) {
        return 0;
    }

    int dist = 0;
    for (auto it = d->path.begin(); it != std::prev(d->path.end()); ++it) {
        const auto nextIt = std::next(it);
        dist += Location::distance((*it).y(), (*it).x(), (*nextIt).y(), (*nextIt).x());
    }
    return dist;
}

int PathSection::direction() const
{
    const auto p1 = startPoint();
    const auto p2 = endPoint();
    if (d->path.size() < 2 || p1 == p2) {
        return -1;
    }
    return static_cast<int>(450 - QLineF(p1.x(), -p1.y(), p2.x(), -p2.y()).angle()) % 360;
}

QPointF PathSection::startPoint() const
{
    return d->path.empty() ? QPointF() : d->path.constFirst();
}

QPointF PathSection::endPoint() const
{
    return d->path.empty() ? QPointF() : d->path.constLast();
}

QJsonObject PathSection::toJson(const PathSection &section)
{
    auto obj = Json::toJson(section);
    if (!section.path().empty()) {
        obj.insert(QLatin1String("path"), GeoJson::writeLineString(section.path()));
    }
    if (section.maneuver() == PathSection::Move) {
        obj.remove(QLatin1String("maneuver"));
    }
    if (section.floorLevelChange() == 0) {
        obj.remove(QLatin1String("floorLevelChange"));
    }
    return obj;
}

QJsonArray PathSection::toJson(const std::vector<PathSection> &sections)
{
    return Json::toJson(sections);
}

PathSection PathSection::fromJson(const QJsonObject &obj)
{
    auto section = Json::fromJson<PathSection>(obj);
    section.setPath(GeoJson::readLineString(obj.value(QLatin1String("path")).toObject()));
    return section;
}

std::vector<PathSection> PathSection::fromJson(const QJsonArray &array)
{
    return Json::fromJson<PathSection>(array);
}


namespace KPublicTransport {
class PathPrivate : public QSharedData {
public:
    std::vector<PathSection> sections;
};
}

KPUBLICTRANSPORT_MAKE_GADGET(Path)

bool Path::isEmpty() const
{
    return d->sections.empty();
}

const std::vector<PathSection>& Path::sections() const
{
    return d->sections;
}

std::vector<PathSection>&& Path::takeSections()
{
    d.detach();
    return std::move(d->sections);
}

void Path::setSections(std::vector<PathSection> &&sections)
{
    d.detach();
    d->sections = std::move(sections);
}

int Path::distance() const
{
    return std::accumulate(d->sections.begin(), d->sections.end(), 0, [](int d, const auto &sec) { return d + sec.distance(); });
}

QPointF Path::startPoint() const
{
    return isEmpty() ? QPointF() : d->sections.front().startPoint();
}

QPointF Path::endPoint() const
{
    return isEmpty() ? QPointF() : d->sections.front().endPoint();
}

QJsonObject Path::toJson(const Path &path)
{
    auto obj = Json::toJson(path);
    obj.insert(QLatin1String("sections"), PathSection::toJson(path.sections()));
    return obj;
}

Path Path::fromJson(const QJsonObject &obj)
{
    auto path = Json::fromJson<Path>(obj);
    path.setSections(PathSection::fromJson(obj.value(QLatin1String("sections")).toArray()));
    return path;
}

int Path::sectionCount() const
{
    return d->sections.size();
}

#include "moc_path.cpp"
