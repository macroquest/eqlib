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
/*0x008*/ virtual bool IsDisabled() const = 0;
/*0x010*/ virtual void SetDisabled(bool) = 0;
/*0x018*/ virtual void SetDisabledDesignOverride(bool) = 0;
/*0x020*/ virtual bool GetDisabledDesignOverride() const = 0;
/*0x028*/ virtual float GetEmitterScalingRadius() const = 0;
/*0x030*/ virtual void SetEmitterScalingRadius(float) = 0;
/*0x038*/ virtual void SetSurfacePitchType(int) = 0;
/*0x040*/ virtual const CActorApplicationData* GetApplicationData() const = 0;
/*0x048*/ virtual CActorApplicationData* GetApplicationData() = 0;
/*0x050*/ virtual void SetActorApplicationData(CActorApplicationData*) = 0;
/*0x058*/ virtual void SetActorType(EActorType) = 0;
/*0x060*/ virtual EActorType GetActorType() = 0;
/*0x068*/ virtual void SetInvisible(bool) = 0;
/*0x070*/ virtual bool IsInvisible() const = 0;
/*0x078*/ virtual int GetCollisionVolumeType() const = 0;
/*0x080*/ virtual CSphere GetCollisionVolumeSphere() const = 0;
/*0x088*/ virtual float GetCollisionVolumeRadius() const = 0;
/*0x090*/ virtual void SetCollisionVolumeRadius(float) = 0;
/*0x098*/ virtual CAABox GetCollisionBox(bool, bool) const = 0;
/*0x0a0*/ virtual void SetCollisionRestrictionMask(uint32_t) = 0;
/*0x0a8*/ virtual uint32_t GetCollisionRestrictionMask() const = 0;
/*0x0b0*/ virtual void* GetCollisionGroup() = 0;
/*0x0b8*/ virtual void SetCollisionGroup(void*) = 0;
/*0x0c0*/ virtual float GetBoundingRadius() const = 0;
/*0x0c8*/ virtual void SetBoundingRadius(float) = 0;
/*0x0d0*/ virtual float ComputeBoundingRadius() = 0;
/*0x0d8*/ virtual void Update() = 0;
/*0x0e0*/ virtual int Move(const CVector3*) = 0;
/*0x0e8*/ virtual void Orient(const CVector3*) = 0;
/*0x0f0*/ virtual void Scale(float, bool) = 0;
/*0x0f8*/ virtual void GetPosition(CVector3*) const = 0;
/*0x100*/ virtual const CVector3& GetPosition() const = 0;
/*0x108*/ virtual void GetOrientation(CVector3*) const = 0;
/*0x110*/ virtual float GetHeading() const = 0;
/*0x118*/ virtual float GetPitch() const = 0;
/*0x120*/ virtual float GetRoll() const = 0;
/*0x128*/ virtual void SetHeading(float) = 0;
/*0x130*/ virtual void SetPitch(float) = 0;
/*0x138*/ virtual void SetRoll(float) = 0;
/*0x140*/ virtual float GetScaleFactor() const = 0;
/*0x148*/ virtual void SetCollisionSurfaceNormal(CVector3*) = 0;
/*0x150*/ virtual CActorDefinitionInterface* GetDefinition() const = 0;
/*0x158*/ virtual CActorDataBase& GetActorDataBase() = 0;
/*0x160*/ virtual const CActorDataBase& GetActorDataBase() const = 0;
/*0x168*/ virtual CActor* AsActor() = 0;
/*0x170*/ virtual const CActor* AsActor() const = 0;
/*0x178*/ virtual bool HasNewStyleHierarchicalModel() const = 0;
/*0x180*/ virtual int GetActorIndex() const = 0;
/*0x188*/ virtual const char* GetTag() const = 0;
/*0x190*/ virtual const char* GetActorName() const = 0;
/*0x198*/ virtual void SetCollisionSphereScaleFactor(float) = 0;
/*0x1a0*/ virtual float GetCollisionSphereScaleFactor() const = 0;
/*0x1a8*/ virtual CTerrainObjectInterface* GetTerrainObjectInterface() const = 0;
/*0x1b0*/ virtual EActorClass GetActorClass() const = 0;
/*0x1b8*/ virtual bool FindIntersection(CCollisionInfoSphere&) const = 0;
/*0x1c0*/ virtual bool FindIntersection(CCollisionInfoRay&) const = 0;
/*0x1c8*/ virtual bool FindIntersection(CCollisionInfoLineSegment&) const = 0;
};

