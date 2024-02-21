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

//
// EQGraphics.dll offsets
//

#define __eqgraphics_fopen_x                                       0x180267588

#define CEQGBitmap__GetFirstBitmap_x                               0x180003410

#define CParticleSystem__Render_x                                  0x1800A70C0
#define CParticleSystem__CreateSpellEmitter_x                      0x180096D20

#define CRender__RenderScene_x                                     0x1800C4A60
#define CRender__RenderBlind_x                                     0x1800C4920
#define CRender__ResetDevice_x                                     0x1800C55B0
#define CRender__UpdateDisplay_x                                   0x1800C6770
#define __bRenderSceneCalled_x                                     0x180339000

#define C2DPrimitiveManager__AddCachedText_x                       0x1800DE850

#if __has_include("../private/eqgraphics-private.h")
#include "../private/eqgraphics-private.h"
#endif
