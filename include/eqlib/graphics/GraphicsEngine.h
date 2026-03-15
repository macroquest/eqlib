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

#include "eqlib/game/ForwardDecls.h"
#include "eqlib/game/Color.h"
#include "eqlib/game/Constants.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/EQDX9.h"
#include "eqlib/game/MathTypes.h"
#include "eqlib/game/Types.h"
#include "eqlib/game/UITypes.h"

#include <d3d9.h>

struct ID3DXBuffer;

namespace eqlib {

struct ActorTagInfo;
class ActorTagManager;

class CActorApplicationData;
class CDisplay;
class CRender;
class CCameraInterface;
class CParticleCloudInterface;
class CParticleCloudDefinitionInterface;
class CParticlePointInterface;
class CPhysicsInfo;
class CLightDefinitionInterface;
class CThickLineInterface;

class EQPlacedItem;
class MissileBase;
class PlayerBase;
class PlayerZoneClient;

struct SWadFile;

class CRenderInterface;
class CTerrainSystemInterface;
class CResourceManagerInterface;
class CFastFileInterface;
class CSceneGraphInterface;
class CParticleSystemInterface;
class CCollisionInterface;
class CMathInterface;
class CThickLinkSystemInterface;
class CDebugDrawInterface;
class CPropertySet;


// The graphics engine holds pointers to all the components
struct SGraphicsEngine
{
	CFastFileInterface* pFastFile;
	CResourceManagerInterface* pResourceManager;
	CSceneGraphInterface* pSceneGraph;
	CRender* pRender;
	CParticleSystemInterface* pParticleSystem;
	CCollisionInterface* pCollision;
	CMathInterface* pMath;
	CThickLinkSystemInterface* pThickLinkSystem;
	CDebugDrawInterface* pDebugDraw;
	CPropertySet* pEngineProperties;
	CTerrainSystemInterface* pTerrainSystem;
};

using CreateGraphicsEngineFunc = int(*)(SGraphicsEngine** ppGraphicsEngine);
using ReleaseGraphicsEngineFunc = int(*)(SGraphicsEngine* pGraphicsEngine);

using AREACALLBACKPTR = uint32_t(*)(const void*, uint32_t);
using VALIDATIONCALLBACKPTR = bool(*)(CActorApplicationData*, int);
using RANGECALLBACKPTR = bool(*)(void*, float, int);
using GENERICCOLLISIONPTR = bool(*)(float, float, float, float, float, float, float*, float*, float*, uint8_t);

enum EStatus
{
	eStatusSuccess,
	eStatusFailure = -1,
};

enum EMemoryPoolManagerType
{
	eMemoryPoolManagerTypePersistent,
	eMemoryPoolManagerTypeOnDemand,
	eMemoryPoolManagerTypeZone,
	eNumMemoryPoolManagerTypes
};

enum ECollisionVolumeType
{
	eCollisionVolumeNone = 0,
	eCollisionVolumeModel,
	eCollisionVolumeSphere,
	eCollisionVolumeDag,
	eCollisionVolumeBox,
};

enum EObjectPreviewMode
{
	eObjectPreviewModeNone = -1,
	eObjectPreviewModeWindowInstance,
	eObjectPreviewModeMarketplace,
	eNumObjectPreviewModes,
};

struct EQLOC
{
	float x;
	float y;
	float z;
};

class EQEffect
{
public:
	static EQEffect* top;

	EQLIB_OBJECT ~EQEffect();
	EQLIB_OBJECT EQEffect(EQEffect*, char*, int, EQLOC*, PlayerZoneClient*, EQMissile*, EQRGB*, float, int, int, float, float);
};

class EqEmitterData
{
public:
	EQLIB_OBJECT EqEmitterData();
	EQLIB_OBJECT void SetLoadString(char*);
};

//============================================================================

class CDebugDrawInterface
{
public:
	virtual ~CDebugDrawInterface() {}

	virtual void SetCachingState(bool enable, void* state) = 0;
	virtual void SetCachingOptions(void* options) = 0;
	virtual const void* GetCachingOptions() const = 0;
	virtual void UpdateCachedData(int type, void* data, uint32_t len) = 0;
	virtual bool IsUsingCaching() const = 0;

