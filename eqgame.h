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
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Jan 11 2022"
#define __ExpectedVersionTime                                     "13:30:15"
#define __ActualVersionDate_x                                      0xB5A55C
#define __ActualVersionTime_x                                      0xB5A550
#define __ActualVersionBuild_x                                     0xB4A6DC

// Memory Protection
#define __MemChecker0_x                                            0x664C80
#define __MemChecker1_x                                            0x8F5D80
#define __MemChecker2_x                                            0x6DFB50
#define __MemChecker3_x                                            0x6DFAC0
#define __MemChecker4_x                                            0x637C20
#define __EncryptPad0_x                                            0xE60C18

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDBBDF0
#define __ScreenY_x                                                0xDBBDF8
#define __ScreenX_x                                                0xDBBDFC
#define __ScreenXMax_x                                             0xDBBE00
#define __ScreenYMax_x                                             0xDBBE04
#define __InChatMode_x                                             0xDBBE44
#define __RunWalkState_x                                           0xDBBE48
#define DI8__Mouse_Copy_x                                          0xDBBE5C
#define __MouseLook_x                                              0xDBBEDA
#define __NetStatusToggle_x                                        0xDBBEDD
#define __pulAutoRun_x                                             0xDBBEF8
#define __Clicks_x                                                 0xDBBF14
#define __RMouseHeldTime_x                                         0xDBBF7C
#define __LMouseHeldTime_x                                         0xDBBF80
#define __ZoneType_x                                               0xDBC2D8
#define __ShiftKeyDown_x                                           0xDBC4D8
#define __AutoSkillArray_x                                         0xDBC978
#define __RangeAttackReady_x                                       0xDBCC5C
#define __AttackOnAssist_x                                         0xDBCDD4
#define __ShowNames_x                                              0xDBCE18
#define __PCNames_x                                                0xDBCF68
#define __UseTellWindows_x                                         0xDBD100
#define __pulForward_x                                             0xDBD138
#define __pulBackward_x                                            0xDBD13C
#define __pulTurnRight_x                                           0xDBD140
#define __pulTurnLeft_x                                            0xDBD144
#define __pulStrafeLeft_x                                          0xDBD148
#define __pulStrafeRight_x                                         0xDBD14C
#define __LastTell_x                                               0xDBD9B8
#define __ServerName_x                                             0xDF227C
#define __DoAbilityList_x                                          0xDF22BC
#define __SocialChangedList_x                                      0xDF2304
#define __Socials_x                                                0xDF237C
#define __Inviter_x                                                0xE5A718
#define __Attack_x                                                 0xE5A79B
#define __Autofire_x                                               0xE5A79C

