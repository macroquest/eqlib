/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

class [[offsetcomments]] FileStatMgr
{
public:
	struct FileStat
	{
		struct _stat32 Stats;
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

class [[offsetcomments]] RequirementAssociationManager : public FileStatMgr
{
public:
/*0x010*/ void* vfTable;
/*0x014*/ HashTable<HashTable<DoublyLinkedList<int>*>*> Requirements;
/*0x024*/ char               AssocFilename[512];
/*0x224*/ ReqType            LastFailReason;
/*0x228*/ int                LastFailGroupID;
/*0x22c*/ int                LastFailReqID;
/*0x230*/
};

} // namespace eqlib
