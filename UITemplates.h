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
#include "UITextures.h"

// For the most part, these follow the structure of the CParams, only some objects
// are resolved.

using D3DCOLOR = DWORD;

namespace eqlib {

//============================================================================
// CButtonDrawTemplate
//============================================================================

class [[offsetcomments]] CButtonDrawTemplate
{
	FORCE_SYMBOLS;

public:
	// Returns the appropriate texture to use for the button given the specified properties
	EQLIB_OBJECT CTextureAnimation* GetAnimation(bool pressed, bool hover, bool disabled, bool decal = false) const;
	EQLIB_OBJECT CXSize GetSize() const;

/*0x00*/ CXStr                    strName;
/*0x04*/ CTextureAnimation*       ptaNormal = nullptr;
/*0x08*/ CTextureAnimation*       ptaPressed = nullptr;
/*0x0c*/ CTextureAnimation*       ptaFlyby = nullptr;
/*0x10*/ CTextureAnimation*       ptaDisabled = nullptr;
/*0x14*/ CTextureAnimation*       ptaPressedFlyby = nullptr;
/*0x18*/ CTextureAnimation*       ptaPressedDisabled = nullptr;
/*0x1c*/ CTextureAnimation*       ptaNormalDecal = nullptr;
/*0x20*/ CTextureAnimation*       ptaPressedDecal = nullptr;
/*0x24*/ CTextureAnimation*       ptaFlybyDecal = nullptr;
/*0x28*/ CTextureAnimation*       ptaDisabledDecal = nullptr;
/*0x2c*/ CTextureAnimation*       ptaPressedFlybyDecal = nullptr;
/*0x30*/ CTextureAnimation*       ptaPressedDisabledDecal = nullptr;
/*0x34*/
};

//============================================================================
// CGaugeDrawTemplate
//============================================================================

class [[offsetcomments]] CGaugeDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x04*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x08*/ CTextureAnimation*       ptaFill = nullptr;
/*0x0c*/ CTextureAnimation*       ptaLines = nullptr;
/*0x10*/ CTextureAnimation*       ptaLinesFill = nullptr;
/*0x14*/ CTextureAnimation*       ptaEndCapLeft = nullptr;
/*0x18*/ CTextureAnimation*       ptaEndCapRight = nullptr;
/*0x1c*/
};

//============================================================================
// CGaugeDrawTemplate
//============================================================================

class [[offsetcomments]] CSpellGemDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x04*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x08*/ CTextureAnimation*       ptaHolder = nullptr;
/*0x0c*/ CTextureAnimation*       ptaHighlight = nullptr;
/*0x10*/
};


//============================================================================
// CSliderDrawTemplate
//============================================================================

class [[offsetcomments]] CSliderDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x04*/ CButtonDrawTemplate      bdtThumb;
/*0x38*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x3c*/ CTextureAnimation*       ptaEndCapRight = nullptr;
/*0x40*/ CTextureAnimation*       ptaEndCapLeft = nullptr;
/*0x44*/
};

//============================================================================
// CScrollbarTemplate
//============================================================================

// not ScrollbarDrawTemplate ??
class [[offsetcomments]] CScrollbarTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                       strName;

/*0x04*/ CButtonDrawTemplate         bdtUp;
/*0x38*/ CButtonDrawTemplate         bdtDown;
/*0x6c*/ CTAFrameDraw                frameThumb;
/*0xb8*/ CUITextureInfo              tiMiddle;
/*0xd0*/ D3DCOLOR                    colorMiddleTint = 0;
/*0xd4*/
};

//============================================================================
// CXWndDrawTemplate
//============================================================================

enum XWndBackgroundType
{
	eNormal = 1,
	eNoTexture = 2
};
EQLIB_OBJECT const char* XWndBackgroundTypeToString(XWndBackgroundType);

enum XWndBackgroundDrawType
{
	eDrawTile = 0,
	eDrawNormal,
	eDrawStretch,
	eDrawCentered,
	eDrawCenteredVertical,
	eDrawCenteredHorizontal,
};

