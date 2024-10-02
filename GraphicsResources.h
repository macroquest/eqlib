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

#include "GraphicsEngine.h"
#include <dxsdk-d3dx/d3dx9tex.h>

namespace eqlib {

class CThreadLoader : public TListNode<CThreadLoader>
{
public:
	virtual bool ThreadLoad() = 0;
	virtual EMemoryPoolManagerType GetMemoryPoolManagerType() const = 0;

	bool m_isLoading = false;
};

enum eBitmapType
{
	eBitmapTypeNormal,
	eBitmapTypeLayer,
	eBitmapTypeSingleDetail,
	eBitmapTypePaletteDetailMain,
	eBitmapTypePaletteDetailPalette,
	eBitmapTypePaletteDetailDetail
};

enum eBitmapTextureQuality
{
	eBitmapTextureQualityInvalid = -1,
	eBitmapTextureQualityHigh,
	eBitmapTextureQualityMedium,
	eBitmapTextureQualityLow
};

enum eDeferMode
{
	cNonDeferred,
	cDeferredWad,
	cDeferredWadLoading,
	cDeferredFile,
	cDeferredFileLoading,
	cDeferredForeground,
	cDeferredError
};

class [[offsetcomments]] CEQGBitmap
	: public CThreadLoader
	, public TListNode<CEQGBitmap>
{
public:
/*0x20*/ eBitmapType           m_eType;
/*0x24*/ EMemoryPoolManagerType m_eMemoryPoolManagerType;
/*0x28*/ const char*           m_pszFileName;
/*0x2c*/ uint32_t              m_uSourceWidth;
/*0x30*/ uint32_t              m_uSourceHeight;
/*0x34*/ float                 m_fDetailScale;
/*0x38*/ uint32_t              m_uGrassDensity;
/*0x3c*/ uint32_t              m_uWidth;
/*0x40*/ uint32_t              m_uHeight;
/*0x44*/ bool                  m_bHasTexture;
	union
	{
/*0x48*/ IDirect3DTexture9*    m_pD3DTexture;
/*0x48*/ void*                 m_pRawBitmap;
	};
/*0x4c*/ uint32_t              m_uObjectIndex;
/*0x50*/ uint32_t              m_uSize;
/*0x54*/ bool                  m_bForceMipMap;
/*0x58*/ int                   m_nTrackingType;
/*0x5c*/ float                 m_distanceSq;
/*0x60*/ uint32_t              m_lastDistanceTime;
/*0x64*/ uint32_t              m_lastRenderTime;
/*0x68*/ uint32_t              m_loadedTime;
/*0x6c*/ CXStr                 m_DeferredFilename;
/*0x70*/ eDeferMode            m_eDeferMode;
/*0x74*/ eDeferMode            m_eOriginalDeferMode;
/*0x78*/ char*                 m_pImageData;
/*0x7c*/ uint32_t              m_uImageDataSize;
/*0x80*/ uint32_t              m_uBackgroundWidth;
/*0x84*/ uint32_t              m_uBackgroundHeight;
/*0x88*/ uint32_t              m_uMipLevels;
/*0x8c*/ DWORD                 m_dwUsage;
/*0x90*/ D3DFORMAT             m_d3dFormat;
/*0x94*/ D3DPOOL               m_d3dPool;
/*0x98*/ DWORD                 m_dwFilter;
/*0x9c*/ DWORD                 m_dwMipFilter;
/*0xa0*/ D3DCOLOR              m_d3dColorKey;
/*0xa4*/ D3DXIMAGE_INFO        m_srcInfo;
/*0xc0*/ PALETTEENTRY*         m_pPalette;
/*0xc4*/ eBitmapTextureQuality m_eTextureQuality;
/*0xc8*/ eBitmapTextureQuality m_eUpsampleBitmapMinTextureQuality;
/*0xcc*/ bool                  m_canReclaim;
/*0xd0*/
	EQLIB_OBJECT static CEQGBitmap* GetFirstBitmap();

	CEQGBitmap* GetNextBitmap() { return TListNode<CEQGBitmap>::GetNext(); }
	const CEQGBitmap* GetNextBitmap() const { return TListNode<CEQGBitmap>::GetNext(); }
	CEQGBitmap* GetPreviousBitmap() { return TListNode<CEQGBitmap>::GetPrevious(); }
	const CEQGBitmap* GetPreviousBitmap() const { return TListNode<CEQGBitmap>::GetPrevious(); }

	Direct3DTexture9* GetD3DTexture() const { return m_bHasTexture ? m_pD3DTexture : nullptr; }

	// Return a pointer suitable for drawing a texture
	void* GetTexture() const
	{
#if HAS_DIRECTX_11
		if (m_bHasTexture && m_pD3DTexture)
			return m_pD3DTexture->GetShaderResourceView();
#else
		if (m_bHasTexture)
			return m_pD3DTexture;
#endif

		return nullptr;
	}

	bool HasTexture() const { return m_bHasTexture; }
};


struct [[offsetcomments]] BMI
{
/*0x00*/ const char*        Name;
/*0x04*/ unsigned int       Flags;
/*0x08*/ CEQGBitmap*        pBmp;
/*0x0c*/
};

class CActorGroupDefinitionStageInterface
{
public:
	virtual const char* GetStaticModelName() = 0;
	virtual const char* GetTransitionModelName() = 0;
	virtual const char* GetTransitionAnimationName() = 0;
	virtual const char* GetCollisionModelName() = 0;
};

class CActorGroupDefinitionInterface
{
public:
	virtual const char* GetName() = 0;
	virtual uint32_t GetNumStages() = 0;
	virtual CActorGroupDefinitionStageInterface* GetStage(uint32_t index) = 0;
};

class CActorGroupDefinitionManagerInterface
{
public:
	virtual uint32_t GetNumDefinitions() = 0;
	virtual CActorGroupDefinitionInterface* GetDefinition(uint32_t index) = 0;
};

class CResourceManagerInterfaceBase
{
public:
	enum MemoryMode
	{
		eMinimumMemory,
		eBalancedMemory,
		eMaximumMemory,
		eDisabled,
		eNumMemoryModes
	};