// Misc Globals
#define __do_loot_x                                                0x5E1BE0
#define __gfMaxZoomCameraDistance_x                                0xB523D4
#define __gfMaxCameraDistance_x                                    0xB7ADC8
#define __CurrentSocial_x                                          0xC6C460
#define __BindList_x                                               0xDB1508
#define g_eqCommandStates_x                                        0xDB2270
#define __CommandList_x                                            0xDB2DF8
#define __ScreenMode_x                                             0xEEE298
#define __gWorld_x                                                 0xFA21BC
#define __gpbCommandEvent_x                                        0xFA22C8
#define __ServerHost_x                                             0xFA2493
#define __Guilds_x                                                 0xFA6418
#define __MouseEventTime_x                                         0xFA7E3C
#define DI8__Mouse_Check_x                                         0xFAD438
#define __heqmain_x                                                0xFAF8CC
#define DI8__Mouse_x                                               0xFAC958
#define __HWnd_x                                                   0xFAC95C
#define __Mouse_x                                                  0xFAC9E8
#define DI8__Main_x                                                0xFAC9FC
#define DI8__Keyboard_x                                            0xFACA00
#define __LoginName_x                                              0xFAD0CC
#define __CurrentMapLabel_x                                        0xFBFA14
#define __TargetAggroHolder_x                                      0xFC23C8
#define __GroupAggro_x                                             0xFC2408
#define __SubscriptionType_x                                       0xFF7538

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xFA27A8
#define instEQZoneInfo_x                                           0xDBC0D0
#define pinstActiveBanker_x                                        0xF9FEA8
#define pinstActiveCorpse_x                                        0xF9FEA0
#define pinstActiveGMaster_x                                       0xF9FEA4
#define pinstActiveMerchant_x                                      0xF9FE9C
#define pinstAltAdvManager_x                                       0xEEF0B8
#define pinstCEverQuest_x                                          0xFAC964
#define pinstCamActor_x                                            0xEEE28C
#define pinstCDBStr_x                                              0xEEDE28
#define pinstCDisplay_x                                            0xF9FF24
#define pinstControlledPlayer_x                                    0xF9FEF0
#define pinstCResolutionHandler_x                                  0x1631518
#define pinstCSidlManager_x                                        0xFD0F54
#define pinstCXWndManager_x                                        0xFD0F4C
#define instDynamicZone_x                                          0xFA62E8
#define instExpeditionLeader_x                                     0xFA6332
#define instExpeditionName_x                                       0xFA6372
#define pinstDZMember_x                                            0xFA63FC
#define pinstDZTimerInfo_x                                         0xFA6400
#define pinstEqLogin_x                                             0xFACA18
#define instTribute_x                                              0xDA58D8
#define pinstEQSoundManager_x                                      0xEEF9C8
#define pinstEQSpellStrings_x                                      0xEDEAC8
#define pinstSGraphicsEngine_x                                     0x16312E4
#define pinstLocalPC_x                                             0xF9FF14
#define pinstLocalPlayer_x                                         0xF9FE98
#define pinstMercenaryData_x                                       0xFA9934
#define pinstMercenaryStats_x                                      0xFC2494
#define pinstModelPlayer_x                                         0xF9FEB0
#define pinstRenderInterface_x                                     0x16312F0
#define pinstSkillMgr_x                                            0xFABA20
#define pinstSpawnManager_x                                        0xFAA4F8
#define pinstSpellManager_x                                        0xFABC60
#define pinstSpellSets_x                                           0xE533C4
#define pinstStringTable_x                                         0xF9FF20
#define pinstSwitchManager_x                                       0xF9FD48
#define pinstTarget_x                                              0xF9FEEC
#define pinstTaskMember_x                                          0xDA5420
#define pinstTrackTarget_x                                         0xF9FEF4
#define pinstTradeTarget_x                                         0xF9FEAC
#define instTributeActive_x                                        0xDA58F9
#define pinstViewActor_x                                           0xEEE288
#define pinstWorldData_x                                           0xF9FF1C
#define pinstPlayerPath_x                                          0xFAA590
#define pinstTargetIndicator_x                                     0xFABEC8
#define EQObject_Top_x                                             0xF9FF08

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0xFBB540
#define pinstCContainerMgr_x                                       0xEEE2EC
#define pinstCContextMenuManager_x                                 0xFD0F08
#define pinstCInvSlotMgr_x                                         0xEEE2E4
#define pinstCItemDisplayManager_x                                 0xFBEF68
#define pinstCPopupWndManager_x                                    0xFC0560
#define pinstCSpellDisplayMgr_x                                    0xFC1690
#define pinstCTaskManager_x                                        0xC77268
#define pinstEQSuiteTextureLoader_x                                0xEAEBA0
#define pinstItemIconCache_x                                       0xFBBE60
#define pinstLootFiltersManager_x                                  0xEED3E8

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DCEB0
#define __CastRay2_x                                               0x5DD140
#define __ConvertItemTags_x                                        0x5FA440
#define __CleanItemTags_x                                          0x47DB90
#define __CreateCascadeMenuItems_x                                 0x570190
#define __DoesFileExist_x                                          0x8F8D10
#define __EQGetTime_x                                              0x8F59F0
#define __ExecuteCmd_x                                             0x5D5370
#define __FixHeading_x                                             0x9F4010
#define __FlushDxKeyboard_x                                        0x6DAE20
#define __get_bearing_x                                            0x5DCAD0
#define __get_melee_range_x                                        0x5DD380
#define __GetAnimationCache_x                                      0x74EC70
#define __GetGaugeValueFromEQ_x                                    0x85FA40
#define __GetLabelFromEQ_x                                         0x861450
#define __GetXTargetType_x                                         0x9F6380
#define __HandleMouseWheel_x                                       0x6DFBE0
#define __HeadingDiff_x                                            0x9F4070
#define __HelpPath_x                                               0xFA7AFC
#define __NewUIINI_x                                               0x85F720
#define __ProcessGameEvents_x                                      0x643D60
#define __ProcessKeyboardEvents_x                                  0x6DCD90
#define __ProcessMouseEvents_x                                     0x643460
#define __SaveColors_x                                             0x570020
#define __STMLToText_x                                             0x932820
#define __WndProc_x                                                0x6DD850
#define CMemoryMappedFile__SetFile_x                               0xAE58F0
#define DrawNetStatus_x                                            0x673370
#define Teleport_Table_Size_x                                      0xFA2350
#define Teleport_Table_x                                           0xF9FF28
#define Util__FastTime_x                                           0x8F55B0
#define __eq_delete_x                                              0x9FCF03
#define __eq_new_x                                                 0x9FD474
#define __CopyLayout_x                                             0x65FEF0
#define __ThrottleFrameRate_x                                      0x62CA43
#define __ThrottleFrameRateEnd_x                                   0x62CA9F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EC4A0
#define CAAWnd__Update_x                                           0x6EB7E0
#define CAAWnd__UpdateSelected_x                                   0x6E89F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49BC10
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49BA90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495D70
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494FA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x579100
#define AltAdvManager__IsAbilityReady_x                            0x577D00
#define AltAdvManager__GetAAById_x                                 0x5780A0
#define AltAdvManager__CanTrainAbility_x                           0x578110
#define AltAdvManager__CanSeeAbility_x                             0x5784C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CE600
#define CharacterZoneClient__CalcAffectChange_x                    0x4CCEE0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CD0C0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1BB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1F70
#define CharacterZoneClient__FindAffectSlot_x                      0x4CB6D0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EC720
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E0640
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CCC80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B7790
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B94B0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E0500
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0400
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CCD20
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5B50
#define CharacterZoneClient__GetModCap_x                           0x4EC620
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CCBD0
#define CharacterZoneClient__HasSkill_x                            0x4DD770
#define CharacterZoneClient__IsStackBlocked_x                      0x4C93E0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DEEF0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E86B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CADE0

