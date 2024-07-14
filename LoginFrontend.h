/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

namespace eqlib {

//----------------------------------------------------------------------------

// Types used by the frontend a.k.a. eqmain.dll

class [[offsetcomments]] LoginController
{
public:
	EQLIB_OBJECT LoginController(HINSTANCE hInstance, HWND hWnd);
	EQLIB_OBJECT ~LoginController();

	EQLIB_OBJECT void Startup();
	EQLIB_OBJECT void Shutdown();
	EQLIB_OBJECT void GiveTime();

	EQLIB_OBJECT int ProcessKeyboardEvents();
	EQLIB_OBJECT int ProcessMouseEvents();

/*0x00*/ IDirectInput8A*          pDI;
/*0x08*/ IDirectInputDevice8A*    pDIKeyboard;
/*0x10*/ IDirectInputDevice8A*    pDIMouse;
/*0x18*/ HWND                     hWnd;
/*0x20*/ HINSTANCE                hInstance;
/*0x28*/ bool                     bIsKeyboardActive;
/*0x29*/ bool                     bIsMouseActive;
/*0x2c*/ uint32_t                 Unknown0x18;
/*0x30*/ int                      LastInputKey;
/*0x34*/
};

class CLoginViewManager
{
public:
	EQLIB_OBJECT int HandleLButtonUp(CXPoint&);
};

class LoginServerAPI
{
public:
	EQLIB_OBJECT unsigned int JoinServer(int serverID, void* userdata = 0, int timeoutseconds = 10);
};

namespace EQLS {

struct [[offsetcomments]] Date
{
/*0x00*/ int8_t    Hours;
/*0x01*/ int8_t    Minutes;
/*0x02*/ int8_t    Seconds;
/*0x03*/ int8_t    Month;
/*0x04*/ int8_t    Day;
/*0x06*/ int16_t   Year;
/*0x08*/ CXStr     Unknown0x08;
/*0x10*/ CXStr     Unknown0x0c;
/*0x18*/ CXStr     Unknown0x10;
/*0x20*/ int64_t   TimeStamp;
/*0x28*/
};

enum eServerStatus : uint32_t
{
	eServerStatus_Down           = 1,
	eServerStatus_Locked         = 4,
	eServerStatus_PopulationLow  = 0x10,
	eServerStatus_PopulationHigh = 0x20,

};

struct [[offsetcomments]] EQClientServerData
{
/*0x00*/ ServerID      ID;
/*0x08*/ CXStr         ServerName;
/*0x10*/ CXStr         HostName;
/*0x18*/ CXStr         ServerIP;
/*0x20*/ int           ExternalPort;
/*0x24*/ int           InternalPort;
/*0x28*/ Date          DateCreated;
/*0x50*/ int           Flags;             // 0x100 = all access
/*0x54*/ int           ServerType;        // uninitialized
/*0x58*/ CXStr         LanguageCode;
/*0x60*/ CXStr         CountryCode;
/*0x68*/ CXStr         RuleSet;
/*0x70*/ CXStr         Description;
/*0x78*/ eServerStatus StatusFlags;
/*0x7c*/ int           PopulationRanking; // not populated
/*0x80*/ int           Expansion;
/*0x84*/ int           TrueBoxStatus;     // 0 = no, 1 = yes, 2 = relaxed
/*0x88*/
};

class [[offsetcomments]] LoginServerCallback
{
public:
	virtual void OnConnect() {}
	virtual void OnConnectionTerminated(bool clientSide) {}
	virtual void OnCallback(void*, void*) {}
	virtual void OnHandshake(bool, int, CXStr, CXStr) {}
	virtual void OnPlayerLogin(bool, int, CXStr, void*, void*) {}
	virtual void OnGetServerList(bool, int, CXStr, void*, void*) {}
	virtual void OnJoinServer(bool, int, CXStr, int, void*) {}
	virtual void OnJoinChat(bool, int, CXStr, CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, int, void*) {}
	virtual void OnSetGMList(void*) {}
	virtual void OnModifyGMList(void*, void*) {}
	virtual void OnJoinAdminChannel(bool, int, CXStr, CXStr&, CXStr, void*) {}
	virtual void OnCommandResult(bool, int, CXStr, CXStr, void*) {}
	virtual void OnCommandExecute(uint32_t, int, uint32_t, CXStr, void*) {}
	virtual void OnServerChatMessageList(void*, void*) {}
	virtual void OnServerChatSTLookupList(void*, void*) {}
	virtual void OnSetBanner(CXStr&) {}
	virtual void OnReconnectToChat(CXStr&, int, CXStr&, CXStr&, CXStr&, CXStr&, bool, void*) {}
	virtual void OnBoot(CXStr) {}
	virtual void JoinServer(void*) {}
	virtual void OnSetGameFeatures(void*) {}
	virtual void OnKickMyPlayerReply(bool, int, CXStr, void*) {}
};

class [[offsetcomments]] ChannelServerHandler
{
public:
	virtual void Channel_VirtualFunction1(bool) {}
	virtual void Channel_VirtualFunction2(void*) {}
	// more virtuals ...
};

struct [[offsetcomments]] EQDevice
{
	/*0x00*/ char Name[0x40];
/*0x40*/ };

struct [[offsetcomments]] EQLogin
{
/*0x000*/ EQDevice  Devices[0x10];
/*0x400*/ int       NumDevices;
/*0x408*/ HWND      hEQWnd;
/*0x410*/ int       ReturnCode; // -1 = failed login
/*0x414*/ char      Login[0x80];
/*0x494*/ char      PW[0x80];
/*0x514*/ char      PW2[0x80];
/*0x594*/ char      ServerLong[0x80];
/*0x614*/ int       ServerPort;
/*0x618*/ char      AccountKey[0x80];
/*0x698*/ int       ActiveDeviceIndex;
/*0x69c*/ char      LastZoneEntered[0x20];
/*0x6bc*/ char      StationName[0x20];
/*0x6dc*/ char      ExeName[0x20];
/*0x6fc*/ char      CommandLine[0x1c0];
/*0x8bc*/ char      ServerShort[0x80];
/*0x93c*/ char      Session[0x40];
/*0x97c*/ char      Character[0x40];
/*0x9bc*/ // more...
};

} // namespace EQLS

struct [[offsetcomments]] IniKeyValuePair
{
/*0x00*/ CXStr            key;
/*0x08*/ CXStr            value;
/*0x10*/ const char*      valueStr;
/*0x18*/ int              hashVal;
/*0x20*/ IniKeyValuePair* next;
/*0x28*/
};

struct [[offsetcomments]] IniFileSection
{
/*0x00*/ HashTable<IniKeyValuePair*> values;
/*0x18*/ int              numValues;
/*0x20*/ CXStr            section;
/*0x28*/ int              hashVal;
/*0x30*/ IniKeyValuePair* firstKeyValue;
/*0x38*/ IniKeyValuePair* lastKeyValue;
/*0x40*/ IniFileSection*  nextSection;
/*0x48*/
};

class [[offsetcomments]] IniFileWrapper
{
public:
	virtual ~IniFileWrapper() {}

/*0x08*/ HashTable<IniFileSection*> sections;
/*0x20*/ int              numSections;
/*0x28*/ IniFileSection*  firstSection;
/*0x30*/ IniFileSection*  lastSection;
/*0x38*/ bool             dirty;
/*0x3c*/
};

struct [[offsetcomments]] TimeCheck
{
/*0x00*/ int64_t    lastTimeChecked;
/*0x08*/ int64_t    elapsedTime;
/*0x10*/
};

// LoginClient
class [[offsetcomments]] LoginClient : public EQLS::LoginServerCallback,
	public EQLS::ChannelServerHandler
{
public:
	struct Host
	{
		CXStr Name;
		int   Port;
	};

/*0x010*/ EQLS::EQLogin*          pLoginData;
/*0x018*/ DoublyLinkedList<Host*> Hosts;
/*0x050*/ Host*                   pHost;
/*0x058*/ bool                    bRetryConnect;
/*0x060*/ IniFileWrapper          hostIniFile;
/*0x0a0*/ IniFileWrapper          systemMacrosIniFile;
/*0x0e0*/ IniFileWrapper          userMacrosIniFile;
/*0x120*/ TimeCheck               timeCheck;
/*0x130*/ CXStr                   LoginName;
/*0x138*/ CXStr                   Password;
/*0x140*/ CXStr                   LoginNameCopy;
/*0x148*/ CXStr                   PasswordCopy;
/*0x150*/ CXStr                   AccountKey;
/*0x158*/ int                     accountId;
/*0x160*/ EQLS::EQClientServerData* selectedServer;
/*0x168*/ int                     displayDeviceIndex;
/*0x16c*/ bool                    isLoggingIn;
/*0x170*/ uint32_t                unknown1;
/*0x174*/ uint32_t                unknown2;
/*0x178*/ DoublyLinkedList<EQLS::EQClientServerData*> ServerList;
/*0x1b0*/ EQLS::EQClientServerData QuickConnectServer;
/*0x238*/
};

namespace eqmain {


//============================================================================
// CXWnd
//============================================================================

// 2024-06-17 (live) @ 0x1800CFCFB
constexpr size_t CXWnd_size = 0x258;
constexpr size_t CXWnd_vftable_size = 0x2D0;

class [[offsetcomments]] CXWnd
	: public TListNode<CXWnd>   // node in list of siblings
	, public TList<CXWnd>       // list of children
{
public:
	//----------------------------------------------------------------------------
	EQLIB_OBJECT virtual bool IsValid() const { return ValidCXWnd; }
	EQLIB_OBJECT virtual ~CXWnd() {}
	EQLIB_OBJECT virtual int DrawNC() const { return 0; }
	EQLIB_OBJECT virtual int Draw() { return 0; }
	EQLIB_OBJECT virtual int PostDraw() { return 0; }
	EQLIB_OBJECT virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn) { return 0; }
	EQLIB_OBJECT virtual int DrawChildItem(const CXWnd* child, void* item) const { return 0; }
	EQLIB_OBJECT virtual int DrawCaret() const { return 0; }
	EQLIB_OBJECT virtual int DrawBackground() const { return 0; }
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const { return 0; }
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const { return 0; }
	EQLIB_OBJECT virtual CXRect GetMinimizedRect() const { return CXRect(); }
	EQLIB_OBJECT virtual int DrawTitleBar(const CXRect& rect) const { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const { return nullptr; }
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) { return 0; }
	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) { return 0; }
	EQLIB_OBJECT virtual int HandleMouseLeave() { return 0; }
	EQLIB_OBJECT virtual int OnDragDrop(SDragDropInfo* info) { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const { return nullptr; }
	EQLIB_OBJECT virtual bool QueryDropOK(SDragDropInfo* info) const { return false; }
	EQLIB_OBJECT virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk) { return 0; }
	EQLIB_OBJECT virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const { return nullptr; }
	EQLIB_OBJECT virtual bool QueryClickStickDropOK(CClickStickInfo* info) const { return false; }
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr) { return 0; }
	EQLIB_OBJECT virtual void OnWndNotification() {}
	EQLIB_OBJECT virtual void Activate() { Show(true); }
	EQLIB_OBJECT virtual void Deactivate() { Show(false); }
	EQLIB_OBJECT bool IsActive() const { return bActive; }
	EQLIB_OBJECT virtual int OnShow() { return 0; }
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect) { return 0; }
	EQLIB_OBJECT virtual int OnResize(int w, int h) { return 0; }
	EQLIB_OBJECT virtual int OnBeginMoveOrResize() { return 0; }
	EQLIB_OBJECT virtual int OnCompleteMoveOrResize() { return 0; }
	EQLIB_OBJECT virtual int OnMinimizeBox() { return 0; }
	EQLIB_OBJECT bool IsMinimized() const { return Minimized; }
	EQLIB_OBJECT void SetMinimized(bool bValue) { Minimized = bValue; }
	EQLIB_OBJECT virtual int OnMaximizeBox() { return 0; }
	EQLIB_OBJECT bool IsMaximized() const { return bMaximized; }
	EQLIB_OBJECT virtual int OnTileBox() { return 0; }
	EQLIB_OBJECT bool IsTiled() const { return bTiled; }
	EQLIB_OBJECT virtual int OnTile() { return 0; }
	EQLIB_OBJECT virtual int OnSetFocus(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int OnKillFocus(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int OnProcessFrame() { return 0; }
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos) { return 0; }
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos) { return 0; }
	EQLIB_OBJECT virtual int OnBroughtToTop() { return 0; }
	EQLIB_OBJECT virtual int OnActivate(CXWnd* old) { return 0; }
	EQLIB_OBJECT virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true) { return 0; }
	EQLIB_OBJECT virtual bool AboutToShow() { return false; }
	EQLIB_OBJECT virtual bool AboutToHide() { return false; }
	EQLIB_OBJECT virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) { return 0; }
	EQLIB_OBJECT virtual CXStr GetTooltip() const { return Tooltip; }
	EQLIB_OBJECT void SetTooltip(const CXStr& Value) { Tooltip = Value; }
	EQLIB_OBJECT virtual void ClickThroughMenuItemTriggered() {}
	EQLIB_OBJECT virtual int HitTest(const CXPoint& pos, int* result) const { return 0; }
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetInnerRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetClientRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const { return CXRect(); }
	EQLIB_OBJECT virtual CXSize GetMinSize(bool withBorder = true) const { return CXSize(); }
	EQLIB_OBJECT virtual CXSize GetMaxSize(bool withBorder = true) const { return CXSize(); }
	EQLIB_OBJECT virtual CXSize GetUntileSize() const { return Location.GetSize(); }
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const { return false; }
	EQLIB_OBJECT virtual bool ShouldProcessChildrenFrames() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual bool ShouldProcessControllerFrame() const { return IsVisible() && !IsMinimized(); }
	EQLIB_OBJECT virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) { DrawTemplate = drawTemplate; }
	EQLIB_OBJECT virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false,
		bool completeMoveOrResize = false, bool moveAutoStretch = false) { return 0; }
	EQLIB_OBJECT virtual int Move(const CXPoint& point) { return 0; }
	EQLIB_OBJECT virtual void SetWindowText(const CXStr& text) { WindowText = text; }
	EQLIB_OBJECT CXStr GetWindowText() const { return WindowText; }
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const { return nullptr; }
	EQLIB_OBJECT virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const { return nullptr; }
	EQLIB_OBJECT virtual const CXStr* GetWindowName() const { return nullptr; }
	EQLIB_OBJECT virtual int SetVScrollPos(int pos) { return 0; }
	EQLIB_OBJECT virtual int SetHScrollPos(int pos) { return 0; }
	EQLIB_OBJECT virtual int AutoSetVScrollPos(CXRect rect) { return 0; }
	EQLIB_OBJECT virtual int AutoSetHScrollPos(CXRect rect) { return 0; }
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece) {}
	EQLIB_OBJECT virtual void OnReloadSidl() {}
	EQLIB_OBJECT virtual bool HasActivatedFirstTimeAlert() const { return false; }
	EQLIB_OBJECT virtual void SetHasActivatedFirstTimeAlert(bool) {}
	EQLIB_OBJECT virtual const CXSize& GetMinClientSize() const { return MinClientSize; }
	EQLIB_OBJECT void SetMinClientSize(const CXSize& pt) { MinClientSize = pt; }
	EQLIB_OBJECT virtual const CXSize& GetMaxClientSize() const { return MaxClientSize; }
	EQLIB_OBJECT virtual CEditWnd* GetActiveEditWnd() const { return nullptr; }
	EQLIB_OBJECT virtual void UpdateLayout(bool finish = false) {};

	void SetClientRectDirty(bool dirty);
	bool IsClientRectDirty() const { return bClientRectChanged; }
	bool IsClientClipRectDirty() const { return bClientClipRectChanged; }
	bool IsScreenClipRectDirty() const { return bScreenClipRectChanged; }

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

	bool IsVisible() const { return dShow; }
	void SetVisible(bool bValue) { dShow = bValue; }

	void SetClickThrough(bool bValue) { bClickThrough = bValue; }

	void SetMaximizable(bool bValue) { bMaximizable = bValue; }

	CTextureFont* GetFont() const { return pFont; }

	void SetEscapable(bool bValue) { bEscapable = bValue; }
	void SetEscapableLocked(bool bValue) { bEscapableLocked = bValue; }

	CXWnd* GetParentWindow() const { return ParentWindow; }
	CXWnd* GetParent() const { return ParentWindow; }
	void SetParentWindow(CXWnd* pWnd) { ParentWindow = pWnd; };

	const CXWnd* GetFirstChildWnd() const { return GetFirstNode(); }
	CXWnd* GetFirstChildWnd() { return GetFirstNode(); }
	const CXWnd* GetNextSiblingWnd() const { return GetNext(); }
	CXWnd* GetNextSiblingWnd() { return GetNext(); }

	int GetVScrollMax() const { return VScrollMax; }
	int GetVScrollPos() const { return VScrollPos; }
	int GetHScrollMax() const { return HScrollMax; }
	int GetHScrollPos() const { return HScrollPos; }

	bool IsMouseOver() const { return MouseOver; }

	CXRect GetLocation() const { return Location; }
	void SetLocation(const CXRect& r) { Location = r; }

	CXRect GetOldLocation() { return OldLocation; }

	void SetNeedsSaving(bool bValue) { bNeedsSaving = bValue; }

	void SetClientRectChanged(bool bValue) { bClientRectChanged = bValue; }

	COLORREF GetBGColor() const { return BGColor; }
	void SetBGColor(COLORREF Value) { BGColor = Value; }
	void SetBGColor(mq::MQColor Value) { BGColor = Value.ToARGB(); }

	void SetDisabledBackground(COLORREF Value) { DisabledBackground = Value; }
	COLORREF GetDisabledBackground() const { return DisabledBackground; }

	bool IsEnabled() const { return Enabled; }
	void SetEnabled(bool bValue) { Enabled = bValue; }

	uint32_t GetWindowStyle() const { return WindowStyle; }
	void SetWindowStyle(uint32_t Value) { WindowStyle = Value; }
	void AddStyle(uint32_t Value) { WindowStyle |= Value; }
	void RemoveStyle(uint32_t Value) { WindowStyle &= ~Value; }

	void SetClipToParent(bool bValue) { bClipToParent = bValue; }
	void SetUseInLayoutHorizontal(bool bValue) { bUseInLayoutHorizontal = bValue; }
	void SetUseInLayoutVertical(bool bValue) { bUseInLayoutVertical = bValue; }

	void SetZLayer(int Value) { ZLayer = Value; }
	int GetZLayer() const { return ZLayer; }

	CXWndDrawTemplate* GetDrawTemplate() const { return DrawTemplate; }

	void SetActive(bool bValue) { bActive = bValue; }

	void SetLocked(bool bValue) { Locked = bValue; }
	bool IsLocked() const { return Locked; }

	void SetFades(bool bValue) { Fades = bValue; }
	bool GetFades() const { return Fades; }

	void SetFaded(bool bValue) { Faded = bValue; }
	bool GetFaded() const { return Faded; }

	void SetFadeDelay(int Value) { FadeDelay = Value; }
	int GetFadeDelay() const { return FadeDelay; }

	void SetBGType(uint32_t Value) { BGType = Value; }
	uint32_t GetBGType() const { return BGType; }

	void SetFadeDuration(uint32_t Value) { FadeDuration = Value; }
	uint32_t GetFadeDuration() const { return FadeDuration; }

	void SetAlpha(uint8_t Value) { Alpha = Value; }
	uint8_t GetAlpha() const { return Alpha; }

	void SetFadeToAlpha(uint8_t Value) { FadeToAlpha = Value; }
	uint8_t GetFadeToAlpha() const { return FadeToAlpha; }

	void SetData(int64_t Value) { Data = Value; }
	int64_t GetData() const { return Data; }

	void SetClickThroughMenuItemStatus(bool bValue) { bClickThroughMenuItemStatus = bValue; }
	 void SetShowClickThroughMenuItem(bool bValue) { bShowClickThroughMenuItem = bValue; }

	void SetBottomAnchoredToTop(bool bValue) { bBottomAnchoredToTop = bValue; }
	void SetLeftAnchoredToLeft(bool bValue) { bLeftAnchoredToLeft = bValue; }
	void SetRightAnchoredToLeft(bool bValue) { bRightAnchoredToLeft = bValue; }
	void SetTopAnchoredToTop(bool bValue) { bTopAnchoredToTop = bValue; }

	void SetOffsets(const CXRect& rect)
	{
		TopOffset = rect.top;
		BottomOffset = rect.bottom;
		LeftOffset = rect.left;
		RightOffset = rect.right;
	}

	void SetTopOffset(int Value) { TopOffset = Value; }
	int GetTopOffset() const { return TopOffset; }

	void SetBottomOffset(int Value) { BottomOffset = Value; }
	int GetBottomOffset() const { return BottomOffset; }

	void SetLeftOffset(int Value) { LeftOffset = Value; }
	int GetLeftOffset() const { return LeftOffset; }

	void SetRightOffset(int Value) { RightOffset = Value; }
	int GetRightOffset() const { return RightOffset; }

	int GetXMLIndex() const { return XMLIndex; }

	void SetXMLTooltip(const CXStr& Value) { XMLToolTip = Value; }
	CXStr GetXMLTooltip() const { return XMLToolTip; }

	void SetCRNormal(mq::MQColor Value) { CRNormal = Value.ToARGB(); }
	void SetCRNormal(COLORREF Value) { CRNormal = Value; }

	EQLIB_OBJECT CXStr GetXMLName() const;
	EQLIB_OBJECT CXStr GetTypeName() const;

	void Refade()
	{
		Faded = true;
		LastTimeMouseOver = 0;
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
	/*0x1d8*/ void* ClickThroughMenuItemTriggered;
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

// @start: CXWnd Members
/*0x030*/ CXWnd*             ParentWindow;
/*0x038*/ CTextureAnimation* IconTextureAnim;
/*0x040*/ CXSize             MinClientSize;
/*0x048*/ CXRect             ClipRectClient;
/*0x058*/ CXRect             IconRect;
/*0x068*/ CStaticTintedBlendAnimationTemplate* TitlePiece2;
/*0x070*/ int                RightOffset;
/*0x074*/ int                ParentAndContextMenuArrayIndex;
/*0x078*/ int                Transition;
/*0x07c*/ CXRect             TransitionRect;
/*0x08c*/ int                BlinkState;
/*0x090*/ bool               bClipToParent;
/*0x091*/ uint8_t            bResizableMask;
/*0x092*/ bool               bClientClipRectChanged;
/*0x093*/ bool               Locked;
/*0x094*/ bool               bClickThroughMenuItemStatus;
/*0x095*/ bool               bClientRectChanged;
/*0x096*/ bool               bMaximized;
/*0x098*/ CXStr              WindowText;
/*0x0a0*/ bool               bMarkedForDelete;
/*0x0a1*/ bool               Enabled;
/*0x0a4*/ uint32_t           LastBlinkFadeRefreshTime;
/*0x0a8*/ bool               bBottomAnchoredToTop;
/*0x0a9*/ bool               bUseInLayoutHorizontal;
/*0x0b0*/ CTextObjectInterface* pTextObject;
/*0x0b8*/ COLORREF           CRNormal;
/*0x0c0*/ int64_t            Data;
/*0x0c8*/ bool               bLeftAnchoredToLeft;
/*0x0cc*/ uint32_t           BackgroundDrawType;
/*0x0d0*/ bool               bKeepOnScreen;
/*0x0d1*/ bool               bIsParentOrContextMenuWindow;
/*0x0d2*/ bool               Fades;
/*0x0d8*/ CXStr              XMLToolTip;
/*0x0e0*/ CXRect             ClientRect;
/*0x0f0*/ CXStr              Tooltip;
/*0x0f8*/ bool               bClickThroughToBackground;
/*0x0fc*/ int                LeftOffset;
/*0x100*/ bool               bAction;
/*0x104*/ int                BlinkDuration;
/*0x108*/ uint32_t           BGType;
/*0x10c*/ bool               bActive;
/*0x110*/ int                DeleteCount;
/*0x114*/ bool               bTopAnchoredToTop;
/*0x115*/ bool               bShowClickThroughMenuItem;
/*0x116*/ bool               bFullyScreenClipped;
/*0x118*/ uint32_t           BlinkFadeFreq;
/*0x120*/ ControllerBase*    pController;
/*0x128*/ CXWnd*             FocusProxy;
/*0x130*/ CTextureFont*      pFont;
/*0x138*/ uint32_t           BlinkFadeStartTime;
/*0x13c*/ bool               bScreenClipRectChanged;
/*0x13d*/ bool               Unlockable;
/*0x140*/ CXSize             MaxClientSize;
/*0x148*/ bool               bShowBorder;
/*0x14c*/ int                BottomOffset;
/*0x150*/ uint8_t            FadeAlpha;
/*0x151*/ bool               bIsTransitioning;
/*0x154*/ int                managerArrayIndex;
/*0x158*/ bool               Minimized;
/*0x15c*/ int                VScrollPos;
/*0x160*/ CStaticTintedBlendAnimationTemplate* TitlePiece;
/*0x168*/ int                VScrollMax;
/*0x16c*/ bool               MouseOver;
/*0x170*/ int                BlinkStartTimer;
/*0x174*/ bool               bTiled;
/*0x178*/ int                TopOffset;
/*0x17c*/ CXRect             OldLocation;
/*0x190*/ CTextObjectInterface* pTipTextObject;
/*0x198*/ int                HScrollPos;
/*0x19c*/ bool               bUseInLayoutVertical;
/*0x19d*/ bool               bClickThrough;
/*0x19e*/ uint8_t            FadeToAlpha;
/*0x1a0*/ CXWndDrawTemplate* DrawTemplate;
/*0x1a8*/ uint8_t            Alpha;
/*0x1ac*/ int                ZLayer;
/*0x1b0*/ bool               bEnableShowBorder;
/*0x1b4*/ uint32_t           BlinkFadeDuration;
/*0x1b8*/ uint32_t           TransitionStartTick;
/*0x1bc*/ uint32_t           XMLIndex;
/*0x1c0*/ COLORREF           BGColor;
/*0x1c4*/ bool               bMaximizable;
/*0x1c5*/ bool               bEscapable;
/*0x1c8*/ uint32_t           TransitionDuration;
/*0x1d0*/ ArrayClass2<uint32_t> RuntimeTypes;
/*0x1f0*/ bool               bHCenterTooltip;
/*0x1f4*/ CXRect             Location;
/*0x204*/ CXRect             ClipRectScreen;
/*0x214*/ COLORREF           DisabledBackground;
/*0x218*/ bool               bRightAnchoredToLeft;
/*0x219*/ bool               Faded;
/*0x21a*/ uint8_t            TargetAlpha;
/*0x21b*/ bool               bCaptureTitle;
/*0x220*/ CXStr              DataStr;
/*0x228*/ bool               dShow;
/*0x229*/ bool               ValidCXWnd;
/*0x22c*/ uint32_t           WindowStyle;
/*0x230*/ bool               bBringToTopWhenClicked;
/*0x231*/ uint8_t            StartAlpha;
/*0x234*/ int                HScrollMax;
/*0x238*/ bool               bNeedsSaving;
/*0x240*/ CLayoutStrategy*   pLayoutStrategy;
/*0x248*/ bool               bEscapableLocked;
/*0x24c*/ uint32_t           LastTimeMouseOver;
/*0x250*/ uint32_t           FadeDelay;
/*0x254*/ uint32_t           FadeDuration;
/*0x258*/
// @end: CXWnd Members
};

