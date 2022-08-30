/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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
#define XWM_NOTSURE32                    32
#define XWM_DIALOGRESPONSELINK           33
#define XWM_SPELL_LINK                   34
#define XWM_FOCUS                        35
#define XWM_LOSTFOCUS                    36
#define XWM_RELOAD_FROM_SIDL             37
#define XWM_ACTIVATE                     38
#define XWM_SLIDER_COMPLETE              39
#define XWM_SLIDER_COMPLEX_EX            40
#define XWM_COLORPICKER_COMPLETE         41
#define XWM_TEXTENTRY_COMPLETE           42
#define XWM_FILESELECTION_COMPLETE       43
#define XWM_ICONSELECTION_COMPLETE       44
#define XWM_RELOAD_INI                   45
#define XWM_THUMBTRACK                   46
#define XWM_SELITEM_DOWN                 47
#define XWM_FIRST_USER                   48
#define XWM_RSELITEM_DOWN                49
#define XWM_OUTPUT_TEXT                  50
#define XWM_COMMANDLINK                  51
#define XWM_RAIDINVITE_LINK              52
#define XWM_FACTION_LINK                 53

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
/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
};

class [[offsetcomments]] CClickStickInfo
{
	CClickStickInfo() = default;
	virtual ~CClickStickInfo() {}

/*0x08*/ CXWnd*     sourceWnd;
/*0x10*/ CXWnd*     targetWnd;
/*0x18*/ CXPoint    sourcePos;
/*0x20*/ CXPoint    targetPos;
/*0x28*/ int        message;
/*0x30*/ uintptr_t  data;
/*0x38*/
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

// @sizeof(CXWnd) == 0x268 :: 2022-08-26 (test) @ 0x14051ce56
constexpr size_t CXWnd_size = 0x268;
constexpr size_t CXWnd_vftable_size = 0x2D0;

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
	EQLIB_OBJECT virtual void Unknown0x0EC();
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
	EQLIB_OBJECT CXWnd* SetParent(CXWnd*, bool);
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

	EQLIB_OBJECT void SetClickThrough(bool bValue) { bClickThrough = bValue; }

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

