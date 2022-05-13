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

/*0x08*/ int FontStyle;
/*0x0c*/
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
/*0x40*/ eBitmapType        eType;
/*0x44*/ MemPoolManagerType eMemoryPoolManagerType;
/*0x48*/ char*              FileName;
/*0x50*/ uint32_t           SourceWidth;
/*0x54*/ uint32_t           SourceHeight;
/*0x58*/ float              DetailScale;
/*0x5c*/ uint32_t           GrassDensity;
/*0x60*/ uint32_t           Width;
/*0x64*/ uint32_t           Height;
/*0x68*/ bool               bHasTexture;
	union
	{
	/*0x70*/ IDirect3DBaseTexture9* pD3DTexture;
	/*0x70*/ void* pRawBitmap;
	};
/*0x78*/ uint32_t           ObjectIndex;
/*0x7c*/ uint32_t           Size;
/*0x80*/ bool               bForceMipMap;
/*0x84*/ int                TrackingType;
/*0x88*/ float              SQDistanceToCamera;
/*0x8c*/ uint32_t           LastDistanceTime;
/*0x90*/ uint32_t           LastRenderTime;
/*0x94*/ uint32_t           LoadedTime;
/*0x98*/
};

struct [[offsetcomments]] BMI
{
/*0x00*/ char*              Name;
/*0x08*/ unsigned int       Flags;
/*0x10*/ CEQGBitmap*        pBmp;
/*0x18*/
};

struct [[offsetcomments]] _SuiteTexture
{
/*0x00*/ bool               bUsed;
/*0x08*/ CXStr              Name;
/*0x10*/ enDir              Directory;
/*0x18*/ BMI*               pBMInfo;
/*0x20*/
};

struct SWadFile;

class [[offsetcomments]] CEQSuiteTextureLoader
{
public:
/*0x00*/ SWadFile*          pWadFile;
/*0x08*/ ArrayClass<_SuiteTexture> Textures;
/*0x20*/ CXStr              UIPath[cUIDirectoryCount];
/*0x40*/ CXStr              DefaultUIPath[cUIDirectoryCount];
/*0x60*/

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

/*0x08*/ CXStr                    Name;
/*0x10*/ ArrayClass<CButtonWnd*>  Buttons;
/*0x28*/ int                      CurSel = -1;
/*0x2c*/ bool                     bAllowMultiSelect = false;
/*0x30*/ int                      nSelectionLimit = -1;
/*0x34*/ bool                     bAllowNullable = false;
/*0x38*/
};

//============================================================================
// CButtonWnd
//============================================================================

// @sizeof(CButtonWnd) == 0x340 :: 2022-04-15 (live) @ 0x1405428ee
constexpr size_t CButtonWnd_size = 0x340;

class [[offsetcomments]] CButtonWnd : public CXWnd, public VeBaseReferenceCount
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
/*0x260*/ int                   MouseButtonState;
/*0x264*/ bool                  bPicture;
/*0x268*/ CRadioGroup*          pGroup;
/*0x270*/ bool                  Checked;
/*0x271*/ bool                  bMouseOverLastFrame;
/*0x274*/ CXPoint               DecalOffset;
/*0x27c*/ CXSize                DecalSize;
/*0x284*/ COLORREF              DecalTint;                // Color
/*0x288*/ CXRect                TextOffsets;
/*0x298*/ int                   TextModeBits;
/*0x29c*/ COLORREF              Mouseover;
/*0x2a0*/ COLORREF              Pressed;
/*0x2a4*/ COLORREF              Disabled;
/*0x2a8*/ unsigned int          CoolDownBeginTime;
/*0x2ac*/ unsigned int          CoolDownDuration;
/*0x2b0*/ CXStr                 Indicator;
/*0x2b8*/ unsigned int          IndicatorVal;
/*0x2c0*/ CTextObjectInterface* pIndicatorTextObject;
/*0x2c8*/ unsigned int          Unknown0x248;
/*0x2d0*/ CButtonDrawTemplate   DrawTemplate;
/*0x338*/ bool                  bAllowButtonClickThrough;
/*0x339*/ bool                  bCoolDownDoDelayedStart;
/*0x33a*/ bool                  bIsCheckbox;
/*0x33b*/ bool                  bIsDrawLasso;
/*0x33c*/ uint32_t              ButtonStyle;              // tbd
/*0x340*/

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
/*0x340*/ bool bOrgState;
/*0x344*/
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
/*0x250*/ CListWnd*                    pListWnd;
/*0x258*/ int                          ListHeightMax;
/*0x25c*/ int                          ListHeight;
/*0x260*/ CButtonDrawTemplate          ButtonDrawTemplate;
/*0x2c8*/
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
/*0x250*/ eTextAlign   eAlign = eta_Left;
/*0x254*/ int          StartPos = 0;
/*0x258*/ int          EndPos = 0;
/*0x25c*/ int          MaxChars = -1;
/*0x260*/ int          MaxBytesUTF8 = -1;
/*0x268*/ CXStr        InputText;
/*0x270*/ int          TagPrintableStarts[EDITWND_MAX_TAGS];
/*0x298*/ int          TagPrintableEnds[EDITWND_MAX_TAGS];
/*0x2c0*/ int          TagOriginalStarts[EDITWND_MAX_TAGS];
/*0x2e8*/ int          TagOriginalEnds[EDITWND_MAX_TAGS];
/*0x310*/ int          TagDynamicSize[EDITWND_MAX_TAGS];
/*0x338*/ int          TagCodes[EDITWND_MAX_TAGS];
/*0x360*/ CXStr        TagStrings[EDITWND_MAX_TAGS];
/*0x3b0*/ int          TagCount;
/*0x3b4*/ uint32_t     EditStyle;
/*0x3b8*/
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

/*0x3b8*/ bool         bAnchorAtStart;
/*0x3b9*/ bool         bCaretAtEnd;
/*0x3ba*/ bool         bAutoVScrollCalc;
/*0x3bb*/ bool         bEditable;
/*0x3c0*/ CXStr        FilterChars;
/*0x3c8*/ int          EditMode;
/*0x3cc*/ wchar_t      PasswordChar;
/*0x3d0*/ ArrayClass2<uint32_t> LineIndices;
/*0x3f0*/
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

/*0x250*/ int          EQType;
/*0x254*/ D3DCOLOR     FillTint;
/*0x258*/ D3DCOLOR     LinesFillTint;
/*0x25c*/ bool         bDrawLinesFill;
/*0x260*/ int          TextOffsetX;
/*0x264*/ int          TextOffsetY;
/*0x268*/ int          GaugeOffsetX;
/*0x26c*/ int          GaugeOffsetY;
/*0x270*/ float        LastFrameVal;
/*0x278*/ CXStr        LastFrameName;
/*0x280*/ int          LastFrameTime;
/*0x284*/ int          LastFrameTarget;
/*0x288*/ CXStr        GaugeTooltip;
/*0x290*/ int          TooltipVal;
/*0x294*/ int          Unknown0x228;
/*0x298*/ CGaugeDrawTemplate DrawTemplate;
/*0x2d0*/ CTextObjectInterface* pTextObject;
/*0x2d8*/ CXStr        NextDrawStr;
/*0x2e0*/ bool         bSmooth;
/*0x2e4*/ int          TargetVal;
/*0x2e8*/ bool         bUseTargetVal;
/*0x2ec*/
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

/*0x250*/ int                BarIndex;
/*0x254*/ int                ButtonIndex;
/*0x258*/ uint32_t           Timer;
/*0x260*/ CTextureAnimation* DecalIcon;
/*0x268*/ int                LastButtonType;
/*0x26c*/ int                LastButtonSlot;
/*0x270*/ char               LastButtonPage;
/*0x271*/ EqItemGuid         LastItemGuid;
/*0x284*/ int                LastItemId;
/*0x288*/ int                LastIconType;
/*0x28c*/ int                LastIconSlot;
/*0x290*/ CXStr              LastLabel;
/*0x298*/ CXStr              DefaultLabel;
/*0x2a0*/ bool               bForceUpdate;
/*0x2a8*/ CTextObjectInterface* pKeyMapText;
/*0x2b0*/ int                Unknown0x228;
/*0x2b8*/ CButtonWnd*        pButtonWnd;
/*0x2c0*/ CInvSlotWnd*       pInvSlotWnd;
/*0x2c8*/ CSpellGemWnd*      pSpellGemWnd;
/*0x2d0*/ CXSize             BaseSize;
/*0x2d8*/ int                ButtonPercentSize;
/*0x2dc*/ CXSize             BaseButtonSize;
/*0x2e4*/ CXSize             BaseDecalSize;
/*0x2ec*/ CXSize             BaseInvButtonSize;
/*0x2f4*/ CXSize             BaseSpellButtonSize;
/*0x2fc*/ int                Unknown0x264;
/*0x300*/
};
//============================================================================
// CLabelWnd
//============================================================================

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
/*0x250*/ bool         bNoWrap;
/*0x251*/ bool         bAlignRight;
/*0x252*/ bool         bAlignCenter;
/*0x254*/ int          xOffset;
/*0x258*/ bool         bResizeHeightToText;
/*0x260*/ CXStr        PrependText;
/*0x268*/ CXStr        Text;
/*0x270*/ CXStr        AppendText;
/*0x278*/ bool         bTextDirty;
/*0x27c*/
};

//============================================================================
// CLabel
//============================================================================

class [[offsetcomments]] CLabel : public CLabelWnd
{
public:
	// constructor / destructor
	CLabel(CXWnd* parent, uint32_t id, CXRect rect, int EQType);
	virtual ~CLabel();

	// virtual functions
	virtual void UpdateText() override;

	// data members
/*0x280*/ int          EQType;
/*0x284*/
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
/*0x08*/ CXStr                    Text;
/*0x10*/ COLORREF                 Color = RGB(255, 255, 255);
/*0x14*/ bool                     bOnlyDrawTexture = false;
/*0x18*/ CXWnd*                   pWnd = nullptr;
/*0x20*/ void*                    Unknown1 = nullptr;
/*0x28*/
};

struct [[offsetcomments]] SListWndLine
{
/*0x000*/ ArrayClass<SListWndCell> Cells;
/*0x018*/ uint64_t                Data = 0;
/*0x020*/ int                     Height = -1;
/*0x024*/ bool                    bSelected = false;
/*0x025*/ bool                    bEnabled = true;
/*0x028*/ STreeData               Treedata;
/*0x030*/ char                    TooltipText[256];
/*0x130*/ bool                    bVisible = true;
/*0x134*/ uint32_t                bIsSeparator = 0;
/*0x138*/
};

class [[offsetcomments]] SListWndSortInfo
{
public:
/*0x00*/ int                      SortCol;
/*0x08*/ const SListWndLine&      ListWndLine1;
/*0x10*/ CXStr                    StrLabel1;
/*0x18*/ uint64_t                 Data1;
/*0x20*/ const SListWndLine&      ListWndLine2;
/*0x28*/ CXStr                    StrLabel2;
/*0x30*/ uint64_t                 Data2;
/*0x38*/ int                      SortResult;
/*0x3c*/
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
/*0x38*/ CTextureAnimation*       pSelected = nullptr;
/*0x40*/ CTextureAnimation*       pMouseOver = nullptr;
/*0x48*/ CXStr                    Tooltip;
/*0x50*/ bool                     bResizable = false;
/*0x54*/

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
	EQLIB_OBJECT virtual int Unknown0x188(int a, int b) const;
	EQLIB_OBJECT virtual void Sort(bool unstable = true);

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
	EQLIB_OBJECT int AddColumn(const CXStr& Label, CTextureAnimation* pTA, int Width, uint32_t Flags, CXStr Tooltip = "",
		uint32_t Type = CellTypeTextIcon, CTextureAnimation* pTASelected = nullptr, CTextureAnimation* pTAMouseOver = nullptr,
		bool bResizeable = false, CXSize TextureSize = {}, CXPoint TextureOffset = {});
	EQLIB_OBJECT int AddColumn(const CXStr& Label, int Width, uint32_t Flags, uint32_t Type = CellTypeTextIcon);
	EQLIB_OBJECT int AddLine(SListWndLine*);
	EQLIB_OBJECT int AddString(const CXStr& Str, COLORREF Color, uint64_t Data = 0, const CTextureAnimation* pTa = nullptr, const char* TooltipStr = nullptr);
	int AddString(const CXStr& str, mq::MQColor Color, uint64_t Data = 0, const CTextureAnimation* pTA = nullptr, const char* TooltipStr = nullptr)
	{
		return AddString(str, Color.ToARGB(), Data, pTA, TooltipStr);
	}
	EQLIB_OBJECT int AddString(const char* Str, COLORREF Color, uint64_t Data, const CTextureAnimation* pTa, const char* TooltipStr = nullptr);
	EQLIB_OBJECT int GetColumnJustification(int) const;
	EQLIB_OBJECT int GetColumnMinWidth(int) const;
	EQLIB_OBJECT CXStr GetColumnTooltip(int) const;
	EQLIB_OBJECT int GetColumnWidth(int) const;
	EQLIB_OBJECT int GetCurCol() const;
	EQLIB_OBJECT int GetCurSel() const;
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
	EQLIB_OBJECT void InsertLine(int ID, SListWndLine* rEntry);
	EQLIB_OBJECT void RemoveLine(int);
	EQLIB_OBJECT void RemoveString(int);
	EQLIB_OBJECT void SetColors(unsigned long, unsigned long, unsigned long);
	EQLIB_OBJECT void SetColumnJustification(int, int);
	EQLIB_OBJECT void SetColumnLabel(int, const CXStr&);
	EQLIB_OBJECT void SetColumnWidth(int, int);
	EQLIB_OBJECT void SetCurSel(int);
	EQLIB_OBJECT void SetItemColor(int, int, unsigned long);
	void SetItemColor(int row, int col, mq::MQColor color) { SetItemColor(row, col, color.ToARGB()); }
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

/*0x250*/ int                 Unknown0x1f0;
/*0x258*/ ArrayClass<SListWndLine> ItemsArray;
/*0x270*/ ArrayClass<SListWndColumn> Columns;
/*0x288*/ int                 CurSel;
/*0x28c*/ int                 CurCol;
/*0x290*/ int                 DownItem;
/*0x294*/ int                 ScrollOffsetY;
/*0x298*/ int                 HeaderHeight;
/*0x29c*/ int                 FirstVisibleLine;
/*0x2a0*/ int                 SortCol;
/*0x2a4*/ bool                bSortAsc;
/*0x2a5*/ bool                bFixedHeight;
/*0x2a6*/ bool                bOwnerDraw;
/*0x2a7*/ bool                bCalcHeights;
/*0x2a8*/ bool                bColumnSizable;
/*0x2ac*/ int                 LineHeight;
/*0x2b0*/ int                 ColumnSepDragged;
/*0x2b4*/ int                 ColumnSepMouseOver;
/*0x2b8*/ COLORREF            HeaderText;
/*0x2bc*/ COLORREF            Highlight;
/*0x2c0*/ COLORREF            Selected;
/*0x2c8*/ CUITextureInfo      BGHeader;
/*0x2e8*/ COLORREF            BGHeaderTint;
/*0x2f0*/ CTextureAnimation*  pRowSep;
/*0x2f8*/ CTextureAnimation*  pColumnSep;
/*0x300*/ CEditBaseWnd*       pEditCell;
/*0x308*/ IListItemDataHandler* pItemDataHandler;
/*0x310*/ bool                bHasItemTooltips;
/*0x314*/ CXRect              PrevInsideRect;
/*0x324*/ uint32_t            ListWndStyle;
/*0x328*/ eqtime_t            LastVisibleTime;
/*0x330*/

