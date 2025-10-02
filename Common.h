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

#include "eqlib/Config.h"

#include "mq/base/Deprecation.h"

#include <algorithm>
#include <cstdlib>
#include <cstdint>
#include <limits>
#include <sys/stat.h>

#if !defined(DIRECTINPUT_VERSION)
#define DIRECTINPUT_VERSION    0x800
#endif
#include "eqlib/WindowsUndefs.h"

#if defined (_DEBUG) && (defined(EQLIB_EXPORTS) || defined(MQ2MAIN_EXPORTS))
#define FORCE_SYMBOLS __declspec(dllexport) const void* __force_symbol_generation__() const { return this; }
#else
#define FORCE_SYMBOLS
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


#ifndef UNUSED
//#define UNUSED(x) ((void)(x))
#define UNUSED(...) (void)sizeof(__VA_ARGS__)
#endif


#include "eqlib/SizeChecks.h"

#include "base/Color.h"
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


inline errno_t __cdecl eq_ctime(char* Buffer, size_t SizeInBytes, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return ctime_s
#else
	return _ctime32_s
#endif // defined(_M_AMD64)
		(Buffer, SizeInBytes, Time);
}

inline errno_t __cdecl eq_localtime(tm* Tm, const eqtime_t* Time)
{
#if defined(_M_AMD64)
	return localtime_s
#else
	return _localtime32_s
#endif // defined(_M_AMD64)
		(Tm, Time);
}

} // namespace eqlib
