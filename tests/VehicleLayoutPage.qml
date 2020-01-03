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

import QtQuick 2.5
import QtQuick.Layouts 1.1
import QtQuick.Controls 2.1 as QQC2
import org.kde.kirigami 2.4 as Kirigami
import org.kde.kpublictransport 1.0 as KPublicTransport
import org.kde.kpublictransport.ui 1.0

Kirigami.Page {
    id: root
    title: i18n("Vehicle Layout")

    property alias publicTransportManager: vehicleModel.manager
    property var departure

    onDepartureChanged: vehicleModel.request.departure = root.departure;

    KPublicTransport.VehicleLayoutQueryModel {
        id: vehicleModel
    }

    ColumnLayout {
        id: contentLayout
        anchors.fill: parent
        QQC2.Label {
            text: vehicleModel.departure.stopPoint.name + " - " + vehicleModel.departure.route.line.name + " - " + vehicleModel.departure.scheduledDepartureTime
        }
        QQC2.Label {
            text: "Platform: " + vehicleModel.platform.name
        }

        Flickable {
            id: vehicleView
            property real fullLength: 1600 // full length of the platform display
            property real sectionWidth: 48
            clip: true
            contentHeight: fullLength
            Layout.fillWidth: true
            Layout.fillHeight: true

            QQC2.ScrollBar.vertical: QQC2.ScrollBar {}

            Repeater {
                Layout.fillWidth: true;
                model: vehicleModel.platform.sections
                delegate: Item {
                    property var section: modelData
                    width: parent.width
                    y: section.begin * vehicleView.fullLength
                    height: section.end * vehicleView.fullLength - y

                    Kirigami.Separator {
                        visible: index == 0
                        anchors { top: parent.top; left: parent.left; right: parent.right }
                    }
                    QQC2.Label {
                        anchors.centerIn: parent
                        text: section.name
                    }
                    Kirigami.Separator {
                        anchors { bottom: parent.bottom; left: parent.left; right: parent.right }
                    }
                }
            }

            Kirigami.Icon {
                visible: vehicleModel.vehicle.direction != KPublicTransport.Vehicle.UnknownDirection
                source: {
                    if (vehicleModel.vehicle.direction == KPublicTransport.Vehicle.Forward)
                        return "go-up";
                    if (vehicleModel.vehicle.direction == KPublicTransport.Vehicle.Backward)
                        return "go-down"
                    return "";
                }
                width: Kirigami.Units.iconSizes.small
                height: width
                x: vehicleView.sectionWidth / 2 - width / 2
                y: vehicleModel.vehicle.platformPositionBegin * vehicleView.fullLength - height - Kirigami.Units.largeSpacing
            }
            Repeater {
                id: vehicleRepeater
                Layout.fillWidth: true
                model: vehicleModel
                delegate: VehicleSectionItem {
                    section: model.vehicleSection
                    y: section.platformPositionBegin * vehicleView.fullLength
                    height: section.platformPositionEnd * vehicleView.fullLength - y
                    width: vehicleView.sectionWidth
                    textColor: Kirigami.Theme.textColor
                    firstClassBackground: Kirigami.Theme.positiveTextColor
                    secondClassBackground: Kirigami.Theme.focusColor
                    inaccessibleBackground: Kirigami.Theme.disabledTextColor
                    restaurantBackground: Kirigami.Theme.neutralTextColor

                    QQC2.Label {
                        anchors.centerIn: parent
                        text: section.name
                    }

                    ColumnLayout {
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.left: parent.right
                        anchors.leftMargin: Kirigami.Units.largeSpacing
                        spacing: Kirigami.Units.smallSpacing

                        RowLayout {
                            spacing: Kirigami.Units.smallSpacing
                            Repeater {
                                model: section.featureList
                                QQC2.Label {
                                    text: {
                                        switch (modelData) {
                                            case KPublicTransport.VehicleSection.AirConditioning: return "❄️";
                                            case KPublicTransport.VehicleSection.Restaurant: return "🍴";
                                            case KPublicTransport.VehicleSection.ToddlerArea: return "👶";
                                            case KPublicTransport.VehicleSection.WheelchairAccessible: return "♿";
                                            case KPublicTransport.VehicleSection.SilentArea: return "🔇";
                                            case KPublicTransport.VehicleSection.BikeStorage: return "🚲";
                                        }
                                    }
                                }
                            }
                        }
                        QQC2.Label {
                            visible: section.classes != KPublicTransport.VehicleSection.UnknownClass
                            text: {
                                if (section.classes == KPublicTransport.VehicleSection.FirstClass)
                                    return "First class";
                                if (section.classes == KPublicTransport.VehicleSection.SecondClass)
                                    return "Second class";
                                if (section.classes == (KPublicTransport.VehicleSection.FirstClass | KPublicTransport.VehicleSection.SecondClass))
                                    return "First/second class";
                                return "Unknown class";
                            }
                        }
                    }
                }
            }
            Kirigami.Icon {
                visible: vehicleModel.vehicle.direction != KPublicTransport.Vehicle.UnknownDirection
                source: {
                    if (vehicleModel.vehicle.direction == KPublicTransport.Vehicle.Forward)
                        return "go-up";
                    if (vehicleModel.vehicle.direction == KPublicTransport.Vehicle.Backward)
                        return "go-down"
                    return "";
                }
                width: Kirigami.Units.iconSizes.small
                height: width
                x: vehicleView.sectionWidth / 2 - width / 2
                y: vehicleModel.vehicle.platformPositionEnd * vehicleView.fullLength + Kirigami.Units.largeSpacing
            }
        }
    }

    QQC2.BusyIndicator {
        anchors.centerIn: contentLayout
        running: vehicleModel.loading
    }

    QQC2.Label {
        anchors.centerIn: contentLayout
        width: parent.width
        text: vehicleModel.errorMessage
        color: Kirigami.Theme.negativeTextColor
        wrapMode: Text.Wrap
        horizontalAlignment: Text.AlignHCenter
    }

    QQC2.Label {
        anchors.centerIn: contentLayout
        width: parent.width
        visible: vehicleModel.errorMessage === "" && !vehicleModel.loading && vehicleRepeater.count === 0
        wrapMode: Text.Wrap
        horizontalAlignment: Text.AlignHCenter
        text: "No vehicle layout information available."
    }
}