// CBankWnd
#define CBankWnd__WndNotification_x                                0x708B90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x713920

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70E560
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70C530

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x718050

// CButtonWnd
#define CButtonWnd__vftable_x                                      0xB88788

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x73C0E0
#define CChatWindowManager__InitContextMenu_x                      0x733A30
#define CChatWindowManager__FreeChatWindow_x                       0x73AC70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x73BDB0
#define CChatWindowManager__CreateChatWindow_x                     0x73B2A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F08A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73CA70
#define CChatWindow__Clear_x                                       0x73DF10
#define CChatWindow__WndNotification_x                             0x73E6A0
#define CChatWindow__AddHistory_x                                  0x73D750

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x945E20
#define CContextMenu__RemoveMenuItem_x                             0x946210
#define CContextMenu__RemoveAllMenuItems_x                         0x946230
#define CContextMenu__CheckMenuItem_x                              0x946290
#define CContextMenu__SetMenuItem_x                                0x946130
#define CContextMenu__AddSeparator_x                               0x946110

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x946810
#define CContextMenuManager__RemoveMenu_x                          0x946880
#define CContextMenuManager__PopupMenu_x                           0x946940
#define CContextMenuManager__Flush_x                               0x9467B0
#define CContextMenuManager__GetMenu_x                             0x49E310
#define CContextMenuManager__CreateDefaultMenu_x                   0x748A50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9CD430
#define CChatService__GetFriendName_x                              0x9CD440

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x942CB0
#define CComboWnd__Draw_x                                          0x942160
#define CComboWnd__GetCurChoice_x                                  0x942A80
#define CComboWnd__GetListRect_x                                   0x942600
#define CComboWnd__GetTextRect_x                                   0x942D20
#define CComboWnd__InsertChoice_x                                  0x942790
#define CComboWnd__SetColors_x                                     0x942760
#define CComboWnd__SetChoice_x                                     0x942A60
#define CComboWnd__GetItemCount_x                                  0x942A90
#define CComboWnd__GetCurChoiceText_x                              0x942AC0
#define CComboWnd__GetChoiceText_x                                 0x942AA0
#define CComboWnd__InsertChoiceAtIndex_x                           0x942820

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x746090
#define CContainerWnd__vftable_x                                   0xB637FC
#define CContainerWnd__SetContainer_x                              0x7478F0

