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

#include "painterrenderer.h"
#include "view.h"

#include "../scene/scenegraph.h"

#include <QDebug>
#include <QElapsedTimer>
#include <QFontMetricsF>
#include <QGuiApplication>
#include <QPainter>

using namespace KOSMIndoorMap;

PainterRenderer::PainterRenderer() = default;
PainterRenderer::~PainterRenderer() = default;

void PainterRenderer::setPainter(QPainter *painter)
{
    m_painter = painter;
}

void PainterRenderer::render(const SceneGraph &sg, View *view)
{
    QElapsedTimer frameTimer;
    frameTimer.start();

    m_view = view;
    beginRender();
    renderBackground(sg.backgroundColor());

    for (const auto &layerOffsets : sg.layerOffsets()) {
        const auto layerBegin = sg.itemsBegin(layerOffsets);
        const auto layerEnd = sg.itemsEnd(layerOffsets);
        //qDebug() << "rendering layer" << (*layerBegin)->layer;

        // select elements currently in view
        m_renderBatch.clear();
        m_renderBatch.reserve(layerOffsets.second - layerOffsets.first);
        const QRectF screenRect(QPointF(0, 0), QSizeF(m_view->screenWidth(), m_view->screenHeight()));
        for (auto it = layerBegin; it != layerEnd; ++it) {
            if ((*it).payload->inSceneSpace() && m_view->viewport().intersects((*it).payload->boundingRect())) {
                m_renderBatch.push_back((*it).payload.get());
            }
            if ((*it).payload->inHUDSpace()) {
                auto bbox = (*it).payload->boundingRect();
                bbox.moveCenter(m_view->mapSceneToScreen(bbox.center()));
                if (screenRect.intersects(bbox)) {
                    m_renderBatch.push_back((*it).payload.get());
                }
            }
        }

        for (auto phase : {SceneGraphItemPayload::FillPhase, SceneGraphItemPayload::CasingPhase, SceneGraphItemPayload::StrokePhase, SceneGraphItemPayload::LabelPhase}) {
            beginPhase(phase);
            for (const auto item : m_renderBatch) {
                if ((item->renderPhases() & phase) == 0) {
                    continue;
                }

                if (auto i = dynamic_cast<PolygonItem*>(item)) {
                    renderPolygon(i, phase);
                } else if (auto i = dynamic_cast<MultiPolygonItem*>(item)) {
                    renderMultiPolygon(i, phase);
                } else if (auto i = dynamic_cast<PolylineItem*>(item)) {
                    renderPolyline(i, phase);
                } else if (auto i = dynamic_cast<LabelItem*>(item)) {
                    renderLabel(i);
                } else {
                    qCritical() << "Unsupported scene graph item!";
                }
            }
        }
    }

    endRender();
    m_view = nullptr;

    qDebug() << "rendering took:" << frameTimer.elapsed() << "ms for" << sg.items().size() << "items on" << sg.layerOffsets().size() << "layers";
}

void PainterRenderer::beginRender()
{
    m_painter->save();
}

void PainterRenderer::renderBackground(const QColor &bgColor)
{
    m_painter->fillRect(0, 0, m_view->screenWidth(), m_view->screenHeight(), bgColor);
}

void PainterRenderer::beginPhase(SceneGraphItemPayload::RenderPhase phase)
{
    switch (phase) {
        case SceneGraphItemPayload::NoPhase:
            Q_UNREACHABLE();
        case SceneGraphItemPayload::FillPhase:
            m_painter->setPen(Qt::NoPen);
            m_painter->setTransform(m_view->sceneToScreenTransform());
            m_painter->setClipRect(m_view->viewport());
            m_painter->setRenderHint(QPainter::Antialiasing, false);
            break;
        case SceneGraphItemPayload::CasingPhase:
        case SceneGraphItemPayload::StrokePhase:
            m_painter->setBrush(Qt::NoBrush);
            m_painter->setTransform(m_view->sceneToScreenTransform());
            m_painter->setClipRect(m_view->viewport());
            m_painter->setRenderHint(QPainter::Antialiasing, true);
            break;
        case SceneGraphItemPayload::LabelPhase:
            m_painter->setTransform({});
            m_painter->setRenderHint(QPainter::Antialiasing, true);
            break;
    }
}

