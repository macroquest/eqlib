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
#define __ExpectedVersionDate                                     "Jan 13 2022"
#define __ExpectedVersionTime                                     "22:17:24"
#define __ActualVersionDate_x                                      0xB554EC
#define __ActualVersionTime_x                                      0xB554E0
#define __ActualVersionBuild_x                                     0xB4566C

// Memory Protection
#define __MemChecker0_x                                            0x663750
#define __MemChecker1_x                                            0x952AB0
#define __MemChecker2_x                                            0x6DE570
#define __MemChecker3_x                                            0x6DE4E0
#define __MemChecker4_x                                            0x6367B0
#define __EncryptPad0_x                                            0xE5BBF0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDB6DC8
#define __ScreenY_x                                                0xDB6DD0
#define __ScreenX_x                                                0xDB6DD4
#define __ScreenXMax_x                                             0xDB6DD8
#define __ScreenYMax_x                                             0xDB6DDC
#define __InChatMode_x                                             0xDB6E1C
#define __RunWalkState_x                                           0xDB6E20
#define DI8__Mouse_Copy_x                                          0xDB6E34
#define __MouseLook_x                                              0xDB6EB2
#define __NetStatusToggle_x                                        0xDB6EB5
#define __pulAutoRun_x                                             0xDB6ED0
#define __Clicks_x                                                 0xDB6EEC
#define __RMouseHeldTime_x                                         0xDB6F54
#define __LMouseHeldTime_x                                         0xDB6F58
#define __ZoneType_x                                               0xDB72B0
#define __ShiftKeyDown_x                                           0xDB74B0
#define __AutoSkillArray_x                                         0xDB7950
#define __RangeAttackReady_x                                       0xDB7C34
#define __AttackOnAssist_x                                         0xDB7DAC
#define __ShowNames_x                                              0xDB7DF0
#define __PCNames_x                                                0xDB7F40
#define __UseTellWindows_x                                         0xDB80D8
#define __pulForward_x                                             0xDB8110
#define __pulBackward_x                                            0xDB8114
#define __pulTurnRight_x                                           0xDB8118
#define __pulTurnLeft_x                                            0xDB811C
#define __pulStrafeLeft_x                                          0xDB8120
#define __pulStrafeRight_x                                         0xDB8124
#define __LastTell_x                                               0xDB8990
#define __ServerName_x                                             0xDED254
#define __DoAbilityList_x                                          0xDED294
#define __SocialChangedList_x                                      0xDED2DC
#define __Socials_x                                                0xDED354
#define __Inviter_x                                                0xE556F0
#define __Attack_x                                                 0xE55773
#define __Autofire_x                                               0xE55774

