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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "UI.h"
#include "EQClasses.h"
#include "Globals.h"

#include <spdlog/spdlog.h>

namespace eqlib {

//============================================================================
// Statics
//============================================================================

CButtonWnd::VirtualFunctionTable* CButtonWnd::sm_vftable = nullptr;
CListWnd::VirtualFunctionTable* CListWnd::sm_vftable = nullptr;
CSidlScreenWnd::VirtualFunctionTable* MapViewMap::sm_vftable = nullptr;

//============================================================================
// CRadioGroup
//============================================================================

CRadioGroup::CRadioGroup(CXStr name)
	: Name(name)
{
}

CRadioGroup::~CRadioGroup()
{
	for (int i = 0; i < Buttons.GetLength(); ++i)
	{
		if (Buttons[i])
		{
			Buttons[i]->SetRadioGroup(nullptr);
		}
	}
}

//============================================================================
// CButtonWnd
//============================================================================

// Class virtuals
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetRadioGroup(CRadioGroup*), CButtonWnd, SetRadioGroup);
FORWARD_FUNCTION_TO_VTABLE(int, CButtonWnd::DrawWndText(const CXRect&, const CXRect&), CButtonWnd, DrawWndText);
FORWARD_FUNCTION_TO_VTABLE(int, CButtonWnd::DrawCooldown(), CButtonWnd, DrawCooldown);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCheck(bool, bool), CButtonWnd, SetCheck);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCoolDownCompletionTimeDelta(uint32_t, uint32_t), CButtonWnd, SetCoolDownCompletionTimeDelta);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCoolDownCompletionTime(uint32_t, uint32_t), CButtonWnd, SetCoolDownCompletionTime);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCoolDownCompletionTime(eqtime_t, uint32_t), CButtonWnd, SetCoolDownCompletionTime2);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCoolDownBeginTime(uint32_t, uint32_t), CButtonWnd, SetCoolDownBeginTime);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::SetCoolDownUpdatedBeginTime(uint32_t, uint32_t), CButtonWnd, SetCoolDownUpdatedBeginTime);
FORWARD_FUNCTION_TO_VTABLE(uint32_t, CButtonWnd::GetCoolDownBeginTime() const, CButtonWnd, SetCoolDownUpdatedBeginTime);
FORWARD_FUNCTION_TO_VTABLE(uint32_t, CButtonWnd::GetCoolDownTotalDuration() const, CButtonWnd, GetCoolDownTotalDuration);
FORWARD_FUNCTION_TO_VTABLE(uint32_t, CButtonWnd::GetCoolDownTimeRemaining() const, CButtonWnd, GetCoolDownTimeRemaining);
FORWARD_FUNCTION_TO_VTABLE(void, CButtonWnd::ClearCoolDownCompletionTime(), CButtonWnd, ClearCoolDownCompletionTime);

