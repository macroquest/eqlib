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

#include "ForwardDecls.h"
#include "Common.h"
#include "Constants.h"
#include "Containers.h"
#include "CXStr.h"
#include "CXWnd.h"
#include "Containers.h"
#include "Items.h"
#include "XMLData.h"
#include "UITemplates.h"
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
	uint32_t lastUpdate;
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

class [[offsetcomments]] CEQGBitmap
	: public CThreadLoader
	, public TListNode<CEQGBitmap>
{
public:
/*0x20*/ eBitmapType        eType;
/*0x24*/ MemPoolManagerType eMemoryPoolManagerType;
/*0x28*/ char*              FileName;
/*0x2c*/ uint32_t           SourceWidth;
/*0x30*/ uint32_t           SourceHeight;
/*0x34*/ float              DetailScale;
/*0x38*/ uint32_t           GrassDensity;
/*0x3c*/ uint32_t           Width;
/*0x40*/ uint32_t           Height;
/*0x44*/ bool               bHasTexture;
	union
	{
	/*0x48*/ IDirect3DBaseTexture9* pD3DTexture;
	/*0x48*/ void* pRawBitmap;
	};
/*0x4c*/ uint32_t           ObjectIndex;
/*0x50*/ uint32_t           Size;
/*0x54*/ bool               bForceMipMap;
/*0x58*/ int                TrackingType;
/*0x5c*/ float              SQDistanceToCamera;
/*0x60*/ uint32_t           LastDistanceTime;
/*0x64*/ uint32_t           LastRenderTime;
/*0x68*/ uint32_t           LoadedTime;
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
/*0x00*/ SWadFile*          pWadFile;
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

	CButtonWnd* GetButton(int index) const
	{
		return index >= 0 && index < Buttons.GetLength() ? Buttons[index] : nullptr;
	}

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

// @sizeof(CButtonWnd) == 0x260 :: 2013-05-10 (emu) @ 0x86D16E
constexpr size_t CButtonWnd_size = 0x260;

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
	EQLIB_OBJECT virtual void SetCoolDownCompletionTime(eqtime_t time, uint32_t total);
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
	void SetDecalTint(COLORREF cr) { DecalTint = cr; }
	void SetDecalTint(mq::MQColor color) { DecalTint = color.ToARGB(); }

	//----------------------------------------------------------------------------
	// data members
/*0x1d8*/ int                   MouseButtonState;
/*0x1dc*/ bool                  bPicture;
/*0x1e0*/ CRadioGroup*          pGroup;
/*0x1e4*/ bool                  Checked;
/*0x1e5*/ bool                  bMouseOverLastFrame;
/*0x1e8*/ CXPoint               DecalOffset;
/*0x1f0*/ CXSize                DecalSize;
/*0x1f8*/ COLORREF              DecalTint;                // Color
/*0x1fc*/ CXRect                TextOffsets;
/*0x20c*/ int                   TextModeBits;
/*0x210*/ COLORREF              Mouseover;
/*0x214*/ COLORREF              Pressed;
/*0x218*/ COLORREF              Disabled;
/*0x21c*/ unsigned int          CoolDownBeginTime;
/*0x220*/ unsigned int          CoolDownDuration;
///*0x22c*/ CXStr                 Indicator;
///*0x230*/ unsigned int          IndicatorVal;
///*0x234*/ CTextObjectInterface* pIndicatorTextObject;
///*0x238*/ unsigned int          Unknown0x248;
/*0x224*/ CButtonDrawTemplate   DrawTemplate;
///*0x270*/ bool                  bAllowButtonClickThrough;
///*0x271*/ bool                  bCoolDownDoDelayedStart;
/*0x258*/ bool                  bIsCheckbox;
/*0x259*/ bool                  bIsDrawLasso;
/*0x25c*/ uint32_t              ButtonStyle;              // tbd
/*0x260*/

	ALT_MEMBER_ALIAS(bool, Checked, bChecked);

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
	EQLIB_OBJECT static VirtualFunctionTable* sm_vftable;
};

SIZE_CHECK(CButtonWnd, CButtonWnd_size);

inline namespace deprecated {
	using CBUTTONWND DEPRECATE("Use CButtonWnd instead of CBUTTONWND") = CButtonWnd;
	using PCBUTTONWND DEPRECATE("Use CButtonWnd* instead of PCBUTTONWND") = CButtonWnd*;
}

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
/*0x260*/ bool bOrgState;
/*0x264*/
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

	EQLIB_OBJECT CXRect GetListRect() const;
	inline CXRect GetListRect(bool) { return GetListRect(); }

	EQLIB_OBJECT void SetColors(COLORREF norm, COLORREF highlight, COLORREF selected);
	void SetColors(mq::MQColor norm, mq::MQColor highlight, mq::MQColor selected) { SetColors(norm.ToARGB(), highlight.ToARGB(), selected.ToARGB()); }

	EQLIB_OBJECT int InsertChoice(const CXStr& text, uint32_t data = 0);
	EQLIB_OBJECT void SetChoice(int index);
	EQLIB_OBJECT int GetItemCount();
	EQLIB_OBJECT void DeleteAll();

	EQLIB_OBJECT CXRect GetTextRect() const;
	EQLIB_OBJECT CXRect GetButtonRect() const;

	EQLIB_OBJECT int GetCurChoice() const;
	EQLIB_OBJECT CXStr GetCurChoiceText() const;

	//----------------------------------------------------------------------------
	// data members
/*0x1d8*/ CListWnd*                    pListWnd;
/*0x1dc*/ int                          ListHeightMax;
/*0x1e0*/ int                          ListHeight;
/*0x1e4*/ CButtonDrawTemplate          ButtonDrawTemplate;
/*0x218*/
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

constexpr int EDITWND_MAX_TAGS = 10;

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
/*0x1d8*/ eTextAlign   eAlign = eta_Left;
/*0x1dc*/ int          StartPos = 0;
/*0x1e0*/ int          EndPos = 0;
/*0x1e4*/ int          MaxChars = -1;
/*0x1e8*/ int          MaxBytesUTF8 = -1;
/*0x1ec*/ CXStr        InputText;
/*0x1f0*/ int          TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x218*/ int          TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x240*/ int          TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x268*/ int          TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x290*/ int          TagDynamicSize[EDITWND_MAX_TAGS];
/*0x2b8*/ int          TagCodes[EDITWND_MAX_TAGS];
/*0x2e0*/ CXStr        TagStrings[EDITWND_MAX_TAGS];
/*0x308*/ int          TagCount;
/*0x30c*/ uint32_t     EditStyle;
/*0x310*/
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

/*0x310*/ bool         bAnchorAtStart;
/*0x311*/ bool         bCaretAtEnd;
/*0x312*/ bool         bAutoVScrollCalc;
/*0x313*/ bool         bEditable;
/*0x314*/ CXStr        FilterChars;
/*0x318*/ int          EditMode;
/*0x31c*/ wchar_t      PasswordChar;
/*0x320*/ ArrayClass2<uint32_t> LineIndices;
/*0x33c*/
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

// size: 0x240
class [[offsetcomments]] CGaugeWnd : public CXWnd
{
public:
	EQLIB_OBJECT CGaugeWnd(CXWnd*, uint32_t, const CXRect&, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, unsigned long, unsigned long, bool, int, int, int, int);
	EQLIB_OBJECT void SpecialToolTip();

	EQLIB_OBJECT CXRect CalcFillRect(CXRect rect, int value) const;
	EQLIB_OBJECT CXRect CalcLinesFillRect(CXRect rect, int value) const;

	// virtual
	EQLIB_OBJECT ~CGaugeWnd();
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int HandleLButtonUp(const CXPoint&, uint32_t);
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT void SetAttributesFromSidl(CParamScreenPiece*);

	//----------------------------------------------------------------------------
	// data members

/*0x1d8*/ int          EQType;
/*0x1dc*/ D3DCOLOR     FillTint;
/*0x1e0*/ D3DCOLOR     LinesFillTint;
/*0x1e4*/ bool         bDrawLinesFill;
/*0x1e8*/ int          TextOffsetX;
/*0x1ec*/ int          TextOffsetY;
/*0x1f0*/ int          GaugeOffsetX;
/*0x1f4*/ int          GaugeOffsetY;
/*0x1f8*/ float        LastFrameVal;
/*0x1fc*/ CXStr        LastFrameName;
/*0x200*/ int          LastFrameTime;
/*0x204*/ int          LastFrameTarget;
/*0x208*/ CXStr        GaugeTooltip;
/*0x20c*/ int          TooltipVal;
/*0x210*/ CGaugeDrawTemplate DrawTemplate;
/*0x22c*/ CTextObjectInterface* pTextObject;
/*0x230*/ CXStr        NextDrawStr;
/*0x234*/ bool         bSmooth;
/*0x238*/ int          TargetVal;
/*0x23c*/ bool         bUseTargetVal;
/*0x240*/
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
	EQLIB_OBJECT void SetCheck(bool check);

	//----------------------------------------------------------------------------
	// data members

/*0x1d8*/ int                BarIndex;
/*0x1dc*/ int                ButtonIndex;
/*0x1e0*/ uint32_t           Timer;
/*0x1e4*/ CTextureAnimation* DecalIcon;
/*0x1e8*/ int                LastButtonType;
/*0x1ec*/ int                LastButtonSlot;
/*0x1f0*/ char               LastButtonPage;
/*0x1f1*/ EqItemGuid         LastItemGuid;
/*0x204*/ int                LastItemId;
/*0x208*/ int                LastIconType;
/*0x20c*/ int                LastIconSlot;
/*0x210*/ CXStr              LastLabel;
/*0x214*/ CXStr              DefaultLabel;
/*0x218*/ bool               bForceUpdate;
/*0x21c*/ CTextObjectInterface* pKeyMapText;
/*0x220*/ int                Unknown0x228;
/*0x224*/ CButtonWnd*        pButtonWnd;
/*0x228*/ CInvSlotWnd*       pInvSlotWnd;
/*0x22c*/ CSpellGemWnd*      pSpellGemWnd;
/*0x230*/ CXSize             BaseSize;
/*0x238*/ int                ButtonPercentSize;
/*0x23c*/ CXSize             BaseButtonSize;
/*0x244*/ CXSize             BaseDecalSize;
/*0x24c*/ CXSize             BaseInvButtonSize;
/*0x254*/ CXSize             BaseSpellButtonSize;
/*0x25c*/ int                Unknown0x264;
/*0x260*/
};
//============================================================================
// CLabelWnd
//============================================================================

// size: 0x1e4
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
/*0x1d8*/ bool         bNoWrap;
/*0x1d9*/ bool         bAlignRight;
/*0x1da*/ bool         bAlignCenter;
/*0x1dc*/ int          xOffset;
/*0x1e0*/ bool         bResizeHeightToText;
/*0x1e4*/

///*0x1e4*/ CXStr        PrependText;
///*0x1e8*/ CXStr        Text;
///*0x1ec*/ CXStr        AppendText;
///*0x1f0*/ bool         bTextDirty;

	__declspec(property(get = GetWindowText, put = SetWindowText)) CXStr Text;
};

//============================================================================
// CLabel
//============================================================================

// size: 0x1e8
class [[offsetcomments]] CLabel : public CLabelWnd
{
public:
	// constructor / destructor
	CLabel(CXWnd* parent, uint32_t id, CXRect rect, int EQType);
	virtual ~CLabel();

	// virtual functions
	virtual void UpdateText() override;

	// data members
/*0x1e4*/ int          EQType;
/*0x1e8*/
};

inline namespace deprecated {
	using CLABEL DEPRECATE("Use CLabel instead of CLABEL") = CLabel;
	using PCLABEL DEPRECATE("Use CLabel* instead of PCLABEL") = CLabel*;
}

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
/*0x14*/
};

struct [[offsetcomments]] SListWndLine
{
/*0x000*/ ArrayClass<SListWndCell> Cells;
/*0x010*/ uint32_t                Data = 0;
/*0x014*/ int                     Height = -1;
/*0x018*/ bool                    bSelected = false;
/*0x019*/ bool                    bEnabled = true;
/*0x01c*/ STreeData               Treedata;
/*0x024*/ char                    TooltipText[256];
/*0x124*/ bool                    bVisible = true;
/*0x128*/

	uint32_t get_bIsSeparator() const { return 0; }
	__declspec(property(get = get_bIsSeparator)) uint32_t bIsSeparator;
};

class [[offsetcomments]] SListWndSortInfo
{
public:
/*0x00*/ int                      SortCol;
/*0x04*/ const SListWndLine&      ListWndLine1;
/*0x08*/ CXStr                    StrLabel1;
/*0x0c*/ uint32_t                 Data1;
/*0x10*/ const SListWndLine&      ListWndLine2;
/*0x14*/ CXStr                    StrLabel2;
/*0x18*/ uint32_t                 Data2;
/*0x1c*/ int                      SortResult;
/*0x20*/
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
/*0x1c*/ uint32_t                 Data = 0;
/*0x20*/ uint32_t                 Flags = 0;
/*0x24*/ uint32_t                 Type = CellTypeTextIcon; // ECellType
/*0x28*/ CTextureAnimation*       pTextureAnim = nullptr;
/*0x2c*/ CTextureAnimation*       pSelected = nullptr;
/*0x30*/ CTextureAnimation*       pMouseOver = nullptr;
/*0x34*/ CXStr                    Tooltip;
/*0x38*/ bool                     bResizable = false;
/*0x3c*/

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

	// The datatype used for storing custom data in a list item.
	using UserDataType = uint32_t;

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

	// Emu Combatibility Functions
	inline void Sort(bool) {
		Sort();
	}

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
	EQLIB_OBJECT int AddColumn(const CXStr& Label, CTextureAnimation* pTA, int Width, uint32_t Flags, CXStr Tooltip = "",
		uint32_t Type = CellTypeTextIcon, CTextureAnimation* pTASelected = nullptr, CTextureAnimation* pTAMouseOver = nullptr,
		bool bResizeable = false, CXSize TextureSize = {}, CXPoint TextureOffset = {});
	EQLIB_OBJECT int AddColumn(const CXStr& Label, int Width, uint32_t Flags, uint32_t Type = CellTypeTextIcon);
	EQLIB_OBJECT int AddLine(SListWndLine*);

	EQLIB_OBJECT int AddString(const CXStr& Str, COLORREF Color, uint32_t Data = 0, const CTextureAnimation* pTa = nullptr, const char* TooltipStr = nullptr);
	int AddString(const CXStr& str, mq::MQColor Color, uint32_t Data = 0, const CTextureAnimation* pTA = nullptr, const char* TooltipStr = nullptr)
	{
		return AddString(str, Color.ToARGB(), Data, pTA, TooltipStr);
	}
	EQLIB_OBJECT int AddString(const char* Str, COLORREF Color, uint32_t Data, const CTextureAnimation* pTa, const char* TooltipStr = nullptr);

	EQLIB_OBJECT int GetColumnJustification(int) const;
	EQLIB_OBJECT int GetColumnMinWidth(int) const;
	EQLIB_OBJECT CXStr GetColumnTooltip(int) const;
	EQLIB_OBJECT int GetColumnWidth(int) const;
	EQLIB_OBJECT int GetCurCol() const;
	EQLIB_OBJECT int GetCurSel() const;
	EQLIB_OBJECT int GetItemHeight(int) const;
	EQLIB_OBJECT uint32_t GetColumnFlags(int) const;
	EQLIB_OBJECT uint32_t GetItemData(int) const;
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
	EQLIB_OBJECT void InsertLine(int ID, SListWndLine* rEntry);
	EQLIB_OBJECT void RemoveLine(int);
	EQLIB_OBJECT void RemoveString(int);
	EQLIB_OBJECT void SetColumnJustification(int, int);
	EQLIB_OBJECT void SetColumnLabel(int, const CXStr&);
	EQLIB_OBJECT void SetColumnWidth(int, int);
	EQLIB_OBJECT void SetCurSel(int);
	EQLIB_OBJECT void SetItemColor(int, int, unsigned long);
	void SetItemColor(int row, int col, mq::MQColor color) { SetItemColor(row, col, color.ToARGB()); }
	EQLIB_OBJECT void SetItemData(int ID, uint32_t Data);
	EQLIB_OBJECT void SetItemText(int ID, int SubID, const CXStr& Text);
	EQLIB_OBJECT void ShiftColumnSeparator(int, int);
	EQLIB_OBJECT void ToggleSel(int);
	EQLIB_OBJECT void SetColumnsSizable(bool bColumnsSizable);
	EQLIB_OBJECT void GetWndPosition(CXWnd* pWnd, int& ItemID, int& SubItemID) const;
	EQLIB_OBJECT void SetItemWnd(int Index, int SubItem, CXWnd* pWnd);
	EQLIB_OBJECT CXWnd* GetItemWnd(int Index, int SubItem = 0) const;
	EQLIB_OBJECT void SetItemIcon(int Index, int SubItem, const CTextureAnimation* pTA);
	EQLIB_OBJECT void CalculateCustomWindowPositions();

	EQLIB_OBJECT void SetColors(COLORREF crNormal, COLORREF crHighlight, COLORREF crSelected);
	inline void SetColors(mq::MQColor normal, mq::MQColor highlight, mq::MQColor selected) { SetColors(normal.ToARGB(), highlight.ToARGB(), selected.ToARGB()); }


	EQLIB_OBJECT int GetItemAtPoint(const CXPoint& pt) const;
	EQLIB_OBJECT void GetItemAtPoint(const CXPoint& pt, int* ID, int* SubItem) const;


	inline int GetColumnCount() const { return Columns.GetLength(); }

	// Index of the first row in the list where the text in column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(int column, const std::function<bool(const CXStr)>& predicate);