	struct [[offsetcomments]] VirtualFunctionTable : public CXWnd::VirtualFunctionTable
	{
	/*0x2d0*/ void* OnHeaderClick;
	/*0x2d8*/ void* DrawColumnSeparators;
	/*0x2e0*/ void* DrawSeparator;
	/*0x2e8*/ void* DrawLine;
	/*0x2f0*/ void* DrawHeader;
	/*0x2f8*/ void* DrawItem;
	/*0x300*/ void* DeleteAll;
	/*0x308*/ void* Compare;
	/*0x310*/ void* Unknown0x188;
	/*0x318*/ void* Sort;
	/*0x320*/
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

/*0x2b8*/ CXStr              TabText;
/*0x2c0*/ CXStr              OrigTabText;
/*0x2c8*/ COLORREF           CRTabText;
/*0x2cc*/ COLORREF           CRTabTextActive;
/*0x2d0*/ CTextureAnimation* pTATabIcon;
/*0x2d8*/ CTextureAnimation* pTATabIconActive;
/*0x2e0*/ int                Unknown0x250;
/*0x2e4*/ int                Unknown0x254;
/*0x2e8*/ int64_t            LastFlashTime;
/*0x2f0*/ COLORREF           CRHighlightFlashColor;
/*0x2f4*/ bool               bHighlightOnNewMessages;
/*0x2f5*/ bool               bFlashing;
/*0x2f8*/
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

/*0x250*/ CButtonDrawTemplate      bdtThumb;
/*0x2b8*/ CTextureAnimation*       ptaBackground;
/*0x2c0*/ CTextureAnimation*       ptaEndCapLeft;
/*0x2c8*/ CTextureAnimation*       ptaEndCapRight;
/*0x2d0*/
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
/*0x08*/ COLORREF           color;
/*0x0c*/
};

using SStyleTag = uint32_t;

const uint32_t STML_TAG_BOLD = 0;
const uint32_t STML_TAG_UNDERLINE = 2;

struct [[offsetcomments]] SFormattedText
{
/*0x00*/ SFontTag           Font;
/*0x10*/ SStyleTag          Style;
/*0x14*/ int                Left;
/*0x18*/ int                Right;
/*0x20*/ CXStr              Text;
/*0x28*/ int32_t            LinkID;
/*0x30*/ CTextureAnimation* Texture;
/*0x38*/ int32_t            TableID;
/*0x3c*/ int32_t            IndexStart;
/*0x40*/
};

struct [[offsetcomments]] STextLine
{
/*0x00*/ ArrayClass<SFormattedText> TextPieces;
/*0x18*/ int                yBottom;
/*0x1c*/ int                yTop;
/*0x20*/ int32_t            IndexStart;
/*0x24*/
};

struct [[offsetcomments]] SLinkInfo
{
/*0x00*/ ELinkType          Type = STML_LINK_EMPTY;
/*0x04*/ uint32_t           MsgID = -1;
/*0x08*/ CXStr              Name;
/*0x10*/ EStmlTargetValue   TargetType = STML_TARGET_SELF;
/*0x14*/
};

struct SParseVariables
{
	// todo ...
};

struct [[offsetcomments]] SHistoryElement
{
/*0x00*/ SLinkInfo          sLink;
/*0x18*/ CXStr              STMLText;
/*0x20*/
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
/*0x250*/ CXStr                        STMLText;
/*0x258*/ CircularArrayClass2<STextLine> TextLines;
/*0x288*/ int32_t                      TextTotalHeight;
/*0x28c*/ int32_t                      TextTotalWidth;
/*0x290*/ int32_t                      Unknown0x224;
/*0x298*/ ArrayClass2<SLinkInfo>       Links;
/*0x2b8*/ ArrayClass<STable>           Tables;
/*0x2d0*/ bool                         bReparseNow;
/*0x2d1*/ bool                         bResized;
/*0x2d2*/ bool                         bAlignCenter;
/*0x2d4*/ int                          LineSpacingAdjust;
/*0x2d8*/ int32_t                      CapturedLinkID;
/*0x2dc*/ int32_t                      MousedOverLinkID;
/*0x2e0*/ COLORREF                     BackGroundColor;
/*0x2e4*/ COLORREF                     TextColor;
/*0x2e8*/ COLORREF                     LinkColor;
/*0x2ec*/ COLORREF                     VLinkColor;
/*0x2f0*/ COLORREF                     ALinkColor;
/*0x2f4*/ COLORREF                     MLinkColor;
/*0x2f8*/ ESTMLParseState              CurrentParseState;
/*0x300*/ ArrayClass2<SHistoryElement> HistoryArray;
/*0x320*/ int32_t                      HistoryIndex;
/*0x328*/ CStmlReport*                 pStmlReport;
/*0x330*/ int                          MaxLines;
/*0x334*/ int                          PlayerContextMenuIndex;
/*0x338*/ int                          Unknown0x2ac;
/*0x33c*/ int                          Unknown0x2b0;
/*0x340*/ int                          Unknown0x2b4;
/*0x344*/
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
	EQLIB_OBJECT bool SetPage(CPageWnd*, bool bNotifyParent = true, bool bBringToTop = true);
	EQLIB_OBJECT CPageWnd* GetPageFromTabPoint(CXPoint) const;

	EQLIB_OBJECT CXRect GetPageClientRect() const;
	EQLIB_OBJECT CXRect GetPageInnerRect() const;
	EQLIB_OBJECT CXRect GetTabInnerRect(int) const;
	EQLIB_OBJECT CXRect GetTabRect(int) const;

	int GetNumTabs() const { return PageArray.GetLength(); }
	int GetCurrentTabIndex() const { return CurTabIndex; }

	EQLIB_OBJECT CPageWnd* GetPageFromTabIndex(int tabIndex) const;
	EQLIB_OBJECT CPageWnd* GetCurrentPage() const;

	EQLIB_OBJECT void SetPage(int index, bool bNotifyParent = true, bool bBringToTop = true, bool bSomething = false);
	EQLIB_OBJECT void InsertPage(CPageWnd* pPageWnd, int position = -1); // defaults to the last tab
	EQLIB_OBJECT void RemovePage(CPageWnd* pPageWnd);

	inline bool IsValidIndex(int index) const
	{
		return index >= 0 && index < GetNumTabs();
	}


	//----------------------------------------------------------------------------
	// data members

/*0x250*/ CTAFrameDraw*           pTabBorder;
/*0x258*/ CTAFrameDraw*           pPageBorder;
/*0x260*/ ArrayClass<CPageWnd*>   PageArray;
/*0x278*/ int                     CurTabIndex;
/*0x27c*/ int                     TabHeight;
/*0x280*/ CXRect                  PageRect;
/*0x290*/ bool                    bShowTabs;
/*0x294*/ int                     TabStyle;
/*0x298*/ int                     TabWidth;
/*0x29c*/
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

/*0x2b8*/ uint32_t             spacing;
/*0x2bc*/ bool                 expandLast;
/*0x2c0*/ int                  paddingLeft;
/*0x2c4*/ int                  paddingRight;
/*0x2c8*/ int                  paddingTop;
/*0x2cc*/ int                  paddingBottom;
/*0x2d0*/ };

// Horizontal and Vertical layouts are basically the same, but transposed.
class [[offsetcomments]] CHorizontalLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x2d0*/ ArrayClass<CXWnd*>         visibleChildren;
/*0x2e8*/ ArrayClass<CXRect>         dividerRects;
/*0x300*/ int                        activeDivider;
/*0x304*/ bool                       dividerHover;
/*0x305*/ bool                       dividerMoving;
/*0x308*/ int                        oldPosCoord;              // X for horizontal, Y for vertical
/*0x30c*/ bool                       bStyle_Dividers;          // the Style_Dividers property from XML
/*0x310*/
};

class [[offsetcomments]] CVerticalLayoutWnd : public CLayoutWnd
{
public:
/*0x2d0*/ ArrayClass<CXWnd*>         visibleChildren;
/*0x2e8*/ ArrayClass<CXRect>         dividerRects;
/*0x300*/ int                        activeDivider;
/*0x304*/ bool                       dividerHover;
/*0x305*/ bool                       dividerMoving;
/*0x308*/ int                        oldPosCoord;              // X for horizontal, Y for vertical
/*0x30c*/ bool                       bStyle_Dividers;          // the Style_Dividers property from XML
/*0x310*/
};

class [[offsetcomments]] CTileLayoutWnd : public CLayoutWnd
{
	FORCE_SYMBOLS

public:
/*0x2d0*/ bool                       horizontalFirst;
/*0x2d1*/ bool                       anchorToTop;
/*0x2d2*/ bool                       anchorToLeft;
/*0x2d4*/ int                        secondarySpacing;
/*0x2d8*/ bool                       firstPieceTemplate;
/*0x2d9*/ bool                       snapToChildren;
/*0x2e0*/ CXWnd*                     autoStretchWindow;
/*0x2e8*/
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
/*0x88*/ unsigned int  AskTimer;
/*0x8c*/ bool          AutoRoll;
/*0x8d*/ bool          FG;
/*0x8e*/ bool          Need;
/*0x8f*/ bool          Greed;
/*0x90*/ bool          No;
/*0x91*/ bool          AlwaysNeed;
/*0x92*/ bool          AlwaysGreed;
/*0x93*/ bool          Never;
/*0x94*/
};

inline namespace deprecated {
	using LOOTITEM DEPRECATE("Use AdvancedLootItem instead of LOOTITEM") = AdvancedLootItem;
	using PLOOTITEM DEPRECATE("Use AdvancedLootItem* instead of PLOOTITEM") = AdvancedLootItem*;
}

struct [[offsetcomments]] AdvancedLootItemList
{
/*0x00*/ SoeUtil::Array<AdvancedLootItem> Items;
/*0x18*/ bool         bIsPersonalLoot;
/*0x20*/ CListWnd*    SharedLootList;
/*0x28*/ CComboWnd*   PersonalLootList;
/*0x30*/
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

/*0x2c8*/ CVerticalLayoutWnd*       pLayout;                 // ADLW_ScreenLayout
/*0x2d0*/ CListWnd*                 pPersonalLootList;       // ADLW_PLLList
/*0x2d8*/ CButtonWnd*               pPersonalSetBtn;         // ADLW_PLLSetBtn
/*0x2e0*/ CComboWnd*                pPersonalSetCombo;       // ADLW_PLLSetCmbo
/*0x2e8*/ CButtonWnd*               pLootAllBtn;             // ADLW_PLL_LootAllBtn
/*0x2f0*/ CXWnd*                    pCLLWnd;                 // ADLW_CLLWnd
/*0x2f8*/ CListWnd*                 pConstructLootList;      // ADLW_CLLList
/*0x300*/ CButtonWnd*               pConstructSetBtn;        // ADLW_CLLSetBtn
/*0x308*/ CComboWnd*                pConstructSetCombo;      // ADLW_CLLSetCmbo
/*0x310*/ CCheckBoxWnd*             pApplyFiltersChk;        // ADLW_ApplyFiltersCheck
/*0x318*/ CCheckBoxWnd*             pGroupedByNpcChk;        // ADLW_GroupedByNpcCheckbox
/*0x320*/ CButtonWnd*               pEditFiltersBtn;         // ADLW_EditFitlersBtn
/*0x328*/ CButtonWnd*               pLootSettingsBtn;        // ADLW_LootSettingsBtn
/*0x330*/ CLabelWnd*                pCalculatedMasterLooter; // ADLW_CalculatedMasterLooter
/*0x338*/ CButtonWnd*               pItemBtnTemplate;        // ADLW_ItemBtnTemplate
/*0x340*/ CButtonWnd*               pStatusTemplate;         // ADLW_StatusTemplate
/*0x348*/ CButtonWnd*               pNeverBtnTemplate;       // ADLW_NvrBtnTemplate
/*0x350*/ CButtonWnd*               pLootBtnTemplate;        // ADLW_LootBtnTemplate
/*0x358*/ CButtonWnd*               pLeaveBtnTemplate;       // ADLW_LeaveBtnTemplate
/*0x360*/ CButtonWnd*               pFreeGrabBtnTemplate;    // ADLW_FreeGrabBtnTemplate
/*0x368*/ CCheckBoxWnd*             pCheckBoxTemplate;       // ADLW_CheckBoxTemplate
/*0x370*/ CButtonWnd*               pTextLinkTemplate;       // ADLW_TextLinkTemplate
/*0x378*/ CButtonWnd*               pManageBtnTemplate;      // ADLW_ManageBtnTemplate
/*0x380*/ CButtonWnd*               pActionBtnTemplate;      // ADLW_ActionBtnTemplate
/*0x388*/ int                       PLLNPCColumnWidth;
/*0x38c*/ int                       CLLNPCColumnWidth;
/*0x390*/ int                       CLLRNDColumnWidth;
/*0x394*/ int                       CLLManageColumnWidth;
/*0x398*/ int                       CLLActionColumnWidth;
/*0x39c*/ int                       PLLANColumnWidth;
/*0x3a0*/ int                       PLLAGColumnWidth;
/*0x3a4*/ int                       PLLNeverColumnWidth;
/*0x3a8*/ int                       CLLANColumnWidth;
/*0x3ac*/ int                       CLLAGColumnWidth;
/*0x3b0*/ int                       CLLNeverColumnWidth;
/*0x3b8*/ AdvancedLootItemList*     pCLootList;
/*0x3c0*/ AdvancedLootItemList*     pPLootList;
/*0x3c8*/ uint32_t                  LastUpdateTime;
/*0x3cc*/ uint32_t                  LastTransactionCheck;
/*0x3d0*/ bool                      bPopupPending;
/*0x3d4*/ int                       Unknown1;
/*0x3d8*/ int                       Unknown2;
/*0x3dc*/ bool                      bFirstTimeShowingCLL;
/*0x3e0*/ int                       TotalLootCount;
/*0x3e4*/ bool                      bAutoInventoryQuantity;
/*0x3e8*/ int                       CLLActionMenu;
/*0x3ec*/ int                       CLLActionMenuQty;
/*0x3f0*/ int                       PLLActionMenu;
/*0x3f4*/ bool                      bUnknown3;
/*0x3f8*/
};

inline namespace deprecated {
	using EQADVLOOTWND DEPRECATE("Use CAdvancedLootWnd instead of EQADVLOOTWND") = CAdvancedLootWnd;
	using PEQADVLOOTWND DEPRECATE("Use CAdvancedLootWnd* instead of PEQADVLOOTWND") = CAdvancedLootWnd*;
}

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

/*0x2c0*/ CButtonWnd*        pAddButton;
/*0x2c8*/ CButtonWnd*        pDeleteButton;
/*0x2d0*/ CButtonWnd*        pUseButton;
/*0x2d8*/ CButtonWnd*        pMkHotButton;
/*0x2e0*/ CButtonWnd*        pAutoSwapButton;
/*0x2e8*/ CButtonWnd*        pDisplayButtons[MAX_BANDOLIER_SLOTS];
/*0x308*/ CListWnd*          pWeaponSetList;
/*0x310*/
};

//============================================================================
// CBankWnd
//============================================================================

class [[offsetcomments]] CBankWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x2bc*/ int          MoneyButtonIndex;
/*0x2c0*/ unsigned int NextRefreshTime;
/*0x2c4*/ bool         bInventoryWasActive;
/*0x2c5*/ bool         bRealEstateManagementWasActive;
/*0x2c8*/ CButtonWnd*  MoneyButtons[5];          // including shared plat
/*0x2f0*/ CLabel*      BankerNameLabel;
/*0x2f8*/ CInvSlotWnd* InvSlotWindows[NUM_BANK_SLOTS];
/*0x3b8*/ CLabel*      SharedBankLabel;
/*0x3c0*/ CInvSlotWnd* SharedSlotWindows[NUM_SHAREDBANK_SLOTS];
/*0x3f0*/ CButtonWnd*  DoneButton;
/*0x3f8*/ CButtonWnd*  ChangeButton;
/*0x400*/ CButtonWnd*  AutoButton;
/*0x408*/ CButtonWnd*  AltStorageButton;
/*0x410*/ CButtonWnd*  FindItemButton;
/*0x418*/ CButtonWnd*  DragonHoardButton;
/*0x420*/ int          BankSize;
/*0x424*/

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
/*0x60*/ ArrayClass<CompensationItem> ItemPrice;
/*0x78*/ uint32_t BuyerPlayerZoneID;
/*0x7c*/ uint32_t BuyerPlayerUniqueID;
/*0x80*/ int      BuyerZoneID;
/*0x84*/ char     BuyerName[EQ_MAX_NAME];
/*0xc4*/
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

