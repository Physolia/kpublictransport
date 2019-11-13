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

#include "efacompactparser.h"
#include "logging.h"
#include "scopedxmlstreamreader.h"

#include <KPublicTransport/Departure>
#include <KPublicTransport/Journey>
#include <KPublicTransport/Location>

#include <QDateTime>
#include <QDebug>
#include <QXmlStreamReader>

using namespace KPublicTransport;

static void parseCompactCoordinate(const QString &text, Location &loc)
{
    const auto coords = text.split(QLatin1Char(','));
    if (coords.size() == 2) {
        loc.setLatitude(coords[1].toFloat());
        loc.setLongitude(coords[0].toFloat());
    }
}

Location EfaCompactParser::parseCompactSf(ScopedXmlStreamReader &&reader) const
{
    Location loc;

    while (reader.readNextSibling()) {
        if (reader.name() == QLatin1String("n")) {
            loc.setName(reader.readElementText());
        } else if (reader.name() == QLatin1String("ty")) {
            if (reader.readElementText() != QLatin1String("stop")) {
                return {};
            }
        } else if (reader.name() == QLatin1String("r")) {
            auto sub = reader.subReader();
            while (sub.readNextSibling()) {
                if (sub.name() == QLatin1String("c")) {
                    parseCompactCoordinate(sub.readElementText(), loc);
                } else if (sub.name() == QLatin1String("id")) {
                    loc.setIdentifier(m_locationIdentifierType, sub.readElementText());
                } else if (sub.name() == QLatin1String("pc")) {
                    loc.setLocality(sub.readElementText());
                }
            }
        }
    }

    return loc;
}

std::vector<Location> EfaCompactParser::parseStopFinderResponse(const QByteArray &data) const
{
    std::vector<Location> res;
    QXmlStreamReader xsr(data);
    ScopedXmlStreamReader reader(xsr);
    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("p")) {
            const auto l = parseCompactSf(reader.subReader());
            if (!l.isEmpty()) {
                res.push_back(l);
            }
        }
    }
    return res;
}

static std::pair<QDateTime, QDateTime> parseCompactTimePair(ScopedXmlStreamReader &&reader)
{
    QDateTime scheduledDt, expectedDt;

    while (reader.readNextSibling()) {
        if (reader.name() == QLatin1String("da")) {
            scheduledDt.setDate(QDate::fromString(reader.readElementText(), QStringLiteral("yyyyMMdd")));
        } else if (reader.name() == QLatin1String("t")) {
            scheduledDt.setTime(QTime::fromString(reader.readElementText(), QStringLiteral("hhmm")));
        } else if (reader.name() == QLatin1String("rda")) {
            expectedDt.setDate(QDate::fromString(reader.readElementText(), QStringLiteral("yyyyMMdd")));
        } else if (reader.name() == QLatin1String("rt")) {
            expectedDt.setTime(QTime::fromString(reader.readElementText(), QStringLiteral("hhmm")));
        }
    }

    return std::make_pair(scheduledDt, expectedDt);
}

QStringList EfaCompactParser::parseNotes(ScopedXmlStreamReader &&reader) const
{
    QStringList ns;
    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("tx")) {
            ns.push_back(reader.readElementText());
        }
    }
    return ns;
}

