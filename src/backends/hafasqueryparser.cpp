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

#include "hafasqueryparser.h"
#include "hafasjourneyresponse_p.h"
#include "logging.h"

#include <KPublicTransport/Departure>
#include <KPublicTransport/Journey>
#include <KPublicTransport/Location>

#include <QDateTime>
#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QXmlStreamReader>

#include <zlib.h>

using namespace KPublicTransport;

void HafasQueryParser::setLocationIdentifierType(const QString &idType)
{
    m_locationIdentifierType = idType;
}

std::vector<Departure> HafasQueryParser::parseStationBoardResponse(const QByteArray &data, bool isArrival)
{
    qDebug().noquote() << data;
    std::vector<Departure> res;

    QXmlStreamReader reader;
    if (data.startsWith("<Journey")) { // SBB and RT don't reply with valid XML...
        reader.addData("<dummyRoot>");
        reader.addData(data);
        reader.addData("</dummyRoot>");
    } else {
        reader.addData(data);
    }

    Location stopPoint;
    while (!reader.atEnd()) {
        const auto token = reader.readNext();
        switch (token) {
            case QXmlStreamReader::StartElement:
                if (reader.name() == QLatin1String("St")) {
                    stopPoint.setName(reader.attributes().value(QLatin1String("name")).toString());
                    stopPoint.setIdentifier(m_locationIdentifierType, reader.attributes().value(QLatin1String("evaId")).toString());
                } else if (reader.name() == QLatin1String("Journey")) {
                    auto dt = QDateTime::fromString(reader.attributes().value(QLatin1String("fpDate")) + reader.attributes().value(QLatin1String("fpTime")), QStringLiteral("dd.MM.yyhh:mm"));
                    if (dt.date().year() < 2000) {
                        dt = dt.addYears(100);
                    }
                    const auto delayStr = reader.attributes().value(QLatin1String("e_delay"));
                    const auto delaySecs = delayStr.toInt() * 60;
                    Departure dep;
                    if (isArrival) {
                        dep.setScheduledArrivalTime(dt);
                        if (!delayStr.isEmpty()) {
                            dep.setExpectedArrivalTime(dt.addSecs(delaySecs));
                        }
                    } else {
                        dep.setScheduledDepartureTime(dt);
                        if (!delayStr.isEmpty()) {
                            dep.setExpectedDepartureTime(dt.addSecs(delaySecs));
                        }
                    }
                    dep.setScheduledPlatform(reader.attributes().value(QLatin1String("platform")).toString());
                    dep.setExpectedPlatform(reader.attributes().value(QLatin1String("newpl")).toString());

                    Route route;
                    route.setDirection(reader.attributes().value(QLatin1String("targetLoc")).toString());
                    Line line;
                    line.setName(reader.attributes().value(QLatin1String("hafasname")).toString());
                    if (line.name().isEmpty()) {
                        const auto prod = reader.attributes().value(QLatin1String("prod"));
                        const auto idx = prod.indexOf(QLatin1Char('#'));
                        line.setName(prod.left(idx).toString().simplified());
                    }
                    // TODO line mode (class attribute, or second part of prod attribute)
                    route.setLine(line);
                    dep.setRoute(route);

                    dep.setStopPoint(stopPoint);
                    res.push_back(dep);
                }
                break;
            default:
                break;
        }
    }

    return res;
}

std::vector<Location> HafasQueryParser::parseGetStopResponse(const QByteArray &data)
{
    // remove garbage around JSON payload
    const auto startIdx = data.indexOf('{');
    const auto endIdx = data.lastIndexOf('}');
    const auto jsonData = data.mid(startIdx, endIdx - startIdx + 1);

    const auto doc = QJsonDocument::fromJson(jsonData);
    //qDebug().noquote() << doc.toJson();
    const auto suggestions = doc.object().value(QLatin1String("suggestions")).toArray();
    std::vector<Location> res;
    res.reserve(suggestions.size());
    for (const auto &suggestion : suggestions) {
        const auto obj = suggestion.toObject();
        Location loc;
        loc.setIdentifier(m_locationIdentifierType, obj.value(QLatin1String("extId")).toString());
        loc.setName(obj.value(QLatin1String("value")).toString());
        loc.setLatitude(obj.value(QLatin1String("ycoord")).toString().toInt() / 1000000.0);
        loc.setLongitude(obj.value(QLatin1String("xcoord")).toString().toInt() / 1000000.0);
        res.push_back(loc);
    }

    return res;
}