	virtual EStatus LoadEQG(const char* filename, EMemoryPoolManagerType memoryPoolManagerType,
		bool tryDirectory, char** actorTagList) = 0;

	virtual void Flush(EMemoryPoolManagerType memoryPoolManagerType) = 0;

	virtual EStatus GetActorDefinition(const char* szTag, CActorDefinitionInterface** pActorDefinition) = 0;

	virtual int ParseReadWorld(const char* szFile, SWadFile* wadFile, EMemoryPoolManagerType memoryPoolManagerType,
		bool doItemAnims, bool luclinAnims) = 0;
	virtual int ParseReaadWorldForNPC(const char* szFile, SWadFile* wadFile, EMemoryPoolManagerType memoryPoolManagerType,
		const char* szNPCCode) = 0;

	virtual void WorldLoadOptimization(uint32_t flags) = 0;

	virtual void PreGlobalLoad() = 0;
	virtual void PostGlobalLoad() = 0;
	virtual void PreZoneLoad() = 0;
	virtual void PostZoneLoad() = 0;
	virtual void PreDynamicLoad(EMemoryPoolManagerType memoryPoolManagerType) = 0;
	virtual bool PostDynamicLoad(const char* szActorTagList, EMemoryPoolManagerType memoryPoolManagerType) = 0;

	virtual CActorGroupDefinitionManagerInterface* GetActorGroupDefinitionManager() = 0;
};

struct SParticleCloudDefData;
class CAnimationInterface;
class CCanvasInterface;
class CParticleCloudDefinitionInterface;
class CSkyInterface;
class CCachedFontInterface;

class CResourceManagerInterface : public CResourceManagerInterfaceBase
{
public:
	virtual void SetActorCodeCallbacks() = 0; // TBD