// Misc Globals
#define __do_loot_x                                                0x5E07E0
#define __gfMaxZoomCameraDistance_x                                0xB4D364
#define __gfMaxCameraDistance_x                                    0xB75D58
#define __CurrentSocial_x                                          0xC67460
#define __BindList_x                                               0xDAC4E8
#define g_eqCommandStates_x                                        0xDAD250
#define __CommandList_x                                            0xDADDD8
#define __ScreenMode_x                                             0xEE9270
#define __GroupCount_x                                             0xF9CF6A
#define __gWorld_x                                                 0xF9D17C
#define __gpbCommandEvent_x                                        0xF9D288
#define __ServerHost_x                                             0xF9D453
#define __Guilds_x                                                 0xFA13D8
#define __MouseEventTime_x                                         0xFA2DFC
#define DI8__Mouse_Check_x                                         0xFA7934
#define __heqmain_x                                                0xFA9DC8
#define DI8__Mouse_x                                               0xFA9DD4
#define __HWnd_x                                                   0xFA9DD8
#define __Mouse_x                                                  0xFA9E60
#define DI8__Main_x                                                0xFA9E74
#define DI8__Keyboard_x                                            0xFA9E78
#define __LoginName_x                                              0xFAA544
#define __CurrentMapLabel_x                                        0xFBA9D4
#define __TargetAggroHolder_x                                      0xFBD388
#define __GroupAggro_x                                             0xFBD3C8
#define __SubscriptionType_x                                       0xFF1628

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF9D768
#define instEQZoneInfo_x                                           0xDB70A8
#define pinstActiveBanker_x                                        0xF9AE68
#define pinstActiveCorpse_x                                        0xF9AE60
#define pinstActiveGMaster_x                                       0xF9AE64
#define pinstActiveMerchant_x                                      0xF9AE5C
#define pinstAltAdvManager_x                                       0xEEA078
#define pinstBandageTarget_x                                       0xF9AE78
#define pinstCEverQuest_x                                          0xFA9DDC
#define pinstCamActor_x                                            0xEE9264
#define pinstCDBStr_x                                              0xEE8DE8
#define pinstCDisplay_x                                            0xF9AEE4
#define pinstControlledMissile_x                                   0xF9AEBC
#define pinstControlledPlayer_x                                    0xF9AEB0
#define pinstCResolutionHandler_x                                  0x162C4F8
#define pinstCSidlManager_x                                        0x162B494
#define pinstCXWndManager_x                                        0x162B48C
#define instDynamicZone_x                                          0xFA12A8
#define pinstDZMember_x                                            0xFA13BC
#define pinstDZTimerInfo_x                                         0xFA13C0
#define pinstEqLogin_x                                             0xFA9E90
#define instTribute_x                                              0xDA08D8
#define pinstEQSoundManager_x                                      0xEEA988
#define pinstEQSpellStrings_x                                      0xED9A88
#define instExpeditionLeader_x                                     0xFA12F2
#define instExpeditionName_x                                       0xFA1332
#define pinstSGraphicsEngine_x                                     0x162C2C4
#define pinstGroup_x                                               0xF9CF66
#define pinstLocalPC_x                                             0xF9AED4
#define pinstLocalPlayer_x                                         0xF9AE58
#define pinstMercenaryData_x                                       0xFA48EC
#define pinstMercenaryStats_x                                      0xFBD454
#define pinstModelPlayer_x                                         0xF9AE70
#define pinstRenderInterface_x                                     0x162C2D0
#define pinstSkillMgr_x                                            0xFA69E0
#define pinstSpawnManager_x                                        0xFA54B8
#define pinstSpellManager_x                                        0xFA6C20
#define pinstSpellSets_x                                           0xE4E39C
#define pinstStringTable_x                                         0xF9AEE0
#define pinstSwitchManager_x                                       0xF9AD08
#define pinstTarget_x                                              0xF9AEAC
#define pinstTargetObject_x                                        0xF9AECC
#define pinstTargetSwitch_x                                        0xF9AED0
#define pinstTaskMember_x                                          0xDA0420
#define pinstTrackTarget_x                                         0xF9AEB4
#define pinstTradeTarget_x                                         0xF9AE6C
#define instTributeActive_x                                        0xDA08F9
#define pinstViewActor_x                                           0xEE9260
#define pinstWorldData_x                                           0xF9AEDC
#define pinstZoneAddr_x                                            0xDB7348
#define pinstPlayerPath_x                                          0xFA5550
#define pinstTargetIndicator_x                                     0xFA6E88
#define EQObject_Top_x                                             0xF9AEC8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0xFB6500
#define pinstCContainerMgr_x                                       0xEE8E94
#define pinstCContextMenuManager_x                                 0x162B448
#define pinstCInvSlotMgr_x                                         0xEE92B4
#define pinstCItemDisplayManager_x                                 0xFB9F28
#define pinstCPopupWndManager_x                                    0xFBB520
#define pinstCSpellDisplayMgr_x                                    0xFBC650
#define pinstCTaskManager_x                                        0xC72268
#define pinstEQSuiteTextureLoader_x                                0xEB6AD0
#define pinstItemIconCache_x                                       0xFB6E20
#define pinstLootFiltersManager_x                                  0xEE83A8

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DBAC0
#define __CastRay2_x                                               0x5DBD50
#define __ConvertItemTags_x                                        0x5F9060
#define __CleanItemTags_x                                          0x47DB30
#define __CreateCascadeMenuItems_x                                 0x56FF70
#define __DoesFileExist_x                                          0x955A40
#define __EQGetTime_x                                              0x952720
#define __ExecuteCmd_x                                             0x5D3ED0
#define __FixHeading_x                                             0x9F12E0
#define __FlushDxKeyboard_x                                        0x6D9860
#define __GameLoop_x                                               0x6DD170
#define __get_bearing_x                                            0x5DB660
#define __get_melee_range_x                                        0x5DBF90
#define __GetAnimationCache_x                                      0x74C790
#define __GetGaugeValueFromEQ_x                                    0x85D230
#define __GetLabelFromEQ_x                                         0x85EC40
#define __GetXTargetType_x                                         0x9F3650
#define __HandleMouseWheel_x                                       0x6DE600
#define __HeadingDiff_x                                            0x9F1340
#define __HelpPath_x                                               0xFA2ABC
#define __NewUIINI_x                                               0x85CF10
#define __ProcessGameEvents_x                                      0x6428E0
#define __ProcessKeyboardEvents_x                                  0x6DB7B0
#define __ProcessMouseEvents_x                                     0x641FE0
#define __SaveColors_x                                             0x56FE00
#define __STMLToText_x                                             0x98EFD0
#define __WndProc_x                                                0x6DC270
#define CMemoryMappedFile__SetFile_x                               0xAE12D0
#define DrawNetStatus_x                                            0x671DE0
#define Teleport_Table_Size_x                                      0xF9D310
#define Teleport_Table_x                                           0xF9AEE8
#define Util__FastTime_x                                           0x9522E0
#define __eq_delete_x                                              0x9FA1C3
#define __eq_new_x                                                 0x9FA734
#define __CopyLayout_x                                             0x65E9C0
#define __ThrottleFrameRate_x                                      0x62B5C3
#define __ThrottleFrameRateEnd_x                                   0x62B61F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EAD80
#define CAAWnd__Update_x                                           0x6EA0A0
#define CAAWnd__UpdateSelected_x                                   0x6E73D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49BA40
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B8C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495BB0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494DE0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x578EE0
#define AltAdvManager__IsAbilityReady_x                            0x577AC0
#define AltAdvManager__GetAAById_x                                 0x577E60
#define AltAdvManager__CanTrainAbility_x                           0x577ED0
#define AltAdvManager__CanSeeAbility_x                             0x578280

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CE410
#define CharacterZoneClient__CalcAffectChange_x                    0x4CCCF0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CCED0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C18D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1D50
#define CharacterZoneClient__FindAffectSlot_x                      0x4CB3C0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EC4C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E0400
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CCA90
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B7350
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B9070
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E02C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E01C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CCB30
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5840
#define CharacterZoneClient__GetModCap_x                           0x4EC3C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC9E0
#define CharacterZoneClient__HasSkill_x                            0x4DD540
#define CharacterZoneClient__IsStackBlocked_x                      0x4C90F0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DECB0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E8450
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CAAD0