	EQLIB_OBJECT void SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }
	EQLIB_OBJECT COLORREF GetDisabledBackground() const { return DisabledBackground; }

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

	EQLIB_OBJECT void SetData(int64_t Value) { Data = Value; }
	EQLIB_OBJECT int64_t GetData() const { return Data; }

	EQLIB_OBJECT void SetClickThroughMenuItemStatus(bool bValue) { bClickThroughMenuItemStatus = bValue; }
	EQLIB_OBJECT void SetShowClickThroughMenuItem(bool bValue) { bShowClickThroughMenuItem = bValue; }

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
	/*0x008*/ void* Destructor;
	/*0x010*/ void* DrawNC;
	/*0x018*/ void* Draw;
	/*0x020*/ void* PostDraw;
	/*0x028*/ void* DrawCursor;
	/*0x030*/ void* DrawChildItem;
	/*0x038*/ void* DrawCaret;
	/*0x040*/ void* DrawBackground;
	/*0x048*/ void* DrawTooltip;
	/*0x050*/ void* DrawTooltipAtPoint;
	/*0x058*/ void* GetMinimizedRect;
	/*0x060*/ void* DrawTitleBar;
	/*0x068*/ void* GetCursorToDisplay;
	/*0x070*/ void* HandleLButtonDown;
	/*0x078*/ void* HandleLButtonUp;
	/*0x080*/ void* HandleLButtonHeld;
	/*0x088*/ void* HandleLButtonUpAfterHeld;
	/*0x090*/ void* HandleRButtonDown;
	/*0x098*/ void* HandleRButtonUp;
	/*0x0a0*/ void* HandleRButtonHeld;
	/*0x0a8*/ void* HandleRButtonUpAfterHeld;
	/*0x0b0*/ void* HandleWheelButtonDown;
	/*0x0b8*/ void* HandleWheelButtonUp;
	/*0x0c0*/ void* HandleMouseMove;
	/*0x0c8*/ void* HandleWheelMove;
	/*0x0d0*/ void* HandleKeyboardMsg;
	/*0x0d8*/ void* HandleMouseLeave;
	/*0x0e0*/ void* OnDragDrop;
	/*0x0e8*/ void* GetDragDropCursor;
	/*0x0f0*/ void* QueryDropOK;
	/*0x0f8*/ void* OnClickStick;
	/*0x100*/ void* GetClickStickCursor;
	/*0x108*/ void* QueryClickStickDropOK;
	/*0x110*/ void* WndNotification;
	/*0x118*/ void* OnWndNotification;
	/*0x120*/ void* Activate;
	/*0x128*/ void* Deactivate;
	/*0x130*/ void* OnShow;
	/*0x138*/ void* OnMove;
	/*0x140*/ void* OnResize;
	/*0x148*/ void* OnBeginMoveOrResize;
	/*0x150*/ void* OnCompleteMoveOrResize;
	/*0x158*/ void* OnMinimizeBox;
	/*0x160*/ void* OnMaximizeBox;
	/*0x168*/ void* OnTileBox;
	/*0x170*/ void* OnTile;
	/*0x178*/ void* OnSetFocus;
	/*0x180*/ void* OnKillFocus;
	/*0x188*/ void* OnProcessFrame;
	/*0x190*/ void* OnVScroll;
	/*0x198*/ void* OnHScroll;
	/*0x1a0*/ void* OnBroughtToTop;
	/*0x1a8*/ void* OnActivate;
	/*0x1b0*/ void* Show;
	/*0x1b8*/ void* AboutToShow;
	/*0x1c0*/ void* AboutToHide;
	/*0x1c8*/ void* RequestDockInfo;
	/*0x1d0*/ void* GetTooltip;
	/*0x1d8*/ void* Unknown0x0EC;
	/*0x1e0*/ void* HitTest;
	/*0x1e8*/ void* GetHitTestRect;
	/*0x1f0*/ void* GetInnerRect;
	/*0x1f8*/ void* GetClientRect;
	/*0x200*/ void* GetClientClipRect;
	/*0x208*/ void* GetMinSize;
	/*0x210*/ void* GetMaxSize;
	/*0x218*/ void* GetUntileSize;
	/*0x220*/ void* IsPointTransparent;
	/*0x228*/ void* ShouldProcessChildrenFrames;
	/*0x230*/ void* ShouldProcessControllerFrame;
	/*0x238*/ void* SetDrawTemplate;
	/*0x240*/ void* UpdateGeometry;
	/*0x248*/ void* Move;
	/*0x250*/ void* SetWindowText;
	/*0x258*/ void* GetChildWndAt;
	/*0x260*/ void* GetSidlPiece;
	/*0x268*/ void* GetWindowName;
	/*0x270*/ void* SetVScrollPos;
	/*0x278*/ void* SetHScrollPos;
	/*0x280*/ void* AutoSetVScrollPos;
	/*0x288*/ void* AutoSetHScrollPos;
	/*0x290*/ void* SetAttributesFromSidl;
	/*0x298*/ void* OnReloadSidl;
	/*0x2a0*/ void* HasActivatedFirstTimeAlert;
	/*0x2a8*/ void* SetHasActivatedFirstTimeAlert;
	/*0x2b0*/ void* GetMinClientSize;
	/*0x2b8*/ void* GetMaxClientSize;
	/*0x2c0*/ void* GetActiveEditWnd;
	/*0x2c8*/ void* UpdateLayout;
	/*0x2d0*/
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
/*0x030*/ uint8_t     TargetAlpha;
/*0x034*/ int         LeftOffset;
/*0x038*/ bool        dShow;
/*0x039*/ bool        bClickThroughMenuItemStatus;         // on/off
/*0x03a*/ bool        Fades;
/*0x03b*/ bool        bUseInLayoutVertical;
/*0x03c*/ uint32_t    BGType;                              // found in CSidlScreenWnd__StoreIniInfo_x
/*0x040*/ bool        bClientRectChanged;
/*0x041*/ uint8_t     FadeToAlpha;                         // found in CSidlScreenWnd__StoreIniInfo_x
/*0x044*/ int         HScrollPos;
/*0x048*/ CXStr       WindowText;                          // CXWnd__GetWindowTextA_x has this one
/*0x050*/ bool        bNeedsSaving;                        // will be true if you move or resize the window
/*0x051*/ bool        Minimized;
/*0x054*/ uint32_t    FadeDelay;
/*0x058*/ CStaticTintedBlendAnimationTemplate* TitlePiece;
/*0x060*/ int         managerArrayIndex;
/*0x064*/ bool        bShowClickThroughMenuItem;           // shows/hides the click through option on the window menu
/*0x068*/ int         BottomOffset;
/*0x06c*/ int         BlinkDuration;
/*0x070*/ bool        bBorder2;
/*0x078*/ CTextObjectInterface* pTextObject;
/*0x080*/ CTextureFont* pFont;
/*0x088*/ int         TopOffset;
/*0x090*/ CXStr       DataStr;
/*0x098*/ uint32_t    TransitionDuration;
/*0x09c*/ bool        bLeftAnchoredToLeft;
/*0x0a0*/ ControllerBase* pController;
/*0x0a8*/ bool        CloseOnESC;                          // found in CSidlScreenWnd__StoreIniInfo_x, close when ESC is pressed
/*0x0ac*/ int         ParentAndContextMenuArrayIndex;
/*0x0b0*/ int         HScrollMax;
/*0x0b4*/ int         VScrollPos;
/*0x0b8*/ bool        bActive;
/*0x0bc*/ int         BlinkStartTimer;
/*0x0c0*/ bool        bHCenterTooltip;
/*0x0c8*/ ArrayClass2<unsigned int> RuntimeTypes;       // Size 0x1c
/*0x0e8*/ bool        bTiled;
/*0x0ec*/ int         Transition;
/*0x0f0*/ CXRect      IconRect;
/*0x100*/ uint32_t    XMLIndex;
/*0x104*/ bool        ValidCXWnd;                          // IsValid has this one
/*0x105*/ bool        bEscapableLocked;
/*0x108*/ CXSize      MinClientSize;
/*0x110*/ uint32_t    BlinkFadeDuration;
/*0x114*/ bool        bIsTransitioning;
/*0x118*/ CXRect      ClipRectClient;
/*0x128*/ CXRect      TransitionRect;
/*0x138*/ bool        bClipToParent;
/*0x140*/ CXWnd*      FocusProxy;
/*0x148*/ uint32_t    BlinkFadeStartTime;
/*0x14c*/ int         RightOffset;
/*0x150*/ bool        bMaximized;
/*0x151*/ bool        bUseInLayoutHorizontal;
/*0x158*/ int64_t     Data;
/*0x160*/ CTextureAnimation* IconTextureAnim;
/*0x168*/ CXRect      ClipRectScreen;
/*0x178*/ COLORREF    DisabledBackground;
/*0x17c*/ bool        bAction;
/*0x17d*/ bool        Locked;                              // found in CSidlScreenWnd__LoadIniInfo_x
/*0x180*/ uint32_t    WindowStyle;                         // bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border
/*0x184*/ uint32_t    LastBlinkFadeRefreshTime;
/*0x188*/ bool        bBorder;
/*0x18c*/ CXRect      Location;
/*0x19c*/ bool        Unlockable;                          // found in CSidlScreenWnd__LoadIniInfo_x related to Locked
/*0x1a0*/ uint32_t    BlinkFadeFreq;
/*0x1a8*/ CXStr       XMLToolTip;                          // found in CSidlManager__CreateLabel_x
/*0x1b0*/ bool        bClickThrough;                       // if true you can click through the window, well it doesnt work for our chatwindow (yet) so more work is needed to figure out why
/*0x1b1*/ bool        bKeepOnScreen;
/*0x1b8*/ CXWndDrawTemplate* DrawTemplate;
/*0x1c0*/ CXRect      OldLocation;
/*0x1d0*/ CXRect      ClientRect;
/*0x1e0*/ bool        bBringToTopWhenClicked;
/*0x1e1*/ bool        bFullyScreenClipped;
/*0x1e2*/ bool        bCaptureTitle;
/*0x1e3*/ bool        MouseOver;                           // found in CXWnd__SetMouseOver_x
/*0x1e4*/ bool        Enabled;
/*0x1e5*/ uint8_t     StartAlpha;
/*0x1e8*/ int         ZLayer;                              // found in CXWndManager__DrawWindows_x
/*0x1ec*/ bool        bIsParentOrContextMenuWindow;
/*0x1f0*/ int         BlinkState;
/*0x1f4*/ bool        bClientClipRectChanged;
/*0x1f5*/ uint8_t     Alpha;
/*0x1f8*/ CXStr       Tooltip;                             // found in CSidlManager__CreateLabel_x
/*0x200*/ CXSize      MaxClientSize;
/*0x208*/ int         VScrollMax;
/*0x20c*/ bool        bScreenClipRectChanged;
/*0x210*/ uint32_t    TransitionStartTick;
/*0x218*/ CLayoutStrategy* pLayoutStrategy;
/*0x220*/ bool        bMaximizable;
/*0x224*/ uint32_t    FadeDuration;
/*0x228*/ bool        bRightAnchoredToLeft;
/*0x229*/ bool        bMarkedForDelete;
/*0x22c*/ COLORREF    CRNormal;                            // found in OnProcessFrame
/*0x230*/ CStaticTintedBlendAnimationTemplate* TitlePiece2;
/*0x238*/ COLORREF    BGColor;                             // DO NOT CHNAGE THIS TO AN ARGBCOLOR, it will break the padding since its a union that has bytes in it.
/*0x23c*/ bool        bTopAnchoredToTop;
/*0x23d*/ bool        bBottomAnchoredToTop;
/*0x23e*/ uint8_t     bResizableMask;
/*0x23f*/ bool        Faded;
/*0x240*/ bool        Clickable;                           // found in CChatWindow__CChatWindow_x and the button handlers
/*0x244*/ uint32_t    BackgroundDrawType;
/*0x248*/ CXWnd*      ParentWindow;                        // CXWnd__IsDescendantOf_x has this one, If this is NULL, coordinates are absolute...
/*0x250*/ uint8_t     FadeAlpha;
/*0x258*/ CTextObjectInterface* pTipTextObject;
/*0x260*/ int         DeleteCount;
/*0x264*/ uint32_t    LastTimeMouseOver;
/*0x268*/
// @end: CXWnd Members
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

