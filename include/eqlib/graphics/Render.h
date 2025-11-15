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
/*0x0ef0*/ HWND                      hWnd;
/*0x0ef8*/ Direct3D9*                pDirect3D;             // "CRender::InitDevice: Direct3DCreate9 failed.\n"
/*0x0f00*/ Direct3DDevice9*          pD3DDevice;            // "Failed to create device with error %X.\n"
/*0x0f08*/ IDirect3DSurface9*        pD3DBackBuffer;
/*0x0f10*/ D3DVIEWPORT9              D3DViewPort;
/*0x0f28*/ D3DCAPS9                  D3DDeviceCaps;
/*0x1058*/ float                     GammaLevel;
/*0x1060*/ Direct3DSwapChain9*       pD3DSwapChain;
/*0x1068*/ bool                      bWindowedGamma;
/*0x1069*/ bool                      bWindowedGammaEverToggled;
/*0x106a*/ bool                      bLinearGammaContent;
/*0x1070*/ ID3DXBuffer*              screenCapFileData;
/*0x1080*/ __declspec(align(16)) CMatrix44 matrixIdentity;
/*0x10c0*/ __declspec(align(16)) CMatrix44 aMatrixWorldCurrent[NUM_BLEND_MATRICES];
/*0x12c0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverse[NUM_BLEND_MATRICES];
/*0x14c0*/ __declspec(align(16)) CMatrix44 aMatrixWorldInverseTransposed[NUM_BLEND_MATRICES];
/*0x16c0*/ CMatrix44*                apMatrixWorld[NUM_BLEND_MATRICES];
/*0x1700*/ CMatrix44                 matrixViewProj;
/*0x1740*/ CMatrix44                 matrixView;
/*0x1780*/ IDirect3DIndexBuffer9*    pIndexBufferLitData;
/*0x1788*/ CBufferSet*               apBufferSets[MAX_BUFFER_SET];
/*0x1898*/ CEffect*                  apEffects[MAX_EFFECTS];
/*0x1d38*/ CRenderEffect*            apRenderEffects[MAX_RENDER_EFFECTS];
/*0x2400*/ IDirect3DVertexDeclaration9* apVertexDeclarations[MAX_VERTEX_DECLARATIONS];
/*0x24a0*/ Direct3DTexture9*         pAttenuationLookupTexture;
/*0x24a8*/ Direct3DTexture9*         pSpecularPower68LookupTexture;
/*0x24b0*/ IDirect3DCubeTexture9*    pNormalizationLookupCubeTexture;
/*0x24b8*/ TNodePool<CBatchNode>*    pBatchNodePool;
/*0x24c0*/ TNodePool<CSubsetNode>*   pSubsetNodePool;
/*0x24c8*/ TNodePool<CLitBatchNode>* pLitBatchNodePool;
/*0x24d0*/ TNodePool<CTerrainBatchNode>* pTerrainBatchNodePool;
/*0x24d8*/ TList<CRenderNode>        renderNodeListSinglePass[MAX_EFFECT_PASS_COUNT];
/*0x2538*/ TList<CRenderNode>        renderNodeListZPass[MAX_EFFECT_PASS_COUNT];
/*0x2598*/ TList<CRenderNode>        renderNodeListTexturePass[MAX_EFFECT_PASS_COUNT];
/*0x25f8*/ TNodePool<CRenderNode>*   pRenderNodePool;
/*0x2600*/ TList<CLightNode>         activeLightList;
/*0x2610*/ TNodePool<CLightNode>*    pLightNodePool;
/*0x2618*/ int                       renderedTextureCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x33f8*/ int                       renderedTerrainBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x41d8*/ int                       renderedTerrainBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x4fb8*/ int                       renderedBatchCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x5d98*/ int                       renderedBatchTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x6b78*/ int                       renderedSubsetCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x7958*/ int                       renderedSubsetTriCount[MAX_EFFECT_PASS_COUNT][MAX_EFFECTS];
/*0x8738*/ int                       nStatsType;
/*0x873c*/ bool                      bShowItemPlacementStats;
/*0x873d*/ SItemPlacementStatsDisplay itemPlacementStats;
/*0x8f58*/ float                     fColorIntensityLookup[256];
/*0x9358*/ float                     fLookup[2048];
/*0xb358*/ CVector3                  eyeOffset;
/*0xb364*/ uint32_t                  uRegionCount;
/*0xb368*/ bool                      bFogEnabled;
/*0xb36c*/ RGB                       rgbFogColor;
/*0xb370*/ float                     fFogStart;
/*0xb374*/ float                     fFogEnd;
/*0xb378*/ float                     fFogDensity;
/*0xb380*/ RenderCallbackPtr         pfnRenderCallback;
/*0xb388*/ bool                      bCensorship;
/*0xb390*/ CMemoryPoolManager*       pLitTriangleMemoryPoolManager;
/*0xb398*/ CMemoryPoolManager*       pLitBatchMemoryPoolManager;
/*0xb3a0*/ // ... much more
};

//============================================================================

} // namespace eqlib
