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
#include "EQDX9.h"
#include "ForwardDecls.h"
#include "base/Color.h"

struct ID3DXBuffer;

namespace eqlib {

struct ActorTagInfo;
class ActorTagManager;

class CDisplay;
class CRender;
class CCameraInterface;
class CParticleCloudInterface;
class CParticlePointInterface;
class CPhysicsInfo;
class CLightDefinitionInterface;
class CThickLineInterface;
class CGameFaceRender;
class CGameFaceRenderInterface;

class EQPlacedItem;
class MissileBase;
class PlayerBase;
class PlayerZoneClient;

struct SWadFile;

//============================================================================

// The graphics engine holds pointers to all the components
struct SGraphicsEngine
{
public:
/*0x00*/ CFastFileInterface*        pFastFile;
/*0x08*/ CResourceManagerInterface* pResourceManager;
/*0x10*/ CSceneGraphInterface*      pSceneGraph;
/*0x18*/ CRender*                   pRender;
/*0x20*/ CParticleSystemInterface*  pParticleSystem;
/*0x28*/ CCollisionInterface*       pCollision;
/*0x30*/ CMathInterface*            pMath;
/*0x38*/ CThickLineSystemInterface* pThickLineSystem;
/*0x40*/ CDebugDrawInterface*       pDebugDraw;
/*0x48*/ CPropertySet*              pProperties;
/*0x50*/ CTerrainSystemInterface*   pTerrainSystem;
/*0x58*/ CGameFaceRenderInterface*  pGameFaceRender;
};

enum EStatus
{
	eStatusSuccess,
	eStatusFailure,
};

enum EMemoryPoolManagerType
{
	eMemoryPoolManagerTypePersistent,
	eMemoryPoolManagerTypeOnDemand,
	eMemoryPoolManagerTypeZone,
	eNumMemoryPoolManagerTypes
};

//============================================================================

class CDebugDrawInterface
{
public:
	virtual ~CDebugDrawInterface() {}
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


struct [[offsetcomments]] SModeInfo
{
/*0x00*/ bool display;
/*0x01*/ bool depth16;
/*0x02*/ bool depth24;
/*0x03*/ bool depth32;
/*0x04*/ bool windowed;
/*0x08*/
};

struct [[offsetcomments]] SDevice
{
/*0x00*/ uint32_t            unk1;
/*0x04*/ uint32_t            unk2;
/*0x08*/ uint32_t            index;
/*0x0c*/ char                name[128];
/*0x8c*/ int                 product;
/*0x90*/ int                 version;
/*0x94*/ int                 subversion;
/*0x98*/ int                 build;
/*0x9c*/ int                 vendorID;
/*0xa0*/ int                 deviceID;
/*0xa4*/ GUID                deviceGUID;
/*0xb4*/ GUID                driverGUID;
/*0xc4*/ bool                supportsLargeTextures;
/*0xc5*/ bool                supportsHardwareTnL;
/*0xc6*/ bool                supportsIndexedVertexBlending;
/*0xc7*/ bool                useFixedFunctionVertexBlending;
/*0xc8*/ int                 vsyncInterval;
/*0xcc*/ uint32_t            num16BitVideoModes;
/*0xd0*/ uint32_t            num32BitVideoModes;
/*0xd4*/ SModeInfo           mode32;
/*0xd9*/ SModeInfo           mode16A;
/*0xde*/ SModeInfo           mode16B;
/*0xe4*/
};

struct [[offsetcomments]] SDeviceInputProxy
{
	struct [[offsetcomments]] MouseData
	{
	/*0x00*/ CIVector3         Position;
	/*0x0c*/ char              Unknown0[0x94];
	/*0xa0*/ uint8_t           LastClickState[NUM_MOUSE_BUTTONS];
	/*0xa8*/ uint8_t           CurrentClickState[NUM_MOUSE_BUTTONS];
	/*0xb0*/ bool              Unknown1[0x44];
	/*0xf4*/ uint32_t          RightButton;
	/*0xf8*/ uint32_t          LeftButton;
	/*0xfc*/
	};