// CDisplay
#define CDisplay__cameraType_x                                     0xEEE038
#define CDisplay__ZoneMainUI_x                                     0x56A860
#define CDisplay__PreZoneMainUI_x                                  0x56A870
#define CDisplay__CleanGameUI_x                                    0x56FE00
#define CDisplay__GetClickedActor_x                                0x562650
#define CDisplay__GetUserDefinedColor_x                            0x55A3D0
#define CDisplay__InitCharSelectUI_x                               0x56A220
#define CDisplay__ReloadUI_x                                       0x569B80
#define CDisplay__WriteTextHD2_x                                   0x55ECD0
#define CDisplay__TrueDistance_x                                   0x566140
#define CDisplay__SetViewActor_x                                   0x561F70
#define CDisplay__GetFloorHeight_x                                 0x55EFA0
#define CDisplay__SetRenderWindow_x                                0x55D950
#define CDisplay__ToggleScreenshotMode_x                           0x561A40
#define CDisplay__RealRender_World_x                               0x55CC60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x968340
#define CEditWnd__DrawCaret_x                                      0x949790
#define CEditWnd__EnsureCaretVisible_x                             0x94BB10
#define CEditWnd__GetCaretPt_x                                     0x94A970
#define CEditWnd__GetCharIndexPt_x                                 0x94A720
#define CEditWnd__GetDisplayString_x                               0x94A5C0
#define CEditWnd__GetHorzOffset_x                                  0x948D10
#define CEditWnd__GetLineForPrintableChar_x                        0x94BA20
#define CEditWnd__GetSelStartPt_x                                  0x94A9D0
#define CEditWnd__GetSTMLSafeText_x                                0x94A3D0
#define CEditWnd__PointFromPrintableChar_x                         0x94B660
#define CEditWnd__ReplaceSelection_x                               0x94B220
#define CEditWnd__SelectableCharFromPoint_x                        0x94B7C0
#define CEditWnd__SetEditable_x                                    0x94AAA0
#define CEditWnd__SetWindowText_x                                  0x94A120

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62F230
#define CEverQuest__ClickedPlayer_x                                0x6206D0
#define CEverQuest__CreateTargetIndicator_x                        0x640CC0
#define CEverQuest__DeleteTargetIndicator_x                        0x640D50
#define CEverQuest__DoTellWindow_x                                 0x4F09A0
#define CEverQuest__OutputTextToLog_x                              0x4F0C70
#define CEverQuest__DropHeldItemOnGround_x                         0x6157A0
#define CEverQuest__dsp_chat_x                                     0x4F1040
#define CEverQuest__trimName_x                                     0x63C220
#define CEverQuest__Emote_x                                        0x62F8F0
#define CEverQuest__EnterZone_x                                    0x629520
#define CEverQuest__GetBodyTypeDesc_x                              0x634EE0
#define CEverQuest__GetClassDesc_x                                 0x635520
#define CEverQuest__GetClassThreeLetterCode_x                      0x635B20
#define CEverQuest__GetDeityDesc_x                                 0x63F470
#define CEverQuest__GetLangDesc_x                                  0x635CE0
#define CEverQuest__GetRaceDesc_x                                  0x635500
#define CEverQuest__InterpretCmd_x                                 0x63FAE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x619C90
#define CEverQuest__LMouseUp_x                                     0x617D50
#define CEverQuest__RightClickedOnPlayer_x                         0x61A880
#define CEverQuest__RMouseUp_x                                     0x619010
#define CEverQuest__SetGameState_x                                 0x615520
#define CEverQuest__UPCNotificationFlush_x                         0x63C140
#define CEverQuest__IssuePetCommand_x                              0x6372E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x6306E0
#define CEverQuest__ReportSuccessfulHit_x                          0x6311C0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x759D30
#define CGaugeWnd__CalcLinesFillRect_x                             0x759D90
#define CGaugeWnd__Draw_x                                          0x759340

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B52C0
#define CGuild__GetGuildName_x                                     0x4B3AE0
#define CGuild__GetGuildIndex_x                                    0x4B4200

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7772A0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x6546E0
#define CHotButton__SetCheck_x                                     0x654320

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x784600
#define CInvSlotMgr__MoveItem_x                                    0x7831D0
#define CInvSlotMgr__SelectSlot_x                                  0x7846C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x7819E0
#define CInvSlot__SliderComplete_x                                 0x77EC10
#define CInvSlot__GetItemBase_x                                    0x77E490
#define CInvSlot__UpdateItem_x                                     0x77E680

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7854F0
#define CInvSlotWnd__HandleLButtonUp_x                             0x785F20

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x79E460
#define CItemDisplayWnd__UpdateStrings_x                           0x79DD50
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x792D20
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x793270
#define CItemDisplayWnd__RequestConvertItem_x                      0x79F290

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x859EB0
#define CSpellDisplayWnd__UpdateStrings_x                          0x859E20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x88F470

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A5380

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x529490

// CLabel
#define CLabel__UpdateText_x                                       0x7ABED0

