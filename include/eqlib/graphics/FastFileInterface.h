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

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
struct SFastFile;
struct SWadFile;

//----------------------------------------------------------------------------
class CFastFileInterface
{
public:
	virtual SWadFile* Init(const char*) = 0;
	virtual void Finish(SWadFile*) = 0;
	virtual SFastFile* Open(SWadFile*, const char*) = 0;
	virtual bool Close(SFastFile*) = 0;
	virtual bool Read(SFastFile*) = 0;
	virtual bool Seek(SFastFile*, int, int) = 0;
	virtual int Tell(SFastFile*) = 0;
	virtual int GetSize(SFastFile*) = 0;
	virtual ~CFastFileInterface() {}
};

//============================================================================

} // namespace eqlib
