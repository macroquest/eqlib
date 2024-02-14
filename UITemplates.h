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
/*0x08*/ CTextureAnimation*       ptaNormal = nullptr;
/*0x10*/ CTextureAnimation*       ptaPressed = nullptr;
/*0x18*/ CTextureAnimation*       ptaFlyby = nullptr;
/*0x20*/ CTextureAnimation*       ptaDisabled = nullptr;
/*0x28*/ CTextureAnimation*       ptaPressedFlyby = nullptr;
/*0x30*/ CTextureAnimation*       ptaPressedDisabled = nullptr;
/*0x38*/ CTextureAnimation*       ptaNormalDecal = nullptr;
/*0x40*/ CTextureAnimation*       ptaPressedDecal = nullptr;
/*0x48*/ CTextureAnimation*       ptaFlybyDecal = nullptr;
/*0x50*/ CTextureAnimation*       ptaDisabledDecal = nullptr;
/*0x58*/ CTextureAnimation*       ptaPressedFlybyDecal = nullptr;
/*0x60*/ CTextureAnimation*       ptaPressedDisabledDecal = nullptr;
/*0x68*/
};

//============================================================================
// CGaugeDrawTemplate
//============================================================================

class [[offsetcomments]] CGaugeDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x08*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x10*/ CTextureAnimation*       ptaFill = nullptr;
/*0x18*/ CTextureAnimation*       ptaLines = nullptr;
/*0x20*/ CTextureAnimation*       ptaLinesFill = nullptr;
/*0x28*/ CTextureAnimation*       ptaEndCapLeft = nullptr;
/*0x30*/ CTextureAnimation*       ptaEndCapRight = nullptr;
/*0x38*/
};

//============================================================================
// CGaugeDrawTemplate
//============================================================================

class [[offsetcomments]] CSpellGemDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x08*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x10*/ CTextureAnimation*       ptaHolder = nullptr;
/*0x18*/ CTextureAnimation*       ptaHighlight = nullptr;
/*0x20*/
};


//============================================================================
// CSliderDrawTemplate
//============================================================================

class [[offsetcomments]] CSliderDrawTemplate
{
	FORCE_SYMBOLS;

public:
/*0x00*/ CXStr                    strName;

/*0x08*/ CButtonDrawTemplate      bdtThumb;
/*0x70*/ CTextureAnimation*       ptaBackground = nullptr;
/*0x78*/ CTextureAnimation*       ptaEndCapRight = nullptr;
/*0x80*/ CTextureAnimation*       ptaEndCapLeft = nullptr;
/*0x88*/
};

//============================================================================
// CScrollbarTemplate
//============================================================================