// CBankWnd
#define CBankWnd__WndNotification_x                                0x707410

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712180

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70CDC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70AD90

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7168B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0xB90788

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x739C30
#define CChatWindowManager__InitContextMenu_x                      0x732180
#define CChatWindowManager__FreeChatWindow_x                       0x7387D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x739900
#define CChatWindowManager__CreateChatWindow_x                     0x738E00

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F0650

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73A5B0
#define CChatWindow__Clear_x                                       0x73BA30
#define CChatWindow__WndNotification_x                             0x73C1C0
#define CChatWindow__AddHistory_x                                  0x73B270

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x9A25E0
#define CContextMenu__RemoveMenuItem_x                             0x9A28E0
#define CContextMenu__RemoveAllMenuItems_x                         0x9A2900
#define CContextMenu__CheckMenuItem_x                              0x9A2960
#define CContextMenu__SetMenuItem_x                                0x9A2810
#define CContextMenu__AddSeparator_x                               0x9A2770

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A2EF0
#define CContextMenuManager__RemoveMenu_x                          0x9A2F60
#define CContextMenuManager__PopupMenu_x                           0x9A3020
#define CContextMenuManager__Flush_x                               0x9A2E90
#define CContextMenuManager__GetMenu_x                             0x49DF40
#define CContextMenuManager__CreateDefaultMenu_x                   0x746550

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92CC00
#define CChatService__GetFriendName_x                              0x92CC10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99F480
#define CComboWnd__Draw_x                                          0x99E920
#define CComboWnd__GetCurChoice_x                                  0x99F250
#define CComboWnd__GetListRect_x                                   0x99EDD0
#define CComboWnd__GetTextRect_x                                   0x99F4E0
#define CComboWnd__InsertChoice_x                                  0x99EF60
#define CComboWnd__SetColors_x                                     0x99EF30
#define CComboWnd__SetChoice_x                                     0x99F230
#define CComboWnd__GetItemCount_x                                  0x99F260
#define CComboWnd__GetCurChoiceText_x                              0x99F290
#define CComboWnd__GetChoiceText_x                                 0x99F270
#define CComboWnd__InsertChoiceAtIndex_x                           0x99EFF0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x743B90
#define CContainerWnd__vftable_x                                   0xB5E78C
#define CContainerWnd__SetContainer_x                              0x7453F0