void PainterRenderer::renderPolygon(PolygonItem *item, SceneGraphItemPayload::RenderPhase phase)
{
    if (phase == SceneGraphItemPayload::FillPhase) {
        m_painter->setBrush(item->brush);
        m_painter->drawPolygon(item->polygon);
    } else {
        auto p = item->pen;
        p.setWidthF(mapToSceneWidth(item->pen.widthF(), item->penWidthUnit));
        m_painter->setPen(p);
        m_painter->drawPolygon(item->polygon);
    }
}

void PainterRenderer::renderMultiPolygon(MultiPolygonItem *item, SceneGraphItemPayload::RenderPhase phase)
{
    if (phase == SceneGraphItemPayload::FillPhase) {
        m_painter->setBrush(item->brush);
        m_painter->drawPath(item->path);
    } else {
        auto p = item->pen;
        p.setWidthF(mapToSceneWidth(item->pen.widthF(), item->penWidthUnit));
        m_painter->setPen(p);
        m_painter->drawPath(item->path);
    }
}

void PainterRenderer::renderPolyline(PolylineItem *item, SceneGraphItemPayload::RenderPhase phase)
{
    if (phase == SceneGraphItemPayload::StrokePhase) {
        auto p = item->pen;
        p.setWidthF(mapToSceneWidth(item->pen.widthF(), item->penWidthUnit));
        m_painter->setPen(p);
        m_painter->drawPolyline(item->path);
    } else {
        auto p = item->casingPen;
        p.setWidthF(mapToSceneWidth(item->pen.widthF(), item->penWidthUnit) + mapToSceneWidth(item->casingPen.widthF(), item->casingPenWidthUnit));
        m_painter->setPen(p);
        m_painter->drawPolyline(item->path);
    }
}

void PainterRenderer::renderLabel(LabelItem *item)
{
    if (!item->hasFineBbox) {
        if (!item->text.isEmpty()) {
            QFontMetricsF fm(item->font);
            item->bbox = fm.boundingRect(item->text);
        } else {
            item->bbox = QRectF();
        }

        if (!item->icon.isNull()) {
            item->bbox = item->bbox.united(QRectF(QPointF(0.0, 0.0), item->iconSize));
        }

        item->bbox.moveCenter(item->pos);
        item->hasFineBbox = true;
    }

    m_painter->save();
    m_painter->translate(m_view->mapSceneToScreen(item->pos));
    m_painter->rotate(item->angle);

    auto box = item->bbox;
    box.moveCenter({0.0, item->offset});

    // draw shield
    // @see https://wiki.openstreetmap.org/wiki/MapCSS/0.2#Shield_properties
    auto w = item->casingWidth + item->frameWidth + 2.0;
    if (item->casingWidth > 0.0 && item->casingColor.alpha() > 0) {
        m_painter->fillRect(box.adjusted(-w, -w, w, w), item->casingColor);
    }
    w -= item->casingWidth;
    if (item->frameWidth > 0.0 && item->frameColor.alpha() > 0) {
        m_painter->fillRect(box.adjusted(-w, -w, w, w), item->frameColor);
    }
    w -= item->frameWidth;
    if (item->shieldColor.alpha() > 0) {
        m_painter->fillRect(box.adjusted(-w, -w, w, w), item->shieldColor);
    }

    // draw icon
    if (!item->icon.isNull()) {
        QRectF iconRect(QPointF(0.0, 0.0), item->iconSize);
        iconRect.moveCenter(QPointF(0.0, 0.0));
        item->icon.paint(m_painter, iconRect.toRect());
    }

    // draw text
    if (!item->text.isEmpty()) {
        m_painter->setPen(item->color);
        m_painter->setFont(item->font);
        m_painter->drawText(box.bottomLeft() - QPointF(0, QFontMetricsF(item->font).descent()), item->text);
    }

    m_painter->restore();
}

void PainterRenderer::endRender()
{
    m_painter->restore();
}

double PainterRenderer::mapToSceneWidth(double width, Unit unit) const
{
    switch (unit) {
        case Unit::Pixel:
            return m_view->mapScreenDistanceToSceneDistance(width);
        case Unit::Meter:
            return m_view->mapMetersToScene(width);
    }

    return width;
}
