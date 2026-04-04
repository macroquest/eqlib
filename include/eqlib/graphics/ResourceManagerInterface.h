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

#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/graphics/GraphicsResources.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CActor;
class CActorDefinitionInterface;
class CActorGroupDefinitionManagerInterface;
class CCanvasInterface;
class CAnimationInterface;
class CCachedFontInterface;
class CParticleCloudDefinitionInterface;
class CPrecipitationManagerInterface;
class CSkyInterface;
class IResourceProgressCallback;
struct SWadFile;
struct SParticleCloudDefData;

enum EResourceTypes;

//----------------------------------------------------------------------------
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
	virtual void SetParentAPI(int parentAPI) = 0;
	virtual int GetParentAPI() = 0;
	virtual CActorGroupDefinitionManagerInterface* GetActorGroupDefinitionManager() = 0;
};

//----------------------------------------------------------------------------
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
	virtual void Unknown0x118() = 0;       // References %s_EnvironmentFabricShader.txt
	virtual void Unknown0x120() = 0;
	virtual void Unknown0x128() = 0;       // References %s_EnvironmentEmissiveShader.txt
	virtual void Unknown0x130() = 0;       // References %s_EnvironmentGodRaysShader.txt
	virtual void Unknown0x138() = 0;       // References %s_EnvironmentOITShader.txt
	virtual void InitFontManager() = 0;
	virtual void DestroyFontManager() = 0;
	virtual EStatus GetCachedFont(int fontStyle, CCachedFontInterface** ppCachedFont) = 0;
	virtual void SetGlobalFontFace(int localeID, int fontIndex, const char* fontName) = 0;
	virtual const char* GetGlobalFontFace(int localeID, int fontIndex) = 0;
	virtual void ReleaseFontBuffers() = 0;
	virtual CPrecipitationManagerInterface* CreatePrecipitationManager(int) = 0;
	virtual void DestroyPrecipitationManager(CPrecipitationManagerInterface*) = 0;
	virtual void DestroyPrecipitationManagers() = 0;
	virtual void SetDefaultTerrainTextureQualitySize(uint32_t) = 0;
	virtual void DeferLoadingTextures(bool);
	virtual void SetMemoryMode(MemoryMode) = 0;
	virtual MemoryMode GetMemoryMode() const = 0;
	virtual bool IsMemoryEmergency() const = 0;
	virtual void SetDeferredModeOverride(bool) = 0;
	virtual bool GetDeferredModeOverride() const = 0;
	virtual void SetDeferredModeOverrideTextureQuality(eBitmapTextureQuality) = 0;
	virtual eBitmapTextureQuality GetDeferredModeOverrideTextureQuality() const = 0;
	virtual void UpdateActorTextureDistances(uint32_t, const CVector3&) = 0;
	virtual void UpdateTextureDistances(uint32_t, CActor*, const CVector3&, CVector3*) = 0;
	virtual void UpdateTextureDistances(uint32_t, CActor*, float) = 0;
	virtual void LoadActorTexturesNow(bool, IResourceProgressCallback*) = 0;
	virtual void LoadTexturesNow(CActor*, bool);
	virtual void PostProcessFrame() = 0;
	virtual void LoadItemLayerMappings(const char*) = 0;
	virtual void ParseOnDemandResources(const char*) = 0;
	virtual void GetMemoryPoolsUsageString(char*, int) = 0;
	virtual void GetTextureUsageString(char*, int) const = 0;
	virtual void LoadDirectory(const char*, EMemoryPoolManagerType, char**) = 0;
	virtual void GetanimationList(const char*) = 0;
	virtual void OnZoneOnDemandFlush(EMemoryPoolManagerType) = 0;
	virtual void LoadOnDemandResource(const char*, EResourceTypes) = 0;
};

//============================================================================

} // namespace eqlib