Departure EfaCompactParser::parseCompactDp(ScopedXmlStreamReader &&reader) const
{
    Departure dep;
    Location loc;
    while (reader.readNextSibling()) {
        if (reader.name() == QLatin1String("n")) {
            loc.setName(reader.readElementText());
        } else if (reader.name() == QLatin1String("rts")) {
            const auto rts = reader.readElementText();
            if (rts == QLatin1String("TRIP_CANCELLED")) {
                dep.setDisruptionEffect(Disruption::NoService);
            }
        } else if (reader.name() == QLatin1String("st")) {
            const auto st = parseCompactTimePair(reader.subReader());
            dep.setScheduledDepartureTime(st.first);
            dep.setExpectedDepartureTime(st.second);
        } else if (reader.name() == QLatin1String("m")) {
            Route route;
            Line line;
            auto subReader = reader.subReader();
            while (subReader.readNextSibling()) {
                if (subReader.name() == QLatin1String("des")) {
                    route.setDirection(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("nu")) {
                    line.setName(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("n")) {
                    line.setModeString(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("ty")) {
                    line.setMode(motTypeToLineMode(subReader.readElementText().toInt()));
                }
            }
            route.setLine(line);
            dep.setRoute(route);
        } else if (reader.name() == QLatin1String("r")) {
            auto subReader = reader.subReader();
            while (subReader.readNextSibling()) {
                if (subReader.name() == QLatin1String("id")) {
                    loc.setIdentifier(m_locationIdentifierType, subReader.readElementText());
                } else if (subReader.name() == QLatin1String("pl")) {
                    dep.setScheduledPlatform(subReader.readElementText());
                }
            }
        } else if (reader.name() == QLatin1String("c")) {
            parseCompactCoordinate(reader.readElementText(), loc);
        } else if (reader.name() == QLatin1String("ns")) {
            dep.setNotes(parseNotes(reader.subReader()));
        }
    }

    dep.setStopPoint(loc);
    return dep;
}

std::vector<Departure> EfaCompactParser::parseDmResponse(const QByteArray &data) const
{
    std::vector<Departure> res;
    QXmlStreamReader xsr(data);
    ScopedXmlStreamReader reader(xsr);
    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("dp")) {
            res.push_back(parseCompactDp(reader.subReader()));
        }
    }

    return res;
}

void EfaCompactParser::parseTripSectionHalf(ScopedXmlStreamReader &&reader, JourneySection &section) const
{
    Location loc;
    std::pair<QDateTime, QDateTime> dts;
    QString platform;

    bool isArr = true;
    while (reader.readNextSibling()) {
        if (reader.name() == QLatin1String("n") && loc.name().isEmpty()) {
            loc.setName(reader.readElementText());
        } else if (reader.name() == QLatin1String("de")) {
            loc.setName(reader.readElementText());
        } else if (reader.name() == QLatin1String("u")) {
            isArr = reader.readElementText() == QLatin1String("arrival");
        } else if (reader.name() == QLatin1String("st")) {
            dts = parseCompactTimePair(reader.subReader());
        } else if (reader.name() == QLatin1String("r")) {
            ScopedXmlStreamReader subReader(reader.subReader());
            while (subReader.readNextSibling()) {
                if (subReader.name() == QLatin1String("id")) {
                    loc.setIdentifier(m_locationIdentifierType, subReader.readElementText());
                } else if (subReader.name() == QLatin1String("pc")) {
                    loc.setLocality(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("pl")) {
                    platform = subReader.readElementText();
                } else if (subReader.name() == QLatin1String("c")) {
                    parseCompactCoordinate(subReader.readElementText(), loc);
                }
            }
        }

    }

    if (isArr) {
        section.setTo(loc);
        section.setScheduledArrivalTime(dts.first);
        section.setExpectedArrivalTime(dts.second);
        section.setExpectedArrivalPlatform(platform);
    } else {
        section.setFrom(loc);
        section.setScheduledDepartureTime(dts.first);
        section.setExpectedDepartureTime(dts.second);
        section.setExpectedDeparturePlatform(platform);
    }
}

JourneySection EfaCompactParser::parseTripSection(ScopedXmlStreamReader &&reader) const
{
    JourneySection section;
    section.setMode(JourneySection::PublicTransport);

    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("p")) {
            parseTripSectionHalf(reader.subReader(), section);
        } else if (reader.name() == QLatin1String("m")) {
            Route route;
            Line line;
            auto subReader = reader.subReader();
            while (subReader.readNextSibling()) {
                if (subReader.name() == QLatin1String("des")) {
                    route.setDirection(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("nu")) {
                    line.setName(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("n")) {
                    line.setModeString(subReader.readElementText());
                } else if (subReader.name() == QLatin1String("ty")) {
                    const auto secType = subReader.readElementText().toInt();
                    switch (secType) {
                        case 99:
                        case 100:
                            section.setMode(JourneySection::Walking);
                            break;
                        case 98:
                        case 105:
                            section.setMode(JourneySection::Transfer);
                            break;
                    }
                } else if (subReader.name() == QLatin1String("co")) {
                    line.setMode(motTypeToLineMode(subReader.readElementText().toInt()));
                }
            }

            // fix messed up mode name values
            if (line.modeString().startsWith(line.name() + QLatin1Char(' '))) {
                line.setModeString(line.modeString().mid(line.name().size() + 1));
            } else if (line.modeString().endsWith(QLatin1Char(' ') + line.name())) {
                line.setModeString(line.modeString().left(line.modeString().size() - line.name().size() - 1));
            }

            if (section.mode() == JourneySection::PublicTransport) {
                route.setLine(line);
                section.setRoute(route);
            }
        } else if (reader.name() == QLatin1String("ns")) {
            section.setNotes(parseNotes(reader.subReader()));
        } else if (reader.name() == QLatin1String("realtime")) {
            if (reader.readElementText() == QLatin1String("0")) { // expected time fields are set in all cases
                section.setExpectedArrivalTime({});
                section.setExpectedDepartureTime({});
            }
        }
        // TODO interchange tag - should we turn this into transfer sections?
    }
    return section;
}

Journey EfaCompactParser::parseCompactTp(ScopedXmlStreamReader &&reader) const
{
    Journey jny;
    std::vector<JourneySection> sections;

    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("l")) {
            sections.push_back(parseTripSection(reader.subReader()));
        }
    }

    jny.setSections(std::move(sections));
    return jny;
}

std::vector<Journey> EfaCompactParser::parseTripResponse(const QByteArray &data) const
{
    //qDebug().noquote() << data;
    std::vector<Journey> res;
    QXmlStreamReader xsr(data);
    ScopedXmlStreamReader reader(xsr);
    while (reader.readNextElement()) {
        if (reader.name() == QLatin1String("tp")) {
            res.push_back(parseCompactTp(reader.subReader()));
        }
    }

    return res;
}