// Overridden virtuals
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::Draw(), CButtonWnd, CXWnd, Draw);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip) const, CButtonWnd, CXWnd, DrawTooltipAtPoint);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleLButtonDown(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleLButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleLButtonUp(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleLButtonUp);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleLButtonHeld(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleLButtonHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleLButtonUpAfterHeld(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleLButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleRButtonDown(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleRButtonUp(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleRButtonUp);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleRButtonHeld(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleRButtonHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleRButtonUpAfterHeld(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleRButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::HandleMouseMove(const CXPoint&, uint32_t), CButtonWnd, CXWnd, HandleMouseMove);
FORWARD_FUNCTION_TO_VTABLE2(int, CButtonWnd::OnProcessFrame(), CButtonWnd, CXWnd, OnProcessFrame);
FORWARD_FUNCTION_TO_VTABLE2(bool, CButtonWnd::IsPointTransparent(const CXPoint& point) const, CButtonWnd, CXWnd, IsPointTransparent);
FORWARD_FUNCTION_TO_VTABLE2(void, CButtonWnd::SetAttributesFromSidl(CParamScreenPiece*), CButtonWnd, CXWnd, SetAttributesFromSidl);

//============================================================================
// CComboWnd
//============================================================================

int CComboWnd::GetCurChoice() const
{
	return pListWnd->GetCurSel();
}

CXStr CComboWnd::GetCurChoiceText() const
{
	return pListWnd->GetItemText(pListWnd->GetCurSel());
}

CXRect CComboWnd::GetTextRect() const
{
	CXRect rect = GetClientRect();
	rect.right = GetButtonRect().left;
	rect.top += (rect.GetHeight() - pFont->GetHeight()) / 2;

	return rect;
}

CXRect CComboWnd::GetButtonRect() const
{
	CXRect rect = GetClientRect();

	if (ButtonDrawTemplate.ptaNormal != nullptr)
	{
		rect.left = rect.right - ButtonDrawTemplate.ptaNormal->GetSize().cx;
	}

	return rect;
}


//============================================================================
// CEditWnd
//============================================================================

CXPoint CEditWnd::GetCaretPt() const
{
	if (bAnchorAtStart)
		return GetSelEndPt();

	return GetSelStartPt();
}

CXPoint CEditWnd::GetSelStartPt() const
{
	return GetCharIndexPt(StartPos);
}

CXPoint CEditWnd::GetSelEndPt() const
{
	return GetCharIndexPt(EndPos);
}

void CEditBaseWnd::SetMaxChars(int maxChars)
{
	MaxChars = maxChars;

	if (maxChars < (int)InputText.length())
	{
		SetWindowText(InputText);
	}
}

//============================================================================
// CGuageWnd
//============================================================================

CXRect CGaugeWnd::CalcFillRect(CXRect rect, int value) const
{
	if (value < 0)
		value = 0;

	float width = static_cast<float>(value) * 0.001f * rect.GetWidth();
	rect.right = rect.left + static_cast<int>(width) + 1;

	return rect;
}

CXRect CGaugeWnd::CalcLinesFillRect(CXRect rect, int value) const
{
	if (value < 0)
		value = 0;

	float width = static_cast<float>((value - 1) % 200) * 0.005f * rect.GetWidth();
	rect.right = rect.left + static_cast<int>(width);

	return rect;
}

//============================================================================
// CListWnd
//============================================================================

// class virtuals
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::OnHeaderClick(CXPoint), CListWnd, OnHeaderClick);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::DrawColumnSeparators() const, CListWnd, DrawColumnSeparators);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::DrawSeparator(int index) const, CListWnd, DrawSeparator);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::DrawLine(int index) const, CListWnd, DrawLine);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::DrawHeader() const, CListWnd, DrawHeader);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::DrawItem(int index, int, int) const, CListWnd, DrawItem);
FORWARD_FUNCTION_TO_VTABLE(void, CListWnd::DeleteAll(), CListWnd, DeleteAll);
FORWARD_FUNCTION_TO_VTABLE(int, CListWnd::Compare(const SListWndLine&, const SListWndLine&) const, CListWnd, Compare);
FORWARD_FUNCTION_TO_VTABLE(void, CListWnd::Sort(), CListWnd, Sort);

// overrides
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::Draw(), CListWnd, CXWnd, Draw);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::DrawBackground() const, CListWnd, CXWnd, DrawBackground);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::DrawTooltip(const CXWnd* wnd) const, CListWnd, CXWnd, DrawTooltip);
FORWARD_FUNCTION_TO_VTABLE2(HCURSOR, CListWnd::GetCursorToDisplay() const, CListWnd, CXWnd, GetCursorToDisplay);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleLButtonDown(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleLButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleLButtonUp(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleLButtonUp);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleLButtonHeld(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleLButtonHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleLButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleRButtonDown(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleRButtonUp(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleRButtonUp);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleRButtonHeld(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleRButtonHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleRButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::HandleMouseMove(const CXPoint& pos, uint32_t flags), CListWnd, CXWnd, HandleMouseMove);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::WndNotification(CXWnd* sender, uint32_t message, void* data), CListWnd, CXWnd, WndNotification);
FORWARD_FUNCTION_TO_VTABLE2(void, CListWnd::OnWndNotification(), CListWnd, CXWnd, OnWndNotification);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::OnMove(const CXRect& rect), CListWnd, CXWnd, OnMove);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::OnResize(int w, int h), CListWnd, CXWnd, OnResize);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::OnVScroll(EScrollCode code, int pos), CListWnd, CXWnd, OnVScroll);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::OnHScroll(EScrollCode code, int pos), CListWnd, CXWnd, OnHScroll);
FORWARD_FUNCTION_TO_VTABLE2(CXRect, CListWnd::GetHitTestRect(int code) const, CListWnd, CXWnd, GetHitTestRect);
FORWARD_FUNCTION_TO_VTABLE2(CXRect, CListWnd::GetClientClipRect() const, CListWnd, CXWnd, GetClientClipRect);
FORWARD_FUNCTION_TO_VTABLE2(CXWnd*, CListWnd::GetChildWndAt(const CXPoint& pos, bool, bool) const, CListWnd, CXWnd, GetChildWndAt);
FORWARD_FUNCTION_TO_VTABLE2(int, CListWnd::SetVScrollPos(int pos), CListWnd, CXWnd, SetVScrollPos);

#ifdef CListWnd__CListWnd_x
CONSTRUCTOR_AT_ADDRESS(CListWnd::CListWnd(CXWnd*, uint32_t, CXRect const&), CListWnd__CListWnd);
#endif
#ifdef CListWnd__dCListWnd_x
DESTRUCTOR_AT_ADDRESS(CListWnd::~CListWnd(), CListWnd__dCListWnd);
#endif

int CListWnd::GetItemAtPoint(const CXPoint& p) const
{
	for (int row = FirstVisibleLine; row < ItemsArray.GetCount(); ++row)
	{
		for (int col = 0; col < Columns.GetCount(); ++col)
		{
			if (GetItemRect(row, col).ContainsPoint(p))
				return row;
		}
	}

	return -1;
}