EQLIB_OBJECT const char* XWndBackgroundDrawTypeToString(XWndBackgroundDrawType);

class [[offsetcomments]] CXWndDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x000*/ CXStr                       strName;

/*0x004*/ CUITextureInfo              tiBackground;
/*0x01c*/ int                         nBackgroundDrawType = eDrawTile;
/*0x020*/ CScrollbarTemplate          sbtVScroll;
/*0x0f4*/ CScrollbarTemplate          sbtHScroll;
/*0x1c8*/ CButtonDrawTemplate         bdtCloseBox;
/*0x1fc*/ CButtonDrawTemplate         bdtQMarkBox;
/*0x230*/ CButtonDrawTemplate         bdtMinimizeBox;
/*0x264*/ CButtonDrawTemplate         bdtMaximizeBox;
/*0x298*/ CButtonDrawTemplate         bdtTileBox;
/*0x2cc*/ CTAFrameDraw                frameBorder;
/*0x318*/ CTAFrameDraw                frameTitlebar;
/*0x364*/
};

//============================================================================
// CScreenPieceTemplate
//============================================================================

class [[offsetcomments]] CScreenPieceTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CScreenPieceTemplate(CScreenPieceTemplate*);
	EQLIB_OBJECT CScreenPieceTemplate(CParamScreenPiece*);
	EQLIB_OBJECT CScreenPieceTemplate();
	EQLIB_OBJECT virtual ~CScreenPieceTemplate() {}

	EQLIB_OBJECT void DeclareType(uint32_t type);
	EQLIB_OBJECT bool IsType(uint32_t type) const;
	EQLIB_OBJECT uint32_t GetUltimateType() const;

/*0x04*/ ArrayClass2<uint32_t> arRuntimeTypes;
/*0x20*/ CXStr               strName;
/*0x24*/ uint32_t            uParamObjectId = 0;
/*0x28*/ CXStr               strScreenId;
/*0x2c*/ uint32_t            nFont = 0;
/*0x30*/ bool                bRelativePosition = true;
/*0x31*/ bool                bAutoStretchVertical = false;
/*0x32*/ bool                bAutoStretchHorizontal = false;
/*0x33*/ bool                bTopAnchorToTop = true;
/*0x34*/ bool                bBottomAnchorToTop = true;
/*0x35*/ bool                bLeftAnchorToLeft = true;
/*0x36*/ bool                bRightAnchorToLeft = true;
/*0x38*/ int                 nTopOffset = 0;
/*0x3c*/ int                 nBottomOffset = 0;
/*0x40*/ int                 nLeftOffset = 0;
/*0x44*/ int                 nRightOffset = 0;
/*0x48*/ int                 nMinVSize = 0;
/*0x4c*/ int                 nMinHSize = 0;
/*0x50*/ int                 nMaxVSize = 0;
/*0x54*/ int                 nMaxHSize = 0;
/*0x58*/ CXRect              rect;
/*0x68*/ CXStr               strText;
/*0x6c*/ D3DCOLOR            colorText = 0;
/*0x70*/ D3DCOLOR            colorDisabled = 0;
/*0x74*/ D3DCOLOR            colorEnabled = 0;
/*0x78*/ bool                bUseInLayoutHorizontal = true;
/*0x79*/ bool                bUseInLayoutVertical = true;
/*0x7c*/ D3DCOLOR            colorBackgroundTextureTint = 0;
/*0x80*/

	D3DCOLOR get_colorDisabledBackgroundTextureTint() const { return 0; }
	void put_colorDisabledBackgroundTextureTint(D3DCOLOR) {}
	__declspec(property(get = get_colorDisabledBackgroundTextureTint, put = put_colorDisabledBackgroundTextureTint))
		D3DCOLOR colorDisabledBackgroundTextureTint;
};

//============================================================================
// CStaticScreenPieceTemplate
//============================================================================

