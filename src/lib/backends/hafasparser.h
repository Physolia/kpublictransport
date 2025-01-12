/*
    SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef KPUBLICTRANSPORT_HAFASPARSER_H
#define KPUBLICTRANSPORT_HAFASPARSER_H

#include "hafasbackend.h"
#include "kpublictransport_export.h"

#include <KPublicTransport/Line>
#include <KPublicTransport/Reply>

#include <QString>

#include <span>
#include <vector>

namespace KPublicTransport {

class Location;

/** Common base for the various Hafas response parsers.
 *  @internal only exported for unit tests
 */
class KPUBLICTRANSPORT_EXPORT HafasParser
{
public:
    void setLocationIdentifierTypes(const QString &idType, const QString &standardIdType = {});
    void setLineModeMap(std::span<HafasLineModeMapEntry> modeMap);
    void setStandardLocationIdentfierCountries(std::vector<uint8_t> &&uicCountryCodes);

    Reply::Error error() const;
    QString errorMessage() const;

protected:
    HafasParser();
    ~HafasParser();

    void clearErrorState();
    Line::Mode parseLineMode(const QString &modeId) const;
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    Line::Mode parseLineMode(const QStringRef &modeId) const;
#else
    Line::Mode parseLineMode(const QStringView &modeId) const;
#endif
    Line::Mode parseLineMode(int modeId) const;

    void setLocationIdentifier(Location &loc, const QString &id) const;

protected:
    mutable QString m_errorMsg;
    mutable Reply::Error m_error = Reply::NoError;

private:
    Q_DISABLE_COPY(HafasParser)

    QString m_locationIdentifierType;
    QString m_standardLocationIdentifierType;
    std::span<HafasLineModeMapEntry> m_lineModeMap;
    std::vector<uint8_t> m_uicCountryCodes;
};

}

#endif // KPUBLICTRANSPORT_HAFASPARSER_H