/*0x2b8*/ CStmlWnd*                    pstmlStatus;               // StatusText
/*0x2c0*/ CListWnd*                    plistItems;                // ItemSearchList
/*0x2c8*/ CListWnd*                    plistInventory;            // InventoryList
/*0x2d0*/ CListWnd*                    plistCompensation;         // CompensationList
/*0x2d8*/ CListWnd*                    plistBuyLines;             // BuyLineList
/*0x2e0*/ CEditWnd*                    peditSearch;               // ItemSearchEdit
/*0x2e8*/ CButtonWnd*                  pbtnSearch;                // ItemSearchButton
/*0x2f0*/ CButtonWnd*                  pbtnAddItem;               // InventoryAddButton
/*0x2f8*/ CButtonWnd*                  pbtnRemoveItem;            // InventoryRemoveButton
/*0x300*/ CButtonWnd*                  pbtnPlat;                  // CompensationPlat
/*0x308*/ CButtonWnd*                  pbtnGold;                  // CompensationGold
/*0x310*/ CButtonWnd*                  pbtnSilver;                // CompensationSilver
/*0x318*/ CButtonWnd*                  pbtnCopper;                // CompensationCopper
/*0x320*/ CButtonWnd*                  pbtnCreate;                // BuyLineAddButton
/*0x328*/ CEditWnd*                    peditCount;                // CountEdit
/*0x330*/ CButtonWnd*                  pbtnRemoveLine;            // BuyLineRemoveButton
/*0x338*/ CButtonWnd*                  pbtnUpdateLine;            // BuyLineModifyButton
/*0x340*/ CButtonWnd*                  pbtnActiveLine;            // BuyLineActiveButton
/*0x348*/ CButtonWnd*                  pbtnActivateAllLines;      // BuyLineActivateAllButton
/*0x350*/ CButtonWnd*                  pbtnListLines;             // ListLinesButton
/*0x358*/ CButtonWnd*                  pbtnClearStatus;           // ClearStatusButton
/*0x360*/ CButtonWnd*                  pbtnStartStop;             // StartStopButton
/*0x368*/ CButtonWnd*                  pbtnOfflineMode;           // OfflineModeButton
/*0x370*/ CEditWnd*                    peditWelcome;              // WelcomeEdit
/*0x378*/ CButtonWnd*                  pbtnUpdateWelcome;         // UpdateWelcomeButton
/*0x380*/ CButtonWnd*                  pbtnRefreshInventory;      // InventoryRefreshButton
/*0x388*/ CLayoutWnd*                  pLayout;                   // Layout
/*0x390*/ CLayoutWnd*                  pStatusLayout;             // StatusLayout
/*0x398*/ uint32_t                     lastUpdateTime;
/*0x3a0*/ eqtime_t                     lastSearchTime;
/*0x3a8*/ uint32_t                     quantityRequest;
/*0x3b0*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x3d0*/ ArrayClass2<BarterSearchedItem> SearchedItems;
/*0x3f0*/ BarterBuyLine                CurrentBuyLine;
/*0x4b8*/
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

/*0x2b8*/ HashTable<BarterBuyerSearchData> Buyers;
/*0x2d0*/ CListWnd*                    plistInventory;                 // InventoryList
/*0x2d8*/ CListWnd*                    plistBuyLines;                  // BuyLineList
/*0x2e0*/ CListWnd*                    plistDetails;                   // DetailsList
/*0x2e8*/ CEditWnd*                    peditSearch;                    // ItemSearchEdit
/*0x2f0*/ CButtonWnd*                  pbtnRefreshInventory;           // RefreshInventoryButton
/*0x2f8*/ CButtonWnd*                  pbtnSearch;                     // SearchButton
/*0x300*/ CButtonWnd*                  pbtnWelcome;                    // WelcomeButon
/*0x308*/ CButtonWnd*                  pbtnGreeting;                   // GreetingButton
/*0x310*/ CButtonWnd*                  pbtnFind;                       // FindButton
/*0x318*/ CButtonWnd*                  pbtnHide;                       // HideButton
/*0x320*/ CButtonWnd*                  pbtnBuyLineInspectItem;         // BuyLineInspectButton
/*0x328*/ CButtonWnd*                  pbtnCompensationInspectItem;    // CompensationInspectButton
/*0x330*/ CButtonWnd*                  pbtnCompensationPreviewItem;    // CompensationPreviewButton
/*0x338*/ CButtonWnd*                  pbtnSellButton;                 // SellButton
/*0x340*/ CComboWnd*                   pcomboPlayersCombo;             // PlayerCombo
/*0x348*/ CLayoutWnd*                  pLayout;                        // Layout
/*0x350*/ CLayoutWnd*                  pMatchLayout;                   // BuyLineLayout
/*0x358*/ bool                         NeedsUpdate;
/*0x360*/ ArrayClass<BarterBuyLine>    BuyLines;
/*0x378*/ ArrayClass2<BarterInventoryItem> InventoryItems;
/*0x398*/ // more members
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

/*0x02bc*/ uint8_t                     UnknownPadding[0x34];
/*0x02f0*/ BazaarSearchResults         searchResults[MAX_BAZAAR_SEARCH_RESULTS];
/*0x95d0*/ HashTable<BazaarTraderData> Traders;
/*0x95e8*/ CListWnd*                   pItemList;                        // BZR_ItemList
/*0x95f0*/ CButtonWnd*                 pQueryButton;
/*0x95f8*/ CButtonWnd*                 pWelcomeButton;
/*0x9600*/ CButtonWnd*                 pUpdatePlayerButton;
/*0x9608*/ CButtonWnd*                 pRequestItemButton;
/*0x9610*/ CButtonWnd*                 pRequestPreviewButton;
/*0x9618*/ CButtonWnd*                 pFindTraderButton;
/*0x9620*/ CButtonWnd*                 pHideTradersButton;
/*0x9628*/ CButtonWnd*                 pDefaultButton;
/*0x9630*/ CButtonWnd*                 pBuyButton;
/*0x9638*/ CLabelWnd*                  pItemNameLabel;
/*0x9640*/ CLabelWnd*                  pPlayersLabel;
/*0x9648*/ CLabelWnd*                  pItemSlotLabel;
/*0x9650*/ CLabelWnd*                  pStatSlotLabel;
/*0x9658*/ CLabelWnd*                  pRaceSlotLabel;
/*0x9660*/ CLabelWnd*                  pClassSlotLabel;
/*0x9668*/ CLabelWnd*                  pItemTypeLabel;
/*0x9670*/ CLabelWnd*                  pSearchResultLabel;
/*0x9678*/ CLabelWnd*                  pMaxPriceLabel;
/*0x9680*/ CLabelWnd*                  pMinPriceLabel;
/*0x9688*/ CLabelWnd*                  pItemPrestigeLabel;
/*0x9690*/ CLabelWnd*                  pItemAugmentLabel;
/*0x9698*/ CComboWnd*                  pItemSlotCombobox;
/*0x96a0*/ CComboWnd*                  pStatSlotCombobox;
/*0x96a8*/ CComboWnd*                  pRaceSlotCombobox;
/*0x96b0*/ CComboWnd*                  pClassSlotCombobox;
/*0x96b8*/ CComboWnd*                  pItemTypeCombobox;
/*0x96c0*/ CComboWnd*                  pPlayersCombobox;
/*0x96c8*/ CComboWnd*                  pItemPrestigeCombobox;
/*0x96d0*/ CComboWnd*                  pItemAugmentCombobox;
/*0x96d8*/ CEditWnd*                   pItemNameInput;
/*0x96e0*/ CEditWnd*                   pMaxPriceInput;
/*0x96e8*/ CEditWnd*                   pMinPriceInput;
/*0x96f0*/ CEditWnd*                   pMaxLevelInput;
/*0x96f8*/ CEditWnd*                   pMinLevelInput;
/*0x9700*/ CEditWnd*                   pMaxResultsPerTraderInput;
/*0x9708*/ BYTE                        Unknown0x92C8[0x8];
/*0x9710*/
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

/*0x2bc*/ int                selectedSlot;
/*0x2c0*/ int                curBazaarIndex;
/*0x2c4*/ int                curItemPrice;
/*0x2c8*/ int                moneyBtnIndex;
/*0x2d0*/ ItemPtr            selectedItem;
/*0x2d8*/ CButtonWnd*        startButton;
/*0x2e0*/ CButtonWnd*        endButton;
/*0x2e8*/ CButtonWnd*        clearButton;
/*0x2f0*/ CButtonWnd*        setPriceButton;                    // BZW_SetPrice_Button
/*0x2f8*/ CButtonWnd*        listButton;
/*0x300*/ uint32_t           unknown0x25c;
/*0x308*/ CButtonWnd*        addButton;
/*0x310*/ CButtonWnd*        removeButton;
/*0x318*/ CButtonWnd*        moneyButton[4];                    // NumMoneySlotTypes
/*0x338*/ CButtonWnd*        offlineModeButton;
/*0x340*/ CStmlWnd*          bazaarText;
/*0x348*/ CInvSlotWnd*       bazaarSlots[MAX_BAZAAR_ITEMS];     // BZR_BazaarSlot%d
/*0x988*/ ItemContainer      bazaarItems;
/*0x9b0*/ uint32_t           myPrice[MAX_BAZAAR_ITEMS];
/*0xcd0*/ bool               bItemActive[MAX_BAZAAR_ITEMS];
/*0xd98*/ char               iniFilename[64];
/*0xdd8*/ bool               bIsMerchant;
/*0xddc*/
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

/*0x2bc*/ bool                  bOldIconArrangement;
/*0x2c0*/ CTextureAnimation*    ptaBlueIconBackground;
/*0x2c8*/ CTextureAnimation*    ptaRedIconBackground;
/*0x2d0*/ CTextureAnimation*    ptaYellowIconBackground;
/*0x2d8*/ CTextureAnimation*    ptaBuffIcons[MAX_BUFF_ICONS];
/*0x428*/ CButtonWnd*           pBuffButtons[MAX_BUFF_ICONS];    // was: pBuff
/*0x578*/ CTextObjectInterface* pTimeRemainingTexts[MAX_BUFF_ICONS];
/*0x6c8*/ CTextObjectInterface* pCounterTexts[MAX_BUFF_ICONS];
/*0x818*/ CTextObjectInterface* pLimitedUseTexts[MAX_BUFF_ICONS];
/*0x968*/ int                   spellIds[MAX_BUFF_ICONS];        // was: BuffId
/*0xa10*/ int                   buffTimers[MAX_BUFF_ICONS];      // was: BuffTimer
/*0xab8*/ HashTable<CXStr>      whoCastHash;                     // was: WhoCast
/*0xad0*/ uint32_t              nextRefreshTime;
/*0xad4*/ int                   initWindowWidth;
/*0xad8*/ int                   initWindowHeight;
/*0xadc*/ BuffWindowType        buffWindowType;
/*0xae0*/ int                   firstEffectSlot;
/*0xae4*/ int                   lastEffectSlot;                  // was: MaxLongBuffs 0x2a (NUM_LONG_BUFFS)
/*0xae8*/ int                   maxBuffButtons;                  // was: MaxShortBuffs 0x37 (NUM_SHORT_BUFFS)
/*0xaec*/ int                   contextMenuId;
/*0xaf0*/ CXWnd*                selectedButtonWnd;               // this field doesn't alwayws appear to be initialize
/*0xaf8*/ bool                  updatedMenuItems;
/*0xafc*/ int                   lastBuffRefreshTime;
/*0xb00*/

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

/*0x2c8*/ CPopDialogWnd*       pCurrentPop;
/*0x2d0*/ uint32_t             lastRefresh;
/*0x2d4*/ bool                 bHorizontal;
/*0x2d8*/ CSpellGemWnd*        SpellSlots[NUM_SPELL_GEMS];     // CSPW_Spell%d
/*0x348*/ CButtonWnd*          pBtnSpellBook;                  // CSPW_SpellBook
/*0x350*/ CButtonWnd*          pBtnSpellBookH;                 // CSPW_SpellBookH
/*0x358*/ CButtonWnd*          pBtnSpellBookV;                 // CSPW_SpellBookV
/*0x360*/ CXWnd*               pHorizontalTemplate;            // CSPW_HorizontalOrientationTemplate
/*0x368*/ CXWnd*               pVerticalTemplate;              // CSPW_VerticalOrientationTemplate
/*0x370*/ CTileLayoutWnd*      pSpellGemLayout;                // CSPW_SpellGemLayout
/*0x378*/ CXWnd*               pHorizontalBook;                // CSPW_HorizontalOrientationBook
/*0x380*/ CXWnd*               pVerticalBook;                  // CSPW_VerticalOrientationBook
/*0x388*/ ArrayClass<SpellCategoryMajor*> CategorizedSpells;
/*0x3a0*/ int                  SpellSelectMenuID;
/*0x3a4*/ int                  GemMemming;
/*0x3a8*/ int                  LoadoutMenu;
/*0x3ac*/ int                  SaveLoadoutIndex;
/*0x3b0*/ CContextMenu*        pMainMenu;
/*0x3b8*/ CContextMenu*        pLoadMenu;
/*0x3c0*/ CContextMenu*        pSaveMenu;
/*0x3c8*/ CContextMenu*        pDeleteMenu;
/*0x3d0*/
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
/*0x100*/ void*              ChatContainerWindow_vfTable;
/*0x108*/ uint32_t           Unknown1;
/*0x10c*/ uint32_t           Unknown2;
/*0x110*/ uint32_t           Unknown3;
/*0x114*/ uint32_t           Unknown4;
/*0x118*/ uint32_t           Unknown5;
/*0x11c*/ uint32_t           Unknown6;
/*0x120*/ CChatContainerWindow* ChatContainerWindow[MAX_CHAT_WINDOWS];
/*0x220*/ int                Unknown7;
/*0x224*/ int                NumWindows;
/*0x228*/ int                LockedWindow;
/*0x22c*/ int                ActiveWindow;
/*0x230*/ int                CurrentActive;                      // CurrentActive... CChat::GetActiveChatWindow
/*0x234*/ int                LockedActive;                       // LockedActive... CChatManager__GetLockedActiveChatWindow_x
/*0x238*/ CChatWindow*       ChannelMap[MAX_CHAT_FILTERS];       // channel map
/*0x4e8*/ CContextMenu*      pMainContextMenu;
/*0x4f0*/ int                ScrollbarIndex;
/*0x4f4*/ int                UnknownContextMenuID1[6];
/*0x510*/ CContextMenu*      pLanguageContextMenu;
/*0x518*/ int                LanguageMenuIndex;
/*0x520*/ CContextMenu*      pFilterContextMenu;
/*0x528*/ int                FilterMenuIndex;
/*0x52c*/ int                ChatChannelFilterMenuIndex;
/*0x530*/ int                MeleeFilterSubMenuIndex;
/*0x534*/ int                SpellsFilterSubMenuIndex;
/*0x538*/ CContextMenu*      pMeleeFilterContextMenu;
/*0x540*/ int                MeleeFilterMenuIndex;
/*0x548*/ CContextMenu*      pSpellsFilterContextMenu;
/*0x550*/ int                SpellsMenuIndex;
/*0x558*/ CContextMenu*      pChatChannelFilterContextMenu;
/*0x560*/ int                ChannelMenuIndex;
/*0x568*/ CContextMenu*      pDefaultChannelContextMenu;

	// data members beyond this point are not validated and likely incorrect
