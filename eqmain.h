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
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x180084940
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x18001A980
//#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x0          // inlined into CXWndManager::DrawCursor
#define EQMain__LoginController__GiveTime_x                        0x180016240
#define EQMain__LoginController__Shutdown_x                        0x180016A40
#define EQMain__LoginServerAPI__JoinServer_x                       0x180017C50
#define EQMain__WndProc_x                                          0x18000BCD0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x180161350
#define EQMain__pinstCLoginViewManager_x                           0x180168F38
#define EQMain__pinstCXWndManager_x                                0x18036BC28
#define EQMain__pinstCSidlManager_x                                0x18036BC30
#define EQMain__pinstLoginController_x                             0x180168F40
#define EQMain__pinstLoginServerAPI_x                              0x180168F20

#if __has_include("../private/eqmain-private.h")
#include "../private/eqmain-private.h"
#endif
