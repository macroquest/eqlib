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

#pragma once

#include "ForwardDecls.h"
#include "Common.h"
#include "Containers.h"
#include "CXStr.h"
#include "CXWnd.h"
#include "Containers.h"
#include "Items.h"
#include "SidlParams.h"
#include "SidlTemplates.h"
#include "EQData.h"

#include <list>
#include <functional>

#undef FindWindow
#undef InsertMenuItem

struct IShellFolder;

// from shtypes.h
struct _ITEMIDLIST;
using LPITEMIDLIST = _ITEMIDLIST *;

namespace eqlib {

//----------------------------------------------------------------------------
// Forward Declarations

class CAtlas;
class CButtonWnd;
class CChatContainerWindow;
class CChatWindow;
class CContextMenu;
class CConfirmationDialog;
class CEditWnd;
class CParamLayoutStrategy;
class CLabel;
class CLayoutStrategyTemplate;
class CStmlWnd;
class CUnSerializeBuffer;
class CVerticalLayoutWnd;
class CVivoxObserver;

using D3DCOLOR = DWORD;
using CPopDialogWnd = CConfirmationDialog;

//----------------------------------------------------------------------------

class WndEventHandler
{
public:
	unsigned int lastUpdate;
};

//----------------------------------------------------------------------------

class CVivoxManager;
class CVivoxObserver
{
public:
	virtual void Unknown00(bool) {}

	CVivoxManager* VivoxManager;
};

//----------------------------------------------------------------------------

class CObservable;

class CNotification
{
public:
	int Type;
};

class IObserver
{
public:
	EQLIB_OBJECT virtual void Notify(CObservable* Src, const CNotification* const Notification) {}
};

class CObservable
{
public:
	EQLIB_OBJECT void NotifyObservers(CNotification* notification = 0);

private:
	// this will never work because of differences in stl between
	// mq2 and eq. Don't use it.
	std::list<IObserver*> ObserverList;
};

//============================================================================
// CTextureFont
//============================================================================

class [[offsetcomments]] CTextureFont
{
public:
	virtual ~CTextureFont();

	EQLIB_OBJECT CXStr GetName() const;
	EQLIB_OBJECT int DrawWrappedText(const CXStr&, const CXRect&, const CXRect&, COLORREF, uint16_t, int) const;
	EQLIB_OBJECT int DrawWrappedText(const CXStr& Str, int x, int y, int Width, const CXRect& BoundRect, COLORREF Color, uint16_t Flags = 0, int StartX = 0) const;
	EQLIB_OBJECT int DrawWrappedText(CTextObjectInterface* Interface, const CXStr& Str, const CXRect& Rect, const CXRect& BoundRect, COLORREF Color, uint16_t Flags = 0, int StartX = 0) const;
	EQLIB_OBJECT int GetHeight() const;
	EQLIB_OBJECT int GetKerning(unsigned short, unsigned short) const;
	EQLIB_OBJECT int GetTextExtent(const CXStr&);
	EQLIB_OBJECT int GetWidth(unsigned short) const;

/*0x04*/ int FontStyle;
/*0x08*/
};

//============================================================================
// CEQSuiteTextureLoader
//============================================================================

enum eBitmapType
{
	eBitmapTypeNormal,
	eBitmapTypeLayer,
	eBitmapType_SingleDetail,
	eBitmapTypePaletteDetailMain,
	eBitmapTypePaletteDetailPalette,
	eBitmapTypePaletteDetailDetail
};

// have to fake these i dont wanna map them now... we dont need them anyway : public CThreadLoader, public TListNode<CEQGBitmap>
class [[offsetcomments]] CEQGBitmap
{
public:
/*0x00*/ void* vftable;
/*0x04*/ BYTE               Header[0x1c];
/*0x20*/ eBitmapType        eType;
/*0x24*/ int                eMemoryPoolManagerType;   // eMemoryPoolManagerType need to figure out this enum
/*0x28*/ char* FileName;
/*0x2c*/ UINT               SourceWidth;
/*0x30*/ UINT               SourceHeight;
/*0x34*/ float              DetailScale;
/*0x38*/ UINT               GrassDensity;
/*0x3c*/ UINT               Width;
/*0x40*/ UINT               Height;
/*0x44*/ bool               bHasTexture;
	union
	{
	/*0x48*/ void* pD3DTexture;              // IDirect3DBaseTexture9
	/*0x48*/ void* pRawBitmap;
	};
/*0x4c*/ UINT               ObjectIndex;
/*0x50*/ UINT               Size;
/*0x54*/ bool               bForceMipMap;
/*0x58*/ int                TrackingType;
/*0x5c*/ float              SQDistanceToCamera;
/*0x60*/ UINT               LastDistanceTime;
/*0x64*/ UINT               LastRenderTime;
/*0x68*/ UINT               LoadedTime;
/*0x6c*/
};

struct [[offsetcomments]] BMI
{
/*0x00*/ char*              Name;
/*0x04*/ unsigned int       Flags;
/*0x08*/ CEQGBitmap*        pBmp;
/*0x0c*/
};

struct [[offsetcomments]] _SuiteTexture
{
/*0x00*/ bool               bUsed;
/*0x04*/ CXStr              Name;
/*0x08*/ enDir              Directory;
/*0x0c*/ BMI*               pBMInfo;
/*0x10*/
};

struct SWadFile;

class [[offsetcomments]] CEQSuiteTextureLoader
{
public:
/*0x00*/ SWadFile*         pWadFile;
/*0x04*/ ArrayClass<_SuiteTexture> Textures;
/*0x14*/ CXStr              UIPath[cUIDirectoryCount];
/*0x24*/ CXStr              DefaultUIPath[cUIDirectoryCount];
/*0x34*/

	EQLIB_OBJECT CEQSuiteTextureLoader();
	EQLIB_OBJECT ~CEQSuiteTextureLoader();

	EQLIB_OBJECT BMI* GetTexture(const CUITextureInfo& ti);

	EQLIB_OBJECT unsigned int CreateTexture(const CUITextureInfo& ti);
	EQLIB_OBJECT void DestroyTexture(const CUITextureInfo& ti);
	EQLIB_OBJECT void UnloadAllTextures();

	EQLIB_OBJECT const CXStr& GetDefaultUIPath(int DirType) const;
};

//============================================================================
// CRadioGroup
//============================================================================

class [[offsetcomments]] CRadioGroup
{
public:
	EQLIB_OBJECT CRadioGroup(CXStr name = {});
	EQLIB_OBJECT virtual ~CRadioGroup();

/*0x04*/ CXStr                    Name;
/*0x08*/ ArrayClass<CButtonWnd*>  Buttons;
/*0x18*/ int                      CurSel = -1;
/*0x1c*/ bool                     bAllowMultiSelect = false;
/*0x20*/ int                      nSelectionLimit = -1;
/*0x24*/ bool                     bAllowNullable = false;
/*0x28*/
};

//============================================================================
// CButtonWnd
//============================================================================

// CButtonWnd__CButtonWnd_x
// size is 0x278 see 91829A in eqgame.exe dated 18 Sep 2018 Live
class [[offsetcomments]] CButtonWnd : public CXWnd
{
public:
	//----------------------------------------------------------------------------
	// constructor / destructor
	EQLIB_OBJECT CButtonWnd(CXWnd* parent, uint32_t id, const CXRect& rect,
		const CXPoint& decalOffset, const CXSize& decalSize,
		CTextureAnimation* normal, CTextureAnimation* pressed,
		CTextureAnimation* hover, CTextureAnimation* disabled,
		CTextureAnimation* pressedHover, CTextureAnimation* pressedDisabled,
		CTextureAnimation* normalDecal, CTextureAnimation* pressedDecal,
		CTextureAnimation* hoverDecal, CTextureAnimation* pressedDisabledDecal);
	//EQLIB_OBJECT CButtonWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	//EQLIB_OBJECT CBUttonWnd(CXWnd* parent, uint32_t id, const CXRect& rect, const CXStr& label);
	EQLIB_OBJECT virtual ~CButtonWnd();

	//----------------------------------------------------------------------------
	// virtual functions
	EQLIB_OBJECT virtual void SetRadioGroup(CRadioGroup* group);
	EQLIB_OBJECT virtual int DrawWndText(const CXRect& rect, const CXRect& clip);
	EQLIB_OBJECT virtual int DrawCooldown();
	EQLIB_OBJECT virtual void SetCheck(bool check, bool bNoSound = true);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTimeDelta(uint32_t delta, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownCompletionTime(__time32_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownBeginTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual void SetCoolDownUpdatedBeginTime(uint32_t time, uint32_t total);
	EQLIB_OBJECT virtual uint32_t GetCoolDownBeginTime() const;
	EQLIB_OBJECT virtual uint32_t GetCoolDownTotalDuration() const;
	EQLIB_OBJECT virtual uint32_t GetCoolDownTimeRemaining() const;
	EQLIB_OBJECT virtual void ClearCoolDownCompletionTime();

	//----------------------------------------------------------------------------
	// inherited virtuals
	EQLIB_OBJECT virtual int Draw() override;
	EQLIB_OBJECT virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip) const override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	EQLIB_OBJECT virtual int OnProcessFrame() override;
	EQLIB_OBJECT virtual bool IsPointTransparent(const CXPoint& point) const override;
	EQLIB_OBJECT virtual void SetAttributesFromSidl(CParamScreenPiece*) override;

	//----------------------------------------------------------------------------
	// data members
/*0x200*/ int          MouseButtonState;
/*0x204*/ bool         bPicture;
/*0x208*/ CRadioGroup* pGroup;
/*0x20c*/ bool         bChecked;                 // Checked
/*0x20d*/ bool         bMouseOverLastFrame;
/*0x210*/ CXPoint      DecalOffset;
/*0x218*/ CXSize       DecalSize;
/*0x220*/ COLORREF     DecalTint;                // Color
/*0x224*/ CXRect       TextOffsets;
/*0x234*/ int          TextModeBits;
/*0x238*/ COLORREF     Mouseover;
/*0x23c*/ COLORREF     Pressed;
/*0x240*/ COLORREF     Disabled;
/*0x244*/ unsigned int CoolDownBeginTime;
/*0x248*/ unsigned int CoolDownDuration;
/*0x24c*/ CXStr        Indicator;
/*0x250*/ unsigned int IndicatorVal;
/*0x254*/ CTextObjectInterface* pIndicatorTextObject;
/*0x258*/ unsigned int Unknown0x248;
/*0x25c*/ CButtonDrawTemplate DrawTemplate;
/*0x290*/ bool         bAllowButtonClickThrough;
/*0x291*/ bool         bCoolDownDoDelayedStart;
/*0x292*/ bool         bIsCheckbox;
/*0x293*/ bool         bIsDrawLasso;
/*0x294*/ uint32_t     ButtonStyle;              // tbd
/*0x298*/

	struct VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x168*/ void* SetRadioGroup;
	/*0x16c*/ void* DrawWndText;
	/*0x170*/ void* DrawCooldown;
	/*0x174*/ void* SetCheck;
	/*0x178*/ void* SetCoolDownCompletionTimeDelta;
	/*0x17c*/ void* SetCoolDownCompletionTime;
	/*0x180*/ void* SetCoolDownCompletionTime2;
	/*0x184*/ void* SetCoolDownBeginTime;
	/*0x188*/ void* SetCoolDownUpdatedBeginTime;
	/*0x18c*/ void* GetCoolDownBeginTime;
	/*0x190*/ void* GetCoolDownTotalDuration;
	/*0x194*/ void* GetCoolDownTimeRemaining;
	/*0x198*/ void* ClearCoolDownCompletionTime;
	};

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

using CBUTTONWND [[deprecated]] = CButtonWnd;
using PCBUTTONWND [[deprecated]] = CButtonWnd*;

//============================================================================
// CCheckBoxWnd
//============================================================================

class [[offsetcomments]] CCheckBoxWnd : public CButtonWnd
{
public:
	CCheckBoxWnd(CXWnd*, uint32_t, const CXRect&, const CXPoint&, const CXSize&,
		CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*,
		CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*,
		CTextureAnimation*, CTextureAnimation*);
	virtual ~CCheckBoxWnd();

	// virtual
	int HandleLButtonDown(const CXPoint&, uint32_t) override;
	int HandleLButtonUp(const CXPoint&, uint32_t) override;
	int HandleMouseMove(const CXPoint&, uint32_t) override;
	void SetRadioGroup(CRadioGroup*) override;

	EQLIB_OBJECT void SetRadioLook();

	// protected
/*0x298*/ bool bOrgState;
/*0x29c*/
};

//============================================================================
// CComboWnd
//============================================================================

class [[offsetcomments]] CComboWnd : public CXWnd
{
public:
	CComboWnd(CXWnd*, uint32_t, const CXRect&, int height, const CButtonDrawTemplate&);
	virtual ~CComboWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual CXSize GetMinSize() const;

	// overrides

	virtual int Draw() override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnResize(int, int) override;
	virtual int HitTest(const CXPoint&, int*) const override;
	virtual void SetDrawTemplate(CXWndDrawTemplate*) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXRect GetListRect(bool) const;
	EQLIB_OBJECT void SetColors(COLORREF norm, COLORREF highlight, COLORREF selected);
	EQLIB_OBJECT void InsertChoice(const CXStr& text, uint32_t data = 0);
	EQLIB_OBJECT void SetChoice(int index);
	EQLIB_OBJECT int GetItemCount();
	EQLIB_OBJECT int GetCurChoice() const;
	EQLIB_OBJECT CXStr GetCurChoiceText() const;
	EQLIB_OBJECT void DeleteAll();
	EQLIB_OBJECT CXRect GetTextRect() const;

	//EQLIB_OBJECT CXRect GetButtonRect() const;

	//----------------------------------------------------------------------------
	// data members
/*0x200*/ CListWnd*                    pListWnd;
/*0x204*/ int                          ListHeightMax;
/*0x208*/ int                          ListHeight;
/*0x20c*/ CButtonDrawTemplate          ButtonDrawTemplate;
/*0x240*/
};

//============================================================================
// CEditWnd
//============================================================================

enum eTextAlign
{
	eta_Left,
	eta_Center,
	eta_Right,
};

#define EDITWND_MAX_TAGS 10

enum EditWndStyle
{
	ewsMultiline    = 0x00010000,
	ewsPassword     = 0x00020000,
	ewsWantReturn   = 0x00040000,
	ewsWantArrows   = 0x00080000,
	ewsWantTabs     = 0x00100000,
	ewsReadOnly     = 0x00200000,
};

class [[offsetcomments]] CEditBaseWnd : public CXWnd
{
public:
	CEditBaseWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	virtual ~CEditBaseWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int GetHorzOffset() = 0;
	virtual CXStr GetDisplayString() const = 0;
	virtual CXPoint GetCaretPt() const = 0;
	virtual CXPoint PointFromPrintableChar(int charIndex) const = 0;
	virtual int ResetWnd() = 0;

	// overrides
	virtual int Draw() override = 0;
	virtual int DrawCaret() const override = 0;
	virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) override = 0;
	virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override = 0;
	virtual int OnKillFocus(CXWnd*) override;

	EQLIB_OBJECT void SetMaxChars(int);
	EQLIB_OBJECT void SetSel(int, int);

	//----------------------------------------------------------------------------
	// data members
/*0x200*/ eTextAlign   eAlign = eta_Left;
/*0x204*/ int          StartPos = 0;
/*0x208*/ int          EndPos = 0;
/*0x20c*/ int          MaxChars = -1;
/*0x210*/ int          MaxBytesUTF8 = -1;
/*0x214*/ CXStr        InputText;
/*0x218*/ int          TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x240*/ int          TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x268*/ int          TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x290*/ int          TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x2b8*/ int          TagDynamicSize[EDITWND_MAX_TAGS];
/*0x2e0*/ int          TagCodes[EDITWND_MAX_TAGS];
/*0x308*/ CXStr        TagStrings[EDITWND_MAX_TAGS];
/*0x330*/ int          TagCount;
/*0x334*/ uint32_t     EditStyle;
/*0x338*/
};

enum EditWndMode
{
	ewmNormal,
	ewmName,
	ewmAlphaOnly,
	ewmNumericOnly,
	ewmAlphaNumOnly,
	ewmCount
};

class [[offsetcomments]] CEditWnd : public CEditBaseWnd
{
public:
	CEditWnd(CXWnd* parent, uint32_t id, const CXRect& rect, uint32_t style = 0);
	virtual ~CEditWnd();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int DrawMultiline();
	virtual CXStr GetWindowText() const;
	virtual CXStr GetWindowPrefixText();
	virtual CXStr GetWindowSuffixText();

	// CEditBaseWnd
	virtual int GetHorzOffset() override;
	virtual CXStr GetDisplayString() const override;
	virtual CXPoint GetCaretPt() const override;
	virtual CXPoint PointFromPrintableChar(int charIndex) const override;
	virtual int ResetWnd() override;

	// CXWnd
	virtual int Draw() override;
	virtual int DrawCaret() const override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual void SetWindowText(const CXStr& text) override;
	virtual int OnMove(const CXRect& rect) override;
	virtual int OnResize(int, int) override;
	virtual int OnSetFocus(CXWnd*) override;
	virtual int OnKillFocus(CXWnd*) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXPoint GetCharIndexPt(int) const;
	EQLIB_OBJECT CXPoint GetSelEndPt() const;
	EQLIB_OBJECT CXPoint GetSelStartPt() const;
	EQLIB_OBJECT CXStr GetSTMLSafeText();
	EQLIB_OBJECT int ConvertIndexPrintableToTagged(int);
	EQLIB_OBJECT int ConvertIndexTaggedToPrintable(int);
	EQLIB_OBJECT int GetLineForPrintableChar(int) const;
	EQLIB_OBJECT int GetLineLength(int) const;
	EQLIB_OBJECT int SelectableCharFromPoint(CXPoint) const;
	EQLIB_OBJECT void AddItemTag(int, char*, int);
	EQLIB_OBJECT void CalculateScrollRange();
	EQLIB_OBJECT void EnsureCaretVisible();
	EQLIB_OBJECT void SetEditable(bool);

	EQLIB_OBJECT void FillIndexArray(CXStr) const;
	EQLIB_OBJECT void FilterInputStr(CXStr&);
	EQLIB_OBJECT void ProcessText();

	EQLIB_OBJECT bool ReplaceSelection(CXStr, bool bFilter = true);
	inline bool ReplaceSelection(char ch, bool bFilter = true)
	{
		CXStr str(1, ch);
		return ReplaceSelection(str, bFilter);
	}

	//----------------------------------------------------------------------------
	// data members

/*0x338*/ bool         bAnchorAtStart;
/*0x339*/ bool         bCaretAtEnd;
/*0x33a*/ bool         bAutoVScrollCalc;
/*0x33b*/ bool         bEditable;
/*0x33c*/ CXStr        FilterChars;
/*0x340*/ int          EditMode;
/*0x344*/ wchar_t      PasswordChar;
/*0x348*/ ArrayClass2<uint32_t> LineIndices;
/*0x360*/
};

//============================================================================
// CEditLabelWnd
//============================================================================

class CEditLabelWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CEditLabelWnd(CXWnd*);
	virtual ~CEditLabelWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT CXStr GetLabelText();
};

//============================================================================
// CGaugeWnd
//============================================================================

// size 0x248 see 7E24DB in Sep 21 2018
class [[offsetcomments]] CGaugeWnd : public CXWnd
{
public:
	EQLIB_OBJECT CGaugeWnd(CXWnd*, uint32_t, const CXRect&, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, unsigned long, unsigned long, bool, int, int, int, int);
	EQLIB_OBJECT CXRect CalcFillRect(CXRect*, int) const;
	EQLIB_OBJECT CXRect CalcLinesFillRect(CXRect*, int) const;
	EQLIB_OBJECT void SpecialToolTip();

	// virtual
	EQLIB_OBJECT ~CGaugeWnd();
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int HandleLButtonUp(const CXPoint&, uint32_t);
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT void SetAttributesFromSidl(CParamScreenPiece*);

	//----------------------------------------------------------------------------
	// data members

/*0x200*/ int          EQType;
/*0x204*/ D3DCOLOR     FillTint;
/*0x208*/ D3DCOLOR     LinesFillTint;
/*0x20c*/ bool         bDrawLinesFill;
/*0x210*/ int          TextOffsetX;
/*0x214*/ int          TextOffsetY;
/*0x218*/ int          GaugeOffsetX;
/*0x21c*/ int          GaugeOffsetY;
/*0x220*/ float        LastFrameVal;
/*0x224*/ CXStr        LastFrameName;
/*0x228*/ int          LastFrameTime;
/*0x22c*/ int          LastFrameTarget;
/*0x230*/ CXStr        GaugeTooltip;
/*0x234*/ int          TooltipVal;
/*0x238*/ int          Unknown0x228;
/*0x23c*/ CGaugeDrawTemplate DrawTemplate;
/*0x258*/ CTextObjectInterface* pTextObject;
/*0x25c*/ CXStr        NextDrawStr;
/*0x260*/ bool         bSmooth;
/*0x264*/ int          TargetVal;
/*0x268*/ bool         bUseTargetVal;
/*0x26c*/
};

//============================================================================
// CHotButton
//============================================================================

class [[offsetcomments]] CHotButton : public CXWnd
{
public:
	CHotButton(CXWnd* parent, uint32_t id, const CXRect& rect, CButtonWnd* button,
		CInvSlotWnd* invSlot, CSpellGemWnd* gemSlot);
	virtual ~CHotButton();

	EQLIB_OBJECT void SetButtonSize(int percent, bool bUpdateParent = true);

	//----------------------------------------------------------------------------
	// data members

/*0x1d8*/ int          BarIndex;
/*0x1dc*/ int          ButtonIndex;
/*0x1e0*/ unsigned int Timer;
/*0x1e4*/ CTextureAnimation* DecalIcon;
/*0x1e8*/ int          LastButtonType;
/*0x1ec*/ int          LastButtonSlot;
/*0x1f0*/ char         LastButtonPage;
/*0x1f1*/ EqItemGuid   LastItemGuid;
/*0x204*/ int          LastItemId;
/*0x208*/ int          LastIconType;
/*0x20c*/ int          LastIconSlot;
/*0x210*/ CXStr        LastLabel;
/*0x214*/ CXStr        DefaultLabel;
/*0x218*/ bool         bForceUpdate;
/*0x21c*/ CTextObjectInterface* pKeyMapText;
/*0x220*/ int          Unknown0x228;
/*0x224*/ CButtonWnd*  pButtonWnd;
/*0x228*/ CInvSlotWnd* pInvSlotWnd;
/*0x22c*/ CSpellGemWnd* pSpellGemWnd;
/*0x230*/ CXSize       BaseSize;
/*0x238*/ int          ButtonPercentSize;
/*0x23c*/ CXSize       BaseButtonSize;
/*0x244*/ CXSize       BaseDecalSize;
/*0x24c*/ CXSize       BaseInvButtonSize;
/*0x254*/ CXSize       BaseSpellButtonSize;
/*0x25c*/ int          Unknown0x264;
/*0x260*/
};
//============================================================================
// CLabelWnd
//============================================================================

// CLabelWnd__CLabelWnd_x
// size 0x200 see 8D5699 in Aug 10 2017 Live
// size 0x210 see 8DCE59 in Sep 11 2017 Test
// size 0x200 see 668D5B in Oct 17 2017 Live
// size 0x1e4 see 86BFC9 in rof2
class [[offsetcomments]] CLabelWnd : public CXWnd
{
public:
	// constructor / destructor
	CLabelWnd(CXWnd* parent, uint32_t id, const CXRect& rect);
	virtual ~CLabelWnd();

	// virtual functions
	virtual int Draw() override;
	virtual void SetWindowText(const CXStr& Text) override;

	virtual void UpdateText();
	virtual void ResizeHeightToText();

	// data members
/*0x200*/ bool         bNoWrap;
/*0x201*/ bool         bAlignRight;
/*0x202*/ bool         bAlignCenter;
/*0x204*/ int          xOffset;
/*0x208*/ bool         bResizeHeightToText;
/*0x20c*/ int          Unknown0x204;
/*0x210*/ CXStr        Text;
/*0x214*/ int          Unknown0x20c;
/*0x218*/ bool         Unknown0x210;
/*0x21c*/ int          Unknown0x214;
/*0x220*/
};

//============================================================================
// CLabel
//============================================================================

// CLabel__CLabel_x
// CSidlManager__CreateLabel_x has this
// size 0x208 see 7A5739 in Oct 17 2017 Live
class [[offsetcomments]] CLabel : public CLabelWnd
{
public:
	// constructor / destructor
	CLabel(CXWnd* parent, uint32_t id, CXRect rect, int EQType);
	virtual ~CLabel();

	// virtual functions
	virtual void UpdateText() override;

	// data members
/*0x220*/ int          EQType;
/*0x224*/
};
using CLABEL [[deprecated]] = CLabel;
using PCLABEL [[deprecated]] = CLabel*;

//============================================================================
// CListWnd
//============================================================================

struct [[offsetcomments]] STreeData
{
/*0x00*/ int                      Depth = 0;
/*0x04*/ bool                     bIsExpandable = false;
/*0x08*/
};

struct [[offsetcomments]] SListWndCell
{
/*0x00*/ const CTextureAnimation* pTA = nullptr;
/*0x04*/ CXStr                    Text;
/*0x08*/ COLORREF                 Color = RGB(255, 255, 255);
/*0x0c*/ bool                     bOnlyDrawTexture = false;
/*0x10*/ CXWnd*                   pWnd = nullptr;
/*0x14*/ int                      Unknown0x14 = 0;
/*0x18*/
};

struct [[offsetcomments]] SListWndLine
{
/*0x000*/ ArrayClass<SListWndCell> Cells;
/*0x010*/ uint64_t                Data = 0;
/*0x018*/ int                     Height = -1;
/*0x01c*/ bool                    bSelected = false;
/*0x01d*/ bool                    bEnabled = true;
/*0x020*/ STreeData               Treedata;
/*0x028*/ char                    TooltipText[256];
/*0x128*/ bool                    bVisible = true;
/*0x12c*/ uint32_t                Unknown0x12c;
/*0x130*/
};

class [[offsetcomments]] SListWndSortInfo
{
public:
/*0x00*/ int           SortCol;
/*0x04*/ const SListWndLine& ListWndLine1;
/*0x08*/ CXStr         StrLabel1;
/*0x10*/ uint64_t      Data1;
/*0x18*/ const SListWndLine& ListWndLine2;
/*0x1c*/ CXStr         StrLabel2;
/*0x20*/ uint64_t      Data2;
/*0x28*/ int           SortResult;
/*0x2c*/
};

enum ECellType
{
	CellTypeBasicText            = 1,
	CellTypeBasicIcon            = 2,
	CellTypeTextIcon             = 3
};

struct [[offsetcomments]] SListWndColumn
{
/*0x00*/ int                      Width = 0;
/*0x04*/ int                      MinWidth = 10;
/*0x08*/ CXSize                   TextureSize;
/*0x10*/ CXPoint                  TextureOffset;
/*0x18*/ CXStr                    StrLabel;
/*0x20*/ uint64_t                 Data = 0;
/*0x28*/ uint32_t                 Flags = 0;
/*0x2c*/ uint32_t                 Type = CellTypeTextIcon; // ECellType
/*0x30*/ CTextureAnimation*       pTextureAnim = nullptr;
/*0x34*/ CTextureAnimation*       pSelected = nullptr;
/*0x38*/ CTextureAnimation*       pMouseOver = nullptr;
/*0x3c*/ CXStr                    Tooltip;
/*0x40*/ bool                     bResizable = false;
/*0x44*/ ///*0x44*/ int           Filler0x44;
/*0x48*/

	SListWndColumn(CXStr strLabel = "",
		int width = 0,
		CTextureAnimation* pta = nullptr,
		uint32_t flags = 0,
		uint32_t type = CellTypeTextIcon,
		CTextureAnimation* pSelected = nullptr,
		CTextureAnimation* pMouseOver = nullptr,
		CXStr tooltip = "",
		bool bResizable = false,
		CXSize textureSize = {},
		CXPoint textureOffset = {})
		: StrLabel(strLabel)
		, Width(width)
		, pTextureAnim(pta)
		, Flags(flags)
		, Type(type)
		, pSelected(pSelected)
		, pMouseOver(pMouseOver)
		, Tooltip(tooltip)
		, bResizable(bResizable)
		, TextureSize(textureSize)
		, TextureOffset(textureOffset)
	{}
};

class IListItemDataHandler
{
public:
	virtual bool GetText(int index, int subItem, CXStr& text) const = 0;
};

// Size is 0x298 in eqgame Sep 11 2017 Test (see 8D1D4C)
class [[offsetcomments]] CListWnd : public CXWnd
{
public:
	EQLIB_OBJECT CListWnd(CXWnd*, uint32_t, const CXRect&);
	virtual ~CListWnd();

	//----------------------------------------------------------------------------
	// virtuals

	EQLIB_OBJECT virtual int OnHeaderClick(CXPoint);
	EQLIB_OBJECT virtual int DrawColumnSeparators() const;
	EQLIB_OBJECT virtual int DrawSeparator(int index) const;
	EQLIB_OBJECT virtual int DrawLine(int index) const;
	EQLIB_OBJECT virtual int DrawHeader() const;
	EQLIB_OBJECT virtual int DrawItem(int index, int, int) const;
	EQLIB_OBJECT virtual void DeleteAll();
	EQLIB_OBJECT virtual int Compare(const SListWndLine&, const SListWndLine&) const;
	EQLIB_OBJECT virtual void Sort();

