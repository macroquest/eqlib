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

#include "pch.h"
#include "Common.h"
#include "CXWnd.h"
#include "EQClasses.h"
#include "Globals.h"

#include "WindowOverride.h"

namespace eqlib {

//----------------------------------------------------------------------------

CXWnd::VirtualFunctionTable* CXWnd::sm_vftable = nullptr;
CSidlScreenWnd::VirtualFunctionTable* CSidlScreenWnd::sm_vftable = nullptr;

namespace detail {
	CXWndTrampoline<CXWnd>::VirtualFunctionTable* s_baseCXWndTrampolineVTable = nullptr;
	CSidlScreenWndTrampoline<CSidlScreenWnd>::VirtualFunctionTable* s_baseCSidlScreenWndTrampolineVFTable = nullptr;
}

//----------------------------------------------------------------------------

CONSTRUCTOR_AT_ADDRESS(CXWnd::CXWnd(CXWnd*, uint32_t, CXRect), CXWnd__CXWnd);
DESTRUCTOR_AT_ADDRESS(CXWnd::~CXWnd(), CXWnd__dCXWnd);

//----------------------------------------------------------------------------

void CXWnd::SetClientRectDirty(bool dirty)
{
	bClientRectChanged = dirty;
	if (bClientRectChanged)
	{
		bClientClipRectChanged = true;
		bScreenClipRectChanged = true;

		for (CXWnd* wnd = GetFirstNode(); wnd != nullptr; wnd = wnd->GetNext())
		{
			wnd->SetClientRectDirty(true);
		}
	}
}

//----------------------------------------------------------------------------

UIType CXWnd::GetType() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return mgr->GetWindowType(this);
}

CXMLData* CXWnd::GetXMLData(CXMLDataManager* dataMgr) const
{
	if (int xmlIndex = GetXMLIndex())
	{
		return dataMgr->GetXMLData(xmlIndex);
	}

	return nullptr;
}

CXMLData* CXWnd::GetXMLData() const
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return GetXMLData(mgr);
}

static CXWnd* RecurseAndFindName(CXMLDataManager* dataMgr, CXWnd* pWnd, const CXStr& Name)
{
	if (!pWnd)
	{
		return nullptr;
	}

	if (CXMLData* pXMLData = pWnd->GetXMLData(dataMgr))
	{
		if (mq::ci_equals(pXMLData->Name, Name))
		{
			return pWnd;
		}

		if (mq::ci_equals(pXMLData->ScreenID, Name))
		{
			return pWnd;
		}
	}

	if (CXWnd* pChildWnd = pWnd->GetFirstNode())
	{
		if (CXWnd* tmp = RecurseAndFindName(dataMgr, pChildWnd, Name))
		{
			return tmp;
		}
	}

	if (CXWnd* pSiblingWnd = pWnd->GetNext())
	{
		return RecurseAndFindName(dataMgr, pSiblingWnd, Name);
	}

	return nullptr;
}

CXWnd* CXWnd::GetChildItem(const CXStr& Name)
{
	CXMLDataManager* mgr = pSidlMgr->GetParamManager();
	return GetChildItem(mgr, Name);
}

CXWnd* CXWnd::GetChildItem(CXMLDataManager* dataMgr, const CXStr& Name)
{
	return RecurseAndFindName(dataMgr, this, Name);
}

CXStr CXWnd::GetXMLName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->Name;
	}

	return CXStr();
}

CXStr CXWnd::GetTypeName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->TypeName;
	}

	return UITypeToString(GetType());
}

