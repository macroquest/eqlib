/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "eqlib/BuildType.h"
#include "eqlib/base/Offsets.h"
#include "eqlib/Config.h"
#include "mq/base/Deprecation.h"

#include <algorithm>
#include <cstdlib>
#include <cstdint>
#include <limits>
#include <sys/stat.h>

#pragma warning(disable : 5030) // Single pragma seems to suffice for the entire codebase

#if !defined(DIRECTINPUT_VERSION)
#define DIRECTINPUT_VERSION    0x800
#endif
#include "base/WindowsUndefs.h"

#if defined (_DEBUG) && (defined(EQLIB_EXPORTS) || defined(MQ2MAIN_EXPORTS))
#define FORCE_SYMBOLS __declspec(dllexport) const void* __force_symbol_generation__() const { return this; }
#else
#define FORCE_SYMBOLS
#endif

//
// Size Checks
//

#define SIZE_CHECKS_ENABLED 1

namespace eqlib::detail{
	template <typename T>
	struct check_size_t {
		enum { value = sizeof(T) };
	};
	template <>
	struct check_size_t<void> {
		enum { value = 1 };
	};

	template <typename T>
	struct is_size_ok
	{
		enum { value = ((std::is_reference_v<T> || std::is_pointer_v<T> || std::is_void_v<T>) ? 8 : !std::is_trivial_v<T> ? 12 : check_size_t<T>::value) <= 8 ? 1 : 0 };
	};
}

#if defined(COMMENT_UPDATER) || !defined(_DEBUG) || SIZE_CHECKS_ENABLED == 0
#define SIZE_CHECK(type, expectedSize)
#define SIZE_CHECK2(name, type, expectedSize)
#else
#define SIZE_CHECK(type, expectedSize)                                                                    \
	template <typename TypeToCheck, std::size_t ExpectedSize, std::size_t RealSize = sizeof(TypeToCheck)> \
	std::enable_if_t<ExpectedSize == RealSize, void> CheckSizeOf##type##__() {                            \
		static_assert(ExpectedSize == RealSize, "Size of " #type " does not match expected size.");       \
	}                                                                                                     \
	inline void CheckSizeHelper##type##__() { CheckSizeOf##type##__<type, expectedSize>(); }
#define SIZE_CHECK2(name, type, expectedSize)                                                             \
	template <typename TypeToCheck, std::size_t ExpectedSize, std::size_t RealSize = sizeof(TypeToCheck)> \
	std::enable_if_t<ExpectedSize == RealSize, void> CheckSizeOf##name##__() {                            \
		static_assert(ExpectedSize == RealSize, "Size of " #type " does not match expected size.");       \
	}                                                                                                     \
	inline void CheckSizeHelper##name##__() { CheckSizeOf##name##__<type, expectedSize>(); }
#endif


// Define access to a member with another name (and type if you so will it)
#define ALT_MEMBER_GETTER(type, orig, name) \
    type& getter_ ## name() { return (*reinterpret_cast<type*>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_ALIAS(type, orig, name) \
    type& getter_ ## name() { return orig; } \
    void setter_ ## name(const type& v) { orig = v; } \
    __declspec(property(get=getter_ ## name, put=setter_ ## name)) type name;

#define ALT_MEMBER_ALIAS_DEPRECATED(type, orig, name, msg) \
    DEPRECATE(msg) \
    type& getter_ ## name() { return orig; } \
    DEPRECATE(msg) \
    void setter_ ## name(const type& v) { orig = v; } \
    __declspec(property(get=getter_ ## name, put=setter_ ## name)) type name;

#define ALT_MEMBER_GETTER_ARRAY(type, size, orig, name) \
    type (&getter_ ## name())[size] { return (*reinterpret_cast<type(*)[size]>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type (&name)[size];

#define ALT_MEMBER_GETTER_COPY(type, orig, name) \
    type getter_ ## name() { return (type)(orig); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_GETTER_DEPRECATED(type, orig, name, msg) \
    DEPRECATE(msg) \
    type& getter_ ## name() { return (*reinterpret_cast<type*>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_VMEMBER_GETTER_DEPRECATED(type, orig, name, msg) \
    DEPRECATE(msg) \
    type getter_ ## name() { return (static_cast<type>(orig)); } \
    __declspec(property(get=getter_ ## name)) type name;

#define ALT_MEMBER_GETTER_ARRAY_DEPRECATED(type, size, orig, name, msg) \
    DEPRECATE(msg) \
    type (&getter_ ## name())[size] { return (*reinterpret_cast<type(*)[size]>(&orig)); } \
    __declspec(property(get=getter_ ## name)) type (&name)[size];


#include "base/Color.h"
#include "base/Offsets.h"
#include "base/Primitives.h"
#include "Constants.h"
#include "ForwardDecls.h"
#include "SoeUtil.h"

namespace eqlib {

//class EnumKeyTypeRace;
//using EQRace = SoeUtil::StrongType<int, EnumKeyTypeRace>;
using EQRace = int;

//class EnumKeyTypeClass;
//using EQClass = SoeUtil::StrongType<int, EnumKeyTypeClass>;
using EQClass = int;

	
#if defined(_M_AMD64)
using eqtime_t = time_t;
using eqstat_t = struct ::_stat;
#else
using eqtime_t = __time32_t;
using eqstat_t = struct ::_stat32;
#endif // defined(_M_AMD64)


inline errno_t eq_ctime(char* Buffer, size_t SizeInBytes, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return ctime_s
#else
	return _ctime32_s
#endif // defined(_M_AMD64)
		(Buffer, SizeInBytes, Time);
}

inline errno_t eq_localtime(tm* Tm, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return localtime_s
#else
	return _localtime32_s
#endif // defined(_M_AMD64)
		(Tm, Time);
}

} // namespace eqlib