	// overrides
	EQLIB_OBJECT virtual int Draw() override;
	EQLIB_OBJECT virtual int DrawBackground() const override;
	EQLIB_OBJECT virtual int DrawTooltip(const CXWnd* wnd) const override;
	EQLIB_OBJECT virtual HCURSOR GetCursorToDisplay() const override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* sender, uint32_t message, void* data) override;
	EQLIB_OBJECT virtual void OnWndNotification() override;
	EQLIB_OBJECT virtual int OnMove(const CXRect& rect) override;
	EQLIB_OBJECT virtual int OnResize(int w, int h) override;
	EQLIB_OBJECT virtual int OnVScroll(EScrollCode code, int pos) override;
	EQLIB_OBJECT virtual int OnHScroll(EScrollCode code, int pos) override;
	EQLIB_OBJECT virtual CXRect GetHitTestRect(int code) const override;
	EQLIB_OBJECT virtual CXRect GetClientClipRect() const override;
	EQLIB_OBJECT virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const override;
	EQLIB_OBJECT virtual int SetVScrollPos(int pos) override;

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT bool IsLineEnabled(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimation(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimationMouseOver(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetColumnAnimationSelected(int) const;
	EQLIB_OBJECT const CTextureAnimation* GetItemIcon(int, int) const;
	EQLIB_OBJECT CXRect GetHeaderRect(int) const;
	EQLIB_OBJECT CXRect GetItemRect(int, int) const;
	EQLIB_OBJECT CXRect GetSeparatorRect(int) const;
	EQLIB_OBJECT CXStr GetColumnLabel(int) const;
	EQLIB_OBJECT CXStr GetItemText(int index, int subIndex = 0) const;
	EQLIB_OBJECT int AddColumn(const CXStr& Label, CTextureAnimation* pTA, int Width, uint32_t Flags, CXStr Tooltip = "",
		uint32_t Type = CellTypeTextIcon, CTextureAnimation* pTASelected = nullptr, CTextureAnimation* pTAMouseOver = nullptr,
		bool bResizeable = false, CXSize TextureSize = {}, CXPoint TextureOffset = {});
	EQLIB_OBJECT int AddColumn(const CXStr& Label, int Width, uint32_t Flags, uint32_t Type = CellTypeTextIcon);
	EQLIB_OBJECT int AddLine(SListWndLine*);
	EQLIB_OBJECT int AddString(const CXStr& Str, COLORREF Color, uint64_t Data = 0, const CTextureAnimation* pTa = nullptr, const char* TooltipStr = nullptr);
	EQLIB_OBJECT int AddString(const char* Str, COLORREF Color, uint64_t Data, const CTextureAnimation* pTa, const char* TooltipStr = nullptr);
	EQLIB_OBJECT int GetColumnJustification(int) const;
	EQLIB_OBJECT int GetColumnMinWidth(int) const;
	EQLIB_OBJECT CXStr GetColumnTooltip(int) const;
	EQLIB_OBJECT int GetColumnWidth(int) const;
	EQLIB_OBJECT int GetCurCol() const;
	EQLIB_OBJECT int GetCurSel() const;
	EQLIB_OBJECT int GetItemAtPoint(const CXPoint& pt) const;
	EQLIB_OBJECT int GetItemHeight(int) const;
	EQLIB_OBJECT uint32_t GetColumnFlags(int) const;
	EQLIB_OBJECT uint64_t GetItemData(int) const;
	EQLIB_OBJECT COLORREF GetItemColor(int, int) const;
	EQLIB_OBJECT void CalculateFirstVisibleLine();
	EQLIB_OBJECT void CalculateLineHeights();
	EQLIB_OBJECT void CalculateVSBRange();
	EQLIB_OBJECT void ClearAllSel();
	EQLIB_OBJECT void ClearSel(int);
	EQLIB_OBJECT void CloseAndUpdateEditWindow();
	EQLIB_OBJECT void EnableLine(int Index, bool bVal);
	EQLIB_OBJECT void EnsureVisible(int);
	EQLIB_OBJECT void ExtendSel(int);
	EQLIB_OBJECT void GetItemAtPoint(const CXPoint& pt, int* ID, int* SubItem) const;
	EQLIB_OBJECT void InsertLine(int ID, SListWndLine* rEntry);
	EQLIB_OBJECT void RemoveLine(int);
	EQLIB_OBJECT void RemoveString(int);
	EQLIB_OBJECT void SetColors(unsigned long, unsigned long, unsigned long);
	EQLIB_OBJECT void SetColumnJustification(int, int);
	EQLIB_OBJECT void SetColumnLabel(int, const CXStr&);
	EQLIB_OBJECT void SetColumnWidth(int, int);
	EQLIB_OBJECT void SetCurSel(int);
	EQLIB_OBJECT void SetItemColor(int, int, unsigned long);
	EQLIB_OBJECT void SetItemData(int ID, uint64_t Data);
	EQLIB_OBJECT void SetItemText(int ID, int SubID, const CXStr& Text);
	EQLIB_OBJECT void ShiftColumnSeparator(int, int);
	EQLIB_OBJECT void ToggleSel(int);
	EQLIB_OBJECT void SetColumnsSizable(bool bColumnsSizable);
	EQLIB_OBJECT void GetWndPosition(CXWnd* pWnd, int& ItemID, int& SubItemID) const;
	EQLIB_OBJECT void SetItemWnd(int Index, int SubItem, CXWnd* pWnd);
	EQLIB_OBJECT CXWnd* GetItemWnd(int Index, int SubItem = 0) const;
	EQLIB_OBJECT void SetItemIcon(int Index, int SubItem, const CTextureAnimation* pTA);
	EQLIB_OBJECT void CalculateCustomWindowPositions();

	// Index of the first row in the list where the text in column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(int column, const std::function<bool(const CXStr)>& predicate);

	// Index of the first row in the list where the text in the first column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row where the text in columns matches predicate
	EQLIB_OBJECT bool Contains(int column, const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row the text in the first column matches predicate
	EQLIB_OBJECT bool Contains(const std::function<bool(const CXStr)>& predicate);

	//----------------------------------------------------------------------------
	// data members

/*0x200*/ int                 Unknown0x1f0;
/*0x204*/ ArrayClass<SListWndLine> ItemsArray;       // see CListWnd__GetItemData_x 0x8BD768                 add     ecx, 1F4h
/*0x214*/ ArrayClass<SListWndColumn> Columns;
/*0x224*/ int                 CurSel;
/*0x228*/ int                 CurCol;
/*0x22c*/ int                 DownItem;
/*0x230*/ int                 ScrollOffsetY;
/*0x234*/ int                 HeaderHeight;
/*0x238*/ int                 FirstVisibleLine;
/*0x23c*/ int                 SortCol;
/*0x240*/ bool                bSortAsc;
/*0x241*/ bool                bFixedHeight;
/*0x242*/ bool                bOwnerDraw;
/*0x243*/ bool                bCalcHeights;
/*0x244*/ bool                bColumnSizable;
/*0x248*/ int                 LineHeight;
/*0x24c*/ int                 ColumnSepDragged;
/*0x250*/ int                 ColumnSepMouseOver;
/*0x254*/ COLORREF            HeaderText;
/*0x258*/ COLORREF            Highlight;
/*0x25c*/ COLORREF            Selected;
/*0x260*/ CUITextureInfo      BGHeader;
/*0x278*/ COLORREF            BGHeaderTint;
/*0x27c*/ CTextureAnimation*  pRowSep;
/*0x280*/ CTextureAnimation*  pColumnSep;
/*0x284*/ CEditBaseWnd*       pEditCell;
/*0x288*/ IListItemDataHandler* pItemDataHandler;
/*0x28c*/ bool                bHasItemTooltips;
/*0x290*/ CXRect              PrevInsideRect;
/*0x2a0*/ uint32_t            ListWndStyle;
/*0x2a4*/ __time32_t          LastVisibleTime;
/*0x2a8*/

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x168*/ void* OnHeaderClick;
	/*0x16c*/ void* DrawColumnSeparators;
	/*0x170*/ void* DrawSeparator;
	/*0x174*/ void* DrawLine;
	/*0x178*/ void* DrawHeader;
	/*0x17c*/ void* DrawItem;
	/*0x180*/ void* DeleteAll;
	/*0x184*/ void* Compare;
	/*0x188*/ void* Sort;
	/*0x18c*/
	};

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

//============================================================================
// CPageWnd
//============================================================================

class [[offsetcomments]] CPageWnd : public CSidlScreenWnd
{
public:
	CPageWnd(CXWnd*, uint32_t, const CXRect&, const CXStr&, CPageTemplate*);
	virtual ~CPageWnd();

	EQLIB_OBJECT CXStr GetTabText(bool bSomething = false) const;
	EQLIB_OBJECT void SetTabText(CXStr&) const;
	EQLIB_OBJECT void FlashTab(bool flash, int msTime) const;

/*0x248*/ CXStr              TabText;
/*0x24c*/ CXStr              OrigTabText;
/*0x250*/ COLORREF           CRTabText;
/*0x254*/ COLORREF           CRTabTextActive;
/*0x258*/ CTextureAnimation* pTATabIcon;
/*0x25c*/ CTextureAnimation* pTATabIconActive;
/*0x260*/ int64_t            LastFlashTime;
/*0x268*/ COLORREF           CRHighlightFlashColor;
/*0x26c*/ bool               bHighlightOnNewMessages;
/*0x26d*/ bool               bFlashing;
/*0x270*/
};

//============================================================================
// CSliderWnd
//============================================================================

// size: 0x258 6/10/2019 (test)
class [[offsetcomments]] CSliderWnd : public CXWnd
{
public:
	CSliderWnd(CXWnd*, uint32_t, const CXRect&, CSliderTemplate*);
	virtual ~CSliderWnd();

	virtual int Draw() override;
	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;

	EQLIB_OBJECT CXRect GetEndCapLeftRect() const;
	EQLIB_OBJECT CXRect GetEndCapRightRect() const;
	EQLIB_OBJECT CXRect GetMiddleRangeRect() const;
	EQLIB_OBJECT CXRect GetThumbRect() const;
	EQLIB_OBJECT int GetValue() const;
	EQLIB_OBJECT void SetNumTicks(int);
	EQLIB_OBJECT void SetValue(int);

	EQLIB_OBJECT int DrawEndCapLeft() const;
	EQLIB_OBJECT int DrawEndCapRight() const;
	EQLIB_OBJECT int DrawMiddleRange() const;
	EQLIB_OBJECT int DrawThumb() const;
	EQLIB_OBJECT void SetThumbToOffset(int);
	EQLIB_OBJECT void UpdateMiddleRange();
	EQLIB_OBJECT void UpdateThumb();

	//----------------------------------------------------------------------------
	// data members

/*0x200*/ CButtonDrawTemplate      bdtThumb;
/*0x234*/ CTextureAnimation*       ptaBackground;
/*0x238*/ CTextureAnimation*       ptaEndCapLeft;
/*0x23c*/ CTextureAnimation*       ptaEndCapRight;
/*0x240*/
	// more ...
};

//============================================================================
// CStmlWnd
//============================================================================

enum ELinkType
{
	STML_LINK_FILE,
	STML_LINK_UNIT,
	STML_LINK_BUILDING,
	STML_LINK_MESSAGE,
	STML_LINK_CAMERA,
	STML_LINK_REPORT,
	STML_LINK_WNDNOTIFY,
	STML_LINK_EMPTY,
	STML_LINK_URL,
	STML_LINK_PLAYER,
	STML_LINK_SPAM,
	STML_LINK_ACHIEVEMENT,
	STML_LINK_HELP,
	STML_LINK_DIALOG_RESPONSE,
	STML_LINK_COMMAND,
	STML_NUM_LINK_TYPES,
};

enum EStmlTargetValue
{
	STML_TARGET_SELF,
	STML_TARGET_BLANK,
};

struct [[offsetcomments]] SFontTag
{
/*0x00*/ CTextureFont*      face;
/*0x04*/ COLORREF           color;
/*0x08*/
};

using SStyleTag = uint32_t;

const uint32_t STML_TAG_BOLD = 0;
const uint32_t STML_TAG_UNDERLINE = 2;

struct [[offsetcomments]] SFormattedText
{
/*0x00*/ SFontTag           Font;
/*0x08*/ SStyleTag          Style;
/*0x0c*/ int                Left;
/*0x10*/ int                Right;
/*0x14*/ CXStr              Text;
/*0x18*/ int32_t            LinkID;
/*0x1c*/ CTextureAnimation* Texture;
/*0x20*/ int32_t            TableID;
/*0x24*/ int32_t            IndexStart;
/*0x28*/
};

struct [[offsetcomments]] STextLine
{
/*0x00*/ ArrayClass<SFormattedText> TextPieces;
/*0x10*/ int                yBottom;
/*0x14*/ int                yTop;
/*0x18*/ int32_t            IndexStart;
/*0x1c*/
};

struct [[offsetcomments]] SLinkInfo
{
/*0x00*/ ELinkType          Type = STML_LINK_EMPTY;
/*0x04*/ uint32_t           MsgID = -1;
/*0x08*/ CXStr              Name;
/*0x0c*/ EStmlTargetValue   TargetType = STML_TARGET_SELF;
/*0x10*/
};

struct SParseVariables
{
	// todo ...
};

struct [[offsetcomments]] SHistoryElement
{
/*0x00*/ SLinkInfo          sLink;
/*0x10*/ CXStr              STMLText;
/*0x14*/
};

enum ESTMLParseState
{
	STML_PARSE_STATE_BODY,
	STML_PARSE_STATE_HEAD,
};


// size is 0x2b8 in sep 11 2017 test see 8DCF69
class [[offsetcomments]] CStmlWnd : public CXWnd
{
public:
	CStmlWnd(CXWnd*, uint32_t, const CXRect&);
	virtual ~CStmlWnd();

	virtual bool IsPointTransparent(const CXPoint&) const override;
	virtual HCURSOR GetCursorToDisplay() const override;
	virtual int Draw() override;
	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleMouseMove(const CXPoint&, uint32_t) override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnProcessFrame() override;
	virtual int OnResize(int, int) override;
	virtual int OnHScroll(EScrollCode, int) override;
	virtual int OnVScroll(EScrollCode, int) override;
	virtual void SetWindowText(const CXStr&) override;

	EQLIB_OBJECT bool CanGoBackward();
	EQLIB_OBJECT CXSize AppendSTML(CXStr);
	EQLIB_OBJECT CXStr GetSTMLText() const;
	EQLIB_OBJECT CXStr GetVisibleText(CXStr, const CXRect&) const;
	EQLIB_OBJECT static CXStr MakeStmlColorTag(unsigned long);
	EQLIB_OBJECT static CXStr MakeWndNotificationTag(uint32_t, const CXStr&, const CXStr&);
	EQLIB_OBJECT void ActivateLink(SLinkInfo);
	EQLIB_OBJECT void ForceParseNow();
	EQLIB_OBJECT void GoToBackHistoryLink();
	// EQLIB_OBJECT void LoadPage(CXStr, enum ESTMLTargetValue, bool);
	EQLIB_OBJECT void SetSTMLText(CXStr, bool addToHistory = true, SLinkInfo* = nullptr);
	EQLIB_OBJECT void SetSTMLTextWithoutHistory(CXStr);

	// protected
	EQLIB_OBJECT bool IsLinkActive(SLinkInfo) const;
	EQLIB_OBJECT bool ParseAmpersand(CXStr, char*) const;
	EQLIB_OBJECT static bool CanBreakAtCharacter(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotASpaceAndNotNULL(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotEquals(unsigned short);
	EQLIB_OBJECT static bool IsCharacterNotQuotes(unsigned short);
	EQLIB_OBJECT unsigned short FastForwardPastQuotesAndGetNextTagPiece(const CXStr&, CXStr*, int*, bool);
	EQLIB_OBJECT unsigned short FastForwardPastSpaces(const CXStr&, int*);
	EQLIB_OBJECT unsigned short FastForwardPastSpacesAndQuotes(const CXStr&, int*);
	EQLIB_OBJECT unsigned short FastForwardToEndOfTag(const CXStr&, CXStr*, int*, char);
	EQLIB_OBJECT unsigned short GetNextChar(int*, const CXStr&);
	EQLIB_OBJECT unsigned short GetNextTagPiece(const CXStr&, CXStr*, int*, bool (*)(unsigned short), bool);
	EQLIB_OBJECT unsigned short GetThisChar(int, const CXStr&);
	EQLIB_OBJECT void ActivateLinkFile(SLinkInfo);
	EQLIB_OBJECT void ActivateLinkMessageId(SLinkInfo);
	EQLIB_OBJECT void ActivateLinkReport(SLinkInfo, bool);
	EQLIB_OBJECT void ActivateLinkWndNotify(SLinkInfo);
	EQLIB_OBJECT void AddLinkToHistory(SLinkInfo, const CXStr&);
	EQLIB_OBJECT void AddTextPieceToLine(SParseVariables*);
	EQLIB_OBJECT void CalculateHSBRange(int);
	EQLIB_OBJECT void CalculateVSBRange(int);
	EQLIB_OBJECT void CompleteParse();
	EQLIB_OBJECT void InitializeTempVariables(SParseVariables*, const CXRect&);
	EQLIB_OBJECT void InitializeTextLine(SParseVariables*, int);
	EQLIB_OBJECT void InitializeWindowVariables();
	// EQLIB_OBJECT void ParseLinkTarget(const CXStr&, enum ESTMLTargetValue*) const;
	EQLIB_OBJECT void ParseSTMLHead(const CXStr&);
	EQLIB_OBJECT void ParseSTMLTable(const CXStr&, int*, const CXStr&, SParseVariables*);
	EQLIB_OBJECT void ParseSTMLTableAttributes(const CXStr&, STable*);
	// EQLIB_OBJECT void ParseTagAlign(const CXStr&, enum ESTMLAlign*) const;
	EQLIB_OBJECT void ParseTagColor(const CXStr&, unsigned long*) const;
	EQLIB_OBJECT void ParseTagFace(const CXStr&, const CTextureFont**) const;
	EQLIB_OBJECT void ResetTempVariablesForNewLine(SParseVariables*);
	EQLIB_OBJECT void StripFirstSTMLLines(int);
	EQLIB_OBJECT void UpdateHistoryString(int32_t, const CXStr&);

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x200*/ CXStr                        STMLText;
/*0x204*/ CircularArrayClass2<STextLine> TextLines;
/*0x228*/ int32_t                      TextTotalHeight;
/*0x22c*/ int32_t                      TextTotalWidth;
/*0x230*/ int32_t                      Unknown0x224;
/*0x234*/ ArrayClass2<SLinkInfo>       Links;                        // size 0x1c at 0x228 for sure see 8F4487 in Sep 11 2017 test
/*0x24c*/ ArrayClass<STable>           Tables;
/*0x25c*/ bool                         bReparseNow;
/*0x25d*/ bool                         bResized;
/*0x25e*/ bool                         bAlignCenter;
/*0x260*/ int                          LineSpacingAdjust;
/*0x264*/ int32_t                      CapturedLinkID;
/*0x268*/ int32_t                      MousedOverLinkID;
/*0x26c*/ COLORREF                     BackGroundColor;
/*0x270*/ COLORREF                     TextColor;
/*0x274*/ COLORREF                     LinkColor;
/*0x278*/ COLORREF                     VLinkColor;
/*0x27c*/ COLORREF                     ALinkColor;
/*0x280*/ COLORREF                     MLinkColor;
/*0x284*/ ESTMLParseState              CurrentParseState;
/*0x288*/ ArrayClass2<SHistoryElement> HistoryArray;
/*0x2a0*/ int32_t                      HistoryIndex;
/*0x2a4*/ CStmlReport* pStmlReport;
/*0x2a8*/ int                          MaxLines;
/*0x2ac*/ int                          PlayerContextMenuIndex;
/*0x2b0*/ int                          Unknown0x2ac;
/*0x2b4*/ int                          Unknown0x2b0;
/*0x2b8*/ int                          Unknown0x2b4;
/*0x2bc*/
};

//============================================================================
// CTabWnd
//============================================================================

class [[offsetcomments]] CTabWnd : public CXWnd
{
public:
	CTabWnd(CXWnd* pParent, uint32_t uId, const CXRect& rect, CTabBoxTemplate* pTabContents);
	virtual ~CTabWnd();

	// functions we have offsets for
	EQLIB_OBJECT int DrawCurrentPage() const;
	EQLIB_OBJECT int DrawTab(int) const;
	EQLIB_OBJECT CPageWnd* GetCurrentPage() const;
	EQLIB_OBJECT int GetCurrentTabIndex() const;
	EQLIB_OBJECT CPageWnd* GetPageFromTabIndex(int) const;
	EQLIB_OBJECT CXRect GetPageInnerRect() const;
	EQLIB_OBJECT CXRect GetTabInnerRect(int) const;
	EQLIB_OBJECT CXRect GetTabRect(int) const;
	EQLIB_OBJECT void InsertPage(CPageWnd* pTabWnd, int position = -1); // defaults to the last tab
	EQLIB_OBJECT void RemovePage(CPageWnd* pTabWnd);
	EQLIB_OBJECT void SetPage(int index, bool bNotifyParent = true, bool bBringToTop = true, bool bSomething = true);
	EQLIB_OBJECT void SetPageRect(const CXRect&);
	EQLIB_OBJECT void UpdatePage();

	// functions we don't have offsets for.
	EQLIB_OBJECT CXRect GetPageClientRect() const;
	EQLIB_OBJECT int GetNumTabs() const;
	EQLIB_OBJECT bool SetPage(CPageWnd*, bool bNotifyParent = true, bool bBringToTop = true);
	EQLIB_OBJECT bool IndexInBounds(int) const;
	EQLIB_OBJECT CPageWnd* GetPageFromTabPoint(CXPoint) const;

	//----------------------------------------------------------------------------
	// data members

/*0x200*/ CTAFrameDraw*           pTabBorder;
/*0x204*/ CTAFrameDraw*           pPageBorder;
/*0x208*/ ArrayClass<CPageWnd*>   PageArray;
/*0x218*/ int                     CurTabIndex;
/*0x21c*/ int                     TabHeight;
/*0x220*/ CXRect                  PageRect;
/*0x230*/ bool                    bShowTabs;
/*0x234*/ int                     TabStyle;
/*0x238*/ int                     TabWidth;
/*0x23c*/
};

//============================================================================
// CTreeView
//============================================================================

class [[offsetcomments]] CTreeView : public CListWnd
{
public:
	CTreeView(CXWnd*, uint32_t, CXRect, int);
	virtual ~CTreeView();
};

//============================================================================
//============================================================================
//============================================================================
//============================================================================

//============================================================================
// CAAWnd
//============================================================================

class CAAWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CAAWnd(CXWnd*);
	virtual ~CAAWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void CancelAASpend();
	EQLIB_OBJECT void ConfirmAASpend();
	EQLIB_OBJECT void SendNewPercent();
	EQLIB_OBJECT bool ShowAbility(int);
	EQLIB_OBJECT void Update(bool);
	EQLIB_OBJECT void UpdateTimer();

	// private
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void UpdateSelected();
};

//============================================================================
// CAchievementsWnd
//============================================================================

class CAchievementsWnd : public CSidlScreenWnd
{
public:
	CAchievementsWnd(CXWnd*);
	virtual ~CAchievementsWnd();
};

//============================================================================
// CActionsWnd
//============================================================================

class CActionsWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CActionsWnd(CXWnd*);
	virtual ~CActionsWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT CButtonWnd* GetAbilityBtn(int);
	EQLIB_OBJECT CButtonWnd* GetCombatBtn(int);
	EQLIB_OBJECT CButtonWnd* GetMenuBtn(int);
	EQLIB_OBJECT int GetCurrentPageEnum() const;
	EQLIB_OBJECT void Activate(int);
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void SelectSkillForAbilityBtn(int);
	EQLIB_OBJECT void SelectSkillForCombatBtn(int);
	EQLIB_OBJECT void UpdateButtonText();

	// private
	EQLIB_OBJECT int AbilitiesPageActivate();
	EQLIB_OBJECT int AbilitiesPageDeactivate();
	EQLIB_OBJECT int AbilitiesPageOnProcessFrame();
	EQLIB_OBJECT int AbilitiesPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int CombatPageActivate();
	EQLIB_OBJECT int CombatPageDeactivate();
	EQLIB_OBJECT int CombatPageOnProcessFrame();
	EQLIB_OBJECT int CombatPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int MainPageActivate();
	EQLIB_OBJECT int MainPageDeactivate();
	EQLIB_OBJECT int MainPageOnProcessFrame();
	EQLIB_OBJECT int MainPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectActivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectDeactivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int SocialsPageActivate();
	EQLIB_OBJECT int SocialsPageDeactivate();
	EQLIB_OBJECT int SocialsPageOnProcessFrame();
	EQLIB_OBJECT int SocialsPageWndNotification(CXWnd*, uint32_t, void*);
};

//============================================================================
// CAdvancedLootWnd
//============================================================================

struct [[offsetcomments]] AdvancedLootItemNPC
{
/*0x00*/ unsigned int  CorpseID;                 // spawnId of the corpse that has this lootitem
/*0x04*/ short         StackCount;
/*0x08*/ unsigned int  Expiration;
/*0x0c*/ bool          Locked;
/*0x0d*/ char          Name[0x40];
/*0x50*/ //more data here?
};
using LOOTDETAILS [[deprecated]] = AdvancedLootItemNPC;
using PLOOTDETAILS [[deprecated]] = AdvancedLootItemNPC*;

//.text:0041ECBD                 imul    eax, 84h in Apr 15 2015 test
enum eAdvLootState
{
	eAdvLootWaiting,
	eAdvLootAsk,
	eAdvLootAskAutoRoll,
	eAdvLootStop,
	eAdvLootAskCompleted,
	eAdvLootFreeGrab,
	eAdvLootFixedAskAutoRoll,
	eAdvLootFixedAskCompleted,
	eAdvLootRemoved
};

// size is 0x88 see 0x48AB44 in Dec 10 2018 live
struct [[offsetcomments]] AdvancedLootItem
{
/*0x00*/ int64_t       ItemID;                   // EqGuid?
/*0x08*/ char          Name[0x40];
/*0x48*/ int           IconID;
/*0x4c*/ bool          bStackable;
/*0x50*/ int           MaxStack;
/*0x54*/ bool          NoDrop;
/*0x58*/ int           ComboID;
/*0x5c*/ unsigned int  LootID;
/*0x60*/ eAdvLootState State;
/*0x64*/ bool          bAutoRoll;
/*0x65*/ bool          ActivelyManaged;          // User has the manage Window up
/*0x66*/ bool          ContextMenu;              // item has a context menu
/*0x67*/ bool          AskRandomMode;            // item is in AskRandom mode
/*0x68*/ bool          CLootInProgress;
/*0x69*/ bool          PLootInProgress;
/*0x6c*/ SoeUtil::Array<AdvancedLootItemNPC> LootDetails;
/*0x7c*/ unsigned int  AskTimer;
/*0x80*/ bool          AutoRoll;
/*0x81*/ bool          FG;
/*0x82*/ bool          Need;
/*0x83*/ bool          Greed;
/*0x84*/ bool          No;
/*0x85*/ bool          AlwaysNeed;
/*0x86*/ bool          AlwaysGreed;
/*0x87*/ bool          Never;
/*0x88*/
};
using LOOTITEM [[deprecated]] = AdvancedLootItem;
using PLOOTITEM [[deprecated]] = AdvancedLootItem*;

struct [[offsetcomments]] AdvancedLootItemList
{
/*0x00*/ SoeUtil::Array<AdvancedLootItem> Items;
/*0x10*/ bool         bIsPersonalLoot;
/*0x14*/ CListWnd*    SharedLootList;
/*0x18*/ CComboWnd*   PersonalLootList;
/*0x1c*/
};
using LOOTLIST [[deprecated]] = AdvancedLootItemList;
using PLOOTLIST [[deprecated]] = AdvancedLootItemList*;

class CorpseData;
class RefreshCorpseItemChoices;
class CGroupMemberBase;
struct RaidMember;

// CAdvancedLootWnd__CAdvancedLootWnd_x
// size 0x2f8 see 4CEDDD in Nov 02 2017 Beta
class [[offsetcomments]] CAdvancedLootWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CAdvancedLootWnd(CXWnd*);
	virtual ~CAdvancedLootWnd();

	// virtuals
	virtual void UpdateMasterLooter(const CXStr&, bool);
	virtual void ToggleGroupedByNpc();
	virtual void ToggleApplyFilters();
	virtual void AddCorpse(CorpseData*, RefreshCorpseItemChoices*);
	virtual void RemoveCorpse(uint32_t id);
	virtual void ReduceItemCount(bool, int, int, int);
	virtual void ClearCorpses();
	virtual void AddPlayerToList(CGroupMemberBase*);
	virtual void AddPlayerToList(const RaidMember*);
	virtual void ResetComboBox();
	virtual bool ConstructChange();
	virtual void AddPlayerAccess(uint32_t id);

	// GiveTo
	EQLIB_OBJECT void DoAdvLootAction(int listindex, const CXStr& Name, bool Action, int Quantity);
	// GiveTo
	EQLIB_OBJECT void DoSharedAdvLootAction(AdvancedLootItem* pLootItem, const CXStr& Assignee, bool Action, int Quantity);

	//----------------------------------------------------------------------------
	// data members

/*0x250*/ uint8_t      Unknown0x0240[0x8c];      // ui controls
/*0x2dc*/ AdvancedLootItemList* pCLootList;      // below ref to aAdlw_applyfilt
/*0x2e0*/ AdvancedLootItemList* pPLootList;      // below ref to aAdlw_cllwnd
/*0x2e4*/ DWORD        Unknown0x2d4;
/*0x2e8*/ DWORD        Unknown0x2d8;
/*0x2ec*/ DWORD        Unknown0x2dc;
/*0x2f0*/ DWORD        TotalLootCount;
/*0x2f4*/ DWORD        Unknown0x2e4;
/*0x2f8*/ DWORD        ContextMenuId;
/*0x2fc*/ DWORD        CLastStackSize;
/*0x300*/ BYTE         Unknown0x2f0[0x18];
/*0x318*/
};
using EQADVLOOTWND [[deprecated]] = CAdvancedLootWnd;
using PEQADVLOOTWND [[deprecated]] = CAdvancedLootWnd*;


//============================================================================
// CAlarmWnd
//============================================================================

class CAlarmWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CAlarmWnd(CXWnd*);
	virtual ~CAlarmWnd();

	// virtual
	int OnProcessFrame() override;
	int WndNotification(CXWnd*, uint32_t, void*) override;

	// private
	EQLIB_OBJECT void DoNeverButton();
};

//============================================================================
// CAuraWnd
//============================================================================

class CAuraWnd : public CSidlScreenWnd
{
public:
	CAuraWnd(CXWnd*);
	virtual ~CAuraWnd();
};

//============================================================================
// CBandolierWnd
//============================================================================

class [[offsetcomments]] CBandolierWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CBandolierWnd();
	virtual ~CBandolierWnd();

/*0x24c*/ CButtonWnd*        pAddButton;
/*0x250*/ CButtonWnd*        pDeleteButton;
/*0x254*/ CButtonWnd*        pUseButton;
/*0x258*/ CButtonWnd*        pMkHotButton;
/*0x25c*/ CButtonWnd*        pAutoSwapButton;
/*0x260*/ CButtonWnd*        pDisplayButtons[MAX_BANDOLIER_SLOTS];
/*0x270*/ CListWnd*          pWeaponSetList;
/*0x274*/
};