	struct [[offsetcomments]] EventData
	{
	/*0x0000*/ char              Unknown2[0x3da];
	/*0x03da*/ uint8_t           CurrentEventID;
	/*0x03db*/ uint8_t           CurrentEventStatus;
	/*0x03dc*/ int               Unknown3[0x5ba];
	/*0x1ac4*/ uint8_t           LastEventID;
	/*0x1ac5*/ uint8_t           LastEventStatus;
	/*0x1ac8*/
	};

/*0x0000*/ MouseData mouse;
/*0x00fc*/ EventData events;
/*0x1bcc*/
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
/*0x000*/ int                Unknown0[0x179];
/*0x5e4*/ uint32_t           EventStateBitmask;
/*0x5e8*/
};

// size: 0x818
struct SItemPlacementStatsDisplay
{
	char unknown[0x818]; // fixme x64
};

template <typename T>
class TNodePool
{
public:
/*0x00*/ TList<T> freeList;
/*0x08*/ uint32_t allocCount;
/*0x0c*/ uint32_t freeNodeCount;
/*0x10*/ uint32_t totalAllocCount;
};

class CBatchNode;
class CSubsetNode;
class CLitBatchNode;
class CTerrainBatchNode;
class CRenderNode;
class CLightNode;
struct BMI;

class CMemoryPoolManager;

using RenderCallbackPtr = void(*)();

class [[offsetcomments]] CRenderInterface
{
public:
/*0x000*/ virtual void SetDebugShaderPath(const char* debugShaderPath) = 0;
/*0x004*/ virtual void SetReleaseShaderPath(const char* releaseShaderPath) = 0;
/*0x008*/ virtual int GetDesktopWidth() = 0;
/*0x00C*/ virtual int GetDesktopHeight() = 0;
/*0x010*/ virtual int GetDesktopDepth() = 0;
/*0x014*/ virtual int GetDesktopRefreshRate() = 0;
/*0x018*/ virtual int GetDisplayWidth() = 0;
/*0x01C*/ virtual int GetDisplayHeight() = 0;
/*0x020*/ virtual int GetDisplayDepth() = 0;
/*0x024*/ virtual int GetDisplayRefreshRate() = 0;
/*0x028*/ virtual bool IsDisplayRgb565() = 0;
/*0x02C*/ virtual int GetNumberOfModes() = 0;
/*0x030*/ virtual HWND GetHWND() = 0;
/*0x034*/ virtual int GetModeInfo(int index, SEQGraphicsDisplayMode* mode) = 0;
/*0x038*/ virtual int GetMaxTextureWidth() const = 0;
/*0x03C*/ virtual int GetMaxTextureHeight() const = 0;
/*0x040*/ virtual bool SupportsDXT1Textures() = 0;
/*0x044*/ virtual bool SupportsDXT3Textures() = 0;
/*0x048*/ virtual bool Supports4444Textures() = 0;
/*0x04C*/ virtual bool SupportsLargeTextures() = 0;
/*0x050*/ virtual int GetTotalTextureMemory() = 0;
/*0x054*/ virtual bool GetFullScreen() = 0;
/*0x058*/ virtual int EnumerateDevices(SDeviceInfo* deviceInfo, int* numDevices, HINSTANCE hInstance) = 0;
/*0x05C*/ virtual bool InitDevice(int device, HWND hWnd, bool min) = 0;
/*0x060*/ virtual void ReleaseDevice(bool) = 0;
/*0x064*/ virtual void SetResolutionBasedOnDesktop() = 0;
/*0x068*/ virtual void SetResolution(int index) = 0;
/*0x06C*/ virtual void SetResolution(int width, int height, int depth, int refreshRate) = 0;
/*0x070*/ virtual void Unknown0x70() = 0;
/*0x074*/ virtual void SetFullscreen(bool fullscreen) = 0;
/*0x078*/ virtual void SetFog(bool enable, int zmin, int zmax, float density, RGB color) = 0;
/*0x07C*/ virtual void SetGammaLevel(float gamma) = 0;
/*0x080*/ virtual void RestoreDesktopGammaRamp() = 0;
/*0x084*/ virtual void SetDesktopGammaRampForWindowedMode() = 0;
/*0x088*/ virtual void DrawLine2D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x08C*/ virtual void DrawLine3D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x090*/ virtual int DrawWrappedText(int font, const char* text, const CXRect& rect, const CXRect& clip,
	COLORREF color, uint16_t flags, int offset) = 0;
/*0x094*/ virtual int DrawWrappedText(CTextObjectInterface* textObj) = 0;
/*0x098*/ virtual int DrawTexturedQuad(CVector3* points, CVector2* texCoords, RGB color, BMI* bmi) = 0;
/*0x09C*/ virtual void DrawTintedBlendTexturedQuad(CVector3* points, CVector2* texCoords, int tint1, int tint2,
	BMI* bmi1, BMI* bmi2, bool border) = 0;
/*0x0A0*/ virtual void DrawQuad(CVector3* points, RGB color) = 0;
/*0x0A4*/ virtual void ClearDeferred2D() = 0;
/*0x0A8*/ virtual void ClearBackBufferToBlack() = 0;
/*0x0AC*/ virtual void RenderScene() = 0;
/*0x0B0*/ virtual void RenderBlind() = 0;
/*0x0B4*/ virtual void UpdateDisplay() = 0;
/*0x0B8*/ virtual void SetCensorship(bool) = 0;
/*0x0BC*/ virtual void SetCurrentLanguage(int) = 0;
/*0x0C0*/ virtual void ClearDisplayBuffers() = 0;
/*0x0C4*/ virtual void ScreenCapture(const char* filename) = 0;
/*0x0C8*/ virtual void ScreenCaptureToBMI(BMI** ppBMI) = 0;
/*0x0CC*/ virtual RenderCallbackPtr SetRenderCallback(RenderCallbackPtr callback) = 0;
/*0x0D0*/ virtual void RotateStats() = 0;
/*0x0D4*/ virtual void SetItemPlacementStats(const SItemPlacementStatsDisplay* stats, bool) = 0;
/*0x0D8*/ virtual void ShowItemPlacementStats(bool) = 0;
/*0x0DC*/ virtual void TransformWorldToCamera(const CVector3& world, CVector3& camera) = 0;
/*0x0E0*/ virtual void GetEyeOffset(CVector3& pos) = 0;
/*0x0E4*/ virtual uint32_t SetDebugFlags(uint32_t flags) = 0;
/*0x0E8*/ virtual const char* GetCurrentDeviceName() = 0;
/*0x0EC*/ virtual void ParsePatchLighting(uint32_t patch, const char* filename) = 0;
/*0x0F0*/ virtual void EnableAutoMipMapping(bool, bool) = 0;
/*0x0F4*/ virtual void SetRenderOption(int option, int value) = 0;
/*0x0F8*/ virtual float GetFogEnd() = 0;
/*0x0FC*/ virtual float GetFogStart() = 0;
/*0x100*/ virtual uint32_t GetFogColor() = 0;
/*0x104*/ virtual int GetDeviceFeature(int feature) = 0;
/*0x108*/ virtual void DisplayStats(int stats) = 0;
/*0x10C*/ virtual void EnableObjectPreview(bool, int) = 0;
/*0x110*/ virtual void IsObjectPreviewEnabled(int) = 0;
/*0x114*/ virtual void SetObjectPreviewActor(CActorInterface* actor, int) = 0;
/*0x118*/ virtual void DrawObjectPreview(const CXRect& rect, COLORREF color, int) = 0;
/*0x11C*/ virtual void ResizeObjectPreview(int width, int height, int) = 0;
/*0x120*/ virtual void SetObjectPreviewMode(int) = 0;
/*0x124*/ virtual void SetPostEffect(int type, int state, float intensity, uint32_t fade, COLOR* color) = 0;
/*0x128*/ virtual void SetPersistentPostEffect(int type, bool on) = 0;
/*0x12C*/ virtual void SetPersistentIntensity(int type, float value) = 0;
/*0x130*/ virtual ID3DXBuffer* GetScreenCapData() = 0;
/*0x134*/ virtual void ClearScreenCapData() = 0;
};

constexpr int NUM_BLEND_MATRICES = 8;
constexpr int MAX_BUFFER_SET = 34;
constexpr int MAX_EFFECTS = 148;
constexpr int MAX_RENDER_EFFECTS = 217;
constexpr int MAX_VERTEX_DECLARATIONS = 20;
constexpr int MAX_EFFECT_PASS_COUNT = 6;

class [[offsetcomments]] CRender : public CRenderInterface
{
public:
/*0x0000*/ //vftable
/*0x0008*/ SDevice                   aDevices[16];
/*0x0e48*/ int                       nDeviceCount;
/*0x0e50*/ SDevice*                  pCurrentDevice;
/*0x0e58*/ bool                      bDeviceInitialized;
/*0x0e5c*/ D3DFORMAT                 adapterFormat;
/*0x0e60*/ int                       Unknown0xe60;
/*0x0e64*/ int                       Unknown0xe64;
/*0x0e68*/ int                       Unknown0xe68;
/*0x0e6c*/ int                       Unknown0xe6c;
/*0x0e70*/ int                       nDisplayWidth;
/*0x0e74*/ int                       nDisplayHeight;
/*0x0e78*/ int                       nDisplayDepth;
/*0x0e7c*/ int                       nDisplayRefreshRate;
/*0x0e80*/ bool                      bFullscreen;
/*0x0e81*/ bool                      bWindowedModeAvailable;
/*0x0e88*/ D3DPRESENT_PARAMETERS     d3dpp;
/*0x0ec8*/ uint32_t                  frameId;
/*0x0ecc*/ bool                      bSupportsMipMaps;
/*0x0ecd*/ bool                      bSupportsTrilinearMipMaps;
/*0x0ece*/ bool                      bAutoMipMapping;
/*0x0ed0*/ uint32_t                  uMaxVertexBlendMatrices;
/*0x0ed4*/ bool                      bSupportsDXT1Textures;
/*0x0ed5*/ bool                      bSupportsDXT3Textures;
/*0x0ed6*/ bool                      bSupports4444Textures;
/*0x0ed7*/ bool                      bSupportsDotProduct3;
/*0x0ed8*/ bool                      bRGB565Mode;
/*0x0ed9*/ bool                      bUseMode16A;
/*0x0eda*/ bool                      bUseSoftwareVertexProcessing;
/*0x0edb*/ bool                      bUseMixedVertexProcessing;
/*0x0edc*/ bool                      bUseHardwareVertexProcessing;
/*0x0edd*/ bool                      bUseHardwareVertexShaders;
/*0x0ede*/ bool                      bUseHardwareIndexedVertexBlending;
/*0x0edf*/ bool                      bUse1PassTechniques;
/*0x0ee0*/ uint32_t                  uTotalTextureMemory;
/*0x0ee4*/ int                       nTextureQuality;
/*0x0ee8*/ uint64_t                  unknown0xee8;
/*0x0ee8*/ HWND                      hWnd;
/*0x0ef0*/ Direct3D9*                pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0ef8*/ Direct3DDevice9*          pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0f00*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0f08*/ D3DVIEWPORT9              D3DViewPort;
/*0x0f20*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1050*/ float                     GammaLevel;
/*0x1058*/ Direct3DSwapChain9*       pD3DSwapChain;
/*0x1060*/ bool                      bWindowedGamma;
/*0x1061*/ bool                      bWindowedGammaEverToggled;
/*0x1062*/ bool                      bLinearGammaContent;
/*0x1068*/ ID3DXBuffer*              screenCapFileData;
/*0x1070*/ __declspec(align(16)) CMatrix44 matrixIdentity;
/*0x10b0*/ __declspec(align(16)) CMatrix44 aMatrixWorldCurrent[NUM_BLEND_MATRICES];
/*0x12b0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverse[NUM_BLEND_MATRICES];
/*0x14b0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverseTransposed[NUM_BLEND_MATRICES];
/*0x16b0*/ CMatrix44*                apMatrixWorld[NUM_BLEND_MATRICES];
/*0x16f0*/ CMatrix44                 matrixViewProj;
/*0x1730*/ CMatrix44                 matrixView;
/*0x1770*/ IDirect3DIndexBuffer9*    pIndexBufferLitData;
/*0x1778*/ CBufferSet*               apBufferSets[MAX_BUFFER_SET];
/*0x1888*/ CEffect*                  apEffects[MAX_EFFECTS];
/*0x1d28*/ CRenderEffect*            apRenderEffects[MAX_RENDER_EFFECTS];
/*0x23f0*/ IDirect3DVertexDeclaration9* apVertexDeclarations[MAX_VERTEX_DECLARATIONS];
/*0x2490*/ Direct3DTexture9*         pAttenuationLookupTexture;
/*0x2498*/ Direct3DTexture9*         pSpecularPower68LookupTexture;
/*0x24a0*/ IDirect3DCubeTexture9*    pNormalizationLookupCubeTexture;
/*0x24a8*/ TNodePool<CBatchNode>*    pBatchNodePool;
/*0x24b0*/ TNodePool<CSubsetNode>*   pSubsetNodePool;
/*0x24b8*/ TNodePool<CLitBatchNode>* pLitBatchNodePool;
/*0x24c0*/ TNodePool<CTerrainBatchNode>* pTerrainBatchNodePool;
/*0x24c8*/ TList<CRenderNode>        renderNodeListSinglePass[MAX_EFFECT_PASS_COUNT];
/*0x2528*/ TList<CRenderNode>        renderNodeListZPass[MAX_EFFECT_PASS_COUNT];
/*0x2588*/ TList<CRenderNode>        renderNodeListTexturePass[MAX_EFFECT_PASS_COUNT];
/*0x25e8*/ TNodePool<CRenderNode>*   pRenderNodePool;
/*0x25f0*/ TList<CLightNode>         activeLightList;
/*0x2600*/ TNodePool<CLightNode>*    pLightNodePool;
/*0x2608*/ int                       renderedTextureCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x33e8*/ int                       renderedTerrainBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x41c8*/ int                       renderedTerrainBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x4fa8*/ int                       renderedBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x5d88*/ int                       renderedBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x6b68*/ int                       renderedSubsetCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7948*/ int                       renderedSubsetTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x8728*/ int                       nStatsType;
/*0x872c*/ bool                      bShowItemPlacementStats;
/*0x872d*/ SItemPlacementStatsDisplay itemPlacementStats;
/*0x8f48*/ float                     fColorIntensityLookup[256];
/*0x9348*/ float                     fLookup[2048];
/*0xb348*/ CVector3                  eyeOffset;
/*0xb354*/ uint32_t                  uRegionCount;
/*0xb358*/ bool                      bFogEnabled;
/*0xb35c*/ RGB                       rgbFogColor;
/*0xb360*/ float                     fFogStart;
/*0xb364*/ float                     fFogEnd;
/*0xb368*/ float                     fFogDensity;
/*0xb370*/ RenderCallbackPtr         pfnRenderCallback;
/*0xb378*/ bool                      bCensorship;
/*0xb380*/ CMemoryPoolManager*       pLitTriangleMemoryPoolManager;
/*0xb388*/ CMemoryPoolManager*       pLitBatchMemoryPoolManager;
/*0xb390*/ // ... much more
};

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
/*0x08*/ CXStr                    m_text;
/*0x10*/ int                      m_font;
/*0x14*/ CXRect                   m_rect;
/*0x24*/ COLORREF                 m_color;
/*0x28*/ CTextObjectBase*         m_pNext;
/*0x30*/ CTextObjectBase*         m_pPrev;
/*0x38*/ IDirect3DVertexBuffer9*  m_pVertexBuffer;
/*0x40*/ bool                     m_dirty;
/*0x41*/ bool                     m_render;
/*0x44*/ int                      m_maxLength;
/*0x48*/
};

class [[offsetcomments]] CTextObject : public CTextObjectBase
{
public:
	const CXRect& GetClipRect() const { return m_clipRect; }
	uint16_t GetFlags() const { return m_flags; }

private:
/*0x48*/ CXRect                   m_clipRect;
/*0x58*/ uint16_t                 m_flags;
/*0x5c*/ int                      m_offset;
/*0x60*/
};

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

class CActor;

template <typename NodeType, typename T>
class TDataNode : public TListNode<NodeType>
{
public:
/*0x00*/ T* pData = nullptr;;
};

struct CActorNode : TDataNode<CActorNode, CActor> {};
using CActorList = TList<CActorNode>;

struct CActorInterfaceNode : TDataNode<CActorInterfaceNode, CActorInterface> {};
using CActorInterfaceList = TList<CActorInterfaceNode>;


//============================================================================
// ActorAnimation
//============================================================================

// TODO: Move Actor classes to its own header
class [[offsetcomments]] ActorAnimation
{
public:
/*0x00*/ ActorAnimation*    pPrev;
/*0x08*/ ActorAnimation*    pNext;
/*0x10*/ char               Name[30];
/*0x30*/ void*              pActordef;                // CActorDefinitionInterface*
/*0x38*/ void**             Anim;                     // EQAnimation
/*0x40*/ int                NumBones;
/*0x44*/ bool               bUsesLuclinAnimations;
/*0x45*/ bool               bNewStyleModel;
/*0x48*/ float              ParticleEmitterScaleFactor;
/*0x4c*/ float              TargetIndicatorScaleFactor;
/*0x50*/ float              FirstPersonCameraOffset;
/*0x54*/ float              ThirdPersonCameraOffset;
/*0x58*/ float              VerticalCameraOffset;
/*0x5c*/ float              CollisionSphereScaleFactor;
/*0x60*/ float              ZoomCameraMinimumDistance;
/*0x64*/ int                NumAnimations;
/*0x68*/ int                NumAnimationSlots;
/*0x6c*/
};

//============================================================================
// CActorApplicationData
//============================================================================

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

