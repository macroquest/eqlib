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
#include "eqstd/unordered_map.h"

namespace eqlib {

class CGFScreenWnd;

class [[offsetcomments]] UIComponent
{
public:
	virtual eqstd::string GetTypeName() const { return ""; }
	virtual void SyncFromJS() {}
	virtual void SyncToJS() {}

	void Setup(CGFScreenWnd* parentScreenWnd, const std::string& name, bool required, CXWnd* wnd);

/*0x00*/ // vftable
/*0x08*/ eqstd::string name;
/*0x28*/ eqstd::string fullName;
/*0x48*/ eqstd::string modelPrefix;
/*0x68*/ CGFScreenWnd* parent;
/*0x70*/ CXWnd*        wnd;
/*0x78*/
};

class [[offsetcomments]] UIScreenComponent : public UIComponent
{
public:
/*0x78*/ uint8_t       u8_78;     // = 255
/*0x7c*/ };

class [[offsetcomments]] CGFScreenWnd : public CSidlScreenWnd
{
public:
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName, int IniFlags, int IniVersion, const char* BlockName);
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName);

	void SetupComponent(UIComponent& component, const std::string& ScreenID, bool required);

/*0x2d8*/ UIScreenComponent                                 WindowComponent;
/*0x358*/ eqstd::unordered_map<eqstd::string, UIComponent*> ChildComponents;
/*0x398*/
};

class [[offsetcomments]] CGameFaceManager
{
public:

};

} // namespace eqlib