//============================================================================
// CBankWnd
//============================================================================

class [[offsetcomments]] CBankWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x24c*/ int          MoneyButtonIndex;
/*0x250*/ unsigned int NextRefreshTime;
/*0x254*/ bool         bInventoryWasActive;
/*0x255*/ bool         bRealEstateManagementWasActive;
/*0x258*/ CButtonWnd*  MoneyButtons[5];          // including shared plat
/*0x26c*/ CLabel*      BankerNameLabel;
/*0x270*/ CInvSlotWnd* InvSlotWindows[NUM_BANK_SLOTS];
/*0x2d0*/ CLabel*      SharedBankLabel;
/*0x2d4*/ CInvSlotWnd* SharedSlotWindows[NUM_SHAREDBANK_SLOTS];
/*0x2ec*/ CButtonWnd*  DoneButton;
/*0x2f0*/ CButtonWnd*  ChangeButton;
/*0x2f4*/ CButtonWnd*  AutoButton;
/*0x2f8*/ CButtonWnd*  AltStorageButton;
/*0x2fc*/ CButtonWnd*  FindItemButton;
/*0x300*/ int          BankSize;
/*0x304*/ int          Unknown0x2F4;
/*0x308*/

	CBankWnd(CXWnd*, CXStr);
	virtual ~CBankWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd* pWnd, unsigned int uiMessage, void* pData) override;

	EQLIB_OBJECT int GetNumBankSlots() const;

	// private
	EQLIB_OBJECT long GetBankQtyFromCoinType(int);
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void UpdateMoneyDisplay();
};

//============================================================================
// CBazaarSearchWnd
//============================================================================

struct BazaarTraderData
{
/*0x00*/ int      ZoneID;
/*0x04*/ uint32_t UniquePlayerID;
/*0x08*/ uint32_t SpawnID;
/*0x0c*/ char     Name[0x40];
/*0x4c*/ 
};

// CBazaarSearchWnd__CBazaarSearchWnd_x aBazaarsearchwn
// CBazaarSearchWnd_size: 0x92c8 (see 550EAE) in Dec 19 2019 Live
class [[offsetcomments]] CBazaarSearchWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CBazaarSearchWnd(CXWnd*);
	virtual ~CBazaarSearchWnd();

	virtual void Activate() override;
	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void Deactivate() override;

	EQLIB_OBJECT void HandleBazaarMsg(char*, int);

	EQLIB_OBJECT char* GetPriceString(unsigned long);
	EQLIB_OBJECT void UpdatePlayerCombo();
	EQLIB_OBJECT void UpdatePlayerUpdateButton(bool);
	EQLIB_OBJECT void AddItemtoList(char*, unsigned long, char*, int, int);
	EQLIB_OBJECT void doQuery();
	EQLIB_OBJECT void SortItemList(int);
	EQLIB_OBJECT void UpdateComboButtons();

	//----------------------------------------------------------------------------
	// data members

	// todo: check
/*0x024c*/ BYTE        Unknown0x023c[0x8ff4];
/*0x9240*/ HashTable<BazaarTraderData> Traders;
/*0x9250*/ CListWnd*   pItemList;
/*0x9254*/ CButtonWnd* pQueryButton;
/*0x9258*/ CButtonWnd* pWelcomeButton;
/*0x925c*/ CButtonWnd* pUpdatePlayerButton;
/*0x9260*/ CButtonWnd* pRequestItemButton;
/*0x9264*/ CButtonWnd* pRequestPreviewButton;
/*0x9268*/ CButtonWnd* pFindTraderButton;
/*0x926c*/ CButtonWnd* pHideTradersButton;
/*0x9270*/ CButtonWnd* pDefaultButton;
/*0x9274*/ CButtonWnd* pBuyButton;
/*0x9278*/ CLabelWnd*  pItemNameLabel;
/*0x927c*/ CLabelWnd*  pPlayersLabel;
/*0x9280*/ CLabelWnd*  pItemSlotLabel;
/*0x9284*/ CLabelWnd*  pStatSlotLabel;
/*0x9288*/ CLabelWnd*  pRaceSlotLabel;
/*0x928c*/ CLabelWnd*  pClassSlotLabel;
/*0x9290*/ CLabelWnd*  pItemTypeLabel;
/*0x9294*/ CLabelWnd*  pSearchResultLabel;
/*0x9298*/ CLabelWnd*  pMaxPriceLabel;
/*0x929c*/ CLabelWnd*  pMinPriceLabel;
/*0x92a0*/ CLabelWnd*  pItemPrestigeLabel;
/*0x92a4*/ CLabelWnd*  pItemAugmentLabel;
/*0x92a8*/ CComboWnd*  pItemSlotCombobox;
/*0x92ac*/ CComboWnd*  pStatSlotCombobox;
/*0x92b0*/ CComboWnd*  pRaceSlotCombobox;
/*0x92b4*/ CComboWnd*  pClassSlotCombobox;
/*0x92b8*/ CComboWnd*  pItemTypeCombobox;
/*0x92bc*/ CComboWnd*  pPlayersCombobox;
/*0x92c0*/ CComboWnd*  pItemPrestigeCombobox;
/*0x92c4*/ CComboWnd*  pItemAugmentCombobox;
/*0x92c8*/ CEditWnd*   pItemNameInput;
/*0x92cc*/ CEditWnd*   pMaxPriceInput;
/*0x92d0*/ CEditWnd*   pMinPriceInput;
/*0x92d4*/ CEditWnd*   pMaxLevelInput;
/*0x92d8*/ CEditWnd*   pMinLevelInput;
/*0x92dc*/ CEditWnd*   pMaxResultsPerTraderInput;
/*0x92e0*/ BYTE        Unknown0x92C8[0x8];
/*0x92e8*/
};
using BAZAARSEARCHWND [[deprecated]] = CBazaarSearchWnd;
using PBAZAARSEARCHWND [[deprecated]] = CBazaarSearchWnd*;

//============================================================================
// CBazaarWnd
//============================================================================

class [[offsetcomments]] CBazaarWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CBazaarWnd(CXWnd*);
	virtual ~CBazaarWnd();

	// virtual
	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT bool StoreSelectedPrice();
	EQLIB_OBJECT char* GetPriceString(unsigned long);
	EQLIB_OBJECT EQ_Item* ReturnItemByIndex(int);
	EQLIB_OBJECT int UpdateBazaarListtoServer();
	EQLIB_OBJECT long GetQtyFromCoinType(int);
	EQLIB_OBJECT unsigned long GetPrice();
	EQLIB_OBJECT void AddBazaarText(char*, int);
	EQLIB_OBJECT void AddEquipmentToBazaarArray(EQ_Item*, int, unsigned long);
	EQLIB_OBJECT void BuildBazaarItemArray();
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void HandleTraderMsg(char*);
	EQLIB_OBJECT void RebuildItemArray();
	EQLIB_OBJECT void SelectBazaarSlotItem(int, CTextureAnimation*);
	EQLIB_OBJECT void SetMoneyButton(int, int);
	EQLIB_OBJECT void UpdatePriceButtons();

	// protected
	EQLIB_OBJECT void UpdateButtons();

	// private
	EQLIB_OBJECT void CreateBZRIniFilename();
	EQLIB_OBJECT void ToggleBzrItemActive(int, bool);
};

//============================================================================
// CBodyTintWnd
//============================================================================

class [[offsetcomments]] CBodyTintWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CBodyTintWnd(CXWnd*);
	virtual ~CBodyTintWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT char* BuildRBGTooltip(unsigned long, char* const);
	EQLIB_OBJECT unsigned long GetButtonTint(int);
	EQLIB_OBJECT unsigned long GetItemTint(int);
	EQLIB_OBJECT void GetReagentCount();
	EQLIB_OBJECT void GetTintChangeCount();
	EQLIB_OBJECT void ResetToOrigBodyTints();
	EQLIB_OBJECT void SetSlotLabels(bool);
	EQLIB_OBJECT void StoreModifiedBodyTints();
	EQLIB_OBJECT void UpdateLabelsAndButtons();
	EQLIB_OBJECT void UpdateLocalTintColor(unsigned long);
	EQLIB_OBJECT void UpdateMaterialTintLocal(unsigned long);
};

//============================================================================
// CBookWnd
//============================================================================

class CBookWnd : public CSidlScreenWnd
{
public:
	CBookWnd(CXWnd*);
	virtual ~CBookWnd();

	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT bool CheckBook(EQ_Note*);
	EQLIB_OBJECT void SetBook(char*);
	EQLIB_OBJECT void CleanPages();
	EQLIB_OBJECT void DisplayText();
	EQLIB_OBJECT void ProcessText();
	EQLIB_OBJECT void ShowButtons();
};

//============================================================================
// CBuffWindow
//============================================================================

enum BuffWindowType
{
	BuffWindowStandard,
	BuffWindowShortDuration,
	BuffWindowMelee
};

// CBuffWindow__CBuffWindow aBuffwindow
// this is used for both long and shortbuffs...
// CBuffWindow_size: 0x710 (see 5504D9) in Dec 19 2019 Live
class [[offsetcomments]] CBuffWindow : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CBuffWindow(CXWnd*, BuffWindowType);
	virtual ~CBuffWindow();

	virtual CXSize GetMinSize(bool) const override;
	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void SetBuffIcon(CButtonWnd*, int, int, bool);
	EQLIB_OBJECT void HandleSpellInfoDisplay(CXWnd*);
	EQLIB_OBJECT void RefreshBuffDisplay();
	EQLIB_OBJECT void RefreshIconArrangement();

	//----------------------------------------------------------------------------
	// data members

	// todo: check me
/*0x24c*/ uint8_t     Unknown0x0240[0xb8];
/*0x304*/ CButtonWnd* pBuff[0x24];
/*0x394*/ uint8_t     Unknown0x038c[0x210];
/*0x5a4*/ int         BuffId[NUM_LONG_BUFFS];
/*0x64c*/ int         BuffTimer[NUM_LONG_BUFFS];
/*0x6f4*/ uint8_t     Unknown0x06ec[0x28];
/*0x71c*/ int         MaxLongBuffs;             // 0x2a (NUM_LONG_BUFFS)
/*0x720*/ int         MaxShortBuffs;            // 0x37 (NUM_SHORT_BUFFS)
/*0x724*/ uint8_t     Unknown0x071c[0xc];
/*0x730*/
};
using EQBUFFWINDOW [[deprecated]] = CBuffWindow;
using PEQBUFFWINDOW [[deprecated]] = CBuffWindow*;

//============================================================================
// CCastingWnd
//============================================================================

class CCastingWnd : public CSidlScreenWnd
{
public:
	CCastingWnd(class CXWnd*);
	virtual ~CCastingWnd();
};

//============================================================================
// CCastSpellWnd
//============================================================================

class CSpellGemWnd;

// pinstCCastSpellWnd_x
// CCastSpellWnd__CCastSpellWnd aCastspellwnd
// CCastSpellWnd_size: 0x2c8 (see 550897) in Dec 19 2019 Live
class [[offsetcomments]] CCastSpellWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCastSpellWnd(CXWnd*);
	~CCastSpellWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	static EQLIB_OBJECT void Unmemorize(int);
	static EQLIB_OBJECT void UnmemorizeList(int*, int);
	EQLIB_OBJECT void ForgetMemorizedSpell(int);
	EQLIB_OBJECT void HandleSpellInfoDisplay(CXWnd*);
	EQLIB_OBJECT void HandleSpellLeftClick(int);
	EQLIB_OBJECT void HandleSpellRightClick(int);
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void RecacheCategorizedSpells();
	EQLIB_OBJECT void RecacheLoadoutContextMenu();
	EQLIB_OBJECT void SpellBookDeactivating();
	EQLIB_OBJECT bool IsBardSongPlaying();
	EQLIB_OBJECT unsigned long GetSpellGemColor(EQ_Spell*);
	EQLIB_OBJECT void CategorizeSpell(int, int, int, int);
	EQLIB_OBJECT void ClearSpellCategories();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void MakeSpellSelectMenu();
	EQLIB_OBJECT void RefreshSpellGemButtons();
	EQLIB_OBJECT void UpdateSpellGems(int);
	EQLIB_OBJECT void UpdateSpellGemTooltips(int);

	//----------------------------------------------------------------------------
	// data members

/*0x250*/ CPopDialogWnd* pCurrentPop;
/*0x254*/ unsigned int   lastRefresh;
/*0x258*/ bool           bHorizontal;
/*0x25c*/ CSpellGemWnd*  SpellSlots[NUM_SPELL_GEMS]; // CSPW_Spell%d
/*0x294*/ BYTE           Unknown0x284[0x54];
/*0x2e8*/
};
using EQCASTSPELLWINDOW [[deprecated]] = CCastSpellWnd;
using PEQCASTSPELLWINDOW [[deprecated]] = CCastSpellWnd*;

//============================================================================
// CCharacterCreation
//============================================================================

class CCharacterCreation : public CSidlScreenWnd
{
public:
	CCharacterCreation(CXWnd*);
	virtual ~CCharacterCreation();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void ActivateScreen(int);
	EQLIB_OBJECT void DoBackButton();
	EQLIB_OBJECT void DoNextButton();
	EQLIB_OBJECT void HandleNameApprovalResponse(int);
	EQLIB_OBJECT void NameGenerated(char*);
	EQLIB_OBJECT bool IsLackingExpansion(bool, bool);
	EQLIB_OBJECT char* GetCharCreateText(char*, int, int, int, int);
	EQLIB_OBJECT int GetClassButtonIndex(int);
	EQLIB_OBJECT int GetRaceButtonIndex(int);
	EQLIB_OBJECT void DoStatButton(int);
	EQLIB_OBJECT void FinalizeNewPCAndSendToWorld();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void InitNewPC();
	EQLIB_OBJECT void InitStartingCities();
	EQLIB_OBJECT void InitStats(bool);
	EQLIB_OBJECT void RandomizeCharacter(bool, bool);
	EQLIB_OBJECT void RandomizeFacialFeatures();
	EQLIB_OBJECT void SelectedClassButton(int);
	EQLIB_OBJECT void SelectedRaceButton(int);
	EQLIB_OBJECT void SelectStartingCity(int);
	EQLIB_OBJECT void SetNewPCDeityFromBtnIndex(int);
	EQLIB_OBJECT void SetPlayerAppearanceFromNewPC();
	EQLIB_OBJECT void SubmitNameToWorld();
	EQLIB_OBJECT void UpdatePlayerFromNewPC();
	EQLIB_OBJECT void UpdateScreenZeroButtons(bool);
};

//============================================================================
// CCharacterListWnd
//============================================================================

class CCharacterListWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CCharacterListWnd(CXWnd*);
	virtual ~CCharacterListWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT int IsEmptyCharacterSlot(int);
	EQLIB_OBJECT int IsValidCharacterSelected();
	EQLIB_OBJECT int NumberOfCharacters();
	EQLIB_OBJECT unsigned char IsEvil(int, int, int);
	EQLIB_OBJECT void DeleteCharacter();
	EQLIB_OBJECT void EnterExplorationMode();
	EQLIB_OBJECT void EnterWorld();
	EQLIB_OBJECT void LeaveExplorationMode();
	EQLIB_OBJECT void Quit();
	EQLIB_OBJECT void UpdateList(bool bForceUpdate = false);
	EQLIB_OBJECT void SelectCharacter(int charindex, bool bSwitchVisually = true, bool bForceUpdate = false /*dont mess with this*/);
	EQLIB_OBJECT void SetLoadZonePlayerLocation();
	EQLIB_OBJECT void SwitchModel(PlayerClient*, unsigned char, int, unsigned char, unsigned char);
	EQLIB_OBJECT void UpdateButtonNames();
	EQLIB_OBJECT void CreateExplorationModePlayers();
	EQLIB_OBJECT void EnableButtons(bool);
	EQLIB_OBJECT void EnableEqMovementCommands(bool);
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void RemoveExplorationModePlayers();
	EQLIB_OBJECT void SetLocationByClass(PlayerClient*, bool, int);
};

//============================================================================
// CChatWindowManager
//============================================================================

#define MAX_CHAT_WINDOWS     32
#define MAX_HITMODES         8

// Size is 85 see 4E637C in Nov 18 2019
enum ChatFilterEnum
{
	CHAT_FILTER_SAY,
	CHAT_FILTER_TELL,
	CHAT_FILTER_GROUP,
	CHAT_FILTER_RAID,
	CHAT_FILTER_GUILD,
	CHAT_FILTER_OOC,
	CHAT_FILTER_AUCTION,
	CHAT_FILTER_SHOUT,
	CHAT_FILTER_EMOTE,
	CHAT_FILTER_MELEE_YOUR_HITS,
	CHAT_FILTER_SPELLS_MINE,
	CHAT_FILTER_SKILLS,
	CHAT_FILTER_CHAT1,
	CHAT_FILTER_CHAT2,
	CHAT_FILTER_CHAT3,
	CHAT_FILTER_CHAT4,
	CHAT_FILTER_CHAT5,
	CHAT_FILTER_CHAT6,
	CHAT_FILTER_CHAT7,
	CHAT_FILTER_CHAT8,
	CHAT_FILTER_CHAT9,
	CHAT_FILTER_CHAT10,
	CHAT_FILTER_OTHER,
	CHAT_FILTER_MELEE_YOUR_MISSES,
	CHAT_FILTER_MELEE_YOU_BEING_HIT,
	CHAT_FILTER_MELEE_YOU_BEING_MISSED,
	CHAT_FILTER_MELEE_OTHERS_HITS,
	CHAT_FILTER_MELEE_OTHERS_MISSES,
	CHAT_FILTER_MELEE_MY_DEATH,
	CHAT_FILTER_MELEE_OTHER_PC_DEATH,
	CHAT_FILTER_MELEE_CRITICAL_HITS,
	CHAT_FILTER_MELEE_DISCIPLINES,
	CHAT_FILTER_MELEE_WARNINGS,
	CHAT_FILTER_MELEE_NPC_RAMPAGE,
	CHAT_FILTER_MELEE_NPC_FLURRY,
	CHAT_FILTER_MELEE_NPC_ENRAGE,
	CHAT_FILTER_SPELLS_OTHERS,
	CHAT_FILTER_SPELLS_FAILURES,
	CHAT_FILTER_SPELLS_CRITICALS,
	CHAT_FILTER_SPELLS_WORN_OFF,
	CHAT_FILTER_SPELLS_DD_YOURS,
	CHAT_FILTER_FOCUS_EFFECTS,
	CHAT_FILTER_RANDOM_YOUR_ROLLS,
	CHAT_FILTER_PET_MESSAGES,
	CHAT_FILTER_PET_RAMPAGE_FLURRY,
	CHAT_FILTER_PET_CRITICALS,
	CHAT_FILTER_DAMAGE_SHIELDS_YOU_ATTACKING,
	CHAT_FILTER_EXPERIENCE_MESSAGES,
	CHAT_FILTER_NPC_EMOTES,
	CHAT_FILTER_SYSTEM_MESSAGES,
	CHAT_FILTER_WHO,
	CHAT_FILTER_PET_SPELLS,
	CHAT_FILTER_PET_RESPONSES,
	CHAT_FILTER_ITEM_SPEECH,
	CHAT_FILTER_FELLOWSHIP_MESSAGES,
	CHAT_FILTER_MERCENARY_MESSAGES,
	CHAT_FILTER_PVP_MESSAGES,
	CHAT_FILTER_MELEE_YOUR_FLURRY,
	CHAT_FILTER_DEBUG,                           // todo: check this not 100% sure its it...
	CHAT_FILTER_MELEE_NPC_DEATH,
	CHAT_FILTER_RANDOM_OTHERS_ROLLS,
	CHAT_FILTER_RANDOM_GROUP_RAID_ROLLS,
	CHAT_FILTER_ENVIRONMENTAL_DAMAGE_YOURS,
	CHAT_FILTER_ENVIRONMENTAL_DAMAGE_OTHERS,
	CHAT_FILTER_DAMAGE_SHIELDS_YOU_DEFENDING,
	CHAT_FILTER_DAMAGE_SHIELDS_OTHERS,
	CHAT_FILTER_EVENT_MESSAGES,
	CHAT_FILTER_OVERWRITTEN_DETRIMENTAL_SPELL_MESSAGES,
	CHAT_FILTER_OVERWRITTEN_BENEFICIAL_SPELL_MESSAGES,
	CHAT_FILTER_YOU_CANT_USE_THAT_COMMAND,       // Added chat color and filtering options for 'You can't use that command' messages.
	CHAT_FILTER_COMBAT_ABILITY_REUSE,            // Added chat color and filtering options for combat ability and AA ability reuse time messages.
	CHAT_FILTER_SPELLS_AA_ABILITY_REUSE,
	CHAT_FILTER_ITEM_DESTROYED,
	CHAT_FILTER_SPELLS_AURAS_YOU,
	CHAT_FILTER_SPELLS_AURAS_OTHERS,
	CHAT_FILTER_SPELLS_HEALS_YOURS,
	CHAT_FILTER_SPELLS_HEALS_OTHERS,
	CHAT_FILTER_SPELLS_DOTS_YOURS,
	CHAT_FILTER_SPELLS_DOTS_OTHERS,
	CHAT_FILTER_SPELLS_SONGS,
	CHAT_FILTER_SPELLS_DD_OTHERS,
	CHAT_FILTER_ZERO_HEALS,
	CHAT_FILTER_SOMETHING,
	CHAT_FILTER_SOMETHING1,
	CHAT_FILTER_SOMETHING2,
	CHAT_FILTER_OTHERS_DISCIPLINES,

	MAX_CHAT_FILTERS = CHAT_FILTER_OTHERS_DISCIPLINES
};


// Size 0x384 in eqgame dated 05 Mar 2019 Test (see 0x5418AB)
class [[offsetcomments]] CChatWindowManager
{
public:
	//EQLIB_OBJECT CChatWindowManager();
	//EQLIB_OBJECT ~CChatWindowManager();

	EQLIB_OBJECT COLORREF GetRGBAFromIndex(int);
	EQLIB_OBJECT int InitContextMenu(CChatWindow*);
	EQLIB_OBJECT void FreeChatWindow(CChatWindow*);
	EQLIB_OBJECT CChatWindow* GetLockedActiveChatWindow();   // might be returning CChatContainerWindow now
	EQLIB_OBJECT void SetLockedActiveChatWindow(CChatWindow*);
	EQLIB_OBJECT void CreateChatWindow(CXWnd* pParentWnd, int ID, char* Name, int Language, int DefaultChannel,
		int ChatChannel, char* szTellTarget, int FontStyle, bool bScrollbar, bool bHighLight, COLORREF HighlightColor);

	//EQLIB_OBJECT CChatWindow* GetActiveChatWindow();
	//EQLIB_OBJECT CChatWindow* GetChannelMap(int);
	//EQLIB_OBJECT CXStr GetAllVisibleText(CXStr);
	//EQLIB_OBJECT int GetChannelFromColor(int);
	//EQLIB_OBJECT void Activate();
	//EQLIB_OBJECT void AddText(CXStr, int);
	//EQLIB_OBJECT void ClearChannelMap(int);
	//EQLIB_OBJECT void ClearChannelMaps(CChatWindow*);
	//EQLIB_OBJECT void CreateChatWindow();
	//EQLIB_OBJECT void Deactivate();
	//EQLIB_OBJECT void LoadChatInis();
	//EQLIB_OBJECT void Process();
	//EQLIB_OBJECT void SetActiveChatWindow(CChatWindow*);
	//EQLIB_OBJECT void SetChannelMap(int, CChatWindow*);
	//EQLIB_OBJECT void UpdateContextMenus(CChatWindow*);
	//EQLIB_OBJECT void UpdateTellMenus(CChatWindow*);

/*0x000*/ CChatWindow* ChatWnd[MAX_CHAT_WINDOWS];

	// this is likely a class as a member variable
/*0x080*/ void* ChatContainerWindow_vfTable;
/*0x084*/ DWORD              Unknown0x084;
/*0x088*/ DWORD              Unknown0x088;
/*0x08c*/ DWORD              Unknown0x08c;
/*0x090*/ CChatContainerWindow* ChatContainerWindow[MAX_CHAT_WINDOWS];
/*0x110*/ DWORD              Unknown0x110;

/*0x114*/ DWORD              NumWindows;
/*0x118*/ DWORD              LockedWindow;
/*0x11c*/ DWORD              ActiveWindow;
/*0x120*/ DWORD              Unknown0x120;                       // CurrentActive... CChat::GetActiveChatWindow
/*0x124*/ DWORD              Unknown0x124;                       // LockedActive... CChatManager__GetLockedActiveChatWindow_x
/*0x128*/ CChatWindow*       ChannelMap[MAX_CHAT_FILTERS];       // channel map
/*0x27c*/ CContextMenu*      pCM_MainMenu;
/*0x280*/ int                ScrollbarIndex;
/*0x284*/ CContextMenu*      pCM_LanguageMenu;
/*0x288*/ int                LanguageMenuIndex;
/*0x28c*/ CContextMenu*      pCM_FilterMenu;
/*0x290*/ int                FilterMenuIndex;
/*0x294*/ int                ChatChannelFilterMenuIndex;
/*0x298*/ int                MeleeFilterSubMenuIndex;
/*0x29c*/ int                SpellsFilterSubMenuIndex;
/*0x2a0*/ CContextMenu*      pCM_MeleeMenu;
/*0x2a4*/ int                MeleeFilterMenuIndex;
/*0x2a8*/ CContextMenu*      pCM_SpellMenu;
/*0x2ac*/ int                SpellsMenuIndex;
/*0x2b0*/ CContextMenu*      pCM_ChannelMenu;
/*0x2b4*/ int                ChannelMenuIndex;
/*0x2b8*/ CContextMenu*      pCM_DefaultChannelMenu;
/*0x2bc*/ int                DefaultChannelMenu;
/*0x2c0*/ int                DefaultChannelMenu2;
/*0x2c4*/ CContextMenu*      pCM_ChatChannelDefChan;
/*0x2c8*/ int                ChatChannelDefChanIndex;
/*0x2cc*/ CContextMenu*      pCM_YourHitsMenu;
/*0x2d0*/ int                YourHitsMenuIndex;
/*0x2d4*/ CContextMenu*      pCM_YourMissesMenu;
/*0x2d8*/ int                YourMissesMenuindex;
/*0x2dc*/ CContextMenu*      pCM_YouBeingHitMenu;
/*0x2e0*/ int                YouBeingHitMenuindex;
/*0x2e4*/ CContextMenu*      pCM_OthersHitsMenu;
/*0x2e8*/ int                OthersHitsMenuindex;
/*0x2ec*/ CContextMenu*      pCM_OthersMissesMenu;
/*0x2f0*/ int                OthersMissesMenuindex;
/*0x2f4*/ CContextMenu*      pCM_AllContextMenu;
/*0x2f8*/ int                AllContextMenuindex;
/*0x2fc*/ CContextMenu*      pCM_HitModesMenu;
/*0x300*/ int                HitModesMenuindex;
/*0x304*/ CContextMenu*      pCM_ReplyToMenu;
/*0x308*/ int                ReplyToMenuindex;
/*0x30c*/ CContextMenu*      pCM_TellFriendMenu;
/*0x310*/ int                TellFriendMenuindex;
/*0x314*/ CContextMenu*      pCM_TellRaidmemberMenu;
/*0x318*/ int                TellRaidmemberMenuindex;
/*0x31c*/ int                ReplyToSubIndex;
/*0x320*/ int                TellFriendSubIndex;
/*0x324*/ int                TellRaidmemberSubIndex;
/*0x328*/ int                HitModes[MAX_HITMODES];
/*0x348*/ int                DefaultChannel;
/*0x34c*/ CContextMenu*      pCM_RandomFilterMenu;
/*0x350*/ int                RandomFilterIndex;
/*0x354*/ int                RandomFilterSubIndex;
/*0x358*/ CContextMenu*      pCM_EnvironmentalDamageMenu;
/*0x35c*/ int                EnvironmentalDamageIndex;
/*0x360*/ int                EnvironmentalDamageSubIndex;
/*0x364*/ CContextMenu*      pCM_DamageShieldsFilterMenu;
/*0x368*/ int                DamageShieldsFilterIndex;
/*0x36c*/ int                DamageShieldsFilterSubIndex;
/*0x370*/ CContextMenu*      pCM_BeneficialSpellsFilterMenu;
/*0x374*/ int                BeneficialSpellsFilteIndex;
	/*0x378*/
};
using EQCHATMGR [[deprecated]] = CChatWindowManager;
using PEQCHATMGR [[deprecated]] = CChatWindowManager *;

//============================================================================
// CChatWindow
//============================================================================

// in CChatWindow__SetChatFont see 692847 in eqgame.exe Test dated Jun 28 2016
const int EQ_CHAT_FONT_OFFSET = 0x11c;

