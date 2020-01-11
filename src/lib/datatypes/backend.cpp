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

#include "backend.h"
#include "datatypes_p.h"

#include <QString>

using namespace KPublicTransport;

namespace KPublicTransport {

class BackendPrivate : public QSharedData {
public:
    QString identifier;
    QString name;
    QString description;
    bool isSecure;
};
}

KPUBLICTRANSPORT_MAKE_GADGET(Backend)
KPUBLICTRANSPORT_MAKE_PROPERTY(Backend, QString, identifier, setIdentifier)
KPUBLICTRANSPORT_MAKE_PROPERTY(Backend, QString, name, setName)
KPUBLICTRANSPORT_MAKE_PROPERTY(Backend, QString, description, setDescription)
KPUBLICTRANSPORT_MAKE_PROPERTY(Backend, bool, isSecure, setIsSecure)

QString Backend::primaryCountryCode() const
{
    if (identifier().size() > 3 && identifier().at(2) == QLatin1Char('_')) {
        return identifier().left(2).toUpper();
    }
    return {};
}

#include "moc_backend.cpp"