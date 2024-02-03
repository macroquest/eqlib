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

#include <d3d9.h>
#include <wil/com.h>
#include <guiddef.h>

namespace eqlib {

using Direct3D9 = IDirect3D9;
using Direct3DDevice9 = IDirect3DDevice9;
using Direct3DSwapChain9 = IDirect3DSwapChain9;
using Direct3DTexture9 = IDirect3DTexture9;
using Direct3DSurface9 = IDirect3DSurface9;
using Direct3DVertexBuffer9 = IDirect3DVertexBuffer9;
using Direct3DIndexBuffer9 = IDirect3DIndexBuffer9;

} // namespace eqlib
