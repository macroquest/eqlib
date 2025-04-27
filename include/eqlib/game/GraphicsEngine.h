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

#include "eqlib/game/Actors.h"
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

class CDisplay;
class CRender;
class CCameraInterface;
class CParticleCloudInterface;
class CParticlePointInterface;
class CPhysicsInfo;
class CLightDefinitionInterface;
class CThickLineInterface;

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

enum EStatus
{
	eStatusSuccess,
	eStatusFailure,
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

struct SEQGraphicsDisplayMode;
struct SDeviceInfo;
class CBufferSet;
class CEffect;
class CRenderEffect;

struct COLOR
{
	float red;
	float green;
	float blue;
};

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
/*0x0004*/ SDevice                   aDevices[16];
/*0x0e44*/ int                       nDeviceCount;
/*0x0e48*/ SDevice*                  pCurrentDevice;
/*0x0e4c*/ bool                      bDeviceInitialized;
/*0x0e50*/ D3DFORMAT                 adapterFormat;
/*0x0e54*/ int                       nDisplayWidth;
/*0x0e58*/ int                       nDisplayHeight;
/*0x0e5c*/ int                       nDisplayDepth;
/*0x0e60*/ int                       nDisplayRefreshRate;
/*0x0e64*/ bool                      bFullscreen;
/*0x0e65*/ bool                      bWindowedModeAvailable;
/*0x0e68*/ D3DPRESENT_PARAMETERS     d3dpp;
/*0x0ea0*/ uint32_t                  frameId;
/*0x0ea4*/ bool                      bSupportsMipMaps;
/*0x0ea5*/ bool                      bSupportsTrilinearMipMaps;
/*0x0ea6*/ bool                      bAutoMipMapping;
/*0x0ea8*/ uint32_t                  uMaxVertexBlendMatrices;
/*0x0eac*/ bool                      bSupportsDXT1Textures;
/*0x0ead*/ bool                      bSupportsDXT3Textures;
/*0x0eae*/ bool                      bSupports4444Textures;
/*0x0eaf*/ bool                      bSupportsDotProduct3;
/*0x0eb0*/ bool                      bRGB565Mode;
/*0x0eb1*/ bool                      bUseMode16A;
/*0x0eb2*/ bool                      bUseSoftwareVertexProcessing;
/*0x0eb3*/ bool                      bUseMixedVertexProcessing;
/*0x0eb4*/ bool                      bUseHardwareVertexProcessing;
/*0x0eb5*/ bool                      bUseHardwareVertexShaders;
/*0x0eb6*/ bool                      bUseHardwareIndexedVertexBlending;
/*0x0eb7*/ bool                      bUse1PassTechniques;
/*0x0eb8*/ uint32_t                  uTotalTextureMemory;
/*0x0ebc*/ int                       nTextureQuality;
/*0x0ec0*/ HWND                      hWnd;
/*0x0ec4*/ IDirect3D9*               pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0ec8*/ IDirect3DDevice9*         pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0ecc*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0ed0*/ D3DVIEWPORT9              D3DViewPort;
/*0x0ee8*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1018*/ float                     GammaLevel;
/*0x101c*/ IDirect3DSwapChain9*      pD3DSwapChain;
/*0x1020*/ bool                      bWindowedGamma;
/*0x1021*/ bool                      bWindowedGammaEverToggled;
/*0x1022*/ bool                      bLinearGammaContent;
/*0x1024*/ ID3DXBuffer*              screenCapFileData;
/*0x1030*/ __declspec(align(16)) CMatrix44 matrixIdentity;
/*0x1070*/ __declspec(align(16)) CMatrix44 aMatrixWorldCurrent[NUM_BLEND_MATRICES];
/*0x1270*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverse[NUM_BLEND_MATRICES];
/*0x1470*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverseTransposed[NUM_BLEND_MATRICES];
/*0x1670*/ CMatrix44*                apMatrixWorld[NUM_BLEND_MATRICES];
/*0x1690*/ CMatrix44                 matrixViewProj;
/*0x16d0*/ CMatrix44                 matrixView;
/*0x1710*/ IDirect3DIndexBuffer9*    pIndexBufferLitData;
/*0x1714*/ CBufferSet*               apBufferSets[MAX_BUFFER_SET];
/*0x179c*/ CEffect*                  apEffects[MAX_EFFECTS];
/*0x19ec*/ CRenderEffect*            apRenderEffects[MAX_RENDER_EFFECTS];
/*0x1d50*/ IDirect3DVertexDeclaration9* apVertexDeclarations[MAX_VERTEX_DECLARATIONS];
/*0x1da0*/ IDirect3DTexture9*        pAttenuationLookupTexture;
/*0x1da4*/ IDirect3DTexture9*        pSpecularPower68LookupTexture;
/*0x1da8*/ IDirect3DCubeTexture9*    pNormalizationLookupCubeTexture;
/*0x1dac*/ TNodePool<CBatchNode>*    pBatchNodePool;
/*0x1db0*/ TNodePool<CSubsetNode>*   pSubsetNodePool;
/*0x1db4*/ TNodePool<CLitBatchNode>* pLitBatchNodePool;
/*0x1db8*/ TNodePool<CTerrainBatchNode>* pTerrainBatchNodePool;
/*0x1dbc*/ TList<CRenderNode>        renderNodeListSinglePass[MAX_EFFECT_PASS_COUNT];
/*0x1dec*/ TList<CRenderNode>        renderNodeListZPass[MAX_EFFECT_PASS_COUNT];
/*0x1e1c*/ TList<CRenderNode>        renderNodeListTexturePass[MAX_EFFECT_PASS_COUNT];
/*0x1e4c*/ TNodePool<CRenderNode>*   pRenderNodePool;
/*0x1e50*/ TList<CLightNode>         activeLightList;
/*0x1e58*/ TNodePool<CLightNode>*    pLightNodePool;
/*0x1e5c*/ int                       renderedTextureCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x2c3c*/ int                       renderedTerrainBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x3a1c*/ int                       renderedTerrainBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x47fc*/ int                       renderedBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x55dc*/ int                       renderedBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x63bc*/ int                       renderedSubsetCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x719c*/ int                       renderedSubsetTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7f7c*/ int                       nStatsType;
/*0x7f80*/ bool                      bShowItemPlacementStats;
/*0x7f81*/ SItemPlacementStatsDisplay itemPlacementStats;
/*0x879c*/ float                     fColorIntensityLookup[256];
/*0x8b9c*/ float                     fLookup[2048];
/*0xab9c*/ CVector3                  eyeOffset;
/*0xaba8*/ uint32_t                  uRegionCount;
/*0xabac*/ bool                      bFogEnabled;
/*0xabb0*/ RGB                       rgbFogColor;
/*0xabb4*/ float                     fFogStart;
/*0xabb8*/ float                     fFogEnd;
/*0xabbc*/ float                     fFogDensity;
/*0xabc0*/ RenderCallbackPtr         pfnRenderCallback;
/*0xabc4*/ bool                      bCensorship;
/*0xabc8*/ CMemoryPoolManager*       pLitTriangleMemoryPoolManager;
/*0xabcc*/ CMemoryPoolManager*       pLitBatchMemoryPoolManager;
/*0xabd0*/ // ... much more
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

//============================================================================

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
/*0x10*/ HashTable<int, CXStr> screensHash;
/*0x20*/ ArrayClass<CSidlScreenWnd*> createdScreens;
/*0x30*/ HashTable<CSidlScreenWnd*, CXStr> createdScreensHash;
/*0x40*/
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
	EQLIB_OBJECT void ReloadUI(bool useIni);
	inline void ReloadUI(bool useIni, bool) { ReloadUI(useIni); }
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
/*0x011c*/ CVector3*              CamPos;
/*0x0120*/ CVector3*              CamOrientation;
/*0x0124*/ SWadFile*              WadFileLoadScreen;
/*0x0128*/ uint8_t                NewPCModelsLoaded;
/*0x0129*/ bool                   bHorsesLoaded;
/*0x012c*/ ActorTagManager*       pActorTagManager;
/*0x0130*/ bool                   fogEnabled;
/*0x0134*/ float                  fogStartDistance;
/*0x0138*/ float                  fogEndDistance;
/*0x013c*/ float                  fogDensity;
/*0x0140*/ uint8_t                fogRed;
/*0x0141*/ uint8_t                fogGreen;
/*0x0142*/ uint8_t                fogBlue;
/*0x0144*/ uint32_t               saveRed;
/*0x0148*/ uint32_t               saveGreen;
/*0x014c*/ uint32_t               saveBlue;
/*0x0150*/ uint8_t                dayPeriod;
/*0x0154*/ uint32_t               TimeStamp;
/*0x0158*/ bool                   bRain;
/*0x0159*/ bool                   bRainScreen;
/*0x015c*/ int                    numUserLights;
/*0x0160*/ CLightDefinitionInterface* userLightDef[2500];
/*0x2870*/ CLightDefinitionInterface* tempLightDef;
/*0x2874*/ void*                  moreDisplayInterfaces[25]; // too many to list out right now. They are all distinct.
/*0x28d8*/ uint32_t               timeLastArrival;
/*0x28dc*/ float                  scaleShield;
/*0x28e0*/ float                  scalePrimary;
/*0x28e4*/ float                  scaleSecondary;
/*0x28e8*/ bool                   indoorEnvironment;
/*0x28ec*/ HWND                   hGameWindow;
/*0x28f0*/ float                  viewAngle;
/*0x28f4*/ float                  aspectRatio;
/*0x28f8*/ int                    titleOverlayIndex;
/*0x28fc*/ int                    nearClipPlane;
/*0x2900*/ PALETTEENTRY           palette[256];
/*0x2d00*/ uint8_t                padding[0x2d6a - 0x2d00]; // to be filled out later...
/*0x2d6a*/ bool                   NpcNames;
/*0x2d6b*/ bool                   bShowPetNames;
/*0x2d6c*/ bool                   bShowMercNames;
/*0x2d6d*/ bool                   bShowPetOwnerNames;
/*0x2d6e*/ bool                   bShowMercOwnerNames;
/*0x2d6f*/ bool                   bAdvancedLightingEnabled;
/*0x2d70*/ bool                   bPostEffectsEnabled;
/*0x2d71*/ bool                   bBloomEnabled;
/*0x2d72*/ bool                   bShadowsEnabled;
/*0x2d73*/ bool                   bWaterSwapEnabled;
/*0x2d74*/ bool                   b20PixelShadersEnabled;
/*0x2d75*/ bool                   bVertexShadersEnabled;
/*0x2d76*/ bool                   bWindowedGamma;
/*0x2d77*/ bool                   bWindowedIncreasedGamma;
/*0x2d78*/ int                    ActorClipPlane;
/*0x2d7c*/ int                    ShadowClipPlane;
/*0x2d80*/ int                    Unknown2d80;
/*0x2d84*/ ScreenWndManager       gameScreens;
/*0x2dc4*/ ScreenWndManager       charselectScreens;
/*0x2e04*/
};


} // namespace eqlib