	virtual const EQSwitch *AsSwitch() const = 0;
	virtual EQSwitch *AsSwitch() = 0;

	virtual const EQPlacedItem* AsPlacedItem() const = 0;
	virtual EQPlacedItem* AsPlacedItem() = 0;
};

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
/*0x008*/ EMemoryPoolManagerType     memoryPoolManagerType;
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

class CObjectGroupStage;

class [[offsetcomments]] CObjectGroupStageInstance : public TListNode<CObjectGroupStageInstance>
{
public:
/*0x18*/ CActorInterface* pActor1;
/*0x20*/ CActorInterface* pActor2;
/*0x28*/ CObjectGroupStage* pStage;
/*0x30*/
};

struct [[offsetcomments]] ARMOR
{
/*0x00*/ unsigned int ID;                        // idfile on Lucy
/*0x04*/ unsigned int Var;
/*0x08*/ unsigned int Material;
/*0x0c*/ unsigned int NewArmorID;
/*0x10*/ unsigned int NewArmorType;
/*0x14*/
};

struct [[offsetcomments]] ArmorProperties
{
/*0x00*/ uint32_t type = 0;
/*0x04*/ uint32_t variation = 0;
/*0x08*/ uint32_t material = 0;
/*0x0c*/ uint32_t newArmorID = 0;
/*0x10*/ uint32_t newArmorType = 0;
/*0x14*/
};

