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

#ifndef KPUBLICTRANSPORT_DATATYPES_H
#define KPUBLICTRANSPORT_DATATYPES_H

#include "kpublictransport_export.h"

#include <QMetaType>
#include <QSharedDataPointer>

#include <type_traits>

namespace KPublicTransport {
namespace Internal {
template <typename T>
struct parameter_type
{
    using type = typename std::conditional<std::is_fundamental<T>::value || std::is_enum<T>::value, T, const T&>::type;
};
}
}

#define KPUBLICTRANSPORT_GADGET(Class) \
    Q_GADGET \
public: \
    Class(); \
    Class(Class&&) noexcept; \
    Class(const Class&); \
    ~Class(); \
    Class& operator=(Class&&) noexcept; \
    Class& operator=(const Class&); \
private: \
    QExplicitlySharedDataPointer<Class ## Private> d;

#define KPUBLICTRANSPORT_PROPERTY(Type, Getter, Setter) \
public: \
    Q_PROPERTY(Type Getter READ Getter WRITE Setter) \
    Type Getter() const; \
    void Setter(KPublicTransport::Internal::parameter_type<Type>::type value); \


#endif