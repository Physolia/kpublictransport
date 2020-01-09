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

#include "opentripplannerbackend.h"
#include "opentripplannerparser.h"

#include <KPublicTransport/DepartureReply>
#include <KPublicTransport/DepartureRequest>
#include <KPublicTransport/JourneyReply>
#include <KPublicTransport/JourneyRequest>
#include <KPublicTransport/Location>
#include <KPublicTransport/LocationReply>
#include <KPublicTransport/LocationRequest>

#include <kgraphql.h>

#include <QDebug>
#include <QUrl>

using namespace KPublicTransport;

OpenTripPlannerBackend::OpenTripPlannerBackend() = default;
OpenTripPlannerBackend::~OpenTripPlannerBackend() = default;

AbstractBackend::Capabilities OpenTripPlannerBackend::capabilities() const
{
    return m_endpoint.startsWith(QLatin1String("https://")) ? Secure : NoCapability;
}

bool OpenTripPlannerBackend::needsLocationQuery(const Location &loc, AbstractBackend::QueryType type) const
{
    Q_UNUSED(type);
    return !loc.hasCoordinate();
}

bool OpenTripPlannerBackend::queryLocation(const LocationRequest &req, LocationReply *reply, QNetworkAccessManager *nam) const
{
    KGraphQLRequest gqlReq(QUrl(m_endpoint + QLatin1String("index/graphql")));

    if (req.hasCoordinate()) {
        gqlReq.setQueryFromFile(QStringLiteral(":/org.kde.kpublictransport/otp/stationByCoordinate.graphql"));
        gqlReq.setVariable(QStringLiteral("lat"), req.latitude());
        gqlReq.setVariable(QStringLiteral("lon"), req.longitude());
    } else {
        gqlReq.setQueryFromFile(QStringLiteral(":/org.kde.kpublictransport/otp/stationByName.graphql"));
        gqlReq.setVariable(QStringLiteral("name"), req.name());
    }

    if (isLoggingEnabled()) {
        logRequest(req, gqlReq.networkRequest(), gqlReq.rawData());
    }
    KGraphQL::query(gqlReq, nam, [this, reply](const KGraphQLReply &gqlReply) {
        logReply(reply, gqlReply.networkReply(), gqlReply.rawData());
        if (gqlReply.error() != KGraphQLReply::NoError) {
            addError(reply, this, Reply::NetworkError, gqlReply.errorString());
            return;
        }
        // TODO
        qDebug() << backendId() << gqlReply.data();
        addError(reply, this, Reply::NetworkError, {});
    });

    return true;
}

bool OpenTripPlannerBackend::queryDeparture(const DepartureRequest &req, DepartureReply *reply, QNetworkAccessManager *nam) const
{
    KGraphQLRequest gqlReq(QUrl(m_endpoint + QLatin1String("index/graphql")));
    gqlReq.setQueryFromFile(QStringLiteral(":/org.kde.kpublictransport/otp/departure.graphql"));
    gqlReq.setVariable(QStringLiteral("lat"), req.stop().latitude());
    gqlReq.setVariable(QStringLiteral("lon"), req.stop().longitude());
    gqlReq.setVariable(QStringLiteral("startTime"), req.dateTime().toSecsSinceEpoch()); // TODO timezone conversion?
    // TODO arrival/departure selection?

    if (isLoggingEnabled()) {
        logRequest(req, gqlReq.networkRequest(), gqlReq.rawData());
    }
    KGraphQL::query(gqlReq, nam, [this, reply](const KGraphQLReply &gqlReply) {
        logReply(reply, gqlReply.networkReply(), gqlReply.rawData());
        if (gqlReply.error() != KGraphQLReply::NoError) {
            addError(reply, this, Reply::NetworkError, gqlReply.errorString());
        } else {
            addResult(reply, this, OpenTripPlannerParser::parseDepartures(gqlReply.data()));
        }
    });

    return true;
}

bool OpenTripPlannerBackend::queryJourney(const JourneyRequest &req, JourneyReply *reply, QNetworkAccessManager *nam) const
{
    KGraphQLRequest gqlReq(QUrl(m_endpoint + QLatin1String("index/graphql")));
    gqlReq.setQueryFromFile(QStringLiteral(":/org.kde.kpublictransport/otp/journey.graphql"));
    gqlReq.setVariable(QStringLiteral("fromLat"), req.from().latitude());
    gqlReq.setVariable(QStringLiteral("fromLon"), req.from().longitude());
    gqlReq.setVariable(QStringLiteral("toLat"), req.to().latitude());
    gqlReq.setVariable(QStringLiteral("toLon"), req.to().longitude());
    gqlReq.setVariable(QStringLiteral("date"), req.dateTime().date().toString(QStringLiteral("yyyy-MM-dd")));
    gqlReq.setVariable(QStringLiteral("time"), req.dateTime().time().toString(QStringLiteral("hh:mm:ss"))); // TODO timezone conversion?
    gqlReq.setVariable(QStringLiteral("arriveBy"), req.dateTimeMode() == JourneyRequest::Arrival);

    if (isLoggingEnabled()) {
        logRequest(req, gqlReq.networkRequest(), gqlReq.rawData());
    }
    KGraphQL::query(gqlReq, nam, [this, reply](const KGraphQLReply &gqlReply) {
        logReply(reply, gqlReply.networkReply(), gqlReply.rawData());
        if (gqlReply.error() != KGraphQLReply::NoError) {
            addError(reply, this, Reply::NetworkError, gqlReply.errorString());
        } else {
            addResult(reply, this, OpenTripPlannerParser::parseJourneys(gqlReply.data()));
        }
    });

    return true;
}
