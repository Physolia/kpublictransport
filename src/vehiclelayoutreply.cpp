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

#include "vehiclelayoutreply.h"
#include "reply_p.h"
#include "vehiclelayoutrequest.h"
#include "logging.h"
#include "backends/abstractbackend.h"
#include "backends/cache.h"

#include <KPublicTransport/Departure>
#include <KPublicTransport/Platform>
#include <KPublicTransport/Vehicle>

#include <QDebug>

using namespace KPublicTransport;

namespace KPublicTransport {
class VehicleLayoutReplyPrivate: public ReplyPrivate {
public:
    void finalizeResult() override {}

    VehicleLayoutRequest request;
    Vehicle vehicle;
    Platform platform;
    Departure departure;
};
}

VehicleLayoutReply::VehicleLayoutReply(const VehicleLayoutRequest &req, QObject *parent)
    : Reply(new VehicleLayoutReplyPrivate, parent)
{
    Q_D(VehicleLayoutReply);
    d->request = req;
}

VehicleLayoutReply::~VehicleLayoutReply() = default;

VehicleLayoutRequest VehicleLayoutReply::request() const
{
    Q_D(const VehicleLayoutReply);
    return d->request;
}

Vehicle VehicleLayoutReply::vehicle() const
{
    Q_D(const VehicleLayoutReply);
    return d->vehicle;
}

Platform VehicleLayoutReply::platoform() const
{
    Q_D(const VehicleLayoutReply);
    return d->platform;
}

Departure VehicleLayoutReply::departure() const
{
    Q_D(const VehicleLayoutReply);
    return d->departure;
}

void VehicleLayoutReply::addResult(const Vehicle &vehicle, const Platform &platoform, const Departure &departure)
{
    Q_D(VehicleLayoutReply);
    d->vehicle = vehicle;
    d->platform = platoform;
    d->departure = departure;

    d->pendingOps--;
    d->emitFinishedIfDone(this);
}

void VehicleLayoutReply::addError(const AbstractBackend *backend, Reply::Error error, const QString &errorMsg)
{
    if (error == Reply::NotFoundError) {
        // TODO add negative cache entry
    } else {
        qCDebug(Log) << backend->backendId() << error << errorMsg;
    }
    Reply::addError(error, errorMsg);
}