void CListWnd::GetItemAtPoint(const CXPoint& p, int* outRow, int* outCol) const
{
	if (outRow != nullptr && outCol != nullptr)
	{
		for (int row = FirstVisibleLine; row < ItemsArray.GetCount(); ++row)
		{
			for (int col = 0; col < Columns.GetCount(); ++col)
			{
				if (GetItemRect(row, col).ContainsPoint(p))
				{
					*outRow = row;
					*outCol = col;
					return;
				}
			}
		}
	}
	else if (outRow != nullptr)
	{
		*outRow = GetItemAtPoint(p);
	}
	else if (outCol != nullptr)
	{
		*outCol = -1;
	}
}

int CListWnd::AddString(const char* Str, COLORREF Color, uint32_t Data, const CTextureAnimation* pTa, const char* TooltipStr)
{
	return AddString(CXStr(Str), Color, Data, pTa, TooltipStr);
}

int CListWnd::IndexOf(int column, const std::function<bool(const CXStr)>& predicate)
{
	for (auto row = 0; row < ItemsArray.GetLength(); row++)
	{
		if (predicate(GetItemText(row, column)))
			return row;
	}

	return -1;
}

int CListWnd::IndexOf(const std::function<bool(const CXStr)>& predicate)
{
	return IndexOf(0, predicate);
}

bool CListWnd::Contains(int column, const std::function<bool(const CXStr)>& predicate)
{
	return IndexOf(column, predicate) != -1;
}

bool CListWnd::Contains(const std::function<bool(const CXStr)>& predicate)
{
	return IndexOf(0, predicate) != -1;
}

#if 0 // apparently we already have this as an import
CXWnd* CListWnd::GetItemWnd(int Index, int SubItem) const
{
	if (Index < 0 || Index >= ItemsArray.GetLength())
		return nullptr;

	const SListWndLine& line = ItemsArray[Index];

	if (SubItem < 0 || SubItem >= line.Cells.GetLength())
		return nullptr;

	if (line.Cells[SubItem].pWnd != nullptr)
		return line.Cells[SubItem].pWnd->GetFirstChildWnd();

	return nullptr;
}
#endif

CXStr CListWnd::GetColumnTooltip(int column) const
{
	if (column >= 0 && column < GetColumnCount())
		return Columns[column].Tooltip;

	return CXStr();
}

const CTextureAnimation* CListWnd::GetItemIcon(int row, int col) const
{
	if (row < 0 || row >= ItemsArray.GetCount())
		return nullptr;
	
	auto& line = ItemsArray[row];
	if (col < 0 || col >= line.Cells.GetCount())
		return nullptr;

	return line.Cells[col].pTA;
}

//============================================================================
// CPageWnd
//============================================================================

CXStr CPageWnd::GetTabText(bool bShowFlashing) const
{
	if (bShowFlashing && bFlashing)
	{
		return TabText + "*";
	}

	return TabText;
}

//============================================================================
// CTabWnd
//============================================================================

//void CTabWnd::InsertPage(CPageWnd* pPageWnd, int position)
//{
//	if (!pPageWnd || pPageWnd->GetParent() != this)
//		return;
//
//	for (int i = 0; i < PageArray.GetLength(); ++i)
//	{
//		if (PageArray[i] == pPageWnd)
//			return;
//	}
//
//	pPageWnd->RemoveStyle(WSF_TITLEBAR | WSF_SIZABLE | WSF_USEMYALPHA | WSF_NOHITTEST);
//	pPageWnd->AddStyle(WSF_RELATIVERECT);
//
//	if (position < 0)
//	{
//		// append
//		position = PageArray.GetLength();
//		PageArray.Add(pPageWnd);
//	}
//	else
//	{
//		PageArray.InsertElement(position, pPageWnd);
//	}
//
//	// Update height
//	if (bShowTabs)
//	{
//		if (CTextureAnimation* pAnim = pPageWnd->GetTabIcon())
//		{
//			if (pAnim->GetSize().cy > TabHeight)
//				TabHeight = pAnim->GetSize().cy + pTabBorder->GetAnimation(CTAFrameDraw::FrameDraw_Top)->GetSize().cy;
//		}
//	}
//
//	UpdatePage();
//
//	if (CurTabIndex == -1)
//		SetPage(0, false, )
//}

void CTabWnd::SetPage(CPageWnd* pPageWnd, bool bNotifyParent, bool bBringToTop)
{
	UNUSED(bBringToTop);

	int tabCount = GetNumTabs();

	for (int i = 0; i < tabCount; ++i)
	{
		if (PageArray[i] == pPageWnd)
		{
			SetPage(i, bNotifyParent, bBringToTop);
		}
	}
}

