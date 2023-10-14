/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#include <d3d9.h>
#include <d3d11.h>
#include <dxgi.h>
#include <wil/com.h>
#include <guiddef.h>

namespace eqlib {

inline namespace DX9Wrapper {
namespace DX11 {
	class System;
	class DeviceImpl;
	class SwapChainImpl;
	class TextureImpl;
	class SurfaceImpl;
	class VertexBufferImpl;
	class IndexBufferImpl;
}}

using Direct3D9 = DX9Wrapper::DX11::System;
using Direct3DDevice9 = DX9Wrapper::DX11::DeviceImpl;
using Direct3DSwapChain9 = DX9Wrapper::DX11::SwapChainImpl;
using Direct3DTexture9 = DX9Wrapper::DX11::TextureImpl;
using Direct3DSurface9 = DX9Wrapper::DX11::SurfaceImpl;
using Direct3DVertexBuffer9 = DX9Wrapper::DX11::VertexBufferImpl;
using Direct3DIndexBuffer9 = DX9Wrapper::DX11::IndexBufferImpl;

inline namespace DX9Wrapper {
namespace DX11 {

// I feel like these names are backwards from what I would expect...
// size: 0x30
class [[offsetcomments]] System
{
public:
/*x00*/ virtual void Release();
/*x08*/ virtual void Unknown08();
/*x10*/ virtual void CreateDevice();

/*0x00*/ // vtable
/*0x08*/ uint64_t            Unknown0x08;
/*0x10*/ uint32_t            Unknown0x10;
/*0x14*/ uint32_t            Unknown0x14;
/*0x18*/ uint64_t            Unknown0x18;
/*0x20*/ uint32_t            Unknown0x20;
/*0x24*/ uint32_t            Unknown0x24;
/*0x28*/ wil::com_ptr<IDXGIFactory> pFactory;
/*0x30*/ };

// size: 0x1448
class [[offsetcomments]] SwapChain
{
public:
/*0x0000*/ ID3D11Device*     pD3DDevice;
/*0x0008*/ ID3D11DeviceContext* pD3DDeviceContext;
/*0x0010*/ uint32_t          RefCount;                    // <-- seems to start here?
/*0x0014*/ uint32_t          Unknown0x0014;
/*0x0018*/ uint8_t           UnknownFill0x0018[0x13e0];
/*0x13f8*/ uint8_t           UnknownFill0x13f8[0x50];     // <-- something starts at 13f8
/*0x1448*/
};

// size: 0x38
class [[offsetcomments]] SwapChainImpl
{
public:
	virtual ~SwapChainImpl();
	
/*0x08*/ SwapChainImpl*      pSwapChainImpl;
/*0x10*/ uint32_t            TypeHash;
/*0x18*/ const char*         TypeName;
/*0x20*/ uint32_t            RefCount;
/*0x28*/ SwapChain*          pSwapChain;
/*0x30*/ uint64_t            Unknown0x38;
/*0x38*/
};

// size: 0x1460
class [[offsetcomments]] Device
{
public:
/*0x0000*/ SwapChain*        pSwapChainWrapper;
/*0x0008*/ const char*       TypeName;
/*0x0010*/ uint32_t          RefCount;
/*0x0018*/ SwapChain         SwapChainWrapper;
/*0x1460*/
};

// size: 0x30
class [[offsetcomments]] DeviceImpl
{
public:
/*0x000*/ virtual ULONG WINAPI Release() = 0;
/*0x008*/ virtual HRESULT WINAPI Reset(D3DPRESENT_PARAMETERS* pPresentationParameters) = 0;
/*0x010*/ virtual HRESULT WINAPI GetBackBuffer(UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, Direct3DSurface9** ppBackBuffer) = 0;
/*0x018*/ virtual HRESULT WINAPI Unknown0x018() = 0;
/*0x020*/ virtual HRESULT WINAPI GetSwapChain(UINT iSwapChain, Direct3DSwapChain9** pSwapChain) = 0;
/*0x028*/ virtual HRESULT WINAPI Present(const RECT* pSourceRect, const RECT* pDestRect, HWND hDestWindowOverride, const RGNDATA* pDirtyRegion) = 0;
/*0x030*/ virtual HRESULT WINAPI Unknown0x030() = 0;
/*0x038*/ virtual HRESULT WINAPI Unknown0x038() = 0;
/*0x040*/ virtual HRESULT WINAPI Unknown0x040() = 0;
/*0x048*/ virtual HRESULT WINAPI Unknown0x048() = 0;
/*0x050*/ virtual HRESULT WINAPI Unknown0x050() = 0;
/*0x058*/ virtual HRESULT WINAPI Unknown0x058() = 0;
/*0x060*/ virtual HRESULT WINAPI Unknown0x060() = 0;
/*0x068*/ virtual HRESULT WINAPI GetViewport(D3DVIEWPORT9* pViewport) = 0;
/*0x070*/ virtual HRESULT WINAPI Unknown0x070() = 0;
/*0x078*/ virtual HRESULT WINAPI Unknown0x078() = 0;
/*0x080*/ virtual HRESULT WINAPI Unknown0x080() = 0;
/*0x088*/ virtual HRESULT WINAPI Unknown0x088() = 0;
/*0x090*/ virtual HRESULT WINAPI GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) = 0;
/*0x098*/ virtual HRESULT WINAPI Unknown0x098() = 0;
/*0x0a0*/ virtual HRESULT WINAPI Unknown0x0a0() = 0;
/*0x0a8*/ virtual HRESULT WINAPI Unknown0x0a8() = 0;
/*0x0b0*/ virtual HRESULT WINAPI Unknown0x0b0() = 0;
/*0x0b8*/ virtual HRESULT WINAPI Unknown0x0b8() = 0;
/*0x0c0*/ virtual HRESULT WINAPI CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, Direct3DTexture9** ppTexture, HANDLE* pSharedHandle) = 0;
/*0x0c8*/ virtual HRESULT WINAPI Clear(DWORD Count, const D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) = 0;
/*0x0d0*/ virtual HRESULT WINAPI Unknown0x0d0() = 0;
/*0x0d8*/ virtual HRESULT WINAPI Unknown0x0d8() = 0;
/*0x0e0*/ virtual HRESULT WINAPI Unknown0x0e0() = 0;
/*0x0e8*/ virtual HRESULT WINAPI Unknown0x0e8() = 0;
/*0x0f0*/ virtual HRESULT WINAPI Unknown0x0f0() = 0;
/*0x0f8*/ virtual HRESULT WINAPI Unknown0x0f8() = 0;
/*0x100*/ virtual HRESULT WINAPI Unknown0x100() = 0;
/*0x108*/ virtual HRESULT WINAPI Unknown0x108() = 0;
/*0x110*/ virtual HRESULT WINAPI Unknown0x110() = 0;
/*0x118*/ virtual HRESULT WINAPI Unknown0x118() = 0;
/*0x120*/ virtual HRESULT WINAPI GetDeviceCaps(D3DCAPS9* pCaps) = 0;
/*0x128*/ virtual HRESULT WINAPI Unknown0x128() = 0;
/*0x130*/ virtual HRESULT WINAPI SetViewport(const D3DVIEWPORT9* pViewport) = 0;
/*0x138*/ virtual HRESULT WINAPI SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX* pMatrix) = 0;
/*0x140*/ virtual HRESULT WINAPI DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount) = 0;
/*0x148*/ virtual HRESULT WINAPI Unknown0x148() = 0;
/*0x150*/ virtual HRESULT WINAPI BeginScene() = 0;
/*0x158*/ virtual HRESULT WINAPI EndScene() = 0;
/*0x160*/ virtual HRESULT WINAPI SetTexture(DWORD Stage, Direct3DTexture9* pTexture) = 0;
/*0x168*/ virtual HRESULT WINAPI Unknown0x168() = 0;
/*0x170*/ virtual HRESULT WINAPI Unknown0x170() = 0;
/*0x178*/ virtual HRESULT WINAPI Unknown0x178() = 0;
/*0x180*/ virtual HRESULT WINAPI TestCooperativeLevel() = 0;

