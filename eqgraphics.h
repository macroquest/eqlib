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

#define __eqgraphics_fopen_x                                       0x180267F08

#define CEQGBitmap__GetFirstBitmap_x                               0x180003410

#define CParticleSystem__Render_x                                  0x1800A7190
#define CParticleSystem__CreateSpellEmitter_x                      0x180096DE0

#define CRender__RenderScene_x                                     0x1800C4EB0
#define CRender__RenderBlind_x                                     0x1800C4D70
#define CRender__ResetDevice_x                                     0x1800C5A00
#define CRender__UpdateDisplay_x                                   0x1800C6C70
#define __bRenderSceneCalled_x                                     0x18033A010

#define C2DPrimitiveManager__AddCachedText_x                       0x1800DEE10

#if __has_include("../private/eqgraphics-private.h")
#include "../private/eqgraphics-private.h"
#endif