	// Index of the first row in the list where the text in the first column matches predicate, or -1 if no row matches
	EQLIB_OBJECT int IndexOf(const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row where the text in columns matches predicate
	EQLIB_OBJECT bool Contains(int column, const std::function<bool(const CXStr)>& predicate);

	// True if the list contains a row the text in the first column matches predicate
	EQLIB_OBJECT bool Contains(const std::function<bool(const CXStr)>& predicate);

	EQLIB_OBJECT CXStr GetItemText(int index, int subIndex = 0) const;

	DEPRECATE("GetItemText: Passing in a pointer to CXStr for GetItemText is deprecated. It should return CXStr instead.")
	void GetItemText(CXStr* pStr, int index, int subIndex = 0) const
	{
		*pStr = GetItemText(index, subIndex);
	}

	//----------------------------------------------------------------------------

	// Sets the sorting column. If this is the current column it will flip its order.
	inline void SetSortColumn(int column)
	{
		if (column < 0 || column >= Columns.GetCount())
			return;

		if (SortCol == column)
			bSortAsc = !bSortAsc;
		else
		{
			SortCol = column;
			bSortAsc = true;
		}

		Sort(false);
	}

	inline int GetItemCount() const { return ItemsArray.GetLength(); }

	//----------------------------------------------------------------------------
	// data members

/*0x1d8*/ ArrayClass<SListWndLine> ItemsArray;
/*0x1e8*/ ArrayClass<SListWndColumn> Columns;
/*0x1f8*/ int                 CurSel;
/*0x1fc*/ int                 CurCol;
/*0x200*/ int                 DownItem;
/*0x204*/ int                 ScrollOffsetY;
/*0x208*/ int                 HeaderHeight;
/*0x20c*/ int                 FirstVisibleLine;
/*0x210*/ int                 SortCol;
/*0x214*/ bool                bSortAsc;
/*0x215*/ bool                bFixedHeight;
/*0x216*/ bool                bOwnerDraw;
/*0x217*/ bool                bCalcHeights;
/*0x218*/ bool                bColumnSizable;
/*0x21c*/ int                 LineHeight;
/*0x220*/ int                 ColumnSepDragged;
/*0x224*/ int                 ColumnSepMouseOver;
/*0x228*/ COLORREF            HeaderText;
/*0x22c*/ COLORREF            Highlight;
/*0x230*/ COLORREF            Selected;
/*0x234*/ CUITextureInfo      BGHeader;
/*0x24c*/ COLORREF            BGHeaderTint;
/*0x250*/ CTextureAnimation*  pRowSep;
/*0x254*/ CTextureAnimation*  pColumnSep;
/*0x258*/ CEditBaseWnd*       pEditCell;
/*0x25c*/ IListItemDataHandler* pItemDataHandler;
/*0x260*/ bool                bHasItemTooltips;
/*0x264*/ CXRect              PrevInsideRect;
/*0x274*/ uint32_t            ListWndStyle;
/*0x278*/ eqtime_t            LastVisibleTime;
/*0x27c*/

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x164*/ void* OnHeaderClick;
	/*0x168*/ void* DrawColumnSeparators;
	/*0x16c*/ void* DrawSeparator;
	/*0x170*/ void* DrawLine;
	/*0x174*/ void* DrawHeader;
	/*0x178*/ void* DrawItem;
	/*0x17c*/ void* DeleteAll;
	/*0x180*/ void* Compare;
	/*0x184*/ void* Sort;
	/*0x188*/
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

	CTextureAnimation* GetTabIcon() const { return pTATabIcon; }

	EQLIB_OBJECT CXStr GetTabText(bool bShowFlashing = false) const;

	EQLIB_OBJECT void SetTabText(CXStr&) const;
	EQLIB_OBJECT void FlashTab(bool flash, int msTime) const;

/*0x220*/ CXStr              TabText;
/*0x224*/ CXStr              OrigTabText;
/*0x228*/ COLORREF           CRTabText;
/*0x22c*/ COLORREF           CRTabTextActive;
/*0x230*/ CTextureAnimation* pTATabIcon;
/*0x234*/ CTextureAnimation* pTATabIconActive;
/*0x238*/ int                Unknown0x250;
/*0x23c*/ int                Unknown0x254;
/*0x240*/ int64_t            LastFlashTime;
/*0x248*/ COLORREF           CRHighlightFlashColor;
/*0x24c*/ bool               bHighlightOnNewMessages;
/*0x24d*/ bool               bFlashing;
/*0x250*/
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

/*0x1d8*/ CButtonDrawTemplate      bdtThumb;
/*0x20c*/ CTextureAnimation*       ptaBackground;
/*0x210*/ CTextureAnimation*       ptaEndCapLeft;
/*0x214*/ CTextureAnimation*       ptaEndCapRight;
/*0x218*/
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

	inline CXStr GetSTMLText() const { return STMLText; }

	//----------------------------------------------------------------------------
	// data members

	// todo: verify
/*0x1d8*/ CXStr                        STMLText;
/*0x1dc*/ CircularArrayClass2<STextLine> TextLines;
/*0x204*/ int32_t                      TextTotalHeight;
/*0x208*/ int32_t                      TextTotalWidth;
/*0x20c*/ int32_t                      Unknown0x224;
/*0x210*/ ArrayClass2<SLinkInfo>       Links;
/*0x22c*/ ArrayClass<STable>           Tables;
/*0x23c*/ bool                         bReparseNow;
/*0x23d*/ bool                         bResized;
/*0x23e*/ bool                         bAlignCenter;
/*0x240*/ int                          LineSpacingAdjust;
/*0x244*/ int32_t                      CapturedLinkID;
/*0x248*/ int32_t                      MousedOverLinkID;
/*0x24c*/ COLORREF                     BackGroundColor;
/*0x250*/ COLORREF                     TextColor;
/*0x254*/ COLORREF                     LinkColor;
/*0x258*/ COLORREF                     VLinkColor;
/*0x25c*/ COLORREF                     ALinkColor;
/*0x260*/ COLORREF                     MLinkColor;
/*0x264*/ ESTMLParseState              CurrentParseState;
/*0x268*/ ArrayClass2<SHistoryElement> HistoryArray;
/*0x284*/ int32_t                      HistoryIndex;
/*0x288*/ CStmlReport*                 pStmlReport;
/*0x28c*/ int                          MaxLines;
/*0x290*/ int                          PlayerContextMenuIndex;
/*0x294*/ int                          Unknown0x2ac;
/*0x298*/ int                          Unknown0x2b0;
/*0x29c*/ int                          Unknown0x2b4;
/*0x2a0*/
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
	EQLIB_OBJECT void UpdatePage();

	EQLIB_OBJECT void SetPageRect(const CXRect&);
	EQLIB_OBJECT CPageWnd* GetPageFromTabPoint(CXPoint) const;

	EQLIB_OBJECT CXRect GetPageClientRect() const;
	EQLIB_OBJECT CXRect GetPageInnerRect() const;
	EQLIB_OBJECT CXRect GetTabInnerRect(int) const;
	EQLIB_OBJECT CXRect GetTabRect(int) const;

	int GetNumTabs() const { return PageArray.GetLength(); }
	int GetCurrentTabIndex() const { return CurTabIndex; }

	EQLIB_OBJECT CPageWnd* GetPageFromTabIndex(int tabIndex) const;
	EQLIB_OBJECT CPageWnd* GetCurrentPage() const;

	EQLIB_OBJECT void SetPage(int index, bool bNotifyParent = true);
	void SetPage(int index, bool bNotifyParent, bool bBringToTop, bool bSomething = false)
	{
		UNUSED(bBringToTop);
		UNUSED(bSomething);

		SetPage(index, bNotifyParent);
	}
	EQLIB_OBJECT void SetPage(CPageWnd*, bool bNotifyParent = true, bool bBringToTop = true);


	EQLIB_OBJECT void InsertPage(CPageWnd* pPageWnd, int position = -1); // defaults to the last tab
	EQLIB_OBJECT void RemovePage(CPageWnd* pPageWnd);

	inline bool IsValidIndex(int index) const
	{
		return index >= 0 && index < GetNumTabs();
	}


	//----------------------------------------------------------------------------
	// data members

/*0x1d8*/ CTAFrameDraw*           pTabBorder;
/*0x1dc*/ CTAFrameDraw*           pPageBorder;
/*0x1e0*/ ArrayClass<CPageWnd*>   PageArray;
/*0x1f0*/ int                     CurTabIndex;
/*0x1f4*/ int                     TabHeight;
/*0x1f8*/ CXRect                  PageRect;
/*0x208*/ bool                    bShowTabs;
/*0x20c*/ int                     TabStyle;
/*0x210*/ int                     TabWidth;
/*0x214*/
};

//============================================================================
// CTreeViewWnd
//============================================================================

class [[offsetcomments]] CTreeViewWnd : public CListWnd
{
public:
	CTreeViewWnd(CXWnd*, uint32_t, CXRect, int);
	virtual ~CTreeViewWnd();
};

//============================================================================

class [[offsetcomments]] CLayoutWnd : public CSidlScreenWnd
{
public:
	CLayoutWnd(CXWnd*, uint32_t, const CXRect&, const CXStr&);
	virtual ~CLayoutWnd();

/*0x220*/ uint32_t             spacing;
/*0x224*/ bool                 expandLast;
/*0x228*/ int                  paddingLeft;
/*0x22c*/ int                  paddingRight;
/*0x230*/ int                  paddingTop;
/*0x234*/ int                  paddingBottom;
/*0x238*/ };

// Horizontal and Vertical layouts are basically the same, but transposed.
class [[offsetcomments]] CHorizontalLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x238*/ ArrayClass<CXWnd*>         visibleChildren;
/*0x248*/ ArrayClass<CXRect>         dividerRects;
/*0x258*/ int                        activeDivider;
/*0x25c*/ bool                       dividerHover;
/*0x25d*/ bool                       dividerMoving;
/*0x260*/ int                        oldPosCoord;              // X for horizontal, Y for vertical
/*0x264*/ bool                       bStyle_Dividers;          // the Style_Dividers property from XML
/*0x268*/
};

class [[offsetcomments]] CVerticalLayoutWnd : public CLayoutWnd
{
public:
/*0x238*/ ArrayClass<CXWnd*>         visibleChildren;
/*0x248*/ ArrayClass<CXRect>         dividerRects;
/*0x258*/ int                        activeDivider;
/*0x25c*/ bool                       dividerHover;
/*0x25d*/ bool                       dividerMoving;
/*0x260*/ int                        oldPosCoord;              // X for horizontal, Y for vertical
/*0x264*/ bool                       bStyle_Dividers;          // the Style_Dividers property from XML
/*0x268*/
};

class [[offsetcomments]] CTileLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x238*/ bool                       horizontalFirst;
/*0x239*/ bool                       anchorToTop;
/*0x23a*/ bool                       anchorToLeft;
/*0x23c*/ int                        secondarySpacing;
/*0x240*/ bool                       firstPieceTemplate;
/*0x241*/ bool                       snapToChildren;
/*0x244*/ CXWnd*                     autoStretchWindow;
/*0x248*/
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

	// When confirmation for AA purchase is displayed, two message types are used
	// to identify which button was pressed
	// 100 = "Train" button
	// 101 = "Buy All" button
	virtual void DialogResponse(int msg, int, void*) {}

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

#if HAS_ADVANCED_LOOT

struct [[offsetcomments]] AdvancedLootItemNPC
{
/*0x00*/ unsigned int  CorpseID;                 // spawnId of the corpse that has this lootitem
/*0x04*/ short         StackCount;
/*0x08*/ unsigned int  Expiration;
/*0x0c*/ bool          Locked;
/*0x0d*/ char          Name[0x40];
/*0x50*/ //more data here?
};

inline namespace deprecated {
	using LOOTDETAILS DEPRECATE("Use AdvancedLootItemNPC instead of LOOTDETAILS") = AdvancedLootItemNPC;
	using PLOOTDETAILS DEPRECATE("Use AdvancedLootItemNPC* instead of PLOOTDETAILS") = AdvancedLootItemNPC*;
}

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
/*0x64*/ int           Unknown0x64;
/*0x68*/ bool          bAutoRoll;
/*0x69*/ bool          ActivelyManaged;          // User has the manage Window up
/*0x6a*/ bool          ContextMenu;              // item has a context menu
/*0x6b*/ bool          AskRandomMode;            // item is in AskRandom mode
/*0x6c*/ bool          CLootInProgress;
/*0x6d*/ bool          PLootInProgress;
/*0x70*/ SoeUtil::Array<AdvancedLootItemNPC> LootDetails;
/*0x80*/ unsigned int  AskTimer;
/*0x84*/ bool          AutoRoll;
/*0x85*/ bool          FG;
/*0x86*/ bool          Need;
/*0x87*/ bool          Greed;
/*0x88*/ bool          No;
/*0x89*/ bool          AlwaysNeed;
/*0x8a*/ bool          AlwaysGreed;
/*0x8b*/ bool          Never;
/*0x8c*/
};

inline namespace deprecated {
	using LOOTITEM DEPRECATE("Use AdvancedLootItem instead of LOOTITEM") = AdvancedLootItem;
	using PLOOTITEM DEPRECATE("Use AdvancedLootItem* instead of PLOOTITEM") = AdvancedLootItem*;
}

struct [[offsetcomments]] AdvancedLootItemList
{
/*0x00*/ SoeUtil::Array<AdvancedLootItem> Items;
/*0x10*/ bool         bIsPersonalLoot;
/*0x14*/ CListWnd*    SharedLootList;
/*0x18*/ CComboWnd*   PersonalLootList;
/*0x1c*/
};

inline namespace deprecated {
	using LOOTLIST DEPRECATE("Use AdvancedLootItemList instead of LOOTLIST") = AdvancedLootItemList;
	using PLOOTLIST DEPRECATE("Use AdvancedLootItemList* instead of PLOOTLIST") = AdvancedLootItemList*;
}

class CorpseData;
class RefreshCorpseItemChoices;
class CGroupMemberBase;
struct RaidMember;

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
	EQLIB_OBJECT void DoSharedAdvLootAction(const AdvancedLootItem& pLootItem, const CXStr& Assignee, bool Action, int Quantity);

	//----------------------------------------------------------------------------
	// data members

/*0x228*/ CVerticalLayoutWnd*       pLayout;                 // ADLW_ScreenLayout
/*0x22c*/ CListWnd*                 pPersonalLootList;       // ADLW_PLLList
/*0x230*/ CButtonWnd*               pPersonalSetBtn;         // ADLW_PLLSetBtn
/*0x234*/ CComboWnd*                pPersonalSetCombo;       // ADLW_PLLSetCmbo
/*0x238*/ CButtonWnd*               pLootAllBtn;             // ADLW_PLL_LootAllBtn
/*0x23c*/ CXWnd*                    pCLLWnd;                 // ADLW_CLLWnd
/*0x240*/ CListWnd*                 pConstructLootList;      // ADLW_CLLList
/*0x244*/ CButtonWnd*               pConstructSetBtn;        // ADLW_CLLSetBtn
/*0x248*/ CComboWnd*                pConstructSetCombo;      // ADLW_CLLSetCmbo
/*0x24c*/ CCheckBoxWnd*             pApplyFiltersChk;        // ADLW_ApplyFiltersCheck
/*0x250*/ CCheckBoxWnd*             pGroupedByNpcChk;        // ADLW_GroupedByNpcCheckbox
/*0x254*/ CButtonWnd*               pEditFiltersBtn;         // ADLW_EditFitlersBtn
/*0x258*/ CButtonWnd*               pLootSettingsBtn;        // ADLW_LootSettingsBtn
/*0x25c*/ CLabelWnd*                pCalculatedMasterLooter; // ADLW_CalculatedMasterLooter
/*0x260*/ CButtonWnd*               pItemBtnTemplate;        // ADLW_ItemBtnTemplate
/*0x264*/ CButtonWnd*               pStatusTemplate;         // ADLW_StatusTemplate
/*0x268*/ CButtonWnd*               pNeverBtnTemplate;       // ADLW_NvrBtnTemplate
/*0x26c*/ CButtonWnd*               pLootBtnTemplate;        // ADLW_LootBtnTemplate
/*0x270*/ CButtonWnd*               pLeaveBtnTemplate;       // ADLW_LeaveBtnTemplate
/*0x274*/ CButtonWnd*               pFreeGrabBtnTemplate;    // ADLW_FreeGrabBtnTemplate
/*0x278*/ CCheckBoxWnd*             pCheckBoxTemplate;       // ADLW_CheckBoxTemplate
/*0x27c*/ CButtonWnd*               pTextLinkTemplate;       // ADLW_TextLinkTemplate
/*0x280*/ CButtonWnd*               pManageBtnTemplate;      // ADLW_ManageBtnTemplate
/*0x284*/ CButtonWnd*               pActionBtnTemplate;      // ADLW_ActionBtnTemplate
/*0x288*/ int                       PLLNPCColumnWidth;
/*0x28c*/ int                       CLLNPCColumnWidth;
/*0x290*/ int                       CLLRNDColumnWidth;
/*0x294*/ int                       CLLManageColumnWidth;
/*0x298*/ int                       CLLActionColumnWidth;
/*0x29c*/ int                       PLLANColumnWidth;
/*0x2a0*/ int                       PLLAGColumnWidth;
/*0x2a4*/ int                       PLLNeverColumnWidth;
/*0x2a8*/ int                       CLLANColumnWidth;
/*0x2ac*/ int                       CLLAGColumnWidth;
/*0x2b0*/ int                       CLLNeverColumnWidth;
/*0x2b4*/ AdvancedLootItemList*     pCLootList;
/*0x2b8*/ AdvancedLootItemList*     pPLootList;
/*0x2bc*/ uint32_t                  LastUpdateTime;
/*0x2c0*/ uint32_t                  LastTransactionCheck;
/*0x2c4*/ bool                      bPopupPending;
/*0x2c8*/ int                       Unknown1;
/*0x2cc*/ int                       Unknown2;
/*0x2d0*/ bool                      bFirstTimeShowingCLL;
/*0x2d4*/ int                       TotalLootCount;
/*0x2d8*/ bool                      bAutoInventoryQuantity;
/*0x2dc*/ int                       CLLActionMenu;
/*0x2e0*/ int                       CLLActionMenuQty;
/*0x2e4*/ int                       PLLActionMenu;
/*0x2e8*/ bool                      bUnknown3;
/*0x2ec*/
};

inline namespace deprecated {
	using EQADVLOOTWND DEPRECATE("Use CAdvancedLootWnd instead of EQADVLOOTWND") = CAdvancedLootWnd;
	using PEQADVLOOTWND DEPRECATE("Use CAdvancedLootWnd* instead of PEQADVLOOTWND") = CAdvancedLootWnd*;
}

#endif // HAS_ADVANCED_LOOT

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

/*0x224*/ CButtonWnd*        pAddButton;
/*0x228*/ CButtonWnd*        pDeleteButton;
/*0x22c*/ CButtonWnd*        pUseButton;
/*0x230*/ CButtonWnd*        pMkHotButton;
/*0x234*/ CButtonWnd*        pAutoSwapButton;
/*0x238*/ CButtonWnd*        pDisplayButtons[MAX_BANDOLIER_SLOTS];
/*0x248*/ CListWnd*          pWeaponSetList;
/*0x24c*/
};

//============================================================================
// CBankWnd
//============================================================================

class [[offsetcomments]] CBankWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x224*/ int          MoneyButtonIndex;
/*0x228*/ unsigned int NextRefreshTime;
/*0x22c*/ bool         bInventoryWasActive;
/*0x22d*/ bool         bRealEstateManagementWasActive;
/*0x230*/ CButtonWnd*  MoneyButtons[5];          // including shared plat
/*0x244*/ CLabel*      BankerNameLabel;
/*0x248*/ CInvSlotWnd* InvSlotWindows[NUM_BANK_SLOTS];
/*0x2a8*/ CLabel*      SharedBankLabel;
/*0x2ac*/ CInvSlotWnd* SharedSlotWindows[NUM_SHAREDBANK_SLOTS];
/*0x2c4*/ CButtonWnd*  DoneButton;
/*0x2c8*/ CButtonWnd*  ChangeButton;
/*0x2cc*/ CButtonWnd*  AutoButton;
/*0x2d0*/ CButtonWnd*  AltStorageButton;
/*0x2d4*/ CButtonWnd*  FindItemButton;
/*0x2d8*/ CButtonWnd*  DragonHoardButton;
/*0x2dc*/ int          BankSize;
/*0x2e0*/

	CBankWnd(CXWnd*, CXStr);
	virtual ~CBankWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd* pWnd, unsigned int uiMessage, void* pData) override;

	int GetNumBankSlots() const { return BankSize; }

	// private
	EQLIB_OBJECT long GetBankQtyFromCoinType(int);
	EQLIB_OBJECT void ClickedMoneyButton(int, int);
	EQLIB_OBJECT void UpdateMoneyDisplay();
};

//============================================================================
// CBarterWnd
//============================================================================

struct BarterInventoryItem
{
	int  ItemID;
	int  Charges;
	int  Qty;
	int  ItemIcon;
	char Name[EQ_MAX_NAME];
};

struct CompensationItem
{
	int  ItemID;
	int  Quantity;
	int  ItemIcon;
	char ItemName[EQ_MAX_NAME];
};

struct [[offsetcomments]] BarterBuyLine
{
/*0x00*/ int      LineIndex;
/*0x04*/ bool     Filled;
/*0x08*/ int      ItemSought;
/*0x0c*/ char     ItemName[EQ_MAX_NAME];
/*0x4c*/ int      ItemIcon;
/*0x50*/ int      ItemQuantity;
/*0x54*/ bool     Active;
/*0x58*/ uint32_t CoinPrice;
/*0x5c*/ ArrayClass<CompensationItem> ItemPrice;
/*0x6c*/ uint32_t BuyerPlayerZoneID;
/*0x70*/ uint32_t BuyerPlayerUniqueID;
/*0x74*/ int      BuyerZoneID;
/*0x78*/ char     BuyerName[EQ_MAX_NAME];
/*0xb8*/
};

struct BarterSearchedItem
{
	char itemName[EQ_MAX_NAME];
	int  itemID;
	int  itemIcon;
	int  searchIndex;
};

// sizeof(CBarterWnd) == 0x4c8 // test 2022-02-07

class [[offsetcomments]] CBarterWnd : public CSidlScreenWnd
{
public:
	enum BuyLineListColumns
	{
		Column_Active = 0,
		Column_Icon,
		Column_Name,
		Column_Count,
		Column_Offering,
	};

/*0x220*/ CStmlWnd*                    pstmlStatus;               // StatusText
/*0x224*/ CListWnd*                    plistItems;                // ItemSearchList
/*0x228*/ CListWnd*                    plistInventory;            // InventoryList
/*0x22c*/ CListWnd*                    plistCompensation;         // CompensationList
/*0x230*/ CListWnd*                    plistBuyLines;             // BuyLineList
/*0x234*/ CEditWnd*                    peditSearch;               // ItemSearchEdit
/*0x238*/ CButtonWnd*                  pbtnSearch;                // ItemSearchButton
/*0x23c*/ CButtonWnd*                  pbtnAddItem;               // InventoryAddButton
/*0x240*/ CButtonWnd*                  pbtnRemoveItem;            // InventoryRemoveButton
/*0x244*/ CButtonWnd*                  pbtnPlat;                  // CompensationPlat
/*0x248*/ CButtonWnd*                  pbtnGold;                  // CompensationGold
/*0x24c*/ CButtonWnd*                  pbtnSilver;                // CompensationSilver
/*0x250*/ CButtonWnd*                  pbtnCopper;                // CompensationCopper
/*0x254*/ CButtonWnd*                  pbtnCreate;                // BuyLineAddButton
/*0x258*/ CEditWnd*                    peditCount;                // CountEdit
/*0x25c*/ CButtonWnd*                  pbtnRemoveLine;            // BuyLineRemoveButton
/*0x260*/ CButtonWnd*                  pbtnUpdateLine;            // BuyLineModifyButton
/*0x264*/ CButtonWnd*                  pbtnActiveLine;            // BuyLineActiveButton
/*0x268*/ CButtonWnd*                  pbtnActivateAllLines;      // BuyLineActivateAllButton
/*0x26c*/ CButtonWnd*                  pbtnListLines;             // ListLinesButton
/*0x270*/ CButtonWnd*                  pbtnClearStatus;           // ClearStatusButton
/*0x274*/ CButtonWnd*                  pbtnStartStop;             // StartStopButton
/*0x278*/ CButtonWnd*                  pbtnOfflineMode;           // OfflineModeButton
/*0x27c*/ CEditWnd*                    peditWelcome;              // WelcomeEdit
/*0x280*/ CButtonWnd*                  pbtnUpdateWelcome;         // UpdateWelcomeButton
/*0x284*/ CButtonWnd*                  pbtnRefreshInventory;      // InventoryRefreshButton
/*0x288*/ CLayoutWnd*                  pLayout;                   // Layout
/*0x28c*/ CLayoutWnd*                  pStatusLayout;             // StatusLayout
/*0x290*/ uint32_t                     lastUpdateTime;
/*0x294*/ eqtime_t                     lastSearchTime;
/*0x298*/ uint32_t                     quantityRequest;
/*0x29c*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x2b8*/ ArrayClass2<BarterSearchedItem> SearchedItems;
/*0x2d4*/ BarterBuyLine                CurrentBuyLine;
/*0x38c*/
};

