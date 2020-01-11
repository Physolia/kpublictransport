/*
    Copyright (C) 2019 Volker Krause <vkrause@kde.org>

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

#include "locationutil_p.h"

#include <KPublicTransport/Location>
#include <KPublicTransport/LocationRequest>

#include <cmath>

using namespace KPublicTransport;

bool LocationUtil::sortLessThan(const LocationRequest &request, const Location &lhs, const Location &rhs)
{
    if (request.hasCoordinate()) {
        return Location::distance(request.latitude(), request.longitude(), lhs.latitude(), lhs.longitude())
             < Location::distance(request.latitude(), request.longitude(), rhs.latitude(), rhs.longitude());
    }
    // for name based search, sort by Levenshtein distance or similar metric
    // TODO so far this only sorts for matching or not matching
    const auto lhsSame = Location::isSameName(request.name(), lhs.name());
    const auto rhsSame = Location::isSameName(request.name(), rhs.name());

    if (lhsSame == rhsSame) {
        return lhs.name().compare(rhs.name(), Qt::CaseInsensitive) < 0;
    }

    return lhsSame && !rhsSame;
}

QString LocationUtil::cacheKey(const QString &name, float lat, float lon)
{
    QString normalizedName;
    normalizedName.reserve(name.size());
    for (const auto c : qAsConst(name)) {
        if (c.isLetter() || c.isDigit()) {
            normalizedName.push_back(c.toCaseFolded());
        }
    }

    if (!std::isnan(lat) && !std::isnan(lon)) {
        return QString::number((int)(lat * 1000000)) + QLatin1Char('x') + QString::number((int)(lon * 1000000))
            + QLatin1Char('_') + normalizedName;
    }

    return QLatin1String("nanxnan_") + normalizedName;
}