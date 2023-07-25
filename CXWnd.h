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
#include "Containers.h"
#include "CXStr.h"
#include "UIHelpers.h"
#include "XMLData.h"

#include <mq/base/Color.h>

#ifdef IsMinimized
#undef IsMinimized
#endif
#ifdef IsMaximized
#undef IsMaximized
#endif
#ifdef GetWindowText
#undef GetWindowText
#endif

namespace eqlib {

class CRadioGroup;
class CSidlManagerBase;
class CTextureFont;

// Message types for WndNotifications
#define XWM_LCLICK                       1
#define XWM_LMOUSEUP                     2
#define XWM_RCLICK                       3
#define XWM_LDBLCLICK                    4
#define XWM_RDBLCLICK                    5
#define XWM_HITENTER                     6
#define XWM_TAB                          7
#define XWM_SHIFTTAB                     8
#define XWM_QMARKBOX                     9
#define XWM_CLOSE                        10
#define XWM_CHILDCLOSED                  11
#define XWM_TOOLTIP                      12
#define XWM_REQUESTINFO                  13
#define XWM_NEWVALUE                     14
#define XWM_COLUMNCLICK                  15
#define XWM_SORTREQUEST                  16
#define XWM_LISTBOX_EDIT_UPDATE          17
#define XWM_CLICKSTICKSTART              18
#define XWM_IS_LINK_ACTIVE               19
#define XWM_MENUSELECT                   20
#define XWM_MOUSEOVER                    21
#define XWM_HISTORY                      22
#define XWM_LCLICKHOLD                   23
#define XWM_RCLICKHOLD                   24
#define XWM_LBUTTONUPAFTERHELD           25
#define XWM_RBUTTONUPAFTERHELD           26
#define XWM_LINK                         27
#define XWM_FINDERITEMOPEN               28
#define XWM_MAXIMIZEBOX                  29
#define XWM_TITLEBAR                     30
#define XWM_ACHIEVEMENTLINK              31
#define XWM_DIALOGRESPONSELINK           32
#define XWM_FOCUS                        33
#define XWM_LOSTFOCUS                    34
#define XWM_RELOAD_FROM_SIDL             35
#define XWM_ACTIVATE                     36
#define XWM_SLIDER_COMPLETE              37
#define XWM_SLIDER_COMPLEX_EX            38
#define XWM_COLORPICKER_COMPLETE         39
#define XWM_TEXTENTRY_COMPLETE           40
#define XWM_FILESELECTION_COMPLETE       41
#define XWM_ICONSELECTION_COMPLETE       42
#define XWM_RELOAD_INI                   43
#define XWM_THUMBTRACK                   44
#define XWM_SELITEM_DOWN                 45
#define XWM_FIRST_USER                   46
#define XWM_RSELITEM_DOWN                47
#define XWM_OUTPUT_TEXT                  48
#define XWM_COMMANDLINK                  49

// These messages are not valid in this version fo the game
#define XWM_NOTSURE32                    99
#define XWM_SPELL_LINK                   99
#define XWM_RAIDINVITE_LINK              99
#define XWM_FACTION_LINK                 99

// Defines for CXWnd WindowStyle
#define CWS_VSCROLL                              0x00000001
#define CWS_HSCROLL                              0x00000002
#define CWS_TITLE                                0x00000004
#define CWS_CLOSE                                0x00000008
#define CWS_TILEBOX                              0x00000010
#define CWS_MINIMIZE                             0x00000020
#define CWS_BORDER                               0x00000040
#define CWS_RELATIVERECT                         0x00000080
#define CWS_AUTOSTRETCHV                         0x00000100
#define CWS_RESIZEALL                            0x00000200
#define CWS_TRANSPARENT                          0x00000400
#define CWS_USEMYALPHA                           0x00000800
#define CWS_DOCKING                              0x00001000
#define CWS_TOOLTIP_NODELAY                      0x00002000
#define CWS_FRAMEWND                             0x00004000
#define CWS_NOHITTEST                            0x00008000
#define CWS_QMARK                                0x00010000
#define CWS_NOMOVABLE                            0x00020000
#define CWS_MAXIMIZE                             0x00040000
#define CWS_AUTOVSCROLL                          0x00080000
#define CWS_AUTOHSCROLL                          0x00100000
#define CWS_CLIENTMOVABLE                        0x00200000
#define CWS_AUTOSTRETCH                          0x00400000
#define CWS_TRANSPARENTCONTROL                   0x00800000
#define CWS_RESIZEBORDER                         CWS_BORDER | CWS_RESIZEALL

#define ToggleBit(field, bit)                    ((field) ^= (bit));
#define BitOn(field, bit)                        ((field) |= (bit));
#define BitOff(field, bit)                       ((field) &= (~bit));
#define BitSet(field, bit)                       ((field) |= (1 << bit));
#define BitClear(field, bit)                     ((field) &= (~(1 << bit)));
// End CXWnd WindowStyle Defines

// For use with CXWndManager
enum eKeyboardFlags {
	KeyboardFlags_Shift = 0x01,
	KeyboardFlags_Ctrl  = 0x02,
	KeyboardFlags_LAlt  = 0x04,
	KeyboardFlags_RAlt  = 0x08,

	KeyboardFlags_Alt   = KeyboardFlags_LAlt | KeyboardFlags_RAlt,
};

enum EScrollCode
{
	ScrollCodeUp,
	ScrollCodeUpContinue,
	ScrollCodeDown,
	ScrollCodeDownContinue,
	ScrollCodeAbsolute,
	ScrollCodePageUp,
	ScrollCodePageDown
};

enum EWndRuntimeType
{
	WRT_WND = 0,
	WRT_LISTWND,
	WRT_EDITWND,
	WRT_TREEWND,
	WRT_PAGEWND,
	WRT_TABWND,
	WRT_HTMLWND,         // emu: This was removed later on
	WRT_HOTKEYWND,
	WRT_EDITHOTKEYWND,
	WRT_RANGESLIDERWND,
	WRT_STMLWND,
	WRT_BROWSERWND,
	WRT_MODALMESSAGEWND,
	WRT_CHECKBOXWND,
	WRT_SIDLSCREENWND,
	WRT_SLIDERWND,
	WRT_LABEL,
	WRT_BUTTON,
	WRT_GAUGE,
	WRT_COMBOBOX,
	WRT_CHATWND,
	WRT_HELPWND,
};
EQLIB_API const char* EWndRuntimeTypeToString(EWndRuntimeType type);


using EDockAction = uint32_t;

//----------------------------------------------------------------------------

struct [[offsetcomments]] SDragDropInfo
{
/*0x00*/ bool       m_rightMouse;
/*0x04*/ CXWnd*     sourceWnd;
/*0x08*/ CXWnd*     targetWnd;
/*0x0c*/ CXPoint    sourcePos;
/*0x14*/ CXPoint    targetPos;
/*0x1c*/ int        message;
/*0x20*/ uintptr_t  data;
/*0x24*/
};

class [[offsetcomments]] CClickStickInfo
{
	CClickStickInfo() = default;
	virtual ~CClickStickInfo() {}

/*0x04*/ CXWnd*     sourceWnd;
/*0x08*/ CXWnd*     targetWnd;
/*0x0c*/ CXPoint    sourcePos;
/*0x14*/ CXPoint    targetPos;
/*0x1c*/ int        message;
/*0x20*/ uintptr_t  data;
/*0x24*/
};

class CLayoutStrategy
{
public:
	~CLayoutStrategy() {}
	virtual bool LayoutChildren(CXWnd* wnd) {}
};

class CursorClass
{
public:
	enum { eNumCursors = 7 };