// CChatWindow__CChatWindow_x
// Size 0x370 see 69A7DD in Oct 17 2017 Live exe
class [[offsetcomments]] CChatWindow : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CChatWindow(CXWnd* parent);
	EQLIB_OBJECT virtual ~CChatWindow();

	//----------------------------------------------------------------------------
	// virtuals

	virtual int Draw() override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd* sender, uint32_t message, void* data) override;
	virtual int OnSetFocus(CXWnd* wnd) override;
	virtual int OnKillFocus(CXWnd* wnd) override;
	virtual void Deactivate() override;

	EQLIB_OBJECT void Clear();
	EQLIB_OBJECT void AddHistory(CXStr Text);
	EQLIB_OBJECT CEditWnd* GetInputWnd() { return InputWnd; }
	EQLIB_OBJECT CStmlWnd* GetOutputWnd() { return OutputWnd; }

	//EQLIB_OBJECT CXStr GetInputText();
	//EQLIB_OBJECT void AddOutputText(CXStr, int);
	//EQLIB_OBJECT void HistoryBack();
	//EQLIB_OBJECT void HistoryForward();
	//EQLIB_OBJECT void PageDown();
	//EQLIB_OBJECT void PageUp();
	//EQLIB_OBJECT void SetChatFont(int);

/*0x248*/ CChatWindowManager* ChatManager;
/*0x24c*/ CEditWnd*    InputWnd;
/*0x250*/ CStmlWnd*    OutputWnd;
/*0x254*/ int          ChatChannel;
/*0x258*/ int          ChatChannelIndex;
/*0x25c*/ char         TellTarget[0x40];
/*0x29c*/ int          Language;
/*0x2a0*/ bool         bIsMainChat;
/*0x2a1*/ bool         bIsTellWnd;
/*0x2a4*/ int          TimestampFormat;
/*0x2a8*/ COLORREF     TimestampColor;
/*0x2ac*/ bool         bTimestampMatchChatColor;
/*0x2b0*/ CXStr        CommandHistory[0x28];     // see 690DAA in apr 11 2017 test
/*0x350*/ int          HistoryIndex;
/*0x354*/ int          HistoryLastShown;
/*0x358*/ int          FontSize;                 // style
/*0x35c*/ int          AlwaysChathereIndex;      // menu
/*0x360*/ int          NamesContextMenu;         // guess
/*0x364*/ int          ContextMenuID;            // also a guess
/*0x368*/ int          ContextMenuSubID[0xa];    // this is not correct but ill fix it later.
/*0x390*/
};

using EQCHATWINDOW [[deprecated]] = CChatWindow;
using PEQCHATWINDOW [[deprecated]] = CChatWindow *;

//============================================================================
// CColorPickerWnd
//============================================================================

class [[offsetcomments]] CColorPickerWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CColorPickerWnd(CXWnd* pwndParent);

	virtual bool AboutToHide() override;
	virtual int WndNotification(CXWnd* pwndSender, uint32_t Msg, void* pData) override;
	virtual void OnWndNotification() override;

	EQLIB_OBJECT void CheckMaxEditWnd();
	EQLIB_OBJECT void SetCurrentColor(unsigned long);
	EQLIB_OBJECT void SetTemplateColor(int, unsigned long);
	EQLIB_OBJECT void UpdateCurrentColor();
	EQLIB_OBJECT void UpdateEditWndFromSlider(CSliderWnd* pSlider, CEditWnd* pEdit, int* value);
	EQLIB_OBJECT void UpdateSliderFromEditWnd(CSliderWnd* pSlider, CEditWnd* pEdit, int* value);
	EQLIB_OBJECT int Open(CXWnd* pwndCaller, D3DCOLOR CurrentColor = 0x00FFFFFF);

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ int                ContextMenuIndex;
/*0x250*/ int                MaxSliderValue;
/*0x254*/ CXWnd*             pwndCaller;
/*0x258*/ CButtonWnd*        ColorButton[16];
/*0x298*/ int                RedSliderValue;
/*0x29c*/ CSliderWnd*        RedSlider;
/*0x2a0*/ CEditWnd*          RedSliderInputEdit;
/*0x2a4*/ int                GreenSliderValue;
/*0x2a8*/ CSliderWnd*        GreenSlider;
/*0x2ac*/ CEditWnd*          GreenSliderInputEdit;
/*0x2b0*/ int                BlueSliderValue;
/*0x2b4*/ CSliderWnd*        BlueSlider;
/*0x2b8*/ CEditWnd*          BlueSliderInputEdit;
/*0x2bc*/ CButtonWnd*        AcceptButton;
/*0x2c0*/
};

//============================================================================
// CCombatAbilityWnd
//============================================================================

class CCombatAbilityWnd : public CSidlScreenWnd
{
public:
	CCombatAbilityWnd(CXWnd*);
	virtual ~CCombatAbilityWnd();
};

//============================================================================
// CCombatSkillsSelectWnd
//============================================================================

class CCombatSkillsSelectWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CCombatSkillsSelectWnd(CXWnd*);
	virtual ~CCombatSkillsSelectWnd();

	EQLIB_OBJECT bool ShouldDisplayThisSkill(int);
};

//============================================================================
// CCompassWnd
//============================================================================

// size 0x180 3-10-2004
class [[offsetcomments]] CCompassWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CCompassWnd(CXWnd*);
	virtual ~CCompassWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;

	EQLIB_OBJECT void SenseHeading();
	EQLIB_OBJECT void PickNewTarget();
	EQLIB_OBJECT void SetSpeed();

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ CStaticAnimationTemplate* pStrip1;
/*0x250*/ CStaticAnimationTemplate* pStrip2;
	// WIP
/*0x254*/ BOOL         DrawLine;
/*0x258*/ DWORD        Unknown0x170;
/*0x25c*/ DWORD        LineRed;
/*0x260*/ DWORD        LineGreen;
/*0x264*/ DWORD        LineBlue;
/*0x268*/
};
using EQCOMPASSWINDOW [[deprecated]] = CCompassWnd;
using PEQCOMPASSWINDOW [[deprecated]] = CCompassWnd*;

//============================================================================
// CConfirmationDialog
//============================================================================

// This is actually CPopDialogWnd.
// TODO: Rename this
class [[offsetcomments]] CConfirmationDialog : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CConfirmationDialog(CXWnd*);
	virtual ~CConfirmationDialog();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	// probably wrong
	virtual void Activate(PopDialogHandler* handler, int msg, const char* text,
		int, int, int, int);

	// this is all invalid
	//EQLIB_OBJECT void HandleButtonNoPressed();
	//EQLIB_OBJECT void HandleButtonOkPressed();
	//EQLIB_OBJECT void HandleButtonYesPressed();
	//EQLIB_OBJECT void ProcessNo(int);
	//EQLIB_OBJECT void ProcessYes();
	//EQLIB_OBJECT void SetNameApprovalData(char*, char*, int, int, char*);
	//EQLIB_OBJECT void ExpireCurrentDialog();
	//EQLIB_OBJECT void ResetFocusOnClose();

	// Data members
/*0x248*/ CStmlWnd*    OutputText;
/*0x24c*/ CButtonWnd*  pYesButton;
/*0x250*/ CButtonWnd*  pNoButton;
/*0x254*/ CButtonWnd*  pCancelButton;
/*0x258*/ CButtonWnd*  pOKButton;
/*0x25c*/ BYTE         Unknown0x170[0x18];
/*0x274*/
};

//============================================================================
// CContainerWnd
//============================================================================

class [[offsetcomments]] CContainerWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CContainerWnd(CXWnd*);
	virtual ~CContainerWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void CheckCloseable();
	EQLIB_OBJECT void SetContainer(CONTENTS*& pContainer, const ItemGlobalIndex& location); // should be ItemBasePtr
	EQLIB_OBJECT bool ContainsNoDrop();
	EQLIB_OBJECT void HandleCombine();

	// TODO: Fix for inaccuracies
/*0x248*/ CONTENTS*     pContents;
/*0x24c*/ ItemGlobalIndex Location;
/*0x258*/ VeArray<CInvSlotWnd*> InvSlotWnds;
/*0x264*/ CButtonWnd*   pCombineButton;
/*0x268*/ CButtonWnd*   pDoneButton;
/*0x26c*/ CButtonWnd*   pStandardDoneButton;
/*0x270*/ CButtonWnd*   pCombineDoneButton;
/*0x274*/ CButtonWnd*   pContainerIcon;
/*0x278*/ CButtonWnd*   pContainerStandardIcon;
/*0x27c*/ CButtonWnd*   pContainerCombineIcon;
/*0x280*/ CTextureAnimation* pIconAnimation;
/*0x284*/ CLabel*       ContainerLabel;
/*0x288*/ CInvSlotWnd*  pContainerSlotTemplate;
/*0x28c*/ CXWnd*        pStandardItems;
/*0x290*/ CXWnd*        pStandardItemsWithDone;
/*0x294*/ CXWnd*        pCombineItems;
/*0x298*/ CStmlWnd*     pStandardSize;
/*0x29c*/ CStmlWnd*     pCombineSize;
/*0x2a0*/ bool          bCombineValid;
/*0x2a1*/ bool          bUserCloseable;
/*0x2a4*/ int           ContainerType;            // classic = 0, standard = 1, combine = 2
/*0x2a8*/ int           IndexDoneButton;
/*0x2ac*/ CContextMenu* ContextMenu;
/*0x2b0*/

#if 0 // old stuff
/*0x000*/ CSIDLWND     Wnd;
/*0x148*/ CONTENTS* pContents;                // Pointer to the contents of the container;
												 // Matches the pointer in CHARINFO.Inventory/Bank/World
/*0x14c*/ CSIDLWND* pSlots[0x0a];
/*0x000*/ CSIDLWND* pCombine;
/*0x168*/ CSIDLWND* pDone;
/*0x16c*/ CSIDLWND* pIcon;
/*0x170*/ CSIDLWND* pUnknown;
/*0x174*/ CSIDLWND* pLabel;
/*0x178*/ BYTE         Unknown0x178[4];
/*0x17c*/
#endif
};
using EQCONTAINERWINDOW [[deprecated]] = CContainerWnd;
using PEQCONTAINERWINDOW [[deprecated]] = CContainerWnd *;

#define MAX_CONTAINERS           40

class [[offsetcomments]] CContainerMgr
{
	FORCE_SYMBOLS

public:
	CContainerMgr();
	virtual ~CContainerMgr();

	EQLIB_OBJECT bool CloseAllContainers();
	EQLIB_OBJECT EQ_Item* GetWorldContainerItem(int);
	EQLIB_OBJECT void ClearWorldContainerItems();
	EQLIB_OBJECT void CloseContainer(CONTENTS**, bool deleteWindow);
	EQLIB_OBJECT void CloseEQContainer(EQ_Container*);
	EQLIB_OBJECT void OpenContainer(CONTENTS**, const ItemGlobalIndex& location, bool allowTradeskill = true);
	EQLIB_OBJECT void OpenWorldContainer(EQ_Container*, unsigned long);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SetWorldContainerItem(EQ_Item*, int);
	EQLIB_OBJECT CContainerWnd* GetFreeContainerWnd();
	EQLIB_OBJECT void OpenExperimentContainer(const VePointer<CONTENTS>& pCont, const ItemGlobalIndex& Location);

	//----------------------------------------------------------------------------
	// data members

/*0x04*/ CContainerWnd*     pContainerWnds[40];
/*0xa4*/ ArrayClass<CContainerWnd*> ContainerWndsToDelete;
/*0xb4*/ VePointer<CONTENTS> pWorldContainer;
/*0xb8*/ DWORD              WorldContainerSerialNumber;
/*0xbc*/ int                WorldContainerRealEstateID;
/*0xc0*/ int                WorldContainerRealEstateItemID;
/*0xc4*/ DWORD              Timer;
/*0xc8*/ bool               bShowDone;
/*0xcc*/
};

//============================================================================
// CContextMenuManager
//============================================================================

#define MAX_CONTEXT_MENU_DEPTH 8
#define MAX_CONTEXT_MENUS 1024

// combination of CContexTMenuManager and CContextMenuManagerBase
class [[offsetcomments]] CContextMenuManager : public CXWnd
{
	FORCE_SYMBOLS

public:
	CContextMenuManager(CXWnd*, uint32_t, const CXRect&);
	virtual ~CContextMenuManager();

	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleWheelButtonDown(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	virtual void CreateDefaultMenu();
	virtual int HandleWindowMenuCommands(CXWnd*, int);

	EQLIB_OBJECT int AddMenu(CContextMenu*);
	EQLIB_OBJECT int GetDefaultMenuIndex() { return DefaultMenuIndex; }
	EQLIB_OBJECT CContextMenu*GetMenu(int);
	EQLIB_OBJECT int PopupMenu(int, const CXPoint&, CXWnd*);
	EQLIB_OBJECT int RemoveMenu(int, bool);
	EQLIB_OBJECT void Flush();
	EQLIB_OBJECT void WarnDefaultMenu(CXWnd*);

	//----------------------------------------------------------------------------
	// data members

/*0x0200*/ CXWnd*             pParentMenuWnd;
/*0x0204*/ CContextMenu*      pCurrMenus[MAX_CONTEXT_MENU_DEPTH];
/*0x0224*/ int                NumVisibleMenus;
/*0x0228*/ int                CurrMenu;
/*0x022c*/ CContextMenu*      pMenus[MAX_CONTEXT_MENUS];
/*0x122c*/ int                NumMenus;
/*0x1230*/ CXWnd*             pHandlerWnd;
/*0x1234*/ int                HandlerCmd;
/*0x1238*/ int                DefaultMenuIndex;
/*0x123c*/ int                DefaultHelpItem;
/*0x1240*/ int                DefaultBGItem;
/*0x1244*/ int                DefaultMinItem;
/*0x1248*/ int                DefaultCloseItem;
/*0x124c*/ int                DefaultLockItem;
/*0x1250*/ int                DefaultEscapeItem;
/*0x1254*/
};

//============================================================================
// CContextMenu
//============================================================================

// Size is 0x290 in eagame 2016 Nov 14
class [[offsetcomments]] CContextMenu : public CListWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CContextMenu(CXWnd* pParent, uint32_t MenuID, const CXRect& rect);
	EQLIB_OBJECT virtual ~CContextMenu();

	virtual int OnKillFocus(CXWnd*) override;

	// MenuID: Set HighPart as the ID for submenus and LowPart is then the subindex
	EQLIB_OBJECT int AddMenuItem(const CXStr& str, unsigned int MenuID, bool bChecked = false, COLORREF Color = 0xFFFFFFFF, bool bEnable = true);
	EQLIB_OBJECT int AddSeparator();
	EQLIB_OBJECT void Activate(CXPoint, int, int);
	EQLIB_OBJECT void CheckMenuItem(int ID, bool bVal = true, bool bUncheckAll = false);
	EQLIB_OBJECT void EnableMenuItem(int ID, bool bVal = true);
	EQLIB_OBJECT void RemoveAllMenuItems();
	EQLIB_OBJECT void RemoveMenuItem(int id);
	EQLIB_OBJECT void SetMenuItem(int ID, const CXStr& Str, bool bChecked = false, COLORREF Color = 0xFFFFFFFF, bool bEnable = true);

	EQLIB_OBJECT int InsertMenuItem(const CXStr& str, unsigned int position, unsigned int ItemID,
		bool bChecked, COLORREF Color, bool bEnable);

	//----------------------------------------------------------------------------
	// data members

/*0x2a8*/ int          NumItems;
/*0x2ac*/ int          Unknown0x28C;
/*0x2b0*/
};

//============================================================================
// CCursorAttachment
//============================================================================

enum ECursorAttachmentType
{
	eCursorAttachment_None              = -1,
	eCursorAttachment_MemorizeSpell     = 1,
	eCursorAttachment_Item,
	eCursorAttachment_Money,
	eCursorAttachment_Social,
	eCursorAttachment_MenuButton,
	eCursorAttachment_Ability,
	eCursorAttachment_Combat,
	eCursorAttachment_InvSlot,
	eCursorAttachment_SpellGem,
	eCursorAttachment_PetCommand,
	eCursorAttachment_SkillID,
	eCursorAttachment_MeleeAbility,
	eCursorAttachment_LeadershipAbility,
	eCursorAttachment_ItemLink,
	eCursorAttachment_KronoSlot,
	eCursorAttachment_Command,
	eCursorAttachment_CombatAbility,
	eCursorAttachment_MountKeyRingLink,
	eCursorAttachment_IllusionKeyRingLink,
	eCursorAttachment_FamiliarKeyRingLink,
};

class [[offsetcomments]] CCursorAttachment : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCursorAttachment(CXWnd*);
	virtual ~CCursorAttachment();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void Deactivate() override;

	EQLIB_OBJECT bool IsOkToActivate(int);
	EQLIB_OBJECT bool RemoveAttachment();
	EQLIB_OBJECT void DrawButtonText() const;
	EQLIB_OBJECT void DrawQuantity() const;

	EQLIB_OBJECT void AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* pTABG,
		ECursorAttachmentType Type, int Index,
		const char* Assigned_Name, const char* Name, int Qty = -1, int IconID = -1);
	EQLIB_OBJECT void AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* pTABG,
		ECursorAttachmentType Type, int Index,
		const EqItemGuid& ItemGuid, int ItemID, const char* Assigned_Name, const char* Name, int Qty = -1, int IconID = -1);

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ int                       Type;
/*0x250*/ int                       Index;
/*0x254*/ EqItemGuid                ItemGuid;
/*0x268*/ int                       ItemID;
/*0x26c*/ int                       Qty;
/*0x270*/ int                       IconID;
/*0x274*/ SoeUtil::String           AssignedName;
/*0x284*/ int                       Unknown0x264;
/*0x288*/ char                      AssignedNameCopy[0x40];
/*0x2c8*/ CXStr                     ButtonText;
/*0x2cc*/ CStaticAnimationTemplate* pBGStaticAnim;
/*0x2d0*/ CStaticAnimationTemplate* pOverlayStaticAnim;
/*0x2d4*/ CSpellGemWnd*             pSpellGem;
/*0x2d8*/ CTextObjectInterface*     pTextObjectInterface;
/*0x2dc*/ CTextObjectInterface*     pButtonTextObjectInterface;
/*0x2e0*/ int                       TextfontStyle;
/*0x2e4*/ int                       Unknown0x2C4;
/*0x2e8*/
};

//============================================================================
// CExtendedTargetWnd
//============================================================================

class CExtendedTargetWnd : public CSidlScreenWnd
{
public:
};

//============================================================================
// CFactionWnd
//============================================================================

// CFactionWnd__CFactionWnd_x aFactionwnd
// CFactionWnd__size: 0x270 (see 550F54) in Dec 19 2019 Live
class [[offsetcomments]] CFactionWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFactionWnd(CXWnd*);
	virtual ~CFactionWnd();

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ bool             Unknown0x22c;
/*0x250*/ int              Unknown0x230;
/*0x254*/ int              Unknown0x234;
/*0x258*/ int              Unknown0x238;
/*0x25c*/ SoeUtil::String  Unknown0x23c;
/*0x26c*/ SoeUtil::String  Unknown0x24c;
/*0x27c*/ CGaugeWnd*       StandingGaugeTemplate;
/*0x280*/ CTreeView*       Categories;
/*0x284*/ CEditWnd*        SearchNameInput;
/*0x288*/ CButtonWnd*      SearchButton;
/*0x28c*/ CListWnd*        FactionList;
/*0x290*/
};
using EQFACTIONWINDOW [[deprecated]] = CFactionWnd;
using PEQFACTIONWINDOW [[deprecated]] = CFactionWnd *;

//============================================================================
// CFacePick
//============================================================================

// todo: actually CPlayerCustomizationWnd
class [[offsetcomments]] CFacePick : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CFacePick(CXWnd*);
	EQLIB_OBJECT void SetFaceSelectionsFromPlayer();

	// virtual
	EQLIB_OBJECT ~CFacePick();
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT void CycleThroughFHEB(int, int);
	EQLIB_OBJECT void ShowButtonGroup(int, bool);
};

//============================================================================
// CFindItemWnd
//============================================================================

class [[offsetcomments]] CFindItemWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFindItemWnd(CXWnd*);
	virtual ~CFindItemWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void PickupSelectedItem();

/*0x24c*/ CComboWnd*   SearchCombo0;
/*0x250*/ CComboWnd*   SearchCombo1;
/*0x254*/ int          SelIndex;
/*0x258*/ VeArray<ItemGlobalIndex*> gi;
/*0x264*/ int          Unknown0x24c;
/*0x268*/ int          Unknown0x250;
/*0x26c*/ int          Unknown0x254;
/*0x270*/ int          Unknown0x258;
/*0x274*/ int          Unknown0x25c;
/*0x278*/ int          FIW_ClassAnim;
/*0x27c*/ CSidlScreenWnd* FIW_CharacterView;
/*0x280*/ CListWnd*    FIW_ItemList;
/*0x284*/ CButtonWnd*  FIW_QueryButton;
/*0x288*/ CButtonWnd*  FIW_RequestItemButton;
/*0x28c*/ CButtonWnd*  FIW_RequestPreviewButton;
/*0x290*/ CButtonWnd*  FIW_Default;
/*0x294*/ CButtonWnd*  FIW_GrabButton;
/*0x298*/ CButtonWnd*  FIW_HighlightButton;
/*0x29c*/ CButtonWnd*  FIW_DestroyItem;
/*0x2a0*/ CComboWnd*   FIW_ItemLocationCombobox;
/*0x2a4*/ CComboWnd*   FIW_ItemSlotCombobox;
/*0x2a8*/ CComboWnd*   FIW_StatSlotCombobox;
/*0x2ac*/ CComboWnd*   FIW_RaceSlotCombobox;
/*0x2b0*/ CComboWnd*   FIW_ClassSlotCombobox;
/*0x2b4*/ CComboWnd*   FIW_ItemTypeCombobox;
/*0x2b8*/ CComboWnd*   FIW_ItemPrestigeCombobox;
/*0x2bc*/ CComboWnd*   FIW_ItemAugmentCombobox;
/*0x2c0*/ CEditWnd*    FIW_ItemNameInput;
/*0x2c4*/ CEditWnd*    FIW_MaxLevelInput;
/*0x2c8*/ CEditWnd*    FIW_MinLevelInput;
/*0x2cc*/ CEditWnd*    Unknown0x2b4;
/*0x2d0*/
};

//============================================================================
// CFindLocationWnd
//============================================================================

class CFindLocationWnd : public CSidlScreenWnd
{
public:
	// has virtuals, but we get those from CSidlScreenWnd
	EQLIB_OBJECT bool HandleFindBegin();
	EQLIB_OBJECT void HandleFindEnd();
	EQLIB_OBJECT void HandleRowClicked(int Index);
	EQLIB_OBJECT void HandleFindableZoneConnectionsMessage(CUnSerializeBuffer& buf);
};

//============================================================================
// CFileSelectionWnd
//============================================================================

class [[offsetcomments]] CFileSelectionWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS;

public:
	CFileSelectionWnd(CXWnd*);
	virtual ~CFileSelectionWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT CXStr GetSelectedFile(int);
	EQLIB_OBJECT int GetSelectedFileCount();
	EQLIB_OBJECT void Callback(bool);
	EQLIB_OBJECT bool DirectoryEmpty(IShellFolder*, LPITEMIDLIST);
	EQLIB_OBJECT unsigned long GetPath(IShellFolder*, LPITEMIDLIST, bool, CXStr&);
	EQLIB_OBJECT void ClearFileList();
	EQLIB_OBJECT void GoSubdirectory(LPITEMIDLIST);
	EQLIB_OBJECT void MakeFilePath();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateFileList();

	EQLIB_OBJECT int Open(CXWnd* pWnd, int flags);

/*0x24c*/ int             Unknown0x24c;
/*0x250*/ CXWnd*          pWndCaller;
/*0x254*/ CListWnd*       pListFiles;
/*0x258*/ CEditWnd*       pEditEntry;
/*0x25c*/ CComboWnd*      pComboDirHistory;
/*0x260*/ CButtonWnd*     pUpButton;
/*0x264*/ CButtonWnd*     pOKButton;
/*0x268*/ CButtonWnd*     pCancelButton;
/*0x26c*/ int             Flags;
/*0x270*/ CXStr           SelectedFile;
/*0x274*/ IShellFolder*   ShellFolder;
/*0x278*/ CXStr           CurrentDir;
/*0x27c*/ // more
};

//============================================================================
// CFriendsWnd
//============================================================================

class CFriendsWnd : public CSidlScreenWnd
{
public:
	CFriendsWnd(CXWnd*);
	virtual ~CFriendsWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void UpdateFriendsList();
	EQLIB_OBJECT void UpdateIgnoreList();
	EQLIB_OBJECT void AddFriend();
	EQLIB_OBJECT void AddIgnore();
	EQLIB_OBJECT void UpdateButtons();
};

//============================================================================
// CGemsGameWnd
//============================================================================

struct GemsBlock;

class CGemsGameWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGemsGameWnd(CXWnd*);
	virtual ~CGemsGameWnd();

	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void MoveCurBlock(int);
	EQLIB_OBJECT bool BadSpecial(int) const;
	EQLIB_OBJECT bool LegalBlockMove(int, int, int, int, bool);
	EQLIB_OBJECT int GetRndBlockImage();
	EQLIB_OBJECT void ActivateSpecialMode(int);
	EQLIB_OBJECT void AdvanceToNextWave();
	EQLIB_OBJECT void CheckForMatches(int, int);
	EQLIB_OBJECT void CheckForNewHighScore();
	EQLIB_OBJECT void ClearBlock(GemsBlock*);
	EQLIB_OBJECT void ClearHighScores();
	EQLIB_OBJECT void DoMatchScore(int);
	EQLIB_OBJECT void DrawSpellGem(int, const CXRect&, int, bool) const;
	EQLIB_OBJECT void GetNextBlock();
	EQLIB_OBJECT void MakeBlockDrop(int, int, int);
	EQLIB_OBJECT void MarkHigherBlocksFalling(int, int);
	EQLIB_OBJECT void ProcessMatches(int);
	EQLIB_OBJECT void ProcessMoveCurBlock(int);
	EQLIB_OBJECT void ReadHighScores();
	EQLIB_OBJECT void Restart();
	EQLIB_OBJECT void SetNextUpdate();
	EQLIB_OBJECT void SetPause(bool);
	EQLIB_OBJECT void TogglePause();
	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void UpdateDisplay();
	EQLIB_OBJECT void WriteHighScores();
};

//============================================================================
// CGiveWnd
//============================================================================

constexpr int MAX_GIVE_SLOTS = 4;

class [[offsetcomments]] CGiveWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CGiveWnd(CXWnd*);
	virtual ~CGiveWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void UpdateGiveDisplay();

	//----------------------------------------------------------------------------
	// data members

/*0x250*/ CButtonWnd*    pMoneyButton[4];
/*0x260*/ CButtonWnd*    TradeButton;
/*0x264*/ CButtonWnd*    CancelButton;
/*0x268*/ CLabel*        NPCNameLabel;
/*0x26c*/ CInvSlotWnd*   pInvSlotWnd[MAX_GIVE_SLOTS];
/*0x27c*/
};

//============================================================================
// CGroupSearchFiltersWnd
//============================================================================

// todo: not mapped or cleaned up
class CGroupSearchFiltersWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGroupSearchFiltersWnd(CXWnd*);
	EQLIB_OBJECT bool ShouldFilterPlayer(const char*, const char*) const;
	EQLIB_OBJECT bool UseExclusiveSearchMode() const;
	EQLIB_OBJECT void HandleAddDesiredGuild();
	EQLIB_OBJECT void HandleAddExcludedGuild();
	EQLIB_OBJECT void HandleDesiredGuildsSelected();
	EQLIB_OBJECT void HandleExcludeGuildsSelected();
	EQLIB_OBJECT void HandleRemoveAllDesiredGuilds();
	EQLIB_OBJECT void HandleRemoveAllExcludedGuilds();
	EQLIB_OBJECT void HandleRemoveDesiredGuild();
	EQLIB_OBJECT void HandleRemoveExcludedGuild();
	EQLIB_OBJECT void HandleUseFriendsListSelected();
	EQLIB_OBJECT void HandleUseIgnoreListSelected();

	// virtual
	EQLIB_OBJECT ~CGroupSearchFiltersWnd();
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT bool GuildIsInDesiredGuildsList(const char*) const;
	EQLIB_OBJECT bool GuildIsInExcludedGuildsList(const char*) const;
	EQLIB_OBJECT bool Load();
	EQLIB_OBJECT bool NameIsInFriendsList(const char*) const;
	EQLIB_OBJECT bool NameIsInIgnoreList(const char*) const;
	EQLIB_OBJECT bool UseDesiredGuilds() const;
	EQLIB_OBJECT bool UseExcludedGuilds() const;
	EQLIB_OBJECT bool UseFriendsList() const;
	EQLIB_OBJECT bool UseIgnoreList() const;
	EQLIB_OBJECT void ClearUiPointers();
	EQLIB_OBJECT void FetchUiPointers();
	EQLIB_OBJECT void InitPieces();
	EQLIB_OBJECT void Save() const;
};

//============================================================================
// CGroupSearchWnd
//============================================================================

struct LfgGroupResult;
class SListWndSortInfo;
struct LfgPlayerData;
struct LfgPlayerResult;