void CTabWnd::RemovePage(CPageWnd* pPageWnd)
{
	int tabCount = GetNumTabs();

	for (int i = 0; i < tabCount; ++i)
	{
		if (PageArray[i] == pPageWnd)
		{
			pPageWnd->AddStyle(WSF_NOHITTEST);
			pPageWnd->Show(false);

			if (pPageWnd == GetCurrentPage())
			{
				if (tabCount == 1)
					CurTabIndex = -1;
				else
					SetPage(0);
			}
			else if (i < CurTabIndex)
				CurTabIndex--;

			PageArray.DeleteElement(i);
			return;
		}
	}
}

CPageWnd* CTabWnd::GetPageFromTabIndex(int tabIndex) const
{
	if (tabIndex >= 0 && tabIndex < PageArray.GetLength())
		return PageArray[tabIndex];

	return nullptr;
}

CPageWnd* CTabWnd::GetCurrentPage() const
{
	return GetPageFromTabIndex(GetCurrentTabIndex());
}

CXRect CTabWnd::GetPageClientRect() const
{
	CXRect rect = PageRect;
	rect = rect + GetClientRect().TopLeft();

	return rect;
}

CXRect CTabWnd::GetPageInnerRect() const
{
	CXRect rect = GetPageClientRect();

	rect.left += pPageBorder->GetAnimation(CTAFrameDraw::FrameDraw_LeftTop)->GetSize().cx;
	rect.top += pPageBorder->GetAnimation(CTAFrameDraw::FrameDraw_Top)->GetSize().cy;
	rect.right -= pPageBorder->GetAnimation(CTAFrameDraw::FrameDraw_RightTop)->GetSize().cx;
	rect.bottom -= pPageBorder->GetAnimation(CTAFrameDraw::FrameDraw_Bottom)->GetSize().cy;

	return rect;
}

CXRect CTabWnd::GetTabInnerRect(int tabIndex) const
{
	CXRect rect = GetTabRect(tabIndex);

	if (IsValidIndex(tabIndex))
	{
		rect.top += pTabBorder->GetAnimation(CTAFrameDraw::FrameDraw_Top)->GetSize().cy;
		rect.left += pTabBorder->GetAnimation(CTAFrameDraw::FrameDraw_Left)->GetSize().cx;
		rect.right -= pTabBorder->GetAnimation(CTAFrameDraw::FrameDraw_Right)->GetSize().cy;
	}

	return rect;
}

//============================================================================
// CCombatSkillsSelectWnd
//============================================================================

bool CCombatSkillsSelectWnd::ShouldDisplayThisSkill(int skillIdx)
{
	EQ_Spell* pSpell = pLocalPC->GetMeleeSpellFromSkillIndex(skillIdx);
	if (!pSpell)
	{
		return true;
	}

	for (int index = 0; index < NUM_COMBAT_ABILITIES; ++index)
	{
		if (skillIdx != index)
		{
			EQ_Spell* pOther = pLocalPC->GetMeleeSpellFromSkillIndex(index);

			if (pOther != nullptr
				&& pSpell->SpellGroup == pOther->SpellGroup
				&& pSpell->SpellRank < pOther->SpellRank)
			{
				return false;
			}
		}
	}

	return true;
}

//============================================================================
// CContainerWnd
//============================================================================

// CContainerMgr
CContainerWnd* CContainerMgr::GetWindowForItem(const ItemPtr& pContainer) const
{
	for (auto& pContainerWnd : pContainerMgr->pContainerWnds)
	{
		if (pContainerWnd && pContainerWnd->Container == pContainer)
			return pContainerWnd;
	}

	return nullptr;
}

//============================================================================
// CInvSlotWnd
//============================================================================

ItemGlobalIndex CInvSlot::GetItemLocation() const
{
	if (pInvSlotWnd)
	{
		return pInvSlotWnd->ItemLocation;
	}

	return ItemGlobalIndex();
}

//============================================================================
// CInvSlotMgr
//============================================================================

CInvSlot* CInvSlotMgr::FindInvSlot(int topSlot, int subSlot /* = -1*/,
	ItemContainerInstance location /* = eItemContainerPossessions*/, bool includeLinkedItems /*= true*/)
{
	if (topSlot < 0) return nullptr;

	for (int i = 0; i < TotalSlots; ++i)
	{
		CInvSlot* invSlot = SlotArray[i];
		if (invSlot && invSlot->pInvSlotWnd)
		{
			CInvSlotWnd* pWnd = invSlot->pInvSlotWnd;

			const ItemGlobalIndex& loc = pWnd->ItemLocation;

			if (loc.GetLocation() == location && loc.GetTopSlot() == topSlot && loc.GetSlot(1) == subSlot)
			{
				// Skip invslots linked to items unless we explicitly requested one.
				if (pWnd->bHotButton && !includeLinkedItems)
					continue;

				return invSlot;
			}
		}
	}

	return nullptr;
}

//============================================================================
// CInvSlot
//============================================================================