inline namespace deprecated {
	using PARMOR DEPRECATE("Use ArmorProperties* instead of PARMOR") = ARMOR*;
}

struct [[offsetcomments]] EQUIPMENT
{
	union {
/*0x00*/ struct { ARMOR Item[9]; };          // EQUIPARRAY
	struct                                   // EQUIPUNIQUE
	{
	/*0x00*/ ARMOR Head;
	/*0x14*/ ARMOR Chest;
	/*0x28*/ ARMOR Arms;
	/*0x3c*/ ARMOR Wrists;
	/*0x50*/ ARMOR Hands;
	/*0x64*/ ARMOR Legs;
	/*0x78*/ ARMOR Feet;
	/*0x8c*/ ARMOR Primary;
	/*0xa0*/ ARMOR Offhand;
	};
};
/*0xb4*/
};

inline namespace deprecated {
	using PEQUIPMENT DEPRECATE("Use EQUIPMENT* instead of PEQUIPMENT") = EQUIPMENT*;
}

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

class CBoneGroupInterface;
class CLightInterface;


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

//============================================================================

enum EnvironmentType
{
	ENVIRONMENT_GENERIC,                // factory default
	ENVIRONMENT_PADDEDCELL,
	ENVIRONMENT_ROOM,                   // standard environments
	ENVIRONMENT_BATHROOM,
	ENVIRONMENT_LIVINGROOM,
	ENVIRONMENT_STONEROOM,
	ENVIRONMENT_AUDITORIUM,
	ENVIRONMENT_CONCERTHALL,
	ENVIRONMENT_CAVE,
	ENVIRONMENT_ARENA,
	ENVIRONMENT_HANGAR,
	ENVIRONMENT_CARPETEDHALLWAY,
	ENVIRONMENT_HALLWAY,
	ENVIRONMENT_STONECORRIDOR,
	ENVIRONMENT_ALLEY,
	ENVIRONMENT_FOREST,
	ENVIRONMENT_CITY,
	ENVIRONMENT_MOUNTAINS,
	ENVIRONMENT_QUARRY,
	ENVIRONMENT_PLAIN,
	ENVIRONMENT_PARKINGLOT,
	ENVIRONMENT_SEWERPIPE,
	ENVIRONMENT_UNDERWATER,
	ENVIRONMENT_DRUGGED,
	ENVIRONMENT_DIZZY,
	ENVIRONMENT_PSYCHOTIC,

