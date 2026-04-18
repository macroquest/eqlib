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

#include "eqlib/game/Color.h"
#include "eqlib/graphics/RenderInterface.h"
#include "eqlib/graphics/NodePool.h"

#include "eqlib/game/EQDX9.h"
#include "eqlib/game/MathTypes.h"

struct ID3DXMesh;

namespace eqlib {

//============================================================================

class CBufferSet;
class CEffect;
class CLight;
class CMaterial;
class CMemoryPoolManager;
class CRenderEffect;
class CTextureProxy;

struct SBoundingRect;
struct SLitBatch;
struct SLitTriangle;
struct STexture;
struct STextureSet;

//----------------------------------------------------------------------------
constexpr int NUM_BLEND_MATRICES = 8;
constexpr int MAX_BUFFER_SET = 34;
constexpr int MAX_EFFECTS = 145;
constexpr int MAX_RENDER_EFFECTS = 207;
constexpr int MAX_VERTEX_DECLARATIONS = 20;
constexpr int MAX_EFFECT_PASS_COUNT = 6;

using RenderCallbackPtr = void(*)();

//----------------------------------------------------------------------------
enum EBufferSet
{
	BufferSet_Region,
	BufferSet_RegionBump,
	BufferSet_Region2UV,
	BufferSet_RegionBump2UV,
	BufferSet_RegionTint,
	BufferSet_RegionBumpTint,
	BufferSet_Region2UVTint,
	BufferSet_RegionBump2UVTint,

	BufferSet_SimpleModelGlobal,
	BufferSet_SimpleModelGlobalBump,
	BufferSet_SimpleModelGlobal2UV,
	BufferSet_SimpleModelGlobalBump2UV,
	BufferSet_SimpleModelGlobalTint,
	BufferSet_SimpleModelGlobalBumpTint,
	BufferSet_SimpleModelGlobal2UVTint,
	BufferSet_SimpleModelGlobalBump2UVTint,

	BufferSet_SimpleModelOnDemand,
	BufferSet_SimpleModelOnDemandBump,
	BufferSet_SimpleModelOnDemand2UV,
	BufferSet_SimpleModelOnDemandBump2UV,
	BufferSet_SimpleModelOnDemandTint,
	BufferSet_SimpleModelOnDemandBumpTint,
	BufferSet_SimpleModelOnDemand2UVTint,
	BufferSet_SimpleModelOnDemandBump2UVTint,

	BufferSet_SimpleModelZone,
	BufferSet_SimpleModelZoneBump,
	BufferSet_SimpleModelZone2UV,
	BufferSet_SimpleModelZoneBump2UV,
	BufferSet_SimpleModelZoneTint,
	BufferSet_SimpleModelZoneBumpTint,
	BufferSet_SimpleModelZone2UVTint,
	BufferSet_SimpleModelZoneBump2UVTint,

	BufferSet_Terrain,
	BufferSet_LitData,