// todo: not mapped or cleaned up
class CGroupSearchWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CGroupSearchWnd(CXWnd*);
	EQLIB_OBJECT void AddGroupResult(const LfgGroupResult*);
	EQLIB_OBJECT void AddPlayerResult(const LfgPlayerResult*);
	EQLIB_OBJECT void HandleDeselectAllClasses();
	EQLIB_OBJECT void HandleDoubleClickedOnPlayer(const char*);
	EQLIB_OBJECT void HandleGroupInfoPost();
	EQLIB_OBJECT void HandleGroupInfoRemove();
	EQLIB_OBJECT void HandleGroupInfoUpdate();
	EQLIB_OBJECT void HandleGroupMakeupChanged();
	EQLIB_OBJECT void HandleGroupResultColSelected(int);
	EQLIB_OBJECT void HandleGroupResultRowSelected(int);
	EQLIB_OBJECT void HandleNumericSort(SListWndSortInfo*);
	EQLIB_OBJECT void HandleOpenFiltersWindow();
	EQLIB_OBJECT void HandlePlayerInfoPost();
	EQLIB_OBJECT void HandlePlayerInfoRemove();
	EQLIB_OBJECT void HandlePlayerInfoUpdate();
	EQLIB_OBJECT void HandlePlayerResultColSelected(int);
	EQLIB_OBJECT void HandleQueryingForGroups();
	EQLIB_OBJECT void HandleQueryingForPlayers();
	EQLIB_OBJECT void HandleSelectAllClasses();
	EQLIB_OBJECT void ResetGroupList();
	EQLIB_OBJECT void ResetPlayerList();
	EQLIB_OBJECT void SendServerLfgOff();
	EQLIB_OBJECT void SendServerLfgOn();
	EQLIB_OBJECT void SendServerLfpOff();
	EQLIB_OBJECT void SendServerLfpOn();

	// virtual
	EQLIB_OBJECT ~CGroupSearchWnd();
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT bool IsLevelRangeValid(int, int) const;
	EQLIB_OBJECT bool PlayerShouldBeFiltered(const LfgPlayerData*) const;
	EQLIB_OBJECT int CheckIfCurrentLfgInfoIsValid() const;
	EQLIB_OBJECT int CheckIfCurrentLfpInfoIsValid() const;
	EQLIB_OBJECT int GetDesiredClassesFlag() const;
	EQLIB_OBJECT int GetDesiredGroupMaxLevel() const;
	EQLIB_OBJECT int GetDesiredGroupMinLevel() const;
	EQLIB_OBJECT int GetDesiredPlayerMaxLevel() const;
	EQLIB_OBJECT int GetDesiredPlayerMinLevel() const;
	EQLIB_OBJECT int GetEqClassType(int) const;
	EQLIB_OBJECT int GroupInfoPageOnProcessFrame();
	EQLIB_OBJECT int GroupInfoPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int GroupListPageOnProcessFrame();
	EQLIB_OBJECT int GroupListPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int PlayerInfoPageOnProcessFrame();
	EQLIB_OBJECT int PlayerInfoPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int PlayerListPageOnProcessFrame();
	EQLIB_OBJECT int PlayerListPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT void ClearUiPointers();
	EQLIB_OBJECT void FetchUiPointers();
	EQLIB_OBJECT void FilterOutBadWords(const char*, char*) const;
	EQLIB_OBJECT void GetDefaultLfgLevelRange(const PcClient*, int*, int*) const;
	EQLIB_OBJECT void GetDefaultLfpLevelRange(const PcClient*, int*, int*) const;
	EQLIB_OBJECT void InitLfg();
	EQLIB_OBJECT void InitLfp();
	EQLIB_OBJECT void LockQueryButtonAtTime(long);
	EQLIB_OBJECT void PopUpErrorMessage(int) const;
	EQLIB_OBJECT void ShowGroupDetails(LfgGroupResult const*);
	EQLIB_OBJECT void UpdateGroupLabel();
	EQLIB_OBJECT void UpdateLfgPostingStatus();
	EQLIB_OBJECT void UpdateLfpPostingStatus();
	EQLIB_OBJECT void UpdatePlayerLabel();
	EQLIB_OBJECT void UpdateRemainingQueryLockedTime(long);
};

//============================================================================
// CGroupWnd
//============================================================================

// Sep 21 2018
class [[offsetcomments]] CGroupWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CGroupWnd(CXWnd*);
	virtual ~CGroupWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void LoadIniInfo() override;
	virtual void StoreIniInfo() override;

	EQLIB_OBJECT void CreateLocalMenu();
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void SetInvited(bool);
	EQLIB_OBJECT void UpdateContextMenu();

	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateDisplay(int Index, PSPAWNINFO groupmember, COLORREF NameColor, UINT RoleBits);

	//----------------------------------------------------------------------------
	// data members
/*0x248*/ CButtonWnd*        InviteButton;
/*0x24c*/ CButtonWnd*        DisbandButton;
/*0x250*/ CButtonWnd*        FollowButton;
/*0x254*/ CButtonWnd*        DeclineButton;
/*0x258*/ CButtonWnd*        LFGButton;
/*0x25c*/ CGaugeWnd*         HPGauge[6];
/*0x274*/ CGaugeWnd*         PetGauge[6];
/*0x28c*/ CGaugeWnd*         ManaGauge[6];
/*0x2a4*/ CGaugeWnd*         EnduranceGauge[6];
/*0x2bc*/ CLabel*            HPLabel[6];
/*0x2d4*/ CLabel*            HPPercLabel[6];
/*0x2ec*/ CLabel*            ManaLabel[6];
/*0x304*/ CLabel*            ManaPercLabel[6];
/*0x31c*/ CLabel*            EnduranceLabel[6];
/*0x334*/ CLabel*            EndurancePercLabel[6];
/*0x34c*/ COLORREF           HPTextColor[6];
/*0x364*/ CButtonWnd*        GroupTankButton[6];
/*0x37c*/ CButtonWnd*        GroupAssistButton[6];
/*0x394*/ CButtonWnd*        GroupPullerButton[6];
/*0x3ac*/ CButtonWnd*        GroupMarkNPCButton[6];
/*0x3c4*/ CLabel*            AggroPercLabel[6];
/*0x3dc*/ long               Timer;
/*0x3e0*/ CContextMenu*      GroupContextMenu;
/*0x3e4*/ bool               bPetbars;
/*0x3e5*/ bool               bManabars;
/*0x3e6*/ bool               bEndurancebars;
/*0x3e7*/ bool               bAggroPct;
/*0x3e8*/ int                PetBarIndex;
/*0x3ec*/ int                ManaBarIndex;
/*0x3f0*/ int                EnduranceBarIndex;
/*0x3f4*/ int                AggroPctIndex;
/*0x3f8*/ int                RoleSeparatorID;
/*0x3fc*/ int                RoleSelectMenu;
/*0x400*/ int                RoleSelectMenuID;
/*0x404*/ bool               bPlayerInvited;
/*0x408*/
};

//============================================================================
// CGuildMgmtWnd
//============================================================================

// todo: update, some of this is obsolete
struct [[offsetcomments]] GuildMember
{
	// Start of GuildMember
/*0x000*/ GuildMember*       pNext;
/*0x004*/ bool               bOnline;
/*0x005*/ BYTE               Filler0x005[0x3];
/*0x008*/ WORD               ZoneID;
/*0x00a*/ WORD               Instance;
/*0x00c*/ DWORD              PlayerSerial;
/*0x010*/ bool               bMainProfile;
/*0x011*/ bool               bOfflineMode;
/*0x012*/ char               Name[0x40];
/*0x052*/ BYTE               Filler0x52[0x2];
/*0x054*/ int                Level;
/*0x058*/ int                Flags; //1=banker, 2=alt
/*0x05c*/ DWORD              Class;
/*0x060*/ DWORD              Rank; //0=member 1=officer 2=leader
/*0x064*/ char               PlayerHandle[0x20];
/*0x084*/ char               PlayerComments[0x100];
/*0x184*/ DWORD              LastLoginTime;
/*0x188*/ EqGuid             PlayerGuild;//size is 8
/*0x190*/ bool               bGuildShowSprite;
/*0x191*/ bool               bTributeStatus;//active on/off
/*0x192*/ bool               bTrophyStatus;//active on/off
/*0x194*/ int                TributeDonations;
/*0x198*/ DWORD              LastDonation;//timestamp
/*0x19c*/ // end of GuildMember
	// start of GuildMemberClient
/*0x19c*/ char               PublicNote[0x100];
/*0x29c*/ char               PersonalNote[0x100];
/*0x39c*/ bool               bTributeOptIn;
/*0x39d*/ bool               bTrophyTributeOptIn;
/*0x3a0*/
};
using GUILDMEMBERCLIENT [[deprecated]] = GuildMember;
using PGUILDMEMBERCLIENT [[deprecated]] = GuildMember*;
using GUILDMEMBERINFO [[deprecated]] = GuildMember;
using PGUILDMEMBERINFO [[deprecated]] = GuildMember*;
using GuildMember = GuildMember;

// FIXME: Technically part of a HashMap of some kind
struct [[offsetcomments]] GuildNameEntry
{
/*0x00*/ EqGuid          Guild_Guid;
/*0x08*/ char            Name[0x40];
/*0x48*/ EqGuid          Guild_Guid_Copy;
/*0x50*/ GuildNameEntry* pNext;
/*0x54*/ GuildNameEntry* pPrev;
/*0x58*/ GuildNameEntry* pNode1;
/*0x5c*/ GuildNameEntry* pANode2;
/*0x60*/
};

struct [[offsetcomments]] GuildBanner
{
/*0x00*/ int        Type;
/*0x04*/ int        PrimaryFlagPattern;
/*0x08*/ int        SecondaryFlagPattern;
/*0x0c*/ ARGBCOLOR  PrimaryTint;
/*0x10*/ ARGBCOLOR  SecondaryTint;
/*0x14*/ int        TimeRemaining;
/*0x18*/ int        ZoneID;
/*0x1c*/ CVector3   Loc;
/*0x28*/ int        Heading;
/*0x2c*/ int        GracePeriodRemaining;
/*0x30*/ int        ModificationCount;
/*0x34*/ int        TeleportPlantRestriction;
/*0x38*/ __time32_t ModifyDate;
/*0x3c*/
};

enum GuildRankType
{
	GRT_None,
	GRT_Leader,
	GRT_SeniorOfficer,
	GRT_Officer,
	GRT_SeniorMember,
	GRT_Member,
	GRT_JuniorMember,
	GRT_Initiate,
	GRT_Recruit,
};

struct [[offsetcomments]] GuildRank
{
	/*0x00*/ GuildRankType Type;
	/*0x04*/ CXStr         Name;
/*0x08*/ };

template <typename AccessGroupType>
class AccessGroupList
{
};

template <typename Group>
class GuildRankPermissions : public AccessGroupList<Group>
{
};

enum GuildPermissionType
{
	GPT_None,
	GPT_BannerChange,
	GPT_BannerPlant,
	GPT_BannerRemove,
	GPT_DisplayGuildName,
	GPT_ChangePermissions,
	GPT_ChangeRankNames,
	GPT_InviteMember,
	GPT_PromoteMember,
	GPT_DemoteMember,
	GPT_RemoveMember,
	GPT_EditRecruitingSettings,
	GPT_EditPublicNotes,
	GPT_BankDeposit,
	GPT_BankWithdraw,
	GPT_BankView,
	GPT_BankPromote,
	GPT_BankChangeItemPermission,
	GPT_ChangeMOTD,
	GPT_SeeGuildChat,
	GPT_SpeakGuildChat,
	GPT_SendGuildEMail,
	GPT_TributeChangeSettingsForOthers,
	GPT_TributeChangeActiveBenefit,
	GPT_TrophyTributeChangeSettingsForOthers,
	GPT_TrophyTributeChangeActiveBenefit,
	GPT_ChangeAltFlagForOthers,
	GPT_GuildPlotBuy,
	GPT_GuildPlotSell,
	GPT_ModifyTrophies,
	GPT_DemoteSelf,
};

template <typename Groups, int NumGroups, int EveryoneGroup, typename Caps, int Count>
struct [[offsetcomments]] AccessGroup
{
	Groups Grp;
	BitField<Count> Capabilities;
};

class [[offsetcomments]] GuildBase
{
public:
	EQLIB_OBJECT GuildBase();
	EQLIB_OBJECT virtual ~GuildBase();

/*0x008*/ int               NumGuildMembers;
/*0x00c*/ GuildMember*      pFirstGuildMember;
/*0x010*/ EqGuid            GuildGuid;
/*0x018*/ char              Name[0x40];
/*0x058*/ int               CreationDate;
/*0x05c*/ int               Active;
/*0x060*/ int64_t           GuildID;
/*0x068*/ bool              bHasChanged;
/*0x069*/ CHAR              GuildMOTD[0x200];
/*0x269*/ BYTE              Filler0x269[3];
/*0x26c*/ SoeUtil::String   MOTD_Author;
/*0x27c*/ int               TributePoints;
/*0x280*/ BenefitSelection  ActiveTributeBenefits[2];
/*0x290*/ bool              bTributeBenefitsActive;
/*0x291*/ uint8_t           Filler0x291[3];
/*0x294*/ BenefitSelection  ActiveTrophyTributeBenefits[4];
/*0x2b4*/ bool              bTrophyTributeBenefitsActive;
/*0x2b5*/ bool              bRenameFlag;//not sure
/*0x2b6*/ uint8_t           Filler0x2B6[2];
/*0x2b8*/ GuildBanner       Banner;
/*0x2f4*/ TSafeArrayStatic<uint8_t, 0x320> BitFlags;
/*0x614*/ TSafeArrayStatic<uint8_t, 0x320> PrevBitFlags;
/*0x934*/ char              GuildURL[0x200];
/*0xb34*/ char              GuildChannel[0x80];
/*0xbb4*/ ArrayClass<GuildRank*> Ranks;
/*0xbc4*/ GuildRankPermissions<AccessGroup<GuildRankType, 9, 0, GuildPermissionType, 31>>* RankPermissions;
/*0xbc8*/
};

struct [[offsetcomments]] ServerGuildName
{
/*0x00*/ int Unknown0x00;
/*0x04*/ int Unknown0x04;
/*0x08*/ int Unknown0x08;
/*0x0c*/ int Unknown0x0c;
/*0x10*/ int Unknown0x10;
/*0x14*/ int Unknown0x14;
/*0x18*/ int Unknown0x18;
/*0x1c*/ int Unknown0x1c;
/*0x20*/ int Unknown0x20;
/*0x24*/ int Unknown0x24;
/*0x28*/
};

struct guildmotdSet;

class [[offsetcomments]] CGuild : public GuildBase
{
public:
/*0xbc8*/ __time32_t   LastGuildNameRequest;
/*0xbcc*/ HashListSet<GuildNameEntry*, 0xFA> GuildNamesTable;//this is not correct container for sure, todo: figure out what is
//0xFC4 - 0xBCC = 0x3F8 and we learn from 4B0A5C in Apr 13 2020 exe that is the size... push 3F8h
/*0xfc4*/ int          Unknown0xFC4[3];
/*0xfd0*/ int          OnlineCount;//definately correct see 4AF50F in apr 13 2020 - eqmule
/*0xfd4*/ bool         bOnlineOutofSync;
/*0xfd8*/ int          TributeTimer;
/*0xfdc*/ int          TributeCost;
/*0xfe0*/ bool         bTributeCostDirty;
/*0xfe1*/ bool         bTributeActive;
/*0xfe2*/ bool         bTributeBenefitsLocked;
/*0xfe4*/ __time32_t   TrophyTributeTimer;
/*0xfe8*/ int          TrophyTributeCost;
/*0xfec*/ bool         bTrophyTributeCostOutofSync;
/*0xfed*/ bool         bTrophyTributeActive;
/*0xfee*/ bool         bTrophyBenefitsLocked;
/*0xff0*/

	EQLIB_OBJECT CGuild();
	EQLIB_OBJECT virtual ~CGuild();

	EQLIB_OBJECT bool ValidGuildName(int);
	EQLIB_OBJECT char* GetGuildMotd();
	EQLIB_OBJECT char* GetGuildMotdAuthor();
	EQLIB_OBJECT const char* GetGuildName(int64_t, ServerGuildName, int, bool) const;
	inline const char* GetGuildName(int64_t guildId) const
	{
		ServerGuildName data = { 0 };
		return GetGuildName(guildId, data, 0, true);
	}
	EQLIB_OBJECT int64_t GetGuildIndex(char*);
	EQLIB_OBJECT GuildMember* FindMemberByName(const char*);
	EQLIB_OBJECT void DeleteAllMembers();
	EQLIB_OBJECT void DemoteMember(GuildMember*);
	EQLIB_OBJECT void HandleGuildMessage(connection_t*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void SendPublicCommentChange(char*, char*);
	EQLIB_OBJECT void SetGuildMotd(guildmotdSet*);

	// private
	EQLIB_OBJECT void AddGuildMember(GuildMember*);
	EQLIB_OBJECT void ChangeGuildMemberName(char*);
	EQLIB_OBJECT void HandleAddGuildMember(char*, int);
	EQLIB_OBJECT void HandleDeleteGuildResponse(char*);
	EQLIB_OBJECT void HandleGuildInvite(connection_t*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void HandleMemberLevelUpdate(char*);
	EQLIB_OBJECT void HandleRemoveGuildMember(char*, int);
	EQLIB_OBJECT void InitializeFromDump(char*);
	EQLIB_OBJECT void UpdateGuildMemberOnWindow(GuildMember*);
	EQLIB_OBJECT void UpdateMemberStatus(char*);
	EQLIB_OBJECT void UpdatePublicComment(char*);
};


// Size: 0x3d0 (02/18/2004)
class [[offsetcomments]] CGuildMgmtWnd
	: public CSidlScreenWnd
	, public PopDialogHandler
	, public WndEventHandler
	, public CVivoxObserver
{
	FORCE_SYMBOLS

public:
	CGuildMgmtWnd(CXWnd*);
	virtual ~CGuildMgmtWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void AddMember(GuildMember*);
	EQLIB_OBJECT void Clean();
	EQLIB_OBJECT void DumpToFile(char*);
	EQLIB_OBJECT void RemoveMember(GuildMember*);
	EQLIB_OBJECT void RenameMember(char*, char*);
	EQLIB_OBJECT void SetMOTD(char*, char*);
	EQLIB_OBJECT void SetPlayerCount(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListMember(GuildMember*, int);
	EQLIB_OBJECT char* GetPersonalNote(char*);
	EQLIB_OBJECT int FindListMember(GuildMember*);
	EQLIB_OBJECT void CleanAndRefillListWnd(bool);
	EQLIB_OBJECT void CreatePersonalNotesFilename();
	EQLIB_OBJECT void LoadINI();
	EQLIB_OBJECT void LoadPersonalNotes();
	EQLIB_OBJECT void SavePersonalNotes();
	EQLIB_OBJECT void SetPersonalNote(char*, char*);

	//----------------------------------------------------------------------------
	// data members

	// this is all out of date and needs updating
/*0x250*/ // start

/*0x258*/ BYTE         Unknown0x148[0x3c];
/*0x294*/ BYTE         Unknown0x194;
/*0x295*/ BYTE         ShowOffline;              // 01 = show offline box is checked
/*0x296*/ BYTE         Unknown0x196[0x2];

	// This is a pointer to the beginning of a list of pointers, each representing one player in
	// the guild. The number of  pointers depends upon TotalMemberCount.
/*0x298*/ GuildMember** pMember;
/*0x29c*/ DWORD        TotalMemberCount;
/*0x2a0*/ DWORD        Unknown0x1a0;             // 150?
/*0x2a4*/ DWORD        Unknown0x1a4;             // 1?
/*0x2a8*/ DWORD        TotalMemberCountAgain;
/*0x2ac*/ BYTE         Unknown0x1ac[0x1c];
/*0x2c8*/ char         PersonalNotesFilePath[0x40]; // path to personal notes file
/*0x308*/ BYTE         Unknown0x208[0x1c0];      // empty
/*0x4c8*/ DWORD        Unknown0x3c8;             // 1?
/*0x4cc*/ DWORD        Unknown0x3cc;             // some sort of bizaare pointer...
/*0x4d0*/
};
using EQGUILDWINDOW [[deprecated]] = CGuildMgmtWnd;
using PEQGUILDWINDOW [[deprecated]] = CGuildMgmtWnd*;

//============================================================================
// CHelpWnd
//============================================================================

class CHelpWnd : public CSidlScreenWnd
{
public:
	CHelpWnd(CXWnd*);
	virtual ~CHelpWnd();

	virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void SetFile(CXStr);
};

//============================================================================
// CHtmlWnd
//============================================================================

namespace libMozilla {

class Window
{
public:
	EQLIB_OBJECT float getProgress(bool& bIsLoading);
	EQLIB_OBJECT const wchar_t* getStatus() const;
	EQLIB_OBJECT const char* getURI() const;
};

class ICallback
{
public:
	EQLIB_OBJECT virtual void onURIChanged(Window*) = 0;
	EQLIB_OBJECT virtual void onProgressChanged(Window*) = 0;
	EQLIB_OBJECT virtual void onStatusChanged(Window*) = 0;
	EQLIB_OBJECT virtual bool doValidateURI(Window*, const char*) = 0;
};

} // namepsace libMozilla

class [[offsetcomments]] CHtmlComponentWnd
	: public CXWnd
	, public libMozilla::ICallback
	, public CObservable
{
public:
	CHtmlComponentWnd(CXWnd* parent, uint32_t id, CXRect rect, CXStr startURI = "");
	virtual ~CHtmlComponentWnd();

/*0x210*/ libMozilla::Window* m_mozillaWnd;
/*0x214*/
	// more ...
};

class [[offsetcomments]] CHtmlWnd : public CSidlScreenWnd, public TListNode<CHtmlWnd>
{
	FORCE_SYMBOLS

public:
	CHtmlWnd(const char* uri, const char* postData, const char* windowId, bool byPassfilter = false, const char* title = nullptr);
	virtual ~CHtmlWnd();

	EQLIB_OBJECT void SetClientCallbacks(libMozilla::ICallback* cb);
	EQLIB_OBJECT void AddObserver(IObserver* observer);
	EQLIB_OBJECT void RemoveObserver(IObserver* observer);

	const CHtmlWnd* GetNextHtmlWnd() const { return TListNode<CHtmlWnd>::GetNext(); }
	CHtmlWnd* GetNextHtmlWnd() { return TListNode<CHtmlWnd>::GetNext(); }

/*0x254*/ CHtmlComponentWnd*       pHtmlComponentMain;
/*0x258*/ CButtonWnd*              pBackBtn;
/*0x25c*/ CButtonWnd*              pForwardBtn;
/*0x260*/ CGaugeWnd*               pProgressGauge;
/*0x264*/ CLabelWnd*               pStatusLabel;
/*0x268*/ CXStr                    WindowID;
/*0x26c*/
};

class [[offsetcomments]] CWebManager
{
public:
	EQLIB_OBJECT CHtmlWnd* CreateHtmlWnd(const char* uri, const char* windowId, const char* postBuffer = nullptr,
		bool bypassFilter = false, const char* titleOverride = nullptr);

	EQLIB_OBJECT CHtmlWnd* GetHtmlWnd(const char* windowId);

/*0x00*/ TList<CHtmlWnd>             m_htmlWndList;
/*0x08*/
};

//============================================================================
// CHotButtonWnd
//============================================================================

// Actual size 0x1c4 10-9-2003
class CHotButtonWnd : public CSidlScreenWnd, public PopDialogHandler
{
public:
	CHotButtonWnd(CXWnd*);
	virtual ~CHotButtonWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void DoHotButton(int Button, int AllowAutoRightClick, int something);
	EQLIB_OBJECT void DoHotButtonRightClick(int);
	EQLIB_OBJECT void UpdatePage();

	//----------------------------------------------------------------------------
	// data members

	// todo
};

//============================================================================
// CInspectWnd
//============================================================================

class CInspectWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	EQLIB_OBJECT CInspectWnd(CXWnd*);
	EQLIB_OBJECT void PlayerBeingDeleted(PlayerClient*);

	// virtual
	EQLIB_OBJECT ~CInspectWnd();
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT void Deactivate();

	// private
	EQLIB_OBJECT void AcceptInspectText();
	EQLIB_OBJECT void Init();
};

//============================================================================
// CInventoryWnd
//============================================================================

// see ref to pinstCInventoryWnd_x in __GetGaugeValueFromEQ_x
// Oct 28 Beta 2017 see 7BB9C2
class [[offsetcomments]] CInventoryWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler, public IObserver
{
public:
	CInventoryWnd(CXWnd*);
	virtual ~CInventoryWnd();

	virtual int Draw() override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT long GetInventoryQtyFromCoinType(int);
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void DestroyHeld();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void UpdateMoneyDisplay();

	// todo: check me

/*0x254*/ BYTE        Unknown0x0240[0x84];
/*0x2d8*/ int64_t     VitalityCap;
/*0x2e0*/ int         AAVitalityCap;
/*0x2e4*/
};
using INVENTORYWND [[deprecated]] = CInventoryWnd;
using PINVENTORYWND [[deprecated]] = CInventoryWnd*;

//============================================================================
// CInvSlotWnd
//============================================================================

class CInvSlotWnd;

const int MAX_INV_SLOTS = 0x900;

// actual size 0x14 10-12-2010
// I think this is correct:
// see (69FF1E) in eqgame.exe dated 2013 11 13
class [[offsetcomments]] CInvSlot
{
public:
	CInvSlot();
	virtual ~CInvSlot();

	EQLIB_OBJECT bool IllegalBigBank(int);
	EQLIB_OBJECT void DoDrinkEatPoison(EQ_Item*, int);
	EQLIB_OBJECT void HandleLButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleLButtonHeld(const CXPoint&);
	EQLIB_OBJECT void HandleLButtonUp(const CXPoint&, bool);
	EQLIB_OBJECT void HandleLButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUp(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void SetInvSlotWnd(CInvSlotWnd*);
	EQLIB_OBJECT void SetItem(EQ_Item*);
	EQLIB_OBJECT void SliderComplete(int);
	EQLIB_OBJECT void GetItemBase(CONTENTS**);
	EQLIB_OBJECT void UpdateItem();

	//----------------------------------------------------------------------------
	// data members

/*0x04*/ CInvSlotWnd*       pInvSlotWnd;
/*0x08*/ CTextureAnimation* pInvSlotAnimation;
/*0x0c*/ int                Index;                    // InvSlot
/*0x10*/ bool               bEnabled;                 // Valid
/*0x14*/
};
using EQINVSLOT [[deprecated]] = CInvSlot;
using PEQINVSLOT [[deprecated]] = CInvSlot*;

//----------------------------------------------------------------------------
// Size 0x2418 see 534532 in Nov 06 2018 Test
class [[offsetcomments]] CInvSlotMgr
{
public:
	CInvSlotMgr();
	virtual ~CInvSlotMgr();

	EQLIB_OBJECT CInvSlot* CreateInvSlot(CInvSlotWnd*);
	EQLIB_OBJECT CInvSlot* FindInvSlot(int TopSlot, int SubSlot = -1,
		ItemContainerInstance location = eItemContainerPossessions, bool includeLinks = true);
	EQLIB_OBJECT CInvSlot* FindInvSlot(const ItemGlobalIndex& index, bool includeLinks = true)
	{
		return FindInvSlot(index.GetTopSlot(), index.GetIndex().GetSlot(1), index.GetLocation(), includeLinks);
	}

	EQLIB_OBJECT bool MoveItem(const ItemGlobalIndex& from, const ItemGlobalIndex& to, bool bDebugOut, bool CombineIsOk, bool MoveFromIntoToBag = false, bool MoveToIntoFromBag = false);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SelectSlot(CInvSlot*);
	EQLIB_OBJECT void UpdateSlots();

	//----------------------------------------------------------------------------
	// data members

/*0x0004*/ CInvSlot*    SlotArray[MAX_INV_SLOTS]; // size 0x2400 //see 72E00F in Nov 06 2018 Test
/*0x2404*/ int          TotalSlots;
/*0x2408*/ unsigned int LastUpdate;
/*0x240c*/ CInvSlot*    pSelectedItem;
/*0x2410*/ CInvSlot*    pFindSelectedItem;
/*0x2414*/ bool         bToggleBagsOpen;
/*0x2415*/ bool         bToggleBankBagsOpen;
/*0x2418*/
};
using EQINVSLOTMGR [[deprecated]] = CInvSlotMgr;
using PEQINVSLOTMGR [[deprecated]] = CInvSlotMgr*;

//----------------------------------------------------------------------------

// note that Invslot needs to be a short or pickupitem wont work
// CInvSlotWnd_size: 0x2c8 (see 809E6C) in Dec 19 2019 Live
class [[offsetcomments]] CInvSlotWnd : public CButtonWnd
{
	FORCE_SYMBOLS

public:
	CInvSlotWnd(CXWnd* pParent, uint32_t ID, CXRect rect, CTextureAnimation* ptaBackground,
		const ItemGlobalIndex& itemLocation, int ItemOffsetX, int ItemOffsetY);
	virtual ~CInvSlotWnd();

	virtual int Draw() override;
	virtual int DrawTooltip(const CXWnd*) const override;
	virtual int HandleLButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonHeld(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleLButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonDown(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonHeld(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonUp(const CXPoint&, uint32_t) override;
	virtual int HandleRButtonUpAfterHeld(const CXPoint&, uint32_t) override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void SetAttributesFromSidl(CParamScreenPiece*) override;

	EQLIB_OBJECT void SetInvSlot(CInvSlot*);

	//----------------------------------------------------------------------------
	// data members

/*0x298*/ CTextureAnimation* pBackground;
/*0x29c*/ ItemGlobalIndex    ItemLocation;            // WindowType = ItemLocation.Location, InvSlot = ItemLocation.GetTopSlot()
/*0x2a8*/ VePointer<CONTENTS> LinkedItem;              // ItemBasePtr
/*0x2ac*/ int                ItemOffsetX;
/*0x2b0*/ int                ItemOffsetY;
/*0x2b4*/ CTextureAnimation* ptItem;
/*0x2b8*/ int                Quantity;
/*0x2bc*/ bool               bSelected;
/*0x2bd*/ bool               bFindSelected;
/*0x2c0*/ int                RecastLeft;
/*0x2c4*/ bool               bHotButton;
/*0x2c5*/ bool               bInventorySlotLinked;
/*0x2c8*/ CInvSlot*          pInvSlot;
/*0x2cc*/ CTextObjectInterface* pTextObject;
/*0x2d0*/ int                TextFontStyle;
/*0x2d4*/ int                Mode;
/*0x2d8*/ D3DCOLOR           BGTintRollover;
/*0x2dc*/ D3DCOLOR           BGTintNormal;
/*0x2e0*/ long               LastTime;
/*0x2e4*/ int                Unknown0x2cc;
/*0x2e8*/

	// Backwards Compat Macros
	ALT_MEMBER_GETTER_COPY(ItemContainerInstance, ItemLocation.GetLocation(), WindowType);
	ALT_MEMBER_GETTER_COPY(ItemContainerInstance, ItemLocation.GetLocation(), Location);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(0), Slot1);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(0), InvSlot);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(1), Slot2);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(1), BagSlot);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(2), Slot3);
	ALT_MEMBER_GETTER_COPY(short, ItemLocation.GetIndex().GetSlot(2), GlobalSlot);
};
using EQINVSLOTWND [[deprecated]] = CInvSlotWnd;
using PEQINVSLOTWND [[deprecated]] = CInvSlotWnd*;

//============================================================================
// CItemDisplayWnd
//============================================================================

enum ItemDisplayFlags
{
	PREVENT_LINK       = 0x00000001,
	RECYCLE_WINDOW     = 0x00000002,
	FROM_LINK          = 0x00000004,
	FROM_BAZAAR_SEARCH = 0x00000008,
	FROM_BARTER_SEARCH = 0x00000010
};

// CItemDisplayWindow__CItemDisplayWindow_x aItemdisplaywin
// CItemDisplayWindow_size: 0x620 (see 76D012) in Dec 19 2019 Live
class [[offsetcomments]] CItemDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	EQLIB_OBJECT CItemDisplayWnd(CXWnd*);
	EQLIB_OBJECT virtual ~CItemDisplayWnd();

	EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	EQLIB_OBJECT virtual int OnProcessFrame() override;
	EQLIB_OBJECT virtual int WndNotification(CXWnd* pWnd, uint32_t Message, void* pData) override;
	EQLIB_OBJECT virtual bool AboutToShow() override;

	EQLIB_OBJECT CXStr CreateEquipmentStatusString(EQ_Item*);
	EQLIB_OBJECT void SetItem(CONTENTS** pCont, int flags);
	EQLIB_OBJECT void SetItemText(char*);
	EQLIB_OBJECT void SetSpell(int SpellID, bool HasSpellDescr, int);
	EQLIB_OBJECT void UpdateStrings();

	EQLIB_OBJECT CXStr CreateClassString(EQ_Equipment*);
	EQLIB_OBJECT CXStr CreateMealSizeString(EQ_Equipment*);
	EQLIB_OBJECT CXStr CreateModString(EQ_Equipment*, int, int, int*);
	EQLIB_OBJECT CXStr CreateRaceString(EQ_Equipment*);
	EQLIB_OBJECT void GetSizeString(int, char*);
	EQLIB_OBJECT void InsertAugmentRequest(int AugSlot);
	EQLIB_OBJECT void RemoveAugmentRequest(int AugSlot);
	EQLIB_OBJECT void RequestConvertItem();

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x248*/ CStmlWnd*         Description;
/*0x24c*/ CStmlWnd*         Name;
/*0x250*/ CButtonWnd*       IconButton;
/*0x254*/ CStmlWnd*         ItemLore;
/*0x258*/ CTabWnd*          ItemDescriptionTabBox;
/*0x25c*/ CPageWnd*         ItemDescriptionTab;
/*0x260*/ CPageWnd*         ItemLoreTab;
/*0x264*/ CSidlScreenWnd*   pAppearanceSocketScreen;
/*0x268*/ CButtonWnd*       pAppearanceSocketItem;
/*0x26c*/ CButtonWnd*       pAppearanceSocketBuyButton;
/*0x270*/ CStmlWnd*         pAppearanceSocketDescription;
/*0x274*/ CSidlScreenWnd*   pItemSocketScreen[6];
/*0x28c*/ CButtonWnd*       pItemSocketItemButton[6];
/*0x2a4*/ CStmlWnd*         pItemSocketDescription[6];
/*0x2bc*/ CXStr             ItemInfo;                 // this item is placable in yards, guild yards blah blah , This item can be used in tradeskills
/*0x2c0*/ CXStr             WindowTitle;
/*0x2c4*/ CXStr             ItemAdvancedLoreText;
/*0x2c8*/ CXStr             ItemMadeByText;
/*0x2cc*/ CXStr             BackupTabTitle;
/*0x2d0*/ CXStr             SolventText;
/*0x2d4*/ CXStr             ItemInformationText;      // Item Information: Placing this augment into blah blah, this armor can only be used in blah blah
/*0x2d8*/ VePointer<CONTENTS> pItem; // ItemBasePtr
/*0x2dc*/ bool              bActiveItem;
/*0x2dd*/ bool              bItemTextSet;
/*0x2e0*/ CTextureAnimation* BuffIcons;
/*0x2e4*/ CTextureAnimation* DragIcons;
/*0x2e8*/ bool              bTaggable;
/*0x2e9*/ bool              bFailed;
/*0x2ec*/ unsigned int      TabCount;
/*0x2f0*/ CLabel*           ModButtonLabel;
/*0x2f4*/ CLabel*           RewardButtonLabel;
/*0x2f8*/ CStmlWnd*         ConvertStml;
/*0x2fc*/ CLabel*           MadeByLabel;
/*0x300*/ CLabel*           CollectedLabel;
/*0x304*/ CLabel*           ScribedLabel;
/*0x308*/ int               Row;
/*0x30c*/ bool              bAntiTwink;
/*0x310*/ CButtonWnd*       ModButton;
/*0x314*/ CButtonWnd*       RewardButton;
/*0x318*/ CButtonWnd*       PrintRealEstateItems;
/*0x31c*/ CButtonWnd*       ConvertButton;
/*0x320*/ bool              bCollected;
/*0x321*/ bool              bCollectedReceived;
/*0x324*/ int               Unknown0x031c;
/*0x328*/ int               Unknown0x0320;
/*0x32c*/ bool              bScribed;
/*0x32d*/ bool              bScribedReceived;
/*0x32e*/ BYTE              Unknown0x30e[0x2f2];
/*0x620*/ DWORD             Unknown0x600;
/*0x624*/ DWORD             Unknown0x604;
/*0x628*/ DWORD             Unknown0x608;
/*0x62c*/ DWORD             Unknown0x60c;
/*0x630*/ DWORD             Unknown0x610;
/*0x634*/ DWORD             Unknown0x614;
/*0x638*/ DWORD             Unknown0x618;
/*0x63c*/ DWORD             ItemWndIndex;             // 0-5? you can have max 6 windows up I think before it starts overwriting the sixth.
/*0x640*/
};
using EQITEMWINDOW [[deprecated]] = CItemDisplayWnd;
using PEQITEMWINDOW [[deprecated]] = CItemDisplayWnd*;

//============================================================================
// CJournalWnd
//============================================================================

class JournalNPC;

class CJournalCatWnd : public CSidlScreenWnd
{
public:
	CJournalCatWnd(CXWnd*);
	virtual ~CJournalCatWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Clean();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void LoadINI();
	EQLIB_OBJECT void SelectCategory(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void StoreINI();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

class CJournalNPCWnd : public CSidlScreenWnd
{
public:
	CJournalNPCWnd(CXWnd*);
	virtual ~CJournalNPCWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void EnterIntoJournal(char*, float, float, float, char*);
	EQLIB_OBJECT void LoadJournal(int);
	EQLIB_OBJECT void SaveJournal();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateCategories();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void DoBackups(CXStr);
	EQLIB_OBJECT void GetLogState();
	EQLIB_OBJECT void SelectNPCIndex(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void StoreLogState();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

class CJournalTextWnd : public CSidlScreenWnd
{
public:
	CJournalTextWnd(CXWnd*);
	virtual ~CJournalTextWnd();

	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Clear();
	EQLIB_OBJECT void DisplayNPC(JournalNPC*);
	EQLIB_OBJECT void SetSearch(CXStr);
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateCategories();
	EQLIB_OBJECT void BuildList();
	EQLIB_OBJECT void SelectEntryIndex(int);
	EQLIB_OBJECT void SortList(int, bool);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateListWnd(bool);
};

//============================================================================
// CKeyRingWnd
//============================================================================

// size 0x2E0 see 0x550DE3 in 2020-01-19 live
class [[offsetcomments]] CKeyRingWnd : public CSidlScreenWnd,
	public WndEventHandler
{
public:
	EQLIB_OBJECT CKeyRingWnd(CXWnd* parent);
	EQLIB_OBJECT virtual ~CKeyRingWnd();

	EQLIB_OBJECT static int ExecuteRightClick(KeyRingType keyRingType, const VePointer<CONTENTS>& pItem, int index);
};

//============================================================================
// CLargeDialogWnd
//============================================================================

class CLargeDialogWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT void Open(bool bYesNoEnabled, CXStr DialogText, unsigned long closeTimer /* 0 means never */,
		CXStr DialogTitle, bool bShowVolumeControls, CXStr YesText, CXStr NoText);
};

//============================================================================
// CLootWnd
//============================================================================

// CLootWnd__CLootWnd aLootwnd
// CLootWnd_size: 0x390 (see 550C06) in Dec 19 2019 Live
class [[offsetcomments]] CLootWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CLootWnd(CXWnd*);
	virtual ~CLootWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void AddContainerToLootArray(EQ_Item*);
	EQLIB_OBJECT void AddEquipmentToLootArray(EQ_Item*);
	EQLIB_OBJECT void AddNoteToLootArray(EQ_Item*);
	EQLIB_OBJECT void Deactivate(bool);
	EQLIB_OBJECT void LootAll(bool close);
	EQLIB_OBJECT void RequestLootSlot(int Slot, bool bAutoInventory);
	EQLIB_OBJECT void SlotLooted(int);
	EQLIB_OBJECT void FinalizeLoot();

	//----------------------------------------------------------------------------
	// data members

	// todo: most of this is wrong
/*0x250*/ BYTE              Unknown0x240[0x94];
/*0x2e4*/ DWORD             NumOfSlots;
/*0x2e8*/ BYTE              Unknown0x02e0[0x4];
/*0x2ec*/ INVENTORYARRAY*   pInventoryArray;
/*0x2f0*/ DWORD             Size;
/*0x2f4*/ DWORD             NumOfSlots3;
/*0x2f8*/ BYTE              Unknown0x2e8[0x8];
/*0x300*/ BYTE              Unknown0x2f0;
/*0x301*/ BYTE              Unknown0x2f1;
/*0x302*/ BYTE              Unknown0x2f2;
/*0x303*/ BYTE              Unknown0x2f3;
/*0x304*/ CXWnd*            LootInvWnd;
/*0x308*/ CInvSlotWnd*      LootSlotWnd[0x22];
/*0x390*/ CLabel*           LW_CorpseName;
/*0x394*/ CButtonWnd*       DoneButton;
/*0x398*/ CButtonWnd*       BroadcastButton;
/*0x39c*/ CButtonWnd*       LootAllButton;
/*0x3a0*/ BYTE              Unknown0x390[0x10];
/*0x3b0*/
};
using EQLOOTWINDOW [[deprecated]] = CLootWnd;
using PEQLOOTWINDOW [[deprecated]] = CLootWnd*;

//============================================================================
// CMapViewWnd
//============================================================================

// Map Window sizeof() = 0x38
struct [[offsetcomments]] MAPLABEL
{
/*0x00*/ uint32_t      LabelId;
/*0x04*/ MAPLABEL*     pNext;
/*0x08*/ MAPLABEL*     pPrev;
/*0x0c*/ CVector3      Location;
/*0x18*/ ARGBCOLOR     Color;
/*0x1c*/ int           Size;                     // 1-3;
/*0x20*/ char*         Label;
/*0x24*/ int           Layer;                    // 0-3;
/*0x28*/ int           Width;
/*0x2c*/ int           Height;
/*0x30*/ int           OffsetX;
/*0x34*/ int           OffsetY;
/*0x38*/
};
using PMAPLABEL = MAPLABEL *;

// sizeof() = 0x28
struct [[offsetcomments]] MAPLINE
{
/*0x00*/ MAPLINE*      pNext;
/*0x04*/ MAPLINE*      pPrev;
/*0x08*/ CVector3      Start;
/*0x14*/ CVector3      End;
/*0x20*/ ARGBCOLOR     Color;
/*0x24*/ int           Layer;                    // 0-3;
/*0x28*/
};
using PMAPLINE = MAPLINE *;

// pLines address = 0x254 + 0x035c = 0x05b0 (address of pMapViewMapVfTable)
// MapViewMap_size: 0x628 - 0x358 = 0x2d0 (see 543ADA) in Aug 15 2019 Live
class [[offsetcomments]] MapViewMap : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	// constructor / destructor
	MapViewMap();
	virtual ~MapViewMap();

	// virtual functions
	EQLIB_OBJECT virtual int PostDraw() override;
	EQLIB_OBJECT virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	EQLIB_OBJECT virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) override;

	// methods
	EQLIB_OBJECT void Clear();
	EQLIB_OBJECT void SaveEx(char*, int);
	EQLIB_OBJECT void SetZoom(float);
	EQLIB_OBJECT void GetWorldCoordinates(CVector3&);

	//EQLIB_OBJECT bool DrawClippedLine(CVector3*, RGB, CXRect);
	//EQLIB_OBJECT bool IsLayerVisible(int);
	//EQLIB_OBJECT bool LoadEx(char*, int);
	//EQLIB_OBJECT bool PointInMapViewArea(CXPoint, CXRect);
	//EQLIB_OBJECT int GetMaxZ();
	//EQLIB_OBJECT int GetMinZ();
	//EQLIB_OBJECT unsigned long GetCurrentColor();
	//EQLIB_OBJECT unsigned long GetMarkedLineColor();
	//EQLIB_OBJECT void AddLabel(float, float, float, unsigned long, int, char*);
	//EQLIB_OBJECT void AddPoint(float, float, float);
	//EQLIB_OBJECT void CalcLabelRenderOffsets(CXRect);
	//EQLIB_OBJECT void ClearActiveLayer();
	//EQLIB_OBJECT void Draw(CXRect);
	//EQLIB_OBJECT void EndLine(float, float, float);
	//EQLIB_OBJECT void JoinLinesAtIntersect(bool);
	//EQLIB_OBJECT void Load(char*);
	//EQLIB_OBJECT void MoveLabel(MapViewLabel*, float, float, float);
	//EQLIB_OBJECT void PreCalcRenderValues();
	//EQLIB_OBJECT void RecalcLabelExtents(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLabel(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLabel();
	//EQLIB_OBJECT void RemoveLine(MapViewLabel*);
	//EQLIB_OBJECT void RemoveLine();
	//EQLIB_OBJECT void Save(char*);
	//EQLIB_OBJECT void SetCurrentColor(unsigned long);
	//EQLIB_OBJECT void SetMarkedLine(MapViewLabel*);
	//EQLIB_OBJECT void SetMarkedLineColor(unsigned long);
	//EQLIB_OBJECT void SetZoneExtents(int, int, int, int);
	//EQLIB_OBJECT void StartLine(float, float, float);
	//EQLIB_OBJECT void TransformPoint(CVector3*);

/*0x248*/ float              mapViewMinX;
/*0x24c*/ float              mapViewMinY;
/*0x250*/ float              mapViewMaxX;
/*0x254*/ float              mapViewMaxY;
/*0x258*/ int                panOffsetX;
/*0x25c*/ int                panOffsetY;
/*0x260*/ float              lineOffsetX;
/*0x264*/ float              lineOffsetY;
/*0x268*/ float              scaleDiffX;
/*0x26c*/ float              scaleDiffY;
/*0x270*/ float              mapViewScaleX;
/*0x274*/ float              mapViewScaleY;
/*0x278*/ MAPLINE*           pLines;
/*0x27c*/ MAPLABEL*          pLabels;
/*0x280*/ uint32_t           nextLabelId;
/*0x284*/ bool               lineActive;
/*0x285*/ uint8_t            filler[0x73]; // more members, need to map it out.
/*0x2f8*/

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

// CMapViewWnd__CMapViewWnd_x
// CMapViewWnd_size: 0x638 (see 55033A) in Dec 19 2019 Live
class [[offsetcomments]] CMapViewWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	// constructor / destructor
	EQLIB_OBJECT CMapViewWnd(CXWnd*);
	EQLIB_OBJECT virtual ~CMapViewWnd();

	// virtual functions
	virtual bool AboutToShow() override;
	virtual bool AboutToHide() override;
	virtual int OnShow() override;
	virtual int OnMove(const CXRect&) override;
	virtual int OnProcessFrame() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;
	virtual void OnWndNotification() override;
	virtual void LoadIniInfo() override;
	virtual void StoreIniInfo() override;

	// functions
	EQLIB_OBJECT void ActivateAutoMapping();
	EQLIB_OBJECT void DeactivateAutoMapping();
	EQLIB_OBJECT bool IsMappingEnabled();

	EQLIB_OBJECT void SetCurrentZone(EQZoneIndex, CVector3* v3Min, CVector3* v3Max, bool);

	// these are almost all the controls belonging to the CMapViewWnd
/*0x24c*/ int         ZoneId;
/*0x250*/ bool        bAutoMapping;
/*0x254*/ CButtonWnd* btnPanLeft;
/*0x258*/ CButtonWnd* btnPanRight;
/*0x25c*/ CButtonWnd* btnPanUp;
/*0x260*/ CButtonWnd* btnPanDown;
/*0x264*/ CButtonWnd* btnPanReset;
/*0x268*/ CButtonWnd* btnZoomIn;
/*0x26c*/ CButtonWnd* btnZoomOut;
/*0x270*/ CButtonWnd* btnShowGroup;
/*0x274*/ CButtonWnd* btnFind;
/*0x278*/ CButtonWnd* btnEndFind;
/*0x27c*/ CButtonWnd* btnFindAutoZoom;
/*0x280*/ CButtonWnd* btnMapZoneGuide;
/*0x284*/ CButtonWnd* btnToolbar;
/*0x288*/ char        szZoneName[0x80];
/*0x308*/ CButtonWnd* btntoggleLabels;
/*0x30c*/ CEditWnd*   editMinZ;
/*0x310*/ CEditWnd*   editMaxZ;
/*0x314*/ CButtonWnd* btnZFilter;
/*0x318*/ CButtonWnd* btnLayer0;
/*0x31c*/ CButtonWnd* btnLayer1;
/*0x320*/ CButtonWnd* btnLayer2;
/*0x324*/ CButtonWnd* btnLayer3;
/*0x328*/ CButtonWnd* btnLayer1Active;
/*0x32c*/ CButtonWnd* btnLayer2Active;
/*0x330*/ CButtonWnd* btnLayer3Active;
/*0x334*/ CButtonWnd* btnLoadCurrent;
/*0x338*/ CPageWnd*   pageAtlas;
/*0x33c*/ CPageWnd*   pageMap;
/*0x340*/ CTabWnd*    tabWnd;
/*0x344*/ CXWnd*      MapRenderArea;
/*0x348*/ CComboWnd*  MapsDirSelect;
/*0x34c*/ CXWnd*      AtlasRenderArea;
/*0x350*/ CAtlas*     AtlasWnd;
/*0x354*/ CComboWnd*  AtlasDirSelect;
/*0x358*/ CButtonWnd* btnAtlasZoneGuide;
/*0x35c*/ CButtonWnd* btnMapIcon;
/*0x360*/ CEditWnd*   editSearchBox;
/*0x364*/ CButtonWnd* btnSearch;
/*0x368*/ CButtonWnd* btnSearchClear;
/*0x36c*/ CListWnd*   listSearch;
/*0x370*/ CXWnd*      wndSearchLayout;
/*0x374*/ CButtonWnd* btnSearchHide;
/*0x378*/ CXWnd*      wndSpacer;
/*0x37c*/ bool        bEditing;
/*0x380*/ MapViewMap  MapView;                            // a window component owned by CMapViewWnd.
/*0x678*/
	// alias the stupid
	__declspec(property(get = getLines)) PMAPLINE pLines;
	__declspec(property(get = getLabels)) PMAPLABEL pLabels;

	ALT_MEMBER_GETTER_ARRAY(char, 0x80, szZoneName, shortzonename);

private:
	PMAPLINE getLines() { return MapView.pLines; }
	PMAPLABEL getLabels() { return MapView.pLabels; }
};

using EQMAPWINDOW [[deprecated]] = CMapViewWnd;
using PEQMAPWINDOW [[deprecated]] = CMapViewWnd *;

//============================================================================
// CMerchantWnd
//============================================================================

enum eMerchantServices
{
	Regular,
	Recovery,
	Mail,
	ServiceCount
};

struct [[offsetcomments]] CONTENTDATA
{
/*0x00*/ CONTENTS*     pCont;
/*0x04*/ int           Unknown;
/*0x08*/
};

struct [[offsetcomments]] CONTENTSARRAY
{
	FORCE_SYMBOLS;

/*0x00*/ struct CONTENTDATA Array[1];
/*0x08*/
};
using PCONTENTSARRAY [[deprecated]] = CONTENTSARRAY *;

// todo: finish mapping this and verify

#if 1
class [[offsetcomments]] MerchantPageHandler : public VeBaseReferenceCount
{
public:
/*0x08*/ CMerchantWnd*   pParent;
/*0x0c*/ int             MaxItems;
/*0x10*/ int             LastIndex;
/*0x14*/ CListWnd*       ItemsList;
/*0x18*/ CPageWnd*       PurchasePage;
/*0x1c*/ bool            bListNeedsRefresh;
/*0x20*/ SoeUtil::Array<CONTENTDATA> ItemContainer;
/*0x30*/ int             Unknown0x40;
/*0x34*/ int             Unknown0x44;
/*0x38*/ int             Unknown0x48;
/*0x3c*/ int             Unknown0x4c;
/*0x40*/ int             Unknown0x50;
/*0x44*/ int             Unknown0x54;
/*0x48*/ int             Unknown0x58;
/*0x4c*/ int             Unknown0x5c;
/*0x50*/ int             Unknown0x60;
/*0x54*/ int             Unknown0x64;
/*0x58*/ int             Unknown0x68;
/*0x5c*/ int             Unknown0x6c;
/*0x60*/ int             Unknown0x70;
/*0x64*/ int             Unknown0x74;
/*0x68*/ int             Unknown0x78;
/*0x6c*/ int             Unknown0x7c;
/*0x70*/ int             Unknown0x80;
/*0x74*/

	// offset comments indicate vtable offset
	/*0x0c*/ EQLIB_OBJECT virtual void Unknownv0x08();
	/*0x0c*/ EQLIB_OBJECT virtual void Unknownv0x0c();
	/*0x10*/ EQLIB_OBJECT virtual void Unknownv0x10();
	/*0x14*/ EQLIB_OBJECT virtual void Unknownv0x14();
	/*0x18*/ EQLIB_OBJECT virtual void DestroyItemByUniqueId(int64_t UniqueID);
	/*0x1c*/ EQLIB_OBJECT virtual void DestroyItemByItemGuid(const EqItemGuid& ItemGuid);
	/*0x20*/ EQLIB_OBJECT virtual bool AddItemToArray(const VePointer<CONTENTS>& pSentItem);
	/*0x24*/ EQLIB_OBJECT virtual int Sort(SListWndSortInfo* SortInfo);
	/*0x28*/ EQLIB_OBJECT virtual void UpdateList();
	/*0x2c*/ EQLIB_OBJECT virtual int DisplayBuyOrSellPrice(const VePointer<CONTENTS>& pItem, bool bBuy) const;
	/*0x30*/ EQLIB_OBJECT virtual CXStr GetPriceString(int Price) const;
	/*0x34*/ EQLIB_OBJECT virtual void UpdateControls();
	/*0x38*/ EQLIB_OBJECT virtual bool RequestGetItem(int Qty);
	/*0x3c*/ EQLIB_OBJECT virtual void RequestPutItem(int Qty);
	/*0x40*/ EQLIB_OBJECT virtual bool CanSelectSlot(const ItemGlobalIndex& Location) const;
	/*0x44*/ EQLIB_OBJECT virtual void DisablePageSpecificButtons();
	/*0x48*/ EQLIB_OBJECT virtual eMerchantServices GetHandlerType() const;
	/*0x4c*/ EQLIB_OBJECT virtual void CXWnd__OnShowANDPostDraw() const;
	/*0x50*/ EQLIB_OBJECT virtual void Unknownv0x50() const;
	/*0x54*/ EQLIB_OBJECT virtual void Unknownv0x54() const;
	/*0x58*/ EQLIB_OBJECT virtual void Unknownv0x58() const;
};

class [[offsetcomments]] PurchasePageHandler : public MerchantPageHandler
{
	FORCE_SYMBOLS;

public:
/*0x74*/ bool bShowAllItems;
/*0x78*/ int Unknown0x88;
/*0x7c*/ int Unknown0x8c;
/*0x80*/ int Unknown0x90;
/*0x84*/ int Unknown0x94;
/*0x88*/ int Unknown0x98;
/*0x8c*/ int Unknown0x9c;
/*0x90*/ int Unknown0xa0;
/*0x94*/ int Unknown0xa4;
/*0x98*/

	EQLIB_OBJECT bool RequestGetItem(int);
	EQLIB_OBJECT void RequestPutItem(int);
};
#endif

struct CONTENTSARRAY;
struct sell_msg;

// this is actually PurchasePageHandler?
struct [[offsetcomments]] merchdata
{
	FORCE_SYMBOLS;

/*0x00*/ void* vftable;                  // VeBaseReferenceCount
/*0x04*/ BYTE          Unknown0x4[0x8];
/*0x0c*/ DWORD         MerchSlots;
/*0x10*/ DWORD         SelectedListItem;
/*0x14*/ DWORD         Unknown0x14[4];
/*0x24*/ CONTENTSARRAY* pMerchArray;
/*0x28*/ DWORD         MerchMaxSlots;
/*0x2c*/
};

struct [[offsetcomments]] merch_other
{
	FORCE_SYMBOLS;

/*0x00*/ merchdata* pMerchData;          // purchase page
/*0x04*/ void* other;                    // buyback page
/*0x08*/ void* other2;                   // mail page
/*0x0c*/
};

enum MerchantPages
{
	RegularMerchantPage,
	BuybackMerchantPage,
	MailMerchantPage,

	MaxMerchantPages
};

// CMerchantWnd__CMerchantWnd_x (aMerchantwnd)
// CMerchantWnd_size: 0x440 (see 550D62) in Dec 19 2019 Live
class [[offsetcomments]] CMerchantWnd : public CSidlScreenWnd, public WndEventHandler, PopDialogHandler
{
	FORCE_SYMBOLS

public:

	// TODO: This structure needs to be verified
	// TODO: add aliases
#if 0
/*0x240*/ BYTE        Unknown0x240[0x8];
/*0x248*/ merch_other* pMerchOther;             // found in CMerchantWnd__CMerchantWnd
/*0x24c*/ BYTE        Unknown0x24c[0x8];
/*0x254*/ float       Markup;                   // found in CMerchantWnd__DisplayBuyOrSellPrice_x
/*0x258*/ BYTE        Unknown0x258[0xc];
/*0x264*/ DWORD       SelectedSlotID;
/*0x268*/ BYTE        Unknown0x268[0x1e8];
/*0x458*/
#else
/*0x250*/ uint32_t     NextRefreshTime;
/*0x254*/ bool         bInventoryWasActive;
/*0x258*/ VeArray<VePointer<MerchantPageHandler>> PageHandlers;
/*0x264*/ float        MerchantGreed;
/*0x268*/ ItemGlobalIndex ItemLocation;
/*0x274*/ BYTE         Unknown0x254[0x8];
/*0x27c*/ VePointer<CONTENTS> pSelectedItem;
/*0x280*/ __time32_t   MailExpireTime;
/*0x284*/ bool         bAutoRetrieveingMail;
/*0x285*/ BYTE         Unknown0x268[0x10];
/*0x298*/ char*        Labels[0xc];
/*0x2c8*/ CEditWnd*    SearchEdit;
/*0x2cc*/ CButtonWnd*  SearchButton;
/*0x2d0*/ CLabel*      MerchantNameLabel;
/*0x2d4*/ CLabel*      SelectedItemLabel;
/*0x2d8*/ CLabel*      SelectedPriceLabel;
/*0x2dc*/ CButtonWnd*  InspectButton;
/*0x2e0*/ CButtonWnd*  PreviewButton;
/*0x2e4*/ CButtonWnd*  SelectedItemButton;
/*0x2e8*/ CButtonWnd*  BuyButton;
/*0x2ec*/ CButtonWnd*  BuyMarketPlaceButton;
/*0x2f0*/ CButtonWnd*  SellButton;
/*0x2f4*/ CButtonWnd*  RecoverButton;
/*0x2f8*/ CButtonWnd*  RetrieveButton;
/*0x2fc*/ CButtonWnd*  RetrieveAllButton;
/*0x300*/ CButtonWnd*  SendButton;
/*0x304*/ CButtonWnd*  AdventureButton;
/*0x308*/ CLabel*      SendToLabel;
/*0x30c*/ CEditWnd*    SendToEdit;
/*0x310*/ CLabel*      NoteLabel;
/*0x314*/ CEditWnd*    NoteEdit;
/*0x318*/ CButtonWnd*  ClearNoteButton;
/*0x31c*/ CListWnd*    ItemsList;
/*0x320*/ CListWnd*    ItemsRecoveryList;
/*0x324*/ CListWnd*    ItemsMailList;
/*0x328*/ CButtonWnd*  DoneButton;
/*0x32c*/ CPageWnd*    PurchasePage;
/*0x330*/ CPageWnd*    RecoveryPage;
/*0x334*/ CPageWnd*    MailPage;
/*0x338*/ CTabWnd*     TabWindow;
/*0x33c*/ CButtonWnd*  UsableButton;
/*0x340*/ CLabel*      CurrentCurrencyLabel;
/*0x344*/ int          Unknown0x32c;
/*0x348*/ int          Unknown0x330;
/*0x34c*/ int          Unknown0x334;
/*0x350*/ int          Unknown0x338;
/*0x354*/ int          Unknown0x33C;
/*0x358*/ int          Guk_Currency;
/*0x35c*/ uint8_t      Unknown0x340[0x108];
/*0x464*/
#endif

	CMerchantWnd(CXWnd*);
	virtual ~CMerchantWnd();

