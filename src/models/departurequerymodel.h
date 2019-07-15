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

#ifndef KPUBLICTRANSPORT_DEPARTUREQUERYMODEL_H
#define KPUBLICTRANSPORT_DEPARTUREQUERYMODEL_H

#include "kpublictransport_export.h"

#include <QAbstractListModel>

#include <memory>
#include <vector>

namespace KPublicTransport {

class Attribution;
class Departure;
class DepartureQueryModelPrivate;
class DepartureRequest;
class Manager;

/**
 * Model representing arrival or departure query results.
 * This takes care of dynamically updating as results arrive from different
 * backends, including merging them, as well as providing a way to search
 * for earlier/later arrivals/departures for the initial request.
 */
class KPUBLICTRANSPORT_EXPORT DepartureQueryModel : public QAbstractListModel
{
    Q_OBJECT

    /** @c true if there is still an ongoing network operation. */
    Q_PROPERTY(bool loading READ isLoading NOTIFY loadingChanged)
    /** Contains the error message if all backends failed to provide a result. */
    Q_PROPERTY(QString errorMessage READ errorMessage NOTIFY errorMessageChanged)

    /** Whether querying for later departures is possible. */
    Q_PROPERTY(bool canQueryNext READ canQueryNext NOTIFY canQueryPrevNextChanged)
    /** Whether querying for earlier journey is possible. */
    Q_PROPERTY(bool canQueryPrevious READ canQueryPrevious NOTIFY canQueryPrevNextChanged)

    /** Attributions for the provided data. */
    Q_PROPERTY(QVariantList attributions READ attributionsVariant NOTIFY attributionsChanged)

public:
    explicit DepartureQueryModel(QObject *parent = nullptr);
    ~DepartureQueryModel();

    /** Sets the KPublicTransport::Manager instance. Necessary for this to work at all. */
    void setManager(Manager *mgr);
    /** Specify the actual departure query. */
    void setRequest(const DepartureRequest &req);

    bool isLoading() const;
    QString errorMessage() const;

    bool canQueryNext() const;
    /** Search for later journeys.
     *  Has no effect if canQueryNext() returns @c false.
     */
    Q_INVOKABLE void queryNext();

    bool canQueryPrevious() const;
    /** Search for earlier journeys.
     *  Has no effect if canQueryPrevious() returns @c false.
     */
    Q_INVOKABLE void queryPrevious();

    enum Roles {
        DepartureRole = Qt::UserRole
    };

    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

    /** The current model content. */
    const std::vector<Departure>& departures() const;
    /** The attribution information for the current model content. */
    const std::vector<Attribution>& attributions() const;

Q_SIGNALS:
    void loadingChanged();
    void errorMessageChanged();
    void canQueryPrevNextChanged();
    void attributionsChanged();

private:
    Q_DECL_HIDDEN QVariantList attributionsVariant() const;

    friend class DepartureQueryModelPrivate;
    std::unique_ptr<DepartureQueryModelPrivate> d;
};

}

#endif // KPUBLICTRANSPORT_DEPARTUREQUERYMODEL_H
