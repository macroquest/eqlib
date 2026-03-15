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

#include "eqlib/Common.h"
#include "eqlib/graphics/Bones.h"
#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/graphics/NodePool.h"

#include "eqlib/game/Color.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/MathTypes.h"
#include "eqlib/game/Types.h"

namespace eqlib {

class ActorAnimation;
class CActorInterface;
class CBoneGroupInterface;
class CLightInterface;
class CParticlePointInterface;
class CXStr;
class EQObject;
class EQPlacedItem;
class EQSwitch;
class MissileBase;
class PlayerBase;

//============================================================================
// CActorApplicationData
//============================================================================

enum EActorType
{
	Undefined = 0,
	Player = 1,
	Corpse = 2,
	Switch = 3,
	Missile = 4,
	Object = 5,
	Ladder = 6,
	Tree = 7,
	Wall = 8,
	PlacedObject = 9,
};

enum EActorClass
{
	ActorClass_Unknown,
	ActorClass_Simple,
	ActorClasS_Hierarchical,
};

class CActorApplicationData
{
public:
	enum EApplicationDataType
	{
		ePlayerBase,
		eMissileBase,
		eObject,
		eSwitch,
		eEnvEmitter,
		ePlacedItem
	};

	virtual EApplicationDataType GetActorApplicationDataType() const = 0;

	virtual const MissileBase* AsMissileBase() const = 0;
	virtual MissileBase* AsMissileBase() = 0;

	virtual const PlayerBase* AsPlayerBase() const = 0;
	virtual PlayerBase* AsPlayerBase() = 0;

	virtual const EQObject* AsObject() const = 0;
	virtual EQObject* AsObject() = 0;

	virtual const EQSwitch* AsSwitch() const = 0;
	virtual EQSwitch* AsSwitch() = 0;

	virtual const EQPlacedItem* AsPlacedItem() const = 0;
	virtual EQPlacedItem* AsPlacedItem() = 0;
};

class CActor;

struct CActorNode : TDataNode<CActorNode, CActor> {};
using CActorList = TList<CActorNode>;

struct CActorInterfaceNode : TDataNode<CActorInterfaceNode, CActorInterface> {};
using CActorInterfaceList = TList<CActorInterfaceNode>;


//============================================================================
// ActorDefinitionInterface
//============================================================================

class CActorDefinition;
class CActorDefinitionServer;
class CSimpleModelDefinition;
class CHierarchicalModelDefinition;
class CParticleCloudDefinition;

class CActorDefinitionInterface
{
public:
	virtual const char* GetTag() const = 0;
	virtual float ComputeboundingRadius() = 0;
	virtual void SetBoundingRadius(float) = 0;
	virtual CActorDefinition* AsActorDefinition() = 0;
	virtual const CActorDefinition* AsActorDefinition() const = 0;
	virtual CActorDefinitionServer* AsActorDefinitionServer() = 0;
	virtual const CActorDefinitionServer* AsActorDefinitionServer() const = 0;
	virtual void EnableNormalRendering(bool) = 0;
};

using ActorCallbackFn = int(*)(int, CActorInterfaceBase*);

class CActorDefinitionDataBase
{
public:
	CActorDefinitionDataBase();

	CActorDefinitionDataBase(const char* tag, ActorCallbackFn callback, ECollisionVolumeType collisionVolumeType, float boundingRadius)
		: m_tag(tag)
		, m_callback(callback)
		, m_collisionVolumeType(collisionVolumeType)
		, m_boundingRadius(boundingRadius)
	{
	}

	virtual ~CActorDefinitionDataBase();

	const char* GetTag() const { return m_tag; }
	ActorCallbackFn GetActorCallbackFn() const { return m_callback; }
	ECollisionVolumeType GetCollisionVolumeType() const { return m_collisionVolumeType; }
	float GetBoundingRadius() const { return m_boundingRadius; }

private:
	const char* m_tag;
	ActorCallbackFn m_callback;
	ECollisionVolumeType m_collisionVolumeType;
	float m_boundingRadius;
};

class CActorDefinitionDataClient : public CActorDefinitionDataBase
{
public:
	CActorDefinitionDataClient(
		CSimpleModelDefinition* simpleModelDefinition,
		const char* tag,
		EMemoryPoolManagerType memoryPoolManagerType);