class [[offsetcomments]] CActorInterface : public CActorInterfaceBase
{
public:
/*0x1d0*/ virtual bool ReplaceMaterial(const char*, const char*, const RGB*, bool, const char*, const RGB*) = 0;
/*0x1d8*/ virtual bool SetConditionalHide(int, bool, bool) = 0;
/*0x1e0*/ virtual bool IsConditionalHide(int) = 0;
/*0x1e8*/ virtual float GetScaledAmbient() = 0;
/*0x1f0*/ virtual void GetBonePosition(int, CVector3*, bool) const = 0;
/*0x1f8*/ virtual void GetBoneWorldPosition(int, CVector3*, bool) const = 0;
/*0x200*/ virtual void GetBoneWorldPosition(CBoneInterface*, CVector3*, bool) = 0;
/*0x208*/ virtual CMatrix44* GetObjectToWorldMatrix() = 0;
/*0x210*/ virtual void SetConstantAmbient(const RGB*) = 0;
/*0x218*/ virtual bool SetMaterialLayer(int, const char*, int, bool) = 0;
/*0x220*/ virtual void SetInvisibleAsAttachment(bool) = 0;
/*0x228*/ virtual void SetMaterialTint(const RGB*, bool) = 0;
/*0x230*/ virtual void SetMaterialTint(int, const RGB*) = 0;
/*0x238*/ virtual void SetSecondaryMaterialTint(const RGB*) = 0;
/*0x240*/ virtual void SetSecondaryMaterialTint(int, const RGB*) = 0;
/*0x248*/ virtual void SetBoneScale(int, float) = 0;
/*0x250*/ virtual float GetBoneScale(int) = 0;
/*0x258*/ virtual void SetBoneOrientation(int, CVector3&) = 0;
/*0x260*/ virtual void GetBoneOrientation(int, CVector3&) = 0;
/*0x268*/ virtual void SetBonePosition(int, CVector3&) = 0;
/*0x270*/ virtual void* ChangeBoneAttachment(int, const char*, const CMatrix44*) = 0;
/*0x278*/ virtual int GetBoneIndexByName(const char*) const = 0;
/*0x280*/ virtual bool ReplaceCloakMaterials(int, RGB*) = 0;
/*0x288*/ virtual bool ReplaceSpecialCloakMaterials(const char*) = 0;
/*0x290*/ virtual bool SwapBody(int, const char*) = 0;
/*0x298*/ virtual void SetActorSpriteTint(const RGB*) = 0;
/*0x2a0*/ virtual bool SwapHead(const char* uint32, bool, bool, bool, uint32_t) = 0;
/*0x2a8*/ virtual void GetDefaultEyeMaterialIndices(int*, int*, bool, bool) = 0;
/*0x2b0*/ virtual bool SetNgeFaceMaterial(const char*) = 0;
/*0x2b8*/ virtual bool SetNgeEyeMaterial(int, const char*) = 0;
/*0x2c0*/ virtual bool SetEyeMaterial(int, int) = 0;
/*0x2c8*/ virtual int GetNumSkins() const = 0;
/*0x2d0*/ virtual void SwapNpcMaterials(const char*, const char*, RGB*, RGB*) = 0;
/*0x2d8*/ virtual int GetNumberOfBones() const = 0;
/*0x2e0*/ virtual int GetNumberOfParticlePoints() const = 0;
/*0x2e8*/ virtual void GetParticlePointData(int, CXStr&, int&, CVector3&, CVector3&, CVector3&) = 0;
/*0x2f0*/ virtual void SetParticlePointData(int, CXStr&, int, CVector3, CVector3, CVector3) = 0;
/*0x2f8*/ virtual int GetNumberOfParticles() = 0;
/*0x300*/ virtual void GetParticleData(int, SActorParticle*) = 0;
/*0x308*/ virtual void SetParticleData(int, SActorParticle*) = 0;
/*0x310*/ virtual CParticlePointInterface* GetParticlePoint(int) = 0;
/*0x318*/ virtual CParticlePointInterface* GetParticlePoint(const char*) = 0;
/*0x320*/ virtual void SetStringSprite(int, const char*, const char*) = 0;
/*0x328*/ virtual void SetStringSpriteTint(const RGB*) = 0;
/*0x330*/ virtual void EnumerateBones(int(*)(const char*), int, bool) = 0;
/*0x338*/ virtual void PutAllBonesInBoneGroup(int, int, bool) = 0;
/*0x340*/ virtual void SetBone(int, const char*) = 0;
/*0x348*/ virtual void ResetBone(int) = 0;
/*0x350*/ virtual bool IsBoneSet(int) const = 0;
/*0x358*/ virtual CActorInterface* GetAttachedActor(int) const = 0;
/*0x360*/ virtual bool HasAttachedActor() const = 0;
/*0x368*/ virtual void SetAttachedActor(CBoneInterface*, CActorInterface*) = 0;
/*0x370*/ virtual void SetAttachedActor(int, CActorInterface*) = 0;
/*0x378*/ virtual void SetAttachedActorSprite(int, CActorInterface*) = 0;
/*0x380*/ virtual CBoneInterface* GetBone(int) = 0;
/*0x388*/ virtual CBoneInterface* GetBone(const char*) = 0;
/*0x390*/ virtual CBoneInterface* GetBoneByIndex(int) const = 0;
/*0x398*/ virtual CBoneGroupInterface* GetBoneGroup(int) const = 0;
/*0x3a0*/ virtual int PlayWeaponAnimation(int, const char*, const char*, float, bool, int, float) = 0;
/*0x3a8*/ virtual void InitializeSkins() = 0;
/*0x3b0*/ virtual void PlayAttackParticle() = 0;
/*0x3b8*/ virtual void AddPointDefinition(CXStr&, int, CVector3&, CVector3&, CVector3*) = 0;
/*0x3c0*/ virtual void DeletePointDefinition(CXStr&) = 0;
/*0x3c8*/ virtual void AddParticleDefinition(SActorParticle*) = 0;
/*0x3d0*/ virtual void DeleteParticleDefinition(uint32_t) = 0;
/*0x3d8*/ virtual void DisableAllParticles() = 0;
/*0x3e0*/ virtual int TestParticle(int, const char*, int, int) = 0;
/*0x3e8*/ virtual void SetupAnimationParticles(int, int, int, CBoneGroupInterface*, CActorInterface*) = 0;
/*0x3f0*/ virtual void SetupWeaponAnimationParticles(int, int) = 0;
/*0x3f8*/ virtual void StartActorParticle(int, CParticlePointInterface*, bool) = 0;
/*0x400*/ virtual void SetSpawnScaling(int) = 0;
/*0x408*/ virtual bool IsDPVSVisible() = 0;
/*0x410*/ virtual void SetAlpha(float) = 0;
/*0x418*/ virtual float GetAlpha() const = 0;
/*0x420*/ virtual void ResetParticleS(int) = 0;
/*0x428*/ virtual void CastShadow(bool) = 0;
/*0x430*/ virtual void SetParticleScaleFactor(float) = 0;
/*0x438*/ virtual float GetParticleScaleFactor() const = 0;
/*0x440*/ virtual void SetZOffset(float) = 0;
/*0x448*/ virtual float GetZOffset() const = 0;
/*0x450*/ virtual float GetVerticalCameraOffset() const = 0;
/*0x458*/ virtual void SetDuplicateActor(CActorInterface*) = 0;
/*0x460*/ virtual float GetPitchOffset() const = 0;
/*0x468*/ virtual void CreateActorParticle(SActorParticle*, bool) = 0;
/*0x470*/ virtual int GetHighlightMode() const = 0;
/*0x478*/ virtual void SetHighlightMode(int) = 0;
/*0x480*/ virtual void ShowParticlesWhenInvisible(bool) = 0;
/*0x488*/ virtual bool ShouldShowParticlesWhenInvisible() = 0;
/*0x490*/ virtual bool HasStaticCollisionMesh() const = 0;
/*0x498*/ virtual void EnableDynamicBoundingSphereUpdates(bool) = 0;
/*0x4a0*/ virtual bool SwapMaterials(const char*) = 0;
/*0x4a8*/ virtual void LoadMaterials(uint32_t, const CVector3&, bool) = 0;
};