const char* UITypeToString(UIType type)
{
	switch (type)
	{
	case UI_Unknown: return "CXWnd";           // a dynamically created CXWnd can have this type
	case UI_Class: return "Class";
	case UI_RGB: return "RGB";
	case UI_TextRGB: return "TextRGB";
	case UI_Point: return "Point";
	case UI_Size: return "Size";
	case UI_TextureInfo: return "TextureInfo";
	case UI_Frame: return "Frame";
	case UI_Ui2DAnimation: return "Ui2DAnimation";
	case UI_ButtonDrawTemplate: return "ButtonDrawTemplate";
	case UI_GaugeDrawTemplate: return "GaugeDrawTemplate";
	case UI_SpellGemDrawTemplate: return "SpellGemDrawTemplate";
	case UI_FrameTemplate: return "FrameTemplate";
	case UI_ScrollbarDrawTemplate: return "ScrollbarDrawTemplate";
	case UI_WindowDrawTemplate: return "WindowDrawTemplate";
	case UI_SliderDrawTemplate: return "SliderDrawTemplate";
	case UI_ScreenPiece: return "ScreenPiece";
	case UI_StaticScreenPiece: return "StaticScreenPiece";
	case UI_StaticAnimation: return "StaticAnimation";
	case UI_StaticTintedBlendAnimation: return "StaticTintedBlendAnimation";
	case UI_StaticText: return "StaticText";
	case UI_StaticFrame: return "StaticFrame";
	case UI_StaticHeader: return "StaticHeader";
	case UI_LayoutStrategy: return "LayoutStrategy";
	case UI_LayoutVertical: return "LayoutVertical";
	case UI_LayoutHorizontal: return "LayoutHorizontal";
	case UI_Control: return "Control";
	case UI_TemplateAssoc: return "TemplateAssoc";
	case UI_TemplateScreen: return "TemplateScreen";
	case UI_ListboxColumn: return "ListboxColumn";
	case UI_Listbox: return "Listbox";
	case UI_Button: return "Button";
	case UI_Gauge: return "Gauge";
	case UI_SpellGem: return "SpellGem";
	case UI_InvSlot: return "InvSlot";
	case UI_EditBox: return "Editbox";
	case UI_Slider: return "Slider";
	case UI_Label: return "Label";
	case UI_STMLBox: return "STMLbox";
	case UI_TreeView: return "TreeView";
	case UI_Combobox: return "Combobox";
	case UI_Page: return "Page";
	case UI_TabBox: return "TabBox";
	case UI_LayoutBox: return "LayoutBox";
	case UI_HorizontalLayoutBox: return "HorizontalLayoutBox";
	case UI_VerticalLayoutBox: return "VerticalLayoutBox";
	case UI_FinderBox: return "FinderBox";
	case UI_TileLayoutBox: return "TileLayoutBox";
	case UI_NamedTemplatePiece: return "NamedTemplatePiece";
	case UI_TemplateContainer: return "TemplateContainer";
	case UI_Screen: return "Screen";
	case UI_SuiteDefaults: return "SuiteDefaults";
	case UI_Screens: return "Screens";
	case UI_TopLevelWindowList: return "TopLevelWindowList";
	case UI_HotButton: return "HotButton";
	default: return "Unknown(new)";
	}
}

const char* EWndRuntimeTypeToString(EWndRuntimeType type)
{
	switch (type)
	{
	case WRT_WND: return "WND";
	case WRT_LISTWND: return "LISTWND";
	case WRT_EDITWND: return "EDITWND";
	case WRT_TREEWND: return "TREEWND";
	case WRT_PAGEWND: return "PAGEWND";
	case WRT_TABWND: return "TABWND";
	case WRT_HOTKEYWND: return "HOTKEYWND";
	case WRT_EDITHOTKEYWND: return "EDITHOTKEYWND";
	case WRT_RANGESLIDERWND: return "RANGESLIDERWND";
	case WRT_STMLWND: return "STMLWND";
	case WRT_MODALMESSAGEWND: return "MODALMESSAGEWND";
	case WRT_CHECKBOXWND: return "CHECKBOXWND";
	case WRT_SIDLSCREENWND: return "SIDLSCREENWND";
	case WRT_SLIDERWND: return "SLIDERWND";
	case WRT_LABEL: return "LABEL";
	case WRT_BUTTON: return "BUTTON";
	case WRT_GAUGE: return "GAUGE";
	case WRT_COMBOBOX: return "COMBOBOX";
	case WRT_CHATWND: return "CHATWND";
	case WRT_HELPWND: return "HELPWND";
	default: return "UNKNOWN";
	}
}

void* CXWnd::operator new(std::size_t sz)
{
	return eqAlloc(sz);
}

void* CXWnd::operator new[](std::size_t sz)
{
	return eqAlloc(sz);
}

void CXWnd::operator delete(void* ptr)
{
	eqFree(ptr);
}

void CXWnd::operator delete[](void* ptr)
{
	eqFree(ptr);
}

//============================================================================
//============================================================================

// CSidlScreenWnd

// defined in AssemblyFunctions.asm:
DESTRUCTOR_AT_ADDRESS(CSidlScreenWnd::~CSidlScreenWnd(), CSidlScreenWnd__dCSidlScreenWnd);
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen, int, int, char*), CSidlScreenWnd__CSidlScreenWnd1);
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen), CSidlScreenWnd__CSidlScreenWnd2);

//----------------------------------------------------------------------------

void InitializeCXWnd()
{
	CXWnd::sm_vftable = reinterpret_cast<CXWnd::VirtualFunctionTable*>(CXWnd__vftable);
	CSidlScreenWnd::sm_vftable = reinterpret_cast<CSidlScreenWnd::VirtualFunctionTable*>(CSidlScreenWnd__vftable);
}

//----------------------------------------------------------------------------

void CXWndControllerHook::Hook(CXWnd* pWnd)
{
	if (m_pWnd == pWnd) return;
	if (m_pWnd && m_pWnd != pWnd) Unhook();

	m_pWnd = pWnd;
	m_pOriginalController = m_pWnd->pController;
	m_pWnd->pController = this;

	OnHooked();
}

bool CXWndControllerHook::Unhook()
{
	if (m_pWnd)
	{
		OnAboutToUnhook();

		m_pWnd->pController = m_pOriginalController;

		m_pWnd = nullptr;
		m_pOriginalController = nullptr;
		return true;
	}

	return false;
}

} // namespace eqlib
