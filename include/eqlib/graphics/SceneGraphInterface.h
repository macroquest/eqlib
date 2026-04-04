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

#include "eqlib/game/Actors.h"
#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/game/MathTypes.h"

namespace eqlib {

//============================================================================

//----------------------------------------------------------------------------
class CActorDefinitionInterface;
class CActorInterfaceBase;
class CCameraInterface;
class CCollisionGroup;
class CColor32Bit;
class CParticleCloudInterface;
class CParticleCloudDefinitionInterface;
class CParticlePointInterface;
class CSkyInterface;

struct SFastFile;
struct SParticleCloudDefData;
struct SWadFile;

//----------------------------------------------------------------------------
class CAreaProcessor
{
public:
	virtual void ProcessArea(const char*) = 0;
};

//----------------------------------------------------------------------------
class CCollisionGroup
{
public:
	enum Type
	{
		eStatic = 0,
		eDynamic = 1,
	};

	CCollisionGroup(Type type) : m_type(type)
	{
	}

private:
	Type m_type;
};

//----------------------------------------------------------------------------
class CSceneGraphInterfaceBase
{
public:
	virtual ~CSceneGraphInterfaceBase();

	virtual EStatus CreateActorInstance(CActorDefinitionInterface*, CVector3*, CVector3*, ECollisionVolumeType,
		float, float, float, bool, bool, bool, bool, CActorInterfaceBase**, const CCollisionGroup&) = 0;
	virtual EStatus DestroyActor(CActorInterfaceBase* pActor) = 0;
	virtual CActorInterfaceBase* GetActorBaseInstance(const char* name) = 0;
	virtual CActorInterfaceBase* GetActorBaseInstanceByName(const char* name) = 0;
	virtual CActorInterfaceBase* GetFirstActor() = 0;
	virtual CActorInterfaceBase* GetNextActor(CActorInterfaceBase* pActor) = 0;
	virtual uint32_t GetEnvironment(float x, float y, float z, uint32_t) = 0;
	virtual void ProcessAreas(const CAABox&, CAreaProcessor&) = 0;
	virtual uint32_t ProcessZones(CVector3*, const char*, const RGB*, float, int, int) = 0;
	virtual uint32_t TranslateAreaTag(const char*) = 0;
	virtual void RegisterAreaCallback(AREACALLBACKPTR) = 0;
	virtual int GetNumAreas() const = 0;
	virtual const char* GetAreaTag(uint32_t) = 0;
	virtual uint32_t GetAreaEnvironment(uint32_t) = 0;
	virtual void GetAreaRegionCenters(uint32_t, CVector3*, int*) = 0;
	virtual void SetDrawAreaWireframes(bool) = 0;
	virtual bool ShouldDrawAreaWireframes() const = 0;
	virtual uint32_t GetRegionNumber(const CVector3* pos) const = 0;
	virtual bool IsLocationValid(const CVector3*) const = 0;
	virtual EStatus GetWorldExtents(CVector3* min, CVector3* max) = 0;
	virtual uint32_t GetWorldTime() = 0;
	virtual void SetWorldTime(uint32_t) = 0;
	virtual int GetNearestActorTag(CVector3&, float, EActorType, bool, char*) const = 0;
};

//----------------------------------------------------------------------------
class CSceneGraphInterface : public CSceneGraphInterfaceBase
{
public:
	virtual EStatus CreateActorInstance(CActorDefinitionInterface*, CVector3*, CVector3*, ECollisionVolumeType,
		float, float, float, bool, bool, bool, bool, CActorInterface**, const CCollisionGroup&) = 0;
	virtual EStatus CreateDuplicateActorInstance(CActorInterface*, CActorInterface**, bool) = 0;
	virtual EStatus DestroyActor(CActorInterface*) = 0;
	virtual CActorInterface* GetACtorInstance(const char*) = 0;
	virtual EStatus CreatePointLightInstance(CLightDefinitionInterface*, CVector3*, float, CLightInterface**) = 0;
	virtual EStatus CreateDirectionalLightInstance(CLightDefinitionInterface*, CVector3*, CLightInterface**) = 0;
	virtual EStatus CreateParticleCloudInstance(CParticleCloudDefinitionInterface*, CVector3*, CParticleCloudInterface**,
		CParticleCloudInterface*, CParticleCloudInterface*) = 0;
	virtual EStatus CreateParticleCloudInstance(const char*, const char*, SParticleCloudDefData*, CParticleCloudInterface**,
		CParticleCloudInterface*, CParticleCloudInterface*) = 0;
	virtual EStatus CreateEnvironmentParticleCloudInstance(int, CVector3*, CParticleCloudInterface**,
		CParticleCloudInterface*, CParticleCloudInterface*, bool) = 0;
	virtual EStatus DestroyLightInstance(CLightInterface*) = 0;
	virtual EStatus DestroyParticleCloudInstance(CParticleCloudInterface*) = 0;
	virtual void CreateCamera(CCameraInterface**) = 0;
	virtual void ReleaseCamera(CCameraInterface*) = 0;
	virtual void SetSky(CSkyInterface*) = 0;
	virtual void GetNearestPlayersInView(CVector3&, float, EActorType, VALIDATIONCALLBACKPTR, RANGECALLBACKPTR,
		RANGECALLBACKPTR, GENERICCOLLISIONPTR) = 0;
	virtual void UpdateVisibleActorList(CVector3&, float, EActorType) = 0;
	virtual void ProcessVisibleActorList(VALIDATIONCALLBACKPTR) = 0;
	virtual EStatus PickActorOnScreen(CCameraInterface*, CActorInterface*, CActorInterface*, int, int, uint32_t, uint32_t,
		CActorInterface**, CVector3&, CVector3&) = 0;
	virtual void AddDirectionalLightToRegion(int, CLightInterface*) = 0;
	virtual void AddDirectionalLightToScene(CLightInterface*) = 0;
	virtual void RemoveDirectionalLightFromScene() = 0;
	virtual void SetDynamicLod(bool) = 0;
	virtual void EnableRadialFlora(bool) = 0;
	virtual const RGB& GetGlobalAmbient() = 0;
	virtual const RGB& GetVisionAmbient() = 0;
	virtual const RGB& GetConstantAmbient() = 0;
	virtual void SetGlobalAmbient(const RGB&) = 0;
	virtual void SetVisionAmbient(const RGB&) = 0;
	virtual void SetConstantAmbient(const RGB&) = 0;
	virtual void SetGlobalBounce(const CColor32Bit&) = 0;
	virtual void SetPrecalcLighting(bool) = 0;
	virtual void SetRainColor(int) = 0;
	virtual void InitOldEngineInternals() = 0;
	virtual void ReleaseOldEngineInternals() = 0;
	virtual void SetLODBias(float) = 0;
	virtual void CreateObjectPreviewCamera(CCameraInterface**, EObjectPreviewMode) = 0;
	virtual void ReleaseObjectPreviewCamera(EObjectPreviewMode) = 0;
	virtual void SetPaperDollActor(CActorInterface*) = 0;
	virtual void SyncPaperDollWeapons(CActorInterface*) = 0;
	virtual void ClearPaperDollWeapons() = 0;
	virtual bool ActivatePaperDoll(bool) = 0;
	virtual bool GetPaperDollImage(void*, uint32_t*) = 0;
	virtual void InitAreaPortalVolumes() = 0;
	virtual int ClearandFlagAreasAt(CVector3*) = 0;
	virtual bool AreaAPVOptimizationsOn() const = 0;
	virtual void SetAreaPortalOptimizations(bool) = 0;
};

//============================================================================

} // namespace eqlib
