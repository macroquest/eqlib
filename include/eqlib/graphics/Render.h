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

#include "eqlib/graphics/RenderInterface.h"
#include "eqlib/graphics/NodePool.h"
#include "eqlib/graphics/RGB.h"

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
constexpr int MAX_EFFECTS = 148;
constexpr int MAX_RENDER_EFFECTS = 217;
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
/*0x08*/ uint32_t            nIndex;
/*0x0c*/ char                szName[128];
/*0x8c*/ int                 nProduct;
/*0x90*/ int                 nVersion;
/*0x94*/ int                 nSubVersion;
/*0x98*/ int                 nBuild;
/*0x9c*/ int                 nVendorID;
/*0xa0*/ int                 nDeviceID;
/*0xa4*/ GUID                guidDevice;
/*0xb4*/ GUID                guidDriver;
/*0xc4*/ bool                bSupportsLargeTextures;
/*0xc5*/ bool                bSupportsHardwareTnL;
/*0x00*/ bool                bSupports11VertexShaders;
/*0x00*/ bool                bSupportsThreeVertexBlendMatrices;
/*0x00*/ bool                bSupportsIndexedVertexBlending;
/*0x00*/ bool                bForceNo20PixelShaders;
/*0x00*/ bool                bForceNo14PixelShaders;
/*0x00*/ bool                bForceNo11PixelShaders;
/*0xc7*/ bool                bUseFixedFunctionVertexBlending;
/*0xc8*/ int                 nVsyncInterval;
/*0xcc*/ uint32_t            nNum16BitVideoModes;
/*0xd0*/ uint32_t            nNum32BitVideoModes;
/*0xd4*/ SModeInfo           Mode32;
/*0xd9*/ SModeInfo           Mode16A;
/*0xde*/ SModeInfo           Mode16B;
/*0xe4*/
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
/*0x0000*/ //vftable
/*0x0004*/ SDevice                   aDevices[16];
/*0x0e44*/ int                       nDeviceCount;
/*0x0e48*/ SDevice*                  pCurrentDevice; // e88
/*0x0e4c*/ bool                      bDeviceInitialized;
/*0x0e50*/ D3DFORMAT                 adapterFormat;
/*0x0e54*/ int                       nDisplayWidth;
/*0x0e58*/ int                       nDisplayHeight;
/*0x0e5c*/ int                       nDisplayDepth;
/*0x0e60*/ int                       nDisplayRefreshRate;
/*0x0e64*/ bool                      bFullscreen;
/*0x0e65*/ bool                      bWindowedModeAvailable;
/*0x0e68*/ D3DPRESENT_PARAMETERS     d3dpp; // e94
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
/*0x0ec0*/ HWND                      hWnd; // f00
/*0x0ec4*/ IDirect3D9*               pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n" // f04
/*0x0ec8*/ IDirect3DDevice9*         pD3DDevice;            // "Failed to create device with error %X.\n" // f08
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

//============================================================================

} // namespace eqlib