SIZE_CHECK(CXWnd, CXWnd_size);
SIZE_CHECK2(CXWnd_vftable, CXWnd::VirtualFunctionTable, CXWnd_vftable_size);

class CStmlWnd : public CXWnd
{
public:
/*0x248*/ CXStr              STMLText;
};

class [[offsetcomments]] CEditBaseWnd : public CXWnd
{
public:
/*0x248*/ eTextAlign   eAlign = eta_Left;
/*0x24c*/ int          StartPos = 0;
/*0x250*/ int          EndPos = 0;
/*0x254*/ int          MaxChars = -1;
/*0x258*/ int          MaxBytesUTF8 = -1;
/*0x260*/ CXStr        InputText;
/*0x268*/ int          TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x290*/ int          TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x2b8*/ int          TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x2e0*/ int          TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x308*/ int          TagDynamicSize[EDITWND_MAX_TAGS];
/*0x330*/ int          TagCodes[EDITWND_MAX_TAGS];
/*0x358*/ CXStr        TagStrings[EDITWND_MAX_TAGS];
/*0x3a8*/ int          TagCount;
/*0x3ac*/ uint32_t     EditStyle;
/*0x3b0*/
};

class [[offsetcomments]] CListWnd : public CXWnd
{
public:
/*0x258*/ int                 Unknown0x1f0;
/*0x260*/ ArrayClass<SListWndLine> ItemsArray;
/*0x278*/ ArrayClass<SListWndColumn> Columns;
/*0x290*/ int                 CurSel;
/*0x294*/ int                 CurCol;
/*0x298*/
	CXStr GetItemText(int row, int col)
	{
		if (row < 0 || row >= ItemsArray.Count)
			return CXStr();

		auto& line = ItemsArray[row];
		if (col < 0 || col >= line.Cells.Count)
			return CXStr();

		return line.Cells[col].Text;
	}
};

} // namespace eqmain

//----------------------------------------------------------------------------

} // namespace eqlib