	ENVIRONMENT_COUNT                   // total number of environments
};


//----------------------------------------------------------------------------

class [[offsetcomments]] ScreenWndManager
{
public:
	using Callback = bool(*)(CSidlScreenWnd*);

	struct ScreenRecord
	{
		CSidlScreenWnd** pWnd = nullptr;
		Callback activate;
		Callback deactivate;
		Callback clean;
	};

	EQLIB_OBJECT const ScreenRecord* FindScreenRecordByScreenName(const CXStr& name);

/*0x00*/ ArrayClass<ScreenRecord> screens;
/*0x18*/ HashTable<int, CXStr> screensHash;
/*0x30*/ ArrayClass<CSidlScreenWnd*> createdScreens;
/*0x48*/ HashTable<CSidlScreenWnd*, CXStr> createdScreensHash;
/*0x60*/
};


// @size: CDisplay = 0x2E04 @ 0x5F4F15 (05-21-2020 live)
class [[offsetcomments]] CDisplay
{
public:
	EQLIB_OBJECT CDisplay(HWND);
	EQLIB_OBJECT ~CDisplay();

	// Imported Functions
	EQLIB_OBJECT float GetFloorHeight(float X, float Y, float F, float Radius = 0.0f, const CVector3& CollisionVector = CVector3(-1, -1, 1), CActorApplicationData* pAppData = 0, EActorType eActorType = Undefined, float ZOffset = 1.0f);
	EQLIB_OBJECT CActorInterface* GetClickedActor(int X, int Y, bool bClimbLadder, CVector3& outHitLocation, CVector3& outHitNormal);
	EQLIB_OBJECT bool GetWorldFilePath(char*, const char*);
	EQLIB_OBJECT void ReloadUI(bool, bool);
	EQLIB_OBJECT int is_3dON();
	EQLIB_OBJECT float TrueDistance(float fromx, float fromy, float fromz, float tox, float toy, float toz, float zfactor);
	EQLIB_OBJECT void SetViewActor(CActorInterface*);
	EQLIB_OBJECT void SetRenderWindow(int mode);
	EQLIB_OBJECT void ToggleScreenshotMode();
	EQLIB_OBJECT static COLORREF GetUserDefinedColor(int);
	EQLIB_OBJECT static int WriteTextHD2(const char* text, int X, int Y, int color);