// CDisplay
#define CDisplay__cameraType_x                                     0xEE9008
#define CDisplay__ZoneMainUI_x                                     0x56A640
#define CDisplay__PreZoneMainUI_x                                  0x56A650
#define CDisplay__CleanGameUI_x                                    0x56FBE0
#define CDisplay__GetClickedActor_x                                0x562410
#define CDisplay__GetUserDefinedColor_x                            0x55A190
#define CDisplay__GetWorldFilePath_x                               0x563F20
#define CDisplay__InitCharSelectUI_x                               0x56A000
#define CDisplay__ReloadUI_x                                       0x569960
#define CDisplay__WriteTextHD2_x                                   0x55EA90
#define CDisplay__TrueDistance_x                                   0x565F00
#define CDisplay__SetViewActor_x                                   0x561D30
#define CDisplay__GetFloorHeight_x                                 0x55ED60
#define CDisplay__SetRenderWindow_x                                0x55D710
#define CDisplay__ToggleScreenshotMode_x                           0x561800
#define CDisplay__RealRender_World_x                               0x55CA20

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C4A60

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A5EB0
#define CEditWnd__EnsureCaretVisible_x                             0x9A8200
#define CEditWnd__GetCaretPt_x                                     0x9A7070
#define CEditWnd__GetCharIndexPt_x                                 0x9A6E30
#define CEditWnd__GetDisplayString_x                               0x9A6CD0
#define CEditWnd__GetHorzOffset_x                                  0x9A5410
#define CEditWnd__GetLineForPrintableChar_x                        0x9A8110
#define CEditWnd__GetSelStartPt_x                                  0x9A70D0
#define CEditWnd__GetSTMLSafeText_x                                0x9A6AE0
#define CEditWnd__PointFromPrintableChar_x                         0x9A7D60
#define CEditWnd__ReplaceSelection_x                               0x9A7920
#define CEditWnd__SelectableCharFromPoint_x                        0x9A7EC0
#define CEditWnd__SetEditable_x                                    0x9A71A0
#define CEditWnd__SetWindowText_x                                  0x9A6830

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62DDB0
#define CEverQuest__ClickedPlayer_x                                0x61F260
#define CEverQuest__CreateTargetIndicator_x                        0x63F840
#define CEverQuest__DeleteTargetIndicator_x                        0x63F8D0
#define CEverQuest__DoTellWindow_x                                 0x4F0750
#define CEverQuest__OutputTextToLog_x                              0x4F0A20
#define CEverQuest__DropHeldItemOnGround_x                         0x614330
#define CEverQuest__dsp_chat_x                                     0x4F0DF0
#define CEverQuest__trimName_x                                     0x63ADA0
#define CEverQuest__Emote_x                                        0x62E470
#define CEverQuest__EnterZone_x                                    0x6280A0
#define CEverQuest__GetBodyTypeDesc_x                              0x633A70
#define CEverQuest__GetClassDesc_x                                 0x6340B0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6346B0
#define CEverQuest__GetDeityDesc_x                                 0x63DFF0
#define CEverQuest__GetLangDesc_x                                  0x634870
#define CEverQuest__GetRaceDesc_x                                  0x634090
#define CEverQuest__InterpretCmd_x                                 0x63E660
#define CEverQuest__LeftClickedOnPlayer_x                          0x618820
#define CEverQuest__LMouseUp_x                                     0x6168E0
#define CEverQuest__RightClickedOnPlayer_x                         0x619410
#define CEverQuest__RMouseUp_x                                     0x617BA0
#define CEverQuest__SetGameState_x                                 0x6140B0
#define CEverQuest__UPCNotificationFlush_x                         0x63ACC0
#define CEverQuest__IssuePetCommand_x                              0x635E70
#define CEverQuest__ReportSuccessfulHeal_x                         0x62F270
#define CEverQuest__ReportSuccessfulHit_x                          0x62FD50

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757870
#define CGaugeWnd__CalcLinesFillRect_x                             0x7578D0
#define CGaugeWnd__Draw_x                                          0x756E80

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4EA0
#define CGuild__GetGuildName_x                                     0x4B36C0
#define CGuild__GetGuildIndex_x                                    0x4B3DE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x774D20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x653260
#define CHotButton__SetCheck_x                                     0x652EA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x782070
#define CInvSlotMgr__MoveItem_x                                    0x780C40
#define CInvSlotMgr__SelectSlot_x                                  0x782130

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F450
#define CInvSlot__SliderComplete_x                                 0x77C690
#define CInvSlot__GetItemBase_x                                    0x77BF10
#define CInvSlot__UpdateItem_x                                     0x77C100

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782F60
#define CInvSlotWnd__HandleLButtonUp_x                             0x783970

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x79BE90
#define CItemDisplayWnd__UpdateStrings_x                           0x79B780
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790760
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790CB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CCC0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x857670
#define CSpellDisplayWnd__UpdateStrings_x                          0x8575E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x88CDE0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2D70

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x529240