// CListWnd
#define CListWnd__CListWnd_x                                       0x915410
#define CListWnd__dCListWnd_x                                      0x915710
#define CListWnd__vftable_x                                        0xB88060
#define CListWnd__AddColumn_x                                      0x91A340
#define CListWnd__AddColumn1_x                                     0x91A460
#define CListWnd__AddLine_x                                        0x91A7E0
#define CListWnd__AddString_x                                      0x91A5D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x91A0F0
#define CListWnd__CalculateVSBRange_x                              0x919ED0
#define CListWnd__ClearSel_x                                       0x91B1B0
#define CListWnd__ClearAllSel_x                                    0x91B200
#define CListWnd__CloseAndUpdateEditWindow_x                       0x91BCF0
#define CListWnd__Compare_x                                        0x919660
#define CListWnd__Draw_x                                           0x9158D0
#define CListWnd__DrawColumnSeparators_x                           0x918450
#define CListWnd__DrawHeader_x                                     0x9188B0
#define CListWnd__DrawItem_x                                       0x918F00
#define CListWnd__DrawLine_x                                       0x9185C0
#define CListWnd__DrawSeparator_x                                  0x9184F0
#define CListWnd__EnableLine_x                                     0x917D00
#define CListWnd__EnsureVisible_x                                  0x91BC10
#define CListWnd__ExtendSel_x                                      0x91B0F0
#define CListWnd__GetColumnTooltip_x                               0x917880
#define CListWnd__GetColumnMinWidth_x                              0x9178F0
#define CListWnd__GetColumnWidth_x                                 0x917800
#define CListWnd__GetCurSel_x                                      0x917170
#define CListWnd__GetItemAtPoint_x                                 0x917F80
#define CListWnd__GetItemAtPoint1_x                                0x917FF0
#define CListWnd__GetItemData_x                                    0x9171F0
#define CListWnd__GetItemHeight_x                                  0x9175D0
#define CListWnd__GetItemIcon_x                                    0x917370
#define CListWnd__GetItemRect_x                                    0x917DF0
#define CListWnd__GetItemText_x                                    0x917230
#define CListWnd__GetSelList_x                                     0x91B250
#define CListWnd__GetSeparatorRect_x                               0x918260
#define CListWnd__InsertLine_x                                     0x91AD20
#define CListWnd__RemoveLine_x                                     0x91AF40
#define CListWnd__SetColors_x                                      0x919EB0
#define CListWnd__SetColumnJustification_x                         0x919BE0
#define CListWnd__SetColumnLabel_x                                 0x91A570
#define CListWnd__SetColumnWidth_x                                 0x919AF0
#define CListWnd__SetCurSel_x                                      0x91B040
#define CListWnd__SetItemColor_x                                   0x91B890
#define CListWnd__SetItemData_x                                    0x91B850
#define CListWnd__SetItemText_x                                    0x91B470
#define CListWnd__ShiftColumnSeparator_x                           0x919CA0
#define CListWnd__Sort_x                                           0x919950
#define CListWnd__ToggleSel_x                                      0x91B070
#define CListWnd__SetColumnsSizable_x                              0x919D40
#define CListWnd__SetItemWnd_x                                     0x91B710
#define CListWnd__GetItemWnd_x                                     0x9173C0
#define CListWnd__SetItemIcon_x                                    0x91B4F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x91A1F0
#define CListWnd__SetVScrollPos_x                                  0x919AD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C3410

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BE620
#define MapViewMap__dMapViewMap_x                                  0x7BE760
#define MapViewMap__vftable_x                                      0xB6AC28
#define MapViewMap__Clear_x                                        0x7BF070
#define MapViewMap__SetZoom_x                                      0x7C8320
#define MapViewMap__HandleLButtonDown_x                            0x7BE870
#define MapViewMap__GetWorldCoordinates_x                          0x7C1A50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E6AD0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E7430
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E7AC0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7EADB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E5540
#define CMerchantWnd__SelectBuySellSlot_x                          0x7F0FB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E6720

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x98F910
#define CPacketScrambler__hton_x                                   0x98F900

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x93DF70
#define CSidlManagerBase__CreatePageWnd_x                          0x93D750
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x938C20
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x938BB0
#define CSidlManagerBase__FindAnimation1_x                         0x938EA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x939270
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x9390A0
#define CSidlManagerBase__CreateLabel_x                            0x84FA90
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x93C720
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x93C9B0
#define CSidlManagerBase__CreateXWnd_x                             0x93C9F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84FED0
#define CSidlManager__CreateXWnd_x                                 0x84F500

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x934BC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x934AC0
#define CSidlScreenWnd__ConvertToRes_x                             0x9625B0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x934430
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x934120
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9341F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9342C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x935480
#define CSidlScreenWnd__EnableIniStorage_x                         0x935970
#define CSidlScreenWnd__GetChildItem_x                             0x9358F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x935670
#define CSidlScreenWnd__HandleLButtonUp_x                          0x923C30
#define CSidlScreenWnd__Init1_x                                    0x933BF0
#define CSidlScreenWnd__LoadIniInfo_x                              0x9359C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x936590
#define CSidlScreenWnd__LoadSidlScreen_x                           0x932FF0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFD0DD8
#define CSidlScreenWnd__StoreIniInfo_x                             0x936110
#define CSidlScreenWnd__StoreIniVis_x                              0x936480
#define CSidlScreenWnd__vftable_x                                  0xB88A34
#define CSidlScreenWnd__WndNotification_x                          0x935350

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2A20
#define CSkillMgr__GetSkillCap_x                                   0x6C2BF0
#define CSkillMgr__GetNameToken_x                                  0x6C2210
#define CSkillMgr__IsActivatedSkill_x                              0x6C2300
#define CSkillMgr__IsCombatSkill_x                                 0x6C2270

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9478F0
#define CSliderWnd__SetValue_x                                     0x947720
#define CSliderWnd__SetNumTicks_x                                  0x947780

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x8567D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x950C50
#define CStmlWnd__CalculateHSBRange_x                              0x951BD0
#define CStmlWnd__CalculateVSBRange_x                              0x951B40
#define CStmlWnd__CanBreakAtCharacter_x                            0x956A30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9576D0
#define CStmlWnd__ForceParseNow_x                                  0x9511C0
#define CStmlWnd__GetNextTagPiece_x                                0x956990
#define CStmlWnd__GetVisibleText_x                                 0x9511E0
#define CStmlWnd__InitializeWindowVariables_x                      0x957520
#define CStmlWnd__MakeStmlColorTag_x                               0x9502F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x950360
#define CStmlWnd__SetSTMLText_x                                    0x94F0D0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9588F0
#define CStmlWnd__UpdateHistoryString_x                            0x9578D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x94DF70
#define CTabWnd__DrawCurrentPage_x                                 0x94E910
#define CTabWnd__DrawTab_x                                         0x94E500
#define CTabWnd__GetCurrentPage_x                                  0x94D6B0
#define CTabWnd__GetCurrentTabIndex_x                              0x94D6A0
#define CTabWnd__GetPageFromTabIndex_x                             0x94E440
#define CTabWnd__GetPageInnerRect_x                                0x94D8E0
#define CTabWnd__GetTabInnerRect_x                                 0x94D820
#define CTabWnd__GetTabRect_x                                      0x94D6E0
#define CTabWnd__InsertPage_x                                      0x94DAE0
#define CTabWnd__RemovePage_x                                      0x94DC30
#define CTabWnd__SetPage_x                                         0x94D960
#define CTabWnd__SetPageRect_x                                     0x94DE60
#define CTabWnd__UpdatePage_x                                      0x94E2F0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x94D270
#define CPageWnd__SetTabText_x                                     0x94D210

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AD340

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x920150
#define CTextureFont__DrawWrappedText1_x                           0x920080
#define CTextureFont__DrawWrappedText2_x                           0x920240
#define CTextureFont__GetTextExtent_x                              0x920450

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x95F060

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x90AEB0