	EQLIB_OBJECT void SetYon(float);
	EQLIB_OBJECT void SetActorYon(float);
	EQLIB_OBJECT void SetActorClipPlane(int);
	EQLIB_OBJECT void SetShadowClipPlane(int);

	EQLIB_OBJECT bool GenericSphereColl(float, float, float, float, float, float, float*, float*, float*, unsigned char);
	EQLIB_OBJECT bool SlideSwitchLeftRight(EQSwitch*, float, int, float);
	EQLIB_OBJECT char* GetIniRaceName(int);
	EQLIB_OBJECT PlayerClient* GetNearestPlayerInView(float, bool);
	EQLIB_OBJECT float FindZoneTopZ(float, float, float);
	EQLIB_OBJECT float FixHeading(float);
	EQLIB_OBJECT float HeadingDiff(float, float, float*);
	EQLIB_OBJECT float PlayerDistance(PlayerZoneClient*, PlayerZoneClient*, float);
	EQLIB_OBJECT float PlayerSimpleDistance(PlayerZoneClient*, PlayerZoneClient*, float);
	EQLIB_OBJECT float SetActorBoundingRadius(CActorInterface*, float, float);
	EQLIB_OBJECT float SimpleDistance(float, float, float, float, float, float, float);
	EQLIB_OBJECT int GetItemType(int);
	EQLIB_OBJECT int GetNewPCIniFlag(int, int);
	EQLIB_OBJECT int GetSkyTime(int*, int*);
	EQLIB_OBJECT int is_ParticleSystemON();
	EQLIB_OBJECT int MoveMissile(EQMissile*);
	EQLIB_OBJECT int ShouldLoadNewPcModel(int, int);
	EQLIB_OBJECT int TurnInfravisionEffectOff();
	EQLIB_OBJECT int TurnInfravisionEffectOn();
	EQLIB_OBJECT long SetUserRender(int);
	EQLIB_OBJECT static char* DefaultUIPath;
	EQLIB_OBJECT static char* UIPath;
	EQLIB_OBJECT static void __cdecl SetUserDefinedColor(int, int, int, int);
	EQLIB_OBJECT CLightInterface* CreateLight(unsigned char, float, float, float, float);
	EQLIB_OBJECT CActorInterface* CreateActor(char*, float, float, float, float, float, float, bool, bool);
	EQLIB_OBJECT unsigned char GetEnvironment(float, float, float, int*);
	EQLIB_OBJECT unsigned char GetIntensity(unsigned char);
	EQLIB_OBJECT unsigned char LoadBMPFile();
	EQLIB_OBJECT unsigned char LoadNPCFromS3D(char*, char*, char*);
	EQLIB_OBJECT unsigned char LoadWorldFile(char*, char*, int, unsigned char);
	EQLIB_OBJECT unsigned int IsShield(int) const;
	EQLIB_OBJECT void ActivateMainUI(bool);
	EQLIB_OBJECT void ChangeVideoMode();
	EQLIB_OBJECT void CheckForScreenModeToggle();
	EQLIB_OBJECT void CleanUpDDraw();
	EQLIB_OBJECT void ClearScreen();
	EQLIB_OBJECT void CreatePlayerActor(PlayerClient*);
	EQLIB_OBJECT void DDrawUpdateDisplay();
	EQLIB_OBJECT void DeactivateMainUI();
	EQLIB_OBJECT void default_cameras();
	EQLIB_OBJECT void DefineSoloMode();
	EQLIB_OBJECT void DeleteActor(CActorInterface*);
	EQLIB_OBJECT void DeleteLight(CLightInterface*);
	EQLIB_OBJECT void GetOnActor(CActorInterface*, PlayerZoneClient*);
	EQLIB_OBJECT void hideGrassObjects();
	EQLIB_OBJECT void InitCharSelectUI();
	EQLIB_OBJECT void InitCommonLights();
	EQLIB_OBJECT void InitDDraw();
	EQLIB_OBJECT void InitEverQuestLocale(EQLocalizeLanguage);
	EQLIB_OBJECT void InitUserDefinedColors();
	EQLIB_OBJECT void InitWorld();
	EQLIB_OBJECT void KeyMapUpdated();
	EQLIB_OBJECT void LightningStrike();
	EQLIB_OBJECT void loadGrassObjects(char*);
	EQLIB_OBJECT void MoveLight(CLightInterface*, CPhysicsInfo*);
	EQLIB_OBJECT void MoveLocalPlayerToSafeCoords();
	EQLIB_OBJECT void NewUIProcessEscape();
	EQLIB_OBJECT void PlaySoundAtLocation(float, float, float, int);
	EQLIB_OBJECT void ProcessCloud();
	EQLIB_OBJECT void ProcessEffects();
	EQLIB_OBJECT void ProcessParticleEmitter(EQSwitch*);
	EQLIB_OBJECT void ProcessSky();
	EQLIB_OBJECT void ProcessSwitches();
	EQLIB_OBJECT void ProcessWeather();
	EQLIB_OBJECT void RealRender_World();
	EQLIB_OBJECT void Render_MinWorld();
	EQLIB_OBJECT void Render_World();
	EQLIB_OBJECT void ResetRenderWindow();
	EQLIB_OBJECT void SetActorScaleFactor(CActorInterface*, float, unsigned char);
	EQLIB_OBJECT void SetActorSpriteTint(EQRGB*, CActorInterface*);
	EQLIB_OBJECT void SetActorUserData(CActorInterface*, void*);
	EQLIB_OBJECT void SetAmbientLight(float);
	EQLIB_OBJECT void SetCCreateCamera(int);
	EQLIB_OBJECT void SetDayPeriod(unsigned char);
	EQLIB_OBJECT void SetFog(bool, float, float, unsigned char, unsigned char, unsigned char);
	EQLIB_OBJECT void SetGammaCorrection(float);
	EQLIB_OBJECT void SetGenericEnvironment();
	EQLIB_OBJECT void SetPCloudDensity(int);
	EQLIB_OBJECT void SetSkyBackground();
	EQLIB_OBJECT void SetSkyLayer(int);
	EQLIB_OBJECT void SetSpecialEnvironment(EnvironmentType);
	EQLIB_OBJECT void SetSunLight();
	EQLIB_OBJECT void SetupEmitterEnvironment();
	EQLIB_OBJECT void SetupEQPlayers();
	EQLIB_OBJECT void SetViewActorByName(char*);
	EQLIB_OBJECT void SetViewAngle(int);
	EQLIB_OBJECT void ShowDisplay();
	EQLIB_OBJECT void StartWeather(int, unsigned char);
	EQLIB_OBJECT void StartWorldDisplay(EQZoneIndex);
	EQLIB_OBJECT void StartWorldDisplay_Bailout(const char*);
	EQLIB_OBJECT void StopWeather(int, unsigned char);
	EQLIB_OBJECT void StopWorldDisplay();
	EQLIB_OBJECT void SwitchToDefaultCameraMode();
	EQLIB_OBJECT void ToggleCharacterNameSprites(bool);
	EQLIB_OBJECT void ToggleNpcNameSprites(bool);
	EQLIB_OBJECT void ToggleView();
	EQLIB_OBJECT void UpdateCameraAfterModeSwitch();
	EQLIB_OBJECT void updateGrassObjects();
	EQLIB_OBJECT void UpdateMobileEmitterLocations();
	EQLIB_OBJECT void FreeAllItemLists();