// @sizeof(CSidlScreenWnd) == 0x2d0 :: 2022-08-26 (test) @ 0x140539961
constexpr size_t CSidlScreenWnd_size = 0x2d0;
constexpr size_t CSidlScreenWnd_vftable_size = 0x300;

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
/*0x268*/ bool                         bControlsCreated;
/*0x270*/ CXStr                        SidlText;                               // found in CChatWindow__WndNotification_x*
/*0x278*/ CScreenTemplate*             SidlPiece;                              // CScreenPieceTemplate (important)
/*0x280*/ ArrayClass<CRadioGroup*>     RadioGroup;
/*0x298*/ bool                         bInitVisibility;
/*0x299*/ bool                         bVisibleBeforeResize;
/*0x29c*/ int                          IniFlags;
/*0x2a0*/ CXStr                        IniStorageName;                         // found in CSidlScreenWnd__LoadSidlScreen
/*0x2a8*/ int                          IniVersion;
/*0x2ac*/ int                          LastResX;
/*0x2b0*/ int                          LastResY;
/*0x2b4*/ bool                         bLastResFullscreen;
/*0x2b8*/ int                          ContextMenuID;
/*0x2c0*/ CXWnd*                       pFirstVScrollChild;
/*0x2c8*/ int                          ContextMenuTipID;
/*0x2cc*/ bool                         bHasActivatedFirstTimeAlert;
/*0x2d0*/

	//----------------------------------------------------------------------------
	// functions that we provide offsets for
	//EQLIB_OBJECT CXWnd* GetChildItem(const CXStr&, bool bDebug);
	EQLIB_OBJECT int DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const;
	EQLIB_OBJECT void CalculateHSBRange();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void CreateChildrenFromSidl(DWORD = 0);
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
	/*0x2d0*/ void* OnZone;
	/*0x2d8*/ void* OnPreZone;
	/*0x2e0*/ void* LoadIniInfo;
	/*0x2e8*/ void* StoreIniInfo;
	/*0x2f0*/ void* AsSidlScreenWnd;
	/*0x2f8*/ void* GetScreenWndType;
	/*0x300*/
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

