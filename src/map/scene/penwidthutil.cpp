/*
    SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#include "penwidthutil.h"
#include "logging.h"
#include "style/mapcssdeclaration.h"

#include <cmath>

using namespace KOSMIndoorMap;

double PenWidthUtil::penWidth(OSM::Element e, const MapCSSDeclaration *decl, Unit &unit)
{
    // literal value, possibly with a unit
    if (decl->keyValue().isEmpty()) {
        if (decl->unit() != MapCSSDeclaration::NoUnit) {
            unit = decl->unit() == MapCSSDeclaration::Meters ? Unit::Meter : Unit::Pixel;
        }
        return decl->doubleValue();
    }

    // referenced value from a tag value
    // see https://wiki.openstreetmap.org/wiki/Map_Features/Units
    double unitConversionFactor = 1.0;
    double num = NAN;

    const auto value = e.tagValue(decl->keyValue().constData()).constData();
    const auto valueLen = std::strlen(value);
    const auto valueEnd = value + valueLen;
    const char* it = value;

    while (it < valueEnd) {
        char* numEnd;
        num = std::isnan(num) ? std::strtod(it, &numEnd) : std::max(num, std::strtod(it, &numEnd));
        if (it == numEnd) {
            break;
        }
        it = numEnd;

        while (it != valueEnd && std::isspace(*it)) {
            ++it;
        }

        // there is an explicit unit suffix;
        if (std::strncmp(it, "ft", 2) == 0) {
            unitConversionFactor = 0.3048;
            it += 2;
        }

        if (it != valueEnd && (*it) == ';') {
            ++it;
            continue;
        }
        break;
    }

    if (std::isnan(num)) {
        qCDebug(Log) << "Failed to parse width from tag value:" << value << decl->keyValue() << e.url();
        return 0.0;
    }

    // no explicit unit, use default unit for this tag
    if (it == value + valueLen) {
        if (std::strcmp(decl->keyValue().constData(), "gauge") == 0) {
            unitConversionFactor = 0.001;
        }
    }

    unit = Unit::Meter;
    return num * unitConversionFactor;
}