// CLabel
#define CLabel__UpdateText_x                                       0x7A98A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x9719A0
#define CListWnd__dCListWnd_x                                      0x971C90
#define CListWnd__vftable_x                                        0xB90068
#define CListWnd__AddColumn_x                                      0x976830
#define CListWnd__AddColumn1_x                                     0x976950
#define CListWnd__AddLine_x                                        0x976CC0
#define CListWnd__AddString_x                                      0x976AC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9765E0
#define CListWnd__CalculateVSBRange_x                              0x9763D0
#define CListWnd__ClearSel_x                                       0x9775B0
#define CListWnd__ClearAllSel_x                                    0x977600
#define CListWnd__CloseAndUpdateEditWindow_x                       0x978090
#define CListWnd__Compare_x                                        0x975B60
#define CListWnd__Draw_x                                           0x971E50
#define CListWnd__DrawColumnSeparators_x                           0x974950
#define CListWnd__DrawHeader_x                                     0x974DB0
#define CListWnd__DrawItem_x                                       0x975400
#define CListWnd__DrawLine_x                                       0x974AC0
#define CListWnd__DrawSeparator_x                                  0x9749F0
#define CListWnd__EnableLine_x                                     0x974220
#define CListWnd__EnsureVisible_x                                  0x977FC0
#define CListWnd__ExtendSel_x                                      0x9774F0
#define CListWnd__GetColumnTooltip_x                               0x973DA0
#define CListWnd__GetColumnMinWidth_x                              0x973E10
#define CListWnd__GetColumnWidth_x                                 0x973D20
#define CListWnd__GetCurSel_x                                      0x9736D0
#define CListWnd__GetItemAtPoint_x                                 0x974490
#define CListWnd__GetItemAtPoint1_x                                0x974500
#define CListWnd__GetItemData_x                                    0x973750
#define CListWnd__GetItemHeight_x                                  0x973AF0
#define CListWnd__GetItemIcon_x                                    0x9738D0
#define CListWnd__GetItemRect_x                                    0x974310
#define CListWnd__GetItemText_x                                    0x973790
#define CListWnd__GetSelList_x                                     0x977650
#define CListWnd__GetSeparatorRect_x                               0x974770
#define CListWnd__InsertLine_x                                     0x977120
#define CListWnd__RemoveLine_x                                     0x977340
#define CListWnd__SetColors_x                                      0x9763B0
#define CListWnd__SetColumnJustification_x                         0x9760E0
#define CListWnd__SetColumnLabel_x                                 0x976A60
#define CListWnd__SetColumnWidth_x                                 0x975FF0
#define CListWnd__SetCurSel_x                                      0x977440
#define CListWnd__SetItemColor_x                                   0x977C90
#define CListWnd__SetItemData_x                                    0x977C50
#define CListWnd__SetItemText_x                                    0x977870
#define CListWnd__ShiftColumnSeparator_x                           0x9761A0
#define CListWnd__Sort_x                                           0x975E50
#define CListWnd__ToggleSel_x                                      0x977470
#define CListWnd__SetColumnsSizable_x                              0x976240
#define CListWnd__SetItemWnd_x                                     0x977B10
#define CListWnd__GetItemWnd_x                                     0x973920
#define CListWnd__SetItemIcon_x                                    0x9778F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9766E0
#define CListWnd__SetVScrollPos_x                                  0x975FD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0D20

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BBFA0
#define MapViewMap__dMapViewMap_x                                  0x7BC0E0
#define MapViewMap__vftable_x                                      0xB65BB8
#define MapViewMap__Clear_x                                        0x7BC9F0
#define MapViewMap__SetZoom_x                                      0x7C5C30
#define MapViewMap__HandleLButtonDown_x                            0x7BC1F0
#define MapViewMap__GetWorldCoordinates_x                          0x7BF360

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E43B0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4D10
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E53A0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8670
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2E30
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE850
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E4000

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8EF130
#define CPacketScrambler__hton_x                                   0x8EF120

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x99A710
#define CSidlManagerBase__CreatePageWnd_x                          0x999EF0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9953C0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x995350
#define CSidlManagerBase__FindAnimation1_x                         0x995640
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x995A10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x995840
#define CSidlManagerBase__CreateLabel_x                            0x84D340
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x998EC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x999150
#define CSidlManagerBase__CreateXWnd_x                             0x999190

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84D780
#define CSidlManager__CreateXWnd_x                                 0x84CDB0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x991380
#define CSidlScreenWnd__CalculateVSBRange_x                        0x991280
#define CSidlScreenWnd__ConvertToRes_x                             0x9BECB0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x990BF0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x9908E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9909B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x990A80
#define CSidlScreenWnd__DrawSidlPiece_x                            0x991C20
#define CSidlScreenWnd__EnableIniStorage_x                         0x992110
#define CSidlScreenWnd__GetChildItem_x                             0x992090
#define CSidlScreenWnd__GetSidlPiece_x                             0x991E10
#define CSidlScreenWnd__HandleLButtonUp_x                          0x980570
#define CSidlScreenWnd__Init1_x                                    0x990390
#define CSidlScreenWnd__LoadIniInfo_x                              0x992160
#define CSidlScreenWnd__LoadIniListWnd_x                           0x992D30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98F7A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x162B318
#define CSidlScreenWnd__StoreIniInfo_x                             0x9928B0
#define CSidlScreenWnd__StoreIniVis_x                              0x992C20
#define CSidlScreenWnd__vftable_x                                  0xB90A34
#define CSidlScreenWnd__WndNotification_x                          0x991AF0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C12F0
#define CSkillMgr__GetSkillCap_x                                   0x6C14C0
#define CSkillMgr__GetNameToken_x                                  0x6C0B00
#define CSkillMgr__IsActivatedSkill_x                              0x6C0BF0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0B60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A3FF0
#define CSliderWnd__SetValue_x                                     0x9A3E20
#define CSliderWnd__SetNumTicks_x                                  0x9A3E80

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x854000

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AD370
#define CStmlWnd__CalculateHSBRange_x                              0x9AE2E0
#define CStmlWnd__CalculateVSBRange_x                              0x9AE260
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B3110
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B3DB0
#define CStmlWnd__ForceParseNow_x                                  0x9AD8E0
#define CStmlWnd__GetNextTagPiece_x                                0x9B3070
#define CStmlWnd__GetVisibleText_x                                 0x9AD900
#define CStmlWnd__InitializeWindowVariables_x                      0x9B3C00
#define CStmlWnd__MakeStmlColorTag_x                               0x9ACA10
#define CStmlWnd__MakeWndNotificationTag_x                         0x9ACA80
#define CStmlWnd__SetSTMLText_x                                    0x9AB7F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B4FD0
#define CStmlWnd__UpdateHistoryString_x                            0x9B3FB0