	// private
	EQLIB_OBJECT void CleanCharSelectUI();
	EQLIB_OBJECT void CleanGameUI();
	EQLIB_OBJECT void CleanUpNewUI();
	EQLIB_OBJECT void InitGameUI();
	EQLIB_OBJECT void InitNewUI();

	EQLIB_OBJECT static int* cameraType;

	// Most of these need verification
/*0x0000*/ int                    ErrorFlag;
/*0x0004*/ uint8_t                BFog;
/*0x0005*/ uint8_t                bMoveAnims;
/*0x0008*/ float                  Yon;
/*0x000c*/ float                  AmbientLight;
/*0x0010*/ uint8_t                DragItem;
/*0x0011*/ uint8_t                DragMoney;
/*0x0012*/ uint8_t                DragHotButton;
/*0x0013*/ bool                   bInRenderLoop;
/*0x0014*/ bool                   bHideLootedCorpses;
/*0x0015*/ char                   LastTeleportAreaTag[0x100];
/*0x0118*/ CCameraInterface*      pCamera;
/*0x0120*/ CVector3*              CamPos;
/*0x0128*/ CVector3*              CamOrientation;
/*0x0130*/ SWadFile*              WadFileLoadScreen;
/*0x0138*/ uint8_t                NewPCModelsLoaded;
/*0x0139*/ bool                   bHorsesLoaded;
/*0x0140*/ ActorTagManager*       pActorTagManager;
/*0x0148*/ bool                   fogEnabled;
/*0x014c*/ float                  fogStartDistance;
/*0x0150*/ float                  fogEndDistance;
/*0x0154*/ float                  fogDensity;
/*0x0158*/ uint8_t                fogRed;
/*0x0159*/ uint8_t                fogGreen;
/*0x015a*/ uint8_t                fogBlue;
/*0x015c*/ uint32_t               saveRed;
/*0x0160*/ uint32_t               saveGreen;
/*0x0164*/ uint32_t               saveBlue;
/*0x0168*/ uint8_t                dayPeriod;
/*0x016c*/ uint32_t               TimeStamp;
/*0x0170*/ bool                   bRain;
/*0x0171*/ bool                   bRainScreen;
/*0x0174*/ int                    numUserLights;
/*0x0178*/ CLightDefinitionInterface* userLightDef[2500];
/*0x4f98*/ CLightDefinitionInterface* tempLightDef;
/*0x4fa0*/ void*                  moreDisplayInterfaces[25]; // too many to list out right now. They are all distinct.
/*0x5068*/ uint32_t               timeLastArrival;
/*0x506c*/ float                  scaleShield;
/*0x5070*/ float                  scalePrimary;
/*0x5074*/ float                  scaleSecondary;
/*0x5078*/ bool                   indoorEnvironment;
/*0x5080*/ HWND                   hGameWindow;
/*0x5088*/ float                  viewAngle;
/*0x508c*/ float                  aspectRatio;
/*0x5090*/ int                    titleOverlayIndex;
/*0x5094*/ int                    nearClipPlane;
/*0x5098*/ PALETTEENTRY           palette[256];
/*0x5498*/ uint8_t                padding[0x5512 - 0x5498]; // to be filled out later...
/*0x5512*/ bool                   NpcNames;
/*0x5513*/ bool                   bShowPetNames;
/*0x5514*/ bool                   bShowMercNames;
/*0x5515*/ bool                   bShowPetOwnerNames;
/*0x5516*/ bool                   bShowMercOwnerNames;
/*0x5517*/ bool                   bAdvancedLightingEnabled;
/*0x5518*/ bool                   bPostEffectsEnabled;
/*0x5519*/ bool                   bBloomEnabled;
/*0x551a*/ bool                   bShadowsEnabled;
/*0x551b*/ bool                   bWaterSwapEnabled;
/*0x551c*/ bool                   b20PixelShadersEnabled;
/*0x551d*/ bool                   bVertexShadersEnabled;
/*0x551e*/ bool                   bWindowedGamma;
/*0x551f*/ bool                   bWindowedIncreasedGamma;
/*0x5520*/ int                    ActorClipPlane;
/*0x5524*/ int                    ShadowClipPlane;
/*0x5528*/ int                    Unknown2d80;
/*0x5530*/ ScreenWndManager       gameScreens;
/*0x5590*/ ScreenWndManager       charselectScreens;
/*0x55f0*/
};