	virtual void TransformWorldToCamera(const CVector3& world, CVector3& camera) = 0;
	virtual void DrawBox(const CAABox& aaBox, const CMatrix44& worldTransform, uint32_t color, uint32_t time) = 0;
};

class CCollisionInfoAABox;
class CCollisionInfoActor;
class CCollisionInfoLineSegment;
class CCollisionInfoRay;
class CCollisionInfoSphere;
class CVector3;
class CLineSegment;
class CRay;
class CSphere;

class CCollisionGroupMask
{
public:
	uint32_t collisionGroupMask = 0xffffffff;
};

class CCollisionInfoBase
{
public:
	CVector3 start;
	CVector3 end;
	CVector3 direction;
	CVector3 normalized;
	float lengthInverse;
	float collisionTime;
	CVector3 surfaceNormal;
	CVector3 skitterDirection;
	float skitterDist;
	bool collided;
	bool abortTesting;
	CActorInterfaceBase* currentActor;
	CXStr currentActorName;
	bool transparentIgnored;
	bool passableBlocking;
	bool terrainCollisionsEnabled;
	CCollisionGroupMask enabledCollisionGroups;
	bool backfaceCollisionsIgnored;
	uint32_t terrainFaceIndex;
	uint32_t terrainVertexOffset;
};

class CCollisionInfoLineSegment : public CCollisionInfoBase
{
public:
};

class CCollisionInterface
{
public:
	enum EDebugDrawMode
	{
		eDebugDrawEnable,
		eDebugDrawTerrain,
		eDebugDrawActors,
		eDebugDrawActorTests,
		eDebugDrawSphereTests,
		eDebugDrawRayTests,
		eDebugDrawLineSegmentTests,
		eDebugDrawTerrainNodes,
		eDebugDrawActorNormals,
		eDebugDrawTerrainNormals,
		eDebugDrawCount
	};

	enum EDebugActorNode
	{
		eHide,
		eShowMoving,
		eShowAll
	};

/*0x00*/ virtual bool Collide(CCollisionInfoAABox&) = 0;
/*0x08*/ virtual bool Collide(CCollisionInfoActor&) = 0;
/*0x10*/ virtual bool Collide(CCollisionInfoSphere&) = 0;
/*0x18*/ virtual bool Collide(CCollisionInfoRay&) = 0;
/*0x20*/ virtual bool Collide(CCollisionInfoLineSegment&) = 0;
/*0x28*/ virtual bool CollideWithTerrain(const CLineSegment&, CVector3&) = 0;
/*0x30*/ virtual bool CollideWithTerrain(const CRay&, CVector3&) = 0;
/*0x38*/ virtual bool CollideWithTerrain(const CSphere&) = 0;
/*0x40*/ virtual void SetDebugDraw(EDebugDrawMode, bool) = 0;
/*0x48*/ virtual bool GetDebugDraw(EDebugDrawMode) = 0;
/*0x50*/ virtual void DebugSetActorModelDisplay(EDebugActorNode) = 0;
/*0x58*/ virtual EDebugActorNode DebugGetActorModelDisplay() = 0;
/*0x60*/ virtual void Unknown0x60() = 0;
/*0x68*/ virtual void Unknown0x68() = 0;
/*0x70*/ virtual void Unknown0x70() = 0;
/*0x78*/ virtual void Unknown0x78() = 0;
/*0x80*/ virtual void Unknown0x80() = 0;
/*0x88*/ virtual void Unknown0x88() = 0;
/*0x90*/ virtual void Unknown0x90() = 0;
/*0x98*/ virtual void Unknown0x98() = 0;
/*0xa0*/ virtual void Unknown0xa0() = 0;
/*0xa8*/ virtual void Unknown0xa8() = 0;
/*0xb0*/ virtual uint32_t GetStatistic(int) = 0;
/*0xb8*/ virtual const char* GetStatisticName(int) = 0;
/*0xc0*/ virtual ~CCollisionInterface() {}
};

//============================================================================

struct SEQGraphicsDisplayMode;
struct SDeviceInfo;
class CBufferSet;
class CEffect;
class CRenderEffect;

//----------------------------------------------------------------------------
struct [[offsetcomments]] SDeviceInputProxy
{
	struct [[offsetcomments]] MouseData
	{
	/*0x000*/ CIVector3         Position;
	/*0x00c*/ char              Unknown0[0xa4];
	/*0x0b0*/ uint8_t           LastClickState[NUM_MOUSE_BUTTONS];
	/*0x0b8*/ uint8_t           CurrentClickState[NUM_MOUSE_BUTTONS];
	/*0x0c0*/ bool              Unknown1[0x58];
	/*0x118*/ uint32_t          RightButton;
	/*0x11c*/ uint32_t          LeftButton;
	/*0x120*/
	};