/*0x570*/ int                DefaultChannelMenu;
/*0x574*/ int                DefaultChannelMenu2;
/*0x578*/ CContextMenu*      pCM_ChatChannelDefChan;
/*0x580*/ int                ChatChannelDefChanIndex;
/*0x588*/ CContextMenu*      pCM_YourHitsMenu;
/*0x590*/ int                YourHitsMenuIndex;
/*0x598*/ CContextMenu*      pCM_YourMissesMenu;
/*0x5a0*/ int                YourMissesMenuindex;
/*0x5a8*/ CContextMenu*      pCM_YouBeingHitMenu;
/*0x5b0*/ int                YouBeingHitMenuindex;
/*0x5b8*/ CContextMenu*      pCM_OthersHitsMenu;
/*0x5c0*/ int                OthersHitsMenuindex;
/*0x5c8*/ CContextMenu*      pCM_OthersMissesMenu;
/*0x5d0*/ int                OthersMissesMenuindex;
/*0x5d8*/ CContextMenu*      pCM_AllContextMenu;
/*0x5e0*/ int                AllContextMenuindex;
/*0x5e8*/ CContextMenu*      pCM_HitModesMenu;
/*0x5f0*/ int                HitModesMenuindex;
/*0x5f8*/ CContextMenu*      pCM_ReplyToMenu;
/*0x600*/ int                ReplyToMenuindex;
/*0x608*/ CContextMenu*      pCM_TellFriendMenu;
/*0x610*/ int                TellFriendMenuindex;
/*0x618*/ CContextMenu*      pCM_TellRaidmemberMenu;
/*0x620*/ int                TellRaidmemberMenuindex;
/*0x624*/ int                ReplyToSubIndex;
/*0x628*/ int                TellFriendSubIndex;
/*0x62c*/ int                TellRaidmemberSubIndex;
/*0x630*/ int                HitModes[MAX_HITMODES];
/*0x650*/ int                DefaultChannel;
/*0x658*/ CContextMenu*      pRandomFilterContextMenu;              // 0x680
/*0x660*/ int                RandomFilterIndex;
/*0x664*/ int                RandomFilterSubIndex;
/*0x668*/ CContextMenu*      pEnvironmentalDamageFilterContextMenu; // 0x690
/*0x670*/ int                EnvironmentalDamageIndex;
/*0x674*/ int                EnvironmentalDamageSubIndex;
/*0x678*/ CContextMenu*      pDamageShieldsFilterContextMenu;      // 0x6a0
/*0x680*/ int                DamageShieldsFilterIndex;
/*0x684*/ int                DamageShieldsFilterSubIndex;
/*0x688*/ CContextMenu*      pCM_BeneficialSpellsFilterMenu;
/*0x690*/ int                BeneficialSpellsFilteIndex;
/*0x694*/
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

/*0x2b8*/ CChatWindowManager* ChatManager;
/*0x2c0*/ CEditWnd*    InputWnd;
/*0x2c8*/ CStmlWnd*    OutputWnd;
/*0x2d0*/ int          ChatChannel;
/*0x2d4*/ int          ChatChannelIndex;
/*0x2d8*/ char         TellTarget[0x40];
/*0x318*/ int          Language;
/*0x31c*/ bool         bIsMainChat;
/*0x31d*/ bool         bIsTellWnd;
/*0x320*/ int          TimestampFormat;
/*0x324*/ COLORREF     TimestampColor;
/*0x328*/ bool         bTimestampMatchChatColor;
/*0x330*/ CXStr        CommandHistory[0x28];
/*0x470*/ int          HistoryIndex;
/*0x474*/ int          HistoryLastShown;
/*0x478*/ int          FontSize;                 // style
/*0x47c*/ int          AlwaysChathereIndex;      // menu
/*0x480*/ int          NamesContextMenu;         // guess
/*0x484*/ int          ContextMenuID;            // also a guess
/*0x488*/ int          ContextMenuSubID[0xa];    // this is not correct but ill fix it later.
/*0x4b0*/
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

/*0x2bc*/ int                ContextMenuIndex;
/*0x2c0*/ int                MaxSliderValue;
/*0x2c8*/ CXWnd*             pwndCaller;
/*0x2d0*/ CButtonWnd*        ColorButton[16];
/*0x350*/ int                RedSliderValue;
/*0x358*/ CSliderWnd*        RedSlider;
/*0x360*/ CEditWnd*          RedSliderInputEdit;
/*0x368*/ int                GreenSliderValue;
/*0x370*/ CSliderWnd*        GreenSlider;
/*0x378*/ CEditWnd*          GreenSliderInputEdit;
/*0x380*/ int                BlueSliderValue;
/*0x388*/ CSliderWnd*        BlueSlider;
/*0x390*/ CEditWnd*          BlueSliderInputEdit;
/*0x398*/ CButtonWnd*        AcceptButton;
/*0x3a0*/
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

/*0x2c0*/ CStaticAnimationTemplate*     pStrip1;
/*0x2c8*/ CStaticAnimationTemplate*     pStrip2;
/*0x2d0*/ int                           Unknown0x244;
/*0x2d4*/ int                           offset;
/*0x2d8*/ int                           timestamp;
/*0x2e0*/ double                        speed;
/*0x2e8*/ int                           timer;
/*0x2ec*/ CompassLineSource             lineAdventure;
/*0x320*/ ArrayClass<CompassLineSource*> lineData;
/*0x338*/
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
/*0x2b8*/ CStmlWnd*    OutputText;
/*0x2c0*/ CButtonWnd*  pYesButton;
/*0x2c8*/ CButtonWnd*  pNoButton;
/*0x2d0*/ CButtonWnd*  pCancelButton;
/*0x2d8*/ CButtonWnd*  pOKButton;
/*0x2e0*/ BYTE         Unknown0x170[0x18]; // fixme x64
/*0x2f8*/
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
/*0x2b8*/ ItemPtr       Container;
/*0x2c0*/ ItemGlobalIndex Location;
/*0x2d0*/ VeArray<CInvSlotWnd*> InvSlotWnds;
/*0x2e8*/ CButtonWnd*   pCombineButton;
/*0x2f0*/ CButtonWnd*   pDoneButton;
/*0x2f8*/ CButtonWnd*   pStandardDoneButton;
/*0x300*/ CButtonWnd*   pCombineDoneButton;
/*0x308*/ CButtonWnd*   pContainerIcon;
/*0x310*/ CButtonWnd*   pContainerStandardIcon;
/*0x318*/ CButtonWnd*   pContainerCombineIcon;
/*0x320*/ CTextureAnimation* pIconAnimation;
/*0x328*/ CLabel*       ContainerLabel;
/*0x330*/ CInvSlotWnd*  pContainerSlotTemplate;
/*0x338*/ CXWnd*        pStandardItems;
/*0x340*/ CXWnd*        pStandardItemsWithDone;
/*0x348*/ CXWnd*        pCombineItems;
/*0x350*/ CStmlWnd*     pStandardSize;
/*0x358*/ CStmlWnd*     pCombineSize;
/*0x360*/ bool          bCombineValid;
/*0x361*/ bool          bUserCloseable;
/*0x364*/ int           ContainerType;            // classic = 0, standard = 1, combine = 2
/*0x368*/ int           IndexDoneButton;
/*0x370*/ CContextMenu* ContextMenu;
/*0x378*/

	DEPRECATE("CContainerWnd: Use Container instead of pContents")
	inline ItemClient* get_pContents() { return Container.get(); }
	__declspec(property(get = get_pContents)) ItemClient* pContents;
};

inline namespace deprecated {
	using EQCONTAINERWINDOW DEPRECATE("Use CContainerWnd instead of EQCONTAINERWINDOW") = CContainerWnd;
	using PEQCONTAINERWINDOW DEPRECATE("Use CContainerWnd* instead of PEQCONTAINERWINDOW") = CContainerWnd*;
}

constexpr int MAX_CONTAINERS = 40;

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

/*0x008*/ CContainerWnd*     pContainerWnds[MAX_CONTAINERS];
/*0x148*/ ArrayClass<CContainerWnd*> ContainerWndsToDelete;
/*0x160*/ ItemPtr            WorldContainer;
/*0x168*/ DWORD              WorldContainerSerialNumber;
/*0x16c*/ int                WorldContainerRealEstateID;
/*0x170*/ int                WorldContainerRealEstateItemID;
/*0x174*/ DWORD              Timer;
/*0x178*/ bool               bShowDone;
/*0x17c*/

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

/*0x0250*/ CXWnd*             pParentMenuWnd;
/*0x0258*/ CContextMenu*      pCurrMenus[MAX_CONTEXT_MENU_DEPTH];
/*0x0298*/ int                NumVisibleMenus;
/*0x029c*/ int                CurrMenu;
/*0x02a0*/ CContextMenu*      pMenus[MAX_CONTEXT_MENUS];
/*0x22a0*/ int                NumMenus;
/*0x22a8*/ CXWnd*             pHandlerWnd;
/*0x22b0*/ int                HandlerCmd;
/*0x22b4*/ int                DefaultMenuIndex;
/*0x22b8*/ int                DefaultHelpItem;
/*0x22bc*/ int                DefaultBGItem;
/*0x22c0*/ int                DefaultMinItem;
/*0x22c4*/ int                DefaultCloseItem;
/*0x22c8*/ int                DefaultLockItem;
/*0x22cc*/ int                DefaultEscapeItem;
/*0x22d0*/
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

/*0x330*/ int          NumItems;
/*0x334*/ int          Unknown0x28C;
/*0x338*/
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

/*0x2bc*/ int                       Type;
/*0x2c0*/ int                       Index;
/*0x2c4*/ EqItemGuid                ItemGuid;
/*0x2d8*/ int                       ItemID;
/*0x2dc*/ int                       Qty;
/*0x2e0*/ int                       IconID;
/*0x2e8*/ SoeUtil::String           AssignedName;
/*0x300*/ int                       Unknown0x264;
/*0x304*/ char                      AssignedNameCopy[0x40];
/*0x348*/ CXStr                     ButtonText;
/*0x350*/ CStaticAnimationTemplate* pBGStaticAnim;                  // CA_Anim
/*0x358*/ CStaticAnimationTemplate* pOverlayStaticAnim;             // CA_Anim2
/*0x360*/ CSpellGemWnd*             pSpellGem;                      // CA_SpellGem
/*0x368*/ CTextObjectInterface*     pTextObjectInterface;
/*0x370*/ CTextObjectInterface*     pButtonTextObjectInterface;
/*0x378*/ int                       TextfontStyle;
/*0x37c*/ int                       Unknown0x2C4;
/*0x380*/
};

//============================================================================
// CExtendedTargetWnd
//============================================================================

constexpr int MAX_EXTENDED_TARGET_SIZE = 23; // total available extended targets


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

/*0x2bc*/ bool             Unknown0x22c;
/*0x2c0*/ int              Unknown0x230;
/*0x2c4*/ int              Unknown0x234;
/*0x2c8*/ int              Unknown0x238;
/*0x2d0*/ SoeUtil::String  Unknown0x23c;
/*0x2e8*/ SoeUtil::String  Unknown0x24c;
/*0x300*/ CGaugeWnd*       StandingGaugeTemplate;
/*0x308*/ CTreeViewWnd*    Categories;
/*0x310*/ CEditWnd*        SearchNameInput;
/*0x318*/ CButtonWnd*      SearchButton;
/*0x320*/ CListWnd*        FactionList;
/*0x328*/
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

//============================================================================
// CFindItemWnd
//============================================================================

// @sizeof(CFindItemWnd) == 0x3d8 :: 2022-04-15 (live) @ 0x140158497
constexpr size_t CFindItemWnd_size = 0x3d8;

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

/*0x2bc*/ bool                Unknown0;
/*0x2bd*/ bool                Unknown1;
/*0x2c0*/ uint32_t            Unknown2;
/*0x2c4*/ uint32_t            Timestamp;
/*0x2c8*/ uint32_t            Counter;
/*0x2d0*/ ItemContainer       Container;
/*0x2f8*/ HashTable<ItemRecord, int> Items;
/*0x310*/ HashTable<SoeUtil::String, int> ItemNames;     // just a guess, likely inaccurate.
/*0x328*/ CStaticAnimationTemplate* FIW_ClassAnim;
/*0x330*/ CSidlScreenWnd*     FIW_CharacterView;
/*0x338*/ CListWnd*           FIW_ItemList;
/*0x340*/ CButtonWnd*         FIW_QueryButton;
/*0x348*/ CButtonWnd*         FIW_RequestItemButton;
/*0x350*/ CButtonWnd*         FIW_RequestPreviewButton;
/*0x358*/ CButtonWnd*         FIW_Default;
/*0x360*/ CButtonWnd*         FIW_GrabButton;
/*0x368*/ CButtonWnd*         FIW_HighlightButton;
/*0x370*/ CButtonWnd*         FIW_DestroyItem;
/*0x378*/ CComboWnd*          FIW_ItemLocationCombobox;
/*0x380*/ CComboWnd*          FIW_ItemSlotCombobox;
/*0x388*/ CComboWnd*          FIW_StatSlotCombobox;
/*0x390*/ CComboWnd*          FIW_RaceSlotCombobox;
/*0x398*/ CComboWnd*          FIW_ClassSlotCombobox;
/*0x3a0*/ CComboWnd*          FIW_ItemTypeCombobox;
/*0x3a8*/ CComboWnd*          FIW_ItemPrestigeCombobox;
/*0x3b0*/ CComboWnd*          FIW_ItemAugmentCombobox;
/*0x3b8*/ CEditWnd*           FIW_ItemNameInput;
/*0x3c0*/ CEditWnd*           FIW_MaxLevelInput;
/*0x3c8*/ CEditWnd*           FIW_MinLevelInput;
/*0x3d0*/ CLabelWnd*          FIW_DragonHoardLabel;
/*0x3d8*/
};

SIZE_CHECK(CFindItemWnd, CFindItemWnd_size);

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

// @sizeof(CFindLocationWnd) == 0x388 :: 2022-04-15 (live) @ 0x140158c55
constexpr size_t CFindLocationWnd_size = 0x388;

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
/*0x2b8*/ CListWnd*               findLocationList;        // FLW_FindLocationList
/*0x2c0*/ CCheckBoxWnd*           filterLocationsCheckBox; // FLW_FilterLocationsCheckbox
/*0x2c8*/ CCheckBoxWnd*           filterGroupCheckBox;     // FLW_FilterGroupCheckbox
/*0x2d0*/ CCheckBoxWnd*           filterRaidCheckBox;      // FLW_FilterRaidCheckbox
/*0x2d8*/ CLabelWnd*              noneLabel;               // FLW_FoundNoneLabel
/*0x2e0*/ uint32_t                lastUpdateTime;
/*0x2e4*/ uint32_t                lastFindRequestTime;
/*0x2e8*/ bool                    didFindRequest;
/*0x2f0*/ PlayerDataArray         unfilteredPlayerList;
/*0x308*/ PlayerDataArray         filteredGroupPlayerList;
/*0x320*/ PlayerDataArray         unfilteredRaidPlayerList;
/*0x338*/ POIDataArray            unfilteredPOIDataList;
/*0x350*/ ZoneConnectionDataArray unfilteredZoneConnectionList;
/*0x368*/ FindableReferenceList   referenceList;
/*0x380*/ uint32_t                lastId;
/*0x384*/ bool                    dataRequested;
/*0x385*/ bool                    playerListDirty;
/*0x386*/ bool                    zoneConnectionsRcvd;
/*0x388*/
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