	enum eCursorTypes
	{
		eArrow,
		eMove,
		eBeam,
		eNorthEastSouthWest,
		eNorthWestSouthEast,
		eNorthSouth,
		eEastWest
	};

	enum eDisplayMode
	{
		eNormal,
		eScreenShot
	};

	const char*    CursorName[eNumCursors];
	HCURSOR        CursorList[eNumCursors];
	bool           bScreenShotMode;
};

//============================================================================
// CXWnd
//============================================================================

// @sizeof(CXWnd) == 0x1d8 :: 2013-05-10 (emu) @ 0x8576D4
constexpr size_t CXWnd_size = 0x1d8;
constexpr size_t CXWnd_vftable_size = 0x164;

class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd>   // node in list of siblings
	, public TList<CXWnd>       // list of children
{
public:
	EQLIB_OBJECT CXWnd(CXWnd* parent = nullptr, uint32_t id = 0, CXRect rect = {});

	//----------------------------------------------------------------------------
	EQLIB_OBJECT virtual bool IsValid() const { return ValidCXWnd; }
	EQLIB_OBJECT virtual ~CXWnd();
	EQLIB_OBJECT virtual int DrawNC() const;
	EQLIB_OBJECT virtual int Draw() { return 0; }
	EQLIB_OBJECT virtual int PostDraw() { return 0; }
	EQLIB_OBJECT virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn);
	EQLIB_OBJECT virtual int DrawChildItem(const CXWnd* child, void* item) const { return 0; }
	EQLIB_OBJECT virtual int DrawCaret() const { return 0; }
	EQLIB_OBJECT virtual int DrawBackground() const;
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const;
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const;
	EQLIB_OBJECT virtual CXRect GetMinimizedRect() const;
	EQLIB_OBJECT virtual int DrawTitleBar(const CXRect& rect) const;
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags);
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags);
	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down);
	EQLIB_OBJECT virtual int HandleMouseLeave();
	EQLIB_OBJECT virtual int OnDragDrop(SDragDropInfo* info);
	EQLIB_OBJECT virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual bool QueryDropOK(SDragDropInfo* info) const;
	EQLIB_OBJECT virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk);
	EQLIB_OBJECT virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual bool QueryClickStickDropOK(CClickStickInfo* info) const;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr);
	EQLIB_OBJECT virtual void OnWndNotification();
	EQLIB_OBJECT virtual void Activate() { Show(true); }
	EQLIB_OBJECT virtual void Deactivate() { Show(false); }
	EQLIB_OBJECT bool IsActive() const { return bActive; }
	EQLIB_OBJECT virtual int OnShow();
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect);
	EQLIB_OBJECT virtual int OnResize(int w, int h);
	EQLIB_OBJECT virtual int OnBeginMoveOrResize();
	EQLIB_OBJECT virtual int OnCompleteMoveOrResize();
	EQLIB_OBJECT virtual int OnMinimizeBox();
	EQLIB_OBJECT bool IsMinimized() const { return Minimized; }
	EQLIB_OBJECT void SetMinimized(bool bValue) { Minimized = bValue; }
	EQLIB_OBJECT virtual int OnMaximizeBox();
	EQLIB_OBJECT bool IsMaximized() const { return bMaximized; }
	EQLIB_OBJECT virtual int OnTileBox();
	EQLIB_OBJECT bool IsTiled() const { return bTiled; }
	EQLIB_OBJECT virtual int OnTile() { return 0; }
	EQLIB_OBJECT virtual int OnSetFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnKillFocus(CXWnd* old);
	EQLIB_OBJECT virtual int OnProcessFrame();
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos);
	EQLIB_OBJECT virtual int OnBroughtToTop() { return 0; }
	EQLIB_OBJECT virtual int OnActivate(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true);
	EQLIB_OBJECT virtual bool AboutToShow();
	EQLIB_OBJECT virtual bool AboutToHide();
	EQLIB_OBJECT virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) { return 0; }
	EQLIB_OBJECT virtual CXStr GetTooltip() const { return Tooltip; }
	EQLIB_OBJECT void SetTooltip(const CXStr& Value) { Tooltip = Value; }
	//EQLIB_OBJECT virtual void Unknown0x0EC();
	EQLIB_OBJECT virtual int HitTest(const CXPoint& pos, int* result) const;
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const;
	EQLIB_OBJECT virtual CXRect GetInnerRect() const;
	EQLIB_OBJECT virtual CXRect GetClientRect() const;
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const;
	EQLIB_OBJECT virtual CXSize GetMinSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetMaxSize(bool withBorder = true) const;
	EQLIB_OBJECT virtual CXSize GetUntileSize() const { return Location.GetSize(); }
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const { return false; }
	EQLIB_OBJECT virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; }
	EQLIB_OBJECT virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false);
	EQLIB_OBJECT virtual int Move(const CXPoint& point);
	EQLIB_OBJECT virtual void SetWindowText(const CXStr& text) { WindowText = text; }
	DEPRECATE("Use SetWindowText instead of SetWindowTextA") inline void SetWindowTextA(const CXStr& text) { this->SetWindowText(text); }
	EQLIB_OBJECT CXStr GetWindowText() const { return WindowText; }
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const { return nullptr; }
	EQLIB_OBJECT virtual int SetVScrollPos(int pos);
	EQLIB_OBJECT virtual int SetHScrollPos(int pos);
	EQLIB_OBJECT virtual int AutoSetVScrollPos(CXRect rect);
	EQLIB_OBJECT virtual int AutoSetHScrollPos(CXRect rect);
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece);
	EQLIB_OBJECT virtual void OnReloadSidl() {}
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const { return false;  }
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) {}
	EQLIB_OBJECT virtual const CXSize& GetMinClientSize() const { return MinClientSize; }
	EQLIB_OBJECT void SetMinClientSize(const CXSize& pt) { MinClientSize = pt; }
	EQLIB_OBJECT virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }
	EQLIB_OBJECT virtual CEditWnd* GetActiveEditWnd() const { return nullptr; }
	EQLIB_OBJECT virtual void UpdateLayout(bool finish = false);

	void SetClientRectDirty(bool dirty);
	bool IsClientRectDirty() const { return bClientRectChanged; }
	bool IsClientClipRectDirty() const { return bClientClipRectChanged; }
	bool IsScreenClipRectDirty() const { return bScreenClipRectChanged; }
	DEPRECATE("CGetWindowText: Use GetWindowText() instead") CXStr CGetWindowText() const { return GetWindowText(); }
	DEPRECATE("CSetWindowText: Use SetWindowText() instead") void CSetWindowText(const CXStr& text) { SetWindowText(text); }

	// Renamed Move -> UpdateLayout to avoid having two virtuals with the same name. This just exists for backwards compatibility.
	inline int Move(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false)
	{
		return UpdateGeometry(rect, updateLayout, forceUpdateLayout, completeMoveOrResize, moveAutoStretch);
	}