	EQLIB_OBJECT void AddContainerToMercArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToMercArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToMercArray(EQ_Note*);
	EQLIB_OBJECT void ClearMerchantSlot(int);
	EQLIB_OBJECT void FinishBuyingItem(sell_msg*);
	EQLIB_OBJECT void FinishSellingItem(sell_msg*);
	EQLIB_OBJECT int SelectBuySellSlot(const ItemGlobalIndex&, int ListIndex = -1);
	EQLIB_OBJECT void DisplayBuyOrSellPrice(bool, EQ_Item*);
	EQLIB_OBJECT void HandleBuy(int);
	EQLIB_OBJECT void HandleSell(int);
	EQLIB_OBJECT void UpdateBuySellButtons();
};
using EQMERCHWINDOW [[deprecated]] = CMerchantWnd;
using PEQMERCHWINDOW [[deprecated]] = CMerchantWnd *;

//============================================================================
// CMusicPlayerWnd
//============================================================================

class CMusicPlayerWnd : public CSidlScreenWnd
{
public:
	CMusicPlayerWnd(CXWnd*);
	virtual ~CMusicPlayerWnd();

	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void AutoStart();
	EQLIB_OBJECT void UpdateButtons();
};

//============================================================================
// CNoteWnd
//============================================================================

class CNoteWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CNoteWnd(CXWnd*);
	EQLIB_OBJECT ~CNoteWnd();

	EQLIB_OBJECT bool CheckNote(EQ_Note*);
	EQLIB_OBJECT void SetNote(char*);
};

//============================================================================
// COptionsWnd
//============================================================================

struct [[offsetcomments]] KeyboardAssignmentData
{
/*0x00*/ CXStr Description;
/*0x04*/ int nAssignmentNumber;
/*0x08*/
};
using EQKBASSIGN [[deprecated]] = KeyboardAssignmentData;
using PEQKBASSIGN [[deprecated]] = KeyboardAssignmentData*;

// size 0x904 3-10-2004
class [[offsetcomments]] COptionsWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	COptionsWnd(CXWnd*);
	virtual ~COptionsWnd();

	EQLIB_OBJECT void RefreshCurrentKeyboardAssignmentList();
	EQLIB_OBJECT void ResetKeysToDefault();
	EQLIB_OBJECT void RestoreDefaultColors();
	EQLIB_OBJECT int ChatPageOnProcessFrame();
	EQLIB_OBJECT int ChatPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int ColorPageOnProcessFrame();
	EQLIB_OBJECT int ColorPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int DisplayPageOnProcessFrame();
	EQLIB_OBJECT int DisplayPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int GeneralPageOnProcessFrame();
	EQLIB_OBJECT int GeneralPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int KeyboardPageDeactivate();
	EQLIB_OBJECT int KeyboardPageHandleKeyboardMsg(uint32_t, uint32_t, bool);
	EQLIB_OBJECT int KeyboardPageOnProcessFrame();
	EQLIB_OBJECT int KeyboardPageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int MousePageOnProcessFrame();
	EQLIB_OBJECT int MousePageWndNotification(CXWnd*, uint32_t, void*);
	EQLIB_OBJECT int RedirectDeactivateTo(CPageWnd*);
	EQLIB_OBJECT int RedirectHandleKeyboardMsgTo(CPageWnd*, uint32_t, uint32_t, bool);
	EQLIB_OBJECT int RedirectOnProcessFrameTo(CPageWnd*);
	EQLIB_OBJECT int RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*);
	EQLIB_OBJECT void AddKeyboardAssignment(int, int, int);
	EQLIB_OBJECT void InitKeyboardAssignments();
	EQLIB_OBJECT void InitKeyboardPage();
	EQLIB_OBJECT void KeyboardPageCancelKeypressAssignment();
	EQLIB_OBJECT void SetBagOptions(int, int);
	EQLIB_OBJECT void SyncChatPage();
	EQLIB_OBJECT void SyncColorPage();
	EQLIB_OBJECT void SyncDisplayPage();
	EQLIB_OBJECT void SyncGeneralPage();
	EQLIB_OBJECT void SyncMousePage();
	EQLIB_OBJECT void FillChatFilterList();

	//----------------------------------------------------------------------------
	// data members

	// this is incorrect and needs to be updated
/*0x228*/ KeyboardAssignmentData   Binds[0xA1];
/*0x730*/
/*0x904*/
};

using EQOPTIONSWINDOW [[deprecated]] = COptionsWnd;
using PEQOPTIONSWINDOW [[deprecated]] = COptionsWnd*;

//============================================================================
// CPetInfoWnd
//============================================================================

// CPetInfoWindow__CPetInfoWindow aPetinfowindow
// CPetInfoWindow_size: 0x8c0 (see 54FD91) in Dec 19 2019 Live
class [[offsetcomments]] CPetInfoWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPetInfoWnd(CXWnd*);
	virtual ~CPetInfoWnd();

	EQLIB_OBJECT CButtonWnd* GetButton(int);
	EQLIB_OBJECT void SetShowOnSummon(bool);
	EQLIB_OBJECT void Update();

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ uint8_t            Unknown0x23c[0x4];
/*0x250*/ CButtonWnd*        pButton[0xe];             // there are 14 buttons on the petinfowin with text that can be set to attack,none,back and so on, these are those...
/*0x288*/ uint8_t            Unknown0x278[0x8];
/*0x290*/ CButtonWnd*        pAttackButton;
/*0x294*/ CButtonWnd*        pQAttackButton;
/*0x298*/ CButtonWnd*        pFollowButton;
/*0x29c*/ CButtonWnd*        pGuardButton;
/*0x2a0*/ CButtonWnd*        pSitButton;
/*0x2a4*/ CButtonWnd*        pStopButton;
/*0x2a8*/ uint8_t            Unknown0x298[0x174];
/*0x41c*/ CButtonWnd*        pWnd[NUM_BUFF_SLOTS];     // buff buttons
/*0x5a0*/ int                Buff[NUM_BUFF_SLOTS];     // Spell ID# of each buff -- 97 total
/*0x724*/ uint8_t            Unknown0x714[0x20];
/*0x744*/ unsigned int       PetBuffTimer[NUM_BUFF_SLOTS]; // duration until buff fades, in thousands of a second
/*0x8c8*/ uint8_t            Unknown0x8b8[0xc];
/*0x8d4*/ bool               bPetButtonsDirty;
/*0x8d5*/ bool               Sit;
/*0x8d6*/ bool               Stop;
/*0x8d7*/ bool               ReGroup;
/*0x8d8*/ bool               Follow;
/*0x8d9*/ bool               Guard;
/*0x8da*/ bool               Taunt;
/*0x8db*/ bool               Hold;
/*0x8dc*/ bool               GHold;
/*0x8dd*/ bool               Focus;
/*0x8e0*/
};
using EQPETINFOWINDOW [[deprecated]] = CPetInfoWnd;
using PEQPETINFOWINDOW [[deprecated]] = CPetInfoWnd *;

//============================================================================
// CPlayerNotesWnd
//============================================================================

class CPlayerNotesWnd : public CSidlScreenWnd
{
public:
	CPlayerNotesWnd(CXWnd*);
	virtual ~CPlayerNotesWnd();

	EQLIB_OBJECT void AppendText(char*);
	EQLIB_OBJECT void SaveNotes();
};

//============================================================================
// CPlayerWnd
//============================================================================

enum ECombatState
{
	eCombatState_Combat,
	eCombatState_Debuff,
	eCombatState_Timer,
	eCombatState_Standing,
	eCombatState_Regen,
};

// CPlayerWindow__CPlayerWindow aPlayerwindow
// CPlayerWindow_size: 0x2e0 (see 55079E) in Dec 19 2019 Live
class [[offsetcomments]] CPlayerWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPlayerWnd(CXWnd*);
	virtual ~CPlayerWnd();

	EQLIB_OBJECT void CreateLocalMenu();
	EQLIB_OBJECT void UpdateContextMenu();

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ uint8_t            Unknown0x0240[0xb0];
/*0x2fc*/ ECombatState       CombatState;                       // right above "A_PWCSInCombat"
/*0x300*/
};
using CPLAYERWND [[deprecated]] = CPlayerWnd;
using PCPLAYERWND [[deprecated]] = CPlayerWnd*;

//============================================================================
// CPotionBeltWnd
//============================================================================

class CPotionBeltWnd : public CSidlScreenWnd
{
public:
	CPotionBeltWnd(CXWnd*);
	virtual ~CPotionBeltWnd();
};


//============================================================================
// CPointMerchantWnd
//============================================================================

struct [[offsetcomments]] PointMerchantItem
{
/*0x00*/ char          ItemName[0x40];
/*0x40*/ int           ItemID;
/*0x44*/ unsigned int  Price;
/*0x48*/ int           ThemeID;
/*0x4c*/ int           IsStackable;
/*0x50*/ int           IsLore;
/*0x54*/ int           RaceMask;
/*0x58*/ int           ClassMask;
/*0x5c*/ bool          bCanUse;
/*0x60*/
};

class PointMerchantInterface;

class [[offsetcomments]] PointMerchantWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	PointMerchantWnd(CXWnd*);
	virtual ~PointMerchantWnd();

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x250*/ int                Unknown0x008;
/*0x254*/ int                NumItems;
/*0x258*/ bool               HdrItemName;
/*0x259*/ bool               HdrTheme;
/*0x25a*/ bool               HdrPrice;
/*0x25b*/ char               OriginalPointsLabel[0x40];
/*0x29c*/ CLabel* MerchantNameLabel;
/*0x2a0*/ CListWnd* ItemList;
/*0x2a4*/ CListWnd* PointList;
/*0x2a8*/ CButtonWnd* EquipButton;
/*0x2ac*/ CButtonWnd* PurchaseButton;
/*0x2b0*/ CButtonWnd* SellButton;
/*0x2b4*/ CButtonWnd* DoneButton;
/*0x2b8*/ CLabel* PointsAvailableValue;
/*0x2bc*/ CLabel* PointsEverEarnedLabel;
/*0x2c0*/ CLabel* PointsAvailableLabel;
/*0x2c4*/ unsigned int       NextRefreshTime;
/*0x2c8*/ PSPAWNINFO         ActiveMerchant; // PlayerClient*
/*0x2cc*/ PointMerchantItem** Items;
/*0x2d0*/ int                MerchantThemeId;
/*0x2d4*/ int                CurrentSelection;
/*0x2d8*/ int                CurrentSort;
/*0x2dc*/ bool               bCurrentAscending;
/*0x2e0*/ ItemGlobalIndex    ItemLocation;
/*0x2ec*/ CONTENTS* pSelectedItem; // ItemBasePtr
/*0x2f0*/ bool               bInventoryWasActive;
/*0x2f4*/ int                CurrentItem;
/*0x2f8*/ int                CurrentQuantity;
/*0x2fc*/ int                SliderType;
/*0x300*/ PointMerchantInterface* pHandler;
/*0x304*/
};

//============================================================================
// CQuantityWnd
//============================================================================

class CQuantityWnd : public CSidlScreenWnd
{
public:
	CQuantityWnd(CXWnd*);
	virtual ~CQuantityWnd();

	EQLIB_OBJECT void Open(CXWnd*, int, int, int, int, int, int, bool);
	EQLIB_OBJECT void CheckMaxEditWnd();
	EQLIB_OBJECT void UpdateEditWndFromSlider();
	EQLIB_OBJECT void UpdateSliderFromEditWnd();
};

//============================================================================
// CRaidOptionsWnd
//============================================================================

class CRaidOptionsWnd : public CSidlScreenWnd
{
public:
	CRaidOptionsWnd(CXWnd*);
	virtual ~CRaidOptionsWnd();

	EQLIB_OBJECT void AddLooterToList(char*);
	EQLIB_OBJECT void ClearLooterList();
	EQLIB_OBJECT void UpdateComponents();
	EQLIB_OBJECT void InitializeClassColors();
};

//============================================================================
// CRaidWnd
//============================================================================

// CRaidWindow__CRaidWindow
// aClasscolorD
// CRaidWindow_size: 0x3a0 (see 550082) in Dec 19 2019 Live
class [[offsetcomments]] CRaidWnd : public CSidlScreenWnd, public WndEventHandler, public CVivoxObserver
{
	FORCE_SYMBOLS

public:
	CRaidWnd(CXWnd*);
	virtual ~CRaidWnd();

	EQLIB_OBJECT void AddPlayertoList(char*, char*, char*, char*, int, int, bool);
	EQLIB_OBJECT void ChangePosition(char*, int, int, int, bool);
	EQLIB_OBJECT void ChangeRaidGroupLeader(char*, int, char*);
	EQLIB_OBJECT void ClearPlayerList();
	EQLIB_OBJECT void RemovePlayerFromList(char*, int);
	EQLIB_OBJECT void SetClassColor(int, unsigned long);
	EQLIB_OBJECT void SetPlayerClassColor(char*, int, int);
	EQLIB_OBJECT void SetPlayerClassColor(int, int, int);
	EQLIB_OBJECT void SetRaidCount(int);
	EQLIB_OBJECT void SetRaidMemberRank(char*, char*, int);
	EQLIB_OBJECT void SetRaidTarget(char*, int, char*, int);
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT void UpdateLevelAverage(int);
	EQLIB_OBJECT void UpdateMemberName(char*, char*, int);
	EQLIB_OBJECT int FindIndexNotInGroupList(char*);
	EQLIB_OBJECT int FindOpenIndexInGroup(int);
	EQLIB_OBJECT int FindPlayerIndexInGroup(char*, int);
	EQLIB_OBJECT void AddSeparator();
	EQLIB_OBJECT void InitializeClassColors();
	EQLIB_OBJECT void ResortRaidGroupList(int, int);

	//----------------------------------------------------------------------------
	// data members

/*0x254*/ uint8_t            Unknown0x244[0xac];
/*0x300*/ COLORREF           ClassColors[0x10];
/*0x340*/ uint8_t            Unknown0x330[0x80];
/*0x3c0*/
};
using EQRAIDWINDOW [[deprecated]] = CRaidWnd;
using PEQRAIDWINDOW [[deprecated]] = CRaidWnd *;

//============================================================================
// CRealEstateItemsWnd
//============================================================================

class CRealEstateItemsWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CRealEstateItemsWnd(CXWnd*);
	virtual ~CRealEstateItemsWnd();
};

//============================================================================
// CRespawnWnd
//============================================================================

class CRespawnWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	CRespawnWnd(CXWnd* pParent);
	virtual ~CRespawnWnd();
};

//============================================================================
// CRewardSelectionWnd
//============================================================================

class CRewardSelectionWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CRewardSelectionWnd(CXWnd*);

	// virtual
	EQLIB_OBJECT ~CRewardSelectionWnd();
};

//============================================================================
// CSelectorWnd
//============================================================================

class CSelectorWnd : public CSidlScreenWnd
{
public:
	CSelectorWnd(CXWnd*);
	virtual ~CSelectorWnd();

	EQLIB_OBJECT void KeyMapUpdated();
};

//============================================================================
// CSkillsSelectWnd
//============================================================================

class CSkillsSelectWnd : public CSidlScreenWnd
{
public:
	CSkillsSelectWnd(CXWnd*);
	virtual ~CSkillsSelectWnd();

	EQLIB_OBJECT void Refresh();
	EQLIB_OBJECT void SetTypesToDisplay(int);
	EQLIB_OBJECT void UpdateAll();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CSkillsWnd
//============================================================================

class CSkillsWnd : public CSidlScreenWnd
{
public:
	CSkillsWnd(CXWnd*);
	virtual ~CSkillsWnd();

	EQLIB_OBJECT void SkillImproveOccurred(int);
	EQLIB_OBJECT void UpdateAll();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CSocialEditWnd
//============================================================================

class CSocialEditWnd : public CSidlScreenWnd
{
public:
	CSocialEditWnd(CXWnd*);
	virtual ~CSocialEditWnd();

	EQLIB_OBJECT unsigned long GetSocialTextColor(int);
	EQLIB_OBJECT void ClickedAccept();
	EQLIB_OBJECT void ClickedClear();
	EQLIB_OBJECT void ClickedTextColorButton(int);
	EQLIB_OBJECT void UpdateControlsFromSocial();
};

//============================================================================
// CSpellBookWnd
//============================================================================

class CSpellBookWnd : public CSidlScreenWnd
{
public:
	CSpellBookWnd(CXWnd*);
	virtual ~CSpellBookWnd();

	EQLIB_OBJECT bool StartSpellMemorization(int, int, bool);
	EQLIB_OBJECT int GetSpellMemTicksLeft();
	EQLIB_OBJECT int GetSpellScribeTicksLeft();
	EQLIB_OBJECT void AutoMemSpell(int, int);
	EQLIB_OBJECT void DeleteSpellFromBook(int, int);
	EQLIB_OBJECT void FinishMemorizing(int, int);
	EQLIB_OBJECT void FinishScribing(int, int);
	EQLIB_OBJECT void MemorizeSet(int*, int);
	EQLIB_OBJECT void RequestSpellDeletion(int);
	EQLIB_OBJECT void SwapSpellBookSlots(int, int);
	EQLIB_OBJECT void TurnToPage(int);
	EQLIB_OBJECT bool CanStartMemming(int);
	EQLIB_OBJECT void ContinueSetMem();
	EQLIB_OBJECT void DelayedSpellMem(int, int, int);
	EQLIB_OBJECT void DisplaySpellInfo(int);
	EQLIB_OBJECT void EndSetMem();
	EQLIB_OBJECT void GetSpellDeletionConfirmation(int);
	EQLIB_OBJECT void HandleLeftClickOnSpell(int);
	EQLIB_OBJECT void HandleRightClickOnSpell(int);
	EQLIB_OBJECT void HandleSpellInfoDisplay(CXWnd*);
	EQLIB_OBJECT void StartSpellMemorizationDrag(int, CButtonWnd*);
	EQLIB_OBJECT void StartSpellScribe(int);
	EQLIB_OBJECT void StopSpellBookAction();
	EQLIB_OBJECT void UpdateSpellBookDisplay();

	EQLIB_OBJECT static int GetBookSlot(int);
};

//============================================================================
// CSpellDisplayWnd
//============================================================================

enum ESpellDisplayType
{
	SpellDisplayType_None,
	SpellDisplayType_BuffWnd,
	SpellDisplayType_PetBuffWnd,
	SpellDisplayType_BlockedBuffWnd,
	SpellDisplayType_BlockedPetBuffWnd,
	SpellDisplayType_SpellBookWnd,
	SpellDisplayType_HotButtonWnd,
	SpellDisplayType_CastSpellWnd,
	SpellDisplayType_Unknown8,
	SpellDisplayType_Unknown9,
	SpellDisplayType_TargetBuff,
};

// aSpelldisplaywi
// Actual size 0x278 Nov 02 2017 Beta see 7AE2DF
class [[offsetcomments]] CSpellDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CSpellDisplayWnd(CXWnd* parent, ESpellDisplayType displayType);
	virtual ~CSpellDisplayWnd();

/*0x248*/ int                WindowID;
/*0x24c*/ CLabelWnd*         pDuration;
/*0x250*/ CStmlWnd*          pDescription;
/*0x254*/ CStmlWnd*          pName;
/*0x258*/ CButtonWnd*        pIcon;
/*0x25c*/ SoeUtil::String    DescriptionText;
/*0x26c*/ SoeUtil::String    TitleText;
/*0x27c*/ bool               bActiveItem;
/*0x280*/ CTextureAnimation* ptaBuffIcons;
/*0x284*/ CTextureAnimation* ptaDragIcons;
/*0x288*/ bool               bFailed;
/*0x28c*/ ESpellDisplayType  SpellDisplayType;
/*0x290*/ int                SpellID;
/*0x294*/ int                LastUpdateTime;
/*0x298*/
};
using EQSPELLINFOWINDOW [[deprecated]] = CSpellDisplayWnd;
using PEQSPELLINFOWINDOW [[deprecated]] = CSpellDisplayWnd*;

//============================================================================
// CSpellGemWnd
//============================================================================

// CSpellGemWnd__CSpellGemWnd
// CSpellGemWnd_size: 0x318 (see 809D6B) in Dec 19 2019 Live
class [[offsetcomments]] CSpellGemWnd : public CButtonWnd
{
	FORCE_SYMBOLS

public:
	CSpellGemWnd(CXWnd*, uint32_t, const CXRect&, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, int, unsigned long);
	virtual ~CSpellGemWnd();

	EQLIB_OBJECT void SetGemTintStage(int);
	EQLIB_OBJECT void SetSpellGemTint(unsigned long);
	EQLIB_OBJECT void SetSpellIconIndex(int);

	//----------------------------------------------------------------------------
	// data members

/*0x298*/ int                MouseButtonState;
/*0x29c*/ bool               bChecked;
/*0x2a0*/ unsigned int       LastRefresh;
/*0x2a4*/ D3DCOLOR           SpellGemTintArray[11];
/*0x2d0*/ int                SpellGemAlphaArray[11];
/*0x2fc*/ int                Unknown0x02f4;
/*0x300*/ int                Unknown0x02f8;
/*0x304*/ int                SpellIconOffsetX;
/*0x308*/ int                SpellIconOffsetY;
/*0x30c*/ int                spellicon;                // if this is equal to FFFFFFFF there is no spell memmed in this slot...
/*0x310*/ int                spellstate;               // 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast, should really rename this to tintstage
/*0x314*/ int                TintIndex;
/*0x318*/ CTextureAnimation* SpellIconTexture;         // CTextureAnimation
/*0x31c*/ CTextureAnimation* CustomIconTexture;        // CTextureAnimation
/*0x320*/ int                SpellSlot;
/*0x324*/ int                Percent;
/*0x328*/ CSpellGemDrawTemplate DrawTemplate;
/*0x338*/
};
using EQCASTSPELLGEM [[deprecated]] = CSpellGemWnd;
using PEQCASTSPELLGEM [[deprecated]] = CSpellGemWnd *;

//============================================================================
// CStoryWnd
//============================================================================

class CStoryWnd : public CSidlScreenWnd
{
public:
	CStoryWnd(CXWnd*);
	virtual ~CStoryWnd();

	EQLIB_OBJECT bool HasNew();
	EQLIB_OBJECT bool ShowAuto();
	EQLIB_OBJECT void SaveIni();
	EQLIB_OBJECT void SelectIndex(int);
	EQLIB_OBJECT void SelectOldestNew();
};

//============================================================================
// CTargetWnd
//============================================================================

// CTargetWindow__CTargetWindow aTargetwindow
// CTargetWindow_size: 0x8c0 (see 550635) in Dec 19 2019 Live
class [[offsetcomments]] CTargetWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTargetWnd(CXWnd*);
	virtual ~CTargetWnd();

	EQLIB_OBJECT CXStr* GetBuffCaster(int SpellID);
	EQLIB_OBJECT void RefreshTargetBuffs(CUnSerializeBuffer& buffer);
	EQLIB_OBJECT void HandleBuffRemoveRequest(CXWnd* pWnd);

	//----------------------------------------------------------------------------
	// data members

/*0x24c*/ CXWnd*             pWndBuffs;
/*0x250*/ CTextureAnimation* pBuffGoodBackground;
/*0x254*/ CTextureAnimation* pBuffBadBackground;
/*0x258*/ CTextureAnimation* pBuffBypassBackground;
/*0x25c*/ CTextureAnimation* ptaBuffIcons[NUM_BUFF_SLOTS];
/*0x3e0*/ CButtonWnd*        pTargetBuff[NUM_BUFF_SLOTS];
/*0x564*/ int                BuffSpellID[NUM_BUFF_SLOTS]; // 0xffffffff if no buff
/*0x6e8*/ int                BuffTimer[NUM_BUFF_SLOTS];
/*0x86c*/ int                LastBuffReceivedTime;
/*0x870*/ int                Timer;
/*0x874*/ HashTable<CXStr>   Casters;
/*0x884*/ int                ContextMenuID;
/*0x888*/ CXWnd*             RequestingWnd;
/*0x88c*/ bool               bRemovedBuffBlockMenuItem;
/*0x890*/ int                Type;                     // 1 = self, 4 = group member, 5 = PC, 7 = NPC
/*0x894*/ uint8_t            Unknown0x884[0x4c];
/*0x8e0*/
};
using CTARGETWND [[deprecated]] = CTargetWnd;
using PCTARGETWND [[deprecated]] = CTargetWnd*;

//============================================================================
// CTaskWnd
//============================================================================

class CTaskWnd : public CSidlScreenWnd
{
public:
	CTaskWnd(CXWnd*);
	virtual ~CTaskWnd();

	EQLIB_OBJECT int UpdateTaskTimers(unsigned long fasttime);
	EQLIB_OBJECT void ConfirmAbandonTask(int taskId);
};

//============================================================================
// CTextEntryWnd
//============================================================================

class [[offsetcomments]] CTextEntryWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTextEntryWnd(CXWnd*);
	virtual ~CTextEntryWnd();

	EQLIB_OBJECT void Open(CXWnd* pwnd, int EditMode, char* Prompt, int MinLength, int MaxLength, const char* InitialText);
	EQLIB_OBJECT CXStr GetEntryText();
	EQLIB_OBJECT void Activate(CXWnd*, int, char*, int, int, char*);
	EQLIB_OBJECT void Callback(bool);
	EQLIB_OBJECT void UpdateButtons();

/*0x24c*/ int          m_minLength;
/*0x250*/ int          m_maxLength;
/*0x254*/ CXStr        m_text;
/*0x258*/ CXWnd*       m_parent;
/*0x25c*/ CEditWnd*    m_entry;
/*0x260*/ CLabel*      m_prompt;
/*0x264*/ CButtonWnd*  m_ok;
/*0x268*/ CButtonWnd*  m_cancel;
/*0x26c*/
};
using CTEXTENTRYWND [[deprecated]] = CTextEntryWnd;
using PCTEXTENTRYWND [[deprecated]] = CTextEntryWnd*;

//============================================================================
// CTimeLeftWnd
//============================================================================

class CTimeLeftWnd : public CLabel, public WndEventHandler
{
public:
	CTimeLeftWnd(int timeLeft);
	virtual ~CTimeLeftWnd();
};

//============================================================================
// CTipWnd
//============================================================================

class CTipWnd : public CSidlScreenWnd
{
public:
	CTipWnd(CXWnd*, int);
	virtual ~CTipWnd();

	EQLIB_OBJECT void InitializeTipSettings();
	EQLIB_OBJECT void UpdateButtons();
	EQLIB_OBJECT bool IsRecentTOTD(int);
	EQLIB_OBJECT int SelectRandomTip();
	EQLIB_OBJECT void AddContextTip(int);
	EQLIB_OBJECT void LoadINISettings();
	EQLIB_OBJECT void SetTOTD(int);
	EQLIB_OBJECT void ShowHistoryTip(int);
	EQLIB_OBJECT void CleanDayTips();
	EQLIB_OBJECT void LoadDayTips();
};


//============================================================================
// CTrackingWnd
//============================================================================

class CTrackingWnd : public CSidlScreenWnd
{
public:
	CTrackingWnd(CXWnd*);
	virtual ~CTrackingWnd();

	EQLIB_OBJECT void DoTrackFilter(bool);
	EQLIB_OBJECT void DoTrackSort(bool);
	EQLIB_OBJECT void RemovePlayerFromTracking(PlayerClient*);
	EQLIB_OBJECT void SetTrackingList(const char*, int);
	EQLIB_OBJECT int GetListIdByData(unsigned int);
	EQLIB_OBJECT unsigned long GetTrackColor(int);
	EQLIB_OBJECT void GenerateTrackingList();
	EQLIB_OBJECT void NotifyServerOfTrackingTarget(int);
	EQLIB_OBJECT void RemoveFromListWndByData(unsigned int);
	EQLIB_OBJECT void RemovePlayerFromTracking(int);
	EQLIB_OBJECT void UpdateTrackingControls();
	EQLIB_OBJECT void UpdateTrackingList(bool);
};

//============================================================================
// CTradeSkillWnd
//============================================================================

#define MAX_RECIPE_ITEMS 10

struct [[offsetcomments]] TradeskillRecipe
{
	FORCE_SYMBOLS;

/*0x00*/ int ID;
/*0x04*/ int Trivial;
/*0x08*/ int ContainerType;
/*0x0c*/ int ContainerID;
/*0x10*/ int RequiredSize;
/*0x14*/ char Name[0x40];
/*0x54*/ bool bUnknown;
/*0x58*/ int Ingredient[MAX_RECIPE_ITEMS];                 // ID# of ingredient(s)
/*0x80*/ int IngredientIcon[MAX_RECIPE_ITEMS];             // Icon# of ingredient(s) (Note: 499 is blank)
/*0xa8*/
};
using EQTRADESKILLRECIPE [[deprecated]] = TradeskillRecipe;
using PEQTRADESKILLRECIPE [[deprecated]] = TradeskillRecipe *;

// size: 0xd28 Jun 10, 2019 (test)
class [[offsetcomments]] CTradeSkillWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS;

public:
	CTradeSkillWnd(CXWnd* parent);
	virtual ~CTradeSkillWnd();

	//----------------------------------------------------------------------------
	// data members

	// todo: check and update
/*0x248*/ DWORD        Unknown0x148[0x1b];
/*0x2b4*/ TradeskillRecipe* SearchResults[0x64];
/*0x444*/ DWORD        Unknown0x344;
/*0x448*/ DWORD        Unknown0x348;
/*0x44c*/ DWORD        Unknown0x34c;
/*0x450*/ CONTENTS*    Container;
/*0x454*/ DWORD        Unknown0x354;
/*0x458*/ TradeskillRecipe* SelectedRecipe;
/*0x45c*/ DWORD        Unknown0x35c;
/*0x460*/ DWORD        SkillLevel;
/*0x464*/ DWORD        Unknown0x364;
/*0x468*/ DWORD        Unknown0x368;
/*0x46c*/ BYTE         Unknown0x36c[0x58];
/*0x4c4*/ DWORD        Unknown0x3c4;
/*0x4c8*/ DWORD        Unknown0x3c8;
/*0x4cc*/ BYTE         Unknonw0x3cc[0x8];
/*0x4d4*/ DWORD        Unknown0x3d4;
/*0x4d8*/ DWORD        Unknown0x3d8;
/*0x4dc*/
};
using EQTRADESKILLWINDOW [[deprecated]] = CTradeSkillWnd;
using PEQTRADESKILLWINDOW [[deprecated]] = CTradeSkillWnd*;