//============================================================================
// CBarterSearchWnd
//============================================================================

struct [[offsetcomments]] BarterBuyerSearchData
{
/*0x00*/ int      ZoneID;
/*0x04*/ uint32_t UniquePlayerID;
/*0x08*/ uint32_t ZonePlayerID;
/*0x0c*/ char     Name[EQ_MAX_NAME];
/*0x4c*/ };

// Size: 3c8

class [[offsetcomments]] CBarterSearchWnd : public CSidlScreenWnd
{
public:
	enum InventoryListColumns
	{
		Column_Icon = 0,
		Column_Name,
		Column_Count,

		Column_Max,
	};

/*0x220*/ HashTable<BarterBuyerSearchData> Buyers;
/*0x230*/ CListWnd*                    plistInventory;                 // InventoryList
/*0x234*/ CListWnd*                    plistBuyLines;                  // BuyLineList
/*0x238*/ CListWnd*                    plistDetails;                   // DetailsList
/*0x23c*/ CEditWnd*                    peditSearch;                    // ItemSearchEdit
/*0x240*/ CButtonWnd*                  pbtnRefreshInventory;           // RefreshInventoryButton
/*0x244*/ CButtonWnd*                  pbtnSearch;                     // SearchButton
/*0x248*/ CButtonWnd*                  pbtnWelcome;                    // WelcomeButon
/*0x24c*/ CButtonWnd*                  pbtnGreeting;                   // GreetingButton
/*0x250*/ CButtonWnd*                  pbtnFind;                       // FindButton
/*0x254*/ CButtonWnd*                  pbtnHide;                       // HideButton
/*0x258*/ CButtonWnd*                  pbtnBuyLineInspectItem;         // BuyLineInspectButton
/*0x25c*/ CButtonWnd*                  pbtnCompensationInspectItem;    // CompensationInspectButton
/*0x260*/ CButtonWnd*                  pbtnCompensationPreviewItem;    // CompensationPreviewButton
/*0x264*/ CButtonWnd*                  pbtnSellButton;                 // SellButton
/*0x268*/ CComboWnd*                   pcomboPlayersCombo;             // PlayerCombo
/*0x26c*/ CLayoutWnd*                  pLayout;                        // Layout
/*0x270*/ CLayoutWnd*                  pMatchLayout;                   // BuyLineLayout
/*0x274*/ bool                         NeedsUpdate;
/*0x278*/ ArrayClass<BarterBuyLine>    BuyLines;
/*0x288*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x2a4*/ // more members
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

constexpr int MAX_BAZAAR_SEARCH_RESULTS = 200;

// size: 0xBC
struct [[offsetcomments]] BazaarSearchResults
{
	FORCE_SYMBOLS

/*0x00*/ char       sellerName[EQ_MAX_NAME];
/*0x40*/ char       itemName[EQ_MAX_NAME];
/*0x80*/ uint32_t   uniqueSellerID;
/*0x84*/ uint32_t   sellerID;
/*0x88*/ int        zoneID = 0;
/*0x8c*/ int        price = 0;
/*0x90*/ int        position = -1;
/*0x94*/ int        iconID = 0;
/*0x98*/ int        itemID = 0;
/*0x9c*/ int        count = 0;
/*0xa0*/ int        statNum = 0;
/*0xa4*/ float      statNumFloat = 0.f;
/*0xa8*/ EqItemGuid itemGuid;
/*0xbc*/
};

// CBazaarSearchWnd_size: 0x9720
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

/*0x0224*/ uint8_t                     UnknownPadding[0x34];
/*0x0258*/ BazaarSearchResults         searchResults[MAX_BAZAAR_SEARCH_RESULTS];
/*0x9538*/ HashTable<BazaarTraderData> Traders;
/*0x9548*/ CListWnd*                   pItemList;                        // BZR_ItemList
/*0x954c*/ CButtonWnd*                 pQueryButton;
/*0x9550*/ CButtonWnd*                 pWelcomeButton;
/*0x9554*/ CButtonWnd*                 pUpdatePlayerButton;
/*0x9558*/ CButtonWnd*                 pRequestItemButton;
/*0x955c*/ CButtonWnd*                 pRequestPreviewButton;
/*0x9560*/ CButtonWnd*                 pFindTraderButton;
/*0x9564*/ CButtonWnd*                 pHideTradersButton;
/*0x9568*/ CButtonWnd*                 pDefaultButton;
/*0x956c*/ CButtonWnd*                 pBuyButton;
/*0x9570*/ CLabelWnd*                  pItemNameLabel;
/*0x9574*/ CLabelWnd*                  pPlayersLabel;
/*0x9578*/ CLabelWnd*                  pItemSlotLabel;
/*0x957c*/ CLabelWnd*                  pStatSlotLabel;
/*0x9580*/ CLabelWnd*                  pRaceSlotLabel;
/*0x9584*/ CLabelWnd*                  pClassSlotLabel;
/*0x9588*/ CLabelWnd*                  pItemTypeLabel;
/*0x958c*/ CLabelWnd*                  pSearchResultLabel;
/*0x9590*/ CLabelWnd*                  pMaxPriceLabel;
/*0x9594*/ CLabelWnd*                  pMinPriceLabel;
/*0x9598*/ CLabelWnd*                  pItemPrestigeLabel;
/*0x959c*/ CLabelWnd*                  pItemAugmentLabel;
/*0x95a0*/ CComboWnd*                  pItemSlotCombobox;
/*0x95a4*/ CComboWnd*                  pStatSlotCombobox;
/*0x95a8*/ CComboWnd*                  pRaceSlotCombobox;
/*0x95ac*/ CComboWnd*                  pClassSlotCombobox;
/*0x95b0*/ CComboWnd*                  pItemTypeCombobox;
/*0x95b4*/ CComboWnd*                  pPlayersCombobox;
/*0x95b8*/ CComboWnd*                  pItemPrestigeCombobox;
/*0x95bc*/ CComboWnd*                  pItemAugmentCombobox;
/*0x95c0*/ CEditWnd*                   pItemNameInput;
/*0x95c4*/ CEditWnd*                   pMaxPriceInput;
/*0x95c8*/ CEditWnd*                   pMinPriceInput;
/*0x95cc*/ CEditWnd*                   pMaxLevelInput;
/*0x95d0*/ CEditWnd*                   pMinLevelInput;
/*0x95d4*/ CEditWnd*                   pMaxResultsPerTraderInput;
/*0x95d8*/ BYTE                        Unknown0x92C8[0x8];
/*0x95e0*/
};

inline namespace deprecated {
	using BAZAARSEARCHWND DEPRECATE("Use CBazaarSearchWnd instead of BAZAARSEARCHWND") = CBazaarSearchWnd;
	using PBAZAARSEARCHWND DEPRECATE("Use CBazaarSearchWnd* instead of PBAZAARSEARCHWND") = CBazaarSearchWnd*;
}

//============================================================================
// CBazaarWnd
//============================================================================

constexpr int MAX_BAZAAR_ITEMS = 200;

// size: 0xdf0
class [[offsetcomments]] CBazaarWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	inline ItemContainer& GetBazaarItems() { return bazaarItems; }

/*0x224*/ int                selectedSlot;
/*0x228*/ int                curBazaarIndex;
/*0x22c*/ int                curItemPrice;
/*0x230*/ int                moneyBtnIndex;
/*0x234*/ ItemPtr            selectedItem;
/*0x238*/ CButtonWnd*        startButton;
/*0x23c*/ CButtonWnd*        endButton;
/*0x240*/ CButtonWnd*        clearButton;
/*0x244*/ CButtonWnd*        setPriceButton;                    // BZW_SetPrice_Button
/*0x248*/ CButtonWnd*        listButton;
/*0x24c*/ uint32_t           unknown0x25c;
/*0x250*/ CButtonWnd*        addButton;
/*0x254*/ CButtonWnd*        removeButton;
/*0x258*/ CButtonWnd*        moneyButton[4];                    // NumMoneySlotTypes
/*0x268*/ CButtonWnd*        offlineModeButton;
/*0x26c*/ CStmlWnd*          bazaarText;
/*0x270*/ CInvSlotWnd*       bazaarSlots[MAX_BAZAAR_ITEMS];     // BZR_BazaarSlot%d
/*0x590*/ ItemContainer      bazaarItems;
/*0x5c8*/ uint32_t           myPrice[MAX_BAZAAR_ITEMS];
/*0x8e8*/ bool               bItemActive[MAX_BAZAAR_ITEMS];
/*0x9b0*/ char               iniFilename[64];
/*0x9f0*/ bool               bIsMerchant;
/*0x9f4*/
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
};

// Size: 0xb10
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



	//----------------------------------------------------------------------------
	// data members

/*0x224*/ bool                  bOldIconArrangement;
/*0x228*/ CTextureAnimation*    ptaBlueIconBackground;
/*0x22c*/ CTextureAnimation*    ptaRedIconBackground;
/*0x230*/ CTextureAnimation*    ptaYellowIconBackground;
/*0x234*/ CTextureAnimation*    ptaBuffIcons[MAX_BUFF_ICONS];
/*0x2dc*/ CButtonWnd*           pBuffButtons[MAX_BUFF_ICONS];    // was: pBuff
/*0x384*/ CTextObjectInterface* pTimeRemainingTexts[MAX_BUFF_ICONS];
/*0x42c*/ CTextObjectInterface* pCounterTexts[MAX_BUFF_ICONS];
/*0x4d4*/ CTextObjectInterface* pLimitedUseTexts[MAX_BUFF_ICONS];
/*0x57c*/ int                   spellIds[MAX_BUFF_ICONS];        // was: BuffId
/*0x624*/ int                   buffTimers[MAX_BUFF_ICONS];      // was: BuffTimer
/*0x6cc*/ HashTable<CXStr>      whoCastHash;                     // was: WhoCast
/*0x6dc*/ uint32_t              nextRefreshTime;
/*0x6e0*/ int                   initWindowWidth;
/*0x6e4*/ int                   initWindowHeight;
/*0x6e8*/ BuffWindowType        buffWindowType;
/*0x6ec*/ int                   firstEffectSlot;
/*0x6f0*/ int                   lastEffectSlot;                  // was: MaxLongBuffs 0x2a (NUM_LONG_BUFFS)
/*0x6f4*/ int                   maxBuffButtons;                  // was: MaxShortBuffs 0x37 (NUM_SHORT_BUFFS)
/*0x6f8*/ int                   contextMenuId;
/*0x6fc*/ CXWnd*                selectedButtonWnd;               // this field doesn't alwayws appear to be initialize
/*0x700*/ bool                  updatedMenuItems;
/*0x704*/ int                   lastBuffRefreshTime;
/*0x708*/

	ALT_MEMBER_GETTER_ARRAY(CButtonWnd*, MAX_BUFF_ICONS, pBuffButtons, pBuff);
	ALT_MEMBER_GETTER_ARRAY(int, MAX_BUFF_ICONS, spellIds, BuffId);
	ALT_MEMBER_GETTER_ARRAY(int, MAX_BUFF_ICONS, buffTimers, BuffTimer);
	ALT_MEMBER_ALIAS(HashTable<CXStr>, whoCastHash, WhoCast);
	ALT_VMEMBER_GETTER_DEPRECATED(int, lastEffectSlot, MaxLongBuffs, "CBuffWindow: Use lastEffectSlot instead of MaxLongBuffs");
	ALT_VMEMBER_GETTER_DEPRECATED(int, maxBuffButtons, MaxShortBuffs, "CBuffWindow: Use maxBuffButtons instead of MaxShortBuffs");
};

inline namespace deprecated {
	using EQBUFFWINDOW DEPRECATE("Use CBuffWindow instead of EQBUFFWINDOW") = CBuffWindow;
	using PEQBUFFWINDOW DEPRECATE("Use CBuffWindow* instead of PEQBUFFWINDOW") = CBuffWindow*;
}

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

// size: 0x3e0
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

	struct SpellCategoryData
	{
		int                             id;
		int                             level;
	};

	struct SpellCategoryMinor
	{
		int                             id;
		char                            name[64];
		ArrayClass<SpellCategoryData*>  spells;
	};

	struct SpellCategoryMajor
	{
		int                             id;
		char                            name[64];
		ArrayClass<SpellCategoryMinor*> subcategories;
	};

	//----------------------------------------------------------------------------
	// data members

/*0x228*/ CPopDialogWnd*       pCurrentPop;
/*0x22c*/ uint32_t             lastRefresh;
/*0x230*/ bool                 bHorizontal;
/*0x234*/ CSpellGemWnd*        SpellSlots[NUM_SPELL_GEMS];     // CSPW_Spell%d
/*0x264*/ CButtonWnd*          pBtnSpellBook;                  // CSPW_SpellBook
/*0x268*/ CButtonWnd*          pBtnSpellBookH;                 // CSPW_SpellBookH
/*0x26c*/ CButtonWnd*          pBtnSpellBookV;                 // CSPW_SpellBookV
/*0x270*/ CXWnd*               pHorizontalTemplate;            // CSPW_HorizontalOrientationTemplate
/*0x274*/ CXWnd*               pVerticalTemplate;              // CSPW_VerticalOrientationTemplate
/*0x278*/ CTileLayoutWnd*      pSpellGemLayout;                // CSPW_SpellGemLayout
/*0x27c*/ CXWnd*               pHorizontalBook;                // CSPW_HorizontalOrientationBook
/*0x280*/ CXWnd*               pVerticalBook;                  // CSPW_VerticalOrientationBook
/*0x284*/ ArrayClass<SpellCategoryMajor*> CategorizedSpells;
/*0x294*/ int                  SpellSelectMenuID;
/*0x298*/ int                  GemMemming;
/*0x29c*/ int                  LoadoutMenu;
/*0x2a0*/ int                  SaveLoadoutIndex;
/*0x2a4*/ CContextMenu*        pMainMenu;
/*0x2a8*/ CContextMenu*        pLoadMenu;
/*0x2ac*/ CContextMenu*        pSaveMenu;
/*0x2b0*/ CContextMenu*        pDeleteMenu;
/*0x2b4*/
};

inline namespace deprecated {
	using EQCASTSPELLWINDOW DEPRECATE("Use CCastSpellWnd instead of EQCASTSPELLWINDOW") = CCastSpellWnd;
	using PEQCASTSPELLWINDOW DEPRECATE("Use CCastSpellWnd* instead of PEQCASTSPELLWINDOW") = CCastSpellWnd*;
}

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
	CHAT_FILTER_UNKNOWN_86,

	MAX_CHAT_FILTERS = CHAT_FILTER_UNKNOWN_86
};


// Size 0x6b0 in eqgame dated 05 Mar 2019 Test (see 0x5418AB)
class [[offsetcomments]] CChatWindowManager
{
public:
	//EQLIB_OBJECT CChatWindowManager();
	//EQLIB_OBJECT ~CChatWindowManager();

	EQLIB_OBJECT COLORREF GetRGBAFromIndex(int);
	EQLIB_OBJECT int InitContextMenu(CChatWindow*);
	EQLIB_OBJECT void FreeChatWindow(CChatWindow*);
	EQLIB_OBJECT CChatWindow* GetLockedActiveChatWindow() const;   // might be returning CChatContainerWindow now
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
// fixme x64
/*0x080*/ void*              ChatContainerWindow_vfTable;
/*0x084*/ uint32_t           Unknown1;
/*0x088*/ uint32_t           Unknown2;
/*0x08c*/ uint32_t           Unknown3;
/*0x090*/ uint32_t           Unknown4;
/*0x094*/ uint32_t           Unknown5;
/*0x098*/ uint32_t           Unknown6;
/*0x09c*/ CChatContainerWindow* ChatContainerWindow[MAX_CHAT_WINDOWS];
/*0x11c*/ int                Unknown7;
/*0x120*/ int                NumWindows;
/*0x124*/ int                LockedWindow;
/*0x128*/ int                ActiveWindow;
/*0x12c*/ int                CurrentActive;                      // CurrentActive... CChat::GetActiveChatWindow
/*0x130*/ int                LockedActive;                       // LockedActive... CChatManager__GetLockedActiveChatWindow_x
/*0x134*/ CChatWindow*       ChannelMap[MAX_CHAT_FILTERS];       // channel map
/*0x28c*/ CContextMenu*      pMainContextMenu;
/*0x290*/ int                ScrollbarIndex;
/*0x294*/ int                UnknownContextMenuID1[6];
/*0x2ac*/ CContextMenu*      pLanguageContextMenu;
/*0x2b0*/ int                LanguageMenuIndex;
/*0x2b4*/ CContextMenu*      pFilterContextMenu;
/*0x2b8*/ int                FilterMenuIndex;
/*0x2bc*/ int                ChatChannelFilterMenuIndex;
/*0x2c0*/ int                MeleeFilterSubMenuIndex;
/*0x2c4*/ int                SpellsFilterSubMenuIndex;
/*0x2c8*/ CContextMenu*      pMeleeFilterContextMenu;
/*0x2cc*/ int                MeleeFilterMenuIndex;
/*0x2d0*/ CContextMenu*      pSpellsFilterContextMenu;
/*0x2d4*/ int                SpellsMenuIndex;
/*0x2d8*/ CContextMenu*      pChatChannelFilterContextMenu;
/*0x2dc*/ int                ChannelMenuIndex;
/*0x2e0*/ CContextMenu*      pDefaultChannelContextMenu;

	// data members beyond this point are not validated and likely incorrect
/*0x2e4*/ int                DefaultChannelMenu;
/*0x2e8*/ int                DefaultChannelMenu2;
/*0x2ec*/ CContextMenu*      pCM_ChatChannelDefChan;
/*0x2f0*/ int                ChatChannelDefChanIndex;
/*0x2f4*/ CContextMenu*      pCM_YourHitsMenu;
/*0x2f8*/ int                YourHitsMenuIndex;
/*0x2fc*/ CContextMenu*      pCM_YourMissesMenu;
/*0x300*/ int                YourMissesMenuindex;
/*0x304*/ CContextMenu*      pCM_YouBeingHitMenu;
/*0x308*/ int                YouBeingHitMenuindex;
/*0x30c*/ CContextMenu*      pCM_OthersHitsMenu;
/*0x310*/ int                OthersHitsMenuindex;
/*0x314*/ CContextMenu*      pCM_OthersMissesMenu;
/*0x318*/ int                OthersMissesMenuindex;
/*0x31c*/ CContextMenu*      pCM_AllContextMenu;
/*0x320*/ int                AllContextMenuindex;
/*0x324*/ CContextMenu*      pCM_HitModesMenu;
/*0x328*/ int                HitModesMenuindex;
/*0x32c*/ CContextMenu*      pCM_ReplyToMenu;
/*0x330*/ int                ReplyToMenuindex;
/*0x334*/ CContextMenu*      pCM_TellFriendMenu;
/*0x338*/ int                TellFriendMenuindex;
/*0x33c*/ CContextMenu*      pCM_TellRaidmemberMenu;
/*0x340*/ int                TellRaidmemberMenuindex;
/*0x344*/ int                ReplyToSubIndex;
/*0x348*/ int                TellFriendSubIndex;
/*0x34c*/ int                TellRaidmemberSubIndex;
/*0x350*/ int                HitModes[MAX_HITMODES];
/*0x370*/ int                DefaultChannel;
/*0x374*/ CContextMenu*      pRandomFilterContextMenu;              // 0x680
/*0x378*/ int                RandomFilterIndex;
/*0x37c*/ int                RandomFilterSubIndex;
/*0x380*/ CContextMenu*      pEnvironmentalDamageFilterContextMenu; // 0x690
/*0x384*/ int                EnvironmentalDamageIndex;
/*0x388*/ int                EnvironmentalDamageSubIndex;
/*0x38c*/ CContextMenu*      pDamageShieldsFilterContextMenu;      // 0x6a0
/*0x390*/ int                DamageShieldsFilterIndex;
/*0x394*/ int                DamageShieldsFilterSubIndex;
/*0x398*/ CContextMenu*      pCM_BeneficialSpellsFilterMenu;
/*0x39c*/ int                BeneficialSpellsFilteIndex;
/*0x3a0*/
};

