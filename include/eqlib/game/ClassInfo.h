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

#include "eqlib/Deprecate.h"

namespace eqlib {

struct SClassInfo
{
	bool CanCast;
	bool PureCaster;
	bool PetClass;
	bool DruidType;
	bool NecroType;
	bool ClericType;
	bool ShamanType;
	bool MercType;
	char RaidColorOrder;
	DEPRECATE("Use GetClassDesc(classId) or LongName for the class long name. ClassInfo[].Name is a deprecated legacy alias. Be aware of the name change for Mage and Shadowknight in case functionality needs to adapt.")
	const char* Name;
	const char* LongName;
	const char* ShortName;
	const char* UCShortName;
};

inline namespace deprecated {
	using CLASSINFO DEPRECATE("Use SClassInfo instead of CLASSINFO") = SClassInfo;
	using PCLASSINFO DEPRECATE("Use SClassInfo instead of CLASSINFO") = SClassInfo*;
}

static const SClassInfo ClassInfo[] =
{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0,  "",             "",              "",    ""    }, // unk
	{ 0, 0, 0, 0, 0, 0, 0, 0, 13, "Warrior",      "Warrior",       "war", "WAR" }, // war
	{ 1, 1, 0, 0, 0, 1, 0, 0, 2,  "Cleric",       "Cleric",        "clr", "CLR" }, // clr
	{ 1, 0, 0, 0, 0, 1, 0, 0, 8,  "Paladin",      "Paladin",       "pal", "PAL" }, // pal
	{ 1, 0, 0, 1, 0, 0, 0, 0, 9,  "Ranger",       "Ranger",        "rng", "RNG" }, // rng
	{ 1, 0, 0, 0, 1, 0, 0, 0, 11, "Shadowknight", "Shadow Knight", "shd", "SHD" }, // shd
	{ 1, 1, 0, 1, 0, 0, 0, 0, 3,  "Druid",        "Druid",         "dru", "DRU" }, // dru
	{ 0, 0, 0, 0, 0, 0, 0, 0, 6,  "Monk",         "Monk",          "mnk", "MNK" }, // mnk
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0,  "Bard",         "Bard",          "brd", "BRD" }, // brd
	{ 0, 0, 0, 0, 0, 0, 0, 0, 10, "Rogue",        "Rogue",         "rog", "ROG" }, // rog
	{ 1, 1, 1, 0, 0, 0, 1, 0, 12, "Shaman",       "Shaman",        "shm", "SHM" }, // shm
	{ 1, 1, 1, 0, 1, 0, 0, 0, 7,  "Necromancer",  "Necromancer",   "nec", "NEC" }, // nec
	{ 1, 1, 0, 0, 0, 0, 0, 0, 14, "Wizard",       "Wizard",        "wiz", "WIZ" }, // wiz
	{ 1, 1, 1, 0, 0, 0, 0, 0, 5,  "Mage",         "Magician",      "mag", "MAG" }, // mag
	{ 1, 1, 0, 0, 0, 0, 0, 0, 4,  "Enchanter",    "Enchanter",     "enc", "ENC" }, // enc
	{ 1, 0, 1, 0, 0, 0, 1, 0, 1,  "Beastlord",    "Beastlord",     "bst", "BST" }, // bst
	{ 0, 0, 0, 0, 0, 0, 0, 0, 15, "Berserker",    "Berserker",     "ber", "BER" }, // ber
	{ 1, 1, 0, 0, 0, 0, 0, 1, 16, "Mercenary",    "Mercenary",     "mer", "MER" }, // mer
};

} // namespace eqlib