// CXStr
#define CXStr__gFreeLists_x                                        0xEAE578
#define CXStr__gCXStrAccess_x                                      0xFD0680

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x945840

// CXWnd
#define CXWnd__BringToTop_x                                        0x9276F0
#define CXWnd__ClrFocus_x                                          0x927080
#define CXWnd__Destroy_x                                           0x927120
#define CXWnd__DoAllDrawing_x                                      0x923280
#define CXWnd__DrawChildren_x                                      0x923250
#define CXWnd__DrawColoredRect_x                                   0x923810
#define CXWnd__DrawTooltip_x                                       0x921830
#define CXWnd__DrawTooltipAtPoint_x                                0x9218F0
#define CXWnd__GetBorderFrame_x                                    0x9234B0
#define CXWnd__GetChildItem_x                                      0x927910
#define CXWnd__GetChildWndAt_x                                     0x927790
#define CXWnd__GetClientClipRect_x                                 0x925880
#define CXWnd__GetRelativeRect_x                                   0x925BF0
#define CXWnd__GetScreenClipRect_x                                 0x925950
#define CXWnd__GetScreenRect_x                                     0x925B20
#define CXWnd__GetTooltipRect_x                                    0x923860
#define CXWnd__GetWindowTextA_x                                    0x4F0840
#define CXWnd__IsActive_x                                          0x923FB0
#define CXWnd__IsDescendantOf_x                                    0x9265A0
#define CXWnd__IsReallyVisible_x                                   0x9265D0
#define CXWnd__IsType_x                                            0x927F10
#define CXWnd__Minimize_x                                          0x926D10
#define CXWnd__ProcessTransition_x                                 0x927200
#define CXWnd__Refade_x                                            0x926A10
#define CXWnd__Resize_x                                            0x926CA0
#define CXWnd__Right_x                                             0x9274E0
#define CXWnd__SetFocus_x                                          0x927040
#define CXWnd__SetFont_x                                           0x9270B0
#define CXWnd__SetKeyTooltip_x                                     0x927CE0
#define CXWnd__SetMouseOver_x                                      0x924970
#define CXWnd__SetParent_x                                         0x9262D0
#define CXWnd__StartFade_x                                         0x926490
#define CXWnd__vftable_x                                           0xB884A8
#define CXWnd__CXWnd_x                                             0x920710
#define CXWnd__dCXWnd_x                                            0x920DC0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x963600

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x92A7F0
#define CXWndManager__DrawWindows_x                                0x92A940
#define CXWndManager__GetKeyboardFlags_x                           0x92D2E0
#define CXWndManager__HandleKeyboardMsg_x                          0x92CEB0
#define CXWndManager__RemoveWnd_x                                  0x92D5A0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x92DA90