inline namespace deprecated {
	using EQCHATMGR DEPRECATE("Use CChatWindowManager instead of EQCHATMGR") = CChatWindowManager;
	using PEQCHATMGR DEPRECATE("Use CChatWindowManager* instead of PEQCHATMGR") = CChatWindowManager*;
}

//============================================================================
// CChatWindow
//============================================================================

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

/*0x220*/ CChatWindowManager* ChatManager;
/*0x224*/ CEditWnd*    InputWnd;
/*0x228*/ CStmlWnd*    OutputWnd;
/*0x22c*/ int          ChatChannel;
/*0x230*/ int          ChatChannelIndex;
/*0x234*/ char         TellTarget[0x40];
/*0x274*/ int          Language;
/*0x278*/ bool         bIsMainChat;
/*0x279*/ bool         bIsTellWnd;
/*0x27c*/ int          TimestampFormat;
/*0x280*/ COLORREF     TimestampColor;
/*0x284*/ bool         bTimestampMatchChatColor;
/*0x288*/ CXStr        CommandHistory[0x28];
/*0x328*/ int          HistoryIndex;
/*0x32c*/ int          HistoryLastShown;
/*0x330*/ int          FontSize;                 // style
/*0x334*/ int          AlwaysChathereIndex;      // menu
/*0x338*/ int          NamesContextMenu;         // guess
/*0x33c*/ int          ContextMenuID;            // also a guess
/*0x340*/ int          ContextMenuSubID[0xa];    // this is not correct but ill fix it later.
/*0x368*/
};

inline namespace deprecated {
	using EQCHATWINDOW DEPRECATE("Use CChatWindow instead of EQCHATWINDOW") = CChatWindow;
	using PEQCHATWINDOW DEPRECATE("Use CChatWindow* instead of PEQCHATWINDOW") = CChatWindow*;
}

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

/*0x224*/ int                ContextMenuIndex;
/*0x228*/ int                MaxSliderValue;
/*0x22c*/ CXWnd*             pwndCaller;
/*0x230*/ CButtonWnd*        ColorButton[16];
/*0x270*/ int                RedSliderValue;
/*0x274*/ CSliderWnd*        RedSlider;
/*0x278*/ CEditWnd*          RedSliderInputEdit;
/*0x27c*/ int                GreenSliderValue;
/*0x280*/ CSliderWnd*        GreenSlider;
/*0x284*/ CEditWnd*          GreenSliderInputEdit;
/*0x288*/ int                BlueSliderValue;
/*0x28c*/ CSliderWnd*        BlueSlider;
/*0x290*/ CEditWnd*          BlueSliderInputEdit;
/*0x294*/ CButtonWnd*        AcceptButton;
/*0x298*/
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

// Size: 0x30 @ 0x575119 2021-05-14 (live)
struct [[offsetcomments]] CompassLineSource
{
/*0x00*/ uint32_t     Red;
/*0x04*/ uint32_t     Green;
/*0x08*/ uint32_t     Blue;
/*0x0c*/ float        Y;
/*0x10*/ float        X;
/*0x14*/ float        Z;
/*0x18*/ bool         ShowLine;
/*0x1c*/ DWORD        Unknown0x1C;
/*0x20*/ DWORD        Unknown0x20;
/*0x24*/ DWORD        Unknown0x24;
/*0x28*/ DWORD        Unknown0x28;
/*0x2c*/ DWORD        Unknown0x2C;
/*0x30*/
};

inline namespace deprecated {
	using COMPASSDATA DEPRECATE("Use CompassLineSource instead of COMPASSDATA") = CompassLineSource;
	using PCOMPASSDATAINFO DEPRECATE("Use CompassLineSource* instead of PCOMPASSDATAINFO") = CompassLineSource*;
}

// size 0x2a0 @ 0x56fda5 2021-05-14 (live)
class [[offsetcomments]] CCompassWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CCompassWnd(CXWnd*);
	virtual ~CCompassWnd();

	virtual int Draw() override;
	virtual int OnProcessFrame() override;

	EQLIB_OBJECT void SenseHeading();
	EQLIB_OBJECT void PickNewTarget();
	EQLIB_OBJECT void SetSpeed();

	//----------------------------------------------------------------------------
	// data members

/*0x224*/ CStaticAnimationTemplate*     pStrip1;
/*0x228*/ CStaticAnimationTemplate*     pStrip2;
/*0x22c*/ int                           Unknown0x244;
/*0x230*/ int                           offset;
/*0x234*/ int                           timestamp;
/*0x238*/ double                        speed;
/*0x240*/ int                           timer;
/*0x244*/ CompassLineSource             lineAdventure;
/*0x274*/ ArrayClass<CompassLineSource*> lineData;
/*0x284*/
};

inline namespace deprecated {
	using EQCOMPASSWINDOW DEPRECATE("Use CCompassWnd instead of EQCOMPASSWINDOW") = CCompassWnd;
	using PEQCOMPASSWINDOW DEPRECATE("Use CCompassWnd* instead of PEQCOMPASSWINDOW") = CCompassWnd*;
}

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
/*0x220*/ CStmlWnd*    OutputText;
/*0x224*/ CButtonWnd*  pYesButton;
/*0x228*/ CButtonWnd*  pNoButton;
/*0x22c*/ CButtonWnd*  pCancelButton;
/*0x230*/ CButtonWnd*  pOKButton;
/*0x234*/ BYTE         Unknown0x170[0x18]; // fixme x64
/*0x24c*/
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
	EQLIB_OBJECT void SetContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location);
	EQLIB_OBJECT bool ContainsNoDrop();
	EQLIB_OBJECT void HandleCombine();

	// TODO: Fix for inaccuracies
/*0x220*/ ItemPtr       Container;
/*0x224*/ ItemGlobalIndex Location;
/*0x230*/ VeArray<CInvSlotWnd*> InvSlotWnds;
/*0x23c*/ CButtonWnd*   pCombineButton;
/*0x240*/ CButtonWnd*   pDoneButton;
/*0x244*/ CButtonWnd*   pStandardDoneButton;
/*0x248*/ CButtonWnd*   pCombineDoneButton;
/*0x24c*/ CButtonWnd*   pContainerIcon;
/*0x250*/ CButtonWnd*   pContainerStandardIcon;
/*0x254*/ CButtonWnd*   pContainerCombineIcon;
/*0x258*/ CTextureAnimation* pIconAnimation;
/*0x25c*/ CLabel*       ContainerLabel;
/*0x260*/ CInvSlotWnd*  pContainerSlotTemplate;
/*0x264*/ CXWnd*        pStandardItems;
/*0x268*/ CXWnd*        pStandardItemsWithDone;
/*0x26c*/ CXWnd*        pCombineItems;
/*0x270*/ CStmlWnd*     pStandardSize;
/*0x274*/ CStmlWnd*     pCombineSize;
/*0x278*/ bool          bCombineValid;
/*0x279*/ bool          bUserCloseable;
/*0x27c*/ int           ContainerType;            // classic = 0, standard = 1, combine = 2
/*0x280*/ int           IndexDoneButton;
/*0x284*/ CContextMenu* ContextMenu;
/*0x288*/

	DEPRECATE("CContainerWnd: Use Container instead of pContents")
	inline ItemClient* get_pContents() { return Container.get(); }
	__declspec(property(get = get_pContents)) ItemClient* pContents;
};

inline namespace deprecated {
	using EQCONTAINERWINDOW DEPRECATE("Use CContainerWnd instead of EQCONTAINERWINDOW") = CContainerWnd;
	using PEQCONTAINERWINDOW DEPRECATE("Use CContainerWnd* instead of PEQCONTAINERWINDOW") = CContainerWnd*;
}

constexpr int MAX_CONTAINERS = 36;

class [[offsetcomments]] CContainerMgr
{
	FORCE_SYMBOLS

public:
	CContainerMgr();
	virtual ~CContainerMgr();

	inline ItemPtr GetWorldContainerItem() const { return WorldContainer; };

	// Retrieves a window for the given item container, if it is active.
	EQLIB_OBJECT CContainerWnd* GetWindowForItem(const ItemPtr& pContainer) const;

	EQLIB_OBJECT bool CloseAllContainers();
	EQLIB_OBJECT void ClearWorldContainerItems();
	EQLIB_OBJECT void CloseContainer(const ItemPtr& pContainer, bool deleteWindow = true);
	EQLIB_OBJECT void OpenContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location, bool allowTradeskill = true);
	EQLIB_OBJECT void OpenWorldContainer(const ItemPtr&, unsigned long);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SetWorldContainerItem(const ItemPtr&, int);
	EQLIB_OBJECT CContainerWnd* GetFreeContainerWnd();
	EQLIB_OBJECT void OpenExperimentContainer(const ItemPtr& pCont, const ItemGlobalIndex& Location);

	//----------------------------------------------------------------------------
	// data members

/*0x04*/ CContainerWnd*     pContainerWnds[MAX_CONTAINERS];
/*0x94*/ ArrayClass<CContainerWnd*> ContainerWndsToDelete;
/*0xa4*/ ItemPtr            WorldContainer;
/*0xa8*/ DWORD              WorldContainerSerialNumber;
/*0xac*/ int                WorldContainerRealEstateID;
/*0xb0*/ int                WorldContainerRealEstateItemID;
/*0xb4*/ DWORD              Timer;
/*0xb8*/ bool               bShowDone;
/*0xbc*/

	ItemClient* getter_pWorldContainer() { return WorldContainer.get(); }
	__declspec(property(get = getter_pWorldContainer)) ItemClient* pWorldContainer;
};

//============================================================================
// CContextMenuManager
//============================================================================

constexpr int MAX_CONTEXT_MENU_DEPTH = 8;
constexpr int MAX_CONTEXT_MENUS = 1024;

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

	CContextMenu* GetMenu(int index)
	{
		if (index >= 0 && index < NumMenus)
			return pMenus[index];

		return nullptr;
	}

	EQLIB_OBJECT int AddMenu(CContextMenu*);
	EQLIB_OBJECT int GetDefaultMenuIndex() { return DefaultMenuIndex; }
	EQLIB_OBJECT int PopupMenu(int, const CXPoint&, CXWnd*);
	EQLIB_OBJECT int RemoveMenu(int, bool);
	EQLIB_OBJECT void Flush();
	EQLIB_OBJECT void WarnDefaultMenu(CXWnd*);

	//----------------------------------------------------------------------------
	// data members

/*0x01d8*/ CXWnd*             pParentMenuWnd;
/*0x01dc*/ CContextMenu*      pCurrMenus[MAX_CONTEXT_MENU_DEPTH];
/*0x01fc*/ int                NumVisibleMenus;
/*0x0200*/ int                CurrMenu;
/*0x0204*/ CContextMenu*      pMenus[MAX_CONTEXT_MENUS];
/*0x1204*/ int                NumMenus;
/*0x1208*/ CXWnd*             pHandlerWnd;
/*0x120c*/ int                HandlerCmd;
/*0x1210*/ int                DefaultMenuIndex;
/*0x1214*/ int                DefaultHelpItem;
/*0x1218*/ int                DefaultBGItem;
/*0x121c*/ int                DefaultMinItem;
/*0x1220*/ int                DefaultCloseItem;
/*0x1224*/ int                DefaultLockItem;
/*0x1228*/ int                DefaultEscapeItem;
/*0x122c*/
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

/*0x27c*/ int          NumItems;
/*0x280*/ int          Unknown0x28C;
/*0x284*/
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

/*0x224*/ int                       Type;
/*0x228*/ int                       Index;
/*0x22c*/ EqItemGuid                ItemGuid;
/*0x240*/ int                       ItemID;
/*0x244*/ int                       Qty;
/*0x248*/ int                       IconID;
/*0x24c*/ SoeUtil::String           AssignedName;
/*0x25c*/ int                       Unknown0x264;
/*0x260*/ char                      AssignedNameCopy[0x40];
/*0x2a0*/ CXStr                     ButtonText;
/*0x2a4*/ CStaticAnimationTemplate* pBGStaticAnim;                  // CA_Anim
/*0x2a8*/ CStaticAnimationTemplate* pOverlayStaticAnim;             // CA_Anim2
/*0x2ac*/ CSpellGemWnd*             pSpellGem;                      // CA_SpellGem
/*0x2b0*/ CTextObjectInterface*     pTextObjectInterface;
/*0x2b4*/ CTextObjectInterface*     pButtonTextObjectInterface;
/*0x2b8*/ int                       TextfontStyle;
/*0x2bc*/ int                       Unknown0x2C4;
/*0x2c0*/
};

//============================================================================
// CExtendedTargetWnd
//============================================================================

constexpr int MAX_EXTENDED_TARGET_SIZE = 20; // total available extended targets


class CExtendedTargetWnd : public CSidlScreenWnd
{
public:
};

//============================================================================
// CFactionWnd
//============================================================================

class [[offsetcomments]] CFactionWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFactionWnd(CXWnd*);
	virtual ~CFactionWnd();

	//----------------------------------------------------------------------------
	// data members

/*0x224*/ bool             Unknown0x22c;
/*0x228*/ int              Unknown0x230;
/*0x22c*/ int              Unknown0x234;
/*0x230*/ int              Unknown0x238;
/*0x234*/ SoeUtil::String  Unknown0x23c;
/*0x244*/ SoeUtil::String  Unknown0x24c;
/*0x254*/ CGaugeWnd*       StandingGaugeTemplate;
/*0x258*/ CTreeViewWnd*    Categories;
/*0x25c*/ CEditWnd*        SearchNameInput;
/*0x260*/ CButtonWnd*      SearchButton;
/*0x264*/ CListWnd*        FactionList;
/*0x268*/
};

inline namespace deprecated {
	using EQFACTIONWINDOW DEPRECATE("Use CFactionWnd instead of EQFACTIONWINDOW") = CFactionWnd;
	using PEQFACTIONWINDOW DEPRECATE("Use CFactionWnd* instead of PEQFACTIONWINDOW") = CFactionWnd*;
}

//============================================================================
// CPlayerCustomizationWnd
//============================================================================

class [[offsetcomments]] CPlayerCustomizationWnd : public CSidlScreenWnd
{
public:
	EQLIB_OBJECT CPlayerCustomizationWnd(CXWnd*);
	EQLIB_OBJECT ~CPlayerCustomizationWnd();

	EQLIB_OBJECT void SetFaceSelectionsFromPlayer();

	// virtual
	EQLIB_OBJECT int Draw() const;
	EQLIB_OBJECT int OnProcessFrame();
	EQLIB_OBJECT int WndNotification(CXWnd*, uint32_t, void*);

	// private
	EQLIB_OBJECT void CycleThroughFHEB(int, int);
	EQLIB_OBJECT void ShowButtonGroup(int, bool);
};

#if HAS_FIND_ITEM_WINDOW

//============================================================================
// CFindItemWnd
//============================================================================

// @sizeof(CFindItemWnd) == 0x3e8 :: 2013-05-10 (emu) @ 0x140158947
constexpr size_t CFindItemWnd_size = 0x3e8;

class [[offsetcomments]] CFindItemWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CFindItemWnd(CXWnd*);
	virtual ~CFindItemWnd();

	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void Update();
	EQLIB_OBJECT void PickupSelectedItem();

	struct ItemRecord
	{
		ItemGlobalIndex       itemIndex;
		EqItemGuid            guid;
		eqtime_t              unknown;
	};

	ItemGlobalIndex GetItemGlobalIndex(int index)
	{
		ItemRecord* itemRecord = Items.FindFirst(index);
		if (itemRecord)
		{
			return itemRecord->itemIndex;
		}

		return ItemGlobalIndex();
	}

/*0x224*/ bool                Unknown0;
/*0x225*/ bool                Unknown1;
/*0x228*/ uint32_t            Unknown2;
/*0x22c*/ uint32_t            Timestamp;
/*0x230*/ uint32_t            Counter;
/*0x234*/ HashTable<ItemRecord, int> Items;
/*0x244*/ HashTable<SoeUtil::String, int> ItemNames;     // just a guess, likely inaccurate.
/*0x254*/ CStaticAnimationTemplate* FIW_ClassAnim;
/*0x258*/ CSidlScreenWnd*     FIW_CharacterView;
/*0x25c*/ CListWnd*           FIW_ItemList;
/*0x260*/ CButtonWnd*         FIW_QueryButton;
/*0x264*/ CButtonWnd*         FIW_RequestItemButton;
/*0x268*/ CButtonWnd*         FIW_RequestPreviewButton;
/*0x26c*/ CButtonWnd*         FIW_Default;
/*0x270*/ CButtonWnd*         FIW_GrabButton;
/*0x274*/ CButtonWnd*         FIW_HighlightButton;
/*0x278*/ CButtonWnd*         FIW_DestroyItem;
/*0x27c*/ CComboWnd*          FIW_ItemLocationCombobox;
/*0x280*/ CComboWnd*          FIW_ItemSlotCombobox;
/*0x284*/ CComboWnd*          FIW_StatSlotCombobox;
/*0x288*/ CComboWnd*          FIW_RaceSlotCombobox;
/*0x28c*/ CComboWnd*          FIW_ClassSlotCombobox;
/*0x290*/ CComboWnd*          FIW_ItemTypeCombobox;
/*0x294*/ CComboWnd*          FIW_ItemPrestigeCombobox;
/*0x298*/ CComboWnd*          FIW_ItemAugmentCombobox;
/*0x29c*/ CEditWnd*           FIW_ItemNameInput;
/*0x2a0*/ CEditWnd*           FIW_MaxLevelInput;
/*0x2a4*/ CEditWnd*           FIW_MinLevelInput;
/*0x2a8*/ CLabelWnd*          FIW_DragonHoardLabel;
/*0x2ac*/
};

SIZE_CHECK(CFindItemWnd, CFindItemWnd_size);

#endif // HAS_FIND_ITEM_WINDOW

//============================================================================
// CFindLocationWnd
//============================================================================

enum FindLocationType {
	FindLocation_Unknown,
	FindLocation_Player,
	FindLocation_POI,
	FindLocation_RealEstateItem,
	FindLocation_RealEstatePlot,
	FindLocation_MapPoint,
	FindLocation_Switch,
	FindLocation_Location
};
EQLIB_API const char* FindLocationTypeToString(FindLocationType type);

// @sizeof(CFindLocationWnd) == 0x280 :: 2013-05-10 (emu) @ 0x499BA2
constexpr size_t CFindLocationWnd_size = 0x280;

class [[offsetcomments]] CFindLocationWnd : public CSidlScreenWnd
{
public:
	// has virtuals, but we get those from CSidlScreenWnd
	EQLIB_OBJECT bool HandleFindBegin();
	EQLIB_OBJECT void HandleFindEnd();
	EQLIB_OBJECT void HandleRowClicked(int Index);
	EQLIB_OBJECT void HandleFindableZoneConnectionsMessage(CUnSerializeBuffer& buf);

public:
	struct FindPlayerData
	{
		uint32_t spawnId;
		CXStr    name;
		CXStr    description;
		int      race;
		int      Class;
	};
	using PlayerDataArray = ArrayClass<FindPlayerData>;

	struct FindPOIData
	{
		uint32_t id;
		CXStr    name;
		CXStr    description;
	};
	using POIDataArray = ArrayClass<FindPOIData>;

	struct FindZoneConnectionData
	{
		FindLocationType type = FindLocation_Location;
		int32_t          id = 0;
		int32_t          subId = -1;
		EQZoneIndex      zoneId;
		int              zoneIdentifier;
		CVector3         location;
	};
	using ZoneConnectionDataArray = ArrayClass<FindZoneConnectionData>;

	struct FindableReference
	{
		FindLocationType type;
		uint32_t         index;