#ifdef CInvSlotWnd__CInvSlotWnd_x
CONSTRUCTOR_AT_ADDRESS(CInvSlotWnd::CInvSlotWnd(CXWnd* pParent, uint32_t ID, CXRect rect,
	CTextureAnimation* ptaBackground, const ItemGlobalIndex& itemLocation, int ItemOffsetX, int ItemOffsetY), CInvSlotWnd__CInvSlotWnd);
#endif

//============================================================================
// CKeyRingWnd
//============================================================================
#if HAS_KEYRING_WINDOW

CListWnd* CKeyRingWnd::GetKeyRingList(KeyRingType type) const
{
	if (type < 0 || type >= eKeyRingTypeCount)
		return nullptr;

	return pList[type];
}
#endif // HAS_KEYRING_WINDOW

//============================================================================
// CMapViewWnd
//============================================================================

// CMapViewWnd
#ifdef CMapViewWnd__CMapViewWnd_x
CONSTRUCTOR_AT_ADDRESS(CMapViewWnd::CMapViewWnd(CXWnd*), CMapViewWnd__CMapViewWnd);
#endif

// MapViewMap virtual override implementations
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::PostDraw(), MapViewMap, CXWnd, PostDraw);
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::HandleLButtonDown(const CXPoint&, uint32_t), MapViewMap, CXWnd, HandleLButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::HandleLButtonUp(const CXPoint&, uint32_t), MapViewMap, CXWnd, HandleLButtonUp);
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::HandleLButtonUpAfterHeld(const CXPoint&, uint32_t), MapViewMap, CXWnd, HandleLButtonUpAfterHeld);
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::HandleRButtonDown(const CXPoint&, uint32_t), MapViewMap, CXWnd, HandleRButtonDown);
FORWARD_FUNCTION_TO_VTABLE2(int, MapViewMap::HandleWheelMove(const CXPoint&, int, uint32_t), MapViewMap, CXWnd, HandleWheelMove);

#ifdef MapViewMap__MapViewMap_x
CONSTRUCTOR_AT_ADDRESS(MapViewMap::MapViewMap(), MapViewMap__MapViewMap);
#endif
#ifdef MapViewMap__dMapViewMap_x
DESTRUCTOR_AT_ADDRESS(MapViewMap::~MapViewMap(), MapViewMap__dMapViewMap);
#endif

void MapViewMap::GetWorldCoordinates(CVector3& point)
{
	CXRect clientRect = GetClientRect();

	point.X -= clientRect.left + panOffsetX;
	point.Y -= clientRect.top + panOffsetY;

	if (zoom == 1.0f)
	{
		point.X -= scaleDiffX;
		point.Y -= scaleDiffY;
	}
	else
	{
		point.X -= clientRect.GetWidth() / 2.0f;
		point.Y -= clientRect.GetHeight() / 2.0f;
	}

	point.X /= mapViewScaleX;
	point.Y /= mapViewScaleY;

	if (zoom != 1.0f)
	{
		point.X = (point.X + lineOffsetX) / zoom;
		point.Y = (point.Y + lineOffsetY) / zoom;
	}

	float tempY = -(point.X - mapViewMaxX);
	float tempX = -(point.Y - mapViewMaxY);

	point.X = tempX;
	point.Y = tempY;
}

//============================================================================
// CChatWindowManager
//============================================================================

CChatWindow* CChatWindowManager::GetLockedActiveChatWindow() const
{
	if (LockedActive != -1)
	{
		return ChatWnd[LockedActive];
	}

	return nullptr;
}

//============================================================================
// CChatWindow
//============================================================================

#ifdef CChatWindow__CChatWindow_x
CONSTRUCTOR_AT_ADDRESS(CChatWindow::CChatWindow(CXWnd*), CChatWindow__CChatWindow);
#endif

//============================================================================
// CSidlManagerBase
//============================================================================

CXMLParamManager* CSidlManagerBase::GetParamManager()
{
	return &XMLDataMgr;
}

CButtonDrawTemplate* CSidlManagerBase::FindButtonDrawTemplate(std::string_view Name) const
{
	if (Name.empty())
		return nullptr;

	for (int i = 0; i  < ButtonDrawTemplateArray.GetLength(); ++i)
	{
		CButtonDrawTemplate* pTemplate = ButtonDrawTemplateArray[i];

		if (mq::string_equals(pTemplate->strName, Name))
			return pTemplate;
	}

	return nullptr;
}

//============================================================================
// CascadeItemBase and friends
//============================================================================

CascadeItemCommand::CascadeItemCommand(int icon, const char* text, int command)
{
	m_icon = icon;
	m_text = text;
	m_command = command;

	// Get KeyCombo for the command
	if (command >= 0 && command < nEQMappableCommands)
	{
		const KeyCombo combo = pKeypressHandler->NormalKey[command];

		m_text = CXStr{ text } +" <" + combo.GetTextDescription() + ">";
	}
}