	struct [[offsetcomments]] EventData
	{
	/*0x0000*/ char              Unknown2[0x5b6];
	/*0x05b6*/ uint8_t           CurrentEventID;
	/*0x05b7*/ uint8_t           CurrentEventStatus;
	/*0x05b8*/ int               Unknown3[0x2c5];
	/*0x10cc*/ uint16_t          Unknown4;
	/*0x10ce*/ uint8_t           LastEventID;
	/*0x10cf*/ uint8_t           LastEventStatus;
	/*0x10d0*/
	};

/*0x0000*/ MouseData mouse;
/*0x0120*/ EventData events;
/*0x11f0*/
};

enum SDeviceInputState
{
	SDeviceInputState_Blocked        = 1,
	SDeviceInputState_Triggered      = 2,
	SDeviceInputState_Pending        = 4,
	SDeviceInputState_Bypassed       = 8
};

struct [[offsetcomments]] SDeviceInputEvent
{
/*0x000*/ int                Unknown0[0x172];
/*0x5c8*/ uint32_t           EventStateBitmask;
/*0x5cc*/
};

// size: 0x818
struct SItemPlacementStatsDisplay
{
	char unknown[0x818]; // fixme x64
};

class CBatchNode;
class CSubsetNode;
class CLitBatchNode;
class CTerrainBatchNode;
class CRenderNode;
class CLightNode;
struct BMI;

class CMemoryPoolManager;

//----------------------------------------------------------------------------

// text flags used for rendering text. Used between the text object interface and DrawWrappedText.
enum DrawTextFlags
{
	DrawText_NoWrap       = 0x01,
	DrawText_CalcOnly     = 0x02,
	DrawText_Elide        = 0x04,
	DrawText_RightJustify = 0x08,
	DrawText_HCenter      = 0x10,
	DrawText_VCenter      = 0x20,
};

class CTextObjectInterface
{
public:
	virtual void SetText(const char* szText) = 0;
	virtual CXStr& GetText() = 0;

	virtual void SetParameters(int fontStyle, const CXRect& rect, const CXRect& clipRect, COLORREF color, uint16_t flags, int offset) = 0;
	virtual void SetParameters(int fontStyle, int x, int y, int width, int height, const CXRect& clipRect, COLORREF color, uint16_t flags, int offset) = 0;
};

class [[offsetcomments]] CTextObjectBase : public CTextObjectInterface
{
public:
	CXStr& GetText() override { return m_text; }
	void SetText(const char* szText) override
	{
		if (m_text != szText)
		{
			m_text = szText;
			m_dirty = true;
		}
	}

	COLORREF GetColor() const { return m_color;  }
	const CXRect& GetRect() const { return m_rect; }

public:
/*0x04*/ CXStr                    m_text;
/*0x08*/ int                      m_font;
/*0x0c*/ CXRect                   m_rect;
/*0x1c*/ COLORREF                 m_color;
/*0x20*/ CTextObjectBase*         m_pNext;
/*0x24*/ CTextObjectBase*         m_pPrev;
/*0x28*/ IDirect3DVertexBuffer9*  m_pVertexBuffer;
/*0x2c*/ bool                     m_dirty;
/*0x2d*/ bool                     m_render;
/*0x30*/ int                      m_maxLength;
/*0x34*/
};

class [[offsetcomments]] CTextObject : public CTextObjectBase
{
public:
	const CXRect& GetClipRect() const { return m_clipRect; }
	uint16_t GetFlags() const { return m_flags; }

private:
/*0x34*/ CXRect                   m_clipRect;
/*0x44*/ uint16_t                 m_flags;
/*0x48*/ int                      m_offset;
/*0x4c*/
};

//============================================================================
// ActorAnimation
//============================================================================

// TODO: Move Actor classes to its own header
class [[offsetcomments]] ActorAnimation
{
public:
/*0x00*/ ActorAnimation*    pPrev;
/*0x04*/ ActorAnimation*    pNext;
/*0x08*/ char               Name[30];
/*0x28*/ void*              pActordef;                // CActorDefinitionInterface*
/*0x2c*/ void**             Anim;                     // EQAnimation
/*0x30*/ int                NumBones;
/*0x34*/ bool               bUsesLuclinAnimations;
/*0x35*/ bool               bNewStyleModel;
/*0x38*/ float              ParticleEmitterScaleFactor;
/*0x3c*/ float              TargetIndicatorScaleFactor;
/*0x40*/ float              FirstPersonCameraOffset;
/*0x44*/ float              ThirdPersonCameraOffset;
/*0x48*/ float              VerticalCameraOffset;
/*0x4c*/ float              CollisionSphereScaleFactor;
/*0x50*/ float              ZoomCameraMinimumDistance;
/*0x54*/ int                NumAnimations;
/*0x58*/ int                NumAnimationSlots;
/*0x5c*/
};

//============================================================================
// ActorTagManager
//============================================================================

struct ActorTagInfo
{
	uint32_t actorTagID;
	uint32_t type;
	int skill;
};

class ActorTagManager
{
public:
	ActorTagInfo* GetInfo(uint32_t actorTagID);
};

} // namespace eqlib