public:
	// functions we have offsets for
	EQLIB_OBJECT bool IsType(EWndRuntimeType eType) const;
	EQLIB_OBJECT CXWnd* SetFocus();
	EQLIB_OBJECT void ClrFocus();
	EQLIB_OBJECT int Destroy();
	EQLIB_OBJECT void Refade();
	EQLIB_OBJECT int ProcessTransition();
	EQLIB_OBJECT void BringToTop(bool bRecurse = true);
	EQLIB_OBJECT void StartFade(unsigned char, uint32_t);
	EQLIB_OBJECT int Minimize(bool);
	EQLIB_OBJECT bool IsReallyVisible() const;
	EQLIB_OBJECT int DoAllDrawing() const;
	EQLIB_OBJECT int DrawChildren() const;
	EQLIB_OBJECT void Center();
	EQLIB_OBJECT void Right();
	EQLIB_OBJECT CXRect GetScreenClipRect() const;
	EQLIB_OBJECT bool IsDescendantOf(CXWnd const*) const;
	EQLIB_OBJECT const CTAFrameDraw* GetBorderFrame() const;
	EQLIB_OBJECT CXRect GetScreenRect() const;
	EQLIB_OBJECT int Resize(int Width, int Height, bool bUpdateLayout = true, bool bCompleteMoveOrResize = false, bool bMoveAutoStretch = false);
	EQLIB_OBJECT CXWnd* SetParent(CXWnd*);
	inline CXWnd* SetParent(CXWnd* parent, bool) { return SetParent(parent); }
	EQLIB_OBJECT void SetMouseOver(bool);
	EQLIB_OBJECT void SetKeyTooltip(int, int);
	EQLIB_OBJECT int SetFont(CTextureFont*);

	EQLIB_OBJECT static void DrawColoredRect(const CXRect& rect, COLORREF color, const CXRect& clipRect);

	//EQLIB_OBJECT bool HasFocus() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetCloseBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetMinimizeBoxTemplate() const;
	//EQLIB_OBJECT const CButtonDrawTemplate* GetTileBoxTemplate() const;
	//EQLIB_OBJECT const CTAFrameDraw* GetTitlebarHeader() const;
	//EQLIB_OBJECT CXRect GetRelativeRect() const;
	//EQLIB_OBJECT CXWnd* GetChildWndAt(CXPoint*, int, int) const;
	//EQLIB_OBJECT int DrawCloseBox() const;
	//EQLIB_OBJECT int DrawHScrollbar(int, int, int) const;
	//EQLIB_OBJECT int DrawMinimizeBox() const;
	//EQLIB_OBJECT int DrawTileBox() const;
	//EQLIB_OBJECT int DrawVScrollbar(int, int, int) const;
	//EQLIB_OBJECT int GetWidth() const;
	//EQLIB_OBJECT void Bottom();
	//EQLIB_OBJECT void BringChildWndToTop(CXWnd*);
	//EQLIB_OBJECT void Left();
	//EQLIB_OBJECT void SetFirstChildPointer(CXWnd*);
	//EQLIB_OBJECT void SetLookLikeParent();
	//EQLIB_OBJECT void SetNextSibPointer(CXWnd*);

	// -----------------------------------------------------------------------

	EQLIB_OBJECT UIType GetType() const;
	EQLIB_OBJECT CXMLData* GetXMLData() const;
	EQLIB_OBJECT CXMLData* GetXMLData(CXMLDataManager* dataMgr) const;
	EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&);
	EQLIB_OBJECT CXWnd* GetChildItem(CXMLDataManager* dataMgr, const CXStr&);

	EQLIB_OBJECT bool IsVisible() const { return dShow; }
	EQLIB_OBJECT void SetVisible(bool bValue) { dShow = bValue; }

	EQLIB_OBJECT void SetClickThrough(bool bValue) { UNUSED(bValue); }

	EQLIB_OBJECT void SetMaximizable(bool bValue) { bMaximizable = bValue; }

	EQLIB_OBJECT CTextureFont* GetFont() const { return pFont; }

	EQLIB_OBJECT void SetEscapable(bool bValue) { CloseOnESC = bValue; }
	EQLIB_OBJECT void SetEscapableLocked(bool bValue) { bEscapableLocked = bValue; }

	EQLIB_OBJECT CXWnd* GetParentWindow() const { return ParentWindow; }
	EQLIB_OBJECT CXWnd* GetParent() const { return ParentWindow; }
	EQLIB_OBJECT void SetParentWindow(CXWnd* pWnd) { ParentWindow = pWnd; };

	EQLIB_OBJECT const CXWnd* GetFirstChildWnd() const { return GetFirstNode(); }
	EQLIB_OBJECT CXWnd* GetFirstChildWnd() { return GetFirstNode(); }
	EQLIB_OBJECT const CXWnd* GetNextSiblingWnd() const { return GetNext(); }
	EQLIB_OBJECT CXWnd* GetNextSiblingWnd() { return GetNext(); }

	EQLIB_OBJECT int GetVScrollMax() const { return VScrollMax; }
	EQLIB_OBJECT int GetVScrollPos() const { return VScrollPos; }
	EQLIB_OBJECT int GetHScrollMax() const { return HScrollMax; }
	EQLIB_OBJECT int GetHScrollPos() const { return HScrollPos; }

	EQLIB_OBJECT bool IsMouseOver() const { return MouseOver; }

	EQLIB_OBJECT CXRect GetLocation() const { return Location; }
	EQLIB_OBJECT void SetLocation(const CXRect& r) { Location = r; }

	EQLIB_OBJECT CXRect GetOldLocation() { return OldLocation; }

	EQLIB_OBJECT void SetNeedsSaving(bool bValue) { bNeedsSaving = bValue; }

	EQLIB_OBJECT void SetClientRectChanged(bool bValue) { bClientRectChanged = bValue; }

	EQLIB_OBJECT COLORREF GetBGColor() const { return BGColor; }
	EQLIB_OBJECT void SetBGColor(COLORREF Value) { BGColor = Value; }
	EQLIB_OBJECT void SetBGColor(mq::MQColor Value) { BGColor = Value.ToARGB(); }

	EQLIB_OBJECT void SetDisabledBackground(COLORREF Value) { UNUSED(Value); }
	EQLIB_OBJECT COLORREF GetDisabledBackground() const { return 0; }

	EQLIB_OBJECT bool IsEnabled() const { return Enabled; }
	EQLIB_OBJECT void SetEnabled(bool bValue) { Enabled = bValue; }

	EQLIB_OBJECT uint32_t GetWindowStyle() const { return WindowStyle; }
	EQLIB_OBJECT void SetWindowStyle(uint32_t Value) { WindowStyle = Value; }
	EQLIB_OBJECT void AddStyle(uint32_t Value) { WindowStyle |= Value; }
	EQLIB_OBJECT void RemoveStyle(uint32_t Value) { WindowStyle &= ~Value; }

	EQLIB_OBJECT void SetClipToParent(bool bValue) { bClipToParent = bValue; }
	EQLIB_OBJECT void SetUseInLayoutHorizontal(bool bValue) { bUseInLayoutHorizontal = bValue; }
	EQLIB_OBJECT void SetUseInLayoutVertical(bool bValue) { bUseInLayoutVertical = bValue; }

	EQLIB_OBJECT void SetZLayer(int Value) { ZLayer = Value; }
	EQLIB_OBJECT int GetZLayer() const { return ZLayer; }

	EQLIB_OBJECT CXWndDrawTemplate* GetDrawTemplate() const { return DrawTemplate; }

	EQLIB_OBJECT void SetActive(bool bValue) { bActive = bValue; }

	EQLIB_OBJECT void SetLocked(bool bValue) { Locked = bValue; }
	EQLIB_OBJECT bool IsLocked() const { return Locked; }

	EQLIB_OBJECT void SetFades(bool bValue) { Fades = bValue; }
	EQLIB_OBJECT bool GetFades() const { return Fades; }

	EQLIB_OBJECT void SetFaded(bool bValue) { Faded = bValue; }
	EQLIB_OBJECT bool GetFaded() const { return Faded; }

	EQLIB_OBJECT void SetFadeDelay(int Value) { FadeDelay = Value; }
	EQLIB_OBJECT int GetFadeDelay() const { return FadeDelay; }

	EQLIB_OBJECT void SetBGType(uint32_t Value) { BGType = Value; }
	EQLIB_OBJECT uint32_t GetBGType() const { return BGType; }

	EQLIB_OBJECT void SetFadeDuration(uint32_t Value) { FadeDuration = Value; }
	EQLIB_OBJECT uint32_t GetFadeDuration() const { return FadeDuration; }

	EQLIB_OBJECT void SetAlpha(uint8_t Value) { Alpha = Value; }
	EQLIB_OBJECT uint8_t GetAlpha() const { return Alpha; }

	EQLIB_OBJECT void SetFadeToAlpha(uint8_t Value) { FadeToAlpha = Value; }
	EQLIB_OBJECT uint8_t GetFadeToAlpha() const { return FadeToAlpha; }

	EQLIB_OBJECT bool GetClickable() const { return Clickable; }
	EQLIB_OBJECT void SetClickable(bool bValue) { Clickable = bValue; }

	EQLIB_OBJECT void SetData(int64_t Value) { Data = static_cast<int32_t>(Value); }
	EQLIB_OBJECT int64_t GetData() const { return Data; }

	EQLIB_OBJECT void SetClickThroughMenuItemStatus(bool bValue) { UNUSED(bValue); }
	EQLIB_OBJECT void SetShowClickThroughMenuItem(bool bValue) { UNUSED(bValue); }

	EQLIB_OBJECT void SetBottomAnchoredToTop(bool bValue) { bBottomAnchoredToTop = bValue; }
	EQLIB_OBJECT void SetLeftAnchoredToLeft(bool bValue) { bLeftAnchoredToLeft = bValue; }
	EQLIB_OBJECT void SetRightAnchoredToLeft(bool bValue) { bRightAnchoredToLeft = bValue; }
	EQLIB_OBJECT void SetTopAnchoredToTop(bool bValue) { bTopAnchoredToTop = bValue; }

	EQLIB_OBJECT void SetOffsets(const CXRect& rect)
	{
		TopOffset = rect.top;
		BottomOffset = rect.bottom;
		LeftOffset = rect.left;
		RightOffset = rect.right;
	}

	EQLIB_OBJECT void SetTopOffset(int Value) { TopOffset = Value; }
	EQLIB_OBJECT int GetTopOffset() const { return TopOffset; }

	EQLIB_OBJECT void SetBottomOffset(int Value) { BottomOffset = Value; }
	EQLIB_OBJECT int GetBottomOffset() const { return BottomOffset; }

	EQLIB_OBJECT void SetLeftOffset(int Value) { LeftOffset = Value; }
	EQLIB_OBJECT int GetLeftOffset() const { return LeftOffset; }

	EQLIB_OBJECT void SetRightOffset(int Value) { RightOffset = Value; }
	EQLIB_OBJECT int GetRightOffset() const { return RightOffset; }

	EQLIB_OBJECT int GetXMLIndex() const { return XMLIndex; }

	EQLIB_OBJECT void SetXMLTooltip(const CXStr& Value) { XMLToolTip = Value; }
	EQLIB_OBJECT CXStr GetXMLTooltip() const { return XMLToolTip; }

	EQLIB_OBJECT void SetCRNormal(mq::MQColor Value) { CRNormal = Value.ToARGB(); }
	EQLIB_OBJECT void SetCRNormal(COLORREF Value) { CRNormal = Value; }

	EQLIB_OBJECT void SetBringToTopWhenClicked(bool bValue) { bBringToTopWhenClicked = bValue; }

	EQLIB_OBJECT bool GetNeedsSaving() const { return bNeedsSaving; }
	EQLIB_OBJECT int GetParentAndContextMenuArrayIndex() const { return ParentAndContextMenuArrayIndex; }

	EQLIB_OBJECT CXStr GetXMLName() const;
	EQLIB_OBJECT CXStr GetTypeName() const;

	EQLIB_OBJECT std::string_view GetXMLNameSv() const;
	EQLIB_OBJECT std::string_view GetTypeNameSv() const;

	inline int ParentWndNotification(CXWnd* sender, uint32_t message, void* data) const
	{
		if (pController)
		{
			pController->WndNotification(sender, message, data);
		}

		if (ParentWindow)
		{
			return ParentWindow->WndNotification(sender, message, data);
		}

		return 0;
	}

	struct [[offsetcomments]] VirtualFunctionTable
	{
	/*0x000*/ void* IsValid;
	/*0x004*/ void* Destructor;
	/*0x008*/ void* DrawNC;
	/*0x00c*/ void* Draw;
	/*0x010*/ void* PostDraw;
	/*0x014*/ void* DrawCursor;
	/*0x018*/ void* DrawChildItem;
	/*0x01c*/ void* DrawCaret;
	/*0x020*/ void* DrawBackground;
	/*0x024*/ void* DrawTooltip;
	/*0x028*/ void* DrawTooltipAtPoint;
	/*0x02c*/ void* GetMinimizedRect;
	/*0x030*/ void* DrawTitleBar;
	/*0x034*/ void* GetCursorToDisplay;
	/*0x038*/ void* HandleLButtonDown;
	/*0x03c*/ void* HandleLButtonUp;
	/*0x040*/ void* HandleLButtonHeld;
	/*0x044*/ void* HandleLButtonUpAfterHeld;
	/*0x048*/ void* HandleRButtonDown;
	/*0x04c*/ void* HandleRButtonUp;
	/*0x050*/ void* HandleRButtonHeld;
	/*0x054*/ void* HandleRButtonUpAfterHeld;
	/*0x058*/ void* HandleWheelButtonDown;
	/*0x05c*/ void* HandleWheelButtonUp;
	/*0x060*/ void* HandleMouseMove;
	/*0x064*/ void* HandleWheelMove;
	/*0x068*/ void* HandleKeyboardMsg;
	/*0x06c*/ void* HandleMouseLeave;
	/*0x070*/ void* OnDragDrop;
	/*0x074*/ void* GetDragDropCursor;
	/*0x078*/ void* QueryDropOK;
	/*0x07c*/ void* OnClickStick;
	/*0x080*/ void* GetClickStickCursor;
	/*0x084*/ void* QueryClickStickDropOK;
	/*0x088*/ void* WndNotification;
	/*0x08c*/ void* OnWndNotification;
	/*0x090*/ void* Activate;
	/*0x094*/ void* Deactivate;
	/*0x098*/ void* OnShow;
	/*0x09c*/ void* OnMove;
	/*0x0a0*/ void* OnResize;
	/*0x0a4*/ void* OnBeginMoveOrResize;
	/*0x0a8*/ void* OnCompleteMoveOrResize;
	/*0x0ac*/ void* OnMinimizeBox;
	/*0x0b0*/ void* OnMaximizeBox;
	/*0x0b4*/ void* OnTileBox;
	/*0x0b8*/ void* OnTile;
	/*0x0bc*/ void* OnSetFocus;
	/*0x0c0*/ void* OnKillFocus;
	/*0x0c4*/ void* OnProcessFrame;
	/*0x0c8*/ void* OnVScroll;
	/*0x0cc*/ void* OnHScroll;
	/*0x0d0*/ void* OnBroughtToTop;
	/*0x0d4*/ void* OnActivate;
	/*0x0d8*/ void* Show;
	/*0x0dc*/ void* AboutToShow;
	/*0x0e0*/ void* AboutToHide;
	/*0x0e4*/ void* RequestDockInfo;
	/*0x0e8*/ void* GetTooltip;
	/*0x0ec*/ void* HitTest;
	/*0x0f0*/ void* GetHitTestRect;
	/*0x0f4*/ void* GetInnerRect;
	/*0x0f8*/ void* GetClientRect;
	/*0x0fc*/ void* GetClientClipRect;
	/*0x100*/ void* GetMinSize;
	/*0x104*/ void* GetMaxSize;
	/*0x108*/ void* GetUntileSize;
	/*0x10c*/ void* IsPointTransparent;
	/*0x110*/ void* ShouldProcessChildrenFrames;
	/*0x114*/ void* ShouldProcessControllerFrame;
	/*0x118*/ void* SetDrawTemplate;
	/*0x11c*/ void* UpdateGeometry;
	/*0x120*/ void* Move;
	/*0x124*/ void* SetWindowText;
	/*0x128*/ void* GetChildWndAt;
	/*0x12c*/ void* GetSidlPiece;
	/*0x130*/ void* GetWindowName;
	/*0x134*/ void* SetVScrollPos;
	/*0x138*/ void* SetHScrollPos;
	/*0x13c*/ void* AutoSetVScrollPos;
	/*0x140*/ void* AutoSetHScrollPos;
	/*0x144*/ void* SetAttributesFromSidl;
	/*0x148*/ void* OnReloadSidl;
	/*0x14c*/ void* HasActivatedFirstTimeAlert;
	/*0x150*/ void* SetHasActivatedFirstTimeAlert;
	/*0x154*/ void* GetMinClientSize;
	/*0x158*/ void* GetMaxClientSize;
	/*0x15c*/ void* GetActiveEditWnd;
	/*0x160*/ void* UpdateLayout;
	/*0x164*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CXWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;

	// Always allocate using custom eq allocators
	EQLIB_OBJECT static void* operator new(std::size_t sz);
	EQLIB_OBJECT static void* operator new[](std::size_t sz);
	EQLIB_OBJECT static void operator delete(void* ptr);
	EQLIB_OBJECT static void operator delete[](void* ptr);

// @start: CXWnd Members
/*0x018*/ bool        bClipToParent;
/*0x019*/ uint8_t     Alpha;
/*0x01a*/ bool        Enabled;
/*0x01c*/ int         Transition;
/*0x020*/ bool        MouseOver;
/*0x021*/ bool        bBottomAnchoredToTop;
/*0x022*/ bool        bScreenClipRectChanged;
/*0x024*/ int         BlinkState;
/*0x028*/ uint32_t    BackgroundDrawType;
/*0x02c*/ bool        bUseInLayoutHorizontal;
/*0x02d*/ bool        Locked;
/*0x030*/ int         ParentAndContextMenuArrayIndex;
/*0x034*/ uint32_t    Data; // emu
/*0x038*/ bool        bClientClipRectChanged;
/*0x03c*/ ControllerBase* pController;
/*0x040*/ bool        bRightAnchoredToLeft;
/*0x044*/ ArrayClass2<uint32_t> RuntimeTypes;
/*0x060*/ CXRect      Location;
/*0x070*/ uint32_t    LastBlinkFadeRefreshTime;
/*0x074*/ bool        bMarkedForDelete;
/*0x075*/ bool        bClientRectChanged;
/*0x076*/ bool        bTiled;
/*0x078*/ int         BlinkStartTimer;
/*0x07c*/ bool        bCaptureTitle;
/*0x080*/ uint32_t    FadeDuration;
/*0x084*/ uint32_t    WindowStyle;
/*0x088*/ CXRect      ClipRectScreen;
/*0x098*/ bool        CloseOnESC;
/*0x09c*/ uint32_t    BlinkFadeFreq;
/*0x0a0*/ CTextObjectInterface* pTipTextObject;
/*0x0a4*/ bool        bIsParentOrContextMenuWindow;
/*0x0a8*/ CXRect      ClipRectClient;
/*0x0b8*/ CXSize      MinClientSize;
/*0x0c0*/ CXRect      OldLocation;
/*0x0d0*/ CXWnd*      FocusProxy;
/*0x0d4*/ uint32_t    LastTimeMouseOver;
/*0x0d8*/ uint32_t    XMLIndex;
/*0x0dc*/ uint32_t    BlinkFadeStartTime;
/*0x0e0*/ bool        bBringToTopWhenClicked;
/*0x0e4*/ CXStr       DataStr;
/*0x0e8*/ CXStr       Tooltip;
/*0x0ec*/ CTextureAnimation* IconTextureAnim;
/*0x0f0*/ uint32_t    FadeDelay;
/*0x0f4*/ bool        bUseInLayoutVertical;
/*0x0f8*/ uint32_t    TransitionDuration;
/*0x0fc*/ int         RightOffset;
/*0x100*/ int         BottomOffset;
/*0x104*/ bool        bLeftAnchoredToLeft;
/*0x108*/ CLayoutStrategy* pLayoutStrategy;
/*0x10c*/ CXRect      TransitionRect;
/*0x11c*/ int         DeleteCount;
/*0x120*/ int         ZLayer;
/*0x124*/ CXStr       XMLToolTip;
/*0x128*/ COLORREF    BGColor;
/*0x12c*/ COLORREF    CRNormal;
/*0x130*/ bool        bAction;
/*0x134*/ CStaticTintedBlendAnimationTemplate* TitlePiece2;
/*0x138*/ bool        Clickable;
/*0x139*/ bool        bMaximized;
/*0x13c*/ CXSize      MaxClientSize;
/*0x144*/ CTextObjectInterface* pTextObject;
/*0x148*/ uint8_t     bResizableMask;
/*0x14c*/ int         BlinkDuration;
/*0x150*/ bool        bTopAnchoredToTop;
/*0x154*/ CStaticTintedBlendAnimationTemplate* TitlePiece;
/*0x158*/ bool        bKeepOnScreen;
/*0x15c*/ CTextureFont* pFont;
/*0x160*/ int         managerArrayIndex;
/*0x164*/ CXRect      IconRect;
/*0x174*/ CXWnd*      ParentWindow;
/*0x178*/ uint8_t     FadeAlpha;
/*0x17c*/ int         VScrollPos;
/*0x180*/ uint32_t    BlinkFadeDuration;
/*0x184*/ int         LeftOffset;
/*0x188*/ CXWndDrawTemplate* DrawTemplate;
/*0x18c*/ bool        Faded;
/*0x190*/ int         VScrollMax;
/*0x194*/ bool        ValidCXWnd;
/*0x195*/ bool        bNeedsSaving;
/*0x196*/ bool        dShow;
/*0x198*/ int         HScrollPos;
/*0x19c*/ bool        bEscapableLocked;
/*0x19d*/ bool        Fades;
/*0x1a0*/ int         HScrollMax;
/*0x1a4*/ bool        bHCenterTooltip;
/*0x1a8*/ CXStr       WindowText;
/*0x1ac*/ uint8_t     StartAlpha;
/*0x1ad*/ bool        bIsTransitioning;
/*0x1ae*/ uint8_t     FadeToAlpha;
/*0x1af*/ bool        bFullyScreenClipped;
/*0x1b0*/ uint32_t    BGType;
/*0x1b4*/ CXRect      ClientRect;
/*0x1c4*/ bool        Unlockable;
/*0x1c8*/ uint32_t    TransitionStartTick;
/*0x1cc*/ bool        bMaximizable;
/*0x1cd*/ uint8_t     TargetAlpha;
/*0x1ce*/ bool        Minimized;
/*0x1d0*/ int         TopOffset;
/*0x1d4*/ bool        bActive;
/*0x1d8*/
// @end: CXWnd Members

	// Compatibility with newer clients
	__declspec(property(get = GetDisabledBackground, put = SetDisabledBackground)) COLORREF DisabledBackground;

	bool& get_ClickThrough() { static bool ClickThrough; return ClickThrough; }
	__declspec(property(get = get_ClickThrough)) bool& bClickThroughMenuItemStatus;
	__declspec(property(get = get_ClickThrough)) bool& bClickThrough;
	__declspec(property(get = get_ClickThrough)) bool& bShowClickThroughMenuItem;

	bool& get_Border() { static bool Border; return Border; }
	__declspec(property(get = get_Border)) bool& bBorder;
	__declspec(property(get = get_Border)) bool& bBorder2;
};

