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

#include "eqlib/game/Containers.h"

namespace eqlib {

//----------------------------------------------------------------------------
template <typename T>
class TNodePool
{
public:
/*0x00*/ TList<T> freeList;
/*0x08*/ uint32_t allocCount;
/*0x0c*/ uint32_t freeNodeCount;
/*0x10*/ uint32_t totalAllocCount;
};

//----------------------------------------------------------------------------
template <typename NodeType, typename T>
class TDataNode : public TListNode<NodeType>
{
public:
	/*0x00*/ T* pData = nullptr;
};

//============================================================================

} // namespace eqlib