	virtual EStatus CreateLightDefinition(const char* szTag, EMemoryPoolManagerType memoryPoolManagerType, int frameCount,
		float* intensity, COLOR* colorList, int currentFrame, int updateInterval, bool skipFrames,
		CLightDefinitionInterface** ppLightDefinition) = 0;

	virtual EStatus CreateParticleCloudDefinition(const char* szTag, SParticleCloudDefData* particleCloudDefData,
		CParticleCloudDefinitionInterface** ppParticleCloudDefinition) = 0;

	virtual CTextObjectInterface* CreateTextObject() = 0;
	virtual void DestroyTextObject(CTextObjectInterface* pTextObject) = 0;

	virtual CAnimationInterface* GetAnimation(const char* pszAnimation) const = 0;

	virtual CCanvasInterface* CreateCanvas(int width, int height, int maxWidth, int maxHeight) = 0;
	virtual void DestroyCanvas(CCanvasInterface* pCanvas) = 0;

	virtual CSkyInterface* CreateSky(RGB* skyColors) = 0;

	virtual BMI* CreateBMI(const char* szTag, const char* szName, SWadFile* wadFile,
		EMemoryPoolManagerType memoryPoolManagerType) = 0;
	virtual void GetBMIInfo(BMI* bmi, int& width, int& height, int& textureWidth, int& textureheight) = 0;

	virtual EStatus DestroyLightDefinition(CLightDefinitionInterface* pLightDefinition) = 0;
	virtual EStatus DestroyParticleCloudDefinition(CParticleCloudDefinitionInterface* particleCloudDefinition) = 0;

	virtual void DestroyAnimation(CAnimationInterface* animation) = 0;
	virtual void DestroySky(CSkyInterface* sky) = 0;
	virtual void DestroyBMI(BMI* bmi) = 0;

	virtual EStatus GetLightDefinition(const char* szTag, CLightDefinitionInterface** ppDefinition) = 0;
	virtual EStatus GetBlitSpriteDefinition(const char* szTag, void** ppDefinition) = 0;
	virtual void LoadGrassObjects(const char* filename, float distance, void** objects) = 0;
	virtual void FreeGrassObjects() = 0;

