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

#include "departurereply.h"
#include "departurerequest.h"
#include "logging.h"
#include "reply_p.h"
#include "requestcontext_p.h"
#include "backends/abstractbackend.h"
#include "backends/cache.h"
#include "datatypes/departureutil_p.h"

#include <KPublicTransport/Departure>

#include <QNetworkReply>

using namespace KPublicTransport;

namespace KPublicTransport {
class DepartureReplyPrivate : public ReplyPrivate {
public:
    void finalizeResult() override;

    DepartureRequest request;
    DepartureRequest nextRequest;
    DepartureRequest prevRequest;
    std::vector<Departure> result;
};
}

void DepartureReplyPrivate::finalizeResult()
{
    if (result.empty()) {
        return;
    }
    error = Reply::NoError;
    errorMsg.clear();

    std::sort(result.begin(), result.end(), [this](const auto &lhs, const auto &rhs) {
            return DepartureUtil::timeLessThan(request, lhs, rhs);
    });

    for (auto it = result.begin(); it != result.end(); ++it) {
        for (auto mergeIt = it + 1; mergeIt != result.end();) {
            if (!DepartureUtil::timeEqual(request, (*it), (*mergeIt))) {
                break;
            }

            if (Departure::isSame(*it, *mergeIt)) {
                *it = Departure::merge(*it, *mergeIt);
                mergeIt = result.erase(mergeIt);
            } else {
                ++mergeIt;
            }
        }
    }

    nextRequest.purgeLoops(request);
    prevRequest.purgeLoops(request);
}

DepartureReply::DepartureReply(const DepartureRequest &req, QObject *parent)
    : Reply(new DepartureReplyPrivate, parent)
{
    Q_D(DepartureReply);
    d->request = req;
    d->nextRequest = req;
    d->prevRequest = req;
}

DepartureReply::~DepartureReply() = default;

DepartureRequest DepartureReply::request() const
{
    Q_D(const DepartureReply);
    return d->request;
}

const std::vector<Departure>& DepartureReply::result() const
{
    Q_D(const DepartureReply);
    return d->result;
}

std::vector<Departure>&& DepartureReply::takeResult()
{
    Q_D(DepartureReply);
    return std::move(d->result);
}

void DepartureReply::addResult(const AbstractBackend *backend, std::vector<Departure> &&res)
{
    Q_D(DepartureReply);
    // update context for next/prev requests
    // do this first, before res gets moved from below
    if (d->request.mode() == DepartureRequest::QueryDeparture && !res.empty()) {
        // we create a context for later queries here in any case, since we can emulate that generically without backend support
        auto context = d->nextRequest.context(backend);
        context.type = RequestContext::Next;
        for (const auto &dep : res) {
            context.dateTime = std::max(context.dateTime, dep.scheduledDepartureTime());
        }
        d->nextRequest.setContext(backend, std::move(context));
    }

    // if this is a backend with a static timezone, apply this to the result
    if (backend->timeZone().isValid()) {
        for (auto &dep : res) {
            DepartureUtil::applyTimeZone(dep, backend->timeZone());
        }
    }

    // cache negative hits, positive ones are too short-lived
    if (res.empty()) {
        Cache::addNegativeDepartureCacheEntry(backend->backendId(), request().cacheKey());
    }

    if (d->result.empty()) {
        d->result = std::move(res);
    } else {
        d->result.insert(d->result.end(), res.begin(), res.end());
    }

    d->pendingOps--;
    d->emitUpdated(this);
    d->emitFinishedIfDone(this);
}

DepartureRequest DepartureReply::nextRequest() const
{
    Q_D(const DepartureReply);
    if (d->nextRequest.contexts().empty()) {
        return {};
    }
    return d->nextRequest;
}

DepartureRequest DepartureReply::previousRequest() const
{
    Q_D(const DepartureReply);
    if (d->prevRequest.contexts().empty()) {
        return {};
    }
    return d->prevRequest;
}

void DepartureReply::setNextContext(const AbstractBackend *backend, const QVariant &data)
{
    Q_D(DepartureReply);
    auto context = d->nextRequest.context(backend);
    context.type = RequestContext::Next;
    context.backendData = data;
    d->nextRequest.setContext(backend, std::move(context));
}

void DepartureReply::setPreviousContext(const AbstractBackend *backend, const QVariant &data)
{
    Q_D(DepartureReply);
    auto context = d->prevRequest.context(backend);
    context.type = RequestContext::Previous;
    context.backendData = data;
    d->prevRequest.setContext(backend, std::move(context));
}

void DepartureReply::addError(const AbstractBackend *backend, Reply::Error error, const QString &errorMsg)
{
    if (error == Reply::NotFoundError) {
        Cache::addNegativeDepartureCacheEntry(backend->backendId(), request().cacheKey());
    } else {
        qCDebug(Log) << backend->backendId() << error << errorMsg;
    }
    Reply::addError(error, errorMsg);
}