	virtual ~CActorDefinitionDataClient();

private:
	CSimpleModelDefinition* m_pSimpleModelDefinition;
	CHierarchicalModelDefinition* m_pHierarchicalModelDefinition;
	CActorDefinition* m_pNext;
	EMemoryPoolManagerType m_eMemoryPoolManagerType;
	CParticleCloudDefinition* m_pParticleCloudDefinition;
};


class CActorDefinition
{
public:
	virtual ~CActorDefinition();

	virtual const char* GetActorName() const;

	CActorDefinitionDataClient m_actorDefinitionData;

};

//============================================================================
// ActorInterface
//============================================================================

class CActorDataBase;
class CAreaPortalVolumeList;
class CBoneInterface;
class CBoneGroupInterface;
class CCollisionInfoSphere;
class CCollisionInfoRay;
class CCollisionInfoLineSegment;
class CTerrainObject;
class CTerrainObjectInterface;
struct SHighlightData;
struct SActorParticle;

class [[offsetcomments]] CActorInterfaceBase
{
public:
/*0x000*/ virtual ~CActorInterfaceBase() {}
/*0x004*/ virtual bool IsDisabled() const = 0;
/*0x008*/ virtual void SetDisabled(bool) = 0;
/*0x00c*/ virtual void SetDisabledDesignOverride(bool) = 0;
/*0x010*/ virtual bool GetDisabledDesignOverride() const = 0;
/*0x014*/ virtual float GetEmitterScalingRadius() const = 0;
/*0x018*/ virtual void SetEmitterScalingRadius(float) = 0;
/*0x01c*/ virtual void SetSurfacePitchType(int) = 0;
/*0x020*/ virtual const CActorApplicationData* GetApplicationData() const = 0;
/*0x024*/ virtual CActorApplicationData* GetApplicationData() = 0;
/*0x028*/ virtual void SetActorApplicationData(CActorApplicationData*) = 0;
/*0x02c*/ virtual void SetActorType(EActorType) = 0;
/*0x030*/ virtual EActorType GetActorType() = 0;
/*0x034*/ virtual void SetInvisible(bool) = 0;
/*0x038*/ virtual bool IsInvisible() const = 0;
/*0x03c*/ virtual int GetCollisionVolumeType() const = 0;
/*0x040*/ virtual CSphere GetCollisionVolumeSphere() const = 0;
/*0x044*/ virtual float GetCollisionVolumeRadius() const = 0;
/*0x048*/ virtual void SetCollisionVolumeRadius(float) = 0;
/*0x04c*/ virtual CAABox GetCollisionBox(bool, bool) const = 0;
/*0x050*/ virtual void SetCollisionRestrictionMask(uint32_t) = 0;
/*0x054*/ virtual uint32_t GetCollisionRestrictionMask() const = 0;
/*0x058*/ virtual void* GetCollisionGroup() = 0;
/*0x05c*/ virtual void SetCollisionGroup(void*) = 0;
/*0x060*/ virtual float GetBoundingRadius() const = 0;
/*0x064*/ virtual void SetBoundingRadius(float) = 0;
/*0x068*/ virtual float ComputeBoundingRadius() = 0;
/*0x06c*/ virtual void Update() = 0;
/*0x070*/ virtual int Move(const CVector3*) = 0;
/*0x074*/ virtual void Orient(const CVector3*) = 0;
/*0x078*/ virtual void Scale(float, bool) = 0;
/*0x07c*/ virtual void GetPosition(CVector3*) const = 0;
/*0x080*/ virtual const CVector3& GetPosition() const = 0;
/*0x084*/ virtual void GetOrientation(CVector3*) const = 0;
/*0x088*/ virtual float GetHeading() const = 0;
/*0x08c*/ virtual float GetPitch() const = 0;
/*0x090*/ virtual float GetRoll() const = 0;
/*0x094*/ virtual void SetHeading(float) = 0;
/*0x098*/ virtual void SetPitch(float) = 0;
/*0x09c*/ virtual void SetRoll(float) = 0;
/*0x0a0*/ virtual float GetScaleFactor() const = 0;
/*0x0a4*/ virtual void SetCollisionSurfaceNormal(CVector3*) = 0;
/*0x0a8*/ virtual CActorDefinitionInterface* GetDefinition() const = 0;
/*0x0ac*/ virtual CActorDataBase& GetActorDataBase() = 0;
/*0x0b0*/ virtual const CActorDataBase& GetActorDataBase() const = 0;
/*0x0b4*/ virtual CActor* AsActor() = 0;
/*0x0b8*/ virtual const CActor* AsActor() const = 0;
/*0x0bc*/ virtual bool HasNewStyleHierarchicalModel() const = 0;
///*0x0c0*/ virtual int GetActorIndex() const = 0;
/*0x0c0*/ virtual const char* GetTag() const = 0;
/*0x0c4*/ virtual const char* GetActorName() const = 0;
/*0x0c8*/ virtual void SetCollisionSphereScaleFactor(float) = 0;
/*0x0cc*/ virtual float GetCollisionSphereScaleFactor() const = 0;
/*0x0d0*/ virtual CTerrainObjectInterface* GetTerrainObjectInterface() const = 0;
/*0x0d4*/ virtual EActorClass GetActorClass() const = 0;
/*0x0d8*/ virtual bool FindIntersection(CCollisionInfoSphere&) const = 0;
/*0x0dc*/ virtual bool FindIntersection(CCollisionInfoRay&) const = 0;
/*0x0e0*/ virtual bool FindIntersection(CCollisionInfoLineSegment&) const = 0;
};

class [[offsetcomments]] CActorInterface : public CActorInterfaceBase
{
public:
/*0x0e4*/ virtual bool ReplaceMaterial(const char*, const char*, const RGB*, bool, const char*, const RGB*) = 0;
/*0x0e8*/ virtual bool SetConditionalHide(int, bool, bool) = 0;
/*0x0ec*/ virtual bool IsConditionalHide(int) = 0;
/*0x0f0*/ virtual float GetScaledAmbient() = 0;
/*0x0f4*/ virtual void GetBonePosition(int, CVector3*, bool) const = 0;
/*0x0f8*/ virtual void GetBoneWorldPosition(EBones, CVector3*, bool) const = 0;
/*0x0fc*/ virtual void GetBoneWorldPosition(CBoneInterface*, CVector3*, bool) = 0;
/*0x100*/ virtual CMatrix44* GetObjectToWorldMatrix() = 0;
/*0x104*/ virtual void SetConstantAmbient(const RGB*) = 0;
/*0x108*/ virtual bool SetMaterialLayer(int, const char*, int, bool) = 0;
/*0x10c*/ virtual void SetInvisibleAsAttachment(bool) = 0;
/*0x110*/ virtual void SetMaterialTint(const RGB*, bool) = 0;
/*0x114*/ virtual void SetMaterialTint(int, const RGB*) = 0;
/*0x118*/ virtual void SetSecondaryMaterialTint(const RGB*) = 0;
/*0x11c*/ virtual void SetSecondaryMaterialTint(int, const RGB*) = 0;
/*0x120*/ virtual void SetBoneScale(int, float) = 0;
/*0x124*/ virtual float GetBoneScale(int) = 0;
/*0x128*/ virtual void SetBoneOrientation(int, CVector3&) = 0;
/*0x12c*/ virtual void GetBoneOrientation(int, CVector3&) = 0;
/*0x130*/ virtual void SetBonePosition(int, CVector3&) = 0;
/*0x134*/ virtual void* ChangeBoneAttachment(int, const char*, const CMatrix44*) = 0;
/*0x138*/ virtual int GetBoneIndexByName(const char*) const = 0;
/*0x13c*/ virtual bool ReplaceCloakMaterials(int, RGB*) = 0;
/*0x140*/ virtual bool ReplaceSpecialCloakMaterials(const char*) = 0;
/*0x144*/ virtual bool SwapBody(int, const char*) = 0;
/*0x148*/ virtual void SetActorSpriteTint(const RGB*) = 0;
/*0x14c*/ virtual bool SwapHead(const char* uint32, bool, bool, bool, uint32_t) = 0;
/*0x150*/ virtual void GetDefaultEyeMaterialIndices(int*, int*, bool, bool) = 0;
/*0x154*/ virtual bool SetNgeFaceMaterial(const char*) = 0;
/*0x158*/ virtual bool SetNgeEyeMaterial(int, const char*) = 0;
/*0x15c*/ virtual bool SetEyeMaterial(int, int) = 0;
/*0x160*/ virtual int GetNumSkins() const = 0;
/*0x164*/ virtual void SwapNpcMaterials(const char*, const char*, RGB*, RGB*) = 0;
/*0x168*/ virtual int GetNumberOfBones() const = 0;
/*0x16c*/ virtual int GetNumberOfParticlePoints() const = 0;
/*0x170*/ virtual void GetParticlePointData(int, CXStr&, int&, CVector3&, CVector3&, CVector3&) = 0;
/*0x174*/ virtual void SetParticlePointData(int, CXStr&, int, CVector3, CVector3, CVector3) = 0;
/*0x178*/ virtual int GetNumberOfParticles() = 0;
/*0x17c*/ virtual void GetParticleData(int, SActorParticle*) = 0;
/*0x180*/ virtual void SetParticleData(int, SActorParticle*) = 0;
/*0x184*/ virtual CParticlePointInterface* GetParticlePoint(int) = 0;
/*0x188*/ virtual CParticlePointInterface* GetParticlePoint(const char*) = 0;
/*0x18c*/ virtual void SetStringSprite(int, const char*, const char*) = 0;
/*0x199*/ virtual void SetStringSpriteTint(const RGB*) = 0;
/*0x194*/ virtual void EnumerateBones(int(*)(const char*), int, bool) = 0;
/*0x198*/ virtual void PutAllBonesInBoneGroup(int, int, bool) = 0;
/*0x19c*/ virtual void SetBone(int, const char*) = 0;
/*0x1a0*/ virtual void ResetBone(int) = 0;
/*0x1a4*/ virtual bool IsBoneSet(int) const = 0;
/*0x1a8*/ virtual CActorInterface* GetAttachedActor(int) const = 0;
/*0x1ac*/ virtual bool HasAttachedActor() const = 0;
/*0x1b0*/ virtual void SetAttachedActor(CBoneInterface*, CActorInterface*) = 0;
/*0x1b4*/ virtual void SetAttachedActor(int, CActorInterface*) = 0;
/*0x1b8*/ virtual void SetAttachedActorSprite(int, CActorInterface*) = 0;
/*0x1bc*/ virtual CBoneInterface* GetBone(const char*) = 0;
/*0x1c0*/ virtual CBoneInterface* GetBone(int) = 0;
/*0x1c4*/ virtual CBoneInterface* GetBoneByIndex(EBones) const = 0;
/*0x1c8*/ virtual CBoneGroupInterface* GetBoneGroup(int) const = 0;
/*0x1cc*/ virtual int PlayWeaponAnimation(int, const char*, const char*, float, bool, int, float) = 0;
/*0x1d0*/ virtual void InitializeSkins() = 0;
/*0x1d4*/ virtual void PlayAttackParticle() = 0;
/*0x1d8*/ virtual void AddPointDefinition(CXStr&, int, CVector3&, CVector3&, CVector3*) = 0;
/*0x1dc*/ virtual void DeletePointDefinition(CXStr&) = 0;
/*0x1e0*/ virtual void AddParticleDefinition(SActorParticle*) = 0;
/*0x1e4*/ virtual void DeleteParticleDefinition(uint32_t) = 0;
/*0x1e8*/ virtual void DisableAllParticles() = 0;
/*0x1ec*/ virtual int TestParticle(int, const char*, int, int) = 0;
/*0x1f0*/ virtual void SetupAnimationParticles(int, int, int, CBoneGroupInterface*, CActorInterface*) = 0;
/*0x1f4*/ virtual void SetupWeaponAnimationParticles(int, int) = 0;
/*0x1f8*/ virtual void StartActorParticle(int, CParticlePointInterface*, bool) = 0;
/*0x1fc*/ virtual void SetSpawnScaling(int) = 0;
/*0x200*/ virtual bool IsDPVSVisible() = 0;
/*0x204*/ virtual void SetAlpha(float) = 0;
/*0x208*/ virtual float GetAlpha() const = 0;
/*0x20c*/ virtual void ResetParticleS(int) = 0;
/*0x210*/ virtual void CastShadow(bool) = 0;
/*0x214*/ virtual void SetParticleScaleFactor(float) = 0;
/*0x218*/ virtual float GetParticleScaleFactor() const = 0;
/*0x21c*/ virtual void SetZOffset(float) = 0;
/*0x220*/ virtual float GetZOffset() const = 0;
/*0x224*/ virtual float GetVerticalCameraOffset() const = 0;
/*0x228*/ virtual void SetDuplicateActor(CActorInterface*) = 0;
/*0x22c*/ virtual float GetPitchOffset() const = 0;
/*0x230*/ virtual void CreateActorParticle(SActorParticle*, bool) = 0;
/*0x234*/ virtual int GetHighlightMode() const = 0;
/*0x238*/ virtual void SetHighlightMode(int) = 0;
/*0x23c*/ virtual void ShowParticlesWhenInvisible(bool) = 0;
/*0x240*/ virtual bool ShouldShowParticlesWhenInvisible() = 0;
/*0x244*/ virtual bool HasStaticCollisionMesh() const = 0;
/*0x248*/ virtual void EnableDynamicBoundingSphereUpdates(bool) = 0;
/*0x24c*/ virtual bool SwapMaterials(const char*) = 0;
/*0x250*/ virtual void LoadMaterials(uint32_t, const CVector3&, bool) = 0;
};

class CActorTree;
class CActorDataBase;

class CActorDataBaseNode
{
};

class [[offsetcomments]] CActorDataBase
{
public:
	virtual ~CActorDataBase();
	virtual void InitVariables();
	virtual const char* GetActorName();

/*0x04*/ CMatrix44        m_position;
/*0x24*/ CVector3         m_orientation;
/*0x50*/ const char*      m_szTag;
/*0x54*/ const char*      m_szActorName;
/*0x58*/ int              m_pitchType;
/*0x5c*/ uint32_t         m_flags;
/*0x60*/ float            m_scaleFactor;
/*0x64*/ float            m_boundingRadius;
/*0x68*/ uint32_t         m_collisionRestrictionMask;
/*0x6c*/ uint32_t         m_collisionGroup;

/*0x70*/ CActorTree*      m_actorTree;
/*0x74*/ TNodePool<CActorDataBase> m_actorTreeNode;
/*0x78*/ ECollisionVolumeType m_collisionVolumeType;
/*0x7c*/ float            m_collisionVolumeRadius;
/*0x80*/ float            m_collisionScaleFactor;
/*0x84*/ CActorInterface* m_actorInterface;
};

class [[offsetcomments]] CActor : public CActorInterface
{
public:
/*0x004*/ EMemoryPoolManagerType memoryPoolManagerType;
/*0x008*/ bool                   bIsS3DCreated;
/*0x009*/ bool                   bHasParentBone;
/*0x00a*/ bool                   bUpdateScaledAmbient;
/*0x00c*/ float                  scaledAmbient;
/*0x010*/ float                  scaledAmbientTarget;
/*0x014*/ float                  particleScaleFactor;
/*0x018*/ float                  collisionSphereScaleFactor;
/*0x01c*/ uint32_t               updateAmbientTick;
/*0x020*/ uint32_t               interpolateAmbientTick;
/*0x024*/ CActor*                pParentActor;
/*0x028*/ void*                  pDPVSObject;
/*0x02c*/ CVector3               updateAmbientPosition;
/*0x038*/ CVector3               surfaceNormal;
/*0x044*/ uint32_t               visibleIndex;
/*0x048*/ float                  alpha;
/*0x04c*/ bool                   bCastShadow;
/*0x04d*/ bool                   bNeverClip;
/*0x04e*/ bool                   bClientCreated;
/*0x050*/ float                  zOffset;
/*0x054*/ float                  emitterScalingRadius;
/*0x058*/ CActor*                pDuplicateActor;
/*0x05c*/ bool                   bShowParticlesWhenInvisible;
/*0x060*/ CAreaPortalVolumeList* pAreaPortalVolumeList;
/*0x064*/ CActorNode             cleanupNode;
/*0x074*/ CActorApplicationData* pActorApplicationData;
/*0x078*/ EActorType             actorType;
/*0x07c*/ CTerrainObject*        pTerrainObject;
/*0x080*/ SHighlightData*        highlightData;
/*0x090*/ __declspec(align(16)) CMatrix44 attachmentMtx;
/*0x0d0*/ bool                   bHasAttachSRT;
/*0x0d1*/ bool                   bDisableDesignOverride;

// everything after this point is technically part of subclasses via CActorDataBase
/*0x0d8*/ uint64_t               pad[1];

/*0x0e0*/ CActorDataBase         actorData;
};

//============================================================================
// ActorBase
//============================================================================


class [[offsetcomments]] ActorBase
{
public:
	virtual ~ActorBase();
	virtual int Reset(const char*, bool) = 0;
	virtual bool IsActorUsingNewStyleModel() = 0;

/*0x004*/ char        TextureType;
/*0x005*/ char        Material;
/*0x006*/ char        Variation;
/*0x007*/ char        HeadType;
/*0x008*/ uint8_t     FaceStyle;
/*0x009*/ uint8_t     HairColor;
/*0x00a*/ uint8_t     FacialHairColor;
/*0x00b*/ uint8_t     EyeColor1;
/*0x00c*/ uint8_t     EyeColor2;
/*0x00d*/ uint8_t     HairStyle;
/*0x00e*/ uint8_t     FacialHair;
/*0x010*/ int         Race;
/*0x014*/ uint8_t     Class;
/*0x015*/ uint8_t     Gender;
/*0x016*/ char        ActorDef[0x40];
/*0x058*/ uint32_t    ArmorColor[9];
/*0x07c*/ bool        bShowHelm;
/*0x080*/ int         Heritage;                 // drakkin only face setting
/*0x084*/ int         Tattoo;                   // drakkin only face setting
/*0x088*/ int         Details;                  // drakkin only face setting
/*0x08c*/ EQUIPMENT   ActorEquipment;
/*0x140*/

