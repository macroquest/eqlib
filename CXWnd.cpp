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
// virtuals

// IsValid
// ~CXWnd
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawNC() const, CXWnd, DrawNC);
// Draw
// PostDraw
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawCursor(const CXPoint&, const CXRect&, bool&), CXWnd, DrawCursor);
// DrawChildItem
// DrawCaret
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawBackground() const, CXWnd, DrawBackground);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawTooltip(const CXWnd* wnd) const, CXWnd, DrawTooltip);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip) const, CXWnd, DrawTooltipAtPoint);
FORWARD_FUNCTION_TO_VTABLE(CXRect, CXWnd::GetMinimizedRect() const, CXWnd, GetMinimizedRect);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::DrawTitleBar(const CXRect&) const, CXWnd, DrawTitleBar);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR, CXWnd::GetCursorToDisplay() const, CXWnd, GetCursorToDisplay);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleLButtonDown(const CXPoint&, uint32_t), CXWnd, HandleLButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleLButtonUp(const CXPoint&, uint32_t), CXWnd, HandleLButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleLButtonHeld(const CXPoint&, uint32_t), CXWnd, HandleLButtonHeld);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleLButtonUpAfterHeld(const CXPoint&, uint32_t), CXWnd, HandleLButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleRButtonDown(const CXPoint&, uint32_t), CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleRButtonUp(const CXPoint&, uint32_t), CXWnd, HandleRButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleRButtonHeld(const CXPoint&, uint32_t), CXWnd, HandleRButtonHeld);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleRButtonUpAfterHeld(const CXPoint&, uint32_t), CXWnd, HandleRButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleWheelButtonDown(const CXPoint&, uint32_t), CXWnd, HandleWheelButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleWheelButtonUp(const CXPoint&, uint32_t), CXWnd, HandleWheelButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleMouseMove(const CXPoint&, uint32_t), CXWnd, HandleMouseMove);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleWheelMove(const CXPoint&, int, uint32_t), CXWnd, HandleWheelMove);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleKeyboardMsg(uint32_t, uint32_t, bool), CXWnd, HandleKeyboardMsg);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HandleMouseLeave(), CXWnd, HandleMouseLeave);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnDragDrop(SDragDropInfo*), CXWnd, OnDragDrop);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR, CXWnd::GetDragDropCursor(SDragDropInfo*) const, CXWnd, GetDragDropCursor);
FORWARD_FUNCTION_TO_VTABLE(bool, CXWnd::QueryDropOK(SDragDropInfo*) const, CXWnd, QueryDropOK);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnClickStick(CClickStickInfo*, uint32_t, bool), CXWnd, OnClickStick);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR, CXWnd::GetClickStickCursor(CClickStickInfo*) const, CXWnd, GetClickStickCursor);
FORWARD_FUNCTION_TO_VTABLE(bool, CXWnd::QueryClickStickDropOK(CClickStickInfo* fo) const, CXWnd, QueryClickStickDropOK);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::WndNotification(CXWnd*, uint32_t, void*), CXWnd, WndNotification);
FORWARD_FUNCTION_TO_VTABLE(void, CXWnd::OnWndNotification(), CXWnd, OnWndNotification);
// Activate
// Deactivate
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnShow(), CXWnd, OnShow);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnMove(const CXRect&), CXWnd, OnMove);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnResize(int, int), CXWnd, OnResize);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnBeginMoveOrResize(), CXWnd, OnBeginMoveOrResize);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnCompleteMoveOrResize(), CXWnd, OnCompleteMoveOrResize);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnMinimizeBox(), CXWnd, OnMinimizeBox);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnMaximizeBox(), CXWnd, OnMaximizeBox);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnTileBox(), CXWnd, OnTileBox);
// OnTile
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnSetFocus(CXWnd*), CXWnd, OnSetFocus);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnKillFocus(CXWnd*), CXWnd, OnKillFocus);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnProcessFrame(), CXWnd, OnProcessFrame);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnVScroll(EScrollCode, int), CXWnd, OnVScroll);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::OnHScroll(EScrollCode, int), CXWnd, OnHScroll);
// OnBroughtToTop
// OnActivate
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::Show(bool, bool, bool), CXWnd, Show);
FORWARD_FUNCTION_TO_VTABLE(bool, CXWnd::AboutToShow(), CXWnd, AboutToShow);
FORWARD_FUNCTION_TO_VTABLE(bool, CXWnd::AboutToHide(), CXWnd, AboutToHide);
// RequestDockInfo
// GetTooltip
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::HitTest(const CXPoint&, int*) const, CXWnd, HitTest);
FORWARD_FUNCTION_TO_VTABLE(CXRect, CXWnd::GetHitTestRect(int) const, CXWnd, GetHitTestRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect, CXWnd::GetInnerRect() const, CXWnd, GetInnerRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect, CXWnd::GetClientRect() const, CXWnd, GetClientRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect, CXWnd::GetClientClipRect() const, CXWnd, GetClientClipRect);
FORWARD_FUNCTION_TO_VTABLE(CXSize, CXWnd::GetMinSize(bool) const, CXWnd, GetMinSize);
FORWARD_FUNCTION_TO_VTABLE(CXSize, CXWnd::GetMaxSize(bool) const, CXWnd, GetMaxSize);
// GetUntileSize
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::UpdateGeometry(const CXRect&, bool, bool, bool, bool), CXWnd, UpdateGeometry);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::Move(const CXPoint&), CXWnd, Move);
// SetWindowText
FORWARD_FUNCTION_TO_VTABLE(CXWnd*, CXWnd::GetChildWndAt(const CXPoint&, bool, bool) const, CXWnd, GetChildWndAt);
FORWARD_FUNCTION_TO_VTABLE(CScreenPieceTemplate*, CXWnd::GetSidlPiece(const CXStr&, bool) const, CXWND, GetSidlPiece);
// GetWindowName
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::SetVScrollPos(int), CXWnd, SetVScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::SetHScrollPos(int), CXWnd, SetHScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::AutoSetVScrollPos(CXRect), CXWnd, AutoSetVScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int, CXWnd::AutoSetHScrollPos(CXRect), CXWnd, AutoSetHScrollPos);
FORWARD_FUNCTION_TO_VTABLE(void, CXWnd::SetAttributesFromSidl(CParamScreenPiece*), CXWnd, SetAttributesFromSidl);
// OnReloadSidl
// HasActivatedFirstTimeAlert
// SetHasActivatedFirstTimeAlert
// GetMinClientSize
// GetMaxClientSize
// Unknown0x160
FORWARD_FUNCTION_TO_VTABLE(void, CXWnd::UpdateLayout(bool), CXWnd, UpdateLayout);

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

