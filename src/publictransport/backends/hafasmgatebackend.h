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

#ifndef KPUBLICTRANSPORT_HAFASMGATEBACKEND_H
#define KPUBLICTRANSPORT_HAFASMGATEBACKEND_H

#include "abstractbackend.h"

#include <QString>

namespace KPublicTransport {

/** Backend for the Hafas mgate.exe interface. */
class HafasMgateBackend : public AbstractBackend
{
    Q_GADGET
    Q_PROPERTY(QString endpoint MEMBER m_endpoint)
    Q_PROPERTY(QString aid MEMBER m_aid)
    Q_PROPERTY(QString clientId MEMBER m_clientId)
    Q_PROPERTY(QString clientType MEMBER m_clientType)
    Q_PROPERTY(QString version MEMBER m_version)
public:
    HafasMgateBackend();
    bool queryJourney(JourneyReply *reply, QNetworkAccessManager *nam) const override;
    bool queryDeparture(DepartureReply *reply, QNetworkAccessManager *nam) const override;

private:
    QString m_endpoint;
    QString m_aid;
    QString m_clientId;
    QString m_clientType;
    QString m_version;
};

}

#endif // KPUBLICTRANSPORT_HAFASMGATEBACKEND_H
