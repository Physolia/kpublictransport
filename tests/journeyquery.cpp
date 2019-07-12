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

#include <KPublicTransport/Journey>
#include <KPublicTransport/JourneyReply>
#include <KPublicTransport/JourneyRequest>
#include <KPublicTransport/JourneyQueryModel>
#include <KPublicTransport/Line>
#include <KPublicTransport/Location>
#include <KPublicTransport/Manager>

#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QApplication>
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QIdentityProxyModel>
#include <QJsonArray>
#include <QJsonDocument>
#include <QLocale>
#include <QUrl>

using namespace KPublicTransport;

class JourneyQueryProxyModel : public QIdentityProxyModel
{
public:
    JourneyQueryProxyModel(QObject *parent) : QIdentityProxyModel(parent) {}
    QVariant data(const QModelIndex &index, int role) const override
    {
        if (role == Qt::DisplayRole) {
            const auto j = index.data(JourneyQueryModel::JourneyRole).value<Journey>();
            return QString(QLocale().toString(j.scheduledDepartureTime(), QLocale::ShortFormat) + QLatin1String(" (") +
                QString::number(j.duration()/60) + QLatin1String("min) - ") + QString::number(j.numberOfChanges()) + QLatin1String(" change(s)"));
        }
        return QIdentityProxyModel::data(index, role);
    }
};

class QueryManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QAbstractItemModel* model MEMBER journeyQueryModel CONSTANT)
    Q_PROPERTY(QAbstractItemModel* titleModel MEMBER journeyProxyModel CONSTANT)
public:
    QueryManager(QObject *parent = nullptr)
        : QObject(parent)
        , journeyQueryModel(new JourneyQueryModel(this))
        , journeyProxyModel(new JourneyQueryProxyModel(this))
    {
        journeyQueryModel->setManager(&ptMgr);
        journeyProxyModel->setSourceModel(journeyQueryModel);
    }

    Q_INVOKABLE void findJourney(const QString &fromName, double fromLat, double fromLon, const QString &toName, double toLat, double toLon, bool direction)
    {
        Location from;
        from.setName(fromName);
        from.setCoordinate(fromLat, fromLon);
        Location to;
        to.setName(toName);
        to.setCoordinate(toLat, toLon);

        JourneyRequest request(from, to);
        if (direction) {
            request.setArrivalTime(QDateTime::currentDateTime().addSecs(2 * 3600));
        }

        journeyQueryModel->setJourneyRequest(request);
    }

    Q_INVOKABLE void setAllowInsecure(bool insecure)
    {
        ptMgr.setAllowInsecureBackends(insecure);
    }

    Q_INVOKABLE void saveTo(const QUrl &fileName)
    {
        QFile f(fileName.toLocalFile());
        if (!f.open(QFile::WriteOnly)) {
            qWarning() << f.errorString() << fileName;
            return;
        }
        f.write(QJsonDocument(Journey::toJson(journeyQueryModel->journeys())).toJson());
    }

private:
    Manager ptMgr;
    JourneyQueryModel *journeyQueryModel;
    JourneyQueryProxyModel *journeyProxyModel;
};

int main(int argc, char **argv)
{
    QCoreApplication::setApplicationName(QStringLiteral("journeyquery"));
    QCoreApplication::setOrganizationName(QStringLiteral("KDE"));
    QCoreApplication::setOrganizationDomain(QStringLiteral("kde.org"));

    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QApplication app(argc, argv);

    QueryManager mgr;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty(QStringLiteral("_queryMgr"), &mgr);
    engine.load(QStringLiteral("qrc:/journeyquery.qml"));
    return app.exec();
}

#include "journeyquery.moc"
