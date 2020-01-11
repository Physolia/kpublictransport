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

#include "locationrequest.h"
#include "datatypes/json_p.h"
#include "datatypes/locationutil_p.h"

#include <QSharedData>
#include <QStringList>

#include <cmath>

using namespace KPublicTransport;

namespace KPublicTransport {
class LocationRequestPrivate : public QSharedData {
public:
    QString name;
    float lat = NAN;
    float lon = NAN;
    QStringList backendIds;
};
}

LocationRequest::LocationRequest()
    : d(new LocationRequestPrivate)
{
}

LocationRequest::LocationRequest(LocationRequest&&) noexcept = default;
LocationRequest::LocationRequest(const LocationRequest&) = default;
LocationRequest::~LocationRequest() = default;
LocationRequest& LocationRequest::operator=(const LocationRequest&) = default;

bool LocationRequest::isValid() const
{
    return hasCoordinate() || !d->name.isEmpty();
}

float LocationRequest::latitude() const
{
    return d->lat;
}

void LocationRequest::setLatitude(float lat)
{
    d.detach();
    d->lat = lat;
}

float LocationRequest::longitude() const
{
    return d->lon;
}

void LocationRequest::setLongitude(float lon)
{
    d.detach();
    d->lon = lon;
}

void LocationRequest::setCoordinate(float lat, float lon)
{
    d.detach();
    d->lat = lat;
    d->lon = lon;
}

bool LocationRequest::hasCoordinate() const
{
    return !std::isnan(d->lat) && !std::isnan(d->lon);
}

QString LocationRequest::name() const
{
    return d->name;
}

void LocationRequest::setName(const QString &name)
{
    d->name = name;
}

QString LocationRequest::cacheKey() const
{
    return LocationUtil::cacheKey(d->name, d->lat, d->lon);
}

QJsonObject LocationRequest::toJson(const LocationRequest &req)
{
    return Json::toJson(req);
}

QStringList LocationRequest::backendIds() const
{
    return d->backendIds;
}

void LocationRequest::setBackendIds(const QStringList &backendIds)
{
    d.detach();
    d->backendIds = backendIds;
}