/*0x2bc*/ int             Unknown0x24c;
/*0x2c0*/ CXWnd*          pWndCaller;
/*0x2c8*/ CListWnd*       pListFiles;
/*0x2d0*/ CEditWnd*       pEditEntry;
/*0x2d8*/ CComboWnd*      pComboDirHistory;
/*0x2e0*/ CButtonWnd*     pUpButton;
/*0x2e8*/ CButtonWnd*     pOKButton;
/*0x2f0*/ CButtonWnd*     pCancelButton;
/*0x2f8*/ int             Flags;
/*0x300*/ CXStr           SelectedFile;
/*0x308*/ IShellFolder*   ShellFolder;
/*0x310*/ CXStr           CurrentDir;
/*0x318*/ // more
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

/*0x2c8*/ CButtonWnd*    pMoneyButton[4];
/*0x2e8*/ CButtonWnd*    TradeButton;
/*0x2f0*/ CButtonWnd*    CancelButton;
/*0x2f8*/ CLabel*        NPCNameLabel;
/*0x300*/ CInvSlotWnd*   pInvSlotWnd[MAX_GIVE_SLOTS];
/*0x320*/
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
	EQLIB_OBJECT void UpdateDisplay(int Index, PlayerClient* groupmember, COLORREF NameColor, UINT RoleBits);

	//----------------------------------------------------------------------------
	// data members
/*0x2b8*/ CButtonWnd*        InviteButton;
/*0x2c0*/ CButtonWnd*        DisbandButton;
/*0x2c8*/ CButtonWnd*        FollowButton;
/*0x2d0*/ CButtonWnd*        DeclineButton;
/*0x2d8*/ CButtonWnd*        LFGButton;
/*0x2e0*/ CGaugeWnd*         HPGauge[6];
/*0x310*/ CGaugeWnd*         PetGauge[6];
/*0x340*/ CGaugeWnd*         ManaGauge[6];
/*0x370*/ CGaugeWnd*         EnduranceGauge[6];
/*0x3a0*/ CLabel*            HPLabel[6];
/*0x3d0*/ CLabel*            HPPercLabel[6];
/*0x400*/ CLabel*            ManaLabel[6];
/*0x430*/ CLabel*            ManaPercLabel[6];
/*0x460*/ CLabel*            EnduranceLabel[6];
/*0x490*/ CLabel*            EndurancePercLabel[6];
/*0x4c0*/ COLORREF           HPTextColor[6];
/*0x4d8*/ CButtonWnd*        GroupTankButton[6];
/*0x508*/ CButtonWnd*        GroupAssistButton[6];
/*0x538*/ CButtonWnd*        GroupPullerButton[6];
/*0x568*/ CButtonWnd*        GroupMarkNPCButton[6];
/*0x598*/ CLabel*            AggroPercLabel[6];
/*0x5c8*/ long               Timer;
/*0x5d0*/ CContextMenu*      GroupContextMenu;
/*0x5d8*/ bool               bPetbars;
/*0x5d9*/ bool               bManabars;
/*0x5da*/ bool               bEndurancebars;
/*0x5db*/ bool               bAggroPct;
/*0x5dc*/ int                PetBarIndex;
/*0x5e0*/ int                ManaBarIndex;
/*0x5e4*/ int                EnduranceBarIndex;
/*0x5e8*/ int                AggroPctIndex;
/*0x5ec*/ int                RoleSeparatorID;
/*0x5f0*/ int                RoleSelectMenu;
/*0x5f4*/ int                RoleSelectMenuID;
/*0x5f8*/ bool               bPlayerInvited;
/*0x5fc*/
};

//============================================================================
// CGuildMgmtWnd
//============================================================================

// todo: update, some of this is obsolete
struct [[offsetcomments]] GuildMember
{
	// Start of GuildMember
/*0x000*/ GuildMember*       pNext;
/*0x008*/ bool               bOnline;
/*0x00a*/ WORD               ZoneID;
/*0x00c*/ WORD               Instance;
/*0x010*/ DWORD              PlayerSerial;
/*0x014*/ bool               bMainProfile;
/*0x015*/ bool               bOfflineMode;
/*0x016*/ char               Name[0x40];
/*0x058*/ int                Level;
/*0x05c*/ int                Flags; //1=banker, 2=alt
/*0x060*/ DWORD              Class;
/*0x064*/ DWORD              Rank; //0=member 1=officer 2=leader
/*0x068*/ char               PlayerHandle[0x20];
/*0x088*/ char               PlayerComments[0x100];
/*0x188*/ DWORD              LastLoginTime;
/*0x190*/ EqGuid             PlayerGuild;//size is 8
/*0x198*/ bool               bGuildShowSprite;
/*0x199*/ bool               bTributeStatus;//active on/off
/*0x19a*/ bool               bTrophyStatus;//active on/off
/*0x19c*/ int                TributeDonations;
/*0x1a0*/ DWORD              LastDonation;//timestamp
/*0x19c*/ // end of GuildMember
	// start of GuildMemberClient
/*0x1a4*/ char               PublicNote[0x100];
/*0x2a4*/ char               PersonalNote[0x100];
/*0x3a4*/ bool               bTributeOptIn;
/*0x3a5*/ bool               bTrophyTributeOptIn;
/*0x3a8*/
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
/*0x58*/ GuildNameEntry* pPrev;
/*0x60*/ GuildNameEntry* pNode1;
/*0x68*/ GuildNameEntry* pANode2;
/*0x70*/
};

struct [[offsetcomments]] GuildBanner
{
/*0x00*/ int        Type;
/*0x04*/ int        PrimaryFlagPattern;
/*0x08*/ int        SecondaryFlagPattern;
/*0x0c*/ ARGBCOLOR  PrimaryTint;
/*0x10*/ ARGBCOLOR  SecondaryTint;
/*0x18*/ eqtime_t   TimeRemaining;
/*0x20*/ int        ZoneID;
/*0x24*/ CVector3   Loc;
/*0x30*/ int        Heading;
/*0x38*/ eqtime_t   GracePeriodRemaining;
/*0x40*/ int        ModificationCount;
/*0x44*/ int        TeleportPlantRestriction;
/*0x48*/ eqtime_t   ModifyDate;
/*0x50*/
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
/*0x08*/ CXStr         Name;
/*0x10*/ };


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
/*0x010*/ GuildMember*           pFirstGuildMember;
/*0x018*/ EqGuid                 GuildGuid;
/*0x020*/ char                   Name[0x40];
/*0x060*/ eqtime_t               CreationDate;
/*0x068*/ int                    Active;
/*0x070*/ int64_t                GuildID;
/*0x078*/ bool                   bHasChanged;
/*0x079*/ char                   GuildMOTD[0x200];
/*0x280*/ SoeUtil::String        MOTD_Author;
/*0x298*/ int                    TributePoints;
/*0x29c*/ BenefitSelection       ActiveTributeBenefits[2];
/*0x2ac*/ bool                   bTributeBenefitsActive;
/*0x2b0*/ BenefitSelection       ActiveTrophyTributeBenefits[4];
/*0x2d0*/ bool                   bTrophyTributeBenefitsActive;
/*0x2d1*/ bool                   bRenameFlag;
/*0x2d2*/ bool                   bUnknownFlag;
/*0x2d8*/ GuildBanner            Banner;
/*0x328*/ TSafeArrayStatic<uint8_t, 0x320> BitFlags;
/*0x648*/ TSafeArrayStatic<uint8_t, 0x320> PrevBitFlags;
/*0x968*/ char                   GuildURL[0x200];
/*0xb68*/ char                   GuildChannel[0x80];
/*0xbe8*/ ArrayClass<GuildRank*> Ranks;
/*0xc00*/ GuildRankPermissions<GuildRankPermission>* RankPermissions;
/*0xc08*/

	ALT_MEMBER_GETTER(GuildMember*, pFirstGuildMember, pMember);
};

struct guildmotdSet;

class [[offsetcomments]] CGuild : public GuildBase
{
public:
/*0x0c08*/ eqtime_t              LastGuildNameRequest;
/*0x0c10*/ HashListSet<GuildNameEntry*, 250> GuildNamesTable;
/*0x1400*/ void* Map[3];     // this is a SoeUtil::Map
/*0x1418*/ int                   OnlineCount;      // 1418
/*0x141c*/ bool                  bOnlineOutofSync; // 141c
/*0x1420*/ int                   TributeTimer;
/*0x1424*/ int                   TributeCost;
/*0x1428*/ bool                  bTributeCostDirty;
/*0x1429*/ bool                  bTributeActive;
/*0x142a*/ bool                  bTributeBenefitsLocked;
/*0x1430*/ eqtime_t              TrophyTributeTimer;
/*0x1438*/ int                   TrophyTributeCost;
/*0x143c*/ bool                  bTrophyTributeCostOutofSync;
/*0x143d*/ bool                  bTrophyTributeActive;
/*0x143e*/ bool                  bTrophyBenefitsLocked;
/*0x1440*/

	EQLIB_OBJECT bool ValidGuildName(int);
	EQLIB_OBJECT char* GetGuildMotd();
	EQLIB_OBJECT char* GetGuildMotdAuthor();
	EQLIB_OBJECT const char* GetGuildName(int64_t, char* buffer, bool* found, bool) const;
	EQLIB_OBJECT GuildMember* FindMemberByName(const char*);
	EQLIB_OBJECT void DeleteAllMembers();
	EQLIB_OBJECT void DemoteMember(GuildMember*);
	EQLIB_OBJECT void HandleGuildMessage(connection_t*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT void SendPublicCommentChange(char*, char*);
	EQLIB_OBJECT void SetGuildMotd(guildmotdSet*);

	EQLIB_OBJECT int64_t GetGuildIndex(const char*);

	inline const char* GetGuildName(int64_t guildId) const
	{
		char buffer[64] = { 0 };
		bool found = false;

		return GetGuildName(guildId, buffer, &found, true);
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

/*0x2d4*/ BYTE         Unknown0x148[0x3c];
/*0x310*/ BYTE         Unknown0x194;
/*0x311*/ BYTE         ShowOffline;              // 01 = show offline box is checked
/*0x312*/ BYTE         Unknown0x196[0x2];

	// This is a pointer to the beginning of a list of pointers, each representing one player in
	// the guild. The number of  pointers depends upon TotalMemberCount.
/*0x318*/ GuildMember** pMember;
/*0x320*/ DWORD        TotalMemberCount;
/*0x324*/ DWORD        Unknown0x1a0;             // 150?
/*0x328*/ DWORD        Unknown0x1a4;             // 1?
/*0x32c*/ DWORD        TotalMemberCountAgain;
/*0x330*/ BYTE         Unknown0x1ac[0x1c];
/*0x34c*/ char         PersonalNotesFilePath[0x40]; // path to personal notes file
/*0x38c*/ BYTE         Unknown0x208[0x1c0];      // empty
/*0x54c*/ DWORD        Unknown0x3c8;             // 1?
/*0x550*/ DWORD        Unknown0x3cc;             // some sort of bizaare pointer...
/*0x554*/
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

	EQLIB_OBJECT void DoHotButton(int Button, int AllowAutoRightClick, int something);
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

/*0x2cc*/ uint8_t     Unknown0x0240[0xfc];
/*0x3c8*/ int64_t     VitalityCap;
/*0x3d0*/ int         AAVitalityCap;
/*0x3d4*/
};

inline namespace deprecated {
	using INVENTORYWND DEPRECATE("Use CInventoryWnd instead of INVENTORYWND") = CInventoryWnd;
	using PINVENTORYWND DEPRECATE("Use CInventoryWnd* instead of PINVENTORYWND") = CInventoryWnd*;
}

//============================================================================
// CInvSlotWnd
//============================================================================

class CInvSlotWnd;

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

/*0x08*/ CInvSlotWnd*       pInvSlotWnd;
/*0x10*/ CTextureAnimation* pInvSlotAnimation;
/*0x18*/ int                Index;                    // InvSlot
/*0x1c*/ bool               bEnabled;                 // Valid
/*0x20*/
};

inline namespace deprecated {
	using EQINVSLOT DEPRECATE("Use CInvSlot instead of EQINVSLOT") = CInvSlot;
	using PEQINVSLOT DEPRECATE("Use CInvSlot* instead PEQINVSLOT") = CInvSlot*;
}

const int MAX_INV_SLOTS = 2304;

//----------------------------------------------------------------------------

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

/*0x0008*/ CInvSlot*    SlotArray[MAX_INV_SLOTS]; // size 0x2400 //see 72E00F in Nov 06 2018 Test
/*0x4808*/ int          TotalSlots;
/*0x480c*/ unsigned int LastUpdate;
/*0x4810*/ CInvSlot*    pSelectedItem;
/*0x4818*/ CInvSlot*    pFindSelectedItem;
/*0x4820*/ bool         bToggleBagsOpen;
/*0x4821*/ bool         bToggleBankBagsOpen;
/*0x4824*/
};

inline namespace deprecated {
	using EQINVSLOTMGR DEPRECATE("Use CInvSlotMgr instead of EQINVSLOTMGR") = CInvSlotMgr;
	using PEQINVSLOTMGR DEPRECATE("Use CInvSlotMgr* instead of PEQINVSLOTMGR") = CInvSlotMgr*;
}

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

/*0x340*/ CTextureAnimation* pBackground;
/*0x348*/ ItemGlobalIndex    ItemLocation;            // WindowType = ItemLocation.Location, InvSlot = ItemLocation.GetTopSlot()
/*0x358*/ ItemPtr            LinkedItem;              // If the slot is linked to a specific item
/*0x360*/ int                ItemOffsetX;
/*0x364*/ int                ItemOffsetY;
/*0x368*/ CTextureAnimation* ptItem;
/*0x370*/ int                Quantity;
/*0x374*/ bool               bSelected;
/*0x375*/ bool               bFindSelected;
/*0x378*/ int                RecastLeft;
/*0x37c*/ bool               bHotButton;
/*0x37d*/ bool               bInventorySlotLinked;
/*0x380*/ CInvSlot*          pInvSlot;
/*0x388*/ CTextObjectInterface* pTextObject;
/*0x390*/ int                TextFontStyle;
/*0x394*/ int                Mode;
/*0x398*/ D3DCOLOR           BGTintRollover;
/*0x39c*/ D3DCOLOR           BGTintNormal;
/*0x3a0*/ int                LastTime;
/*0x3a4*/ int                Unknown0x2cc;
/*0x3a8*/

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

// @sizeof(CItemDisplayWnd) == 0xa80 :: 2022-04-15 (live) @ 0x1403af6e4
constexpr size_t CItemDisplayWnd_size = 0xa80;

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
		NumItemInfo = 13,
	};

