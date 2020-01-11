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

#ifndef KPUBLICTRANSPORT_EFABACKEND_H
#define KPUBLICTRANSPORT_EFABACKEND_H

#include "abstractbackend.h"

#include <memory>

namespace KPublicTransport {

class EfaParser;

/** Backend for EFA public transport systems. */
class EfaBackend : public AbstractBackend
{
    Q_GADGET
    /** Base URL for EFA API calls. */
    Q_PROPERTY(QString endpoint MEMBER m_endpoint)
    /** Identifier type used for stations. Default is backendId(). */
    Q_PROPERTY(QString locationIdentifierType MEMBER m_locationIdentifierType)
    /** Backend is using compact XML responses. */
    Q_PROPERTY(bool compactXmlRepsonse MEMBER  m_compactXmlResponse)

public:
    EfaBackend();
    ~EfaBackend();

    Capabilities capabilities() const override;
    bool needsLocationQuery(const Location  &loc, AbstractBackend::QueryType type) const override;
    bool queryLocation(const LocationRequest &request, LocationReply *reply, QNetworkAccessManager *nam) const override;
    bool queryDeparture(const DepartureRequest &request, DepartureReply *reply, QNetworkAccessManager *nam) const override;
    bool queryJourney(const JourneyRequest &request, JourneyReply *reply, QNetworkAccessManager *nam) const override;

private:
    QString locationIdentifierType() const;
    std::unique_ptr<EfaParser> make_parser() const;

    QString m_endpoint;
    QString m_locationIdentifierType;
    bool m_compactXmlResponse = false;
};

}

#endif // KPUBLICTRANSPORT_EFABACKEND_H