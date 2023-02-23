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

namespace eqlib {

//============================================================================
// Forward Declarations
//============================================================================

class CTextureAnimation;

//============================================================================
// CUITexturePiece
//============================================================================

enum enDir
{
	cUIDirectory,
	cUIDirectoryAtlas,
	cUIDirectoryTexture,
	cUIDirectoryMaps,

	cUIDirectoryCount,
};

struct [[offsetcomments]] CUITextureInfo
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CUITextureInfo();
	EQLIB_OBJECT CUITextureInfo(const CXStr& name, int size);
	EQLIB_OBJECT CUITextureInfo(const CXStr& name, const CXSize& size);
	EQLIB_OBJECT CUITextureInfo(uint32_t id, int size);
	EQLIB_OBJECT CUITextureInfo(uint32_t id, const CXSize& size);

	//EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, const CXRect&, D3DCOLOR*, D3DCOLOR*) const;
	//EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, const CXRect&, D3DCOLOR, D3DCOLOR) const;
	//EQLIB_OBJECT int Preload();
	//EQLIB_OBJECT int Tile(const CXRect&, D3DCOLOR*, D3DCOLOR*) const;
	//EQLIB_OBJECT int Tile(const CXRect&, D3DCOLOR, D3DCOLOR) const;

	//----------------------------------------------------------------------------
	// data members
/*0x00*/ bool          bValid = false;
/*0x04*/ enDir         Directory = cUIDirectory;
/*0x08*/ CXStr         Name;
/*0x0c*/ CXSize        TextureSize;
/*0x14*/ uint32_t      TextureId = -1;
/*0x18*/
};

class [[offsetcomments]] CUITexturePiece
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CUITexturePiece();
	EQLIB_OBJECT CUITexturePiece(const CUITextureInfo&, const CXRect&);
	EQLIB_OBJECT CUITexturePiece(const CUITextureInfo&);

	//EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, const CXRect&, D3DCOLOR, D3DCOLOR) const;
	//EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, D3DCOLOR, D3DCOLOR) const;

	const CUITextureInfo& GetTextureInfo() const { return m_info; }
	CXSize GetSize() const { return m_rect.GetSize(); }
	const CXRect& GetRect() const { return m_rect; }

private:
/*0x00*/ CUITextureInfo      m_info;
/*0x18*/ CXRect              m_rect;
/*0x28*/
};


//============================================================================
// CTextureAnimation
//============================================================================

struct [[offsetcomments]] STextureAnimationFrame
{
	FORCE_SYMBOLS;

/*0x00*/ CUITexturePiece    Piece;
/*0x28*/ uint32_t           Ticks = 0;
/*0x2c*/ CXPoint            Hotspot;
/*0x34*/
};

class [[offsetcomments]] CTextureAnimation
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CTextureAnimation();
	EQLIB_OBJECT CTextureAnimation(const CXStr& name);
	EQLIB_OBJECT CTextureAnimation(CUITexturePiece tp);
	EQLIB_OBJECT CTextureAnimation(const CTextureAnimation& other);
	EQLIB_OBJECT virtual ~CTextureAnimation();

	EQLIB_OBJECT int AddFrame(const CUITextureInfo* ti, const CXRect& rect, uint32_t ticks, CXPoint hotspot = {});
	EQLIB_OBJECT int AddFrame(CUITexturePiece tp, uint32_t ticks, CXPoint hotspot = {});
	EQLIB_OBJECT int AddBlankFrame(uint32_t ticks, CXPoint hotspot = {});
	EQLIB_OBJECT void SetCurFrame(int);
	EQLIB_OBJECT int GetCurFrame() const;
	EQLIB_OBJECT void Pause(bool pause);
	EQLIB_OBJECT CXPoint GetHotspot() const;
	EQLIB_OBJECT const CXStr& GetName() const { return Name; }
	EQLIB_OBJECT void SetCurCell(int);
	EQLIB_OBJECT CXSize GetSize() const { return Size; }
	inline int GetWidth() const { return Size.cx; }
	inline int GetHeight() const { return Size.cy; }

	// todo
	EQLIB_OBJECT int Draw(const CXRect& rect, const CXRect& clip, COLORREF color = 0xffffffff, COLORREF color2 = 0xff000000) const;
	//EQLIB_OBJECT int Draw(const CXPoint&, const CXRect&, unsigned long, unsigned long) const;
	//EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, unsigned long, unsigned long) const;
	//EQLIB_OBJECT int Preload();
	//EQLIB_OBJECT void Reset();

	//----------------------------------------------------------------------------
	// data members