inline namespace deprecated {
	using CXWND DEPRECATE("Use CXWnd instead of CXWND") = CXWnd;
	using PCXWND DEPRECATE("Use CXWnd* instead of PCXWND") = CXWnd*;
}

SIZE_CHECK(CXWnd, CXWnd_size);
SIZE_CHECK2(CXWnd_vftable, CXWnd::VirtualFunctionTable, CXWnd_vftable_size);

//============================================================================
// CSidlScreenWnd
//============================================================================

enum eIniFlags
{
	eIniFlag_None                    = 0,
	eIniFlag_Position                = 0x0001,
	eIniFlag_Size                    = 0x0002,
	eIniFlag_Font                    = 0x0004,
	eIniFlag_Alpha                   = 0x0008,
	eIniFlag_Color                   = 0x0010,
	eIniFlag_Visibility              = 0x0100,
	eIniFlag_FirstTimeVisibility     = 0x0200,
	eIniFlag_MinMaxState             = 0x0400,
	eIniFlag_All                     = 0xffffffff
};

// @sizeof(CSidlScreenWnd) == 0x220 :: 2013-05-10 (emu) @ 0x5B9B4D
constexpr size_t CSidlScreenWnd_size = 0x220;
constexpr size_t CSidlScreenWnd_vftable_size = 0x17c;