// CTabWnd
#define CTabWnd__Draw_x                                            0x9AA690
#define CTabWnd__DrawCurrentPage_x                                 0x9AB030
#define CTabWnd__DrawTab_x                                         0x9AAC20
#define CTabWnd__GetCurrentPage_x                                  0x9A9DD0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A9DC0
#define CTabWnd__GetPageFromTabIndex_x                             0x9AAB60
#define CTabWnd__GetPageInnerRect_x                                0x9AA000
#define CTabWnd__GetTabInnerRect_x                                 0x9A9F40
#define CTabWnd__GetTabRect_x                                      0x9A9E00
#define CTabWnd__InsertPage_x                                      0x9AA200
#define CTabWnd__RemovePage_x                                      0x9AA350
#define CTabWnd__SetPage_x                                         0x9AA080
#define CTabWnd__SetPageRect_x                                     0x9AA580
#define CTabWnd__UpdatePage_x                                      0x9AAA10

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A9960
#define CPageWnd__SetTabText_x                                     0x9A9900

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4ACF50

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97CA80
#define CTextureFont__DrawWrappedText1_x                           0x97C9B0
#define CTextureFont__DrawWrappedText2_x                           0x97CB70
#define CTextureFont__GetTextExtent_x                              0x97CD80

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9BB760

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x967430

// CXStr
#define CXStr__gFreeLists_x                                        0xEB64A8
#define CXStr__gCXStrAccess_x                                      0x162ABA0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9A2000

// CXWnd
#define CXWnd__BringToTop_x                                        0x983F50
#define CXWnd__ClrFocus_x                                          0x9838E0
#define CXWnd__Destroy_x                                           0x983980
#define CXWnd__DoAllDrawing_x                                      0x97FBE0
#define CXWnd__DrawChildren_x                                      0x97FBB0
#define CXWnd__DrawColoredRect_x                                   0x980170
#define CXWnd__DrawTooltip_x                                       0x97E140
#define CXWnd__DrawTooltipAtPoint_x                                0x97E200
#define CXWnd__GetBorderFrame_x                                    0x97FE10
#define CXWnd__GetChildItem_x                                      0x984170
#define CXWnd__GetChildWndAt_x                                     0x983FF0
#define CXWnd__GetClientClipRect_x                                 0x982150
#define CXWnd__GetRelativeRect_x                                   0x9824C0
#define CXWnd__GetScreenClipRect_x                                 0x982220
#define CXWnd__GetScreenRect_x                                     0x9823F0
#define CXWnd__GetTooltipRect_x                                    0x9801C0
#define CXWnd__GetWindowTextA_x                                    0x4F05F0
#define CXWnd__IsActive_x                                          0x9808E0
#define CXWnd__IsDescendantOf_x                                    0x982E60
#define CXWnd__IsReallyVisible_x                                   0x982E90
#define CXWnd__IsType_x                                            0x984770
#define CXWnd__Minimize_x                                          0x983580
#define CXWnd__ProcessTransition_x                                 0x983A60
#define CXWnd__Refade_x                                            0x9832C0
#define CXWnd__Resize_x                                            0x983510
#define CXWnd__Right_x                                             0x983D40
#define CXWnd__SetFocus_x                                          0x9838A0
#define CXWnd__SetFont_x                                           0x983910
#define CXWnd__SetKeyTooltip_x                                     0x984540
#define CXWnd__SetMouseOver_x                                      0x981250
#define CXWnd__SetParent_x                                         0x982B90
#define CXWnd__StartFade_x                                         0x982D50
#define CXWnd__vftable_x                                           0xB904A8
#define CXWnd__CXWnd_x                                             0x97D040
#define CXWnd__dCXWnd_x                                            0x97D720

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BFD00

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x987050
#define CXWndManager__DrawWindows_x                                0x9871A0
#define CXWndManager__GetKeyboardFlags_x                           0x989A70
#define CXWndManager__HandleKeyboardMsg_x                          0x989640
#define CXWndManager__RemoveWnd_x                                  0x989D60
#define CXWndManager__RemovePendingDeletionWnd_x                   0x98A250