/*0x00*/ // vtable
/*0x08*/ DeviceImpl*         pDeviceImpl;
/*0x10*/ uint32_t            TypeHash;
/*0x18*/ const char*         TypeName;
/*0x20*/ uint32_t            RefCount;
/*0x28*/ Device*             pDevice;
/*0x30*/
};

// size: 0xa0
class [[offsetcomments]] Texture
{
public:
	// size: 0x88
	struct Priv
	{
	/*0x00*/ DXGI_FORMAT         Format;
	/*0x04*/ uint32_t            Unknown0x04;
	/*0x08*/ ID3D11Texture2D*    Texture2D;
	/*0x10*/ uint8_t             Filler0x10[0x48];
	/*0x58*/ ID3D11ShaderResourceView* ShaderResourceView;
	/*0x60*/ uint8_t             Filler0x60[0x28];
	/*0x88*/
	};
/*0x00*/ uint32_t                TypeHash;
/*0x08*/ const char*             TypeName;
/*0x10*/ uint32_t                RefCount;
/*0x18*/ Priv                    TextureData;
/*0xa0*/

	ID3D11Texture2D* GetTexture2D() const { return TextureData.Texture2D; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return TextureData.ShaderResourceView; }
};

// size: 0x38
class [[offsetcomments]] TextureImpl
{
public:
	virtual void Release();

/*0x00*/ // vtable
/*0x08*/ TextureImpl*        pTextureImpl;
/*0x10*/ uint32_t            TypeHash;
/*0x18*/ const char*         TypeName;
/*0x20*/ uint32_t            RefCount;
/*0x28*/ Device*             pDevice;
/*0x30*/ Texture*            pTexture;
/*0x38*/

	ID3D11Texture2D* GetTexture2D() const { return pTexture ? pTexture->GetTexture2D() : nullptr; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return pTexture ? pTexture->GetShaderResourceView() : nullptr; }
};

} // namespace DX11
} // namespace DX9Wrapper


} // namespace eqlib