		bool operator==(const FindableReference& other) const { return type == other.type && index == other.index; }
	};
	using FindableReferenceList = HashTable<FindableReference>;

public:
/*0x220*/ CListWnd*               findLocationList;        // FLW_FindLocationList
/*0x224*/ CCheckBoxWnd*           filterLocationsCheckBox; // FLW_FilterLocationsCheckbox
///*0x228*/ CCheckBoxWnd*           filterGroupCheckBox;     // FLW_FilterGroupCheckbox
///*0x22c*/ CCheckBoxWnd*           filterRaidCheckBox;      // FLW_FilterRaidCheckbox
/*0x228*/ CLabelWnd*              noneLabel;               // FLW_FoundNoneLabel
/*0x22c*/ uint32_t                lastUpdateTime;
/*0x230*/ uint32_t                lastFindRequestTime;
/*0x234*/ bool                    didFindRequest;
/*0x238*/ PlayerDataArray         unfilteredPlayerList;
///*0x250*/ PlayerDataArray         filteredGroupPlayerList;
///*0x260*/ PlayerDataArray         unfilteredRaidPlayerList;
/*0x248*/ POIDataArray            unfilteredPOIDataList;
/*0x258*/ ZoneConnectionDataArray unfilteredZoneConnectionList;
/*0x268*/ FindableReferenceList   referenceList;
/*0x278*/ uint32_t                lastId;
/*0x27c*/ bool                    dataRequested;
/*0x27d*/ bool                    playerListDirty;
/*0x27e*/ bool                    zoneConnectionsRcvd;
/*0x280*/
};

SIZE_CHECK(CFindLocationWnd, CFindLocationWnd_size);

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

/*0x224*/ int             Unknown0x24c;
/*0x228*/ CXWnd*          pWndCaller;
/*0x22c*/ CListWnd*       pListFiles;
/*0x230*/ CEditWnd*       pEditEntry;
/*0x234*/ CComboWnd*      pComboDirHistory;
/*0x238*/ CButtonWnd*     pUpButton;
/*0x23c*/ CButtonWnd*     pOKButton;
/*0x240*/ CButtonWnd*     pCancelButton;
/*0x244*/ int             Flags;
/*0x248*/ CXStr           SelectedFile;
/*0x24c*/ IShellFolder*   ShellFolder;
/*0x250*/ CXStr           CurrentDir;
/*0x254*/ // more
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

/*0x228*/ CButtonWnd*    pMoneyButton[4];
/*0x238*/ CButtonWnd*    TradeButton;
/*0x23c*/ CButtonWnd*    CancelButton;
/*0x240*/ CLabel*        NPCNameLabel;
/*0x244*/ CInvSlotWnd*   pInvSlotWnd[MAX_GIVE_SLOTS];
/*0x254*/
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

// Size: 0x3c8
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
	EQLIB_OBJECT void UpdateDisplay(int Index, PlayerClient* groupmember, COLORREF NameColor, UINT RoleBits);

	//----------------------------------------------------------------------------
	// data members
/*0x220*/ CButtonWnd*        InviteButton;
/*0x224*/ CButtonWnd*        DisbandButton;
/*0x228*/ CButtonWnd*        FollowButton;
/*0x22c*/ CButtonWnd*        DeclineButton;
/*0x230*/ CButtonWnd*        LFGButton;
/*0x234*/ CGaugeWnd*         HPGauge[6];
/*0x24c*/ CGaugeWnd*         PetGauge[6];
/*0x264*/ CGaugeWnd*         ManaGauge[6];
/*0x27c*/ CGaugeWnd*         EnduranceGauge[6];
/*0x294*/ CLabel*            HPLabel[6];
/*0x2ac*/ CLabel*            HPPercLabel[6];
/*0x2c4*/ CLabel*            ManaLabel[6];
/*0x2dc*/ CLabel*            ManaPercLabel[6];
/*0x2f4*/ CLabel*            EnduranceLabel[6];
/*0x30c*/ CLabel*            EndurancePercLabel[6];
/*0x324*/ COLORREF           HPTextColor[6];
/*0x33c*/ CButtonWnd*        GroupTankButton[6];
/*0x354*/ CButtonWnd*        GroupAssistButton[6];
/*0x36c*/ CButtonWnd*        GroupPullerButton[6];
/*0x384*/ CLabel*            AggroPercLabel[6];
/*0x39c*/ long               Timer;
/*0x3a0*/ CContextMenu*      GroupContextMenu;
/*0x3a4*/ bool               bPetbars;
/*0x3a5*/ bool               bManabars;
/*0x3a6*/ bool               bEndurancebars;
/*0x3a7*/ bool               bAggroPct;
/*0x3a8*/ int                PetBarIndex;
/*0x3ac*/ int                ManaBarIndex;
/*0x3b0*/ int                EnduranceBarIndex;
/*0x3b4*/ int                AggroPctIndex;
/*0x3b8*/ int                RoleSeparatorID;
/*0x3bc*/ int                RoleSelectMenu;
/*0x3c0*/ int                RoleSelectMenuID;
/*0x3c4*/ bool               bPlayerInvited;
/*0x3c8*/

	// GroupMarkNPCButton doesn't exist on the rof2 client
	CButtonWnd* get_GroupMarkNPCButton(int) { return nullptr; }
	__declspec(property(get = get_GroupMarkNPCButton)) CButtonWnd* GroupMarkNPCButton[];
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
/*0x006*/ WORD               ZoneID;
/*0x008*/ WORD               Instance;
/*0x00c*/ DWORD              PlayerSerial;
/*0x010*/ bool               bMainProfile;
/*0x011*/ bool               bOfflineMode;
/*0x012*/ char               Name[0x40];
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

inline namespace deprecated {
	using GUILDMEMBERCLIENT DEPRECATE("Use GuildMember instead of GUILDMEMBERCLIENT") = GuildMember;
	using PGUILDMEMBERCLIENT DEPRECATE("Use GuildMember* instead of PGUILDMEMBERCLIENT") = GuildMember*;
	using GUILDMEMBERINFO DEPRECATE("Use GuildMember instead of GUILDMEMBERINFO") = GuildMember;
	using PGUILDMEMBERINFO DEPRECATE("Use GuildMember* instead of PGUILDMEMBERINFO") = GuildMember*;
}

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
/*0x14*/ eqtime_t   TimeRemaining;
/*0x18*/ int        ZoneID;
/*0x1c*/ CVector3   Loc;
/*0x28*/ int        Heading;
/*0x2c*/ eqtime_t   GracePeriodRemaining;
/*0x30*/ int        ModificationCount;
/*0x34*/ int        TeleportPlantRestriction;
/*0x38*/ eqtime_t   ModifyDate;
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

	NumGuildRanks,
};

struct [[offsetcomments]] GuildRank
{
/*0x00*/ GuildRankType Type;
/*0x04*/ CXStr         Name;
/*0x08*/ };


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

	NumGuildPermissionTypes,
};

using GuildRankPermission = AccessGroup<GuildRankType, NumGuildRanks, GRT_None, GuildPermissionType, NumGuildPermissionTypes>;

class [[offsetcomments]] GuildBase
{
public:
	EQLIB_OBJECT GuildBase();
	EQLIB_OBJECT virtual ~GuildBase();

/*0x008*/ int                    NumGuildMembers;
/*0x00c*/ GuildMember*           pFirstGuildMember;
/*0x010*/ EqGuid                 GuildGuid;
/*0x018*/ char                   Name[0x40];
/*0x058*/ eqtime_t               CreationDate;
/*0x05c*/ int                    Active;
/*0x060*/ int64_t                GuildID;
/*0x068*/ bool                   bHasChanged;
/*0x069*/ char                   GuildMOTD[0x200];
/*0x26c*/ SoeUtil::String        MOTD_Author;
/*0x27c*/ int                    TributePoints;
/*0x280*/ BenefitSelection       ActiveTributeBenefits[2];
/*0x290*/ bool                   bTributeBenefitsActive;
/*0x294*/ BenefitSelection       ActiveTrophyTributeBenefits[4];
/*0x2b4*/ bool                   bTrophyTributeBenefitsActive;
/*0x2b5*/ bool                   bRenameFlag;
/*0x2b6*/ bool                   bUnknownFlag;
/*0x2b8*/ GuildBanner            Banner;
/*0x2f4*/ TSafeArrayStatic<uint8_t, 0x320> BitFlags;
/*0x614*/ TSafeArrayStatic<uint8_t, 0x320> PrevBitFlags;
/*0x934*/ char                   GuildURL[0x200];
/*0xb34*/ char                   GuildChannel[0x80];
/*0xbb4*/ ArrayClass<GuildRank*> Ranks;
/*0xbc4*/ GuildRankPermissions<GuildRankPermission>* RankPermissions;
/*0xbc8*/

	ALT_MEMBER_GETTER(GuildMember*, pFirstGuildMember, pMember);
};

struct guildmotdSet;

class [[offsetcomments]] CGuild : public GuildBase
{
public:
/*0xbc8*/ eqtime_t              LastGuildNameRequest;
/*0xbcc*/ HashListSet<GuildNameEntry*, 250> GuildNamesTable;
/*0xfc4*/ void* Map[3];     // this is a SoeUtil::Map
/*0xfd0*/ int                   OnlineCount;      // 1418
/*0xfd4*/ bool                  bOnlineOutofSync; // 141c
/*0xfd8*/ int                   TributeTimer;
/*0xfdc*/ int                   TributeCost;
/*0xfe0*/ bool                  bTributeCostDirty;
/*0xfe1*/ bool                  bTributeActive;
/*0xfe2*/ bool                  bTributeBenefitsLocked;
/*0xfe4*/ eqtime_t              TrophyTributeTimer;
/*0xfe8*/ int                   TrophyTributeCost;
/*0xfec*/ bool                  bTrophyTributeCostOutofSync;
/*0xfed*/ bool                  bTrophyTributeActive;
/*0xfee*/ bool                  bTrophyBenefitsLocked;
/*0xff0*/

	EQLIB_OBJECT bool ValidGuildName(int);
	EQLIB_OBJECT char* GetGuildMotd();
	EQLIB_OBJECT char* GetGuildMotdAuthor();
	EQLIB_OBJECT GuildMember* FindMemberByName(const char*);
	EQLIB_OBJECT void DeleteAllMembers();
	EQLIB_OBJECT void DemoteMember(GuildMember*);
	EQLIB_OBJECT void HandleGuildMessage(connection_t*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void SendPublicCommentChange(char*, char*);
	EQLIB_OBJECT void SetGuildMotd(guildmotdSet*);

	EQLIB_OBJECT int GetGuildIndex(const char*);
	EQLIB_OBJECT const char* GetGuildName(int) const;

	inline const char* GetGuildName(int64_t guildId, char*, bool*, bool) const
	{
		return GetGuildName(static_cast<int>(guildId));
	}

	template <typename T, typename = std::enable_if<std::is_integral_v<T> && !std::is_same_v<T, int>>>
	inline const char* GetGuildName(T guildId) const
	{
		return GetGuildName(static_cast<int>(guildId));
	}

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

/*0x230*/ BYTE         Unknown0x148[0x3c];
/*0x26c*/ BYTE         Unknown0x194;
/*0x26d*/ BYTE         ShowOffline;              // 01 = show offline box is checked
/*0x26e*/ BYTE         Unknown0x196[0x2];

	// This is a pointer to the beginning of a list of pointers, each representing one player in
	// the guild. The number of  pointers depends upon TotalMemberCount.
/*0x270*/ GuildMember** pMember;
/*0x274*/ DWORD        TotalMemberCount;
/*0x278*/ DWORD        Unknown0x1a0;             // 150?
/*0x27c*/ DWORD        Unknown0x1a4;             // 1?
/*0x280*/ DWORD        TotalMemberCountAgain;
/*0x284*/ BYTE         Unknown0x1ac[0x1c];
/*0x2a0*/ char         PersonalNotesFilePath[0x40]; // path to personal notes file
/*0x2e0*/ BYTE         Unknown0x208[0x1c0];      // empty
/*0x4a0*/ DWORD        Unknown0x3c8;             // 1?
/*0x4a4*/ DWORD        Unknown0x3cc;             // some sort of bizaare pointer...
/*0x4a8*/
};

inline namespace deprecated {
	using EQGUILDWINDOW DEPRECATE("Use CGuildMgmtWnd instead of EQGUILDWINDOW") = CGuildMgmtWnd;
	using PEQGUILDWINDOW DEPRECATE("Use CGuildMgmtWnd* instead of PEQGUILDWINDOW") = CGuildMgmtWnd*;
}

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

	EQLIB_OBJECT void DoHotButton(int Button, int AllowAutoRightClick);
	inline void DoHotButton(int Button, int AllowAutoRightClick, int unk) { DoHotButton(Button, AllowAutoRightClick); }
	EQLIB_OBJECT void DoHotButtonRightClick(int);
	EQLIB_OBJECT void UpdatePage();
	EQLIB_OBJECT void SetCheck(bool checked);

	//----------------------------------------------------------------------------
	// data members

	// todo
};

//============================================================================
// CInspectWnd
//============================================================================

// size: 0x318
class CInspectWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	inline ItemContainer& GetInspectItems() { return inspectItems; }

/*0x234*/ uint32_t           nextRefreshTime;
/*0x238*/ uint32_t           lastInspectTextSaveTime;
/*0x23c*/ PlayerClient*      inspectPlayer;
/*0x240*/ ItemContainer      inspectItems;
/*0x25c*/ CEditWnd*          inspectEdit;
/*0x260*/ CButtonWnd*        doneButton;
};

//============================================================================
// CInventoryWnd
//============================================================================

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

/*0x22c*/ uint8_t     Unknown0x0240[0xfc];
/*0x328*/ int64_t     VitalityCap;
/*0x330*/ int         AAVitalityCap;
/*0x334*/
};

inline namespace deprecated {
	using INVENTORYWND DEPRECATE("Use CInventoryWnd instead of INVENTORYWND") = CInventoryWnd;
	using PINVENTORYWND DEPRECATE("Use CInventoryWnd* instead of PINVENTORYWND") = CInventoryWnd*;
}

//============================================================================
// CInvSlotWnd
//============================================================================

class CInvSlotWnd;

// @sizeof(CInvSlot) == 0x14 :: 2013-05-10 (emu) @ 0x697D3E
class [[offsetcomments]] CInvSlot
{
public:
	CInvSlot();
	virtual ~CInvSlot();

	EQLIB_OBJECT bool IllegalBigBank(int);
	EQLIB_OBJECT void HandleLButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleLButtonHeld(const CXPoint&);
	EQLIB_OBJECT void HandleLButtonUp(const CXPoint&, bool);
	EQLIB_OBJECT void HandleLButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonDown(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonHeld(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUp(const CXPoint&);
	EQLIB_OBJECT void HandleRButtonUpAfterHeld(const CXPoint&);
	EQLIB_OBJECT void SetInvSlotWnd(CInvSlotWnd*);
	EQLIB_OBJECT void SetItem(const ItemPtr&);
	EQLIB_OBJECT void SliderComplete(int);
	EQLIB_OBJECT void UpdateItem();

	EQLIB_OBJECT ItemPtr GetItem();

	// Retrieves the global index of this item slot
	EQLIB_OBJECT ItemGlobalIndex GetItemLocation() const;

	//----------------------------------------------------------------------------
	// data members

/*0x04*/ CInvSlotWnd*       pInvSlotWnd;
/*0x08*/ CTextureAnimation* pInvSlotAnimation;
/*0x0c*/ int                Index;                    // InvSlot
/*0x10*/ bool               bEnabled;                 // Valid
/*0x14*/
};

inline namespace deprecated {
	using EQINVSLOT DEPRECATE("Use CInvSlot instead of EQINVSLOT") = CInvSlot;
	using PEQINVSLOT DEPRECATE("Use CInvSlot* instead PEQINVSLOT") = CInvSlot*;
}

const int MAX_INV_SLOTS = 2048;

//----------------------------------------------------------------------------

// @sizeof(CInvSlotMgr) == 0x2014 :: 2013-05-10 (emu) @ 0x49743A
class [[offsetcomments]] CInvSlotMgr
{
public:
	CInvSlotMgr();
	virtual ~CInvSlotMgr();

	EQLIB_OBJECT CInvSlot* CreateInvSlot(CInvSlotWnd*);
	EQLIB_OBJECT CInvSlot* FindInvSlot(int TopSlot, int SubSlot = -1,
		ItemContainerInstance location = eItemContainerPossessions, bool includeLinks = true);

	inline CInvSlot* FindInvSlot(const ItemGlobalIndex& index, bool includeLinks = true)
	{
		return FindInvSlot(index.GetTopSlot(), index.GetIndex().GetSlot(1), index.GetLocation(), includeLinks);
	}

	EQLIB_OBJECT bool MoveItem(const ItemGlobalIndex& from, const ItemGlobalIndex& to, bool bDebugOut = true,
		bool CombineIsOk = true, bool MoveFromIntoToBag = false, bool MoveToIntoFromBag = false);
	EQLIB_OBJECT void Process();
	EQLIB_OBJECT void SelectSlot(CInvSlot*);
	EQLIB_OBJECT void UpdateSlots();

	//----------------------------------------------------------------------------
	// data members

/*0x0004*/ CInvSlot*    SlotArray[MAX_INV_SLOTS]; // size 0x2400 //see 72E00F in Nov 06 2018 Test
/*0x2004*/ int          TotalSlots;
/*0x2008*/ unsigned int LastUpdate;
/*0x200c*/ CInvSlot*    pSelectedItem;
/*0x2010*/ bool         bToggleBagsOpen;
/*0x2011*/ bool         bToggleBankBagsOpen;
/*0x2014*/
};

inline namespace deprecated {
	using EQINVSLOTMGR DEPRECATE("Use CInvSlotMgr instead of EQINVSLOTMGR") = CInvSlotMgr;
	using PEQINVSLOTMGR DEPRECATE("Use CInvSlotMgr* instead of PEQINVSLOTMGR") = CInvSlotMgr*;
}

//----------------------------------------------------------------------------

// @sizeof(CInvSlotWnd) == 0x2ac :: 2013-05-10 (emu) @ 0x755A79
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

/*0x260*/ CTextureAnimation* pBackground;
/*0x264*/ ItemGlobalIndex    ItemLocation;            // WindowType = ItemLocation.Location, InvSlot = ItemLocation.GetTopSlot()
/*0x270*/ ItemPtr            LinkedItem;              // If the slot is linked to a specific item
/*0x274*/ int                ItemOffsetX;
/*0x278*/ int                ItemOffsetY;
/*0x27c*/ CTextureAnimation* ptItem;
/*0x280*/ int                Quantity;
/*0x284*/ bool               bSelected;
/*0x285*/ bool               bFindSelected;
/*0x288*/ int                RecastLeft;
/*0x28c*/ bool               bHotButton;
/*0x28d*/ bool               bInventorySlotLinked;
/*0x290*/ CInvSlot*          pInvSlot;
/*0x294*/ CTextObjectInterface* pTextObject;
/*0x298*/ int                TextFontStyle;
/*0x29c*/ int                Mode;
/*0x2a0*/ D3DCOLOR           BGTintRollover;
/*0x2a4*/ D3DCOLOR           BGTintNormal;
/*0x2a8*/ int                LastTime;
/*0x2ac*/

	inline bool IsHotButton() const { return bHotButton; }

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

inline namespace deprecated {
	using EQINVSLOTWND DEPRECATE("Use CInvSlotWnd instead of EQINVSLOTWND") = CInvSlotWnd;
	using PEQINVSLOTWND DEPRECATE("Use CInvSlotWnd* instead of PEQINVSLOTWND") = CInvSlotWnd*;
}

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

// @sizeof(CItemDisplayWnd) == 0x5f4 :: 2013-05-10 (emu) @ 0x6A1AFF
constexpr size_t CItemDisplayWnd_size = 0x5f4;

class [[offsetcomments]] CItemDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	//EQLIB_OBJECT virtual int HandleKeyboardMsg(uint32_t, uint32_t, bool) override;
	//EQLIB_OBJECT virtual int OnProcessFrame() override;
	//EQLIB_OBJECT virtual int WndNotification(CXWnd* pWnd, uint32_t Message, void* pData) override;
	//EQLIB_OBJECT virtual bool AboutToShow() override;

	EQLIB_OBJECT CXStr CreateEquipmentStatusString(const ItemPtr&);
	EQLIB_OBJECT void SetItem(const ItemPtr& pItem, int flags);
	EQLIB_OBJECT void SetItemText(char*);
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

	enum {
		NumStatRows = 26,
		NumStatCols = 3,
		NumHeroic = 13,
		NumItemInfo = 12,
	};

/*0x220*/ CStmlWnd*         Description;                   // ItemDescription
/*0x224*/ CStmlWnd*         Name;                          // ItemDescription
/*0x228*/ CButtonWnd*       IconButton;                    // IconButton
/*0x22c*/ CStmlWnd*         ItemLore;                      // ItemLore
/*0x230*/ CTabWnd*          ItemDescriptionTabBox;         // ItemDescriptionTabBox
/*0x234*/ CPageWnd*         ItemDescriptionTab;            // ItemDescriptionTab
/*0x238*/ CPageWnd*         ItemLoreTab;                   // ItemLoreTab
/*0x23c*/ CSidlScreenWnd*   pAppearanceSocketScreen;       // IDW_Appearance_Socket_Screen
/*0x240*/ CButtonWnd*       pAppearanceSocketItem;         // IDW_Appearance_Socket_Item
/*0x244*/ CButtonWnd*       pAppearanceSocketBuyButton;    // IDW_Appearance_Socket_Buy_Button
/*0x248*/ CStmlWnd*         pAppearanceSocketDescription;  // IDW_Appearance_Socket_Description
/*0x24c*/ CSidlScreenWnd*   pItemSocketScreen[6];          // IDW_Socket_Slot_%d_Screen
/*0x264*/ CButtonWnd*       pItemSocketItemButton[6];      // IDW_Socket_Slot_%d_Item
/*0x27c*/ CStmlWnd*         pItemSocketDescription[6];     // IDW_Socket_Slot_%d_Description
/*0x294*/ CXStr             ItemInfo;                      // "Error: Item description not set" -- "this item is placable in yards, guild yards...", "This item can be used in tradeskills", etc
///*0x294*/ CXStr             Unknown0x2ac;
///*0x298*/ CXStr             Unknown0x2b0;
/*0x298*/ CXStr             WindowTitle;                   // "Item Display"
/*0x29c*/ CXStr             ItemAdvancedLoreText;          // "Error: Item lore not set"
/*0x2a0*/ CXStr             ItemMadeByText;
/*0x2a4*/ CXStr             BackupTitleText;
/*0x2a8*/ CXStr             SolventText;
/*0x2ac*/ CXStr             ItemInformationText;           // "Item Information: Placing this augment into...", "this armor can only be used in...", etc
/*0x2b0*/ ItemPtr           pItem;
/*0x2b4*/ bool              bActiveItem;
/*0x2b5*/ bool              bItemTextSet;
/*0x2b8*/ CTextureAnimation* BuffIcons;                    // A_SpellIcons
/*0x2bc*/ CTextureAnimation* DragIcons;                    // A_DragItem
/*0x2c0*/ bool              bTaggable;
/*0x2c1*/ bool              bFailed;
/*0x2c4*/ unsigned int      TabCount;
/*0x2c8*/ CLabel*           ModButtonLabel;                // IDW_ModButtonLabel
/*0x2cc*/ CLabel*           ClassTitle1;                   // IDW_ClassTitle1
/*0x2d0*/ CLabel*           ClassTitle2;                   // IDW_ClassTitle2
/*0x2d4*/ CLabel*           RaceTitle1;                    // IDW_RaceTitle2 (!)
/*0x2d8*/ CLabel*           RaceTitle2;                    // IDW_RaceTitle2
/*0x2dc*/ CLabel*           DeityTitle;                    // IDW_DeityTitle
///*0x2c8*/ CLabel*           RewardButtonLabel;             // IDW_RewardButtonLabel
///*0x2cc*/ CStmlWnd*         ConvertStml;                   // IDW_ConvertButtonLabel
///*0x2d0*/ CLabel*           FuseButtonLabel;               // IDW_FuseButtonLabel
/*0x2e0*/ CLabel*           MadeByLabel;                   // IDW_MadeBy
///*0x2d8*/ CLabel*           CollectedLabel;                // IDW_CollectedLabel
///*0x2dc*/ CLabel*           ScribedLabel;                  // IDW_ScribedLabel
/*0x2e4*/ int               Row;
/*0x2e8*/ bool              bAntiTwink;
/*0x2ec*/ CButtonWnd*       ModButton;                     // IDW_ModButton
///*0x2f0*/ CButtonWnd*       RewardButton;                  // IDW_RewardButton
///*0x2f0*/ CButtonWnd*       PrintRealEstateItems;          // IDW_PrintRealEstateItems
///*0x2f4*/ CButtonWnd*       ConvertButton;                 // IDW_ConvertButton
///*0x2f8*/ CButtonWnd*       FuseButton;                    // IDW_FuseButton
///*0x2fc*/ bool              bCollected;
///*0x2fd*/ bool              bCollectedReceived;
///*0x300*/ int               Unknown0x0314;
///*0x2f4*/ CXStr             ItemName;
///*0x308*/ bool              bScribed;
///*0x309*/ bool              bScribedReceived;
/*0x2f0*/ int               group[6];
/*0x308*/ int               showModified;
/*0x30c*/ int               heroicCount;
/*0x310*/ int               itemInfoCount;
/*0x314*/ CLabel*           lblItemInfo[NumItemInfo];      // IDW_ItemInfo%d
/*0x344*/ CLabel*           lblStat[NumStatRows][NumStatCols];      // IDW_Row%dCol%dStat
/*0x47c*/ CLabel*           lblValue[NumStatRows][NumStatCols];     // IDW_Row%dCol%dValue
/*0x5b4*/ CLabel*           lblHeroic[NumHeroic];          // IDW_Heroic%d
/*0x5e8*/ int               rightClickMenuId;
/*0x5ec*/ int               rightClickMenuSocketId;
///*0x610*/ CComboWnd*        ItemCompareList;               // IDW_ItemCompareList
///*0x614*/ bool              isComparing;                   // this and the next are a guess. Need to verify.
///*0x618*/ ItemPtr           pCompareItem;
///*0x61c*/ CTAFrameDraw*     ptaPageBorderHighlight;        // FT_DefPageBorderHighlight
///*0x620*/ CTAFrameDraw*     ptaPageBorder;                 // FT_DefPageBorder
/*0x5f0*/ uint32_t          ItemWndIndex;
/*0x5f4*/
};

inline namespace deprecated {
	using EQITEMWINDOW DEPRECATE("Use CItemDisplayWnd instead of EQITEMWINDOW") = CItemDisplayWnd;
	using PEQITEMWINDOW DEPRECATE("Use CItemDisplayWnd* instead of PEQITEMWINDOW") = CItemDisplayWnd*;
}

SIZE_CHECK(CItemDisplayWnd, CItemDisplayWnd_size);

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
#if HAS_KEYRING_WINDOW

class [[offsetcomments]] CKeyRingWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
	EQLIB_OBJECT CKeyRingWnd(CXWnd* parent);
	EQLIB_OBJECT virtual ~CKeyRingWnd();

