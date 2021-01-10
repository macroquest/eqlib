/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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

namespace eqlib {

// NOTE that using FUNCTION_AT_VIRTUAL_ADDRESS has a high risk of creating infinite
// recursive calls if trying to call base class. If we want to do it this way, we instead
// need to read from static vftable, not the instance in the current class.

//----------------------------------------------------------------------------

CXWnd::VirtualFunctionTable* CXWnd::sm_vftable = nullptr;
CSidlScreenWnd::VirtualFunctionTable* CSidlScreenWnd::sm_vftable = nullptr;

//----------------------------------------------------------------------------

// defined in AssemblyFunctions.asm
// FUNCTION_AT_ADDRESS(CXWnd::CXWnd(CXWnd*, uint32_t, CXRect), CXWnd__CXWnd);
// FUNCTION_AT_ADDRESS(CXWnd::~CXWnd(), CXWnd__dCXWnd);

//----------------------------------------------------------------------------
// virtuals

// IsValid
// ~CXWnd
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawNC() const, CXWnd, DrawNC);
// Draw
// PostDraw
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawCursor(const CXPoint&, const CXRect&, bool&), CXWnd, DrawCursor);
// DrawChildItem
// DrawCaret
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawBackground() const, CXWnd, DrawBackground);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawTooltip(const CXWnd* wnd) const, CXWnd, DrawTooltip);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip) const, CXWnd, DrawTooltipAtPoint);
FORWARD_FUNCTION_TO_VTABLE(CXRect CXWnd::GetMinimizedRect() const, CXWnd, GetMinimizedRect);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::DrawTitleBar(const CXRect&) const, CXWnd, DrawTitleBar);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR CXWnd::GetCursorToDisplay() const, CXWnd, GetCursorToDisplay);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleLButtonDown(const CXPoint&, uint32_t), CXWnd, HandleLButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleLButtonUp(const CXPoint&, uint32_t), CXWnd, HandleLButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleLButtonHeld(const CXPoint&, uint32_t), CXWnd, HandleLButtonHeld);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleLButtonUpAfterHeld(const CXPoint&, uint32_t), CXWnd, HandleLButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleRButtonDown(const CXPoint&, uint32_t), CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleRButtonUp(const CXPoint&, uint32_t), CXWnd, HandleRButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleRButtonHeld(const CXPoint&, uint32_t), CXWnd, HandleRButtonHeld);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleRButtonUpAfterHeld(const CXPoint&, uint32_t), CXWnd, HandleRButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleWheelButtonDown(const CXPoint&, uint32_t), CXWnd, HandleWheelButtonDown);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleWheelButtonUp(const CXPoint&, uint32_t), CXWnd, HandleWheelButtonUp);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleMouseMove(const CXPoint&, uint32_t), CXWnd, HandleMouseMove);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleWheelMove(const CXPoint&, int, uint32_t), CXWnd, HandleWheelMove);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleKeyboardMsg(uint32_t, uint32_t, bool), CXWnd, HandleKeyboardMsg);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HandleMouseLeave(), CXWnd, HandleMouseLeave);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnDragDrop(SDragDropInfo*), CXWnd, OnDragDrop);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR CXWnd::GetDragDropCursor(SDragDropInfo*) const, CXWnd, GetDragDropCursor);
FORWARD_FUNCTION_TO_VTABLE(bool CXWnd::QueryDropOK(SDragDropInfo*) const, CXWnd, QueryDropOK);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnClickStick(CClickStickInfo*, uint32_t, bool), CXWnd, OnClickStick);
FORWARD_FUNCTION_TO_VTABLE(HCURSOR CXWnd::GetClickStickCursor(CClickStickInfo*) const, CXWnd, GetClickStickCursor);
FORWARD_FUNCTION_TO_VTABLE(bool CXWnd::QueryClickStickDropOK(CClickStickInfo* fo) const, CXWnd, QueryClickStickDropOK);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::WndNotification(CXWnd*, uint32_t, void*), CXWnd, WndNotification);
FORWARD_FUNCTION_TO_VTABLE(void CXWnd::OnWndNotification(), CXWnd, OnWndNotification);
// Activate
//Deactivate
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnShow(), CXWnd, OnShow);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnMove(const CXRect&), CXWnd, OnMove);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnResize(int, int), CXWnd, OnResize);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnBeginMoveOrResize(), CXWnd, OnBeginMoveOrResize);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnCompleteMoveOrResize(), CXWnd, OnCompleteMoveOrResize);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnMinimizeBox(), CXWnd, OnMinimizeBox);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnMaximizeBox(), CXWnd, OnMaximizeBox);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnTileBox(), CXWnd, OnTileBox);
// OnTile
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnSetFocus(CXWnd*), CXWnd, OnSetFocus);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnKillFocus(CXWnd*), CXWnd, OnKillFocus);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnProcessFrame(), CXWnd, OnProcessFrame);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnVScroll(EScrollCode, int), CXWnd, OnVScroll);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::OnHScroll(EScrollCode, int), CXWnd, OnHScroll);
// OnBroughtToTop
// OnActivate
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::Show(bool, bool, bool), CXWnd, Show);
FORWARD_FUNCTION_TO_VTABLE(bool CXWnd::AboutToShow(), CXWnd, AboutToShow);
FORWARD_FUNCTION_TO_VTABLE(bool CXWnd::AboutToHide(), CXWnd, AboutToHide);
// RequestDockInfo
// GetTooltip
FORWARD_FUNCTION_TO_VTABLE(void CXWnd::Unknown0x0EC(), CXWnd, Unknown0x0ec);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::HitTest(const CXPoint&, int*) const, CXWnd, HitTest);
FORWARD_FUNCTION_TO_VTABLE(CXRect CXWnd::GetHitTestRect(int) const, CXWnd, GetHitTestRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect CXWnd::GetInnerRect() const, CXWnd, GetInnerRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect CXWnd::GetClientRect() const, CXWnd, GetClientRect);
FORWARD_FUNCTION_TO_VTABLE(CXRect CXWnd::GetClientClipRect() const, CXWnd, GetClientClipRect);
FORWARD_FUNCTION_TO_VTABLE(CXSize CXWnd::GetMinSize(bool) const, CXWnd, GetMinSize);
FORWARD_FUNCTION_TO_VTABLE(CXSize CXWnd::GetMaxSize(bool) const, CXWnd, GetMaxSize);
// GetUntileSize
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::Move(const CXRect&, bool, bool, bool, bool), CXWnd, Move_Rect);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::Move(const CXPoint&), CXWnd, Move_Point);
// SetWindowText
FORWARD_FUNCTION_TO_VTABLE(CXWnd* CXWnd::GetChildWndAt(const CXPoint&, bool, bool) const, CXWnd, GetChildWndAt);
FORWARD_FUNCTION_TO_VTABLE(CScreenPieceTemplate* CXWnd::GetSidlPiece(const CXStr&, bool) const, CXWND, GetSidlPiece);
// GetWindowName
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::SetVScrollPos(int), CXWnd, SetVScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::SetHScrollPos(int), CXWnd, SetHScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::AutoSetVScrollPos(CXRect), CXWnd, AutoSetVScrollPos);
FORWARD_FUNCTION_TO_VTABLE(int CXWnd::AutoSetHScrollPos(CXRect), CXWnd, AutoSetHScrollPos);
FORWARD_FUNCTION_TO_VTABLE(void CXWnd::SetAttributesFromSidl(CParamScreenPiece*), CXWnd, SetAttributesFromSidl);
// OnReloadSidl
// HasActivatedFirstTimeAlert
// SetHasActivatedFirstTimeAlert
// GetMinClientSize
// GetMaxClientSize
// Unknown0x160
FORWARD_FUNCTION_TO_VTABLE(void CXWnd::UpdateLayout(bool), CXWnd, UpdateLayout);

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