static QByteArray gzipDecompress(const QByteArray &data)
{
    QByteArray rawData;
    z_stream stream;
    unsigned char buffer[1024];

    stream.zalloc = nullptr;
    stream.zfree = nullptr;
    stream.opaque = nullptr;
    stream.avail_in = data.size();
    stream.next_in = reinterpret_cast<unsigned char*>(const_cast<char*>(data.data()));

    auto ret = inflateInit2(&stream, 15 + 32); // see docs, the magic numbers enable gzip decoding
    if (ret != Z_OK) {
        qCWarning(Log) << "Failed to initialize zlib stream.";
        return {};
    }

    do {
        stream.avail_out = sizeof(buffer);
        stream.next_out = buffer;

        ret = inflate(&stream, Z_NO_FLUSH);
        if (ret != Z_OK && ret != Z_STREAM_END) {
            qCWarning(Log) << "Zlib decoding failed!" << ret;
            break;
        }

        rawData.append(reinterpret_cast<char*>(buffer), sizeof(buffer) - stream.avail_out);
    } while (stream.avail_out == 0);
    inflateEnd(&stream);

    return rawData;
}

std::vector<Journey> HafasQueryParser::parseQueryResponse(const QByteArray &data)
{
#if Q_BYTE_ORDER == Q_BIG_ENDIAN
#warning Hafas binary response parsing not implemented on big endian architectures!
    Q_UNUSED(data);
    return {};
#endif

    // yes, this is gzip compressed rather than using the HTTP compression transparently...
    const auto rawData = gzipDecompress(data);

    if (rawData.size() < (int)sizeof(HafasJourneyResponseHeader)) {
        qCWarning(Log) << "Response too small for header structure.";
        return {};
    }
    const auto header = reinterpret_cast<const HafasJourneyResponseHeader*>(rawData.constData());
    qDebug() << header->version << header->numJourneys;

    if (rawData.size() < (int)(sizeof(HafasJourneyResponseExtendedHeader) + header->extendedHeaderOffset)) {
        qCWarning(Log) << "Response too short for extended header structure.";
        return {};
    }
    const auto extHeader = reinterpret_cast<const HafasJourneyResponseExtendedHeader*>(rawData.constData() + header->extendedHeaderOffset);
    if (extHeader->length < (int)sizeof(HafasJourneyResponseExtendedHeader)) {
        qCWarning(Log) << "Extended header is shorter than expected" << extHeader->length;
        return {};
    }
    if (extHeader->errorCode != 0) {
        qCDebug(Log) << "Journey query returned error" << extHeader->errorCode;
        return {};
    }

    const auto detailsHeader = reinterpret_cast<const HafasJourneyResponseDetailsHeader*>(rawData.constData() + extHeader->detailsOffset);
    qDebug() << "details header:" << detailsHeader->version;

    HafasJourneyResponseStringTable stringTable(rawData, header->stringTableOffset, extHeader->encodingStr);
    QDate baseDate(1979, 12, 31);
    baseDate = baseDate.addDays(header->date);

    std::vector<Journey> journeys;
    journeys.reserve(header->numJourneys);
    for (int journeyIdx = 0; journeyIdx < header->numJourneys; ++journeyIdx) {
        const auto journeyInfo = reinterpret_cast<const HafasJourneyResponseJourney*>(rawData.constData() + sizeof(HafasJourneyResponseHeader) + journeyIdx * sizeof(HafasJourneyResponseJourney));
        qDebug() << "section count: " << journeyInfo->numSections;

        const auto journeyDetailsOffset = *reinterpret_cast<const uint16_t*>(rawData.constData()
            + extHeader->detailsOffset
            + detailsHeader->journeyDetailsIndexOffset
            + journeyIdx * sizeof(uint16_t));

        std::vector<JourneySection> sections;
        sections.reserve(journeyInfo->numSections);
        for (int sectionIdx = 0; sectionIdx < journeyInfo->numSections; ++sectionIdx) {
            const auto sectionInfo = reinterpret_cast<const HafasJourneyResponseSection*>(rawData.constData()
                + sizeof(HafasJourneyResponseHeader)
                + journeyInfo->sectionsOffset
                + sectionIdx * sizeof(HafasJourneyResponseSection));
            qDebug() << stringTable.lookup(sectionInfo->lineNameStr) << sectionInfo->type;

            Location from;
            const auto fromInfo = reinterpret_cast<const HafasJourneyResponseStation*>(rawData.constData()
                + header->stationTableOffset
                + sectionInfo->departureStationIdx * sizeof(HafasJourneyResponseStation));
            from.setName(stringTable.lookup(fromInfo->nameStr));
            from.setLatitude(fromInfo->latitude / 1000000);
            from.setLongitude(fromInfo->longitude / 1000000);
            from.setIdentifier(m_locationIdentifierType, QString::number(fromInfo->id));

            Location to;
            const auto toInfo = reinterpret_cast<const HafasJourneyResponseStation*>(rawData.constData()
                + header->stationTableOffset
                + sectionInfo->arrivalStationIdx * sizeof(HafasJourneyResponseStation));
            to.setName(stringTable.lookup(toInfo->nameStr));
            to.setLatitude(toInfo->latitude / 1000000);
            to.setLongitude(toInfo->longitude / 1000000);
            to.setIdentifier(m_locationIdentifierType, QString::number(toInfo->id));

            JourneySection section;
            section.setFrom(from);
            section.setTo(to);

            // TODO this needs support for crossing midnight (hour goes above 24 it seems?)
            section.setScheduledDepartureTime(QDateTime(baseDate, QTime(sectionInfo->scheduledDepartureTime / 100, sectionInfo->scheduledDepartureTime % 100)));
            section.setScheduledArrivalTime(QDateTime(baseDate, QTime(sectionInfo->scheduledArrivalTime/ 100, sectionInfo->scheduledArrivalTime% 100)));

            const auto journeyAttrIndex = *reinterpret_cast<const uint16_t*>(rawData.constData()
                + extHeader->journeyAttributesIndexOffset + journeyIdx * sizeof(uint16_t));
            auto attr = reinterpret_cast<const HafasJourneyResponseAttribute*>(rawData.constData()
                    + extHeader->attributesOffset
                    + journeyAttrIndex * sizeof(HafasJourneyResponseAttribute));
            while (attr->keyStr > 0) {
                qDebug() << "journey attr" << stringTable.lookup(attr->keyStr) << stringTable.lookup(attr->valueStr);
                ++attr;
            }

            if (sectionInfo->type == HafasJourneyResponseSectionMode::PublicTransport) {
                Line line;
                line.setName(stringTable.lookup(sectionInfo->lineNameStr));

                Route route;
                route.setLine(line);

                auto attr = reinterpret_cast<const HafasJourneyResponseAttribute*>(rawData.constData()
                    + extHeader->attributesOffset
                    + sectionInfo->sectionAttributeIndex * sizeof(HafasJourneyResponseAttribute));
                while (attr->keyStr > 0) {
                    qDebug() << "section attr" << stringTable.lookup(attr->keyStr) << stringTable.lookup(attr->valueStr);
                    const auto key = stringTable.lookup(attr->keyStr);
                    if (key == QLatin1String("Direction")) {
                        route.setDirection(stringTable.lookup(attr->valueStr));
                    }
                    ++attr;
                }

                section.setRoute(route);
                section.setMode(JourneySection::PublicTransport);
                section.setScheduledDeparturePlatform(stringTable.lookup(sectionInfo->scheduledDeparturePlatformStr));
                section.setScheduledArrivalPlatform(stringTable.lookup(sectionInfo->scheduledArrivalPlatformStr));

                // TODO this is still producing non-sense
                const auto sectionDetail = reinterpret_cast<const HafasJourneyResponseSectionDetail*>(rawData.constData()
                    + extHeader->detailsOffset
                    + journeyDetailsOffset
                    + detailsHeader->sectionDetailsOffset
                    + detailsHeader->sectionDetailsSize * sectionIdx);
                qDebug() << "section detail" << sectionDetail->expectedDepartureTime << sectionDetail->expectedArrivalTime << sectionDetail->expectedArrivalPlatformStr <<  sectionDetail->expectedDeparturePlatformStr;
                section.setExpectedDeparturePlatform(stringTable.lookup(sectionDetail->expectedDeparturePlatformStr));
                section.setExpectedArrivalPlatform(stringTable.lookup(sectionDetail->expectedArrivalPlatformStr));

                // TODO this needs support for crossing midnight (see above)
                // TODO 0xffff here means not known
                section.setExpectedDepartureTime(QDateTime(baseDate, QTime(sectionDetail->expectedDepartureTime / 100, sectionDetail->expectedDepartureTime % 100)));
                section.setExpectedArrivalTime(QDateTime(baseDate, QTime(sectionDetail->expectedArrivalTime / 100, sectionDetail->expectedArrivalTime % 100)));
            } else if (sectionInfo->type == HafasJourneyResponseSectionMode::Walk) {
                section.setMode(JourneySection::Walking);
            } else if (sectionInfo->type == HafasJourneyResponseSectionMode::Transfer1 || sectionInfo->type == HafasJourneyResponseSectionMode::Transfer2) {
                section.setMode(JourneySection::Transfer);
            } else {
                qCWarning(Log) << "Unknown section mode:" << sectionInfo->type;
            }

            sections.push_back(section);
        }

        Journey journey;
        journey.setSections(std::move(sections));
        journeys.push_back(journey);
    }

    return journeys;
}