	BufferSet_Count,
};

//----------------------------------------------------------------------------
enum ERenderEffect
{
	
};

//----------------------------------------------------------------------------
enum ERenderMaterial
{
	RenderMaterial_Opaque,
	RenderMaterial_Chroma,
	RenderMaterial_AlphaSingleDetail,
	RenderMaterial_AlphaPaletteDetail,
	RenderMaterial_AlphaBatchAdditive,
	RenderMaterial_AlphaBatch,
	RenderMaterial_OpaqueC1,
	RenderMaterial_OpaqueCG1,
	RenderMaterial_OpaqueCE1,
	RenderMaterial_OpaqueCB1,
	RenderMaterial_OpaqueCBS1,
	RenderMaterial_OpaqueCBS1_VSB,
	RenderMaterial_OpaqueCBS_2UV,
	RenderMaterial_OpaqueCBSG1,
	RenderMaterial_OpaqueCBSGE1,
	RenderMaterial_OpaqueC1_2UV,
	RenderMaterial_OpaqueCB1_2UV,
	RenderMaterial_OpaqueCBSG1_2UV,
	RenderMaterial_OpaqueCBST2_2UV,
	RenderMaterial_OpaqueTerrain,
	RenderMaterial_OpaqueLava,
	RenderMaterial_OpaqueLava2,
	RenderMaterial_OpaqueBasic,
	RenderMaterial_OpaqueBlend,
	RenderMaterial_OpaqueBlendNoBump,
	RenderMaterial_OpaqueFull,
	RenderMaterial_OpaqueFull_2UV,
	RenderMaterial_OpaqueBump,
	RenderMaterial_OpaqueBump_2UV,
	RenderMaterial_OpaqueSB,
	RenderMaterial_OpaqueSB_2UV,
	RenderMaterial_OpaqueGB,
	RenderMaterial_OpaqueGB_2UV,
	RenderMaterial_OpaqueRB,
	RenderMaterial_OpaqueRB_2UV,
	RenderMaterial_ChromaC1,
	RenderMaterial_ChromaCG1,
	RenderMaterial_ChromaCE1,
	RenderMaterial_ChromaCB1,
	RenderMaterial_ChromaCBS1,
	RenderMaterial_ChromaCBSG1,
	RenderMaterial_ChromaCBSGE1,
	RenderMaterial_ChromaBasic,
	RenderMaterial_ChromaBump,
	RenderMaterial_AlphaC1,
	RenderMaterial_AlphaCG1,
	RenderMaterial_AlphaCE1,
	RenderMaterial_AlphaCB1,
	RenderMaterial_AlphaCBS1,
	RenderMaterial_AlphaCBSG1,
	RenderMaterial_AlphaCBSGE1,
	RenderMaterial_AlphaBasic,
	RenderMaterial_AlphaBump,
	RenderMaterial_AlphaWater,
	RenderMaterial_AlphaWaterFall,
	RenderMaterial_AlphaLavaH,
	RenderMaterial_AddAlphaC1,
	RenderMaterial_AddAlphaCG1,
	RenderMaterial_AddAlphaCE1,
	RenderMaterial_AddAlphaCB1,
	RenderMaterial_AddAlphaCBS1,
	RenderMaterial_AddAlphaCBSG1,
	RenderMaterial_AddAlphaCBSGE1,
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] SModeInfo
{
/*0x00*/ bool bDisplay;
/*0x01*/ bool bDepth16;
/*0x02*/ bool bDepth24;
/*0x03*/ bool bDepth32;
/*0x04*/ bool bWindowed;
/*0x08*/
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] SDevice
{
/*0x00*/ uint32_t            nType;
/*0x04*/ uint32_t            nIndex;
/*0x08*/ char                szName[128];
/*0x88*/ int                 nProduct;
/*0x8c*/ int                 nVersion;
/*0x90*/ int                 nSubVersion;
/*0x94*/ int                 nBuild;
/*0x98*/ int                 nVendorID;
/*0x9c*/ int                 nDeviceID;
/*0xa0*/ GUID                guidDevice;
/*0xb0*/ GUID                guidDriver;
/*0xc0*/ bool                bSupportsLargeTextures;
/*0xc1*/ bool                bSupportsHardwareTnL;
/*0xc2*/ bool                bSupports11VertexShaders;
/*0xc3*/ bool                bSupportsThreeVertexBlendMatrices;
/*0xc4*/ bool                bSupportsIndexedVertexBlending;
/*0xc5*/ bool                bForceNo20PixelShaders;
/*0xc6*/ bool                bForceNo14PixelShaders;
/*0xc7*/ bool                bForceNo11PixelShaders;
/*0xc8*/ bool                bUseFixedFunctionVertexBlending;
/*0xcc*/ int                 nVsyncInterval;
/*0xd0*/ uint32_t            nNum16BitVideoModes;
/*0xd4*/ uint32_t            nNum32BitVideoModes;
/*0xd8*/ SModeInfo           Mode32;
/*0xdd*/ SModeInfo           Mode16A;
/*0xe2*/ SModeInfo           Mode16B;
/*0xe8*/
};

//----------------------------------------------------------------------------
struct SBatchDefinition
{
	SBatchDefinition*        pBatchDefinitionNext;
	EBufferSet               BufferSetType;
	ERenderMaterial          RenderMaterialType;
	uint32_t                 uMaterialIndex;
	CMaterial*               pMaterial;
	STextureSet*             pTextureSet;
	IDirect3DIndexBuffer9*   pIndexBuffer0;
	IDirect3DVertexBuffer9*  pVertexBuffer0;
	uint32_t                 uVertexOffset0;
	uint32_t                 uMinIndex;
	uint32_t                 uNumFrames;
	uint32_t                 uStartIndex;
	uint32_t                 uPrimitiveCount;
	int32_t                  nAlpha;
	int32_t                  nMinVertexIndex;
	int32_t                  nMaxVertexIndex;
	SBoundingRect*           pBoundingRect;
};

//----------------------------------------------------------------------------
struct SBatch
{
	SBatch*                  pBatchNext;
	SBatchDefinition*        pBatchDefinition;
	ERenderEffect            eRenderEffectType;
	CMatrix44*               pm44ObjectToWorldTransform;
	void**                   ppDPVSObject;
	RGB*                     prgbTint;
	D3DCOLOR                 colorAlpha;
	float*                   pfShadeFactor;
	int32_t                  nCurrentFrame;
	IDirect3DVertexBuffer9*  pVertexBuffer1;
	uint32_t                 uVertexOffset1;
	bool                     bDeferred;
};

//----------------------------------------------------------------------------
struct SBoundingRect
{
	float                    fMinX;
	float                    fMaxX;
	float                    fMinY;
	float                    fMaxY;
};


//----------------------------------------------------------------------------
struct SDetailTextureData
{
	STexture*                pDetailTexture;
	uint32_t*                puScale;
};

//----------------------------------------------------------------------------
struct SLitBatch
{
	SLitTriangle*            pLitTriangleHead;
	IDirect3DVertexBuffer9*  pVertexBuffer0;
};

//----------------------------------------------------------------------------
struct SLitTriangle
{
	SLitTriangle*            pLitTriangleNext;
	uint16_t                 uVertexIndex[3];
	uint16_t                 uPad;
};

//----------------------------------------------------------------------------
struct SSubset
{
	ERenderEffect            eRenderEffectType;
	CMaterial**              ppMaterial;
	RGB*                     prgbTint;
	RGB*                     prgbTint2;
	int32_t                  nAlpha;
	float*                   pfShadeFactor;
	uint32_t                 uVertexBlendFlag;
	uint32_t                 uNumMatrices;
	CMatrix44*               ppm44BoneToWorldTransforms;
	void**                   ppDPVSObject;
	uint32_t                 uIndex;
	ID3DXMesh*               pMesh;
	bool                     bHasBlendWeights;
	uint32_t                 uFaceCount;
	bool                     bFading;
	bool                     bDeferred;
};

//----------------------------------------------------------------------------
struct STerrainBatch
{
	EBufferSet               BufferSetType;
	IDirect3DIndexBuffer9**  ppIndexBuffer;
	uint32_t*                puStartIndex;
	uint32_t*                puPrimitiveCount;
	IDirect3DVertexBuffer9*  pVertexBuffer;
	uint32_t                 uVertexOffset;
	uint32_t                 uMinIndex;
	int32_t                  nMinVertexIndex;
	int32_t                  nMaxVertexIndex;
	STexture*                pTexture;
	SDetailTextureData*      pDetailTextures;
	uint32_t*                puNumDetailTextures;
	ERenderEffect            eRenderEffectType;
	void**                   ppDPVSObject;
	bool                     bDetailsHaveBump;
	bool                     bFreeVB;
	bool                     bShared;
	bool                     bDeferred;
};

//----------------------------------------------------------------------------
struct STexture
{
	uint32_t                 uFlags;
	const char*              pszFileName;
	CTextureProxy*           aTextures[8];
};

//----------------------------------------------------------------------------
struct STextureSet
{
	bool                     bSkipFrames;
	uint32_t                 uTimeUpdateInterval;
	uint32_t                 uTimeNextUpdate;
	uint32_t                 uNumTextures;
	uint32_t                 uCurrentTexture;
	STexture**               ppTextures;
	CMatrix44*               pm44UVTransform;
};

//----------------------------------------------------------------------------
class CBatchNode : public TDataNode<CBatchNode, SBatch>
{
};

//----------------------------------------------------------------------------
class CTerrainBatchNode : public TDataNode<CTerrainBatchNode, STerrainBatch>
{
};

//----------------------------------------------------------------------------
class CSubsetNode : public TDataNode<CSubsetNode, SSubset>
{
};

//----------------------------------------------------------------------------
class CLitBatchNode : public TDataNode<CLitBatchNode, SLitBatch>
{
};

//----------------------------------------------------------------------------
class CRenderNode : public TListNode<CRenderNode>
{
public:
	TList<CBatchNode>        m_BatchList;
	TList<CTerrainBatchNode> m_TerrainBatchList;
	TList<CSubsetNode>       m_SubsetList;
	TList<CLitBatchNode>     m_LitBatchList;
	ERenderEffect            m_eRenderEffectType;
	CMaterial*               m_pMaterial;
	STexture*                m_pTexture;
};

//----------------------------------------------------------------------------
class CLightNode : public TListNode<CLightNode>
{
public:
	CLight*                  m_pLight;
};

//----------------------------------------------------------------------------
class [[offsetcomments]] CRender : public CRenderInterface
{
public:
	EQLIB_OBJECT void Test();
/*0x0000*/ virtual void RenderScene();
/*0x0004*/ SDevice                   aDevices[16];
/*0x0e84*/ int                       nDeviceCount;
/*0x0e88*/ SDevice*                  pCurrentDevice;
/*0x0e8c*/ bool                      bDeviceInitialized;
/*0x0e90*/ D3DFORMAT                 adapterFormat;
/*0x0e94*/ int                       nDisplayWidth;
/*0x0e98*/ int                       nDisplayHeight;
/*0x0e9c*/ int                       nDisplayDepth;
/*0x0ea0*/ int                       nDisplayRefreshRate;
/*0x0ea4*/ bool                      bFullscreen;
/*0x0ea5*/ bool                      bWindowedModeAvailable;
/*0x0ea8*/ D3DPRESENT_PARAMETERS     d3dpp;
/*0x0ee0*/ uint32_t                  frameId;
/*0x0ee4*/ bool                      bSupportsMipMaps;
/*0x0ee5*/ bool                      bSupportsTrilinearMipMaps;
/*0x0ee6*/ bool                      bAutoMipMapping;
/*0x0ee8*/ uint32_t                  uMaxVertexBlendMatrices;
/*0x0eec*/ bool                      bSupportsDXT1Textures;
/*0x0eed*/ bool                      bSupportsDXT3Textures;
/*0x0eee*/ bool                      bSupports4444Textures;
/*0x0eef*/ bool                      bSupportsDotProduct3;
/*0x0ef0*/ bool                      bRGB565Mode;
/*0x0ef1*/ bool                      bUseMode16A;
/*0x0ef2*/ bool                      bUseSoftwareVertexProcessing;
/*0x0ef3*/ bool                      bUseMixedVertexProcessing;
/*0x0ef4*/ bool                      bUseHardwareVertexProcessing;
/*0x0ef5*/ bool                      bUseHardwareVertexShaders;
/*0x0ef6*/ bool                      bUseHardwareIndexedVertexBlending;
/*0x0ef7*/ bool                      bUse1PassTechniques;
/*0x0ef8*/ uint32_t                  uTotalTextureMemory;
/*0x0efc*/ int                       nTextureQuality;
/*0x0f00*/ HWND                      hWnd;
/*0x0f04*/ IDirect3D9*               pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0f08*/ IDirect3DDevice9*         pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0f0c*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0f10*/ D3DVIEWPORT9              D3DViewPort;
/*0x0f28*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1058*/ float                     GammaLevel;
///*0x105c*/ IDirect3DSwapChain9*      pD3DSwapChain;
///*0x1060*/ bool                      bWindowedGamma;
///*0x1061*/ bool                      bWindowedGammaEverToggled;
///*0x1062*/ bool                      bLinearGammaContent;
/*0x105c*/ ID3DXBuffer*              screenCapFileData;
/*0x1060*/ __declspec(align(16)) CMatrix44 matrixIdentity;
/*0x10a0*/ __declspec(align(16)) CMatrix44 aMatrixWorldCurrent[NUM_BLEND_MATRICES];
/*0x12a0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverse[NUM_BLEND_MATRICES];
/*0x14a0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverseTransposed[NUM_BLEND_MATRICES];
/*0x16a0*/ CMatrix44*                apMatrixWorld[NUM_BLEND_MATRICES];
/*0x16c0*/ CMatrix44                 matrixViewProj;
/*0x1700*/ CMatrix44                 matrixView;
/*0x1740*/ IDirect3DIndexBuffer9*    pIndexBufferLitData;
/*0x1744*/ CBufferSet*               apBufferSets[MAX_BUFFER_SET];
/*0x17cc*/ CEffect*                  apEffects[MAX_EFFECTS];
/*0x1a10*/ CRenderEffect*            apRenderEffects[MAX_RENDER_EFFECTS];
/*0x1d74*/ IDirect3DVertexDeclaration9* apVertexDeclarations[MAX_VERTEX_DECLARATIONS];
/*0x1dc4*/ IDirect3DTexture9*        pAttenuationLookupTexture;
/*0x1dc8*/ IDirect3DTexture9*        pSpecularPower68LookupTexture;
/*0x1dcc*/ IDirect3DCubeTexture9*    pNormalizationLookupCubeTexture;
/*0x1dd0*/ TNodePool<CBatchNode>*    pBatchNodePool;
/*0x1dd4*/ TNodePool<CSubsetNode>*   pSubsetNodePool;
/*0x1dd8*/ TNodePool<CLitBatchNode>* pLitBatchNodePool;
/*0x1ddc*/ TNodePool<CTerrainBatchNode>* pTerrainBatchNodePool;
/*0x1de0*/ TList<CRenderNode>        renderNodeListSinglePass[MAX_EFFECT_PASS_COUNT];
/*0x1e10*/ TList<CRenderNode>        renderNodeListZPass[MAX_EFFECT_PASS_COUNT];
/*0x1e40*/ TList<CRenderNode>        renderNodeListTexturePass[MAX_EFFECT_PASS_COUNT];
/*0x1e70*/ TNodePool<CRenderNode>*   pRenderNodePool;
/*0x1e74*/ TList<CLightNode>         activeLightList;
/*0x1e7c*/ TNodePool<CLightNode>*    pLightNodePool;
/*0x1e80*/ int                       renderedTextureCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x2c18*/ int                       renderedTerrainBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x39b0*/ int                       renderedTerrainBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x4748*/ int                       renderedBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x54e0*/ int                       renderedBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x6278*/ int                       renderedSubsetCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7010*/ int                       renderedSubsetTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7da8*/ int                       nStatsType;
/*0x7dac*/ bool                      bShowItemPlacementStats;
/*0x7dad*/ SItemPlacementStatsDisplay itemPlacementStats;
/*0x85c8*/ float                     fColorIntensityLookup[256];
/*0x89c8*/ float                     fLookup[2048];
/*0xa9c8*/ CVector3                  eyeOffset;
/*0xa9d4*/ uint32_t                  uRegionCount;
/*0xa9d8*/ bool                      bFogEnabled;
/*0xa9dc*/ RGB                       rgbFogColor;
/*0xa9e0*/ float                     fFogStart;
/*0xa9e4*/ float                     fFogEnd;
/*0xa9e8*/ float                     fFogDensity;
/*0xa9ec*/ RenderCallbackPtr         pfnRenderCallback;
/*0xa9f0*/ bool                      bCensorship;
/*0xa9f4*/ CMemoryPoolManager*       pLitTriangleMemoryPoolManager;
/*0xa9f8*/ CMemoryPoolManager*       pLitBatchMemoryPoolManager;
/*0xa9fc*/ // ... much more
};

//============================================================================
// CEffect
//============================================================================

class CEffect
{
public:
	CEffect(const char* filename, uint32_t index);
	virtual ~CEffect();

	virtual bool Init();
	virtual bool Load();
	virtual void GetHandles();
	virtual void GetTechniques();
	virtual void ReleaseDevice() const;
	virtual void Reset() const;

/*0x004*/ bool         bObjectIsValid;
/*0x005*/ bool         bDisabled;
/*0x006*/ bool         bFixedFunctio;
/*0x007*/ bool         bTintWithTFactor;
/*0x008*/ bool         bTintWithMaterial;
/*0x009*/ bool         bMixedUsesSoftware;
/*0x00a*/ bool         bUsesAttenuationTexture;
/*0x00b*/ bool         bUsesSpecularPowerTexture;
/*0x00c*/ bool         bUsesNormalizationCubeTexture;
/*0x010*/ ID3DXEffect* pD3DXEffect;
/*0x---*/ // more stuff...
/*0x444*/
};


//============================================================================

} // namespace eqlib
