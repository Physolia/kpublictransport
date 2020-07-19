/*
    SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef KOSMINDOORMAP_PLATFORMMODEL_H
#define KOSMINDOORMAP_PLATFORMMODEL_H

#include <osm/element.h>

#include <QAbstractListModel>

namespace KOSMIndoorMap {

class MapData;

/** A railway platform/track. */
struct Platform {
    OSM::Element element;
    QString name;
    int level = 0;
    enum Mode {
        Rail,
        Subway,
        Tram,
        Bus,
    };
    Mode mode;
};

/** A railway platform section. */
struct PlatformSection {
    // TODO
};

/** Lists all platforms/tracks and platform sections found in the current map. */
class PlatformModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(const KOSMIndoorMap::MapData* mapData READ mapData WRITE setMapData NOTIFY mapDataChanged)

public:
    explicit PlatformModel(QObject *parent = nullptr);
    ~PlatformModel();

    const MapData* mapData() const;
    void setMapData(const MapData *data);

    enum Role {
        CoordinateRole = Qt::UserRole,
        LevelRole,
    };

    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

Q_SIGNALS:
    void mapDataChanged();

private:
    void populateModel();
    void addPlatform(Platform &&platform);

    std::vector<Platform> m_platforms;
    const MapData *m_data = nullptr;
    bool m_searchDone = false;
};

}

#endif // KOSMINDOORMAP_PLATFORMMODEL_H