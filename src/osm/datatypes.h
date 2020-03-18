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

#ifndef OSM_DATATYPES_H
#define OSM_DATATYPES_H

#include <QString>

#include <cstdint>
#include <vector>

namespace OSM {

/** OSM element identifier. */
typedef int64_t Id;

/** Coordinate, stored as 1e7 * degree to avoid floating point precision issues,
 *  and offset to unsigned values to make the z-order curve work.
 *  Can be in an invalid state with coordinates out of range, see isValid().
 *  @see https://en.wikipedia.org/wiki/Z-order_curve for the z-order curve stuff
 */
class Coordinate {
public:
    Coordinate() = default;
    explicit constexpr Coordinate(double lat, double lon)
        : latitude((lat + 180.0) * 10'000'000)
        , longitude((lon + 90.0) * 10'000'000)
    {}
    explicit constexpr Coordinate(uint32_t lat, uint32_t lon)
        : latitude(lat)
        , longitude(lon)
    {}

    /** Create a coordinate from a z-order curve index. */
    explicit constexpr Coordinate(uint64_t z)
        : latitude(0)
        , longitude(0)
    {
        for (int i = 0; i < 32; ++i) {
            latitude += (z & (1ull << (i * 2))) >> i;
            longitude += (z & (1ull << (1 + i * 2))) >> (i + 1);
        }
    }

    constexpr inline bool isValid() const
    {
        return latitude != std::numeric_limits<uint32_t>::max() && longitude != std::numeric_limits<uint32_t>::max();
    }

    /** Z-order curve value for this coordinate. */
    constexpr inline uint64_t z() const
    {
        uint64_t z = 0;
        for (int i = 0; i < 32; ++i) {
            z += ((uint64_t)latitude & (1 << i)) << i;
            z += ((uint64_t)longitude & (1 << i)) << (i + 1);
        }
        return z;
    }

    constexpr inline double latF() const
    {
        return (latitude / 10'000'000.0) - 180.0;
    }
    constexpr inline double lonF() const
    {
        return (longitude / 10'000'000.0) - 90.0;
    }

    uint32_t latitude = std::numeric_limits<uint32_t>::max();
    uint32_t longitude = std::numeric_limits<uint32_t>::max();
};


/** Bounding box, ie. a pair of coordinates. */
class BoundingBox {
public:
    constexpr inline bool isValid() const
    {
        return min.isValid() && max.isValid();
    }

    Coordinate min;
    Coordinate max;
};

constexpr inline BoundingBox unite(BoundingBox bbox1, BoundingBox bbox2)
{
    if (!bbox1.isValid()) {
        return bbox2;
    }
    if (!bbox2.isValid()) {
        return bbox1;
    }
    BoundingBox ret;
    ret.min.latitude = std::min(bbox1.min.latitude, bbox2.min.latitude);
    ret.min.longitude = std::min(bbox1.min.longitude, bbox2.min.longitude);
    ret.max.latitude = std::max(bbox1.max.latitude, bbox2.max.latitude);
    ret.max.longitude = std::max(bbox1.max.longitude, bbox2.max.longitude);
    return ret;
}

constexpr inline bool intersects(BoundingBox bbox1, BoundingBox bbox2)
{
    return ((bbox1.min.latitude >= bbox2.min.latitude && bbox1.min.latitude <= bbox2.max.latitude)
        || (bbox1.max.longitude >= bbox2.min.longitude && bbox1.max.longitude <= bbox2.max.longitude))
        && ((bbox1.min.longitude >= bbox2.min.longitude && bbox1.min.longitude <= bbox2.max.longitude)
        || (bbox1.max.latitude >= bbox2.min.latitude && bbox1.max.latitude <= bbox2.max.latitude));
}

constexpr inline uint32_t latitudeDistance(BoundingBox bbox1, BoundingBox bbox2)
{
    return bbox1.max.latitude < bbox2.min.latitude ? bbox2.min.latitude - bbox1.max.latitude : bbox1.min.latitude - bbox2.max.latitude;
}

constexpr inline uint32_t longitudeDifference(BoundingBox bbox1, BoundingBox bbox2)
{
    return bbox1.max.longitude < bbox2.min.longitude ? bbox2.min.longitude - bbox1.max.longitude : bbox1.min.longitude - bbox2.max.longitude;
}

/** An OSM element tag. */
class Tag {
public:
    QString key;
    QString value;
};

/** An OSM node. */
class Node {
public:
    constexpr inline bool operator<(const Node &other) const { return id < other.id; }

    Id id;
    Coordinate coordinate;
    std::vector<Tag> tags;
};

/** An OSM way. */
class Way {
public:
    constexpr inline bool operator<(const Way &other) const { return id < other.id; }

    Id id;
    std::vector<Id> nodes;
    std::vector<Tag> tags;
};

/** A member in a relation. */
// TODO this has 7 byte padding, can we make this more efficient?
class Member {
public:
    Id id;
    QString role;
    enum class Type : uint8_t {
        Node,
        Way,
        Relation
    } type;
};

/** An OSM relation. */
class Relation {
public:
    constexpr inline bool operator<(const Relation &other) const { return id < other.id; }

    Id id;
    BoundingBox bbox;
    std::vector<Member> members;
    std::vector<Tag> tags;
};

/** A set of nodes, ways and relations. */
class DataSet {
public:
    void addNode(Node &&node);
    void addRelation(Relation &&rel);

    std::vector<Node> nodes;
    std::vector<Way> ways;
    std::vector<Relation> relations;
};

/** Returns the tag value for @p key of @p elem. */
template <typename Elem>
inline QString tagValue(const Elem& elem, const QLatin1String &key)
{
    // TODO sort tag list?
    const auto it = std::find_if(elem.tags.begin(), elem.tags.end(), [key](const auto &t) { return t.key == key; });
    if (it != elem.tags.end()) {
        return (*it).value;
    }
    return {};
}

template <typename Elem>
inline bool operator<(const Elem &elem, Id id)
{
    return elem.id < id;
}

}

#endif // OSM_DATATYPES_H