class [[offsetcomments]] CSidlScreenWnd : public CXWnd
{
public:
	//EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, uint32_t id, const CXRect& rect, const CXStr& Screen);                           // CSidlScreenWnd__CSidlScreenWnd
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent, const CXStr& Screen, int IniFlags, int IniVersion = 1, char* BlockName = nullptr); // CSidlScreenWnd__CSidlScreenWnd1
	EQLIB_OBJECT CSidlScreenWnd(CXWnd* parent = nullptr, const CXStr& Screen = CXStr());                                          // CSidlScreenWnd__CSidlScreenWnd2
	EQLIB_OBJECT virtual ~CSidlScreenWnd();

	//----------------------------------------------------------------------------
	// virtuals that are overwritten
	EQLIB_OBJECT virtual int OnResize(int width, int height) override;
	EQLIB_OBJECT virtual int DrawBackground() const override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* wnd, uint32_t message, void* data) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int OnShow() override;
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool topLevel = true) const override;
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const override;
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const override;
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) override;

	//----------------------------------------------------------------------------
	// new virtuals
	EQLIB_OBJECT virtual int OnZone();
	EQLIB_OBJECT virtual int OnPreZone();
	EQLIB_OBJECT virtual void LoadIniInfo();
	EQLIB_OBJECT virtual void StoreIniInfo();
	EQLIB_OBJECT virtual CSidlScreenWnd* AsSidlScreenWnd();
	EQLIB_OBJECT virtual bool GetScreenWndType();

	//----------------------------------------------------------------------------
	// data members