	EQLIB_OBJECT static int ExecuteRightClick(KeyRingType keyRingType, const ItemPtr& pItem, int index);

	EQLIB_OBJECT CListWnd* GetKeyRingList(KeyRingType type) const;

	enum KeyRingPages
	{
		ePageMountKeyRing = 0,
		ePageIllusionKeyRing = 1,
		ePageFamiliarKeyRing = 2,
		ePageHeroForgeKeyRing = 3,
		ePageTeleportationItemsKeyRing = 4,

		eNumPages,
		ePageFirst = ePageMountKeyRing,
		ePageLast = ePageTeleportationItemsKeyRing,
	};

/*0x2d0*/ CListWnd*     pList[eNumPages];        // KRW_Mounts_List, KRW_Illusions_List, KRW_Familiars_List, KRW_HeroForge_List
/*0x2f8*/ CLabel*       pStatLabel[eNumPages];   // KRW_Mounts_StatsNameLabel, KRW_Illusions_StatNameLabel, KRW_Familiars_StatNameLabel,
/*0x320*/ CLabel*       pCountLabel[eNumPages];  // KRW_Mounts_CountLabel, KRW_Illusions_CountLabel, KRW_Familiars_CountLabel, KRW_HeroForge_CountLabel
/*0x348*/ CButtonWnd*   pBtnStat[eNumPages];     // KRW_Mounts_Selected, KRW_Illusions_Selected, KRW_Familiars_Selected, KRW_HeroForge_SlotButton
/*0x370*/ CButtonWnd*   pBtnSlot[eNumPages];     // KRW_Mounts_SlotButton, KRW_Illusions_SlotButton, KRW_Familiars_SlotButton
/*0x398*/ uint8_t       Unknown0x28c[0x20];
/*0x3b8*/ CButtonWnd*   pItemBtnTemplate;                // KRW_ItemBtnTemplate
/*0x3c0*/ CButtonWnd*   pBtnFamiliarLeave;               // KRW_Familiars_LeaveButton
/*0x3c8*/ CButtonWnd*   pBtnFamiliarAutoLeave;           // KRW_Familiars_AutoLeaveButton
/*0x3d0*/ CListWnd*     pKeysList;                       // KRW_Keys_List
/*0x3d8*/ uint8_t       Unknown0x2b4[0x8];
/*0x3e0*/ int           LastUpdateTime;                  // timestamp of when the current tab was last updated.
/*0x3e8*/ CPageWnd*     pPageMounts;                     // KRW_Mounts_Page
/*0x3f0*/ CPageWnd*     pPageIllusions;                  // KRW_Illusions_Page
/*0x3f8*/ CPageWnd*     pPageFamiliars;                  // KRW_Familiars_Page
/*0x400*/ CPageWnd*     pPageKeys;                       // KRW_Keys_Page
/*0x408*/ CPageWnd*     pPageHeroForge;                  // KRW_HeroForge_Page
/*0x410*/ CPageWnd*     pPageTeleportation;              // KRW_TeleportationItems_Page
/*0x418*/ CTabWnd*      pTabBox;                         // KRW_Subwindows
/*0x420*/ KeyRingPages  CurrentPage;
/*0x424*/
};

#endif // HAS_KEYRING_WINDOW

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

struct loot_msg;

// @sizeof(CLootWnd) == 0x3a8 :: 2013-05-10 (emu) @ 0x498E05
constexpr size_t CLootWnd_size = 0x3a8;

class [[offsetcomments]] CLootWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CLootWnd(CXWnd*);
	virtual ~CLootWnd();

	virtual int OnProcessFrame() override;
	virtual int PostDraw() override;
	virtual int WndNotification(CXWnd*, uint32_t, void*) override;

	EQLIB_OBJECT void AddItemToLootArray(const ItemPtr&);
	EQLIB_OBJECT void Deactivate(bool);
	EQLIB_OBJECT void LootAll(bool close);
	EQLIB_OBJECT void RequestLootSlot(int Slot, bool bAutoInventory);
	EQLIB_OBJECT void SlotLooted(int);
	EQLIB_OBJECT void FinalizeLoot();

	//----------------------------------------------------------------------------
	// data members

/*0x228*/ bool              bServerClose;
/*0x229*/ bool              bLootingActive;
/*0x22c*/ int               LootIndex[InvSlot_Max];
/*0x2b4*/ uint32_t          nNextRefreshTime; // 2b4
/*0x2b8*/ bool              bInventoryWasActive;
/*0x2bc*/ uint32_t          Unknown0x2bc;
/*0x2c0*/ ItemContainer     LootItems; // 2c0
/*0x2f8*/ bool              bCloseOnComplete;
/*0x2f9*/ bool              bRightClickLoot;
/*0x2fa*/ bool              bLootAllReady;
/*0x2fc*/ CXWnd*            LootInvWnd;                       // LootInvWnd 2fc
/*0x300*/ CInvSlotWnd*      LootSlotWnd[InvSlot_Max];         // LW_LootSlot%d 300
/*0x388*/ CLabel*           CorpseNameLabel;                  // LW_CorpseName 388
/*0x38c*/ CButtonWnd*       DoneButton;                       // DoneButton 38c
/*0x390*/ CButtonWnd*       BroadcastButton;                  // BroadcastButton 390
/*0x394*/ CButtonWnd*       LootAllButton;                    // LootAllButton 394
/*0x398*/ bool              bPopupPending;
/*0x39c*/ void*             msgData;
/*0x3a0*/ void*             lootAllMsgs; // 3a0
/*0x3a4*/ uint32_t          lastLootAllMsgSent; // 3a4
/*0x3a8*/

	inline ItemContainer& GetLootItems() { return LootItems; }
	inline ItemPtr GetLootItem(int slot) { return LootItems.GetItem(slot); }

	INVENTORYARRAY* get_pInventoryArray() { return reinterpret_cast<INVENTORYARRAY*>(&LootItems.Items[0]); }
	__declspec(property(get = get_pInventoryArray)) INVENTORYARRAY* pInventoryArray;

	int get_Size() { return LootItems.GetSize(); }
	__declspec(property(get = get_Size)) int Size;

	DEPRECATE("CLootWnd: Use Loots.GetSize() instead of NumOfSlots")
	__declspec(property(get = get_Size)) int NumOfSlots;
};

inline namespace deprecated {
	using EQLOOTWINDOW DEPRECATE("Use CLootWnd instead of EQLOOTWINDOW") = CLootWnd;
	using PEQLOOTWINDOW DEPRECATE("Use CLootWnd* instead of PEQLOOTWINDOW") = CLootWnd*;
}

SIZE_CHECK(CLootWnd, CLootWnd_size);

//============================================================================
// CMapViewWnd
//============================================================================

// Map Window sizeof() = 0x38
struct [[offsetcomments]] MapViewLabel
{
/*0x00*/ uint32_t      LabelId;
/*0x04*/ MapViewLabel* pNext;
/*0x08*/ MapViewLabel* pPrev;
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

// If you see:  'eqlib::MAPLINE': redefinition; different basic types
// Then make sure to change your code to use MapViewLabel instead of MAPLABEL;
using MAPLABEL DEPRECATE("Use MapViewLabel instead of MAPLABEL") = MapViewLabel;
using PMAPLABEL DEPRECATE("Use MapViewLabel* instead of PMAPLABEL") = MapViewLabel*;

// sizeof() = 0x28
struct [[offsetcomments]] MapViewLine
{
/*0x00*/ MapViewLine*  pNext;
/*0x04*/ MapViewLine*  pPrev;
/*0x08*/ CVector3      Start;
/*0x14*/ CVector3      End;
/*0x20*/ ARGBCOLOR     Color;
/*0x24*/ int           Layer;                    // 0-3;
/*0x28*/
};

// If you see: 'eqlib::MAPLINE': redefinition; different basic types
// Then make sure to change your code to use MapViewLine instead of MAPLINE;
using MAPLINE DEPRECATE("Use MapViewLine instead of MAPLINE") = MapViewLine;
using PMAPLINE DEPRECATE("Use MapViewLine* instead of PMAPLINE") = MapViewLine*;

// pLines address = 0x254 + 0x035c = 0x05b0 (address of pMapViewMapVfTable)
// MapViewMap_size: 0x848 - 0x4b8 = 0x390

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
	//EQLIB_OBJECT void SaveEx(char*, int);
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

/*0x220*/ float              mapViewMinX;
/*0x224*/ float              mapViewMinY;
/*0x228*/ float              mapViewMaxX;
/*0x22c*/ float              mapViewMaxY;
/*0x230*/ int                panOffsetX;
/*0x234*/ int                panOffsetY;
/*0x238*/ float              lineOffsetX;
/*0x23c*/ float              lineOffsetY;
/*0x240*/ float              scaleDiffX;
/*0x244*/ float              scaleDiffY;
/*0x248*/ float              mapViewScaleX;
/*0x24c*/ float              mapViewScaleY;
/*0x250*/ MapViewLine*       pLines;
/*0x254*/ MapViewLabel*      pLabels;
/*0x258*/ uint32_t           nextLabelId;
/*0x25c*/ bool               lineActive;
/*0x260*/ CVector3           currentPoint;
/*0x26c*/ RGB                currentColor;
/*0x270*/ RGB                myColor;
/*0x274*/ RGB                groupColor;
/*0x278*/ RGB                findPathColor;
/*0x27c*/ bool               failedFindActive;
/*0x280*/ CVector3           failedFindPoint;
/*0x28c*/ int                failedFindType;
/*0x290*/ MapViewLine*       markedLines;
/*0x294*/ MapViewLabel*      markedLabel;
/*0x298*/ MapViewLabel*      selectedLabel;
/*0x29c*/ int                layerFilter;              // bitmask of active layers
/*0x2a0*/ int                activeLayer;
/*0x2a4*/ int                minZ;
/*0x2a8*/ int                maxZ;
/*0x2ac*/ bool               zFilterActive;
/*0x2b0*/ float              zoom;
/*0x2b4*/ float              recalcZoom;
/*0x2b8*/ int                range;
/*0x2bc*/ bool               showGroup;
/*0x2bd*/ bool               showNames;
/*0x2be*/ bool               findAutoZoom;
/*0x2bf*/ bool               showLabels;
/*0x2c0*/ bool               recalcLabels;
/*0x2c1*/ bool               canAddToMap;
/*0x2c4*/ EQZoneIndex        zoneId;
/*0x2c8*/ CXStr              customMapPath;
/*0x2cc*/

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

// @sizeof(CMapViewWnd) == 0x624 :: 2013-05-10 (emu) @ 0x4984f7
constexpr size_t CMapViewWnd_size = 0x624;

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
/*0x224*/ int         ZoneId;
/*0x228*/ bool        bAutoMapping;
/*0x22c*/ CButtonWnd* btnPanLeft;
/*0x230*/ CButtonWnd* btnPanRight;
/*0x234*/ CButtonWnd* btnPanUp;
/*0x238*/ CButtonWnd* btnPanDown;
/*0x23c*/ CButtonWnd* btnPanReset;
/*0x240*/ CButtonWnd* btnZoomIn;
/*0x244*/ CButtonWnd* btnZoomOut;
/*0x248*/ CButtonWnd* btnShowGroup;
///*0x24c*/ CButtonWnd* btnShowNames;
/*0x24c*/ CButtonWnd* btnFind;
/*0x250*/ CButtonWnd* btnEndFind;
/*0x254*/ CButtonWnd* btnFindAutoZoom;
/*0x258*/ CButtonWnd* btnMapZoneGuide;
/*0x25c*/ CButtonWnd* btnToolbar;
/*0x260*/ char        szZoneName[0x80];
/*0x2e0*/ CButtonWnd* btntoggleLabels;
/*0x2e4*/ CEditWnd*   editMinZ;
/*0x2e8*/ CEditWnd*   editMaxZ;
/*0x2ec*/ CButtonWnd* btnZFilter;
/*0x2f0*/ CButtonWnd* btnLayer0;
/*0x2f4*/ CButtonWnd* btnLayer1;
/*0x2f8*/ CButtonWnd* btnLayer2;
/*0x2fc*/ CButtonWnd* btnLayer3;
/*0x300*/ CButtonWnd* btnLayer1Active;
/*0x304*/ CButtonWnd* btnLayer2Active;
/*0x308*/ CButtonWnd* btnLayer3Active;
/*0x30c*/ CButtonWnd* btnLoadCurrent;
/*0x310*/ CPageWnd*   pageAtlas;
/*0x314*/ CPageWnd*   pageMap;
/*0x318*/ CTabWnd*    tabWnd;
/*0x31c*/ CXWnd*      MapRenderArea;
/*0x320*/ CComboWnd*  MapsDirSelect;
/*0x324*/ CXWnd*      AtlasRenderArea;
/*0x328*/ CAtlas*     AtlasWnd;
/*0x32c*/ CComboWnd*  AtlasDirSelect;
/*0x330*/ CButtonWnd* btnAtlasZoneGuide;
/*0x334*/ CButtonWnd* btnMapIcon;
/*0x338*/ CEditWnd*   editSearchBox;
/*0x33c*/ CButtonWnd* btnSearch;
/*0x340*/ CButtonWnd* btnSearchClear;
/*0x344*/ CListWnd*   listSearch;
/*0x348*/ CXWnd*      wndSearchLayout;
/*0x34c*/ CButtonWnd* btnSearchHide;
/*0x350*/ CXWnd*      wndSpacer;;
/*0x354*/ bool        bEditing;
/*0x358*/ MapViewMap  MapView;                            // a window component owned by CMapViewWnd
/*0x624*/
	// alias the stupid
	__declspec(property(get = getLines)) MapViewLine* pLines;
	__declspec(property(get = getLabels)) MapViewLabel* pLabels;

	ALT_MEMBER_GETTER_ARRAY(char, 0x80, szZoneName, shortzonename);

	MapViewLine* getLines() { return MapView.pLines; }
	MapViewLabel* getLabels() { return MapView.pLabels; }
};

inline namespace deprecated {
	using EQMAPWINDOW DEPRECATE("Use CMapViewWnd instead of EQMAPWINDOW") = CMapViewWnd;
	using PEQMAPWINDOW DEPRECATE("Use CMapViewWnd* instead of PEQMAPWINDOW") = CMapViewWnd*;
}

SIZE_CHECK(CMapViewWnd, CMapViewWnd_size);

//============================================================================
// CMarketplaceWnd
//============================================================================

class [[offsetcomments]] CMarketplaceWnd : public CSidlScreenWnd
{
public:
};

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
/*0x00*/ ItemPtr       pItem;
/*0x04*/ int           Unknown;
/*0x08*/

	ALT_MEMBER_GETTER_DEPRECATED(ItemClient*, pItem, pCont, "Use pItem instead of pCont");
};

class [[offsetcomments]] MerchantPageHandler : public VeBaseReferenceCount
{
public:
/*0x08*/ CMerchantWnd*   pParent;
/*0x0c*/ uint32_t        alignment0x0c;
/*0x10*/ ItemContainer   Items;
/*0x48*/ int             MaxItems;
/*0x4c*/ int             LastIndex;
/*0x50*/ CListWnd*       ItemsList;
/*0x54*/ CPageWnd*       PurchasePage;
/*0x58*/ bool            bListNeedsRefresh;
/*0x5c*/

