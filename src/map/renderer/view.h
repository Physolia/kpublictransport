/*
    Copyright (C) 2020 Volker Krause <vkrause@kde.org>

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

#ifndef KOSMINDOORMAP_VIEW_H
#define KOSMINDOORMAP_VIEW_H

#include <osm/datatypes.h>

#include <QRectF>
#include <QSize>

class QTransform;

namespace KOSMIndoorMap {

/** View transformations and tranformation manipulation.
 *  There are three different coordinate systems involved here:
 *  - The geographic world coordinates of the OSM input data.
 *    This uses OSM::Coordinate.
 *  - The scene coordinates which have a the Web Mercator projection applied (see https://en.wikipedia.org/wiki/Mercator_projection).
 *    This uses QPointF ranging from 0x0 to 256x256
 *  - The screen coordinates (ie. visible pixels on screen).
 *    This uses QPoint.
 */
class View
{
public:
    explicit View();
    ~View();

    /** Map a geographic coordinate to a scene coordinate, ie. apply the mercator projection. */
    QPointF mapGeoToScene(OSM::Coordinate coord) const;
    QRectF mapGeoToScene(OSM::BoundingBox box) const;

    /** Screen-space sizes, ie the size of the on-screen area used for displaying. */
    int screenWidth() const;
    int screenHeight() const;
    void setScreenSize(QSize size);

    /** The transformation to apply to scene coordinate to get to the view on screen. */
    QTransform sceneToScreenTransform() const;

    /** The (floor) level to display. */
    QString level() const;
    void setLevel(const QString &level);

    /** OSM-compatible zoom level, ie. the 2^level-th subdivision of the scene space. */
    double zoomLevel() const;

    /** The sub-rect of the scene bounding box currently displayed.
     *  Specified in scene coordinates.
     */
    QRectF viewport() const;
    void setViewport(const QRectF &viewport);

    /** The bounding box of the scene.
     *  The viewport cannot exceed this area.
     */
    void setSceneBoundingBox(OSM::BoundingBox bbox);
    void setSceneBoundingBox(const QRectF &bbox);

    /** Converts a point in scene coordinates to screen coordinates. */
    QPointF mapSceneToScreen(QPointF scenePos) const;
    QPointF mapScreenToScene(QPointF screenPos) const;

    void panScreenSpace(QPoint offset);
    void zoomIn(QPointF center);
    void zoomOut(QPointF center);

private:
    /** Ensure we stay within the bounding box with the viewport, call after viewport modification. */
    void constrainViewToScene();

    QRectF m_bbox;
    QRectF m_viewport;
    QSize m_screenSize;
    QString m_level;
};

}

#endif // KOSMINDOORMAP_VIEW_H
