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

#ifndef KPUBLICTRANSPORT_DEPARTURE_H
#define KPUBLICTRANSPORT_DEPARTURE_H

#include "datatypes.h"
#include "disruption.h"
#include "line.h"
#include "location.h"

class QDateTime;

namespace KPublicTransport {

class DeparturePrivate;

/** Information about an arrival and/or departure of a vehicle at a stop area. */
class KPUBLICTRANSPORT_EXPORT Departure
{
    KPUBLICTRANSPORT_GADGET(Departure)

    /** Planned arrival time. */
    KPUBLICTRANSPORT_PROPERTY(QDateTime, scheduledArrivalTime, setScheduledArrivalTime)
    /** Actual arrival time, if available.
     *  Set to invalid to indicate real-time data is not available.
     */
    KPUBLICTRANSPORT_PROPERTY(QDateTime, expectedArrivalTime, setExpectedArrivalTime)
    /** @c true if this has real-time data. */
    Q_PROPERTY(bool hasExpectedArrivalTime READ hasExpectedArrivalTime STORED false)
    /** Difference to schedule in minutes. */
    Q_PROPERTY(int arrivalDelay READ arrivalDelay STORED false)

    /** Planned departure time. */
    KPUBLICTRANSPORT_PROPERTY(QDateTime, scheduledDepartureTime, setScheduledDepartureTime)
    /** Actual departure time, if available.
     *  Set to invalid to indicate real-time data is not available.
     */
    KPUBLICTRANSPORT_PROPERTY(QDateTime, expectedDepartureTime, setExpectedDepartureTime)
    /** @c true if this has real-time data. */
    Q_PROPERTY(bool hasExpectedDepartureTime READ hasExpectedDepartureTime STORED false)
    /** Difference to schedule in minutes. */
    Q_PROPERTY(int departureDelay READ departureDelay STORED false)

    /** Planned departure platform. */
    KPUBLICTRANSPORT_PROPERTY(QString, scheduledPlatform, setScheduledPlatform)
    /** Actual departure platform, in case real-time information are available. */
    KPUBLICTRANSPORT_PROPERTY(QString, expectedPlatform, setExpectedPlatform)
    /** @c true if real-time platform information are available. */
    Q_PROPERTY(bool hasExpectedPlatform READ hasExpectedPlatform STORED false)
    /** @c true if we have real-time platform information and the platform changed. */
    Q_PROPERTY(bool platformChanged READ platformChanged STORED false)

    /** The departing route. */
    KPUBLICTRANSPORT_PROPERTY(KPublicTransport::Route, route, setRoute)

    /** The stop point of this departure. */
    KPUBLICTRANSPORT_PROPERTY(KPublicTransport::Location, stopPoint, setStopPoint)

    /** Disruption effect on this arrival or departure, if any. */
    KPUBLICTRANSPORT_PROPERTY(KPublicTransport::Disruption::Effect, disruptionEffect, setDisruptionEffect)
    /** General human-readable notes on this service, e.g. details about a disruption. */
    KPUBLICTRANSPORT_PROPERTY(QStringList, notes, setNotes)

public:
    bool hasExpectedArrivalTime() const;
    int arrivalDelay() const;
    bool hasExpectedDepartureTime() const;
    int departureDelay() const;
    bool hasExpectedPlatform() const;
    bool platformChanged() const;

    /** Adds a note. This will check for duplicates and normalize the notes. */
    void addNote(const QString &note);
    void addNotes(const QStringList &notes);

    /** Checks if to instances refer to the same departure (which does not necessarily mean they are exactly equal). */
    static bool isSame(const Departure &lhs, const Departure &rhs);

    /** Merge two departure instances.
     *  This assumes isSame(lhs, rhs) and tries to preserve the most detailed information.
     */
    static Departure merge(const Departure &lhs, const Departure &rhs);

    /** Serializes one object to JSON. */
    static QJsonObject toJson(const Departure &dep);
    /** Serializes a vector of departure objects to JSON. */
    static QJsonArray toJson(const std::vector<Departure> &deps);
    /** Deserialize an object from JSON. */
    static Departure fromJson(const QJsonObject &obj);
};

}

Q_DECLARE_METATYPE(KPublicTransport::Departure)

#endif // KPUBLICTRANSPORT_DEPARTURE_H
