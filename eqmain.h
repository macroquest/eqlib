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

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1006B7A0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10017E60
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x10079BE0
#define EQMain__LoginController__GiveTime_x                        0x100128B0
#define EQMain__LoginController__Shutdown_x                        0x10011D20
#define EQMain__LoginServerAPI__JoinServer_x                       0x10013C30
#define EQMain__WndProc_x                                          0x10007350

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10133EB4
#define EQMain__pinstCLoginViewManager_x                           0x10150170
#define EQMain__pinstCXWndManager_x                                0x10341AF8
#define EQMain__pinstCSidlManager_x                                0x10341B00
#define EQMain__pinstLoginController_x                             0x1015015C
#define EQMain__pinstLoginServerAPI_x                              0x10150164

#if __has_include("../private/eqmain-private.h")
#include "../private/eqmain-private.h"
#endif