//============================================================================
// CTradeWnd
//============================================================================

constexpr int MAX_TRADE_SLOTS = 16;

// CTradeWnd__CTradeWnd aTradewnd
// CTradeWnd__size: 0x2e8 (see 550E08) in Dec 19 2019 Live
class [[offsetcomments]] CTradeWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTradeWnd(CXWnd*);
	virtual ~CTradeWnd();

	EQLIB_OBJECT bool IsMyTradeSlot(int, bool*);
	EQLIB_OBJECT void Activate(PlayerClient*, bool);
	EQLIB_OBJECT void AddContainerToHisTradeArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToHisTradeArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToHisTradeArray(EQ_Note*);
	EQLIB_OBJECT void ClickedCancelButton();
	EQLIB_OBJECT void ClickedMoneyButton(int);
	EQLIB_OBJECT void ClickedTradeButton();
	EQLIB_OBJECT void CompleteTrade();
	EQLIB_OBJECT void DeleteItemFromHisTradeArray(int);
	EQLIB_OBJECT void DropItemIntoTrade();
	EQLIB_OBJECT void SetHisMoney(int, long);
	EQLIB_OBJECT void SetHisReadyTrade(bool);
	EQLIB_OBJECT void SetMyReadyTrade(bool);
	EQLIB_OBJECT void TradeItemChanged(int, int);
	EQLIB_OBJECT void UpdateTradeDisplay();

/*0x24c*/ unsigned int       NextRefreshTime;
/*0x250*/ bool               bInventoryWasOpen;
/*0x254*/ CButtonWnd*        HisMoneyButton[4];
/*0x264*/ CButtonWnd*        MyMoneyButton[4];
/*0x274*/ CButtonWnd*        TradeButton;
/*0x278*/ CButtonWnd*        CancelButton;
/*0x27c*/ CLabel*            HisNameLabel;
/*0x280*/ CLabel*            MyNameLabel;
/*0x284*/ CInvSlotWnd*       pInvSlotWnd[MAX_TRADE_SLOTS];
/*0x2c4*/ long               HisMoney[4];
/*0x2d4*/ long               MyMoney[4];
/*0x2e4*/ ItemBaseContainer  TradeItems;
/*0x300*/ bool               bHisReadyTrade;           // was HisTradeReady
/*0x301*/ bool               bMyReadyTrade;            // was MyTradeReady
/*0x302*/ bool               bIsTrading;               // was TradeWndOpen
/*0x304*/

	// TODO: Add aliases
};
using EQTRADEWINDOW [[deprecated]] = CTradeWnd;
using PEQTRADEWINDOW [[deprecated]] = CTradeWnd *;

//============================================================================
// CTrainWnd
//============================================================================

class CTrainWnd : public CSidlScreenWnd
{
public:
	CTrainWnd(CXWnd*);
	virtual ~CTrainWnd();

	EQLIB_OBJECT void SetGMData(int*, unsigned char*, float);
	EQLIB_OBJECT void SkillChanged(int);
	EQLIB_OBJECT char* SkillName(int);
	EQLIB_OBJECT int SkillValue(int);
	EQLIB_OBJECT void SortNames(int);
	EQLIB_OBJECT void SortSkill(int);
	EQLIB_OBJECT void SwapSkill(int, int);
	EQLIB_OBJECT void Train();
	EQLIB_OBJECT void UpdateAll(bool);
	EQLIB_OBJECT void UpdateRight();
	EQLIB_OBJECT void UpdateSkill(int);
};

//============================================================================
// CVideoModesWnd
//============================================================================

class CVideoModesWnd : public CSidlScreenWnd
{
public:
	CVideoModesWnd(CXWnd*);
	virtual ~CVideoModesWnd();

	EQLIB_OBJECT void RestoreOldMode();
	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void UpdateSelection(unsigned int);
};

//============================================================================
// CZoneGuideWnd
//============================================================================

enum eZoneGuideConnectionsView
{
	eZGCV_None,
	eZGCV_Selected,
	eZGCV_PreviewPath,
	eZGCV_ActivePath,
	eZGCV_Disabled,
};

class [[offsetcomments]] ZoneGuideConnection
{
	FORCE_SYMBOLS;

public:
/*0x00*/ EQZoneIndex        DestZone;
/*0x04*/ int                TransferTypeIndex;
/*0x08*/ int                RequiredExpansions;       // EQExpansionOwned
/*0x0c*/ bool               bDisabled;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideContinent
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                ID;
/*0x04*/ int                DisplaySequence;
/*0x08*/ CXStr              Name;
/*0x0c*/
};

class [[offsetcomments]] ZoneGuideZoneType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                ID;
/*0x04*/ int                DisplaySequence;
/*0x08*/ CXStr              Name;
/*0x0c*/
};

class [[offsetcomments]] ZoneGuideTransferType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                ID;
/*0x04*/ CXStr              Description;
/*0x08*/
};

// see 8E87D6 in Apr 15 2019 exe
class [[offsetcomments]] ZoneGuideZone
{
	FORCE_SYMBOLS;

public:
/*0x00*/ EQZoneIndex   ID;
/*0x04*/ CXStr         Name;
/*0x08*/ int           ContinentIndex;
/*0x0c*/ int           MinLevel;
/*0x10*/ int           MaxLevel;
/*0x14*/ DynamicBitField<unsigned short, short> Types;
/*0x1c*/ ArrayClass<ZoneGuideConnection> ZoneConnections;
/*0x2c*/
};

struct [[offsetcomments]] ZonePathData
{
	FORCE_SYMBOLS;

/*0x00*/ EQZoneIndex        ZoneID;
/*0x04*/ int                TransferTypeIndex;
/*0x08*/
};

constexpr int ZONE_COUNT = 837;

class [[offsetcomments]] ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
	ZoneGuideManagerBase();
	virtual ~ZoneGuideManagerBase();

	virtual void ResetAllData();
	//virtual void Serialize(CSerializeBuffer&);
	//virtual void Unserialize(CUnserializeBuffer&);

/*0x0004*/ ZoneGuideZone Zones[ZONE_COUNT];
/*0x8fe0*/ ArrayClass<ZoneGuideContinent> Continents;
/*0x8ff0*/ ArrayClass<ZoneGuideZoneType> ZoneTypes;
/*0x9000*/ ArrayClass<ZoneGuideTransferType> TransferTypes;
/*0x9010*/
};

// size: 0x9010 see 6AB098 in Apr 15 2019 exe
class [[offsetcomments]] ZoneGuideManagerClient : public ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
/*0x9010*/ ArrayClass<ZonePathData> ActivePath;
/*0x9020*/ ArrayClass<ZonePathData> PreviewPath;
/*0x9030*/ EQZoneIndex CurrZone;
/*0x9034*/ int         HerosJourneyIndex;
/*0x9038*/ bool        bZoneGuideDataSet;
/*0x9039*/ bool        bIncludeBindZoneInPath;
/*0x903a*/ bool        bAutoFindActivePath;
/*0x903b*/ bool        bFindActivePath;
/*0x903c*/

	static ZoneGuideManagerClient& Instance();
};

class [[offsetcomments]] CZoneGuideWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
/*0x24c*/ CVerticalLayoutWnd* VerticalLayout;
/*0x250*/ CButtonWnd*        FilterMyLevelButton;
/*0x254*/ CButtonWnd*        FilterAllLevelsButton;
/*0x258*/ CButtonWnd*        FilterZonesActiveButton;
/*0x25c*/ CButtonWnd*        FilterZonesInactiveButton;
/*0x260*/ CButtonWnd*        ZoneRunSearchButton;
/*0x264*/ CButtonWnd*        ZoneClearSearchButton;
/*0x268*/ CButtonWnd*        SelectCurrentZoneButton;
/*0x26c*/ CEditWnd*          LevelFilterEdit;
/*0x270*/ CEditWnd*          ZoneSearchEdit;
/*0x274*/ CComboWnd*         TypeFilterCombo;
/*0x278*/ CComboWnd*         ContinentFilterCombo;
/*0x27c*/ CListWnd*          ZonesList;
/*0x280*/ CLabelWnd*         ViewZoneConnectionsSelectedZoneLabel;
/*0x284*/ CLabelWnd*         ViewZoneConnectionsPreviewPathLabel;
/*0x288*/ CLabelWnd*         ViewZoneConnectionsActivePathLabel;
/*0x28c*/ CLabelWnd*         ViewZoneConnectionsDisabledLabel;
/*0x290*/ CButtonWnd*        ViewZoneConnectionsSelectedZoneButton;
/*0x294*/ CButtonWnd*        ViewZoneConnectionsPreviewPathButton;
/*0x298*/ CButtonWnd*        ViewZoneConnectionsActivePathButton;
/*0x29c*/ CButtonWnd*        ViewZoneConnectionsDisabledButton;
/*0x2a0*/ CButtonWnd*        DisableConnectionTemplateButton;
/*0x2a4*/ CListWnd*          ZoneConnectionsList;
/*0x2a8*/ CButtonWnd*        ResetPathStartZoneButton;
/*0x2ac*/ CButtonWnd*        SetPathStartZoneButton;
/*0x2b0*/ CButtonWnd*        SetPathEndZoneButton;
/*0x2b4*/ CButtonWnd*        ShowPathWndButton;
/*0x2b8*/ CButtonWnd*        HidePathWndButton;
/*0x2bc*/ CButtonWnd*        FindPathButton;
/*0x2c0*/ CButtonWnd*        EndFindButton;
/*0x2c4*/ CButtonWnd*        ClearPathWndButton;
/*0x2c8*/ CButtonWnd*        ActivatePathButton;
/*0x2cc*/ CButtonWnd*        IncludeBindZoneInPathGenerationButton;
/*0x2d0*/ CButtonWnd*        ShowPathWndOnPathActivationButton;
/*0x2d4*/ CButtonWnd*        AutoFindActivePathButton;
/*0x2d8*/ CEditWnd*          PathStartZoneEdit;
/*0x2dc*/ CEditWnd*          PathEndZoneEdit;
/*0x2e0*/ UINT               NextButtonRefreshTime;
/*0x2e4*/ EQZoneIndex        eCurrentZone;
/*0x2e8*/ bool               bFilterActive;
/*0x2ec*/ int                FilterLevel;
/*0x2f0*/ int                FilterContinentIndex;
/*0x2f4*/ int                FilterZoneTypeIndex;
/*0x2f8*/ bool               bSelectCurrentZone;
/*0x2fc*/ CXStr              ZoneSearchString;
/*0x300*/ eZoneGuideConnectionsView eCurrConnectionsView;
/*0x304*/ EQZoneIndex        CurrConnectionsViewSelectedZone;
/*0x308*/ bool               bCurrentConnectionsViewPreviewPathChanged;
/*0x309*/ bool               bCurrentConnectionsViewActivePathChanged;
/*0x30a*/ bool               bSetPathStartZoneToCurrentZone;
/*0x30c*/ EQZoneIndex        StartZone;
/*0x310*/ EQZoneIndex        EndZone;
/*0x314*/ bool               bZoneGuideDataChanged;
/*0x315*/ bool               bZoneListChanged;
/*0x316*/ bool               bZoneConnectionsListChanged;
/*0x317*/ bool               bPathStartZoneChanged;
/*0x318*/ int                RightClickMenuID;
/*0x31c*/
};

//============================================================================
//============================================================================
//============================================================================
//============================================================================

//============================================================================
// CXMLParamManager
//============================================================================


template <class ElementType, int Cnt>
class HashCXStrElement
{
public:
	struct CKeyCXStrElementType
	{
		CXStr          key;
		ElementType    value;
	};

	ArrayClass2<ArrayClass2<CKeyCXStrElementType>> HashData;
};

class [[offsetcomments]] CXMLSymbolItem
{
public:
/*0x00*/ CXStr                              ItemString;
/*0x04*/ bool                               bDeclared;
/*0x05*/ bool                               bValid;
/*0x08*/
};

class [[offsetcomments]] CXMLSymbolClass
{
public:
/*0x00*/ CXStr                              Class;
/*0x04*/ ArrayClass2<CXMLSymbolItem>     ItemsArray;
/*0x1c*/ CHashCXStrInt32                    ItemsHashes;
/*0x34*/ bool                               bValid;
/*0x38*/
};

class [[offsetcomments]] CXMLSymbolTable
{
public:
/*0x00*/ void* vfTable;
/*0x04*/ ArrayClass2<CXMLSymbolClass> ClassesArray;
/*0x1c*/ CHashCXStrInt32               ClassesHashes;
/*0x34*/
};

class [[offsetcomments]] CXMLDataManager
{
public:
/*0x00*/ void* vfTable;
/*0x04*/ CHashCXStrInt32               EnumTypeHashes;
/*0x1c*/ ArrayClass2<CXMLEnumInfo>  XMLEnumArray;
/*0x34*/ HashCXStrElement<CXMLDataPtr, 16 * 1024> ClassItemHashes;
/*0x4c*/ ArrayClass2<CXMLDataClass> XMLDataArray;
/*0x64*/ CXMLSymbolTable               SymbolTable;
/*0x98*/ CXStr                         ErrorString;
/*0x9c*/

	EQLIB_OBJECT CXMLDataManager();
	EQLIB_OBJECT bool IsDerivedFrom(int, int);
	EQLIB_OBJECT bool ReadFromXMLSOM(CXMLSOMDocument&);
	EQLIB_OBJECT CXMLData* GetXMLData(CXStr className, CXStr itemName);
	EQLIB_OBJECT CXMLData* GetXMLData(int classIndex, int itemIndex) const;
	EQLIB_OBJECT CXMLData* GetXMLData(int xmlIndex) const
	{
		return GetXMLData(xmlIndex >> 16, xmlIndex & 0xffff);
	}

	EQLIB_OBJECT UIType GetWindowType(const CXWnd* wnd) const;

	EQLIB_OBJECT int GetClassIdx(CXStr);
	EQLIB_OBJECT int GetItemIdx(int, CXStr);
	EQLIB_OBJECT int GetNumClass();
	EQLIB_OBJECT int GetNumItem(int);

	// virtual
	EQLIB_OBJECT ~CXMLDataManager();
	EQLIB_OBJECT bool DataValidate();
	EQLIB_OBJECT bool ReadValidate(CMemoryStream&);
	EQLIB_OBJECT bool WriteValidate(CMemoryStream&);
	EQLIB_OBJECT int GetStreamSize();
	EQLIB_OBJECT void IndexAll();
	EQLIB_OBJECT void ReadFromStream(CMemoryStream&);
	EQLIB_OBJECT void Set(CXMLDataManager&);
	EQLIB_OBJECT void WriteToStream(CMemoryStream&);

	// protected
	EQLIB_OBJECT void AddToSuperType(CXStr, CXMLDataPtr);
	EQLIB_OBJECT void SetEnumHash();
};

class CXMLParamManager : public CXMLDataManager
{
public:
	// virtual
	EQLIB_OBJECT ~CXMLParamManager();
	EQLIB_OBJECT bool XMLDataCopy(CXMLData*, CXMLData*);
	EQLIB_OBJECT CXMLData* AllocPtr(CXMLDataPtr&, int, const CXMLData*);
};

//============================================================================
// CSidlManagerBase
//============================================================================

enum EStaticScreenPieceClasses
{
	StaticScreenPieceUnknown = -1,

	StaticScreenPieceHeader,
	StaticScreenPieceFrame,
	StaticScreenPieceText,
	StaticScreenPieceAnimation,
	StaticScreenPieceTintedBlendAnimation,

	StaticScreenPieceMax,
};

// this class helps translate xml into ui elements

// size 0x1D4 2019-02-12 test see 53E3D3
// size 0x200 see 53ED93 in 2019 01 11 eqgame.exe
class [[offsetcomments]] CSidlManagerBase
{
	FORCE_SYMBOLS

public:
	CSidlManagerBase();
	virtual ~CSidlManagerBase();

	//----------------------------------------------------------------------------
	// virtuals

	virtual CXWnd* CreateXWnd(CXWnd* parent, CControlTemplate* pTemplate);

	//----------------------------------------------------------------------------
	// defined methods

	EQLIB_OBJECT CButtonDrawTemplate* FindButtonDrawTemplate(uint32_t id) const;
	EQLIB_OBJECT CButtonDrawTemplate* FindButtonDrawTemplate(const CXStr& name) const;

	EQLIB_OBJECT CXMLParamManager* GetParamManager();

	// this "bSomething" is a parameter passed through to CreateButtonWnd and CreateScreenWnd, which is then passed back through
	// CreateXWndFromTemplate recursively... not sure where it is used yet. A couple non-xml source set it to 1.
	EQLIB_OBJECT CXWnd* CreateXWndFromTemplate(CXWnd* pParent, CControlTemplate* pTemplate, bool bUnknown = false);

	// same as above but looks up a template by name.
	EQLIB_OBJECT CXWnd* CreateXWndFromTemplate(CXWnd* pParent, const CXStr& name);

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT void DeleteContents();
	EQLIB_OBJECT void LoadSidl(const CXStr& Path, const CXStr& DefaultPath, const CXStr& Filename, const CXStr& DefaultClientPath = "UIFiles\\default\\");
	EQLIB_OBJECT CXStr& GetParsingErrorMsg();

	EQLIB_OBJECT EStaticScreenPieceClasses GetScreenPieceEnum(CScreenPieceTemplate*) const;
	EQLIB_OBJECT EStaticScreenPieceClasses GetScreenPieceEnum(CParamScreenPiece*) const;

	EQLIB_OBJECT CScrollbarTemplate* FindScrollbarTemplate(const CXStr& name) const;
	EQLIB_OBJECT CScrollbarTemplate* FindScrollbarTemplate(uint32_t) const;
	EQLIB_OBJECT CSliderDrawTemplate* FindSliderDrawTemplate(const CXStr& Name) const;
	EQLIB_OBJECT CSliderDrawTemplate* FindSliderDrawTemplate(uint32_t) const;
	EQLIB_OBJECT CUITextureInfo* FindTexture(const CXStr&) const;
	EQLIB_OBJECT CUITextureInfo* FindTexture(uint32_t) const;
	EQLIB_OBJECT CTextureAnimation* FindAnimation(const CXStr&) const;
	EQLIB_OBJECT CTextureAnimation* FindAnimation(uint32_t) const;
	EQLIB_OBJECT CTAFrameDraw* FindFrameDraw(const CXStr&) const;
	EQLIB_OBJECT CTAFrameDraw* FindFrameDraw(uint32_t) const;
	EQLIB_OBJECT CXWndDrawTemplate* FindDrawTemplate(const CXStr&) const;
	EQLIB_OBJECT CXWndDrawTemplate* FindDrawTemplate(uint32_t) const;
	EQLIB_OBJECT CScreenPieceTemplate* FindScreenPieceTemplate(const CXStr& Name) const;
	EQLIB_OBJECT CScreenPieceTemplate* FindScreenPieceTemplate(uint32_t) const;
	EQLIB_OBJECT CLayoutStrategyTemplate* FindLayoutStrategyTEmplate(uint32_t id);

	EQLIB_OBJECT CParamScreenPiece* GetScreenPiece(CParamScreen* screen, const CXStr& screenId) const;
	EQLIB_OBJECT CTextureAnimation CreateTextureAnimationFromSidlAnimation(const CParamUi2DAnimation*) const;
	EQLIB_OBJECT CTAFrameDraw CreateTAFrameDrawFromSidlFrame(const CParamFrameTemplate*) const;
	EQLIB_OBJECT CXWndDrawTemplate CreateDrawTemplateFromParamWindowDrawTemplate(const CParamWindowDrawTemplate*) const;

	EQLIB_OBJECT void AddScreenPieceTemplateInOrder(CScreenPieceTemplate*);
	EQLIB_OBJECT void AddAnimationInOrder(CTextureAnimation*);
	EQLIB_OBJECT void AddTAFrameDrawInOrder(CTAFrameDraw*);
	EQLIB_OBJECT void AddDrawTemplateInOrder(CXWndDrawTemplate*);
	EQLIB_OBJECT void AddLayoutStrategyInOrder(CLayoutStrategyTemplate*);

	EQLIB_OBJECT CButtonDrawTemplate GetButtonDrawTemplateFromParamButtonDrawTemplate(const CParamButtonDrawTemplate&) const;
	EQLIB_OBJECT CGaugeDrawTemplate GetGaugeDrawTemplateFromParamGaugeDrawTemplate(const CParamGaugeDrawTemplate&) const;
	EQLIB_OBJECT CSpellGemDrawTemplate GetSpellGemDrawTemplateFromParamSpellGemDrawTemplate(const CParamSpellGemDrawTemplate&) const;
	EQLIB_OBJECT CScrollbarTemplate GetScrollbarTemplateFromParamScrollbarTemplate(const CParamScrollbarDrawTemplate&) const;
	EQLIB_OBJECT CSliderDrawTemplate GetSliderDrawTemplateFromParamSliderDrawTemplate(const CParamSliderDrawTemplate&) const;

	EQLIB_OBJECT static CXPoint GetPointFromParamPoint(const CParamPoint&);
	EQLIB_OBJECT static CXRect GetRectFromParamPointSize(const CParamPoint&, const CParamSize&);
	EQLIB_OBJECT static CXSize GetSizeFromParamSize(const CParamSize&);
	EQLIB_OBJECT static CXStr TranslateString(const CXStr&);
	EQLIB_OBJECT static D3DCOLOR GetD3DCOLOR(const CParamRGB&);

	EQLIB_OBJECT CLayoutStrategyTemplate* CreateLayoutStrategyTemplate(CParamLayoutStrategy*);
	EQLIB_OBJECT CScreenPieceTemplate* CreateScreenPieceTemplateFromParamScreenPiece(const CParamScreenPiece*) const;
	EQLIB_OBJECT CLayoutStrategy* CreateLayoutStrategy(CLayoutStrategyTemplate*);
	EQLIB_OBJECT CXWnd* CreateButtonWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateScreenWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreatePageWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateListWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSliderWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateLabelWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSTMLWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTreeViewWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateComboWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTabWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateHorizontalLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateVerticalLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateFinderWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTileLayoutWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateTemplateContainerWnd(CXWnd* parent, CControlTemplate* pTemplate);

	//----------------------------------------------------------------------------
	// data members

/*0x004*/ EStaticScreenPieceClasses              ScreenPieceClassIndex[StaticScreenPieceMax];
/*0x018*/ ArrayClass<CUITextureInfo*>            Textures;
/*0x028*/ ArrayClass<CButtonDrawTemplate*>       ButtonDrawTemplateArray;
/*0x038*/ ArrayClass<CScrollbarTemplate*>        ScrollbarTemplateArray;
/*0x048*/ ArrayClass<CSliderDrawTemplate*>       SliderDrawTemplateArray;
/*0x058*/ ArrayClass<CXStr>                      ScreenNameArray;
/*0x068*/ ArrayClass<CXWndDrawTemplate*>         DrawTemplateArray;
/*0x078*/ CHashCXStrInt32                        DrawTemplateHash;
/*0x090*/ ArrayClass<CTextureAnimation*>         AnimationArray;
/*0x0a0*/ CHashCXStrInt32                        AnimationsHash;
/*0x0b8*/ ArrayClass<CTAFrameDraw*>              TAFrameArray;
/*0x0c8*/ CHashCXStrInt32                        TAFrameHash;
/*0x0e0*/ ArrayClass<CScreenPieceTemplate*>      ScreenPieceArray;
/*0x0f0*/ CHashCXStrInt32                        ScreenPiecesHash;
/*0x108*/ ArrayClass<CLayoutStrategyTemplate*>   LayoutStrategyTemplateArray;
/*0x118*/ CHashCXStrInt32                        LayoutStrategyTemplatesHash;
/*0x130*/ CXMLParamManager                       XMLDataMgr;
/*0x1cc*/ bool                                   bLoadError;
/*0x1d0*/ CXStr                                  ErrorString;
/*0x1d4*/
};

class [[offsetcomments]] CSidlManager : public CSidlManagerBase
{
	FORCE_SYMBOLS

public:
	virtual ~CSidlManager();

	//----------------------------------------------------------------------------
	// virtuals
	virtual CXWnd* CreateXWnd(CXWnd* parent, CControlTemplate* pTemplate) override;

	//----------------------------------------------------------------------------
	// defined methods

	// don't need to use this -- can just use CreateXWnd.
	EQLIB_OBJECT CXWnd* CreateHotButtonWnd(CXWnd* pwndParent, CControlTemplate* pControl);

	//----------------------------------------------------------------------------
	// methods

	EQLIB_OBJECT CXWnd* CreateLabel(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateGuageWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateSpellGemWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateInvSlotWnd(CXWnd* parent, CControlTemplate* pTemplate);
	EQLIB_OBJECT CXWnd* CreateHtmlComponentWnd(CXWnd* parent, CControlTemplate* pTemplate);
};

using CSIDLMGR [[deprecated]] = CSidlManager;
using PCSIDLMGR [[deprecated]] = CSidlManager*;

//----------------------------------------------------------------------------

class CascadeItemCommand;

// this is a base class for the cascade menu items defined in CascadeMenu.txt
class [[offsetcomments]] CascadeItemBase
{
public:
	enum Type
	{
		eTypeSubMenu = 0,
		eTypeCommand = 1,
		eTypeSeparator = 2,
	};

	CascadeItemBase(Type type)
		: m_type(type)
	{}

	virtual ~CascadeItemBase() {}

	Type GetType() const { return m_type; }
	bool IsChanged() const { return m_changed; }

	virtual CascadeItemCommand* GetAsCommand() { return nullptr; }

protected:
/*0x04*/ Type m_type;
/*0x08*/ bool m_changed = true;
/*0x0c*/
};

using CascadeItemArray = ArrayClass<CascadeItemBase*>;

// separator menu item (type 3 in CascadeMenu.txt)
class [[offsetcomments]] CascadeItemSeparator : public CascadeItemBase
{
public:
	CascadeItemSeparator() : CascadeItemBase(eTypeSeparator) {}
};

// a menu item that spawns another menu item
class [[offsetcomments]] CascadeItemSubMenu : public CascadeItemBase
{
public:
	CascadeItemSubMenu() : CascadeItemBase(eTypeSubMenu) {}
	CascadeItemSubMenu(int iconId, const char* text)
		: CascadeItemBase(eTypeSubMenu)
		, m_icon(iconId)
		, m_text(text)
	{}

	virtual ~CascadeItemSubMenu()
	{
		int count = m_items ? m_items->GetCount() : 0;
		for (int i = 0; i < count; ++i)
		{
			delete m_items->GetElementIdx(i);
		}
		m_items->Reset();
	}

	CascadeItemArray* GetItems() { return m_items; }

	CascadeItemArray* SetItems(CascadeItemArray* items)
	{
		m_changed = true;
		return std::exchange(m_items, items);
	}

	CascadeItemBase* GetItem(int index)
	{
		if (m_items)
		{
			return m_items->GetElementIdx(index);
		}

		return nullptr;
	}

	int GetIcon() const { return m_icon; }
	void SetIcon(int icon) { m_icon = icon; m_changed = true; }

	const CXStr& GetText() const { return m_text; }
	void SetText(const CXStr& text) { m_text = text; m_changed = true; }

protected:
/*0x0c*/ int m_icon = -1;
/*0x10*/ CXStr m_text;
/*0x14*/ CascadeItemArray* m_items = nullptr;
/*0x18*/
};

// base class for items that execute a command of some kind when clicked
class [[offsetcomments]] CascadeItemCommandBase : public CascadeItemBase
{
public:
	CascadeItemCommandBase() : CascadeItemBase(CascadeItemBase::eTypeCommand) {}

	int GetIcon() const { return m_icon; }
	void SetIcon(int icon) { m_icon = icon; m_changed = true; }

	const CXStr& GetText() const { return m_text; }
	void SetText(const CXStr& text) { m_text = text; m_changed = true; }

	virtual void ExecuteCommand() = 0;
	virtual CXStr GetTooltip() const = 0;

protected:
/*0x0c*/ int m_icon = -1;
/*0x10*/ CXStr m_text;
/*0x14*/
};

// A menu item that executes a command
class [[offsetcomments]] CascadeItemCommand : public CascadeItemCommandBase
{
public:
	CascadeItemCommand(int icon, const char* text, int command);

	virtual void ExecuteCommand() override;
	virtual CXStr GetTooltip() const override { return m_text; }

private:
/*0x14*/ int m_command = -1;
/*0x18*/
};

//----------------------------------------------------------------------------

// This is the frame the holds the EQ and store buttons
class [[offsetcomments]] CEQMainWnd : public CSidlScreenWnd
{
public:
	CEQMainWnd(CXWnd* pParent);
	virtual ~CEQMainWnd();

	virtual void UpdateCascadeMenuItems() {}

/*0x248*/ CButtonWnd*       EQButtonWnd;
/*0x24c*/ CButtonWnd*       SCButtonWnd;
/*0x250*/ CButtonWnd*       FlashSaleButtonWnd;
/*0x254*/ CascadeItemArray* CascadeMenuItems;
/*0x258*/ int               MenuId;
/*0x25c*/
};

//----------------------------------------------------------------------------

// there are four types of icon caches
enum eIconCacheType
{
	IconCacheType_Item = 0,
	IconCacheType_Spell = 1,
	IconCacheType_Menu = 2,
	IconCacheType_SpeakingIndicator = 3,
};

class [[offsetcomments]] IconCache
{
public:
/*0x00*/ HashTable<CTextureAnimation*> IconTextures;
/*0x10*/ CXStr              pAnimationName;
/*0x14*/ int                Offset;
/*0x18*/ int                MinValue;
/*0x1c*/ int                MaxValue;
/*0x20*/

	EQLIB_OBJECT CTextureAnimation* GetIcon(int);
};

//----------------------------------------------------------------------------

void InitializeUI();

} // namespace eqlib