UIType CXMLDataManager::GetWindowType(const CXWnd* wnd) const
{
	if (int xmlIndex = wnd->GetXMLIndex())
	{
		if (CXMLData* pXmlData = GetXMLData(xmlIndex))
			return pXmlData->Type;
	}

	return UI_Unknown;
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
	case UI_RGBText: return "RGBText";
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
	case UI_EditBox: return "EditBox";
	case UI_Slider: return "Slider";
	case UI_Label: return "Label";
	case UI_STMLBox: return "STMLBox";
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
	case WRT_HTMLWND: return "HTMLWND";
	case WRT_HOTKEYWND: return "HOTKEYWND";
	case WRT_EDITHOTKEYWND: return "EDITHOTKEYWND";
	case WRT_RANGESLIDERWND: return "RANGESLIDERWND";
	case WRT_STMLWND: return "STMLWND";
	case WRT_BROWSERWND: return "BROWSERWND";
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



#ifdef CXWnd__IsType_x
FUNCTION_AT_ADDRESS(bool CXWnd::IsType(enum EWndRuntimeType) const, CXWnd__IsType);
#endif
#ifdef CXWnd__SetFocus_x
FUNCTION_AT_ADDRESS(CXWnd* CXWnd::SetFocus(), CXWnd__SetFocus);
#endif
#ifdef CXWnd__ClrFocus_x
FUNCTION_AT_ADDRESS(void CXWnd::ClrFocus(), CXWnd__ClrFocus);
#endif
#ifdef CXWnd__Destroy_x
FUNCTION_AT_ADDRESS(int CXWnd::Destroy(), CXWnd__Destroy);
#endif
#ifdef CXWnd__Refade_x
FUNCTION_AT_ADDRESS(void CXWnd::Refade(), CXWnd__Refade);
#endif
#ifdef CXWnd__ProcessTransition_x
FUNCTION_AT_ADDRESS(int CXWnd::ProcessTransition(), CXWnd__ProcessTransition);
#endif
#ifdef CXWnd__BringToTop_x
FUNCTION_AT_ADDRESS(void CXWnd::BringToTop(bool), CXWnd__BringToTop);
#endif
#ifdef CXWnd__StartFade_x
FUNCTION_AT_ADDRESS(void CXWnd::StartFade(unsigned char, uint32_t), CXWnd__StartFade);
#endif
#ifdef CXWnd__Minimize_x
FUNCTION_AT_ADDRESS(int CXWnd::Minimize(bool), CXWnd__Minimize);
#endif
#ifdef CXWnd__IsReallyVisible_x
FUNCTION_AT_ADDRESS(bool CXWnd::IsReallyVisible() const, CXWnd__IsReallyVisible);
#endif
#ifdef CXWnd__DoAllDrawing_x
FUNCTION_AT_ADDRESS(int CXWnd::DoAllDrawing() const, CXWnd__DoAllDrawing);
#endif
#ifdef CXWnd__DrawChildren_x
FUNCTION_AT_ADDRESS(int CXWnd::DrawChildren() const, CXWnd__DrawChildren);
#endif
#ifdef CXWnd__Center_x
FUNCTION_AT_ADDRESS(void CXWnd::Center(), CXWnd__Center);
#endif
#ifdef CXWnd__Right_x
FUNCTION_AT_ADDRESS(void CXWnd::Right(), CXWnd__Right);
#endif
#ifdef CXWnd__GetScreenClipRect_x
FUNCTION_AT_ADDRESS(CXRect CXWnd::GetScreenClipRect() const, CXWnd__GetScreenClipRect);
#endif
#ifdef CXWnd__IsDescendantOf_x
FUNCTION_AT_ADDRESS(bool CXWnd::IsDescendantOf(CXWnd const*) const, CXWnd__IsDescendantOf);
#endif
#ifdef CXWnd__GetBorderFrame_x
FUNCTION_AT_ADDRESS(CTAFrameDraw const* CXWnd::GetBorderFrame() const, CXWnd__GetBorderFrame);
#endif
#ifdef CXWnd__GetScreenRect_x
FUNCTION_AT_ADDRESS(CXRect CXWnd::GetScreenRect() const, CXWnd__GetScreenRect);
#endif
#ifdef CXWnd__Resize_x
FUNCTION_AT_ADDRESS(int CXWnd::Resize(int, int, bool, bool, bool), CXWnd__Resize);
#endif
#ifdef CXWnd__SetParent_x
FUNCTION_AT_ADDRESS(CXWnd* CXWnd::SetParent(CXWnd*, bool), CXWnd__SetParent);
#endif
#ifdef CXWnd__SetMouseOver_x
FUNCTION_AT_ADDRESS(void CXWnd::SetMouseOver(bool), CXWnd__SetMouseOver);
#endif
#ifdef CXWnd__SetKeyTooltip_x
FUNCTION_AT_ADDRESS(void CXWnd::SetKeyTooltip(int, int), CXWnd__SetKeyTooltip);
#endif
#ifdef CXWnd__SetFont_x
FUNCTION_AT_ADDRESS(int CXWnd::SetFont(CTextureFont*), CXWnd__SetFont);
#endif

//============================================================================
//============================================================================

// CSidlScreenWnd

FORWARD_FUNCTION_TO_VTABLE2(int CSidlScreenWnd::OnResize(int, int), CSidlScreenWnd, CXWnd, OnResize);
FORWARD_FUNCTION_TO_VTABLE2(int CSidlScreenWnd::DrawBackground() const, CSidlScreenWnd, CXWnd, DrawBackground);
FORWARD_FUNCTION_TO_VTABLE2(int CSidlScreenWnd::WndNotification(CXWnd*, uint32_t, void*), CSidlScreenWnd, CXWnd, WndNotification);
FORWARD_FUNCTION_TO_VTABLE2(int CSidlScreenWnd::HandleRButtonDown(const CXPoint&, uint32_t), CSidlScreenWnd, CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int CSidlScreenWnd::OnShow(), CSidlScreenWnd, CXWnd, OnShow);
FORWARD_FUNCTION_TO_VTABLE2(CScreenPieceTemplate* CSidlScreenWnd::GetSidlPiece(const CXStr&, bool) const, CSidlScreenWnd, CXWnd, GetSidlPiece);
FORWARD_FUNCTION_TO_VTABLE2(const CXStr* CSidlScreenWnd::GetWindowName() const, CSidlScreenWnd, CXWnd, GetWindowName);
FORWARD_FUNCTION_TO_VTABLE2(bool CSidlScreenWnd::HasActivatedFirstTimeAlert() const, CSidlScreenWnd, CXWnd, HasActivatedFirstTimeAlert);
FORWARD_FUNCTION_TO_VTABLE2(void CSidlScreenWnd::SetHasActivatedFirstTimeAlert(bool), CSidlScreenWnd, CXWnd, SetHasActivatedFirstTimeAlert);

FORWARD_FUNCTION_TO_VTABLE(int CSidlScreenWnd::OnZone(), CSidlScreenWnd, OnZone);
FORWARD_FUNCTION_TO_VTABLE(int CSidlScreenWnd::OnPreZone(), CSidlScreenWnd, OnPreZone);
FORWARD_FUNCTION_TO_VTABLE(void CSidlScreenWnd::LoadIniInfo(), CSidlScreenWnd, LoadIniInfo);
FORWARD_FUNCTION_TO_VTABLE(void CSidlScreenWnd::StoreIniInfo(), CSidlScreenWnd, StoreIniInfo);
FORWARD_FUNCTION_TO_VTABLE(CSidlScreenWnd* CSidlScreenWnd::AsSidlScreenWnd(), CSidlScreenWnd, AsSidlScreenWnd);
FORWARD_FUNCTION_TO_VTABLE(bool CSidlScreenWnd::GetScreenWndType(), CSidlScreenWnd, GetScreenWndType);

#ifdef CSidlScreenWnd__dCSidlScreenWnd_x
// defined in AssemblyFunctions.asm
//DESTRUCTOR_AT_ADDRESS(CSidlScreenWnd::~CSidlScreenWnd(), CSidlScreenWnd__dCSidlScreenWnd);
#endif
#ifdef CSidlScreenWnd__CSidlScreenWnd1_x
// defined in AssemblyFunctions.asm
//CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen, int, int, char*), CSidlScreenWnd__CSidlScreenWnd1);
#endif
#ifdef CSidlScreenWnd__CSidlScreenWnd2_x
// defined in AssemblyFunctions.asm
//CONSTRUCTOR_AT_ADDRESS(CSidlScreenWnd::CSidlScreenWnd(CXWnd* pParent, const CXStr& Screen), CSidlScreenWnd__CSidlScreenWnd2);
#endif
#ifdef CSidlScreenWnd__Init_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::Init(CXWnd*, uint32_t, const CXRect&, const CXStr&, int, char*), CSidlScreenWnd__Init);
#endif
#ifdef CSidlScreenWnd__Init1_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::Init(int, const CXStr&, int, int, int), CSidlScreenWnd__Init1);
#endif
#ifdef CSidlScreenWnd__SetScreen_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::SetScreen(CXStr*), CSidlScreenWnd__SetScreen);
#endif
#ifdef CSidlScreenWnd__LoadSidlScreen_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::LoadSidlScreen(), CSidlScreenWnd__LoadSidlScreen);
#endif
#ifdef CSidlScreenWnd__CalculateVSBRange_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::CalculateVSBRange(), CSidlScreenWnd__CalculateVSBRange);
#endif
#ifdef CSidlScreenWnd__CalculateHSBRange_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::CalculateHSBRange(), CSidlScreenWnd__CalculateHSBRange);
#endif
#ifdef CSidlScreenWnd__DrawSidlPiece_x
FUNCTION_AT_ADDRESS(int CSidlScreenWnd::DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const, CSidlScreenWnd__DrawSidlPiece);
#endif
#ifdef CSidlScreenWnd__GetSidlPieceRect_x
FUNCTION_AT_ADDRESS(CXRect CSidlScreenWnd::GetSidlPieceRect(CScreenPieceTemplate*, const CXRect&) const, CSidlScreenWnd__GetSidlPieceRect);
#endif
#ifdef CSidlScreenWnd__AddButtonToRadioGroup_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::AddButtonToRadioGroup(CXStr, CButtonWnd*), CSidlScreenWnd__AddButtonToRadioGroup);
#endif
#ifdef CSidlScreenWnd__CreateChildrenFromSidl_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::CreateChildrenFromSidl(DWORD), CSidlScreenWnd__CreateChildrenFromSidl);
#endif
#ifdef CSidlScreenWnd__StoreIniVis_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::StoreIniVis(), CSidlScreenWnd__StoreIniVis);
#endif
#ifdef CSidlScreenWnd__EnableIniStorage_x
FUNCTION_AT_ADDRESS(void CSidlScreenWnd::EnableIniStorage(int, char*), CSidlScreenWnd__EnableIniStorage);
#endif
//#ifdef CSidlScreenWnd__StoreIniInfo_x
//FUNCTION_AT_ADDRESS(void CSidlScreenWnd::StoreIniInfo(void), CSidlScreenWnd__StoreIniInfo);
//#endif
//#ifdef CSidlScreenWnd__LoadIniInfo_x
//FUNCTION_AT_ADDRESS(void CSidlScreenWnd::LoadIniInfo(void), CSidlScreenWnd__LoadIniInfo);
//#endif
#ifdef CSidlScreenWnd__ConvertToRes_x
FUNCTION_AT_ADDRESS(int CSidlScreenWnd::ConvertToRes(int, int, int, int), CSidlScreenWnd__ConvertToRes);
#endif
#ifdef CSidlScreenWnd__GetChildItem_x
//FUNCTION_AT_ADDRESS(CXWnd* CSidlScreenWnd::GetChildItem(const CXStr&, bool bDebug), CSidlScreenWnd__GetChildItem);
#endif

//============================================================================
// CXWndManager
//============================================================================

#ifdef CXWndManager__DrawWindows_x
FUNCTION_AT_ADDRESS(int CXWndManager::DrawWindows() const, CXWndManager__DrawWindows);
#endif
#ifdef CXWndManager__DrawCursor_x
FUNCTION_AT_ADDRESS(int CXWndManager::DrawCursor() const, CXWndManager__DrawCursor);
#endif
#ifdef CXWndManager__RemoveWnd_x
FUNCTION_AT_ADDRESS(int CXWndManager::RemoveWnd(CXWnd*), CXWndManager__RemoveWnd);
#endif
#ifdef CXWndManager__GetKeyboardFlags_x
FUNCTION_AT_ADDRESS(uint32_t CXWndManager::GetKeyboardFlags() const, CXWndManager__GetKeyboardFlags);
#endif
#ifdef CXWndManager__HandleKeyboardMsg_x
FUNCTION_AT_ADDRESS(int CXWndManager::HandleKeyboardMsg(uint32_t, bool), CXWndManager__HandleKeyboardMsg);
#endif

//----------------------------------------------------------------------------

void InitializeCXWnd()
{
	CXWnd::sm_vftable = reinterpret_cast<CXWnd::VirtualFunctionTable*>(CXWnd__vftable);
	CSidlScreenWnd::sm_vftable = reinterpret_cast<CSidlScreenWnd::VirtualFunctionTable*>(CSidlScreenWnd__vftable);
}

} // namespace eqlib