	virtual void InitFontManager() = 0;
	virtual void DestroyFontManager() = 0;
	virtual EStatus GetCachedFont(int fontStyle, CCachedFontInterface** ppCachedFont) = 0;
	virtual void SetGlobalFontFace(int localeID, int fontIndex, const char* fontName) = 0;
	virtual const char* GetGlobalFontFace(int localeID, int fontIndex) = 0;
	virtual void ReleaseFontBuffers() = 0;
};

struct FONT_D3DTLVERTEX
{
	float    x, y, z, w;
	uint32_t diffuse;
	uint32_t specular;
	float    u, v;
};

class CCachedFontInterface
{
public:
	virtual int GetTextExtent(const CXStr& str) const = 0;
	virtual int GetLinesText(const CXStr& str, const CXRect& rectBox, uint32_t flags) const = 0;
	virtual int FillIndexArray(const CXStr& str, int width, ArrayClass2<uint32_t>& indexBuffer, int start, int* last) = 0;
	virtual int GetWidth(wchar_t ch) = 0;
	virtual int GetHeight() const = 0;
	virtual int GetKerning(wchar_t ch1, wchar_t ch2) const = 0;
	virtual CXStr GetName() const = 0;
};

class CFontManager;
class CTextureVertexBuffer;

struct [[offsetcomments]] CCachedFontGlyphTextureInfo
{
/*0x00*/ int                      nRow;
/*0x04*/ int                      nCol;
/*0x08*/ CXRect                   rectInTexture;
/*0x18*/ int                      nTextureIdx;
/*0x1c*/
};

class [[offsetcomments]] CCachedFontGlyphInfo
{
public:
/*0x00*/ bool                     bIsValidTexture;
/*0x04*/ uint32_t                 uUnicodeValue;
/*0x08*/ int                      nCharWidth;
/*0x0c*/ CCachedFontGlyphTextureInfo gti;
/*0x28*/
};

class [[offsetcomments]] CCachedFontGlyphNode
{
public:
/*0x00*/ CCachedFontGlyphInfo     gi;
/*0x28*/ CCachedFontGlyphNode*    next;
/*0x2c*/ CCachedFontGlyphNode*    prev;
/*0x30*/
};

class [[offsetcomments]] CD3DTexturePointerNode
{
public:
/*0x00*/ Direct3DTexture9*        pTexture;
/*0x04*/ CD3DTexturePointerNode*  next;
/*0x08*/ CD3DTexturePointerNode*  prev;
/*0x0c*/
};

class [[offsetcomments]] CD3DTexturePointerList
{
public:
	virtual ~CD3DTexturePointerList() {}

/*0x04*/ int                      nSize;
/*0x08*/ CD3DTexturePointerNode*  head;
/*0x0c*/ CD3DTexturePointerNode*  tail;
/*0x10*/
};

struct [[offsetcomments]] SCharacterIndex
{
/*0x00*/ int                      row;
/*0x04*/ int                      index;
/*0x08*/
};

class [[offsetcomments]] CTextureVertexBuffer
{
public:
/*0x00*/ int                      nStartOffset;
/*0x04*/ int                      nCharacterStartIndex;
/*0x08*/ int                      nCharacterCount;
/*0x0c*/ ArrayClass<SCharacterIndex> arCharacterIndices;
/*0x1c*/
};

struct [[offsetcomments]] SUnicodeCharPos
{
/*0x00*/ wchar_t                  c;
/*0x04*/ int                      x;
/*0x08*/
};

struct [[offsetcomments]] SUnicodeCharLine
{
/*0x00*/ ArrayClass2<SUnicodeCharPos> arCharPos;
/*0x1c*/ int                      y;
/*0x20*/ int                      nWidth;
/*0x24*/ int                      nIndexStart;
/*0x28*/ int                      nXOffset;
/*0x2c*/
};

struct [[offsetcomments]] CCachedFontGlyphTextureStatus
{
/*0x00*/ uint32_t                 uTextureId;
/*0x04*/ int                      nRows;
/*0x08*/ int                      nCols;
/*0x0c*/ int                      nWidth;
/*0x10*/ int                      nHeight;
/*0x14*/
};

class [[offsetcomments]] CCachedFontGlyphTextureAllocator
{
public:
	virtual ~CCachedFontGlyphTextureAllocator() {}

/*0x04*/ ArrayClass2<CCachedFontGlyphTextureStatus> textureStatus;
/*0x20*/ int                      nTotalSlots;
/*0x24*/ int                      nSlotsFree;
/*0x28*/ CCachedFontGlyphTextureInfo gtiNextUsed;
/*0x44*/
};

class [[offsetcomments]] CCachedFontGlyphList
{
public:
	virtual ~CCachedFontGlyphList() {}

/*0x04*/ int                      nSize;
/*0x08*/ CCachedFontGlyphNode*    head;
/*0x0c*/ CCachedFontGlyphNode*    thead;
/*0x10*/ CCachedFontGlyphNode*    tail;
/*0x14*/
};

// Size: 0x178
class [[offsetcomments]] CCachedFont : public CCachedFontInterface
{
public:
	virtual ~CCachedFont() {}

	virtual int DrawWrappedText(CTextObjectBase* textObject, const char* szText, const CXRect& rect, const CXRect& clip, COLORREF color, FONT_D3DTLVERTEX* vbuffer, uint16_t flags, int offset) const = 0;
	virtual int DrawWrappedText(CTextObjectBase* textObject, const char* szText, int x, int y, int width, const CXRect& rect, COLORREF color, FONT_D3DTLVERTEX* vbuffer, uint16_t flags, int offset) const = 0;
	virtual int DrawNameTagText(CTextObjectBase* textObject, const char* szText, const CXRect& rect, COLORREF color, FONT_D3DTLVERTEX* vbuffer, uint16_t flags, float z) const = 0;

