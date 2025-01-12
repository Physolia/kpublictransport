/*
    SPDX-FileCopyrightText: 2021 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

import QtQuick 2.5
import QtQuick.Layouts 1.1
import QtQuick.Controls 2.1 as QQC2
import org.kde.kirigami 2.12 as Kirigami
import org.kde.kpublictransport 1.0

Kirigami.ScrollablePage {
    property alias path: pathModel.path

    Component {
        id: pathDelegate
        Kirigami.AbstractListItem {
            highlighted: false
            property var section: model.section
            GridLayout {
                rows: 2
                columns: 4

                QQC2.Label {
                    Layout.row: 0
                    Layout.column: 0
                    Layout.rowSpan: 2
                    text: {
                        switch (section.maneuver) {
                            case PathSection.Stairs:
                                return "🪜";
                            case PathSection.Elevator:
                                return "🛗";
                            case PathSection.Escalator:
                                return "↗️";
                            default:
                                return "🚶";
                        }
                    }
                    font.pixelSize: 32
                }

                QQC2.Label {
                    Layout.row: 0
                    Layout.column: 1
                    Layout.rowSpan: 2
                    visible: section.floorLevelChange != 0
                    text: section.floorLevelChange < 0 ? "⬇️" : "⬆️"
                    font.pixelSize: 32
                }

                QQC2.Label {
                    Layout.row: 0
                    Layout.column: 2
                    Layout.fillWidth: true
                    text: section.description
                }
                QQC2.Label {
                    Layout.row: 1
                    Layout.column: 2
                    visible: section.distance > 0
                    text: section.distance + "m"
                }

                QQC2.Label {
                    Layout.row: 0
                    Layout.column: 3
                    Layout.rowSpan: 2
                    text: "⬆️"
                    visible: model.turnDirection >= 0
                    font.pixelSize: 32
                    rotation: model.turnDirection
                }
            }
        }
    }

    PathModel {
        id: pathModel
    }

    ListView {
        model: pathModel
        delegate: pathDelegate
    }
}