	// offset comments indicate vtable offset
	/*0x08*/ EQLIB_OBJECT virtual void DestroyItemByUniqueId(int64_t UniqueID);
	/*0x0c*/ EQLIB_OBJECT virtual void DestroyItemByItemGuid(const EqItemGuid& ItemGuid);
	/*0x10*/ EQLIB_OBJECT virtual void DestroyItems();
	/*0x14*/ EQLIB_OBJECT virtual void DestroyItem(int);
	/*0x18*/ EQLIB_OBJECT virtual bool AddItemToArray(const ItemPtr& pSentItem);
	/*0x1c*/ EQLIB_OBJECT virtual int Sort(SListWndSortInfo* SortInfo);
	/*0x20*/ EQLIB_OBJECT virtual void UpdateList();
	/*0x24*/ EQLIB_OBJECT virtual int DisplayBuyOrSellPrice(const ItemPtr& pItem, bool bBuy) const;
	/*0x28*/ EQLIB_OBJECT virtual CXStr GetPriceString(int Price) const;
	/*0x2c*/ EQLIB_OBJECT virtual void UpdateControls();
	/*0x30*/ EQLIB_OBJECT virtual bool RequestGetItem(int Qty);
	/*0x34*/ EQLIB_OBJECT virtual void RequestPutItem(int Qty);
	/*0x38*/ EQLIB_OBJECT virtual bool CanSelectSlot(const ItemGlobalIndex& Location) const;
	/*0x3c*/ EQLIB_OBJECT virtual void DisablePageSpecificButtons();
	/*0x40*/ EQLIB_OBJECT virtual eMerchantServices GetHandlerType() const;

	int GetItemCount() const
	{
		return Items.GetSize();
	}

	ItemPtr GetItem(int index) const
	{
		return Items.GetItem(index);
	}
};

// Size 0x68
class [[offsetcomments]] PurchasePageHandler : public MerchantPageHandler
{
	FORCE_SYMBOLS;

public:
/*0x5c*/ uint32_t unknown0x5c;
/*0x60*/ bool bShowAllItems;
/*0x64*/

	EQLIB_OBJECT bool RequestGetItem(int);
	EQLIB_OBJECT void RequestPutItem(int);
};

struct sell_msg;

enum MerchantPages
{
	RegularMerchantPage,
	BuybackMerchantPage,
	MailMerchantPage,

	MaxMerchantPages
};

// size: 0x2b0
class [[offsetcomments]] CMerchantWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	using PageHandlerPtr = MerchantPageHandler*;
	using PageHandlerArray = VeArray<PageHandlerPtr>;

/*0x224*/ uint32_t           NextRefreshTime;
/*0x228*/ bool               bInventoryWasActive;
/*0x22c*/ PageHandlerArray   PageHandlers;
/*0x238*/ float              MerchantGreed;
/*0x23c*/ ItemGlobalIndex    ItemLocation;
/*0x248*/ ItemPtr            pSelectedItem;
/*0x24c*/ eqtime_t           MailExpireTime;
/*0x250*/ CLabel*            MerchantNameLabel;
/*0x254*/ CLabel*            SelectedItemLabel;
/*0x258*/ CLabel*            SelectedPriceLabel;
/*0x25c*/ CButtonWnd*        InspectButton;
/*0x260*/ CButtonWnd*        PreviewButton;
/*0x264*/ CButtonWnd*        SelectedItemButton;
/*0x268*/ CButtonWnd*        BuyButton;
/*0x26c*/ CButtonWnd*        SellButton;
/*0x270*/ CButtonWnd*        RecoverButton;
/*0x274*/ CButtonWnd*        RetrieveButton;
/*0x278*/ CButtonWnd*        SendButton;
/*0x27c*/ CLabel*            SendToLabel;
/*0x280*/ CEditWnd*          SendToEdit;
/*0x284*/ CLabel*            NoteLabel;
/*0x288*/ CEditWnd*          NoteEdit;
/*0x28c*/ CListWnd*          ItemsList;
/*0x290*/ CListWnd*          ItemsRecoveryList;
/*0x294*/ CListWnd*          ItemsMailList;
/*0x298*/ CButtonWnd*        DoneButton;
/*0x29c*/ CPageWnd*          PurchasePage;
/*0x2a0*/ CPageWnd*          RecoveryPage;
/*0x2a4*/ CPageWnd*          MailPage;
/*0x2a8*/ CTabWnd*           TabWindow;
/*0x2ac*/ CButtonWnd*        UsableButton;
/*0x2b0*/

	CMerchantWnd(CXWnd*);
	virtual ~CMerchantWnd();

	EQLIB_OBJECT void AddContainerToMercArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToMercArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToMercArray(EQ_Note*);
	EQLIB_OBJECT void ClearMerchantSlot(int);
	EQLIB_OBJECT void FinishBuyingItem(sell_msg*);
	EQLIB_OBJECT void FinishSellingItem(sell_msg*);
	EQLIB_OBJECT int SelectBuySellSlot(const ItemGlobalIndex& index);
	inline int SelectBuySellSlot(const ItemGlobalIndex& index, int ListIndex) { return SelectBuySellSlot(index); }
	EQLIB_OBJECT void DisplayBuyOrSellPrice(const ItemPtr& item, bool buy);
	EQLIB_OBJECT void HandleBuy(int);
	EQLIB_OBJECT void HandleSell(int);
	EQLIB_OBJECT void UpdateBuySellButtons();
};

inline namespace deprecated {
	using EQMERCHWINDOW DEPRECATE("Use CMerchantWnd instead of EQMERCHWINDOW") = CMerchantWnd;
	using PEQMERCHWINDOW DEPRECATE("Use CMerchantWnd* instead of PEQMERCHWINDOW") = CMerchantWnd*;
}

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
/*0x08*/ int nAssignmentNumber;
/*0x0c*/
};

inline namespace deprecated {
	using EQKBASSIGN DEPRECATE("Use KeyboardAssignmentData instead of EQKBASSIGN") = KeyboardAssignmentData;
	using PEQKBASSIGN DEPRECATE("Use KeyboardAssignmentData* instead of PEQKBASSIGN") = KeyboardAssignmentData*;
}

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
/*0x2e0*/ KeyboardAssignmentData   Binds[0xA1];
/*0xcf0*/
/*0x904*/
};

inline namespace deprecated {
	using EQOPTIONSWINDOW DEPRECATE("Use COptionsWnd instead of EQOPTIONSWINDOW") = COptionsWnd;
	using PEQOPTIONSWINDOW DEPRECATE("Use COptionsWnd* instead of PEQOPTIONSWINDOW") = COptionsWnd*;
}

//============================================================================
// COverseerWnd
//============================================================================

class [[offsetcomments]] COverseerWnd : public CSidlScreenWnd
{
public:
};


//============================================================================
// CPetInfoWnd
//============================================================================

constexpr const int MAX_PET_BUTTONS = 14;

// @sizeof(CPetInfoWnd) == 0x920 :: 2013-05-10 (emu) @ 0x497f32
constexpr size_t CPetInfoWnd_size = 0x920;

class [[offsetcomments]] CPetInfoWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPetInfoWnd(CXWnd*);
	virtual ~CPetInfoWnd();

	EQLIB_OBJECT CButtonWnd* GetButton(int);
	EQLIB_OBJECT void SetShowOnSummon(bool);
	EQLIB_OBJECT void Update();

	inline int GetMaxBuffs() const { return MAX_TOTAL_BUFFS_NPC; }

	//----------------------------------------------------------------------------
	// data members

/*0x224*/ uint32_t           LastUpdateTime;
/*0x228*/ uint32_t           uiCacheId;
/*0x22c*/ bool               bUnknown0x23c;
/*0x230*/ CStaticTextTemplate* pPetName;
/*0x234*/ CCheckBoxWnd*      pButton[MAX_PET_BUTTONS];
/*0x26c*/ CCheckBoxWnd*      pPetButtonMappings[NumPetCommands];
/*0x2b4*/ CXWnd*             pWndBuffs;                         // BuffWindow
/*0x2b8*/ CTextureAnimation* pGoodBuffBackground;               // PetBlueIconBackground
/*0x2bc*/ CTextureAnimation* pBadBuffBackground;                // PetRedIconBackground
/*0x2c0*/ CTextureAnimation* pBypassBuffBackground;             // YellowIconBackground
/*0x2c4*/ CTextureAnimation* pBuffIcons[MAX_TOTAL_BUFFS_NPC];
/*0x448*/ CButtonWnd*        pPetBuffBtns[MAX_TOTAL_BUFFS_NPC]; // PetBuff%d - was pWnd
/*0x5cc*/ int                Buff[MAX_TOTAL_BUFFS_NPC];         // Spell ID# of each buff
/*0x750*/ HashTable<CXStr>   WhoCast;
/*0x760*/ uint32_t           LastBuffDecTime;                   // last time buff counters were decremented
/*0x764*/ bool               bHadPetLastTime;
/*0x765*/ bool               bShowOnSummon;
/*0x768*/ uint32_t           ListContextMenuID;
/*0x76c*/ CXWnd*             pRequestingWnd;
/*0x770*/ unsigned int       PetBuffTimer[MAX_TOTAL_BUFFS_NPC]; // duration until buff fades, in milliseconds
/*0x8f4*/ bool               bRemovedBuffBlockMenuItem;
/*0x8f8*/ int                PetCommandSelectContextMenu;
/*0x8fc*/ CXWnd*             LastClickedButton;
/*0x900*/ bool               bPetButtonEnable[NumPetCommands];
/*0x912*/ bool               bPetButtonsDirty;
/*0x913*/ bool               Sit;
/*0x914*/ bool               Stop;
/*0x915*/ bool               ReGroup;
/*0x916*/ bool               Follow;
/*0x917*/ bool               Guard;
/*0x918*/ bool               Taunt;
/*0x919*/ bool               Hold;
/*0x91a*/ bool               GHold;
/*0x91b*/ bool               Focus;
/*0x91c*/ bool               SpellHold;
/*0x920*/
};

inline namespace deprecated {
	using EQPETINFOWINDOW DEPRECATE("Use CPetInfoWnd instead of EQPETINFOWINDOW") = CPetInfoWnd;
	using PEQPETINFOWINDOW DEPRECATE("Use CPetInfoWnd* instead of PEQPETINFOWINDOW") = CPetInfoWnd*;
}

SIZE_CHECK(CPetInfoWnd, CPetInfoWnd_size);

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


// @sizeof(CPlayerWnd) == 0x2d4 :: 2013-05-10 (emu) @ 0x49896e
constexpr size_t CPlayerWnd_size = 0x2d4;

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

/*0x2cc*/ 
/*0x224*/ CGaugeWnd*         pPlayerHP;                         // PlayerHP
/*0x228*/ CGaugeWnd*         pPetHP;                            // PetHP
/*0x22c*/ CGaugeWnd*         pPlayerMana;                       // PlayerMana
/*0x230*/ CGaugeWnd*         pPlayerEndurance;                  // PlayerFatigue
/*0x234*/ CLabel*            pPlayerHPLbl;                      // HPLabel
/*0x238*/ CLabel*            pPlayerManaLbl;                    // ManaLabel
/*0x23c*/ CLabel*            pPlayerEnduranceLbl;               // FatigueLabel
/*0x240*/ CLabel*            pPlayerHPPercentLbl;               // HPPerLabel
/*0x244*/ CLabel*            pPlayerManaPercentLbl;             // ManaPercLabel
/*0x248*/ CLabel*            pPlayerEndurancePercentLbl;        // FatiguePercLabel
/*0x24c*/ COLORREF           HPTextColor;
/*0x250*/ CButtonWnd*        pGroupRoleTankBtn;                 // GroupRoleTank
/*0x254*/ CButtonWnd*        pGroupRoleAssistBtn;               // GroupRoleAssist
/*0x258*/ CButtonWnd*        pGroupRolePullerBtn;               // GroupRolePuller
/*0x25c*/ CButtonWnd*        pGroupRoleMarkNPCBtn;              // GroupRoleMarkNPC
/*0x260*/ CGaugeWnd*         pCombatTimerGauge;                 // Player_CombatTimer
/*0x264*/ CLabel*            pCombatTimerLbl;                   // Player_CombatTimerLabel
/*0x268*/ CButtonWnd*        pNewMailIconBtn;                   // PW_NewMailIcon
/*0x26c*/ CButtonWnd*        pParcelsIconBtn;                   // PW_ParcelsIcon
/*0x270*/ CButtonWnd*        pParcelsOverLimitIconBtn;          // PW_ParcelsOverLimitIcon
/*0x274*/ CLabel*            pAggroPctPlayerLbl;                // PW_AggroPctPlayerLabel
/*0x278*/ CLabel*            pAggroPctSecondaryLbl;             // PW_AggroPctSecondaryLabel
/*0x27c*/ CLabel*            pAggroNameSecondaryLbl;            // PW_AggroNameSecondaryLabel
/*0x280*/ bool               bDrawAutoAttackRect;
/*0x284*/ int                LastUpdateTimer;
/*0x288*/ int                LastFrameTimer;
/*0x28c*/ CStaticAnimationTemplate* pAttackIndicatorAnimTop;    // A_AttackIndicatorAnimTop
/*0x290*/ CStaticAnimationTemplate* pAttackIndicatorAnimBottom; // A_AttackIndicatorAnimBottom
/*0x294*/ CStaticAnimationTemplate* pAttackIndicatorAnimLeft;   // A_AttackIndicatorAnimLeft
/*0x298*/ CStaticAnimationTemplate* pAttackIndicatorAnimRight;  // A_AttackIndicatorAnimRight
/*0x29c*/ CStaticAnimationTemplate* pAttackIndicatorAnimFill;   // A_AttackIndicatorAnimFill
/*0x2a0*/ CButtonWnd*        pCombatStateAnimButton;            // PW_CombatStateAnim
/*0x2a4*/ int                AttackIndicatorPulseValue;
/*0x2a8*/ CContextMenu*      pContextMenu;
/*0x2ac*/ uint32_t           Unknowns[9];
/*0x2d0*/ ECombatState       CombatState;                       // right above "A_PWCSInCombat"
/*0x2d4*/
};

SIZE_CHECK(CPlayerWnd, CPlayerWnd_size);

inline namespace deprecated {
	using CPLAYERWND DEPRECATE("Use CPlayerWnd instead of CPLAYERWND") = CPlayerWnd;
	using PCPLAYERWND DEPRECATE("Use CPlayerWnd* instead of PCPLAYERWND") = CPlayerWnd*;
}

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
/*0x228*/ int                 Unknown0x008;
/*0x22c*/ int                 NumItems;
/*0x230*/ bool                HdrItemName;
/*0x231*/ bool                HdrTheme;
/*0x232*/ bool                HdrPrice;
/*0x233*/ char                OriginalPointsLabel[0x40];
/*0x274*/ CLabel*             MerchantNameLabel;
/*0x278*/ CListWnd*           ItemList;
/*0x27c*/ CListWnd*           PointList;
/*0x280*/ CButtonWnd*         EquipButton;
/*0x284*/ CButtonWnd*         PurchaseButton;
/*0x288*/ CButtonWnd*         SellButton;
/*0x28c*/ CButtonWnd*         DoneButton;
/*0x290*/ CLabel*             PointsAvailableValue;
/*0x294*/ CLabel*             PointsEverEarnedLabel;
/*0x298*/ CLabel*             PointsAvailableLabel;
/*0x29c*/ unsigned int        NextRefreshTime;
/*0x2a0*/ PlayerClient*       ActiveMerchant;
/*0x2a4*/ PointMerchantItem** Items;
/*0x2a8*/ int                 MerchantThemeId;
/*0x2ac*/ int                 CurrentSelection;
/*0x2b0*/ int                 CurrentSort;
/*0x2b4*/ bool                bCurrentAscending;
/*0x2b8*/ ItemGlobalIndex     ItemLocation;
/*0x2c4*/ ItemPtr             pSelectedItem;
/*0x2c8*/ bool                bInventoryWasActive;
/*0x2cc*/ int                 CurrentItem;
/*0x2d0*/ int                 CurrentQuantity;
/*0x2d4*/ int                 SliderType;
/*0x2d8*/ PointMerchantInterface* pHandler;
/*0x2dc*/
};

//============================================================================
// CPurchaseGroupWnd
//============================================================================

class [[offsetcomments]] CPurchaseGroupWnd : public CSidlScreenWnd
{
public:
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

// size: 0x500
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

/*0x22c*/ uint8_t            Unknown0x244[0x154];
/*0x380*/ COLORREF           ClassColors[0x10];
/*0x3c0*/ uint8_t            Unknown0x330[0x80];
/*0x440*/
};

inline namespace deprecated {
	using EQRAIDWINDOW DEPRECATE("Use CRaidWnd instead of EQRAIDWINDOW") = CRaidWnd;
	using PEQRAIDWINDOW DEPRECATE("Use CRaidWnd* instead of PEQRAIDWINDOW") = CRaidWnd*;
}

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

class [[offsetcomments]] CSpellBookWnd : public CSidlScreenWnd,
	public PopDialogHandler, public WndEventHandler
{
	FORCE_SYMBOLS

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

/*0x228*/ CPopDialogWnd* m_currentPopup;
/*0x22c*/ int            LeftPageNbr;
/*0x230*/ int            SelectedBookIndex;
/*0x234*/ int            MemSlotIndex;
/*0x238*/ int            SpellId;
/*0x23c*/ int            MemTicksLeft;
/*0x240*/ int            ScribeBookSlot;
/*0x244*/ int            ScribeTicksLeft;
/*0x248*/
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

// size: 0x258
class [[offsetcomments]] CSpellDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CSpellDisplayWnd(CXWnd* parent, ESpellDisplayType displayType);
	virtual ~CSpellDisplayWnd();

	EQLIB_OBJECT void SetSpell(int SpellID, bool HasSpellDescr, int);
	EQLIB_OBJECT void UpdateStrings();

/*0x220*/ int                WindowID;
/*0x224*/ CLabelWnd*         pDuration;
/*0x228*/ CStmlWnd*          pDescription;
/*0x22c*/ CStmlWnd*          pName;
/*0x230*/ CButtonWnd*        pIcon;
/*0x234*/ CXStr              DescriptionText;
/*0x238*/ CXStr              TitleText;
/*0x23c*/ bool               bActiveItem;
/*0x240*/ CTextureAnimation* ptaBuffIcons;
/*0x244*/ CTextureAnimation* ptaDragIcons;
/*0x248*/ bool               bFailed;
/*0x24c*/ ESpellDisplayType  SpellDisplayType;
/*0x250*/ int                SpellID;
/*0x254*/ int                LastUpdateTime;
/*0x258*/
};

inline namespace deprecated {
	using EQSPELLINFOWINDOW DEPRECATE("Use CSpellDisplayWnd instead of EQSPELLINFOWINDOW") = CSpellDisplayWnd;
	using PEQSPELLINFOWINDOW DEPRECATE("Use CSpellDisplayWnd& instead of PEQSPELLINFOWINDOW") = CSpellDisplayWnd*;
}

//============================================================================
// CSpellGemWnd
//============================================================================

// CSpellGemWnd_size: 0x3f8
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

/*0x260*/ int                MouseButtonState;
/*0x264*/ bool               bChecked;
/*0x268*/ unsigned int       LastRefresh;
/*0x26c*/ D3DCOLOR           SpellGemTintArray[11];
/*0x298*/ int                SpellGemAlphaArray[11];
/*0x2c4*/ int                Unknown0x02f4;
/*0x2c8*/ int                Unknown0x02f8;
/*0x2cc*/ int                SpellIconOffsetX;
/*0x2d0*/ int                SpellIconOffsetY;
/*0x2d4*/ int                spellicon;                // if this is equal to FFFFFFFF there is no spell memmed in this slot...
/*0x2d8*/ int                spellstate;               // 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast, should really rename this to tintstage
/*0x2dc*/ int                TintIndex;
/*0x2e0*/ CTextureAnimation* SpellIconTexture;         // CTextureAnimation
/*0x2e4*/ CTextureAnimation* CustomIconTexture;        // CTextureAnimation
/*0x2e8*/ int                SpellSlot;
/*0x2ec*/ int                Percent;
/*0x2f0*/ CSpellGemDrawTemplate DrawTemplate;
/*0x300*/
};

inline namespace deprecated {
	using EQCASTSPELLGEM DEPRECATE("Use CSpellGemWnd instead of EQCASTSPELLGEM") = CSpellGemWnd;
	using PEQCASTSPELLGEM DEPRECATE("Use CSpellGemWnd* instead of PEQCASTSPELLGEM") = CSpellGemWnd*;
}

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