// CDBStr
#define CDBStr__GetString_x                                        0x558E80

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1960
#define CharacterZoneClient__CastSpell_x                           0x4C64A0
#define CharacterZoneClient__Cur_HP_x                              0x4DA3C0
#define CharacterZoneClient__Cur_Mana_x                            0x4E1630
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DD530
#define CharacterZoneClient__GetBaseSkill_x                        0x4DE4E0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9AD0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E7740
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B90C0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B9210
#define CharacterZoneClient__GetHPRegen_x                          0x4E7180
#define CharacterZoneClient__GetManaRegen_x                        0x4E7B80
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA930
#define CharacterZoneClient__Max_Endurance_x                       0x682F40
#define CharacterZoneClient__Max_HP_x                              0x4DA1F0
#define CharacterZoneClient__Max_Mana_x                            0x682D20
#define CharacterZoneClient__SpellDuration_x                       0x4CA370
#define CharacterZoneClient__TotalEffect_x                         0x4CDEF0
#define CharacterZoneClient__UseSkill_x                            0x4E8D50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9BA460

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0BD0
#define CCharacterListWnd__EnterWorld_x                            0x4C05A0
#define CCharacterListWnd__Quit_x                                  0x4C02C0
#define CCharacterListWnd__UpdateList_x                            0x4C0790

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x991C00
#define ItemBase__CreateItemTagString_x                            0x992410
#define ItemBase__GetImageNum_x                                    0x994140
#define ItemBase__GetItemValue_x                                   0x9953B0
#define ItemBase__IsEmpty_x                                        0x9967F0
#define ItemBase__IsKeyRingItem_x                                  0x996E20
#define ItemBase__ValueSellMerchant_x                              0x9993C0
#define ItemClient__CanDrop_x                                      0x65A590
#define ItemClient__CanGoInBag_x                                   0x65A6B0
#define ItemClient__CreateItemClient_x                             0x659520
#define ItemClient__dItemClient_x                                  0x659470

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57A0A0
#define EQ_LoadingS__Array_x                                       0xDA9D50

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x9A3850
#define PcBase__GetCombatAbility_x                                 0x9A3DD0
#define PcBase__GetCombatAbilityTimer_x                            0x9A3E40
#define PcBase__GetItemContainedRealEstateIds_x                    0x9A4470
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x9A4BF0
#define PcClient__AlertInventoryChanged_x                          0x67A8F0
#define PcClient__GetConLevel_x                                    0x67B030
#define PcClient__HasLoreItem_x                                    0x67B980
#define PcZoneClient__GetItemRecastTimer_x                         0x6860F0
#define PcZoneClient__RemoveMyAffect_x                             0x689960

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x5D9F50
#define EQItemList__add_object_x                                   0x60A660
#define EQItemList__add_item_x                                     0x5DA530
#define EQItemList__delete_item_x                                  0x5DA580
#define EQItemList__FreeItemList_x                                 0x5DA490

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x555180

// PlayerClient
#define PlayerBase__CanSee_x                                       0x9F2720
#define PlayerBase__CanSee1_x                                      0x9F27F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9F2490
#define PlayerBase__HasProperty_j_x                                0x9F23D0
#define PlayerBase__IsTargetable_x                                 0x9F2930
#define PlayerClient__ChangeBoneStringSprite_x                     0x69CDE0
#define PlayerClient__dPlayerClient_x                              0x68F4C0
#define PlayerClient__GetPcClient_x                                0x69B3B0
#define PlayerClient__PlayerClient_x                               0x68FD10
#define PlayerClient__SetNameSpriteState_x                         0x6942D0
#define PlayerClient__SetNameSpriteTint_x                          0x6951C0
#define PlayerZoneClient__ChangeHeight_x                           0x6A9620
#define PlayerZoneClient__DoAttack_x                               0x6A5800
#define PlayerZoneClient__GetLevel_x                               0x6ABB90
#define PlayerZoneClient__IsValidTeleport_x                        0x60BB10
#define PlayerZoneClient__LegalPlayerRace_x                        0x571E70

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x69FF90
#define PlayerManagerClient__GetSpawnByName_x                      0x6A0040
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x6A00D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65DEB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65DF80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65DFC0
#define KeypressHandler__ClearCommandStateArray_x                  0x65F480
#define KeypressHandler__HandleKeyDown_x                           0x65F4A0
#define KeypressHandler__HandleKeyUp_x                             0x65F540
#define KeypressHandler__SaveKeymapping_x                          0x65FAF0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B82C0