std::string_view CXWnd::GetXMLNameSv() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->Name;
	}

	return {};
}

CXStr CXWnd::GetTypeName() const
{
	if (CXMLData* pXMLData = GetXMLData())
	{
		return pXMLData->TypeName;
	}

	return UITypeToString(GetType());
}

std::string_view CXWnd::GetTypeNameSv() const
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
	//case UI_TextRGB: return "TextRGB";
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
	case UI_HtmlComponent: return "HtmlComponent";
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

FORWARD_FUNCTION_TO_VTABLE2(int, CSidlScreenWnd::OnResize(int, int), CSidlScreenWnd, CXWnd, OnResize);
FORWARD_FUNCTION_TO_VTABLE2(int, CSidlScreenWnd::DrawBackground() const, CSidlScreenWnd, CXWnd, DrawBackground);
FORWARD_FUNCTION_TO_VTABLE2(int, CSidlScreenWnd::WndNotification(CXWnd*, uint32_t, void*), CSidlScreenWnd, CXWnd, WndNotification);
FORWARD_FUNCTION_TO_VTABLE2(int, CSidlScreenWnd::HandleRButtonDown(const CXPoint&, uint32_t), CSidlScreenWnd, CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, CSidlScreenWnd::OnShow(), CSidlScreenWnd, CXWnd, OnShow);
FORWARD_FUNCTION_TO_VTABLE2(CScreenPieceTemplate*, CSidlScreenWnd::GetSidlPiece(const CXStr&, bool) const, CSidlScreenWnd, CXWnd, GetSidlPiece);
FORWARD_FUNCTION_TO_VTABLE2(const CXStr*, CSidlScreenWnd::GetWindowName() const, CSidlScreenWnd, CXWnd, GetWindowName);
FORWARD_FUNCTION_TO_VTABLE2(bool, CSidlScreenWnd::HasActivatedFirstTimeAlert() const, CSidlScreenWnd, CXWnd, HasActivatedFirstTimeAlert);
FORWARD_FUNCTION_TO_VTABLE2(void, CSidlScreenWnd::SetHasActivatedFirstTimeAlert(bool), CSidlScreenWnd, CXWnd, SetHasActivatedFirstTimeAlert);

FORWARD_FUNCTION_TO_VTABLE(int, CSidlScreenWnd::OnZone(), CSidlScreenWnd, OnZone);
FORWARD_FUNCTION_TO_VTABLE(int, CSidlScreenWnd::OnPreZone(), CSidlScreenWnd, OnPreZone);
FORWARD_FUNCTION_TO_VTABLE(void, CSidlScreenWnd::LoadIniInfo(), CSidlScreenWnd, LoadIniInfo);
FORWARD_FUNCTION_TO_VTABLE(void, CSidlScreenWnd::StoreIniInfo(), CSidlScreenWnd, StoreIniInfo);
FORWARD_FUNCTION_TO_VTABLE(CSidlScreenWnd*, CSidlScreenWnd::AsSidlScreenWnd(), CSidlScreenWnd, AsSidlScreenWnd);
FORWARD_FUNCTION_TO_VTABLE(bool, CSidlScreenWnd::GetScreenWndType(), CSidlScreenWnd, GetScreenWndType);

#ifdef CSidlScreenWnd__dCSidlScreenWnd_x
// defined in AssemblyFunctions.asm
DESTRUCTOR_AT_ADDRESS(CSidlScreenWnd::~CSidlScreenWnd(), CSidlScreenWnd__dCSidlScreenWnd);
#endif
#ifdef CSidlScreenWnd__CSidlScreenWnd1_x
// defined in AssemblyFunctions.asm
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen, int, int, char*), CSidlScreenWnd__CSidlScreenWnd1);
#endif
#ifdef CSidlScreenWnd__CSidlScreenWnd2_x
// defined in AssemblyFunctions.asm
CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen), CSidlScreenWnd__CSidlScreenWnd2);
#endif

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