// @sizeof(CTargetWnd) == 0x8B4 :: 2013-05-10 (emu) @ 0x498802
constexpr size_t CTargetWnd_size = 0x8B4;

class [[offsetcomments]] CTargetWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CTargetWnd(CXWnd*);
	virtual ~CTargetWnd();

	EQLIB_OBJECT CXStr* GetBuffCaster(int SpellID);
	EQLIB_OBJECT void RefreshTargetBuffs(CUnSerializeBuffer& buffer);
	EQLIB_OBJECT void HandleBuffRemoveRequest(CXWnd* pWnd);

	inline int GetMaxBuffs() const { return MAX_TOTAL_BUFFS ; }

	//----------------------------------------------------------------------------
	// data members

/*0x224*/ CXWnd*             pWndBuffs;
/*0x228*/ CTextureAnimation* pBuffGoodBackground;
/*0x22c*/ CTextureAnimation* pBuffBadBackground;
/*0x230*/ CTextureAnimation* pBuffBypassBackground;
/*0x234*/ CTextureAnimation* ptaBuffIcons[MAX_TOTAL_BUFFS];
/*0x3b8*/ CButtonWnd*        pTargetBuff[MAX_TOTAL_BUFFS];
/*0x53c*/ int                BuffSpellID[MAX_TOTAL_BUFFS]; // -1 if no buff
/*0x6c0*/ int                BuffTimer[MAX_TOTAL_BUFFS];
/*0x844*/ int                LastBuffReceivedTime;
/*0x848*/ int                Timer;
/*0x84c*/ HashTable<CXStr>   Casters;
/*0x85c*/ int                ContextMenuID;
/*0x860*/ CXWnd*             RequestingWnd;
/*0x864*/ bool               bRemovedBuffBlockMenuItem;
/*0x868*/ int                Type;                     // 1 = self, 4 = group member, 5 = PC, 7 = NPC
/*0x86c*/ uint8_t            Unknown0x884[0x48];
/*0x8b4*/
};

SIZE_CHECK(CTargetWnd, CTargetWnd_size);

inline namespace deprecated {
	using CTARGETWND DEPRECATE("Use CTargetWnd instead of CTARGETWND") = CTargetWnd;
	using PCTARGETWND DEPRECATE("Use CTargetWnd* instead of PCTARGETWND") = CTargetWnd*;
}

//============================================================================
// CTaskWnd
//============================================================================

class CTaskWnd : public CSidlScreenWnd, public PopDialogHandler, public WndEventHandler
{
public:
	CTaskWnd(CXWnd*);
	virtual ~CTaskWnd();

	EQLIB_OBJECT int UpdateTaskTimers(unsigned long fasttime);

	void ConfirmAbandonTask(int taskId)
	{
		DialogResponse(100 /* abandon task */, 4 /* yes */, (void*)(intptr_t)taskId);
	}
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
	EQLIB_OBJECT CXStr GetEntryText() const { return m_text; };
	EQLIB_OBJECT void SetEntryText(const CXStr& text) { m_text = text; }
	EQLIB_OBJECT void Activate(CXWnd*, int, char*, int, int, char*);
	EQLIB_OBJECT void Callback(bool);
	EQLIB_OBJECT void UpdateButtons();

/*0x224*/ int          m_minLength;
/*0x228*/ int          m_maxLength;
/*0x22c*/ CXStr        m_text;
/*0x230*/ CXWnd*       m_parent;
/*0x234*/ CEditWnd*    m_entry;
/*0x238*/ CLabel*      m_prompt;
/*0x23c*/ CButtonWnd*  m_ok;
/*0x240*/ CButtonWnd*  m_cancel;
/*0x244*/
};

inline namespace deprecated {
	using CTEXTENTRYWND DEPRECATE("Use CTextEntryWnd instead of CTEXTENTRYWND") = CTextEntryWnd;
	using PCTEXTENTRYWND DEPRECATE("Use CTextEntryWnd* instead of PCTEXTENTRYWND") = CTextEntryWnd*;
}

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

constexpr int MAX_RECIPE_ITEMS = 10;

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

inline namespace deprecated {
	using EQTRADESKILLRECIPE DEPRECATE("Use TradeskillRecipe instead of EQTRADESKILLRECIPE") = TradeskillRecipe;
	using PEQTRADESKILLRECIPE DEPRECATE("Use TradeskillRecipe* instead of PEQTRADESKILLRECIPE") = TradeskillRecipe*;
}

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
/*0x220*/ DWORD        Unknown0x148[0x1b];
/*0x28c*/ TradeskillRecipe* SearchResults[0x64];
/*0x41c*/ DWORD        Unknown0x344;
/*0x420*/ DWORD        Unknown0x348;
/*0x424*/ DWORD        Unknown0x34c;
/*0x428*/ ItemPtr      Container;
/*0x42c*/ DWORD        Unknown0x354;
/*0x430*/ TradeskillRecipe* SelectedRecipe;
/*0x434*/ DWORD        Unknown0x35c;
/*0x438*/ DWORD        SkillLevel;
/*0x43c*/ DWORD        Unknown0x364;
/*0x440*/ DWORD        Unknown0x368;
/*0x444*/ BYTE         Unknown0x36c[0x58];
/*0x49c*/ DWORD        Unknown0x3c4;
/*0x4a0*/ DWORD        Unknown0x3c8;
/*0x4a4*/ BYTE         Unknonw0x3cc[0x8];
/*0x4ac*/ DWORD        Unknown0x3d4;
/*0x4b0*/ DWORD        Unknown0x3d8;
/*0x4b4*/
};

inline namespace deprecated {
	using EQTRADESKILLWINDOW DEPRECATE("Use CTradeSkillWnd instead of EQTRADESKILLWINDOW") = CTradeSkillWnd;
	using PEQTRADESKILLWINDOW DEPRECATE("Use CTradeSkillWnd* instead of PEQTRADESKILLWINDOW") = CTradeSkillWnd*;
}

//============================================================================
// CTradeWnd
//============================================================================

// size: 0x300
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

/*0x224*/ unsigned int       NextRefreshTime;
/*0x228*/ bool               bInventoryWasOpen;
/*0x22c*/ CButtonWnd*        HisMoneyButton[4];
/*0x23c*/ CButtonWnd*        MyMoneyButton[4];
/*0x24c*/ CButtonWnd*        TradeButton;
/*0x250*/ CButtonWnd*        CancelButton;
/*0x254*/ CLabel*            HisNameLabel;
/*0x258*/ CLabel*            MyNameLabel;
/*0x25c*/ CInvSlotWnd*       pInvSlotWnd[MAX_TRADE_SLOTS];
/*0x29c*/ long               HisMoney[4];
/*0x2ac*/ long               MyMoney[4];
/*0x2bc*/ uint32_t           Unknown0x2bc;
/*0x2c0*/ ItemContainer      TradeItems;
/*0x2f8*/ bool               bHisReadyTrade;           // was HisTradeReady
/*0x2f9*/ bool               bMyReadyTrade;            // was MyTradeReady
/*0x2fa*/ bool               bIsTrading;               // was TradeWndOpen
/*0x2fc*/

	inline ItemContainer& GetTradeItems() { return TradeItems; }
	// TODO: Add aliases

	ALT_MEMBER_GETTER(bool, bHisReadyTrade, HisTradeReady);
	ALT_MEMBER_GETTER(bool, bMyReadyTrade, MyTradeReady);
};

inline namespace deprecated {
	using EQTRADEWINDOW DEPRECATE("Use CTradeWnd instead of EQTRADEWINDOW") = CTradeWnd;
	using PEQTRADEWINDOW DEPRECATE("Use CTradeWnd* instead of PEQTRADEWINDOW") = CTradeWnd*;
}

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
/*0x00*/ EQZoneIndex        destZoneId;
/*0x04*/ int                transferTypeIndex;
/*0x08*/ int                requiredExpansions;       // EQExpansionOwned
/*0x0c*/ bool               disabled;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideContinent
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                id;
/*0x04*/ int                displaySequence;
/*0x08*/ CXStr              name;
/*0x0c*/
};

class [[offsetcomments]] ZoneGuideZoneType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                id;
/*0x04*/ int                displaySequence;
/*0x08*/ CXStr              name;
/*0x0c*/
};

class [[offsetcomments]] ZoneGuideTransferType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                id;
/*0x04*/ CXStr              description;
/*0x08*/
};

class [[offsetcomments]] ZoneGuideZone
{
	FORCE_SYMBOLS;

public:
/*0x00*/ EQZoneIndex   zoneId;
/*0x04*/ CXStr         name;
/*0x08*/ int           continentIndex;
/*0x0c*/ int           minLevel;
/*0x10*/ int           maxLevel;
/*0x14*/ DynamicBitField<unsigned short, short> types;
/*0x1c*/ ArrayClass<ZoneGuideConnection> zoneConnections;
/*0x2c*/
};

struct [[offsetcomments]] ZonePathData
{
	FORCE_SYMBOLS;

/*0x00*/ EQZoneIndex        zoneId;
/*0x04*/ int                transferTypeIndex;
/*0x08*/

	ZonePathData(EQZoneIndex zoneId, int transferTypeIndex)
		: zoneId(zoneId), transferTypeIndex(transferTypeIndex) {}
	ZonePathData()
		: zoneId(0), transferTypeIndex(-1) {}
};

class [[offsetcomments]] ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
	ZoneGuideManagerBase();
	virtual ~ZoneGuideManagerBase();

	virtual void ResetAllData();
	//virtual void Serialize(CSerializeBuffer&);
	//virtual void Unserialize(CUnserializeBuffer&);

/*0x0004*/ ZoneGuideZone                     zones[ZONE_COUNT];
/*0x8404*/ ArrayClass<ZoneGuideContinent>    continents;
/*0x8414*/ ArrayClass<ZoneGuideZoneType>     zoneTypes;
/*0x8424*/ ArrayClass<ZoneGuideTransferType> transferTypes;
/*0x8434*/

	ZoneGuideZone* GetZone(EQZoneIndex zi)
	{
		if (zi > 0 && zi < ZONE_COUNT)
		{
			if (zones[zi].zoneId != 0)
				return &zones[zi];
		}

		return nullptr;
	}

	CXStr GetContinentNameByIndex(int continentIndex)
	{
		return continentIndex >= 0 && continentIndex < (int)continents.size() ? continents[continentIndex].name : CXStr();
	}

	CXStr GetZoneTypeNameByIndex(int zoneTypeIndex)
	{
		return zoneTypeIndex >= 0 && zoneTypeIndex < (int)zoneTypes.size() ? zoneTypes[zoneTypeIndex].name : CXStr();
	}

	CXStr GetZoneTransferTypeNameByIndex(int transferTypeIndex) const
	{
		return transferTypeIndex >= 0 && transferTypeIndex < (int)transferTypes.size() ? transferTypes[transferTypeIndex].description.c_str() : CXStr();
	}
};

using ZonePathArray = ArrayClass<ZonePathData>;

// size: 0x8464
class [[offsetcomments]] ZoneGuideManagerClient : public ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
/*0x8434*/ bool              zoneGuideDataSet;
/*0x8438*/ ZonePathArray     activePath;
/*0x8448*/ ZonePathArray     previewPath;
/*0x8458*/ EQZoneIndex       currentZone;
/*0x845c*/ int               heroesJourneyIndex;
/*0x8460*/ bool              includeBindZoneInPath;
/*0x8461*/ bool              autoFindActivePath;
/*0x8462*/ bool              findActivePath;
/*0x8464*/

	EQLIB_OBJECT static ZoneGuideManagerClient& Instance();
};

class [[offsetcomments]] CZoneGuideWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
/*0x224*/ CVerticalLayoutWnd*     VerticalLayout;
/*0x228*/ CButtonWnd*             FilterMyLevelButton;
/*0x22c*/ CButtonWnd*             FilterAllLevelsButton;
/*0x230*/ CButtonWnd*             FilterZonesActiveButton;
/*0x234*/ CButtonWnd*             FilterZonesInactiveButton;
/*0x238*/ CButtonWnd*             ZoneRunSearchButton;
/*0x23c*/ CButtonWnd*             ZoneClearSearchButton;
/*0x240*/ CButtonWnd*             SelectCurrentZoneButton;
/*0x244*/ CEditWnd*               LevelFilterEdit;
/*0x248*/ CEditWnd*               ZoneSearchEdit;
/*0x24c*/ CComboWnd*              TypeFilterCombo;
/*0x250*/ CComboWnd*              ContinentFilterCombo;
/*0x254*/ CListWnd*               ZonesList;
/*0x258*/ CLabelWnd*              ViewZoneConnectionsSelectedZoneLabel;
/*0x25c*/ CLabelWnd*              ViewZoneConnectionsPreviewPathLabel;
/*0x260*/ CLabelWnd*              ViewZoneConnectionsActivePathLabel;
/*0x264*/ CLabelWnd*              ViewZoneConnectionsDisabledLabel;
/*0x268*/ CButtonWnd*             ViewZoneConnectionsSelectedZoneButton;
/*0x26c*/ CButtonWnd*             ViewZoneConnectionsPreviewPathButton;
/*0x270*/ CButtonWnd*             ViewZoneConnectionsActivePathButton;
/*0x274*/ CButtonWnd*             ViewZoneConnectionsDisabledButton;
/*0x278*/ CButtonWnd*             DisableConnectionTemplateButton;
/*0x27c*/ CListWnd*               ZoneConnectionsList;
/*0x280*/ CButtonWnd*             ResetPathStartZoneButton;
/*0x284*/ CButtonWnd*             SetPathStartZoneButton;
/*0x288*/ CButtonWnd*             SetPathEndZoneButton;
/*0x28c*/ CButtonWnd*             ShowPathWndButton;
/*0x290*/ CButtonWnd*             HidePathWndButton;
/*0x294*/ CButtonWnd*             FindPathButton;
/*0x298*/ CButtonWnd*             EndFindButton;
/*0x29c*/ CButtonWnd*             ClearPathWndButton;
/*0x2a0*/ CButtonWnd*             ActivatePathButton;
/*0x2a4*/ CButtonWnd*             IncludeBindZoneInPathGenerationButton;
/*0x2a8*/ CButtonWnd*             ShowPathWndOnPathActivationButton;
/*0x2ac*/ CButtonWnd*             AutoFindActivePathButton;
/*0x2b0*/ CEditWnd*               PathStartZoneEdit;
/*0x2b4*/ CEditWnd*               PathEndZoneEdit;
/*0x2b8*/ uint32_t                NextButtonRefreshTime;
/*0x2bc*/ EQZoneIndex             CurrentZone;
/*0x2c0*/ bool                    bFilterActive;
/*0x2c4*/ int                     FilterLevel;
/*0x2c8*/ int                     FilterContinentIndex;
/*0x2cc*/ int                     FilterZoneTypeIndex;
/*0x2d0*/ bool                    bSelectCurrentZone;
/*0x2d4*/ CXStr                   ZoneSearchString;
/*0x2d8*/ eZoneGuideConnectionsView eCurrConnectionsView;
/*0x2dc*/ EQZoneIndex             CurrConnectionsViewSelectedZone;
/*0x2e0*/ bool                    bCurrentConnectionsViewPreviewPathChanged;
/*0x2e1*/ bool                    bCurrentConnectionsViewActivePathChanged;
/*0x2e2*/ bool                    bSetPathStartZoneToCurrentZone;
/*0x2e4*/ EQZoneIndex             StartZone;
/*0x2e8*/ EQZoneIndex             EndZone;
/*0x2ec*/ bool                    bZoneGuideDataChanged;
/*0x2ed*/ bool                    bZoneListChanged;
/*0x2ee*/ bool                    bZoneConnectionsListChanged;
/*0x2ef*/ bool                    bPathStartZoneChanged;
/*0x2f0*/ int                     RightClickMenuID;
/*0x2f4*/
};

class [[offsetcomments]] CZonePathWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x224*/ EQZoneIndex             currentZone;
/*0x228*/ bool                    zonePathDirty;
/*0x22c*/ CListWnd*               listZones;
/*0x230*/
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
	EQLIB_OBJECT CButtonDrawTemplate* FindButtonDrawTemplate(std::string_view name) const;

	EQLIB_OBJECT CXMLParamManager* GetParamManager();

	// this "bSomething" is a parameter passed through to CreateButtonWnd and CreateScreenWnd, which is then passed back through
	// CreateXWndFromTemplate recursively... not sure where it is used yet. A couple non-xml source set it to 1.
	EQLIB_OBJECT CXWnd* CreateXWndFromTemplate(CXWnd* pParent, CControlTemplate* pTemplate);

	inline CXWnd* CreateXWndFromTemplate(CXWnd* pParent, CControlTemplate* pTemplate, bool bUnknown)
	{
		UNUSED(bUnknown);
		return CreateXWndFromTemplate(pParent, pTemplate);
	}

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
/*0x094*/ ArrayClass<CTextureAnimation*>         AnimationArray;
/*0x0a4*/ CHashCXStrInt32                        AnimationsHash;
/*0x0c0*/ ArrayClass<CTAFrameDraw*>              TAFrameArray;
/*0x0d0*/ CHashCXStrInt32                        TAFrameHash;
/*0x0ec*/ ArrayClass<CScreenPieceTemplate*>      ScreenPieceArray;
/*0x0fc*/ CHashCXStrInt32                        ScreenPiecesHash;
/*0x118*/ ArrayClass<CLayoutStrategyTemplate*>   LayoutStrategyTemplateArray;
/*0x128*/ CHashCXStrInt32                        LayoutStrategyTemplatesHash;
/*0x144*/ CXMLParamManager                       XMLDataMgr;
/*0x1f8*/ bool                                   bLoadError;
/*0x1fc*/ CXStr                                  ErrorString;
/*0x200*/
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
};

inline namespace deprecated {
	using CSIDLMGR DEPRECATE("Use CSidlManager instead of CSIDLMGR") = CSidlManager;
	using PCSIDLMGR DEPRECATE("Use CSidlManager* instead of PCSIDLMGR") = CSidlManager*;
}

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

	//virtual CascadeItemCommand* GetAsCommand() { return nullptr; }

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

/*0x220*/ CButtonWnd*       EQButtonWnd;
/*0x224*/ CButtonWnd*       SCButtonWnd;
/*0x228*/ CButtonWnd*       FlashSaleButtonWnd;
/*0x22c*/ CascadeItemArray* CascadeMenuItems;
/*0x230*/ int               MenuId;
/*0x234*/
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
/*0x18*/ CXStr              pAnimationName;
/*0x20*/ int                Offset;
/*0x24*/ int                MinValue;
/*0x28*/ int                MaxValue;
/*0x2c*/

	EQLIB_OBJECT CTextureAnimation* GetIcon(int);
};

//----------------------------------------------------------------------------

constexpr int MAX_ITEMDISPLAY_WINDOWS = 6;
constexpr int MAX_SPELLDISPLAY_WINDOWS = 4;

class CWndDisplayManager
{
public:
	EQLIB_OBJECT int FindWindow(bool bNewWnd);
	//EQLIB_OBJECT bool CloseNewest();
	//EQLIB_OBJECT void CloseAll();

	EQLIB_OBJECT virtual int CreateWindowInstance();

	ALT_MEMBER_GETTER_DEPRECATED(ArrayClass2<CXWnd*>, m_windows, pWindows, "CWndDisplayManager: pWindows is deprecated. Use GetWindow instead.");
	ALT_MEMBER_GETTER_DEPRECATED(ArrayClass2<int>, m_times, pTimes, "CWndDisplayManager: pTimes is deprecated. Use GetLastUpdateTime instead.");

	inline CXWnd* GetWindow(int index) const
	{
		if (index >= 0 && index < m_windows.GetLength())
			return m_windows[index];
		return nullptr;
	}

	inline int GetLastUpdateTime(int index) const
	{
		if (index >= 0 && index < m_times.GetLength())
			return m_times[index];
		return 0;
	}

	inline int GetCount() const { return m_windows.GetLength(); }
	inline int GetMaxWindows() const { return MaxWindows; }

protected:
	ArrayClass2<CXWnd*>      m_windows;
	ArrayClass2<int>         m_times;
	int                      MaxWindows;
};

class CItemDisplayManager : public CWndDisplayManager
{
public:
	EQLIB_OBJECT virtual int CreateWindowInstance() override;
	EQLIB_OBJECT void ShowItem(const ItemPtr& pItem);

	inline CItemDisplayWnd* GetWindow(int index) const { return static_cast<CItemDisplayWnd*>(CWndDisplayManager::GetWindow(index)); }
};

class CSpellDisplayManager : public CWndDisplayManager
{
public:
	inline CSpellDisplayWnd* GetWindow(int index) const { return static_cast<CSpellDisplayWnd*>(CWndDisplayManager::GetWindow(index)); }
};

//----------------------------------------------------------------------------

void InitializeUI();

EQLIB_OBJECT void InitializeInGameUI();

} // namespace eqlib
