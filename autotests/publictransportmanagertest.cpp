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

#include <KPublicTransport/Attribution>
#include <KPublicTransport/Manager>
#include <KPublicTransport/JourneyRequest>
#include <KPublicTransport/JourneyReply>
#include <KPublicTransport/LocationRequest>
#include <KPublicTransport/LocationReply>
#include <KPublicTransport/Location>
#include <KPublicTransport/StopoverReply>
#include <KPublicTransport/StopoverRequest>
#include <KPublicTransport/VehicleLayoutRequest>
#include <KPublicTransport/VehicleLayoutReply>

#include <QSignalSpy>
#include <QTest>

using namespace KPublicTransport;

class PublicTransportManagerTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void initTestCase()
    {
        qputenv("TZ", "UTC");
    }

    void testQueryLocation()
    {
        Manager mgr;
        auto reply = mgr.queryLocation({});
        QVERIFY(reply);
        QSignalSpy spy(reply, &Reply::finished);
        QVERIFY(spy.wait(100));
        QCOMPARE(spy.size(), 1);
        QCOMPARE(reply->error(), Reply::InvalidRequest);
        delete reply;
    }

    void testInvalidQueryJourney_data()
    {
        QTest::addColumn<JourneyRequest>("request");
        QTest::newRow("empty") << JourneyRequest();

        Location loc;
        loc.setCoordinate(52.0, 13.0);
        JourneyRequest req;
        req.setFrom(loc);
        QTest::newRow("only from") << req;

        req.setFrom({});
        req.setTo(loc);
        QTest::newRow("only to") << req;
    }

    void testInvalidQueryJourney()
    {
        QFETCH(JourneyRequest, request);
        Manager mgr;
        auto reply = mgr.queryJourney(request);
        QVERIFY(reply);
        QSignalSpy spy(reply, &Reply::finished);
        QVERIFY(spy.wait(100));
        QCOMPARE(spy.size(), 1);
        QCOMPARE(reply->error(), Reply::InvalidRequest);
        delete reply;
    }

    void testQueryDepartures()
    {
        Manager mgr;
        auto reply = mgr.queryStopover({});
        QVERIFY(reply);
        QSignalSpy spy(reply, &Reply::finished);
        QVERIFY(spy.wait(100));
        QCOMPARE(spy.size(), 1);
        QCOMPARE(reply->error(), Reply::InvalidRequest);
        delete reply;
    }

    void testAttributions()
    {
        Manager mgr;
        QVERIFY(mgr.attributions().size() > 0);
    }

    void testInvalidVehicleLayoutQuery()
    {
        Manager mgr;
        auto reply = mgr.queryVehicleLayout(VehicleLayoutRequest());
        QVERIFY(reply);
        QSignalSpy spy(reply, &Reply::finished);
        QVERIFY(spy.wait(100));
        QCOMPARE(spy.size(), 1);
        QCOMPARE(reply->error(), Reply::InvalidRequest);
        delete reply;
    }
};

QTEST_GUILESS_MAIN(PublicTransportManagerTest)

#include "publictransportmanagertest.moc"