/*0x1d8*/ bool                         bControlsCreated;
/*0x1dc*/ CXStr                        SidlText;                               // found in CChatWindow__WndNotification_x*
/*0x1e0*/ CScreenTemplate*             SidlPiece;                              // CScreenPieceTemplate (important)
/*0x1e4*/ ArrayClass<CRadioGroup*>     RadioGroup;
/*0x1f4*/ bool                         bInitVisibility;
/*0x1f5*/ bool                         bVisibleBeforeResize;
/*0x1f8*/ int                          IniFlags;
/*0x1fc*/ CXStr                        IniStorageName;                         // found in CSidlScreenWnd__LoadSidlScreen
/*0x200*/ int                          IniVersion;
/*0x204*/ int                          LastResX;
/*0x208*/ int                          LastResY;
/*0x20c*/ bool                         bLastResFullscreen;
/*0x210*/ int                          ContextMenuID;
/*0x214*/ CXWnd*                       pFirstVScrollChild;
/*0x218*/ int                          ContextMenuTipID;
/*0x21c*/ bool                         bHasActivatedFirstTimeAlert;
/*0x220*/

	//----------------------------------------------------------------------------
	// functions that we provide offsets for
	//EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&, bool bDebug);
	EQLIB_OBJECT int DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const;
	EQLIB_OBJECT void CalculateHSBRange();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void CreateChildrenFromSidl();
	inline void CreateChildrenFromSidl(uint32_t) { CreateChildrenFromSidl(); }
	EQLIB_OBJECT void EnableIniStorage(int, char*);
	EQLIB_OBJECT void Init(int, const CXStr&, int, int, int);
	EQLIB_OBJECT void LoadIniListWnd(CListWnd*, char*);
	EQLIB_OBJECT void StoreIniVis();
	EQLIB_OBJECT int ConvertToRes(int, int, int, int);
	EQLIB_OBJECT void LoadSidlScreen();

	//----------------------------------------------------------------------------
	//EQLIB_OBJECT void Init(CXWnd*, uint32_t, const CXRect&, const CXStr&, int, char*);
	//EQLIB_OBJECT void SetScreen(const CXStr&);
	//EQLIB_OBJECT void AddButtonToRadioGroup(const CXStr&, CButtonWnd*);
	//EQLIB_OBJECT CXRect GetSidlPieceRect(CScreenPieceTemplate*, const CXRect&) const;
	//EQLIB_OBJECT void StoreIniListWnd(CListWnd const*, char*);

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x164*/ void* OnZone;
	/*0x168*/ void* OnPreZone;
	/*0x16c*/ void* LoadIniInfo;
	/*0x170*/ void* StoreIniInfo;
	/*0x174*/ void* AsSidlScreenWnd;
	/*0x178*/ void* GetScreenWndType;
	/*0x17c*/
	};

	// Returns the current instance of this class's vftable. Might represent some other
	// inherited class (and not CSidlScreenWnd's)
	inline VirtualFunctionTable* GetVFTable()
	{
		if (this == nullptr) return nullptr;
		return *reinterpret_cast<VirtualFunctionTable**>(this);
	}

	inline void ReplaceVFTable(VirtualFunctionTable* table)
	{
		if (this == nullptr) return;
		*reinterpret_cast<VirtualFunctionTable**>(this) = table;
	}

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