// not ScrollbarDrawTemplate ??
class [[offsetcomments]] CScrollbarTemplate
{
	FORCE_SYMBOLS;

public:
/*0x000*/ CXStr                       strName;

/*0x008*/ CButtonDrawTemplate         bdtUp;
/*0x070*/ CButtonDrawTemplate         bdtDown;
/*0x0d8*/ CTAFrameDraw                frameThumb;
/*0x160*/ CUITextureInfo              tiMiddle;
/*0x180*/ D3DCOLOR                    colorMiddleTint = 0;
/*0x184*/
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

/*0x008*/ CUITextureInfo              tiBackground;
/*0x028*/ int                         nBackgroundDrawType = eDrawTile;
/*0x030*/ CScrollbarTemplate          sbtVScroll;
/*0x1b8*/ CScrollbarTemplate          sbtHScroll;
/*0x340*/ CButtonDrawTemplate         bdtCloseBox;
/*0x3a8*/ CButtonDrawTemplate         bdtQMarkBox;
/*0x410*/ CButtonDrawTemplate         bdtMinimizeBox;
/*0x478*/ CButtonDrawTemplate         bdtMaximizeBox;
/*0x4e0*/ CButtonDrawTemplate         bdtTileBox;
/*0x548*/ CTAFrameDraw                frameBorder;
/*0x5d0*/ CTAFrameDraw                frameTitlebar;
/*0x658*/
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

/*0x08*/ ArrayClass2<uint32_t> arRuntimeTypes;
/*0x28*/ CXStr               strName;
/*0x30*/ uint32_t            uParamObjectId = 0;
/*0x38*/ CXStr               strScreenId;
/*0x40*/ uint32_t            nFont = 0;
/*0x44*/ bool                bRelativePosition = true;
/*0x45*/ bool                bAutoStretchVertical = false;
/*0x46*/ bool                bAutoStretchHorizontal = false;
/*0x47*/ bool                bTopAnchorToTop = true;
/*0x48*/ bool                bBottomAnchorToTop = true;
/*0x49*/ bool                bLeftAnchorToLeft = true;
/*0x4a*/ bool                bRightAnchorToLeft = true;
/*0x4c*/ int                 nTopOffset = 0;
/*0x50*/ int                 nBottomOffset = 0;
/*0x54*/ int                 nLeftOffset = 0;
/*0x58*/ int                 nRightOffset = 0;
/*0x5c*/ int                 nMinVSize = 0;
/*0x60*/ int                 nMinHSize = 0;
/*0x64*/ int                 nMaxVSize = 0;
/*0x68*/ int                 nMaxHSize = 0;
/*0x6c*/ CXRect              rect;
/*0x80*/ CXStr               strText;
/*0x88*/ D3DCOLOR            colorText = 0;
/*0x8c*/ D3DCOLOR            colorDisabled = 0;
/*0x90*/ D3DCOLOR            colorEnabled = 0;
/*0x94*/ bool                bUseInLayoutHorizontal = true;
/*0x95*/ bool                bUseInLayoutVertical = true;
/*0x98*/ D3DCOLOR            colorBackgroundTextureTint = 0;
/*0x9c*/ D3DCOLOR            colorDisabledBackgroundTextureTint = 0;
/*0xa0*/
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

/*0xa0*/ bool                     bAutoDraw = true;
/*0xa4*/
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

/*0x08*/ int                      nPadding = 0;
/*0x0c*/ uint32_t                 nType = 0;
/*0x10*/ CXStr                    strName;
/*0x18*/ bool                     bResizeHorizontal = false;
/*0x19*/ bool                     bResizeVertical = false;
/*0x1c*/
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

/*0xa0*/ uint32_t                 uStyleBits = 0;
/*0xa4*/ uint8_t                  bSizableMask = 0;
/*0xa5*/ bool                     bEscapable = true;
/*0xa8*/ CXStr                    strTooltip;
/*0xb0*/ CXWndDrawTemplate*       pDrawTemplate = nullptr;
/*0xb8*/ CXStr                    strController;
/*0xc0*/ CLayoutStrategyTemplate* pLayoutStrategyTemplate = nullptr;
/*0xc8*/
};

//============================================================================
// CButtonTemplate
//============================================================================

class [[offsetcomments]] CButtonTemplate : public CControlTemplate
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CButtonTemplate(CParamButton*);

/*0x0c8*/ bool                     bCheckbox = false;
/*0x0d0*/ CXStr                    strRadioGroup;
/*0x0d8*/ CXStr                    strText;
/*0x0e0*/ bool                     bTextAlignCenter = true;
/*0x0e1*/ bool                     bTextAlignRight = false;
/*0x0e2*/ bool                     bTextAlignVCenter = true;
/*0x0e8*/ CButtonDrawTemplate      bdt;
/*0x150*/ CXStr                    strSoundPressed;
/*0x158*/ CXStr                    strSoundUp;
/*0x160*/ CXStr                    strSoundFlyby;
/*0x168*/ CXPoint                  ptDecalOffset;
/*0x170*/ CXSize                   sizeDecalSize;
/*0x178*/
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

/*0x0c8*/ ArrayClass<CScreenPieceTemplate*> arPieces;
/*0x0e0*/ CXStr                             strTabText;
/*0x0e8*/ D3DCOLOR                          crTabText = 0;
/*0x0ec*/ D3DCOLOR                          crTabTextActive = 0;
/*0x0f0*/ CTextureAnimation*                ptaTabIcon = nullptr;
/*0x0f8*/ CTextureAnimation*                ptaTabIconActive = nullptr;
/*0x100*/
};

class [[offsetcomments]] CScreenTemplate : public CControlTemplate
{
public:
	EQLIB_OBJECT CScreenTemplate(CParamScreen*);

/*0xc8*/ ArrayClass<CScreenPieceTemplate*> Pieces;
/*0xe0*/
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

/*0xa8*/ CTextureAnimation* ptaTextureAnimation;
/*0xb0*/
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