// CDBStr
#define CDBStr__GetString_x                                        0x558C70

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1720
#define CharacterZoneClient__CastSpell_x                           0x4C61C0
#define CharacterZoneClient__Cur_HP_x                              0x4DA190
#define CharacterZoneClient__Cur_Mana_x                            0x4E13F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DD300
#define CharacterZoneClient__GetBaseSkill_x                        0x4DE2A0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C97E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E74E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8C80
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8DD0
#define CharacterZoneClient__GetHPRegen_x                          0x4E6F20
#define CharacterZoneClient__GetManaRegen_x                        0x4E7920
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA610
#define CharacterZoneClient__Max_Endurance_x                       0x6818F0
#define CharacterZoneClient__Max_HP_x                              0x4D9FC0
#define CharacterZoneClient__Max_Mana_x                            0x6816D0
#define CharacterZoneClient__SpellDuration_x                       0x4CA050
#define CharacterZoneClient__TotalEffect_x                         0x4CDD00
#define CharacterZoneClient__UseSkill_x                            0x4E8AF0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x919D60

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0790
#define CCharacterListWnd__EnterWorld_x                            0x4C0160
#define CCharacterListWnd__Quit_x                                  0x4BFE80
#define CCharacterListWnd__UpdateList_x                            0x4C0350

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x8F1420
#define ItemBase__CreateItemTagString_x                            0x8F1C60
#define ItemBase__GetImageNum_x                                    0x8F3A10
#define ItemBase__GetItemValue_x                                   0x8F4C50
#define ItemBase__IsEmpty_x                                        0x8F60E0
#define ItemBase__IsKeyRingItem_x                                  0x8F6710
#define ItemBase__ValueSellMerchant_x                              0x8F8D00
#define ItemClient__CanDrop_x                                      0x659080
#define ItemClient__CanGoInBag_x                                   0x6591A0
#define ItemClient__CreateItemClient_x                             0x658020
#define ItemClient__dItemClient_x                                  0x657F70

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x579CF0
#define EQ_LoadingS__Array_x                                       0xDA4D30

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x903000
#define PcBase__GetCombatAbility_x                                 0x903580
#define PcBase__GetCombatAbilityTimer_x                            0x9035F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x903C40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x9043C0
#define PcClient__AlertInventoryChanged_x                          0x6792F0
#define PcClient__GetConLevel_x                                    0x679A30
#define PcClient__HasLoreItem_x                                    0x67A380
#define PcZoneClient__GetItemRecastTimer_x                         0x684A70
#define PcZoneClient__RemoveMyAffect_x                             0x6882D0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x5D8AB0
#define EQItemList__add_object_x                                   0x609200
#define EQItemList__add_item_x                                     0x5D9090
#define EQItemList__delete_item_x                                  0x5D90E0
#define EQItemList__FreeItemList_x                                 0x5D8FF0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x554F90

// PlayerClient
#define PlayerBase__CanSee_x                                       0x9EF9F0
#define PlayerBase__CanSee1_x                                      0x9EFAC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EF760
#define PlayerBase__HasProperty_j_x                                0x9EF6A0
#define PlayerBase__IsTargetable_x                                 0x9EFC00
#define PlayerClient__ChangeBoneStringSprite_x                     0x69B760
#define PlayerClient__dPlayerClient_x                              0x68DE70
#define PlayerClient__GetPcClient_x                                0x699D30
#define PlayerClient__PlayerClient_x                               0x68E6C0
#define PlayerClient__SetNameSpriteState_x                         0x692C80
#define PlayerClient__SetNameSpriteTint_x                          0x693B70
#define PlayerZoneClient__ChangeHeight_x                           0x6A7F60
#define PlayerZoneClient__DoAttack_x                               0x6A41A0
#define PlayerZoneClient__GetLevel_x                               0x6AA4C0
#define PlayerZoneClient__IsValidTeleport_x                        0x60A6B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571C50

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x69E920
#define PlayerManagerClient__GetSpawnByName_x                      0x69E9D0
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x69EA60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C980
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65CA50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65CA90
#define KeypressHandler__ClearCommandStateArray_x                  0x65DF50
#define KeypressHandler__HandleKeyDown_x                           0x65DF70
#define KeypressHandler__HandleKeyUp_x                             0x65E010
#define KeypressHandler__SaveKeymapping_x                          0x65E5C0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x917BD0

