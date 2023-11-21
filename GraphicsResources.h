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
/*0x040*/ eBitmapType           m_eType;
/*0x044*/ EMemoryPoolManagerType m_eMemoryPoolManagerType;
/*0x048*/ const char*           m_pszFileName;
/*0x050*/ uint32_t              m_uSourceWidth;
/*0x054*/ uint32_t              m_uSourceHeight;
/*0x058*/ float                 m_fDetailScale;
/*0x05c*/ uint32_t              m_uGrassDensity;
/*0x060*/ uint32_t              m_uWidth;
/*0x064*/ uint32_t              m_uHeight;
/*0x068*/ bool                  m_bHasTexture;
	union
	{
/*0x070*/ IDirect3DTexture9*    m_pD3DTexture;
/*0x070*/ void*                 m_pRawBitmap;
	};
/*0x078*/ uint32_t              m_uObjectIndex;
/*0x07c*/ uint32_t              m_uSize;
/*0x080*/ bool                  m_bForceMipMap;
/*0x084*/ int                   m_nTrackingType;
/*0x088*/ float                 m_distanceSq;
/*0x08c*/ uint32_t              m_lastDistanceTime;
/*0x090*/ uint32_t              m_lastRenderTime;
/*0x094*/ uint32_t              m_loadedTime;
/*0x098*/ CXStr                 m_DeferredFilename;
/*0x0a0*/ eDeferMode            m_eDeferMode;
/*0x0a4*/ eDeferMode            m_eOriginalDeferMode;
/*0x0a8*/ char*                 m_pImageData;
/*0x0b0*/ uint32_t              m_uImageDataSize;
/*0x0b4*/ uint32_t              m_uBackgroundWidth;
/*0x0b8*/ uint32_t              m_uBackgroundHeight;
/*0x0bc*/ uint32_t              m_uMipLevels;
/*0x0c0*/ DWORD                 m_dwUsage;
/*0x0c4*/ D3DFORMAT             m_d3dFormat;
/*0x0c8*/ D3DPOOL               m_d3dPool;
/*0x0cc*/ DWORD                 m_dwFilter;
/*0x0d0*/ DWORD                 m_dwMipFilter;
/*0x0d4*/ D3DCOLOR              m_d3dColorKey;
/*0x0d8*/ D3DXIMAGE_INFO        m_srcInfo;
/*0x0f8*/ PALETTEENTRY*         m_pPalette;
/*0x100*/ eBitmapTextureQuality m_eTextureQuality;
/*0x104*/ eBitmapTextureQuality m_eUpsampleBitmapMinTextureQuality;
/*0x108*/ bool                  m_canReclaim;

	EQLIB_OBJECT static CEQGBitmap* GetFirstBitmap();

	CEQGBitmap* GetNextBitmap() { return TListNode<CEQGBitmap>::GetNext(); }
	const CEQGBitmap* GetNextBitmap() const { return TListNode<CEQGBitmap>::GetNext(); }
	CEQGBitmap* GetPreviousBitmap() { return TListNode<CEQGBitmap>::GetPrevious(); }
	const CEQGBitmap* GetPreviousBitmap() const { return TListNode<CEQGBitmap>::GetPrevious(); }

	// Return a pointer suitable for drawing a texture
	void* GetTexture() const
	{
#if IS_TEST_CLIENT
		if (m_bHasTexture && m_pD3DTexture)
			return m_pD3DTexture->GetShaderResourceView();
#else
		if (m_bHasTexture)
			return m_pD3DTexture;
#endif

		return nullptr;
	}
};


struct [[offsetcomments]] BMI
{
/*0x00*/ const char*        Name;
/*0x08*/ unsigned int       Flags;
/*0x10*/ CEQGBitmap*        pBmp;
/*0x18*/
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
};

} // namespace eqlib