// StringTable
#define StringTable__getString_x                                   0x9B3000

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x685AF0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x683C90
#define PcZoneClient__GetPcSkillLimit_x                            0x6895A0
#define PcZoneClient__RemovePetEffect_x                            0x689C10
#define PcZoneClient__HasAlternateAbility_x                        0x682B60
#define PcZoneClient__CanEquipItem_x                               0x683250
#define PcZoneClient__GetItemByID_x                                0x686620
#define PcZoneClient__RemoveBuffEffect_x                           0x689CC0
#define PcZoneClient__BandolierSwap_x                              0x684250
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686090

// Doors
#define EQSwitch__UseSwitch_x                                      0x610730

// IconCache
#define IconCache__GetIcon_x                                       0x74E610

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x744F60
#define CContainerMgr__CloseContainer_x                            0x745280
#define CContainerMgr__OpenExperimentContainer_x                   0x745DE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81EB70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652A80

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B42A0
#define CLootWnd__RequestLootSlot_x                                0x7B34B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A43B0
#define EQ_Spell__SpellAffects_x                                   0x5A48C0
#define EQ_Spell__SpellAffectBase_x                                0x5A45E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1900
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D18B0
#define EQ_Spell__IsSPAStacking_x                                  0x5A5840
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4AD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A5870
#define __IsResEffectSpell_x                                       0x4D10B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B2070

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x86BB70
#define CTargetWnd__WndNotification_x                              0x86B310
#define CTargetWnd__RefreshTargetBuffs_x                           0x86B670
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x86A0F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x8705F0
#define CTaskWnd__ConfirmAbandonTask_x                             0x873830

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552D40
#define CTaskManager__HandleMessage_x                              0x550B20
#define CTaskManager__GetTaskStatus_x                              0x552DF0
#define CTaskManager__GetElementDescription_x                      0x552E70

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59EFA0
#define EqSoundManager__PlayScriptMp3_x                            0x59F1A0
#define EqSoundManager__SoundAssistPlay_x                          0x6C6ED0
#define EqSoundManager__WaveInstancePlay_x                         0x6C63C0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541D60

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x94C8F0
#define CTextureAnimation__SetCurCell_x                            0x94C6B0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5826C0
#define CAltAbilityData__GetMercMaxRank_x                          0x582650

// CTargetRing
#define CTargetRing__Cast_x                                        0x650290

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x646A30
#define CharacterBase__GetItemByGlobalIndex_x                      0x9CAF90
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9CAFE0
#define CharacterBase__GetMemorizedSpell_x                         0x659370
#define CharacterBase__IsExpansionFlag_x                           0x5D3B80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728720
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728FF0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7290A0

// messages
#define msg_spell_worn_off_x                                       0x5CB2F0
#define msg_new_text_x                                             0x5BEC60
#define __msgTokenTextParam_x                                      0x5CD750
#define msgTokenText_x                                             0x5CDB60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x6CB3F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CACC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F6C30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7AC340

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x749D00
#define CCursorAttachment__AttachToCursor1_x                       0x749D40
#define CCursorAttachment__Deactivate_x                            0x74B400

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x95D4D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x95DC30
#define CEQSuiteTextureLoader__GetTexture_x                        0x95D8B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x5237C0
#define CFindItemWnd__Update_x                                     0x524410
#define CFindItemWnd__PickupSelectedItem_x                         0x521FD0

// Camera
#define EverQuest__Cameras_x                                       0xDBD10C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D9C0
#define LootFiltersManager__GetItemFilterData_x                    0x52D2F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52D320
#define LootFiltersManager__SetItemLootFilter_x                    0x52D530

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x80B520

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x9FC920
#define CResolutionHandler__GetWindowedStyle_x                     0x6C1300

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x7418D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CEE00
#define CDistillerInfo__Instance_x                                 0x9CED40

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x764970
#define CGroupWnd__UpdateDisplay_x                                 0x763BC0

// ItemBase
#define ItemBase__IsLore_x                                         0x996EE0
#define ItemBase__IsLoreEquipped_x                                 0x996F50

#define MultipleItemMoveManager__ProcessMove_x                     0x66F1E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60A5C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x60A700
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60A760

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5A00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5032E0
#define FactionManagerClient__HandleFactionMessage_x               0x503B00
#define FactionManagerClient__GetFactionStanding_x                 0x5042F0
#define FactionManagerClient__GetMaxFaction_x                      0x50430F
#define FactionManagerClient__GetMinFaction_x                      0x5042C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49ED30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50FE60

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x581880
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x5822C0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CEAB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5A00

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AD100

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA430

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE5A7A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DEB70

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D300

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6E0760

// AchievementManager
#define AchievementManager__Instance_x                             0x47E4A0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