	EQLIB_OBJECT static CCachedFont* Get(int fontStyle);

/*0x004*/ HDC                     hDC;
/*0x008*/ HFONT                   hFont;
/*0x00c*/ HFONT                   hOldFont;
/*0x010*/ HBITMAP                 hBitmap;
/*0x014*/ HBITMAP                 hOldBitmap;
/*0x018*/ uint32_t*               pBitmapBits;
/*0x01c*/ CFontManager*           pFontManager;
/*0x020*/ int                     eFontId;
/*0x024*/ int                     nMaxTextures;
/*0x028*/ int                     nDropShadowOffsetX;
/*0x02c*/ int                     nDropShadowOffsetY;
/*0x030*/ int                     nTextureSize;
/*0x034*/ float                   fTextureSize;
/*0x038*/ ArrayClass2<CD3DTexturePointerNode*> arTextures;
/*0x054*/ CCachedFontGlyphTextureAllocator textureAllocator;
/*0x098*/ CXStr                   strFontName;
/*0x09c*/ int                     nHeight;
/*0x0a0*/ int                     nMaxWidth;
/*0x0a4*/ ArrayClass2<CCachedFontGlyphNode*> arGlyphs;
/*0x0c0*/ CCachedFontGlyphList    listGlyphs;
/*0x0d4*/ ArrayClass2<CTextureVertexBuffer> arBuffers;
/*0x0f0*/ FONT_D3DTLVERTEX*       pVertices;
/*0x0f4*/ int                     nTotalCharactersToRender;
/*0x0f8*/ int                     nTotalCharactersInserted;
/*0x0fc*/ int                     nTotalCharactersRendered;
/*0x100*/ ArrayClass2<SUnicodeCharLine> textLines;
/*0x11c*/
};

class [[offsetcomments]] CCachedFontNode
{
public:
/*0x00*/ CCachedFont*             pFont;
/*0x04*/ CCachedFontNode*         next;
/*0x08*/ CCachedFontNode*         prev;
/*0x0c*/
};

class [[offsetcomments]] CCachedFontList
{
public:
	virtual ~CCachedFontList() {}

/*0x04*/ int                      nSize;
/*0x08*/ CCachedFontNode*         head;
/*0x0c*/ CCachedFontNode*         tail;
/*0x10*/
};

struct [[offsetcomments]] SLogFontEntry
{
/*0x00*/ LOGFONTA                 lf;
/*0x3c*/ CXStr                    strFontName;
/*0x40*/ int                      nMaxTextures;
/*0x44*/ int                      nTextureSize;
/*0x48*/ int                      nDropShadowOffsetX;
/*0x4c*/ int                      nDropShadowOffsetY;
/*0x50*/ CCachedFontNode*         pFontNode;
/*0x54*/
};

class [[offsetcomments]] CFontManager
{
public:
	virtual ~CFontManager() {}

/*0x04*/ HDC                      hDC;
/*0x08*/ HDC                      hSrcDC;
/*0x0c*/ Direct3DIndexBuffer9*    pIB;
/*0x10*/ int                      nIndexStartOffset;
/*0x14*/ int                      nIndexCurrentOffset;
/*0x18*/ bool                     bNeedsVBInit;
/*0x1c*/ CD3DTexturePointerList   listTextures;
/*0x2c*/ CCachedFontList          listFonts;
/*0x3c*/ ArrayClass2<ArrayClass2<int>> arFontMatrix;
/*0x58*/ ArrayClass2<SLogFontEntry> arLogFonts;
/*0x74*/ int                      eCurrentLanguage;
/*0x78*/
};

} // namespace eqlib
