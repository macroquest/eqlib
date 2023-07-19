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

//
// EQGraphicsDX9.dll offsets
//

#define __eqgraphics_fopen_x                                       0x18019084C

#define CParticleSystem__Render_x                                  0x1800B0430
#define CParticleSystem__CreateSpellEmitter_x                      0x1800A00E0

#define CRender__RenderScene_x                                     0x1800CCF30
#define CRender__RenderBlind_x                                     0x1800CCDF0
#define CRender__ResetDevice_x                                     0x1800CDA80
#define CRender__UpdateDisplay_x                                   0x1800CEE80
#define __bRenderSceneCalled_x                                     0x18023A8C0

#define C2DPrimitiveManager__AddCachedText_x                       0x1800E6D70

#if __has_include("../private/eqgraphics-private.h")
#include "../private/eqgraphics-private.h"
#endif