void CascadeItemCommand::ExecuteCommand()
{
	EQExecuteCmd(m_command, true, nullptr, nullptr);
}

//============================================================================

void CItemDisplayManager::ShowItem(const ItemPtr& pItem)
{
	int flags = pWndMgr->IsShiftKey() ? 0 : 1;

	int index = FindWindow(true);
	if (index == -1)
	{
		index = CreateWindowInstance();
	}

	if (index >= 0)
	{
		if (CItemDisplayWnd* pWnd = GetWindow(index))
		{
			pWnd->Minimize(false);
			pWnd->SetItem(pItem, flags);
			pWnd->Activate();

			// update time so we know it is the newest window.
			m_times[index] = EQGetTime();
		}
	}
}

//----------------------------------------------------------------------------

void InitializeUI()
{
	CButtonWnd::sm_vftable = reinterpret_cast<CButtonWnd::VirtualFunctionTable*>(CButtonWnd__vftable);
	CListWnd::sm_vftable = reinterpret_cast<CListWnd::VirtualFunctionTable*>(CListWnd__vftable);
	MapViewMap::sm_vftable = reinterpret_cast<CSidlScreenWnd::VirtualFunctionTable*>(MapViewMap__vftable);
}


static std::unordered_multimap<std::string_view, ForeignPointer<CSidlScreenWnd>&> s_windowInitMap = {
	{ "AAWindow",                               pAAWnd },
	{ "AchievementsWnd",                        pAchievementsWnd },
	{ "ActionsWindow",                          pActionsWnd },
	{ "AdvancedDisplayOptionsWindow",           pAdvancedDisplayOptionsWnd },
	{ "AdvancedLootWnd",                        pAdvancedLootWnd },
	{ "AdventureLeaderboardWnd",                pAdventureLeaderboardWnd },
	{ "AdventureRequestWnd",                    pAdventureRequestWnd },
	{ "AdventureStatsWnd",                      pAdventureStatsWnd },
	{ "AggroMeterWnd",                          pAggroMeterWnd },
	{ "AlarmWnd",                               pAlarmWnd },
	{ "AlertHistoryWnd",                        pAlertHistoryWnd },
	{ "AlertStackWnd",                          pAlertStackWnd },
	{ "AlertWnd",                               pAlertWnd },
	{ "AltStorageWnd",                          pAltStorageWnd },
	{ "AudioTriggersWindow",                    pAudioTriggersWnd },
	{ "AuraWindow",                             pAuraWnd },
	{ "BandolierWnd",                           pBandolierWnd },
	{ "BankWnd",                                pBankWnd },
	{ "BarterMerchantWnd",                      pBarterMerchantWnd },
	{ "BarterSearchWnd",                        pBarterSearchWnd },
	{ "BarterWnd",                              pBarterWnd },
	{ "BazaarConfirmationWnd",                  pBazaarConfirmationWnd },
	{ "BazaarSearchWnd",                        pBazaarSearchWnd },
	{ "BazaarWnd",                              pBazaarWnd },
	{ "BigBankWnd",                             pBankWnd },
	{ "BlockedBuffWnd",                         pBlockedBuffWnd },
	{ "BlockedPetBuffWnd",                      pBlockedBuffWnd },
	{ "BodyTintWnd",                            pBodyTintWnd },
	{ "BookWindow",                             pBookWnd },
	{ "BreathWindow",                           pBreathWnd },
	{ "BuffWindow",                             pBuffWnd },
	{ "BugReportWindow",                        pBugReportWnd },
	{ "CastingWindow",                          pCastingWnd },
	{ "CastSpellWnd",                           pCastSpellWnd },
	{ "CharacterCreation",                      pCharacterCreation },
	{ "CharacterListWnd",                       pCharacterListWnd },
	{ "ClaimWnd",                               pClaimWnd },
	{ "ColorPickerWnd",                         pColorPickerWnd },
	{ "CombatAbilityWnd",                       pCombatAbilityWnd },
	{ "CombatSkillSelectWnd",                   pCombatSkillsSelectWnd },
	{ "CompassWindow",                          pCompassWnd },
	{ "CursorAttachment",                       pCursorAttachment },
	{ "DragonHoardWnd",                         pDragonHoardWnd },
	{ "DynamicZoneWnd",                         pDynamicZoneWnd },
	{ "EditLabelWnd",                           pEditLabelWnd },
	{ "EQMainWnd",                              pEQMainWnd },
	{ "EventCalendarWnd",                       pEventCalendarWnd },
	{ "ExtendedTargetWnd",                      pExtendedTargetWnd },
	{ "FactionWnd",                             pFactionWnd },
	{ "FeedbackWindow",                         pFeedbackWnd },                // No longer exists in Live
	{ "FellowshipWnd",                          pFellowshipWnd },
	{ "FileSelectionWnd",                       pFileSelectionWnd },
	{ "FindItemWnd",                            pFindItemWnd },
	{ "FindLocationWnd",                        pFindLocationWnd },
	{ "FriendsWindow",                          pFriendsWnd },
	{ "GemsGameWnd",                            pGemsGameWnd },
	{ "GiveWnd",                                pGiveWnd },
	{ "GroupSearchFiltersWnd",                  pGroupSearchFiltersWnd },
	{ "GroupSearchWnd",                         pGroupSearchWnd },
	{ "GroupWindow",                            pGroupWnd },
	{ "GuildBankWnd",                           pGuildBankWnd },
	{ "GuildCreationWnd",                       pGuildCreationWnd },
	{ "GuildManagementWnd",                     pGuildMgmtWnd },
	{ "HelpWindow",                             pHelpWnd },
	{ "HeritageSelectionWnd",                   pHeritageSelectionWnd },
	{ "IconSelectionWnd",                       pIconSelectionWnd },
	{ "InspectWnd",                             pInspectWnd },
	{ "InventoryWindow",                        pInventoryWnd },
	{ "ItemExpTransferWnd",                     pItemExpTransferWnd },
	{ "ItemFuseWnd",                            pItemFuseWnd },
	{ "ItemOverflowWnd",                        pItemOverflowWnd },
	{ "JournalCatWnd",                          pJournalCatWnd },
	{ "JournalNPCWnd",                          pJournalTextWnd },
#if HAS_KEYRING_WINDOW
	{ "KeyRingWnd",                             pKeyRingWnd },
#endif
	{ "LargeDialogWindow",                      pLargeDialog },
	{ "LayoutCopyWindow",                       pLayoutCopyWnd },
	{ "LFGuildWnd",                             pLFGuildWnd },
	{ "LoadskinWnd",                            pLoadskinWnd },
	{ "LootFiltersCopyWnd",                     pLootFiltersCopyWnd },
	{ "LootFiltersWnd",                         pLootFiltersWnd },
	{ "LootSettingsWnd",                        pLootSettingsWnd },
	{ "LootWnd",                                pLootWnd },
	{ "MailAddressBookWindow",                  pMailAddressBookWnd },
	{ "MailCompositionWindow",                  pMailCompositionWnd },
	{ "MailIgnoreListWindow",                   pMailIgnoreListWindow },
	{ "MailWindow",                             pMailWnd },
	{ "ManageLootWnd",                          pManageLootWnd },
	{ "MapToolbarWnd",                          pMapToolbarWnd },
	{ "MapViewWnd",                             pMapViewWnd },
	{ "MarketplaceWnd",                         pMarketplaceWnd },
	{ "MerchantWnd",                            pMerchantWnd },
	{ "MIZoneSelectWnd",                        pMIZoneSelectWnd },
	{ "MusicPlayerWnd",                         pMusicPlayerWnd },
	{ "NameChangeMercWnd",                      pNameChangeMercWnd },
	{ "NameChangePetWnd",                       pNameChangePetWnd },
	{ "NameChangeWnd",                          pNameChangeWnd },
	{ "NoteWindow",                             pNoteWnd },
	{ "ObjectPreviewWnd",                       pObjectPreviewWnd },
	{ "OptionsWindow",                          pOptionsWnd },
	{ "OverseerWnd",                            pOverseerWnd },
	{ "PetInfoWindow",                          pPetInfoWnd },
	{ "PlayerCustomizationWnd",                 pPlayerCustomizationWnd },
	{ "PlayerNotesWindow",                      pPlayerNotesWnd },
	{ "PlayerWindow",                           pPlayerWnd },
	{ "ProgressionSelectionWnd",                pProgressionSelectionWnd },
	{ "PurchaseGroupWnd",                       pPurchaseGroupWnd },
	{ "PurchaseWnd",                            pPurchaseWnd },
	{ "PvpLeaderboardWnd",                      pPvPLeaderboardWnd },
	{ "PvPStatsWnd",                            pPvPStatsWnd },
	{ "QuantityWnd",                            pQuantityWnd },
	{ "RaceChangeWnd",                          pRaceChangeWnd },
	{ "RaidOptionsWindow",                      pRaidOptionsWnd },
	{ "RaidWindow",                             pRaidWnd },
	{ "RealEstateItemsWnd",                     pRealEstateItemsWnd },
	{ "RealEstateLayoutDetailsWnd",             pRealEstateLayoutDetailsWnd },
	{ "RealEstateManageWnd",                    pRealEstateManageWnd },
	{ "RealEstateNeighborhoodWnd",              pRealEstateNeighborhoodWnd },
	{ "RealEstatePlotSearchWnd",                pRealEstatePlotSearchWnd },
	{ "RealEstatePurchaseWnd",                  pRealEstatePurchaseWnd },
	{ "RespawnWnd",                             pRespawnWnd },
	{ "RewardSelectionWnd",                     pRewardSelectionWnd },
	{ "SelectorWindow",                         pSelectorWnd },
	{ "SendMoneyWnd",                           pSendMoneyWnd },
	{ "ServerListWnd",                          pServerListWnd },
	{ "ShortDurationBuffWindow",                pSongWnd },
	{ "SkillsSelectWindow",                     pSkillsSelectWnd },
	{ "SkillsWindow",                           pSkillsWnd },
	{ "SocialEditWnd",                          pSocialEditWnd },
	{ "SocialWnd",                              pSocialWnd },
	{ "SpellBookWnd",                           pSpellBookWnd },
	{ "StoryWnd",                               pStoryWnd },
	{ "TargetOfTargetWindow",                   pTargetOfTargetWnd },
	{ "TargetWindow",                           pTargetWnd },
	{ "TaskOverlayWnd",                         pTaskOverlayWnd },
	{ "TaskSelectWnd",                          pTaskSelectWnd },
	{ "TaskTemplateSelectWnd",                  pTaskTemplateSelectWnd },
	{ "TaskWnd",                                pTaskWnd },
	{ "TextEntryWnd",                           pTextEntryWnd },
	{ "TipWindow",                              pTipOfDayWnd },
	{ "TipWindow",                              pContextTipWnd },
	{ "TitleWnd",                               pTitleWnd },
	{ "TrackingWnd",                            pTrackingWnd },
	{ "TradeskillWnd",                          pTradeskillWnd },
	{ "TradeWnd",                               pTradeWnd },
	{ "TrainWindow",                            pTrainWnd },
	{ "TributeBenefitWnd",                      pTributeBenefitWnd },
	{ "TributeMasterWnd",                       pTributeMasterWnd },
	{ "TributeTrophyWnd",                       pTributeTrophyWnd },
	{ "VideoModesWindow",                       pVideoModesWnd },
	{ "VoiceMacroWnd",                          pVoiceMacroWnd },
	{ "VoteResultsWnd",                         pVoteResultsWnd },
	{ "VoteWnd",                                pVoteWnd },
	{ "ZoneGuideWnd",                           pZoneGuideWnd },
	{ "ZonePathWnd",                            pZonePathWnd },
};