/*0x008*/ ArrayClass<CXWnd*>           pWindows;
/*0x020*/ ArrayClass<CXWnd*>           ParentAndContextMenuWindows;
/*0x038*/ ArrayClass<CXWnd*>           TransitionWindows;
/*0x050*/ ArrayClass<CXWnd*>           PendingDeletionWindows;
/*0x068*/ uint32_t                     TypematicKey;
/*0x06c*/ uint32_t                     LastKeyDownTime;
/*0x070*/ uint32_t                     LastMouseClickTime;           // when mouse was last clicked
/*0x074*/ uint32_t                     MouseMoveTimeStamp;           // when mouse was last moved
/*0x078*/ int                          StrokesSent;
/*0x07c*/ int                          ToolTipHitTest;               // this is really an enum //0 outside 1 transparent 2 client 3 minimizebox 4 tilebox 5 qmark 6 maxbox 7 closebox 8 titlebar 9 vscrollup 10 vscrolldown 11 vscroll thumb 12 vscroll pgup 13 vscroll pgdn 14 hscroll left 15 hscroll right 16 hscroll thumb 17 hscroll pgup 18 hscroll pgdn 19 border left 20 border top 21 border right 22 border bottom 23 border topleft 24 border topright 25 border bott left 26 bott right 27 left top 28 left bott 29 right top 30 right bott 31 no hit
/*0x080*/ CXWnd*                       LastClickedWindow;
/*0x088*/ CXWnd*                       MainWindow;
/*0x090*/ CXWnd*                       FocusWindow;                  // when you select a window its pointer shows up here
/*0x098*/ CXWnd*                       CurrDraggedWindow;            // when you drag a window its pointer shows up here
/*0x0a0*/ CXWnd*                       ActiveWindow;
/*0x0a8*/ CXWnd*                       LastMouseOver;                // Current window pointer is over if this is 0 we are above MAIN Window
/*0x0b0*/ CXWnd*                       Tooltip;                      // Last Tooltip to show?
/*0x0b8*/ ArrayClass<CXWnd*>           GlobalFocusWindows;
/*0x0d0*/ bool                         bReadingLog;
/*0x0d1*/ bool                         bSidlManagerOwner;
/*0x0d4*/ int                          CaptureCount;
/*0x0d8*/ bool                         bMouseMoveRelative;
/*0x0dc*/ CXPoint                      MousePoint;
/*0x0e4*/ bool                         bCapsLock;
/*0x0e5*/ bool                         KeyboardFlags[4];
/*0x0e9*/ bool                         bChatMessage;
/*0x0ea*/ bool                         bDrawWindows;
/*0x0eb*/ uint8_t                      MouseMoveFlags;
/*0x0ec*/ EWndManagerMode              ManagerMode;
/*0x0f0*/ int                          DecorButtonHitTest;
/*0x0f4*/ CXPoint                      MoveResize;
/*0x100*/ SDragDropInfo                DragDropInfo;
/*0x138*/ CClickStickInfo              ClickStickInfo;
/*0x170*/ int                          Unknown0x100;
/*0x174*/ bool                         bModal;
/*0x178*/ uint32_t                     TTCheckTimer;
/*0x17c*/ int                          Flags;
/*0x180*/ CXStr                        ClipText;
/*0x188*/ uint32_t                     ScreenExtentX;
/*0x18c*/ uint32_t                     ScreenExtentY;
/*0x190*/ ArrayClass<CTextureFont*>    FontsArray;
/*0x1a8*/ CTextureFont*                pSystemFont;
/*0x1b0*/ bool                         bToggleWindowMode;
/*0x1b8*/ HWND*                        pGlobalHwnd;
/*0x1c0*/ CXPoint                      StoredMousePos;               // last position Mouse was at before we moved it
/*0x1c8*/ bool                         bManagerDeletionPending;
/*0x1d0*/ CursorClass                  CC;
/*0x248*/

	inline bool IsShiftKey() const { return KeyboardFlags[0]; }
	inline bool IsCtrlKey() const { return KeyboardFlags[1]; }
	inline bool IsAltKey() const { return KeyboardFlags[2] | KeyboardFlags[3]; }
};

//============================================================================
// CEQXWndManager
//============================================================================

// @sizeof(CEQXWndManager) == 0x290 :: 2022-08-26 (test) @ 0x14015c845
constexpr size_t CEQXWndManager_size = 0x290;

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

/*0x248*/ ControllerFactory DefaultControllerFactory;
/*0x268*/ ControllerManager ControllerMgr;
/*0x290*/
};

SIZE_CHECK(CEQXWndManager, CEQXWndManager_size);

inline namespace deprecated {
	using CXWNDMGR DEPRECATE("Use CEQXWndManager instead of CXWNDMGR") = CEQXWndManager;
	using PCXWNDMGR DEPRECATE("Use CEQXWndManager* instead of PCXWNDMGR") = CEQXWndManager*;
}

//----------------------------------------------------------------------------

void InitializeCXWnd();

} // namespace eqlib
