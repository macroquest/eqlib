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

#include "CXStr.h"

#include <cstdint>

namespace eqlib {

//----------------------------------------------------------------------------
// helpers


// "Controller" helper class
class ControllerBase
{
public:
	virtual ~ControllerBase() {}
	virtual void* Unknown0x04(CXStr& unknown1, int unknown2) { return nullptr; }
	virtual void Unknown0x08() {}
	virtual bool AboutToShow() { return true; }
	virtual bool AboutToHide() { return true; }
	virtual void WndNotification(CXWnd* sender, uint32_t message, void* data) {}
	virtual void Unknown0x14(uint32_t) = 0;
	virtual void Unknown0x18(const CXStr&) {}
};

class [[offsetcomments]] ControllerFactory
{
public:
	virtual ~ControllerFactory();

	// creates controllers
	virtual ControllerBase* CreateController(const CXStr& controller, int type);

	// this is probably wrong but might be the right size.
	/*0x04*/ HashTable<void*, int, ResizePolicyNoShrink> Factories;
	/*0x14*/
};

class [[offsetcomments]] ControllerManager
{
public:
	virtual ~ControllerManager();

	/*0x04*/ ControllerFactory* DefaultControllerFactory;
	/*0x08*/ HashTable<ControllerFactory*> ControllerFactories;
	/*0x18*/
};





} // namespace eqlib