class [[offsetcomments]] CActor : public CActorInterface
{
public:
/*0x008*/ EMemoryPoolManagerType memoryPoolManagerType;
/*0x00c*/ bool                   bIsS3DCreated;
/*0x00d*/ bool                   bHasParentBone;
/*0x00e*/ bool                   bUpdateScaledAmbient;
/*0x010*/ float                  scaledAmbient;
/*0x014*/ float                  scaledAmbientTarget;
/*0x018*/ float                  particleScaleFactor;
/*0x01c*/ float                  collisionSphereScaleFactor;
/*0x020*/ uint32_t               updateAmbientTick;
/*0x024*/ uint32_t               interpolateAmbientTick;
/*0x028*/ CActor*                pParentActor;
/*0x030*/ void*                  pDPVSObject;
/*0x038*/ CVector3               updateAmbientPosition;
/*0x044*/ CVector3               surfaceNormal;
/*0x050*/ uint32_t               visibleIndex;
/*0x054*/ float                  alpha;
/*0x058*/ bool                   bCastShadow;
/*0x059*/ bool                   bNeverClip;
/*0x05a*/ bool                   bClientCreated;
/*0x05c*/ float                  zOffset;
/*0x060*/ float                  emitterScalingRadius;
/*0x068*/ CActor*                pDuplicateActor;
/*0x070*/ bool                   bShowParticlesWhenInvisible;
/*0x078*/ CAreaPortalVolumeList* pAreaPortalVolumeList;
/*0x080*/ CActorNode             cleanupNode;
/*0x0a0*/ CActorApplicationData* pActorApplicationData;
/*0x0a8*/ EActorType             actorType;
/*0x0b0*/ CTerrainObject*        pTerrainObject;
/*0x0b8*/ SHighlightData*        highlightData;
/*0x0c0*/ __declspec(align(16)) CMatrix44 attachmentMtx;
/*0x100*/ bool                   bHasAttachSRT;
/*0x101*/ bool                   bDisableDesignOverride;

// everything after this point is technically part of subclasses via CActorDataBase
/*0x108*/ uint64_t               pad[2];
/*0x118*/ CMatrix44              positionMtx;
/*0x158*/ CVector3               orientation;
/*0x164*/ int                    actorIndex;
/*0x168*/ const char*            szActorTag;
/*0x170*/ const char*            szActorName;
/*0x178*/ int                    pitchType;
/*0x17c*/ uint32_t               flags;
/*0x180*/ float                  scaleFactor;
/*0x184*/ float                  boundingRadius;
/*0x188*/ uint32_t               collisionRestrictionMask;
/*0x18c*/ int                    collisionGroup;
/*0x190*/
// additional stuff
};