/*0x2b8*/ CStmlWnd*         Description;                   // ItemDescription
/*0x2c0*/ CButtonWnd*       IconButton;                    // IconButton
/*0x2c8*/ CStmlWnd*         ItemLore;                      // ItemLore
/*0x2d0*/ CTabWnd*          ItemDescriptionTabBox;         // ItemDescriptionTabBox
/*0x2d8*/ CPageWnd*         ItemDescriptionTab;            // ItemDescriptionTab
/*0x2e0*/ CPageWnd*         ItemLoreTab;                   // ItemLoreTab
/*0x2e8*/ CSidlScreenWnd*   pAppearanceSocketScreen;       // IDW_Appearance_Socket_Screen
/*0x2f0*/ CButtonWnd*       pAppearanceSocketItem;         // IDW_Appearance_Socket_Item
/*0x2f8*/ CButtonWnd*       pAppearanceSocketBuyButton;    // IDW_Appearance_Socket_Buy_Button
/*0x300*/ CStmlWnd*         pAppearanceSocketDescription;  // IDW_Appearance_Socket_Description
/*0x308*/ CSidlScreenWnd*   pItemSocketScreen[6];          // IDW_Socket_Slot_%d_Screen
/*0x338*/ CButtonWnd*       pItemSocketItemButton[6];      // IDW_Socket_Slot_%d_Item
/*0x368*/ CStmlWnd*         pItemSocketDescription[6];     // IDW_Socket_Slot_%d_Description
/*0x398*/ CXStr             ItemInfo;                      // "Error: Item description not set" -- "this item is placable in yards, guild yards...", "This item can be used in tradeskills", etc
/*0x3a0*/ CXStr             Unknown0x2ac;
/*0x3a8*/ CXStr             Unknown0x2b0;
/*0x3b0*/ CXStr             WindowTitle;                   // "Item Display"
/*0x3b8*/ CXStr             ItemAdvancedLoreText;          // "Error: Item lore not set"
/*0x3c0*/ CXStr             ItemMadeByText;
/*0x3c8*/ CXStr             SolventText;
/*0x3d0*/ CXStr             ItemInformationText;           // "Item Information: Placing this augment into...", "this armor can only be used in...", etc
/*0x3d8*/ ItemPtr           pItem;
/*0x3e0*/ bool              bActiveItem;
/*0x3e1*/ bool              bItemTextSet;
/*0x3e8*/ CTextureAnimation* DragIcons;                    // A_DragItem
/*0x3f0*/ bool              bTaggable;
/*0x3f1*/ bool              bFailed;
/*0x3f4*/ unsigned int      TabCount;
/*0x3f8*/ CLabel*           ModButtonLabel;                // IDW_ModButtonLabel
/*0x400*/ CLabel*           RewardButtonLabel;             // IDW_RewardButtonLabel
/*0x408*/ CStmlWnd*         ConvertStml;                   // IDW_ConvertButtonLabel
/*0x410*/ CLabel*           FuseButtonLabel;               // IDW_FuseButtonLabel
/*0x418*/ CLabel*           MadeByLabel;                   // IDW_MadeBy
/*0x420*/ CLabel*           CollectedLabel;                // IDW_CollectedLabel
/*0x428*/ CLabel*           ScribedLabel;                  // IDW_ScribedLabel
/*0x430*/ int               Row;
/*0x434*/ bool              bAntiTwink;
/*0x438*/ CButtonWnd*       ModButton;                     // IDW_ModButton
/*0x440*/ CButtonWnd*       RewardButton;                  // IDW_RewardButton
/*0x448*/ CButtonWnd*       PrintRealEstateItems;          // IDW_PrintRealEstateItems
/*0x450*/ CButtonWnd*       ConvertButton;                 // IDW_ConvertButton
/*0x458*/ CButtonWnd*       FuseButton;                    // IDW_FuseButton
/*0x460*/ bool              bCollected;
/*0x461*/ bool              bCollectedReceived;
/*0x464*/ int               Unknown0x0314;
/*0x468*/ CXStr             ItemName;
/*0x470*/ bool              bScribed;
/*0x471*/ bool              bScribedReceived;
/*0x474*/ int               group[6];
/*0x48c*/ int               showModified;
/*0x490*/ int               heroicCount;
/*0x494*/ int               itemInfoCount;
/*0x498*/ CLabel*           lblItemInfo[NumItemInfo];      // IDW_ItemInfo%d 4b0
/*0x500*/ CLabel*           lblStat[NumStatRows][NumStatCols];      // IDW_Row%dCol%dStat 518
/*0x770*/ CLabel*           lblValue[NumStatRows][NumStatCols];     // IDW_Row%dCol%dValue 788
/*0x9e0*/ CLabel*           lblHeroic[NumHeroic];          // IDW_Heroic%d 9f8
/*0xa48*/ int               rightClickMenuId;
/*0xa4c*/ int               rightClickMenuSocketId;
/*0xa50*/ CComboWnd*        ItemCompareList;               // IDW_ItemCompareList
/*0xa58*/ bool              isComparing;                   // this and the next are a guess. Need to verify.
/*0xa60*/ ItemPtr           pCompareItem;
/*0xa68*/ CTAFrameDraw*     ptaPageBorderHighlight;        // FT_DefPageBorderHighlight
/*0xa70*/ CTAFrameDraw*     ptaPageBorder;                 // FT_DefPageBorder
/*0xa78*/ uint32_t          ItemWndIndex;
/*0xa7c*/
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

// @sizeof(CKeyRingWnd) == 0x418 :: 2022-04-15 (live) @ 0x140157f47
constexpr size_t CKeyRingWnd_size = 0x418;

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

/*0x2c0*/ CListWnd*     pList[eNumPages];        // KRW_Mounts_List, KRW_Illusions_List, KRW_Familiars_List, KRW_HeroForge_List
/*0x2e8*/ CLabel*       pStatLabel[eNumPages];   // KRW_Mounts_StatsNameLabel, KRW_Illusions_StatNameLabel, KRW_Familiars_StatNameLabel,
/*0x310*/ CLabel*       pCountLabel[eNumPages];  // KRW_Mounts_CountLabel, KRW_Illusions_CountLabel, KRW_Familiars_CountLabel, KRW_HeroForge_CountLabel
/*0x338*/ CButtonWnd*   pBtnStat[eNumPages];     // KRW_Mounts_Selected, KRW_Illusions_Selected, KRW_Familiars_Selected, KRW_HeroForge_SlotButton
/*0x360*/ CButtonWnd*   pBtnSlot[eNumPages];     // KRW_Mounts_SlotButton, KRW_Illusions_SlotButton, KRW_Familiars_SlotButton
/*0x388*/ uint8_t       Unknown0x28c[0x20];
/*0x3a8*/ CButtonWnd*   pItemBtnTemplate;                // KRW_ItemBtnTemplate
/*0x3b0*/ CButtonWnd*   pBtnFamiliarLeave;               // KRW_Familiars_LeaveButton
/*0x3b8*/ CButtonWnd*   pBtnFamiliarAutoLeave;           // KRW_Familiars_AutoLeaveButton
/*0x3c0*/ CListWnd*     pKeysList;                       // KRW_Keys_List
/*0x3c8*/ uint8_t       Unknown0x2b4[0x8];
/*0x3d0*/ int           LastUpdateTime;                  // timestamp of when the current tab was last updated.
/*0x3d8*/ CPageWnd*     pPageMounts;                     // KRW_Mounts_Page
/*0x3e0*/ CPageWnd*     pPageIllusions;                  // KRW_Illusions_Page
/*0x3e8*/ CPageWnd*     pPageFamiliars;                  // KRW_Familiars_Page
/*0x3f0*/ CPageWnd*     pPageKeys;                       // KRW_Keys_Page
/*0x3f8*/ CPageWnd*     pPageHeroForge;                  // KRW_HeroForge_Page
/*0x400*/ CPageWnd*     pPageTeleportation;              // KRW_TeleportationItems_Page
/*0x408*/ CTabWnd*      pTabBox;                         // KRW_Subwindows
/*0x410*/ KeyRingPages  CurrentPage;
/*0x414*/
};

SIZE_CHECK(CKeyRingWnd, CKeyRingWnd_size);

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

// @sizeof(CLootWnd) == 0x4f8 :: 2022-04-15 (live) @ 0x1401581c5
constexpr size_t CLootWnd_size = 0x4f8;

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

/*0x2c4*/ bool              bServerClose;
/*0x2c5*/ bool              bLootingActive;
/*0x2c8*/ int               LootIndex[InvSlot_Max];
/*0x358*/ uint32_t          nNextRefreshTime; // 370
/*0x35c*/ bool              bInventoryWasActive;
/*0x360*/ ItemContainer     LootItems;
/*0x388*/ bool              bCloseOnComplete;
/*0x389*/ bool              bRightClickLoot;
/*0x38a*/ bool              bLootAllReady;
/*0x390*/ CXWnd*            LootInvWnd;                       // LootInvWnd
/*0x398*/ CInvSlotWnd*      LootSlotWnd[InvSlot_Max];         // LW_LootSlot%d
/*0x4b8*/ CLabel*           CorpseNameLabel;                  // LW_CorpseName
/*0x4c0*/ CButtonWnd*       DoneButton;                       // DoneButton
/*0x4c8*/ CButtonWnd*       BroadcastButton;                  // BroadcastButton
/*0x4d0*/ CButtonWnd*       LootAllButton;                    // LootAllButton
/*0x4d8*/ bool              bPopupPending;
/*0x4e0*/ void*             Unknown1;
/*0x4e8*/ void*             Unknown2;
/*0x4f0*/ uint32_t          Unknown3;
/*0x4f4*/

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
/*0x08*/ MapViewLabel* pNext;
/*0x10*/ MapViewLabel* pPrev;
/*0x18*/ CVector3      Location;
/*0x24*/ ARGBCOLOR     Color;
/*0x28*/ int           Size;                     // 1-3;
/*0x30*/ char*         Label;
/*0x38*/ int           Layer;                    // 0-3;
/*0x3c*/ int           Width;
/*0x40*/ int           Height;
/*0x44*/ int           OffsetX;
/*0x48*/ int           OffsetY;
/*0x4c*/
};

// If you see:  'eqlib::MAPLINE': redefinition; different basic types
// Then make sure to change your code to use MapViewLabel instead of MAPLABEL;
using MAPLABEL DEPRECATE("Use MapViewLabel instead of MAPLABEL") = MapViewLabel;
using PMAPLABEL DEPRECATE("Use MapViewLabel* instead of PMAPLABEL") = MapViewLabel*;

// sizeof() = 0x28
struct [[offsetcomments]] MapViewLine
{
/*0x00*/ MapViewLine*  pNext;
/*0x08*/ MapViewLine*  pPrev;
/*0x10*/ CVector3      Start;
/*0x1c*/ CVector3      End;
/*0x28*/ ARGBCOLOR     Color;
/*0x2c*/ int           Layer;                    // 0-3;
/*0x30*/
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

/*0x2b8*/ float              mapViewMinX;
/*0x2bc*/ float              mapViewMinY;
/*0x2c0*/ float              mapViewMaxX;
/*0x2c4*/ float              mapViewMaxY;
/*0x2c8*/ int                panOffsetX;
/*0x2cc*/ int                panOffsetY;
/*0x2d0*/ float              lineOffsetX;
/*0x2d4*/ float              lineOffsetY;
/*0x2d8*/ float              scaleDiffX;
/*0x2dc*/ float              scaleDiffY;
/*0x2e0*/ float              mapViewScaleX;
/*0x2e4*/ float              mapViewScaleY;
/*0x2e8*/ MapViewLine*       pLines;
/*0x2f0*/ MapViewLabel*      pLabels;
/*0x2f8*/ uint32_t           nextLabelId;
/*0x2fc*/ bool               lineActive;
/*0x300*/ CVector3           currentPoint;
/*0x30c*/ RGB                currentColor;
/*0x310*/ RGB                myColor;
/*0x314*/ RGB                groupColor;
/*0x318*/ RGB                findPathColor;
/*0x31c*/ bool               failedFindActive;
/*0x320*/ CVector3           failedFindPoint;
/*0x32c*/ int                failedFindType;
/*0x330*/ MapViewLine*       markedLines;
/*0x338*/ MapViewLabel*      markedLabel;
/*0x340*/ MapViewLabel*      selectedLabel;
/*0x348*/ int                layerFilter;              // bitmask of active layers
/*0x34c*/ int                activeLayer;
/*0x350*/ int                minZ;
/*0x354*/ int                maxZ;
/*0x358*/ bool               zFilterActive;
/*0x35c*/ float              zoom;
/*0x360*/ float              recalcZoom;
/*0x364*/ int                range;
/*0x368*/ bool               showGroup;
/*0x369*/ bool               showNames;
/*0x36a*/ bool               findAutoZoom;
/*0x36b*/ bool               showLabels;
/*0x36c*/ bool               recalcLabels;
/*0x36d*/ bool               canAddToMap;
/*0x370*/ EQZoneIndex        zoneId;
/*0x378*/ CXStr              customMapPath;
/*0x380*/

	// points to the eq instance of the virtual function table for this class
	static VirtualFunctionTable* sm_vftable;
};

// @sizeof(CMapViewWnd) == 0x828 :: 2022-04-15 (live) @ 0x14015793b
constexpr size_t CMapViewWnd_size = 0x828;

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
/*0x2bc*/ int         ZoneId;
/*0x2c0*/ bool        bAutoMapping;
/*0x2c8*/ CButtonWnd* btnPanLeft;
/*0x2d0*/ CButtonWnd* btnPanRight;
/*0x2d8*/ CButtonWnd* btnPanUp;
/*0x2e0*/ CButtonWnd* btnPanDown;
/*0x2e8*/ CButtonWnd* btnPanReset;
/*0x2f0*/ CButtonWnd* btnZoomIn;
/*0x2f8*/ CButtonWnd* btnZoomOut;
/*0x300*/ CButtonWnd* btnShowGroup;
/*0x308*/ CButtonWnd* btnShowNames;
/*0x310*/ CButtonWnd* btnFind;
/*0x318*/ CButtonWnd* btnEndFind;
/*0x320*/ CButtonWnd* btnFindAutoZoom;
/*0x328*/ CButtonWnd* btnMapZoneGuide;
/*0x330*/ CButtonWnd* btnToolbar;
/*0x338*/ char        szZoneName[0x80];
/*0x3b8*/ CButtonWnd* btntoggleLabels;
/*0x3c0*/ CEditWnd*   editMinZ;
/*0x3c8*/ CEditWnd*   editMaxZ;
/*0x3d0*/ CButtonWnd* btnZFilter;
/*0x3d8*/ CButtonWnd* btnLayer0;
/*0x3e0*/ CButtonWnd* btnLayer1;
/*0x3e8*/ CButtonWnd* btnLayer2;
/*0x3f0*/ CButtonWnd* btnLayer3;
/*0x3f8*/ CButtonWnd* btnLayer1Active;
/*0x400*/ CButtonWnd* btnLayer2Active;
/*0x408*/ CButtonWnd* btnLayer3Active;
/*0x410*/ CButtonWnd* btnLoadCurrent;
/*0x418*/ CPageWnd*   pageAtlas;
/*0x420*/ CPageWnd*   pageMap;
/*0x428*/ CTabWnd*    tabWnd;
/*0x430*/ CXWnd*      MapRenderArea;
/*0x438*/ CComboWnd*  MapsDirSelect;
/*0x440*/ CXWnd*      AtlasRenderArea;
/*0x448*/ CAtlas*     AtlasWnd;
/*0x450*/ CComboWnd*  AtlasDirSelect;
/*0x458*/ CButtonWnd* btnAtlasZoneGuide;
/*0x460*/ CButtonWnd* btnMapIcon;
/*0x468*/ CEditWnd*   editSearchBox;
/*0x470*/ CButtonWnd* btnSearch;
/*0x478*/ CButtonWnd* btnSearchClear;
/*0x480*/ CListWnd*   listSearch;
/*0x488*/ CXWnd*      wndSearchLayout;
/*0x490*/ CButtonWnd* btnSearchHide;
/*0x498*/ CXWnd*      wndSpacer;
/*0x4a0*/ bool        bEditing;
/*0x4a8*/ MapViewMap  MapView;                            // a window component owned by CMapViewWnd
/*0x828*/
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
/*0x08*/ int           Unknown;
/*0x0c*/

	ALT_MEMBER_GETTER_DEPRECATED(ItemClient*, pItem, pCont, "Use pItem instead of pCont");
};

// todo: finish mapping this and verify
class [[offsetcomments]] MerchantPageHandler : public VeBaseReferenceCount
{
public:
/*0x10*/ CMerchantWnd*   pParent;
/*0x18*/ int             MaxItems;
/*0x1c*/ int             LastIndex;
/*0x20*/ CListWnd*       ItemsList;
/*0x28*/ CPageWnd*       PurchasePage;
/*0x30*/ bool            bListNeedsRefresh;
/*0x38*/ SoeUtil::Array<CONTENTDATA> ItemContainer;
/*0x50*/ int             Unknown0x40;
/*0x54*/ int             Unknown0x44;
/*0x58*/ int             Unknown0x48;
/*0x5c*/ int             Unknown0x4c;
/*0x60*/ int             Unknown0x50;
/*0x64*/ int             Unknown0x54;
/*0x68*/ int             Unknown0x58;
/*0x6c*/ int             Unknown0x5c;
/*0x70*/ int             Unknown0x60;
/*0x74*/ int             Unknown0x64;
/*0x78*/ int             Unknown0x68;
/*0x7c*/ int             Unknown0x6c;
/*0x80*/ int             Unknown0x70;
/*0x84*/ int             Unknown0x74;
/*0x88*/ int             Unknown0x78;
/*0x8c*/ int             Unknown0x7c;
/*0x90*/ int             Unknown0x80;
/*0x94*/

