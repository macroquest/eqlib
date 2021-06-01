/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1008F1F0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x1001A100
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007F4D0
#define EQMain__LoginController__GiveTime_x                        0x10015C20
#define EQMain__LoginController__Shutdown_x                        0x100163F0
#define EQMain__LoginServerAPI__JoinServer_x                       0x100173D0
#define EQMain__WndProc_x                                          0x1000C4F0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x1016F748
#define EQMain__pinstCLoginViewManager_x                           0x101756F4
#define EQMain__pinstCXWndManager_x                                0x10377B54
#define EQMain__pinstCSidlManager_x                                0x10377B5C
#define EQMain__pinstLoginController_x                             0x101756F8
#define EQMain__pinstLoginServerAPI_x                              0x101756E8

#if __has_include("../private/eqmain-private.h")
#include "../private/eqmain-private.h"
#endif