SIZE_CHECK(CSidlScreenWnd, CSidlScreenWnd_size);
SIZE_CHECK2(CSidlScreenWnd_vftable, CSidlScreenWnd::VirtualFunctionTable, CSidlScreenWnd_vftable_size);

inline namespace deprecated {
	using CSIDLWND DEPRECATE("Use CSidlScreenWnd instead of CSIDLWND") = CSidlScreenWnd;
	using PCSIDLWND DEPRECATE("Use CSidlScreenWnd* instead of PCSIDLWND") = CSidlScreenWnd*;
}

//============================================================================
// CXWndManager
//============================================================================

enum EWndManagerMode
{
	WndManagerModeNormal,
	WndManagerModeMoving,
	WndManagerModeSizingLeft,
	WndManagerModeSizingTop,
	WndManagerModeSizingRight,
	WndManagerModeSizingBottom,
	WndManagerModeSizingTopLeft,
	WndManagerModeSizingTopRight,
	WndManagerModeSizingBottomLeft,
	WndManagerModeSizingBototmRight,
	WndManagerModeVScrollUp,
	WndManagerModeVScrollPageUp,
	WndManagerModeVScrollPageDown,
	WndManagerModeVScrollDown,
	WndManagerModeVScrollAbsolute,
	WndManagerModeHScrollLeft,
	WndManagerModeHScrollRight,
	WndManagerModeHScrollAbsolute,
	WndManagerModeHScrollPageLeft,
	WndManagerModeHScrollPageRight,
	WndManagerModeTyping,
	WndManagerModeFrameButton,
	WndManagerModeDragDrop,
	WndManagerModeUnknown23,
	WndManagerModeUnknown24,
};

class [[offsetcomments]] CXWndManager
{
public:
	CXWndManager(CSidlManagerBase* sidlManager, HWND* wnd, CXPoint point);
	virtual ~CXWndManager();

	//----------------------------------------------------------------------------
	// virtuals

	virtual bool CanSendMouseMessage(CXWnd* wnd) const;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const;
	virtual bool CanDraw(CXWnd* wnd) const;
	virtual ControllerBase* CreateController(CXStr controller, int type);

	//----------------------------------------------------------------------------
	// defined methods

	EQLIB_OBJECT int DrawCursor() const;
	EQLIB_OBJECT int DrawWindows() const;
	EQLIB_OBJECT uint32_t GetKeyboardFlags() const;
	EQLIB_OBJECT int HandleKeyboardMsg(uint32_t, bool);
	EQLIB_OBJECT int RemoveWnd(CXWnd*);

	CTextureFont* GetFont(int FontIndex) const
	{
		if (FontIndex < FontsArray.GetCount())
		{
			return FontsArray[FontIndex];
		}

		return nullptr;
	}
	int GetNumFonts() const { return FontsArray.GetCount(); }
	int GetFontIndex(CTextureFont* pFont)
	{
		for (int i = 0; i < FontsArray.GetCount(); ++i)
		{
			if (pFont == FontsArray[i])
				return i;
		}
		return -1;
	}

	inline const CursorClass* GetCursorClass() const { return &CC; }

	//----------------------------------------------------------------------------
	// methods

	//EQLIB_OBJECT bool IsAllValid();
	//EQLIB_OBJECT bool IsWindowActive(const CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowMovingOrSizing(CXWnd*) const;
	//EQLIB_OBJECT bool IsWindowPieceDown(const CXWnd*, int) const;
	//EQLIB_OBJECT bool OkayToSendMouseMessage(CXWnd*) const;
	//EQLIB_OBJECT const CTextureAnimation* GetCursorToDisplay() const;
	//EQLIB_OBJECT CTextureFont* GetFont(CXStr);
	//EQLIB_OBJECT CXWnd* FindWnd(CXPoint, int*) const;
	//EQLIB_OBJECT CXWnd* GetFirstChildWnd(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* GetFocusWnd() const;
	//EQLIB_OBJECT CXWnd* GetNextSib(CXWnd const*) const;
	//EQLIB_OBJECT CXWnd* SetFocusWnd(CXWnd*);
	//EQLIB_OBJECT int ActivateWnd(CXWnd*);
	//EQLIB_OBJECT int AddFont(CTextureFont*);
	//EQLIB_OBJECT int AddWnd(CXWnd*);
	//EQLIB_OBJECT int HandleLButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleLButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleMouseMove(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonDown(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUp(const CXPoint&);
	//EQLIB_OBJECT int HandleRButtonUpAfterHeld(const CXPoint&);
	//EQLIB_OBJECT int HandleWheelMove(int);
	//EQLIB_OBJECT int NotifyAllWindows(CXWnd*, uint32_t, void*);
	//EQLIB_OBJECT int OnWindowCloseBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowMinimizeBox(CXWnd*);
	//EQLIB_OBJECT int OnWindowTileBox(CXWnd*);
	//EQLIB_OBJECT int ProcessFrame();
	//EQLIB_OBJECT uint32_t GetDisplayWidth() const;
	//EQLIB_OBJECT uint32_t GetGlobalFadeDuration() const;
	//EQLIB_OBJECT unsigned char GetGlobalAlpha() const;
	//EQLIB_OBJECT unsigned char GetGlobalFadeToAlpha() const;
	//EQLIB_OBJECT unsigned long GetGlobalFadeDelay() const;
	//EQLIB_OBJECT void BringWndToTop(CXWnd*, bool);
	//EQLIB_OBJECT void CheckInvalidateLastFoundWnd();
	//EQLIB_OBJECT void CleanupWindows();
	//EQLIB_OBJECT void DestroyAllWindows();
	//EQLIB_OBJECT void FlushKeyboardFlags();
	//EQLIB_OBJECT void OnWindowShown(CXWnd*, bool);
	//EQLIB_OBJECT void SetGlobalAlpha(unsigned char);
	//EQLIB_OBJECT void SetGlobalFadeDelay(unsigned long);
	//EQLIB_OBJECT void SetGlobalFadeDuration(uint32_t);
	//EQLIB_OBJECT void SetGlobalFadeToAlpha(unsigned char);
	//EQLIB_OBJECT void SetSystemFont(CTextureFont*);
	//EQLIB_OBJECT void UpdateChildAndSiblingInfo();
	//EQLIB_OBJECT int DestroyWnd(CXWnd* wnd);

