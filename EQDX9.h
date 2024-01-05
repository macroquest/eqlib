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
#include <wil/com.h>
#include <guiddef.h>

#if IS_TEST_CLIENT
#include <d3d11.h>
#include <dxgi.h>
#endif

#include "eqstd/vector.h"

namespace eqlib {

#if !IS_TEST_CLIENT

using Direct3D9 = IDirect3D9;
using Direct3DDevice9 = IDirect3DDevice9;
using Direct3DSwapChain9 = IDirect3DSwapChain9;
using Direct3DTexture9 = IDirect3DTexture9;
using Direct3DSurface9 = IDirect3DSurface9;
using Direct3DVertexBuffer9 = IDirect3DVertexBuffer9;
using Direct3DIndexBuffer9 = IDirect3DIndexBuffer9;

#else

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

class Device;
class SwapChain;
class Texture;


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
/*0x30*/
};

template <typename T>
class ObjectBase
{
public:
	virtual UINT Release();

/*0x08*/ T*                  Object;
/*0x10*/ uint32_t            TypeHash;
/*0x18*/ const char*         TypeName;
/*0x20*/ int                 RefCount;
};

// size: 0x1448
class [[offsetcomments]] SwapChain
{
public:
/*0x0000*/ ID3D11Device*     pD3DDevice;
/*0x0008*/ ID3D11DeviceContext* pD3DDeviceContext;
/*0x0010*/ uint32_t          Unknown0x10;                 // <-- seems to start here?
/*0x0014*/ uint32_t          Unknown0x0014;
/*0x0018*/ uint8_t           UnknownFill0x0018[0x13e0];
/*0x13f8*/ uint8_t           UnknownFill0x13f8[0x50];     // <-- something starts at 13f8
/*0x1448*/ // 13e8 is a texture
/*0x1448*/
};
constexpr size_t SwapChain_size = 0x1448;
SIZE_CHECK(SwapChain, SwapChain_size);


class [[offsetcomments]] SwapChainImpl : public ObjectBase<SwapChainImpl>
{
public:
/*0x28*/ Device*             Device;
/*0x30*/ void*               Something; // wrong (not swap chain)
/*0x38*/
};
constexpr size_t SwapChainImpl_size = 0x38;
SIZE_CHECK(SwapChainImpl, SwapChainImpl_size);

class [[offsetcomments]] Device
{
public:
/*0x0000*/ uint32_t          TypeHash;
/*0x0008*/ const char*       TypeName;
/*0x0010*/ uint32_t          RefCount;
/*0x0018*/ SwapChain         SwapChain;
/*0x1460*/
};
constexpr size_t Device_size = 0x1460;
SIZE_CHECK(Device, Device_size);


class [[offsetcomments]] DeviceImpl : public ObjectBase<DeviceImpl>
{
public:
#pragma region Virtual Functions
/*0x000*/ virtual UINT Release() = 0;
/*0x008*/ virtual HRESULT WINAPI Reset(D3DPRESENT_PARAMETERS* pPresentationParameters) = 0;
/*0x010*/ virtual HRESULT WINAPI GetBackBuffer(UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, Direct3DSurface9** ppBackBuffer) = 0;
/*0x018*/ virtual HRESULT WINAPI Unknown0x018() = 0;
/*0x020*/ virtual HRESULT GetSwapChain(UINT iSwapChain, Direct3DSwapChain9** pSwapChain) = 0;
/*0x028*/ virtual HRESULT WINAPI Present(const RECT* pSourceRect, const RECT* pDestRect, HWND hDestWindowOverride, const RGNDATA* pDirtyRegion) = 0;
/*0x030*/ virtual HRESULT WINAPI Unknown0x030() = 0;
/*0x038*/ virtual HRESULT WINAPI Unknown0x038() = 0;
/*0x040*/ virtual HRESULT WINAPI Unknown0x040() = 0;
/*0x048*/ virtual HRESULT WINAPI Unknown0x048() = 0;
/*0x050*/ virtual HRESULT WINAPI Unknown0x050() = 0;
/*0x058*/ virtual HRESULT WINAPI Unknown0x058() = 0;
/*0x060*/ virtual HRESULT WINAPI GetViewport(D3DVIEWPORT9* pViewport) = 0;
/*0x068*/ virtual HRESULT WINAPI GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) = 0;
/*0x070*/ virtual HRESULT WINAPI Unknown0x070() = 0;
/*0x078*/ virtual HRESULT WINAPI Unknown0x078() = 0;
/*0x080*/ virtual HRESULT WINAPI Unknown0x080() = 0;
/*0x088*/ virtual HRESULT WINAPI Unknown0x088() = 0;
/*0x090*/ virtual HRESULT WINAPI Unknown0x090() = 0;
/*0x098*/ virtual HRESULT WINAPI CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, Direct3DTexture9** ppTexture, HANDLE* pSharedHandle) = 0;
/*0x0a0*/ virtual HRESULT WINAPI Clear(DWORD Count, const D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) = 0;
/*0x0a8*/ virtual HRESULT WINAPI Unknown0x0a8() = 0;
/*0x0b0*/ virtual HRESULT WINAPI Unknown0x0b0() = 0;
/*0x0b8*/ virtual HRESULT WINAPI Unknown0x0b8() = 0;
/*0x0c0*/ virtual HRESULT WINAPI Unknown0x0c0() = 0;
/*0x0c8*/ virtual HRESULT WINAPI Unknown0x0c8() = 0;
/*0x0d0*/ virtual HRESULT WINAPI Unknown0x0d0() = 0;
/*0x0d8*/ virtual HRESULT WINAPI Unknown0x0d8() = 0;
/*0x0e0*/ virtual HRESULT WINAPI Unknown0x0e0() = 0;
/*0x0e8*/ virtual HRESULT WINAPI GetDeviceCaps(D3DCAPS9* pCaps) = 0;
/*0x0f0*/ virtual HRESULT WINAPI Unknown0x0f0() = 0;
/*0x0f8*/ virtual HRESULT WINAPI SetViewport(const D3DVIEWPORT9* pViewport) = 0;
/*0x100*/ virtual HRESULT WINAPI SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX* pMatrix) = 0;
/*0x108*/ virtual HRESULT WINAPI DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount) = 0;
/*0x110*/ virtual HRESULT WINAPI Unknown0x110() = 0;
/*0x118*/ virtual HRESULT WINAPI BeginScene() = 0;
/*0x120*/ virtual HRESULT WINAPI EndScene() = 0;
/*0x128*/ virtual HRESULT WINAPI SetTexture(DWORD Stage, Direct3DTexture9* pTexture) = 0;
/*0x130*/ virtual HRESULT WINAPI Unknown0x130() = 0;
/*0x138*/ virtual HRESULT WINAPI Unknown0x138() = 0;
/*0x140*/ virtual HRESULT WINAPI Unknown0x140() = 0;
/*0x148*/ virtual HRESULT WINAPI TestCooperativeLevel() = 0;
/*0x150*/ virtual HRESULT WINAPI Unknown0x150() = 0;
#pragma endregion