	// No race override - always returns zero (invalid race).
	int get_RaceOverride() const { return 0; }
	__declspec(property(get = get_RaceOverride)) int RaceOverride;
};

//============================================================================
// ActorClient
//============================================================================
class CObjectGroupStage;

class [[offsetcomments]] CObjectGroupStageInstance : public TListNode<CObjectGroupStageInstance>
{
public:
	/*0x0c*/ CActorInterface* pActor1;
	/*0x10*/ CActorInterface* pActor2;
	/*0x14*/ CObjectGroupStage* pStage;
	/*0x18*/
};

class [[offsetcomments]] ActorClient : public ActorBase
{
	FORCE_SYMBOLS;

public:
	virtual int Reset(const char*, bool) { return 0; };
	virtual bool IsActorUsingNewStyleModel() { return false; }

/*0x140*/ int                      LeftEyeMaterialIndex;
/*0x144*/ int                      RightEyeMaterialIndex;
/*0x148*/ CParticlePointInterface* pParticlePoints[10];
/*0x170*/ CBoneGroupInterface*     pLowerBones;
/*0x174*/ CBoneGroupInterface*     pUpperBones;
/*0x178*/ CActorInterface*         pActor;
/*0x17c*/ CLightInterface*         pLight;
/*0x180*/ ActorAnimation*          pActorAnimation;
/*0x184*/ TList<CObjectGroupStageInstance> StageInstances;
/*0x18c*/ bool                     bActiveTransition;
/*0x190*/ unsigned int             CurrentStage;
/*0x194*/ float                    ZOffset;
/*0x198*/ CVector3                 AdjustedLoc;
/*0x1a4*/ bool                     bReplacedStaticObject;
/*0x1a8*/ int                      PartialFaceNumber;
/*0x1ac*/ bool                     bNewArmorDisabled;
/*0x1b0*/ CActorApplicationData*   pApplicationData;
/*0x1b4*/

	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pcactorex, "Use pActor instead of pcactorex");
};

} // namespace eqlib
