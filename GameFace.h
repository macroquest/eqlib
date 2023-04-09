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
#include "GraphicsEngine.h"
#include "CXWnd.h"

#include "eqstd/string.h"

namespace eqlib {

class [[offsetcomments]] UnknownGFScreenData1
{
public:
	virtual void UnknownVirtual1() {}
	virtual void* UnknownVirtual2() { return nullptr; }
	virtual void* UnknownVirtual3() { return nullptr; }

/*0x00*/
/*0x08*/ eqstd::string string_08;
/*0x28*/ eqstd::string string_28;
/*0x48*/ eqstd::string string_48;
/*0x68*/ uint64_t      u64_68;    // = 0;
/*0x70*/ uint64_t      u64_70;
/*0x78*/ uint8_t       u8_78;     // = 255;
/*0x7c*/
};

class [[offsetcomments]] UnknownGFScreenData2
{
public:
/*0x00*/ uint8_t       u8_0[0x30]; // ??
/*0x30*/ uint64_t      u64_38;    // = 7
/*0x38*/ uint64_t      u64_40;    // = 8
/*0x40*/
};

class [[offsetcomments]] CGFScreenWnd : public CSidlScreenWnd
{
public:
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName, int IniFlags, int IniVersion, const char* BlockName);
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName);

/*0x2d8*/ UnknownGFScreenData1        gfData1;
/*0x358*/ UnknownGFScreenData2        gfData2;
/*0x398*/
};

} // namespace eqlib