/*0x28*/ Device*             Device;
/*0x30*/
};
constexpr size_t DeviceImpl_size = 0x30;
SIZE_CHECK(DeviceImpl, DeviceImpl_size);

// size: 0x60
struct TextureInfo
{
/*0x00*/ uint32_t         field_0;
/*0x04*/ uint32_t         field_4;
/*0x08*/ uint32_t         field_8;
/*0x0c*/ uint32_t         width;
/*0x10*/ uint32_t         height;
/*0x18*/ ID3D11Texture2D* texture;
/*0x20*/ uint64_t         field_20;
/*0x28*/ uint64_t         field_28;
/*0x30*/ uint64_t         field_30;
/*0x38*/ uint64_t         field_38;
/*0x40*/ uint32_t         field_40;
/*0x44*/ uint32_t         field_44;
/*0x48*/ uint64_t         field_48;
/*0x50*/ uint32_t         field_50;
/*0x54*/ uint32_t         field_54;
/*0x58*/ uint32_t         field_58;
/*0x5c*/ uint32_t         field_5c;
/*0x60*/
};
constexpr size_t TextureInfo_size = 0x60;
SIZE_CHECK(TextureInfo, TextureInfo_size);


struct TexturePriv
{
/*0x00*/ DXGI_FORMAT               Format;
/*0x04*/ uint32_t                  Unknown0x04;
/*0x08*/ ID3D11Texture2D*          Texture2D;
/*0x10*/ eqstd::vector<void*>      Vector1; // all three of these are vector-like
/*0x28*/ eqstd::vector<void*>      Vector2;
/*0x40*/ eqstd::vector<void*>      Vector3;
/*0x58*/ ID3D11ShaderResourceView* ShaderResourceView;
/*0x60*/ uint32_t                  Loaded;
/*0x68*/ eqstd::vector<TextureInfo> TextureInfo;
/*0x80*/ Texture*                  Texture;
/*0x88*/

	EQLIB_OBJECT void InitializeTexture(SwapChain* swapChain);
};
constexpr size_t TexturePriv_size = 0x88;
SIZE_CHECK(TexturePriv, TexturePriv_size);


class [[offsetcomments]] Texture
{
public:
/*0x00*/ uint32_t                TypeHash;
/*0x08*/ const char*             TypeName;
/*0x10*/ uint32_t                RefCount;
/*0x14*/ uint32_t                padding0;
/*0x18*/ TexturePriv             TextureData;
/*0xa0*/

	ID3D11Texture2D* GetTexture2D() const { return TextureData.Texture2D; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return TextureData.ShaderResourceView; }
};
constexpr size_t Texture_size = 0xa0;
SIZE_CHECK(Texture, Texture_size);


class [[offsetcomments]] TextureImpl : public ObjectBase<TextureImpl>
{
public:
/*0x28*/ SwapChainImpl*      SwapChain;
/*0x30*/ Texture*            Texture;
/*0x38*/

	ID3D11Texture2D* GetTexture2D() const { return Texture ? Texture->GetTexture2D() : nullptr; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return Texture ? Texture->GetShaderResourceView() : nullptr; }
};
constexpr size_t TextureImpl_size = 0x38;
SIZE_CHECK(TextureImpl, TextureImpl_size);

} // namespace DX11
} // namespace DX9Wrapper

#endif // ^^ IS_TEST_CLIENT

} // namespace eqlib
