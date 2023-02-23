/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#include "Common.h"
#include "Containers.h"
#include "CXStr.h"

namespace eqlib {

//----------------------------------------------------------------------------

class CSerializeBuffer;
class CUnSerializeBuffer;

class [[offsetcomments]] FileStatMgr
{
public:
	struct FileStat
	{
		eqstat_t       Stats;
		CXStr          Filename;
		CXStr          Key;
	};

/*0x00*/ HashTable<FileStat*> FileStats;
/*0x10*/
};

enum ReqType
{
	RT_None,
	RT_Sex,
	RT_MinLevel,
	RT_MaxLevel,
	RT_LevelRange,
	RT_Class,
	RT_Race,
	// there are like 72 more of these...
};

// size: 0x228

class [[offsetcomments]] RequirementAssociationManager : public FileStatMgr
{
public:
	RequirementAssociationManager();
	EQLIB_OBJECT virtual ~RequirementAssociationManager() {}

	//virtual void ClearAllRequirementAssociationsData() {}
	//virtual void Serialize(CSerializeBuffer&) {}
	//virtual void UnSerialize(CUnSerializeBuffer&) {}
	//virtual int LoadRequirementAssociationsFromFile(const char*, bool) { return 0; }

/*0x014*/ HashTable<HashTable<DoublyLinkedList<int>*>*> Requirements;
/*0x024*/ char               AssocFilename[512];
/*0x224*/ ReqType            LastFailReason;
/*0x228*/
};

} // namespace eqlib