class [[offsetcomments]] CStaticScreenPieceTemplate : public CScreenPieceTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CStaticScreenPieceTemplate(CStaticScreenPieceTemplate*);
	EQLIB_OBJECT CStaticScreenPieceTemplate(CParamStaticScreenPiece*);

/*0x80*/ bool                     bAutoDraw = true;
/*0x84*/
};

//============================================================================
// CLayoutStrategyTemplate
//============================================================================

class CParamLayoutStrategy;

class [[offsetcomments]] CLayoutStrategyTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CLayoutStrategyTemplate(CParamLayoutStrategy*, uint32_t type);
	virtual ~CLayoutStrategyTemplate() {}

/*0x04*/ int                      nPadding = 0;
/*0x08*/ uint32_t                 nType = 0;
/*0x0c*/ CXStr                    strName;
/*0x10*/ bool                     bResizeHorizontal = false;
/*0x11*/ bool                     bResizeVertical = false;
/*0x14*/
};

//============================================================================
// CControlTemplate
//============================================================================

// Flags for use with CControlTemplate::uStyleBits
constexpr int WSF_VSCROLL         = 0x00000001;
constexpr int WSF_HSCROLL         = 0x00000002;
constexpr int WSF_TITLEBAR        = 0x00000004;
constexpr int WSF_CLOSEBOX        = 0x00000008;
constexpr int WSF_MINIMIZEBOX     = 0x00000020;
constexpr int WSF_BORDER          = 0x00000040;
constexpr int WSF_RELATIVERECT    = 0x00000080;
constexpr int WSF_AUTOSTRETCHV    = 0x00000100;
constexpr int WSF_SIZABLE         = 0x00000200;
constexpr int WSF_TRANSPARENT     = 0x00000400;
constexpr int WSF_USEMYALPHA      = 0x00000800;
constexpr int WSF_NOHITTEST       = 0x00008000;
constexpr int WSF_MAXIMIZEBOX     = 0x00040000;
constexpr int WSF_CLIENTMOVABLE   = 0x00200000;
constexpr int WSF_AUTOSTRETCHH    = 0x00400000;

class [[offsetcomments]] CControlTemplate : public CScreenPieceTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CControlTemplate(CParamControl*);
	EQLIB_OBJECT CControlTemplate();

/*0x80*/ uint32_t                 uStyleBits = 0;
/*0x84*/ uint8_t                  bSizableMask = 0;
/*0x85*/ bool                     bEscapable = true;
/*0x88*/ CXStr                    strTooltip;
/*0x8c*/ CXWndDrawTemplate*       pDrawTemplate = nullptr;
/*0x90*/ CXStr                    strController;
/*0x94*/ CLayoutStrategyTemplate* pLayoutStrategyTemplate = nullptr;
/*0x98*/
};

//============================================================================
// CButtonTemplate
//============================================================================

class [[offsetcomments]] CButtonTemplate : public CControlTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CButtonTemplate(CParamButton*);

/*0x98*/ bool                     bCheckbox = false;
/*0x9c*/ CXStr                    strRadioGroup;
/*0xa0*/ CXStr                    strText;
/*0xa4*/ bool                     bTextAlignCenter = true;
/*0xa5*/ bool                     bTextAlignRight = false;
/*0xa6*/ bool                     bTextAlignVCenter = true;
/*0xa8*/ CButtonDrawTemplate      bdt;
/*0xdc*/ CXStr                    strSoundPressed;
/*0xe0*/ CXStr                    strSoundUp;
/*0xe4*/ CXStr                    strSoundFlyby;
/*0xe8*/ CXPoint                  ptDecalOffset;
/*0xf0*/ CXSize                   sizeDecalSize;
/*0xf8*/
};

//============================================================================
// CComboboxTemplate
//============================================================================

class CComboboxTemplate
{
public:
	EQLIB_OBJECT CComboboxTemplate(CParamCombobox*);
};

class CEditboxTemplate
{
public:
	EQLIB_OBJECT CEditboxTemplate(class CParamEditbox*);
};

