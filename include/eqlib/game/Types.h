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

 // Basic types for eqlib

#include "eqlib/game/Color.h"

#include <cstddef>
#include <cstdint>
#include <ctime>

namespace eqlib {

using EQRace = int;

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

class PopDialogHandler
{
public:
	virtual void DialogResponse(int, int, void*) {}
};


// Common everquest game types

struct [[offsetcomments]] ArmorProperties
{
/*0x00*/ uint32_t type = 0;
/*0x04*/ uint32_t variation = 0;
/*0x08*/ uint32_t material = 0;
/*0x0c*/ uint32_t newArmorID = 0;
/*0x10*/ uint32_t newArmorType = 0;
/*0x14*/

	uint32_t get_ID() const { return type; }
	__declspec(property(get = get_ID)) uint32_t ID;
};

struct [[offsetcomments]] EQUIPMENT
{
	EQUIPMENT()
	{
		for (int i = 0; i < 9; ++i)
			Item[i].type = {};
	}

	union
	{
		struct // EQUIPARRAY
		{
		/*0x00*/ ArmorProperties Item[9];
		}; 
		struct // EQUIPUNIQUE
		{
		/*0x00*/ ArmorProperties Head;
		/*0x14*/ ArmorProperties Chest;
		/*0x28*/ ArmorProperties Arms;
		/*0x3c*/ ArmorProperties Wrists;
		/*0x50*/ ArmorProperties Hands;
		/*0x64*/ ArmorProperties Legs;
		/*0x78*/ ArmorProperties Feet;
		/*0x8c*/ ArmorProperties Primary;
		/*0xa0*/ ArmorProperties Offhand;
		};
	};
/*0xb4*/
};

} // namespace eqlib
