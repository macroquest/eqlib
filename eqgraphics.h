/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#define __eqgraphics_fopen_x                                       0x18017E3C4

#define CParticleSystem__Render_x                                  0x18009E250

#define CRender__RenderScene_x                                     0x1800BA950
#define CRender__RenderBlind_x                                     0x1800BA810
#define CRender__ResetDevice_x                                     0x1800BB4A0
#define CRender__UpdateDisplay_x                                   0x1800BC6C0
#define __bRenderSceneCalled_x                                     0x180224110

#define C2DPrimitiveManager__AddCachedText_x                       0x1800D4510

#if __has_include("../private/eqgraphics-private.h")
#include "../private/eqgraphics-private.h"
#endif