class CGaugeTemplate
{
public:
	EQLIB_OBJECT CGaugeTemplate(CParamGauge*);
};

class CInvSlotTemplate
{
public:
	EQLIB_OBJECT CInvSlotTemplate(CParamInvSlot*);
};

class [[offsetcomments]] CLabelTemplate : public CControlTemplate
{
public:
	EQLIB_OBJECT CLabelTemplate(CParamLabel*);

/*0x0c8*/ bool                     bNoWrap;
/*0x0c9*/ bool                     bAlignCenter;
/*0x0ca*/ bool                     bAlignRight;
/*0x0cb*/ bool                     bResizeHeightToText;
/*0x0d0*/ CXStr                    strPrependText;
/*0x0d8*/ CXStr                    strAppendText;
};

class CListboxColumnTemplate
{
public:
	EQLIB_OBJECT CListboxColumnTemplate(CParamListboxColumn*);
};

class CListboxTemplate
{
public:
	EQLIB_OBJECT CListboxTemplate(CParamListbox*);
};

class [[offsetcomments]] CPageTemplate : public CControlTemplate
{
public:
	EQLIB_OBJECT CPageTemplate(CParamPage*);
	EQLIB_OBJECT CPageTemplate();

/*0x98*/ ArrayClass<CScreenPieceTemplate*> arPieces;
/*0xa8*/ CXStr                             strTabText;
/*0xac*/ D3DCOLOR                          crTabText = 0;
/*0xb0*/ D3DCOLOR                          crTabTextActive = 0;
/*0xb4*/ CTextureAnimation*                ptaTabIcon = nullptr;
/*0xb8*/ CTextureAnimation*                ptaTabIconActive = nullptr;
/*0xbc*/
};

class [[offsetcomments]] CScreenTemplate : public CControlTemplate
{
public:
	EQLIB_OBJECT CScreenTemplate(CParamScreen*);

/*0x98*/ ArrayClass<CScreenPieceTemplate*> Pieces;
/*0xa8*/
};

class CSliderTemplate
{
public:
	EQLIB_OBJECT CSliderTemplate(CParamSlider*);
};

class CSpellGemTemplate
{
public:
	EQLIB_OBJECT CSpellGemTemplate(CParamSpellGem*);
};

class [[offsetcomments]] CStaticAnimationTemplate : public CStaticScreenPieceTemplate
{
public:
	EQLIB_OBJECT CStaticAnimationTemplate(CParamStaticAnimation*);

/*0x84*/ CTextureAnimation* ptaTextureAnimation;
/*0x88*/
};

class CStaticFrameTemplate
{
public:
	EQLIB_OBJECT CStaticFrameTemplate(CParamStaticFrame*);
};

class CStaticHeaderTemplate
{
public:
	EQLIB_OBJECT CStaticHeaderTemplate(CParamStaticHeader*);
};

class CStaticTextTemplate
{
public:
	EQLIB_OBJECT CStaticTextTemplate(CParamStaticText*);

	EQLIB_OBJECT const CXStr& SetText(const CXStr&);
};

class CSTMLboxTemplate
{
public:
	EQLIB_OBJECT CSTMLboxTemplate(CParamSTMLbox*);
};

class CTabBoxTemplate
{
public:
	EQLIB_OBJECT CTabBoxTemplate(CParamTabBox*);
};

class CLayoutBoxTemplate : public CControlTemplate
{
};

class CStaticTintedBlendAnimationTemplate : public CStaticScreenPieceTemplate
{
public:
	CTextureAnimation* ptaLayerOneTexture;
	CTextureAnimation* ptaLayerTwoTexture;
	D3DCOLOR colorLayerOneTint;
	D3DCOLOR colorLayerTwoTint;
	int nMaxLayerOneTextures;
	int nMaxLayerTwoTextures;
	int nLayerOneTextureIndex;
	int nLayerTwoTextureIndex;
};

} // namespace eqlib