	// offset comments indicate vtable offset
	/*0x08*/ EQLIB_OBJECT virtual void Unknownv0x08();
	/*0x0c*/ EQLIB_OBJECT virtual void Unknownv0x0c();
	/*0x10*/ EQLIB_OBJECT virtual void Unknownv0x10();
	/*0x14*/ EQLIB_OBJECT virtual void Unknownv0x14();
	/*0x18*/ EQLIB_OBJECT virtual void DestroyItemByUniqueId(int64_t UniqueID);
	/*0x1c*/ EQLIB_OBJECT virtual void DestroyItemByItemGuid(const EqItemGuid& ItemGuid);
	/*0x20*/ EQLIB_OBJECT virtual bool AddItemToArray(const ItemPtr& pSentItem);
	/*0x24*/ EQLIB_OBJECT virtual int Sort(SListWndSortInfo* SortInfo);
	/*0x28*/ EQLIB_OBJECT virtual void UpdateList();
	/*0x2c*/ EQLIB_OBJECT virtual int DisplayBuyOrSellPrice(const ItemPtr& pItem, bool bBuy) const;
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

// Size 0xa8 (0x7a331f) 2020-12-05
class [[offsetcomments]] PurchasePageHandler : public MerchantPageHandler
{
	FORCE_SYMBOLS;

public:
/*0x98*/ bool bShowAllItems;
/*0x9c*/ int Unknown0x88;
/*0xa0*/ int Unknown0x8c;
/*0xa4*/ int Unknown0x90;
/*0xa8*/ int Unknown0x94;
/*0xac*/ int Unknown0x98;
/*0xb0*/ int Unknown0x9c;
/*0xb4*/ int Unknown0xa0;
/*0xb8*/ int Unknown0xa4;
/*0xbc*/

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

// CMerchantWnd_size: 0x608 02-07-2022 test
class [[offsetcomments]] CMerchantWnd : public CSidlScreenWnd, public WndEventHandler, PopDialogHandler
{
	FORCE_SYMBOLS

public:
	using PageHandlerPtr = VePointer<MerchantPageHandler>;
	using PageHandlerArray = VeArray<PageHandlerPtr>;

/*0x2c4*/ uint32_t           NextRefreshTime;
/*0x2c8*/ bool               bInventoryWasActive;
/*0x2d0*/ PageHandlerArray   PageHandlers;
/*0x2e8*/ float              MerchantGreed;
/*0x2ec*/ ItemGlobalIndex    ItemLocation;
/*0x2f8*/ BYTE               Unknown0x254[0x8];
/*0x300*/ ItemPtr            pSelectedItem;
/*0x308*/ eqtime_t           MailExpireTime;
/*0x310*/ bool               bAutoRetrieveingMail;
/*0x318*/ char*              Labels[14];                   // unknown - adjusted to align the next members
/*0x388*/ CEditWnd*          SearchEdit;                   // MW_ItemNameInput
/*0x390*/ CButtonWnd*        SearchButton;                 // MW_SearchItem_Butto
/*0x398*/ CLabel*            MerchantNameLabel;
/*0x3a0*/ CLabel*            SelectedItemLabel;
/*0x3a8*/ CLabel*            SelectedPriceLabel;
/*0x3b0*/ CButtonWnd*        InspectButton;
/*0x3b8*/ CButtonWnd*        PreviewButton;
/*0x3c0*/ CButtonWnd*        SelectedItemButton;
/*0x3c8*/ CButtonWnd*        BuyButton;
/*0x3d0*/ CButtonWnd*        BuyMarketPlaceButton;
/*0x3d8*/ CButtonWnd*        SellButton;
/*0x3e0*/ CButtonWnd*        RecoverButton;
/*0x3e8*/ CButtonWnd*        RetrieveButton;
/*0x3f0*/ CButtonWnd*        RetrieveAllButton;
/*0x3f8*/ CButtonWnd*        SendButton;
/*0x400*/ CButtonWnd*        AdventureButton;
/*0x408*/ CLabel*            SendToLabel;
/*0x410*/ CEditWnd*          SendToEdit;
/*0x418*/ CLabel*            NoteLabel;
/*0x420*/ CEditWnd*          NoteEdit;
/*0x428*/ CButtonWnd*        ClearNoteButton;
/*0x430*/ CListWnd*          ItemsList;
/*0x438*/ CListWnd*          ItemsRecoveryList;
/*0x440*/ CListWnd*          ItemsMailList;
/*0x448*/ CButtonWnd*        DoneButton;
/*0x450*/ CPageWnd*          PurchasePage;
/*0x458*/ CPageWnd*          RecoveryPage;
/*0x460*/ CPageWnd*          MailPage;
/*0x468*/ CTabWnd*           TabWindow;
/*0x470*/ CButtonWnd*        UsableButton;
/*0x478*/ CLabel*            CurrentCurrencyLabel;
/*0x480*/ int                Unknown0x32c;
/*0x484*/ int                Unknown0x330;
/*0x488*/ int                Unknown0x334;
/*0x48c*/ int                Unknown0x338;
/*0x490*/ int                Unknown0x33C;
/*0x494*/ int                Guk_Currency;
/*0x498*/ uint8_t            Unknown0x340[0x100];
/*0x598*/

	CMerchantWnd(CXWnd*);
	virtual ~CMerchantWnd();

	EQLIB_OBJECT void AddContainerToMercArray(EQ_Container*);
	EQLIB_OBJECT void AddEquipmentToMercArray(EQ_Equipment*);
	EQLIB_OBJECT void AddNoteToMercArray(EQ_Note*);
	EQLIB_OBJECT void ClearMerchantSlot(int);
	EQLIB_OBJECT void FinishBuyingItem(sell_msg*);
	EQLIB_OBJECT void FinishSellingItem(sell_msg*);
	EQLIB_OBJECT int SelectBuySellSlot(const ItemGlobalIndex&, int ListIndex = -1);
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

// @sizeof(CPetInfoWnd) == 0xcc0 :: 2022-04-15 (live) @ 0x1401573DC
constexpr size_t CPetInfoWnd_size = 0xcc0;

class [[offsetcomments]] CPetInfoWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
	CPetInfoWnd(CXWnd*);
	virtual ~CPetInfoWnd();

	EQLIB_OBJECT CButtonWnd* GetButton(int);
	EQLIB_OBJECT void SetShowOnSummon(bool);
	EQLIB_OBJECT void Update();

	inline int GetMaxBuffs() const { return MAX_TOTAL_BUFFS; }

	//----------------------------------------------------------------------------
	// data members

/*0x2bc*/ uint32_t           LastUpdateTime;
/*0x2c0*/ CCheckBoxWnd*      pButton[MAX_PET_BUTTONS];
/*0x330*/ CXWnd*             pWndBuffs;                         // BuffWindow
/*0x338*/ CTextureAnimation* pGoodBuffBackground;               // PetBlueIconBackground
/*0x340*/ CTextureAnimation* pBadBuffBackground;                // PetRedIconBackground
/*0x348*/ CTextureAnimation* pBypassBuffBackground;             // YellowIconBackground
/*0x350*/ CTextureAnimation* pBuffIcons[MAX_TOTAL_BUFFS];
/*0x658*/ CButtonWnd*        pPetBuffBtns[MAX_TOTAL_BUFFS];     // PetBuff%d - was pWnd
/*0x960*/ int                Buff[MAX_TOTAL_BUFFS];             // Spell ID# of each buff
/*0xae8*/ HashTable<CXStr>   WhoCast;
/*0xb00*/ uint32_t           LastBuffDecTime;                   // last time buff counters were decremented
/*0xb04*/ bool               bHadPetLastTime;
/*0xb05*/ bool               bShowOnSummon;
/*0xb08*/ uint32_t           ListContextMenuID;
/*0xb10*/ CXWnd*             pRequestingWnd;
/*0xb18*/ unsigned int       PetBuffTimer[MAX_TOTAL_BUFFS];     // duration until buff fades, in milliseconds
/*0xc9c*/ bool               bRemovedBuffBlockMenuItem;
/*0xca0*/ int                PetCommandSelectContextMenu;
/*0xca8*/ CXWnd*             LastClickedButton;
/*0xcb0*/ bool               bPetButtonsDirty;
/*0xcb1*/ bool               Sit;
/*0xcb2*/ bool               Stop;
/*0xcb3*/ bool               ReGroup;
/*0xcb4*/ bool               Follow;
/*0xcb5*/ bool               Guard;
/*0xcb6*/ bool               Taunt;
/*0xcb7*/ bool               Hold;
/*0xcb8*/ bool               GHold;
/*0xcb9*/ bool               Focus;
/*0xcbc*/
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

// size: 0x400
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
/*0x2c0*/ CGaugeWnd*         pPlayerHP;                         // PlayerHP
/*0x2c8*/ CGaugeWnd*         pPetHP;                            // PetHP
/*0x2d0*/ CGaugeWnd*         pPlayerMana;                       // PlayerMana
/*0x2d8*/ CGaugeWnd*         pPlayerEndurance;                  // PlayerFatigue
/*0x2e0*/ CLabel*            pPlayerHPLbl;                      // HPLabel
/*0x2e8*/ CLabel*            pPlayerManaLbl;                    // ManaLabel
/*0x2f0*/ CLabel*            pPlayerEnduranceLbl;               // FatigueLabel
/*0x2f8*/ CLabel*            pPlayerHPPercentLbl;               // HPPerLabel
/*0x300*/ CLabel*            pPlayerManaPercentLbl;             // ManaPercLabel
/*0x308*/ CLabel*            pPlayerEndurancePercentLbl;        // FatiguePercLabel
/*0x310*/ COLORREF           HPTextColor;
/*0x318*/ CButtonWnd*        pGroupRoleTankBtn;                 // GroupRoleTank
/*0x320*/ CButtonWnd*        pGroupRoleAssistBtn;               // GroupRoleAssist
/*0x328*/ CButtonWnd*        pGroupRolePullerBtn;               // GroupRolePuller
/*0x330*/ CButtonWnd*        pGroupRoleMarkNPCBtn;              // GroupRoleMarkNPC
/*0x338*/ CGaugeWnd*         pCombatTimerGauge;                 // Player_CombatTimer
/*0x340*/ CLabel*            pCombatTimerLbl;                   // Player_CombatTimerLabel
/*0x348*/ CButtonWnd*        pNewMailIconBtn;                   // PW_NewMailIcon
/*0x350*/ CButtonWnd*        pParcelsIconBtn;                   // PW_ParcelsIcon
/*0x358*/ CButtonWnd*        pParcelsOverLimitIconBtn;          // PW_ParcelsOverLimitIcon
/*0x360*/ CLabel*            pAggroPctPlayerLbl;                // PW_AggroPctPlayerLabel
/*0x368*/ CLabel*            pAggroPctSecondaryLbl;             // PW_AggroPctSecondaryLabel
/*0x370*/ CLabel*            pAggroNameSecondaryLbl;            // PW_AggroNameSecondaryLabel
/*0x378*/ bool               bDrawAutoAttackRect;
/*0x37c*/ int                LastUpdateTimer;
/*0x380*/ int                LastFrameTimer;
/*0x388*/ CStaticAnimationTemplate* pAttackIndicatorAnimTop;    // A_AttackIndicatorAnimTop
/*0x390*/ CStaticAnimationTemplate* pAttackIndicatorAnimBottom; // A_AttackIndicatorAnimBottom
/*0x398*/ CStaticAnimationTemplate* pAttackIndicatorAnimLeft;   // A_AttackIndicatorAnimLeft
/*0x3a0*/ CStaticAnimationTemplate* pAttackIndicatorAnimRight;  // A_AttackIndicatorAnimRight
/*0x3a8*/ CStaticAnimationTemplate* pAttackIndicatorAnimFill;   // A_AttackIndicatorAnimFill
/*0x3b0*/ CButtonWnd*        pCombatStateAnimButton;            // PW_CombatStateAnim
/*0x3b8*/ int                AttackIndicatorPulseValue;
/*0x3c0*/ CContextMenu*      pContextMenu;
/*0x3c8*/ uint32_t           Unknowns[9];
/*0x3ec*/ ECombatState       CombatState;                       // right above "A_PWCSInCombat"
/*0x3f0*/
};

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
/*0x2c4*/ int                 Unknown0x008;
/*0x2c8*/ int                 NumItems;
/*0x2cc*/ bool                HdrItemName;
/*0x2cd*/ bool                HdrTheme;
/*0x2ce*/ bool                HdrPrice;
/*0x2cf*/ char                OriginalPointsLabel[0x40];
/*0x310*/ CLabel*             MerchantNameLabel;
/*0x318*/ CListWnd*           ItemList;
/*0x320*/ CListWnd*           PointList;
/*0x328*/ CButtonWnd*         EquipButton;
/*0x330*/ CButtonWnd*         PurchaseButton;
/*0x338*/ CButtonWnd*         SellButton;
/*0x340*/ CButtonWnd*         DoneButton;
/*0x348*/ CLabel*             PointsAvailableValue;
/*0x350*/ CLabel*             PointsEverEarnedLabel;
/*0x358*/ CLabel*             PointsAvailableLabel;
/*0x360*/ unsigned int        NextRefreshTime;
/*0x368*/ PlayerClient*       ActiveMerchant;
/*0x370*/ PointMerchantItem** Items;
/*0x378*/ int                 MerchantThemeId;
/*0x37c*/ int                 CurrentSelection;
/*0x380*/ int                 CurrentSort;
/*0x384*/ bool                bCurrentAscending;
/*0x388*/ ItemGlobalIndex     ItemLocation;
/*0x398*/ ItemPtr             pSelectedItem;
/*0x3a0*/ bool                bInventoryWasActive;
/*0x3a4*/ int                 CurrentItem;
/*0x3a8*/ int                 CurrentQuantity;
/*0x3ac*/ int                 SliderType;
/*0x3b0*/ PointMerchantInterface* pHandler;
/*0x3b8*/
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

/*0x2cc*/ uint8_t            Unknown0x244[0x154];
/*0x420*/ COLORREF           ClassColors[0x10];
/*0x460*/ uint8_t            Unknown0x330[0x80];
/*0x4e0*/
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

/*0x2c8*/ CPopDialogWnd* m_currentPopup;
/*0x2d0*/ int            LeftPageNbr;
/*0x2d4*/ int            SelectedBookIndex;
/*0x2d8*/ int            MemSlotIndex;
/*0x2dc*/ int            SpellId;
/*0x2e0*/ int            MemTicksLeft;
/*0x2e4*/ int            ScribeBookSlot;
/*0x2e8*/ int            ScribeTicksLeft;
/*0x2ec*/
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

class [[offsetcomments]] CSpellDisplayWnd : public CSidlScreenWnd
{
	FORCE_SYMBOLS

public:
	CSpellDisplayWnd(CXWnd* parent, ESpellDisplayType displayType);
	virtual ~CSpellDisplayWnd();