// StringTable
#define StringTable__getString_x                                   0x912900

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x684470
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x682630
#define PcZoneClient__GetPcSkillLimit_x                            0x687F20
#define PcZoneClient__RemovePetEffect_x                            0x688580
#define PcZoneClient__HasAlternateAbility_x                        0x681520
#define PcZoneClient__CanEquipItem_x                               0x681C00
#define PcZoneClient__GetItemByID_x                                0x684FA0
#define PcZoneClient__RemoveBuffEffect_x                           0x688630
#define PcZoneClient__BandolierSwap_x                              0x682BE0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684A10

// Doors
#define EQSwitch__UseSwitch_x                                      0x60F2D0

// IconCache
#define IconCache__GetIcon_x                                       0x74C130

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742A60
#define CContainerMgr__CloseContainer_x                            0x742D80
#define CContainerMgr__OpenExperimentContainer_x                   0x7438E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C3C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651630

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1C00
#define CLootWnd__RequestLootSlot_x                                0x7B0E20

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3F60
#define EQ_Spell__SpellAffects_x                                   0x5A4470
#define EQ_Spell__SpellAffectBase_x                                0x5A4190
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1720
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D16D0
#define EQ_Spell__IsSPAStacking_x                                  0x5A53F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4680
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A5420
#define __IsResEffectSpell_x                                       0x4D0ED0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1C90

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8693A0
#define CTargetWnd__WndNotification_x                              0x868B40
#define CTargetWnd__RefreshTargetBuffs_x                           0x868EA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867920

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DF70
#define CTaskWnd__ConfirmAbandonTask_x                             0x8711C0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552B20
#define CTaskManager__HandleMessage_x                              0x550900
#define CTaskManager__GetTaskStatus_x                              0x552BD0
#define CTaskManager__GetElementDescription_x                      0x552C50

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59EB70
#define EqSoundManager__PlayScriptMp3_x                            0x59ED70
#define EqSoundManager__SoundAssistPlay_x                          0x6C57D0
#define EqSoundManager__WaveInstancePlay_x                         0x6C4CC0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541B40

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A8FC0
#define CTextureAnimation__SetCurCell_x                            0x9A8D80

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x582330
#define CAltAbilityData__GetMercMaxRank_x                          0x5822C0

// CTargetRing
#define CTargetRing__Cast_x                                        0x64EE40

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x6455D0
#define CharacterBase__GetItemByGlobalIndex_x                      0x92A7A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x92A7F0
#define CharacterBase__GetMemorizedSpell_x                         0x657E70
#define CharacterBase__IsExpansionFlag_x                           0x5D26F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726EB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727770
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727820

// messages
#define msg_spell_worn_off_x                                       0x5C9E60
#define msg_new_text_x                                             0x5BD830
#define __msgTokenTextParam_x                                      0x5CC2C0
#define msgTokenText_x                                             0x5CC6D0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x6C9CF0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C95C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F3F00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9D10

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7477F0
#define CCursorAttachment__AttachToCursor1_x                       0x747830
#define CCursorAttachment__Deactivate_x                            0x748F10

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B9BD0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9BA330
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B9FB0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x5235B0
#define CFindItemWnd__Update_x                                     0x524200
#define CFindItemWnd__PickupSelectedItem_x                         0x521DC0

// Camera
#define EverQuest__Cameras_x                                       0xDB80E4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D780
#define LootFiltersManager__GetItemFilterData_x                    0x52D0B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52D0E0
#define LootFiltersManager__SetItemLootFilter_x                    0x52D2F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808D90

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x9F9BE0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFBF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F3D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92E5C0
#define CDistillerInfo__Instance_x                                 0x92E500

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762460
#define CGroupWnd__UpdateDisplay_x                                 0x7616B0

// ItemBase
#define ItemBase__IsLore_x                                         0x8F67D0
#define ItemBase__IsLoreEquipped_x                                 0x8F6850

#define MultipleItemMoveManager__ProcessMove_x                     0x66DCB0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609160
#define EQPlacedItemManager__GetItemByGuid_x                       0x6092A0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609300

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4330

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x503140
#define FactionManagerClient__HandleFactionMessage_x               0x503960
#define FactionManagerClient__GetFactionStanding_x                 0x504150
#define FactionManagerClient__GetMaxFaction_x                      0x50416F
#define FactionManagerClient__GetMinFaction_x                      0x504120

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E960

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50FCA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5814E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x581F30

// CTargetManager
#define CTargetManager__Get_x                                      0x6CD3A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4330

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4ACD10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8F90

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE55778

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DD770

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D2A0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DF180

// AchievementManager
#define AchievementManager__Instance_x                             0x47E440

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