/*0x04*/ CXStr              Name;
/*0x08*/ ArrayClass<STextureAnimationFrame> Frames;
/*0x18*/ uint32_t           TotalTicks = 0;
/*0x1c*/ int                ZeroFrame = 0;
/*0x20*/ uint32_t           StartTicks = GetTickCount();
/*0x24*/ CXSize             Size;
/*0x2c*/ bool               bPaused = false;
/*0x2d*/ bool               bCycle = true;
/*0x2e*/ bool               bGrid = false;
/*0x2f*/ bool               bVertical = false;
/*0x30*/ int                CellWidth = 0;
/*0x34*/ int                CellHeight = 0;
/*0x38*/ int                CurCell = -1;
/*0x3c*/ CXRect             CellRect;
/*0x4c*/
};

//============================================================================
// CTAFrameDraw
//============================================================================

class [[offsetcomments]] CTAFrameDraw
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT CTAFrameDraw(CXStr = {});

	enum EFrameDrawPiece
	{
		FrameDraw_TopLeft = 0,
		FrameDraw_Top,
		FrameDraw_TopRight,
		FrameDraw_RightTop,
		FrameDraw_Right,
		FrameDraw_RightBottom,
		FrameDraw_BottomRight,
		FrameDraw_Bottom,
		FrameDraw_BottomLeft,
		FrameDraw_LeftTop,
		FrameDraw_Left,
		FrameDraw_LeftBottom,
		FrameDraw_Middle,

		FrameDraw_Max,
	};

	EQLIB_OBJECT CTextureAnimation* GetAnimation(EFrameDrawPiece) const;
	EQLIB_OBJECT void SetAnimation(EFrameDrawPiece which, CTextureAnimation* tex);

	EQLIB_OBJECT CXRect GetHitTestRect(const CXRect&, int) const;
	EQLIB_OBJECT CXRect GetInnerRect(const CXRect&) const;
	EQLIB_OBJECT CXRect GetPieceRect(const CXRect&, int) const;
	EQLIB_OBJECT CXSize GetFrameSize() const;

	EQLIB_OBJECT CXStr GetName() const { return m_name; }
	EQLIB_OBJECT void SetName(const CXStr& name) { m_name = name; }

	EQLIB_OBJECT bool IsHorizontal() const;
	EQLIB_OBJECT bool IsVertical() const;

	EQLIB_OBJECT int Draw(const CXRect&, const CXRect&) const;
	EQLIB_OBJECT int Draw(const CXRect&, const CXRect&, EFrameDrawPiece) const;

	EQLIB_OBJECT int GetExtent() const;
	EQLIB_OBJECT int GetMinLength() const;

	EQLIB_OBJECT void Set(CTextureAnimation* pta[FrameDraw_Max]);

	EQLIB_OBJECT static const char* FrameDrawPieceToString(EFrameDrawPiece);

	//----------------------------------------------------------------------------
	// data members
private:
/*0x00*/ CXStr              m_name;
/*0x04*/ CTextureAnimation* m_pta[FrameDraw_Max];
/*0x38*/ int                Unknown0x38 = -1;                 // FIXME: Check this
/*0x3c*/ int                m_nOverlapTop = 0;
/*0x40*/ int                m_nOverlapLeft = 0;
/*0x44*/ int                m_nOverlapBottom = 0;
/*0x48*/ int                m_nOverlapRight = 0;
/*0x4c*/
};


} // namespace eqlib