	EQLIB_OBJECT void SetSpell(int SpellID, bool HasSpellDescr, int);
	EQLIB_OBJECT void UpdateStrings();

/*0x2b8*/ int                WindowID;
/*0x2c0*/ CLabelWnd*         pDuration;
/*0x2c8*/ CStmlWnd*          pDescription;
/*0x2d0*/ CStmlWnd*          pName;
/*0x2d8*/ CButtonWnd*        pIcon;
/*0x2e0*/ SoeUtil::String    DescriptionText;
/*0x2f8*/ SoeUtil::String    TitleText;
/*0x310*/ bool               bActiveItem;
/*0x318*/ CTextureAnimation* ptaBuffIcons;
/*0x320*/ CTextureAnimation* ptaDragIcons;
/*0x328*/ bool               bFailed;
/*0x32c*/ ESpellDisplayType  SpellDisplayType;
/*0x330*/ int                SpellID;
/*0x334*/ int                LastUpdateTime;
/*0x338*/
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

/*0x340*/ int                MouseButtonState;
/*0x344*/ bool               bChecked;
/*0x348*/ unsigned int       LastRefresh;
/*0x34c*/ D3DCOLOR           SpellGemTintArray[11];
/*0x378*/ int                SpellGemAlphaArray[11];
/*0x3a4*/ int                Unknown0x02f4;
/*0x3a8*/ int                Unknown0x02f8;
/*0x3ac*/ int                SpellIconOffsetX;
/*0x3b0*/ int                SpellIconOffsetY;
/*0x3b4*/ int                spellicon;                // if this is equal to FFFFFFFF there is no spell memmed in this slot...
/*0x3b8*/ int                spellstate;               // 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast, should really rename this to tintstage
/*0x3bc*/ int                TintIndex;
/*0x3c0*/ CTextureAnimation* SpellIconTexture;         // CTextureAnimation
/*0x3c8*/ CTextureAnimation* CustomIconTexture;        // CTextureAnimation
/*0x3d0*/ int                SpellSlot;
/*0x3d4*/ int                Percent;
/*0x3d8*/ CSpellGemDrawTemplate DrawTemplate;
/*0x3f8*/
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

	inline int GetMaxBuffs() const { return MAX_TOTAL_BUFFS; }

	//----------------------------------------------------------------------------
	// data members

/*0x2c0*/ CXWnd*             pWndBuffs;
/*0x2c8*/ CTextureAnimation* pBuffGoodBackground;
/*0x2d0*/ CTextureAnimation* pBuffBadBackground;
/*0x2d8*/ CTextureAnimation* pBuffBypassBackground;
/*0x2e0*/ CTextureAnimation* ptaBuffIcons[MAX_TOTAL_BUFFS];
/*0x5e8*/ CButtonWnd*        pTargetBuff[MAX_TOTAL_BUFFS];
/*0x8f0*/ int                BuffSpellID[MAX_TOTAL_BUFFS]; // -1 if no buff
/*0xa74*/ int                BuffTimer[MAX_TOTAL_BUFFS];
/*0xbf8*/ int                LastBuffReceivedTime;
/*0xbfc*/ int                Timer;
/*0xc00*/ HashTable<CXStr>   Casters;
/*0xc18*/ int                ContextMenuID;
/*0xc20*/ CXWnd*             RequestingWnd;
/*0xc28*/ bool               bRemovedBuffBlockMenuItem;
/*0xc2c*/ int                Type;                     // 1 = self, 4 = group member, 5 = PC, 7 = NPC
/*0xc30*/ uint8_t            Unknown0x884[0x4c];
/*0xc7c*/
};

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

/*0x2bc*/ int          m_minLength;
/*0x2c0*/ int          m_maxLength;
/*0x2c8*/ CXStr        m_text;
/*0x2d0*/ CXWnd*       m_parent;
/*0x2d8*/ CEditWnd*    m_entry;
/*0x2e0*/ CLabel*      m_prompt;
/*0x2e8*/ CButtonWnd*  m_ok;
/*0x2f0*/ CButtonWnd*  m_cancel;
/*0x2f8*/
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
/*0x2b8*/ DWORD        Unknown0x148[0x1b];
/*0x328*/ TradeskillRecipe* SearchResults[0x64];
/*0x648*/ DWORD        Unknown0x344;
/*0x64c*/ DWORD        Unknown0x348;
/*0x650*/ DWORD        Unknown0x34c;
/*0x658*/ ItemPtr      Container;
/*0x660*/ DWORD        Unknown0x354;
/*0x668*/ TradeskillRecipe* SelectedRecipe;
/*0x670*/ DWORD        Unknown0x35c;
/*0x674*/ DWORD        SkillLevel;
/*0x678*/ DWORD        Unknown0x364;
/*0x67c*/ DWORD        Unknown0x368;
/*0x680*/ BYTE         Unknown0x36c[0x58];
/*0x6d8*/ DWORD        Unknown0x3c4;
/*0x6dc*/ DWORD        Unknown0x3c8;
/*0x6e0*/ BYTE         Unknonw0x3cc[0x8];
/*0x6e8*/ DWORD        Unknown0x3d4;
/*0x6ec*/ DWORD        Unknown0x3d8;
/*0x6f0*/
};

inline namespace deprecated {
	using EQTRADESKILLWINDOW DEPRECATE("Use CTradeSkillWnd instead of EQTRADESKILLWINDOW") = CTradeSkillWnd;
	using PEQTRADESKILLWINDOW DEPRECATE("Use CTradeSkillWnd* instead of PEQTRADESKILLWINDOW") = CTradeSkillWnd*;
}

//============================================================================
// CTradeWnd
//============================================================================

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

/*0x2bc*/ unsigned int       NextRefreshTime;
/*0x2c0*/ bool               bInventoryWasOpen;
/*0x2c8*/ CButtonWnd*        HisMoneyButton[4];
/*0x2e8*/ CButtonWnd*        MyMoneyButton[4];
/*0x308*/ CButtonWnd*        TradeButton;
/*0x310*/ CButtonWnd*        CancelButton;
/*0x318*/ CLabel*            HisNameLabel;
/*0x320*/ CLabel*            MyNameLabel;
/*0x328*/ CInvSlotWnd*       pInvSlotWnd[MAX_TRADE_SLOTS];
/*0x3a8*/ long               HisMoney[4];
/*0x3b8*/ long               MyMoney[4];
/*0x3c8*/ ItemContainer      TradeItems;
/*0x3f0*/ bool               bHisReadyTrade;           // was HisTradeReady
/*0x3f1*/ bool               bMyReadyTrade;            // was MyTradeReady
/*0x3f2*/ bool               bIsTrading;               // was TradeWndOpen
/*0x3f4*/

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
/*0x10*/
};

class [[offsetcomments]] ZoneGuideZoneType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                id;
/*0x04*/ int                displaySequence;
/*0x08*/ CXStr              name;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideTransferType
{
	FORCE_SYMBOLS;

public:
/*0x00*/ int                id;
/*0x08*/ CXStr              description;
/*0x10*/
};

class [[offsetcomments]] ZoneGuideZone
{
	FORCE_SYMBOLS;

public:
/*0x00*/ EQZoneIndex   zoneId;
/*0x08*/ CXStr         name;
/*0x10*/ int           continentIndex;
/*0x14*/ int           minLevel;
/*0x18*/ int           maxLevel;
/*0x20*/ DynamicBitField<unsigned short, short> types;
/*0x30*/ ArrayClass<ZoneGuideConnection> zoneConnections;
/*0x48*/
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

/*0x0008*/ ZoneGuideZone                     zones[ZONE_COUNT];
/*0xef60*/ ArrayClass<ZoneGuideContinent>    continents;
/*0xef78*/ ArrayClass<ZoneGuideZoneType>     zoneTypes;
/*0xef90*/ ArrayClass<ZoneGuideTransferType> transferTypes;
/*0xefa8*/

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

class [[offsetcomments]] ZoneGuideManagerClient : public ZoneGuideManagerBase
{
	FORCE_SYMBOLS;

public:
/*0xefa8*/ ZonePathArray     activePath;
/*0xefc0*/ ZonePathArray     previewPath;
/*0xefd8*/ EQZoneIndex       currentZone;
/*0xefdc*/ int               heroesJourneyIndex;
/*0xefe0*/ bool              zoneGuideDataSet;
/*0xefe1*/ bool              includeBindZoneInPath;
/*0xefe2*/ bool              autoFindActivePath;
/*0xefe3*/ bool              findActivePath;
/*0xefe4*/

	EQLIB_OBJECT static ZoneGuideManagerClient& Instance();
};

class [[offsetcomments]] CZoneGuideWnd : public CSidlScreenWnd, public WndEventHandler
{
	FORCE_SYMBOLS

public:
/*0x2c0*/ CVerticalLayoutWnd*     VerticalLayout;
/*0x2c8*/ CButtonWnd*             FilterMyLevelButton;
/*0x2d0*/ CButtonWnd*             FilterAllLevelsButton;
/*0x2d8*/ CButtonWnd*             FilterZonesActiveButton;
/*0x2e0*/ CButtonWnd*             FilterZonesInactiveButton;
/*0x2e8*/ CButtonWnd*             ZoneRunSearchButton;
/*0x2f0*/ CButtonWnd*             ZoneClearSearchButton;
/*0x2f8*/ CButtonWnd*             SelectCurrentZoneButton;
/*0x300*/ CEditWnd*               LevelFilterEdit;
/*0x308*/ CEditWnd*               ZoneSearchEdit;
/*0x310*/ CComboWnd*              TypeFilterCombo;
/*0x318*/ CComboWnd*              ContinentFilterCombo;
/*0x320*/ CListWnd*               ZonesList;
/*0x328*/ CLabelWnd*              ViewZoneConnectionsSelectedZoneLabel;
/*0x330*/ CLabelWnd*              ViewZoneConnectionsPreviewPathLabel;
/*0x338*/ CLabelWnd*              ViewZoneConnectionsActivePathLabel;
/*0x340*/ CLabelWnd*              ViewZoneConnectionsDisabledLabel;
/*0x348*/ CButtonWnd*             ViewZoneConnectionsSelectedZoneButton;
/*0x350*/ CButtonWnd*             ViewZoneConnectionsPreviewPathButton;
/*0x358*/ CButtonWnd*             ViewZoneConnectionsActivePathButton;
/*0x360*/ CButtonWnd*             ViewZoneConnectionsDisabledButton;
/*0x368*/ CButtonWnd*             DisableConnectionTemplateButton;
/*0x370*/ CListWnd*               ZoneConnectionsList;
/*0x378*/ CButtonWnd*             ResetPathStartZoneButton;
/*0x380*/ CButtonWnd*             SetPathStartZoneButton;
/*0x388*/ CButtonWnd*             SetPathEndZoneButton;
/*0x390*/ CButtonWnd*             ShowPathWndButton;
/*0x398*/ CButtonWnd*             HidePathWndButton;
/*0x3a0*/ CButtonWnd*             FindPathButton;
/*0x3a8*/ CButtonWnd*             EndFindButton;
/*0x3b0*/ CButtonWnd*             ClearPathWndButton;
/*0x3b8*/ CButtonWnd*             ActivatePathButton;
/*0x3c0*/ CButtonWnd*             IncludeBindZoneInPathGenerationButton;
/*0x3c8*/ CButtonWnd*             ShowPathWndOnPathActivationButton;
/*0x3d0*/ CButtonWnd*             AutoFindActivePathButton;
/*0x3d8*/ CEditWnd*               PathStartZoneEdit;
/*0x3e0*/ CEditWnd*               PathEndZoneEdit;
/*0x3e8*/ uint32_t                NextButtonRefreshTime;
/*0x3ec*/ EQZoneIndex             CurrentZone;
/*0x3f0*/ bool                    bFilterActive;
/*0x3f4*/ int                     FilterLevel;
/*0x3f8*/ int                     FilterContinentIndex;
/*0x3fc*/ int                     FilterZoneTypeIndex;
/*0x400*/ bool                    bSelectCurrentZone;
/*0x408*/ CXStr                   ZoneSearchString;
/*0x410*/ eZoneGuideConnectionsView eCurrConnectionsView;
/*0x414*/ EQZoneIndex             CurrConnectionsViewSelectedZone;
/*0x418*/ bool                    bCurrentConnectionsViewPreviewPathChanged;
/*0x419*/ bool                    bCurrentConnectionsViewActivePathChanged;
/*0x41a*/ bool                    bSetPathStartZoneToCurrentZone;
/*0x41c*/ EQZoneIndex             StartZone;
/*0x420*/ EQZoneIndex             EndZone;
/*0x424*/ bool                    bZoneGuideDataChanged;
/*0x425*/ bool                    bZoneListChanged;
/*0x426*/ bool                    bZoneConnectionsListChanged;
/*0x427*/ bool                    bPathStartZoneChanged;
/*0x428*/ int                     RightClickMenuID;
/*0x42c*/
};

class [[offsetcomments]] CZonePathWnd : public CSidlScreenWnd, public WndEventHandler
{
public:
/*0x2bc*/ EQZoneIndex             currentZone;
/*0x2c0*/ bool                    zonePathDirty;
/*0x2c8*/ CListWnd*               listZones;
/*0x2d0*/
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

/*0x008*/ EStaticScreenPieceClasses              ScreenPieceClassIndex[StaticScreenPieceMax];
/*0x020*/ ArrayClass<CUITextureInfo*>            Textures;
/*0x038*/ ArrayClass<CButtonDrawTemplate*>       ButtonDrawTemplateArray;
/*0x050*/ ArrayClass<CScrollbarTemplate*>        ScrollbarTemplateArray;
/*0x068*/ ArrayClass<CSliderDrawTemplate*>       SliderDrawTemplateArray;
/*0x080*/ ArrayClass<CXStr>                      ScreenNameArray;
/*0x098*/ ArrayClass<CXWndDrawTemplate*>         DrawTemplateArray;
/*0x0b0*/ CHashCXStrInt32                        DrawTemplateHash;
/*0x0d0*/ ArrayClass<CTextureAnimation*>         AnimationArray;
/*0x0e8*/ CHashCXStrInt32                        AnimationsHash;
/*0x108*/ ArrayClass<CTAFrameDraw*>              TAFrameArray;
/*0x120*/ CHashCXStrInt32                        TAFrameHash;
/*0x140*/ ArrayClass<CScreenPieceTemplate*>      ScreenPieceArray;
/*0x158*/ CHashCXStrInt32                        ScreenPiecesHash;
/*0x178*/ ArrayClass<CLayoutStrategyTemplate*>   LayoutStrategyTemplateArray;
/*0x190*/ CHashCXStrInt32                        LayoutStrategyTemplatesHash;
/*0x1b0*/ CXMLParamManager                       XMLDataMgr;
/*0x288*/ bool                                   bLoadError;
/*0x290*/ CXStr                                  ErrorString;
/*0x298*/
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

	virtual CascadeItemCommand* GetAsCommand() { return nullptr; }

protected:
/*0x08*/ Type m_type;
/*0x0c*/ bool m_changed = true;
/*0x10*/
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
/*0x10*/ int m_icon = -1;
/*0x18*/ CXStr m_text;
/*0x20*/ CascadeItemArray* m_items = nullptr;
/*0x28*/
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
/*0x10*/ int m_icon = -1;
/*0x18*/ CXStr m_text;
/*0x20*/
};

// A menu item that executes a command
class [[offsetcomments]] CascadeItemCommand : public CascadeItemCommandBase
{
public:
	CascadeItemCommand(int icon, const char* text, int command);

	virtual void ExecuteCommand() override;
	virtual CXStr GetTooltip() const override { return m_text; }

private:
/*0x20*/ int m_command = -1;
/*0x24*/
};

//----------------------------------------------------------------------------

// This is the frame the holds the EQ and store buttons
class [[offsetcomments]] CEQMainWnd : public CSidlScreenWnd
{
public:
	CEQMainWnd(CXWnd* pParent);
	virtual ~CEQMainWnd();

	virtual void UpdateCascadeMenuItems() {}

/*0x2b8*/ CButtonWnd*       EQButtonWnd;
/*0x2c0*/ CButtonWnd*       SCButtonWnd;
/*0x2c8*/ CButtonWnd*       FlashSaleButtonWnd;
/*0x2d0*/ CascadeItemArray* CascadeMenuItems;
/*0x2d8*/ int               MenuId;
/*0x2dc*/
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