	//----------------------------------------------------------------------------
	// data members

/*0x004*/ ArrayClass<CXWnd*>           pWindows;
/*0x014*/ ArrayClass<CXWnd*>           ParentAndContextMenuWindows;
/*0x024*/ ArrayClass<CXWnd*>           TransitionWindows;
/*0x034*/ ArrayClass<CXWnd*>           PendingDeletionWindows;
/*0x044*/ uint32_t                     TypematicKey;
/*0x048*/ uint32_t                     LastKeyDownTime;
/*0x04c*/ uint32_t                     LastMouseClickTime;           // when mouse was last clicked
/*0x050*/ uint32_t                     MouseMoveTimeStamp;           // when mouse was last moved
/*0x054*/ int                          StrokesSent;
/*0x058*/ int                          ToolTipHitTest;               // this is really an enum //0 outside 1 transparent 2 client 3 minimizebox 4 tilebox 5 qmark 6 maxbox 7 closebox 8 titlebar 9 vscrollup 10 vscrolldown 11 vscroll thumb 12 vscroll pgup 13 vscroll pgdn 14 hscroll left 15 hscroll right 16 hscroll thumb 17 hscroll pgup 18 hscroll pgdn 19 border left 20 border top 21 border right 22 border bottom 23 border topleft 24 border topright 25 border bott left 26 bott right 27 left top 28 left bott 29 right top 30 right bott 31 no hit
/*0x05c*/ CXWnd*                       LastClickedWindow;
/*0x060*/ CXWnd*                       MainWindow;
/*0x064*/ CXWnd*                       FocusWindow;                  // when you select a window its pointer shows up here
/*0x068*/ CXWnd*                       CurrDraggedWindow;            // when you drag a window its pointer shows up here
/*0x06c*/ CXWnd*                       ActiveWindow;
/*0x070*/ CXWnd*                       LastMouseOver;                // Current window pointer is over if this is 0 we are above MAIN Window
/*0x074*/ CXWnd*                       Tooltip;                      // Last Tooltip to show?
/*0x078*/ ArrayClass<CXWnd*>           GlobalFocusWindows;
/*0x088*/ bool                         bReadingLog;
/*0x089*/ bool                         bSidlManagerOwner;
/*0x08c*/ int                          CaptureCount;
/*0x090*/ bool                         bMouseMoveRelative;
/*0x094*/ CXPoint                      MousePoint;
/*0x09c*/ bool                         bCapsLock;
/*0x09d*/ bool                         KeyboardFlags[4];
/*0x0a1*/ bool                         bChatMessage;
/*0x0a2*/ bool                         bDrawWindows;
/*0x0a3*/ uint8_t                      MouseMoveFlags;
/*0x0a4*/ EWndManagerMode              ManagerMode;
/*0x0a8*/ int                          DecorButtonHitTest;
/*0x0ac*/ CXPoint                      MoveResize;
/*0x0b4*/ SDragDropInfo                DragDropInfo;
/*0x0d8*/ CClickStickInfo              ClickStickInfo;
/*0x0fc*/ bool                         bModal;
/*0x100*/ uint32_t                     TTCheckTimer;
/*0x104*/ int                          Flags;
/*0x108*/ CXStr                        ClipText;
/*0x10c*/ uint32_t                     ScreenExtentX;
/*0x110*/ uint32_t                     ScreenExtentY;
/*0x114*/ ArrayClass<CTextureFont*>    FontsArray;
/*0x124*/ CTextureFont*                pSystemFont;
/*0x128*/ bool                         bToggleWindowMode;
/*0x12c*/ HWND*                        pGlobalHwnd;
/*0x130*/ CXPoint                      StoredMousePos;               // last position Mouse was at before we moved it
/*0x138*/ bool                         bManagerDeletionPending;
/*0x13c*/ CursorClass                  CC;
/*0x178*/

	inline bool IsShiftKey() const { return KeyboardFlags[0]; }
	inline bool IsCtrlKey() const { return KeyboardFlags[1]; }
	inline bool IsAltKey() const { return KeyboardFlags[2] | KeyboardFlags[3]; }
};

//============================================================================
// CEQXWndManager
//============================================================================

// @sizeof(CEQXWndManager) == 0x1a4 :: 2013-05-10 (emu) @ 0x48E615
constexpr size_t CEQXWndManager_size = 0x1a4;

class [[offsetcomments]] CEQXWndManager : public CXWndManager
{
public:
	CEQXWndManager(CSidlManagerBase* sidlManager);
	virtual ~CEQXWndManager();

	//----------------------------------------------------------------------------
	// virtual overrides
	virtual bool CanSendMouseMessage(CXWnd* wnd) const override;
	virtual bool CanSendKeyboardMessage(CXWnd* wnd) const override;
	virtual bool CanDraw(CXWnd* wnd) const override;
	virtual ControllerBase* CreateController(CXStr controller, int type) override;

	EQLIB_OBJECT ControllerManager* GetControllerManager()
	{
		return &ControllerMgr;
	}

	//----------------------------------------------------------------------------
	// data members

/*0x178*/ ControllerFactory DefaultControllerFactory;
/*0x18c*/ ControllerManager ControllerMgr;
/*0x1a4*/
};

SIZE_CHECK(CEQXWndManager, CEQXWndManager_size);

inline namespace deprecated {
	using CXWNDMGR DEPRECATE("Use CEQXWndManager instead of CXWNDMGR") = CEQXWndManager;
	using PCXWNDMGR DEPRECATE("Use CEQXWndManager* instead of PCXWNDMGR") = CEQXWndManager*;
}

//----------------------------------------------------------------------------

void InitializeCXWnd();

} // namespace eqlib