//----------------------------------------------------------------------------

class CGameFaceRenderInterface
{
public:
/*0x00*/ virtual ~CGameFaceRenderInterface() = 0;
/*0x08*/
/*0x10*/
/*0x18*/ virtual void Unknown0x18() = 0;  // Called from CRender::InitRenderSystem      ----|
/*0x20*/ virtual void Unknown0x20() = 0;  // Called from CRender::ReleaseRenderSystem       | 
/*0x28*/ virtual void Unknown0x28() = 0;  // Called from CRender::InitRenderSystem     <----|
/*0x30*/ virtual void Unknown0x30() = 0;  // Called from CRender::UpdateDisplay
/*0x38*/
/*0x40*/
/*0x48*/
/*0x50*/
/*0x58*/
/*0x60*/
/*0x68*/ virtual void Unknown0x68() = 0;  // Called from ObjectPreviewView::CleanUp, ObjectPreviewView::OnResetDevice
/*0x70*/
};

namespace dx9backend
{
	class Dx9Backend /* : public renoir::RendererBackend, public renoir::ClickThroughProvider */
	{

	};
}

// ?g_pGameFaceRender@@3PEAVCGameFaceRender@@EA

// size: 0xB0
class CGameFaceRender : public CGameFaceRenderInterface
{
public:
/*0x00*/ // vftable
/*0x08*/ IDirect3DDevice9*       pD3DDevice;
/*0x10*/ HWND                    hWnd;
/*0x18*/ dx9backend::Dx9Backend* dx8backend;
/*0x20*/ uint8_t                 Fill[0xB0 - 0x20];
/*0x*/
/*0xB0*/
};

// 180029D40 CGameFaceRender__UpdateDisplay 

} // namespace eqlib

