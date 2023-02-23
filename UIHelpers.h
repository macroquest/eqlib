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

#include "CXStr.h"

#include <cstdint>

namespace eqlib {

//----------------------------------------------------------------------------
// helpers


// "Controller" helper class
class ControllerBase
{
public:
	EQLIB_OBJECT virtual ~ControllerBase() {}
	EQLIB_OBJECT virtual ControllerBase* CreateController(CXStr& controllerName, int windowType) { return nullptr; }
	EQLIB_OBJECT virtual void OnProcessFrame() {}
	EQLIB_OBJECT virtual bool AboutToShow() { return true; }
	EQLIB_OBJECT virtual bool AboutToHide() { return true; }
	EQLIB_OBJECT virtual void WndNotification(CXWnd* sender, uint32_t message, void* data) {}
	EQLIB_OBJECT virtual void SetWindow(CXWnd* pWindow) = 0;
	EQLIB_OBJECT virtual void Init(const CXStr&) {}
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

//----------------------------------------------------------------------------

// A special type of controller that we create that allow us to hook an existing window
class CXWndControllerHook : public ControllerBase
{
public:
	EQLIB_OBJECT CXWndControllerHook()
	{
	}

	EQLIB_OBJECT virtual ~CXWndControllerHook()
	{
		Unhook();
	}

	EQLIB_OBJECT virtual ControllerBase* CreateController(CXStr& controllerName, int windowType) override
	{
		if (m_pOriginalController)
			return m_pOriginalController->CreateController(controllerName, windowType);

		return ControllerBase::CreateController(controllerName, windowType);
	}

	EQLIB_OBJECT virtual void OnProcessFrame() override
	{
		if (m_pOriginalController)
			m_pOriginalController->OnProcessFrame();
	}

	EQLIB_OBJECT virtual bool AboutToShow() override
	{
		if (m_pOriginalController)
			return m_pOriginalController->AboutToShow();

		return ControllerBase::AboutToShow();
	}

	EQLIB_OBJECT virtual bool AboutToHide() override
	{
		if (m_pOriginalController)
			return m_pOriginalController->AboutToShow();

		return ControllerBase::AboutToHide();
	}

	EQLIB_OBJECT virtual void WndNotification(CXWnd* sender, uint32_t message, void* data) override
	{
		if (m_pOriginalController)
			m_pOriginalController->WndNotification(sender, message, data);
	}

	EQLIB_OBJECT virtual void SetWindow(CXWnd* pWindow) override
	{
		if (m_pOriginalController)
			m_pOriginalController->SetWindow(pWindow);
	}

	EQLIB_OBJECT virtual void Init(const CXStr& data) override
	{
		if (m_pOriginalController)
			m_pOriginalController->Init(data);
	}

	EQLIB_OBJECT virtual void OnHooked() {}
	EQLIB_OBJECT virtual void OnAboutToUnhook() {}

	EQLIB_OBJECT void Hook(CXWnd* pWnd);
	EQLIB_OBJECT bool Unhook();

protected:
	CXWnd* m_pWnd = nullptr;

private:
	ControllerBase* m_pOriginalController = nullptr;
};

} // namespace eqlib