using EQSWITCH DEPRECATE("Use CActor instead of EQSWITCH") = CActor;
using PEQSWITCH DEPRECATE("Use CActor* instead of PEQSWITCH") = CActor*;


//============================================================================
// ActorBase
//============================================================================

class [[offsetcomments]] ActorBase
{
public:
	virtual ~ActorBase();
	virtual int Reset(const char*, bool) = 0;
	virtual bool IsActorUsingNewStyleModel() = 0;

/*0x008*/ char        TextureType;
/*0x009*/ char        Material;
/*0x00a*/ char        Variation;
/*0x00b*/ char        HeadType;
/*0x00c*/ uint8_t     FaceStyle;
/*0x00d*/ uint8_t     HairColor;
/*0x00e*/ uint8_t     FacialHairColor;
/*0x00f*/ uint8_t     EyeColor1;
/*0x010*/ uint8_t     EyeColor2;
/*0x011*/ uint8_t     HairStyle;
/*0x012*/ uint8_t     FacialHair;
/*0x014*/ int         Race;
/*0x018*/ int         RaceOverride;
/*0x01c*/ int         Class;
/*0x020*/ uint8_t     Gender;
/*0x021*/ char        ActorDef[0x40];
/*0x064*/ uint32_t    ArmorColor[9];
/*0x088*/ bool        bShowHelm;
/*0x08c*/ int         Heritage;                 // drakkin only face setting
/*0x090*/ int         Tattoo;                   // drakkin only face setting
/*0x094*/ int         Details;                  // drakkin only face setting
/*0x098*/ EQUIPMENT   ActorEquipment;
/*0x14c*/
};

//============================================================================
// ActorClient
//============================================================================
class CObjectGroupStage;

class [[offsetcomments]] CObjectGroupStageInstance : public TListNode<CObjectGroupStageInstance>
{
public:
	/*0x18*/ CActorInterface* pActor1;
	/*0x20*/ CActorInterface* pActor2;
	/*0x28*/ CObjectGroupStage* pStage;
	/*0x30*/
};

class [[offsetcomments]] ActorClient : public ActorBase
{
	FORCE_SYMBOLS;

public:
	virtual int Reset(const char*, bool) { return 0; };
	virtual bool IsActorUsingNewStyleModel() { return false; }

/*0x150*/ int                      LeftEyeMaterialIndex;
/*0x154*/ int                      RightEyeMaterialIndex;
/*0x158*/ CParticlePointInterface* pParticlePoints[10];
/*0x1a8*/ CBoneGroupInterface*     pLowerBones;
/*0x1b0*/ CBoneGroupInterface*     pUpperBones;
/*0x1b8*/ CActorInterface*         pActor;
/*0x1c0*/ CLightInterface*         pLight;
/*0x1c8*/ ActorAnimation*          pActorAnimation;
/*0x1d0*/ TList<CObjectGroupStageInstance> StageInstances;
/*0x1e0*/ bool                     bActiveTransition;
/*0x1e4*/ unsigned int             CurrentStage;
/*0x1e8*/ float                    ZOffset;
/*0x1ec*/ CVector3                 AdjustedLoc;
/*0x1f8*/ bool                     bReplacedStaticObject;
/*0x1fc*/ int                      PartialFaceNumber;
/*0x200*/ bool                     bNewArmorDisabled;
/*0x208*/ CActorApplicationData*   pApplicationData;
/*0x210*/

	ALT_MEMBER_GETTER_DEPRECATED(CActorInterface*, pActor, pcactorex, "Use pActor instead of pcactorex");
};

} // namespace eqlib
