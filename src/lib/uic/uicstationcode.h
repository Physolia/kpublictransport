/*
    SPDX-FileCopyrightText: 2021 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef KPUBLICTRANSPORT_UICSTATIONCODE_H
#define KPUBLICTRANSPORT_UICSTATIONCODE_H

#include <cstdint>
#include <vector>

class QStringView;

namespace KPublicTransport {


/** Utility functions for dealing with UIC station codes.
 *  Also works for the syntactically identical IBNR station codes.
 */
namespace UicStationCode
{

/** Returns @c true if @p id is a valid UIC station code.
 *  @params allowedCountryCodes if non-empty, only UIC station codes with an UIC country code included
 *  in that list are considered valid. This list has to be sorted.
 */
bool isValid(QStringView id, const std::vector<uint8_t> &allowedCountryCodes = {});

/** Returns the country code of a given valid UIC station code. */
QStringView country(QStringView id);

}

}

#endif // KPUBLICTRANSPORT_UICSTATIONCODE_H