static void InitializeWindowsFromScreenManager(ScreenWndManager& mgr)
{
	for (const ScreenWndManager::ScreenRecord& screen : mgr.screens)
	{
		CSidlScreenWnd** ppWindow = screen.pWnd;
		if (*ppWindow)
		{
			const CXStr& windowName = (*ppWindow)->SidlText;

			// TODO: Adapt to make_range

			// Look up our window(s) that should receive this pointer.
			auto range = s_windowInitMap.equal_range(windowName);
			if (range.first == range.second)
			{
				// was not found.
				SPDLOG_WARN("A window was created that is not being tracked: '{}' at {}",
					windowName, (void*)ppWindow);
			}
			else
			{
				for (auto iter = range.first; iter != range.second; ++iter)
				{
					ForeignPointer<CSidlScreenWnd>& foreignPtr = iter->second;

					if (foreignPtr.get_raw() == nullptr)
					{
						foreignPtr.set_offset(ppWindow);
					}
				}
			}
		}
	}
}

void InitializeInGameUI()
{
	static bool initOnce = false;
	if (!initOnce)
	{
		initOnce = true;

		// Dynamically populate the hotbutton window names and pointers as the number of
		// buttons might vary between types of builds.

		// our container uses string_views, so we make this vector to hold ownership over
		// the strings we are creatinig dynamically for the hotbuttons.
		static std::vector<std::string> hotbuttonNames;
		hotbuttonNames.resize(MAX_HOTBUTTON_WNDS);

		for (int i = 0; i < MAX_HOTBUTTON_WNDS; ++i)
		{
			hotbuttonNames[i] = (i == 0) ? std::string("HotButtonWnd") : fmt::format("HotButtonWnd{}", i + 1);
			s_windowInitMap.emplace(hotbuttonNames[i], pHotButtonWnds[i]);
		}
	}

	// To be called immediately after the UI windows are created by the game. This happens in two places:
	// CDisplay::InitCharSelectUI and CDisplay::ReloadUI (or during initialization if pDisplay is defined.

	if (pDisplay)
	{
		InitializeWindowsFromScreenManager(pDisplay->gameScreens);
		InitializeWindowsFromScreenManager(pDisplay->charselectScreens);

		// this hotbutton pointer always mirrors the first one in the array
		pHotButtonWnd = pHotButtonWnds[0];
	}
}

//----------------------------------------------------------------------------

const char* FindLocationTypeToString(FindLocationType type)
{
	switch (type)
	{
	case FindLocation_Player: return "Player";
	case FindLocation_POI: return "POI";
	case FindLocation_RealEstateItem: return "RealEstateItem";
	case FindLocation_RealEstatePlot: return "RealEstatePlot";
	case FindLocation_MapPoint: return "MapPoint";
	case FindLocation_Switch: return "Switch";
	case FindLocation_Location: return "Location";
	case FindLocation_Unknown:
	default:
		return "Unknown";
	}
}

} // namespace eqlib
