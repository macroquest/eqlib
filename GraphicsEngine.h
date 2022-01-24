/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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
#include "ForwardDecls.h"
#include "base/Color.h"

#include <d3d9.h>
#include <glm/glm.hpp>
#include <guiddef.h>

struct ID3DXBuffer;

namespace eqlib {

struct ActorTagInfo;
class ActorTagManager;

class CDisplay;
class CRender;
class CCameraInterface;
class CParticlePointInterface;
class CPhysicsInfo;

class EQPlacedItem;
class MissileBase;
class PlayerBase;
class PlayerZoneClient;

struct SWadFile;

// The graphics engine holds pointers to all the components
struct SGraphicsEngine
{
public:
	CFastFileInterface*        pFastFile;
	CResourceManagerInterface* pResourceManager;
	CSceneGraphInterface*      pSceneGraph;
	CRender*                   pRender;
	CParticleSystemInterface*  pParticleSystem;
	CCollisionInterface*       pCollision;
	CMathInterface*            pMath;
	CThickLineSystemInterface* pThickLineSystem;
	CDebugDrawInterface*       pDebugDraw;
	CPropertySet*              pProperties;
	CTerrainSystemInterface*   pTerrainSystem;
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

// size: 0x818
struct SItemPlacementStatsDisplay
{
	char unknown[0x818];
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
/*0x088*/ virtual void DrawLine2D(const glm::vec3& point1, const glm::vec3& point2, RGB color) = 0;
/*0x08C*/ virtual void DrawLine3D(const glm::vec3& point1, const glm::vec3& point2, RGB color) = 0;
/*0x090*/ virtual int DrawWrappedText(int font, const char* text, const CXRect& rect, const CXRect& clip,
	COLORREF color, uint16_t flags, int offset) = 0;
/*0x094*/ virtual int DrawWrappedText(CTextObjectInterface* textObj) = 0;
/*0x098*/ virtual int DrawTexturedQuad(glm::vec3* points, glm::vec2* texCoords, RGB color, BMI* bmi) = 0;
/*0x09C*/ virtual void DrawTintedBlendTexturedQuad(glm::vec3* points, glm::vec2* texCoords, int tint1, int tint2,
	BMI* bmi1, BMI* bmi2, bool border) = 0;
/*0x0A0*/ virtual void DrawQuad(glm::vec3* points, RGB color) = 0;
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
/*0x0DC*/ virtual void TransformWorldToCamera(const glm::vec3& world, glm::vec3& camera) = 0;
/*0x0E0*/ virtual void GetEyeOffset(glm::vec3& pos) = 0;
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
/*0x0e60*/ int                       nDisplayWidth;
/*0x0e64*/ int                       nDisplayHeight;
/*0x0e68*/ int                       nDisplayDepth;
/*0x0e6c*/ int                       nDisplayRefreshRate;
/*0x0e70*/ bool                      bFullscreen;
/*0x0e71*/ bool                      bWindowedModeAvailable;
/*0x0e78*/ D3DPRESENT_PARAMETERS     d3dpp;
/*0x0eb8*/ uint32_t                  frameId;
/*0x0ebc*/ bool                      bSupportsMipMaps;
/*0x0ebd*/ bool                      bSupportsTrilinearMipMaps;
/*0x0ebe*/ bool                      bAutoMipMapping;
/*0x0ec0*/ uint32_t                  uMaxVertexBlendMatrices;
/*0x0ec4*/ bool                      bSupportsDXT1Textures;
/*0x0ec5*/ bool                      bSupportsDXT3Textures;
/*0x0ec6*/ bool                      bSupports4444Textures;
/*0x0ec7*/ bool                      bSupportsDotProduct3;
/*0x0ec8*/ bool                      bRGB565Mode;
/*0x0ec9*/ bool                      bUseMode16A;
/*0x0eca*/ bool                      bUseSoftwareVertexProcessing;
/*0x0ecb*/ bool                      bUseMixedVertexProcessing;
/*0x0ecc*/ bool                      bUseHardwareVertexProcessing;
/*0x0ecd*/ bool                      bUseHardwareVertexShaders;
/*0x0ece*/ bool                      bUseHardwareIndexedVertexBlending;
/*0x0ecf*/ bool                      bUse1PassTechniques;
/*0x0ed0*/ uint32_t                  uTotalTextureMemory;
/*0x0ed4*/ int                       nTextureQuality;
/*0x0ed8*/ HWND                      hWnd;
/*0x0ee0*/ IDirect3D9*               pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0ee8*/ IDirect3DDevice9*         pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0ef0*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0ef8*/ D3DVIEWPORT9              D3DViewPort;
/*0x0f10*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1040*/ float                     GammaLevel;
/*0x1048*/ IDirect3DSwapChain9*      pD3DSwapChain;
/*0x1050*/ bool                      bWindowedGamma;
/*0x1051*/ bool                      bWindowedGammaEverToggled;
/*0x1052*/ bool                      bLinearGammaContent;
/*0x1058*/ ID3DXBuffer*              screenCapFileData;
/*0x1060*/ __declspec(align(16)) glm::mat4x4 matrixIdentity;
/*0x10a0*/ __declspec(align(16)) glm::mat4x4 aMatrixWorldCurrent[NUM_BLEND_MATRICES];
/*0x12a0*/ __declspec(align(16)) glm::mat4x4 aMatrixWorldInverse[NUM_BLEND_MATRICES];
/*0x14a0*/ __declspec(align(16)) glm::mat4x4 aMatrixWorldInverseTransposed[NUM_BLEND_MATRICES];
/*0x16a0*/ glm::mat4x4*              apMatrixWorld[NUM_BLEND_MATRICES];
/*0x16e0*/ glm::mat4x4               matrixViewProj;
/*0x1720*/ glm::mat4x4               matrixView;
/*0x1760*/ IDirect3DIndexBuffer9*    pIndexBufferLitData;
/*0x1768*/ CBufferSet*               apBufferSets[MAX_BUFFER_SET];
/*0x1878*/ CEffect*                  apEffects[MAX_EFFECTS];
/*0x1d18*/ CRenderEffect*            apRenderEffects[MAX_RENDER_EFFECTS];
/*0x23e0*/ IDirect3DVertexDeclaration9* apVertexDeclarations[MAX_VERTEX_DECLARATIONS];
/*0x2480*/ IDirect3DTexture9*        pAttenuationLookupTexture;
/*0x2488*/ IDirect3DTexture9*        pSpecularPower68LookupTexture;
/*0x2490*/ IDirect3DCubeTexture9*    pNormalizationLookupCubeTexture;
/*0x2498*/ TNodePool<CBatchNode>*    pBatchNodePool;
/*0x24a0*/ TNodePool<CSubsetNode>*   pSubsetNodePool;
/*0x24a8*/ TNodePool<CLitBatchNode>* pLitBatchNodePool;
/*0x24b0*/ TNodePool<CTerrainBatchNode>* pTerrainBatchNodePool;
/*0x24b8*/ TList<CRenderNode>        renderNodeListSinglePass[MAX_EFFECT_PASS_COUNT];
/*0x2518*/ TList<CRenderNode>        renderNodeListZPass[MAX_EFFECT_PASS_COUNT];
/*0x2578*/ TList<CRenderNode>        renderNodeListTexturePass[MAX_EFFECT_PASS_COUNT];
/*0x25d8*/ TNodePool<CRenderNode>*   pRenderNodePool;
/*0x25e0*/ TList<CLightNode>         activeLightList;
/*0x25f0*/ TNodePool<CLightNode>*    pLightNodePool;
/*0x25f8*/ int                       renderedTextureCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x33d8*/ int                       renderedTerrainBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x41b8*/ int                       renderedTerrainBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x4f98*/ int                       renderedBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x5d78*/ int                       renderedBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x6b58*/ int                       renderedSubsetCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7938*/ int                       renderedSubsetTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x8718*/ int                       nStatsType;
/*0x871c*/ bool                      bShowItemPlacementStats;
/*0x871d*/ SItemPlacementStatsDisplay itemPlacementStats;
/*0x8f38*/ float                     fColorIntensityLookup[256];
/*0x9338*/ float                     fLookup[2048];
/*0xb338*/ glm::vec3                 eyeOffset;
/*0xb344*/ uint32_t                  uRegionCount;
/*0xb348*/ bool                      bFogEnabled;
/*0xb34c*/ RGB                       rgbFogColor;
/*0xb350*/ float                     fFogStart;
/*0xb354*/ float                     fFogEnd;
/*0xb358*/ float                     fFogDensity;
/*0xb360*/ RenderCallbackPtr         pfnRenderCallback;
/*0xb368*/ bool                      bCensorship;
/*0xb370*/ CMemoryPoolManager*       pLitTriangleMemoryPoolManager;
/*0xb378*/ CMemoryPoolManager*       pLitBatchMemoryPoolManager;
/*0xb380*/ // ... much more
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
	EQLIB_OBJECT float GetBoundingRadius();

/*0x000*/ void*       vfTableActorClient;
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
/*0x098*/ EQUIPMENT   ActorEquipment;           // 0x0ff8 is confirmed // size 0xb4
/*0x14c*/
};

//============================================================================
// ActorClient
//============================================================================

// size 0x1140 see 63D777 in Sep 25 2018 Test
//.text:0063D777                 mov     [edi+1B8h], eax so last member is at 1B8h which makes the struct size 0x1bc
// 0x1bc + 0x0f84 is 0x1140
class [[offsetcomments]] ActorClient : public ActorBase
{
public:
	// EQLIB_OBJECT const CVector3& GetPosition() const;
	// EQLIB_OBJECT void GetPosition(CVector3*) const;

/*0x150*/ int         LeftEyeMaterialIndex;
/*0x154*/ int         RightEyeMaterialIndex;
/*0x158*/ CParticlePointInterface* pParticlePoints[0xa];
/*0x1a8*/ void*       pLowerBones;
/*0x1b0*/ void*       pUpperBones;
/*0x1b8*/ void*       pcactorex;                // todo: move to ActorInterface*
/*0x1c0*/ CLightInterface* pLight;
/*0x1c8*/ ActorAnimation*  pActorAnimation;
/*0x1d0*/ TList<CObjectGroupStageInstance> StageInstances;          // size 0x8
/*0x1e0*/ bool        bActiveTransition;
/*0x1e4*/ unsigned int CurrentStage;
/*0x1e8*/ float       ZOffset;
/*0x1ec*/ float       TempY;//related to ZOffset adjustments I *think*
/*0x1f0*/ float       TempX;
/*0x1f4*/ float       TempZ;
/*0x1f8*/ bool        bReplacedStaticObject;
/*0x1fc*/ int         PartialFaceNumber;
/*0x200*/ bool        bNewArmorDisabled;
/*0x208*/ CActorApplicationData* pAppData;
/*0x210*/
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
/*0x0148*/ uint8_t                Unknown0x130[0x24];
/*0x016c*/ uint32_t               TimeStamp;
/*0x0170*/ BYTE                   Unknown0x158[0x2c12];
/*0x2d82*/ bool                   NpcNames;
/*0x2d83*/ bool                   bShowPetNames;
/*0x2d84*/ bool                   bShowMercNames;
/*0x2d85*/ bool                   bShowPetOwnerNames;
/*0x2d86*/ bool                   bShowMercOwnerNames;
/*0x2d87*/ bool                   bAdvancedLightingEnabled;
/*0x2d88*/ bool                   bPostEffectsEnabled;
/*0x2d89*/ bool                   bBloomEnabled;
/*0x2d8a*/ bool                   bShadowsEnabled;
/*0x2d8b*/ bool                   bWaterSwapEnabled;
/*0x2d8c*/ bool                   b20PixelShadersEnabled;
/*0x2d8d*/ bool                   bVertexShadersEnabled;
/*0x2d8e*/ bool                   bWindowedGamma;
/*0x2d8f*/ bool                   bWindowedIncreasedGamma;
/*0x2d90*/ int                    ActorClipPlane;
/*0x2d94*/ int                    ShadowClipPlane;
/*0x2d98*/ int                    Unknown2d80;
/*0x2da0*/ ScreenWndManager       gameScreens;
/*0x2e00*/ ScreenWndManager       charselectScreens;
/*0x2e60*/
};

inline namespace deprecated {
	using CDISPLAY DEPRECATE("Use CDisplay instead of CDISPLAY") = CDisplay;
	using PCDISPLAY DEPRECATE("Use CDisplay* instead of PCDISPLAY") = CDisplay*;
}

} // namespace eqlib

