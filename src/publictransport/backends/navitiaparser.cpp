/*
    Copyright (C) 2018 Volker Krause <vkrause@kde.org>

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

#include "navitiaparser.h"

#include <KPublicTransport/Journey>

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

using namespace KPublicTransport;

static Location parseLocation(const QJsonObject &obj)
{
    Location loc;
    // TODO parse more fields

    const auto embObj = obj.value(obj.value(QLatin1String("embedded_type")).toString()).toObject();
    const auto coord = embObj.value(QLatin1String("coord")).toObject();
    loc.setCoordinate(coord.value(QLatin1String("lat")).toString().toDouble(), coord.value(QLatin1String("lon")).toString().toDouble());

    return loc;
}

static JourneySection parseJourneySection(const QJsonObject &obj)
{
    const auto displayInfo = obj.value(QLatin1String("display_informations")).toObject();

    Line line;
    line.setName(displayInfo.value(QLatin1String("label")).toString());
    // TODO parse colors

    Route route;
    route.setDirection(displayInfo.value(QLatin1String("direction")).toString());
    route.setLine(line);

    JourneySection section;
    section.setRoute(route);
    section.setDepartureTime(QDateTime::fromString(obj.value(QLatin1String("departure_date_time")).toString(), QStringLiteral("yyyyMMddTHHmmss")));
    section.setArrivalTime(QDateTime::fromString(obj.value(QLatin1String("arrival_date_time")).toString(), QStringLiteral("yyyyMMddTHHmmss")));
    section.setFrom(parseLocation(obj.value(QLatin1String("from")).toObject()));
    section.setTo(parseLocation(obj.value(QLatin1String("to")).toObject()));
    return section;
}

static Journey parseJourney(const QJsonObject &obj)
{
    Journey journey;

    const auto secArray = obj.value(QLatin1String("sections")).toArray();
    std::vector<JourneySection> sections;
    sections.reserve(secArray.size());
    for (const auto &v : secArray) {
        sections.push_back(parseJourneySection(v.toObject()));
    }
    journey.setSections(std::move(sections));
    return journey;
}

std::vector<Journey> NavitiaParser::parseJourneys(const QByteArray &data)
{
    const auto topObj = QJsonDocument::fromJson(data).object();
    const auto journeys = topObj.value(QLatin1String("journeys")).toArray();

    std::vector<Journey> res;
    res.reserve(journeys.size());

    for (const auto &v : journeys) {
        res.push_back(parseJourney(v.toObject()));
    }

    return res;
}
