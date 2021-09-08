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
#define __ExpectedVersionDate                                     "Aug 17 2021"
#define __ExpectedVersionTime                                     "14:53:26"
#define __ActualVersionDate_x                                      0xB54184
#define __ActualVersionTime_x                                      0xB54178
#define __ActualVersionBuild_x                                     0xB4432C

// Memory Protection
#define __MemChecker0_x                                            0x6665A0
#define __MemChecker1_x                                            0x9518B0
#define __MemChecker2_x                                            0x6E0480
#define __MemChecker3_x                                            0x6E03F0
#define __MemChecker4_x                                            0x639780
#define __EncryptPad0_x                                            0xE56B48

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDB1D20
#define __ScreenY_x                                                0xDB1D28
#define __ScreenX_x                                                0xDB1D2C
#define __ScreenXMax_x                                             0xDB1D30
#define __ScreenYMax_x                                             0xDB1D34
#define __InChatMode_x                                             0xDB1D74
#define __RunWalkState_x                                           0xDB1D78
#define DI8__Mouse_Copy_x                                          0xDB1D8C
#define __MouseLook_x                                              0xDB1E0A
#define __NetStatusToggle_x                                        0xDB1E0D
#define __pulAutoRun_x                                             0xDB1E28
#define __Clicks_x                                                 0xDB1E44
#define __RMouseHeldTime_x                                         0xDB1EAC
#define __LMouseHeldTime_x                                         0xDB1EB0
#define __ZoneType_x                                               0xDB2208
#define __ShiftKeyDown_x                                           0xDB2408
#define __AutoSkillArray_x                                         0xDB28A8
#define __RangeAttackReady_x                                       0xDB2B8C
#define __AttackOnAssist_x                                         0xDB2D04
#define __ShowNames_x                                              0xDB2D48
#define __PCNames_x                                                0xDB2E98
#define __UseTellWindows_x                                         0xDB3030
#define __pulForward_x                                             0xDB3068
#define __pulBackward_x                                            0xDB306C
#define __pulTurnRight_x                                           0xDB3070
#define __pulTurnLeft_x                                            0xDB3074
#define __pulStrafeLeft_x                                          0xDB3078
#define __pulStrafeRight_x                                         0xDB307C
#define __LastTell_x                                               0xDB38E8
#define __ServerName_x                                             0xDE81AC
#define __DoAbilityList_x                                          0xDE81EC
#define __SocialChangedList_x                                      0xDE8234
#define __Socials_x                                                0xDE82AC
#define __Inviter_x                                                0xE50648
#define __Attack_x                                                 0xE506CB
#define __Autofire_x                                               0xE506CC

// Misc Globals
#define __do_loot_x                                                0x5E39C0
#define __gfMaxZoomCameraDistance_x                                0xB4C014
#define __gfMaxCameraDistance_x                                    0xB7492C
#define __CurrentSocial_x                                          0xC6246C
#define __BindList_x                                               0xDA7458
#define g_eqCommandStates_x                                        0xDA81C0
#define __CommandList_x                                            0xDA8D48
#define __ScreenMode_x                                             0xEE4070
#define __GroupCount_x                                             0xF97D52
#define __gWorld_x                                                 0xF98060
#define __gpbCommandEvent_x                                        0xF9806C
#define __ServerHost_x                                             0xF9823B
#define __Guilds_x                                                 0xF9C218
#define __MouseEventTime_x                                         0xF9DC44
#define DI8__Mouse_Check_x                                         0xFA277C
#define __heqmain_x                                                0xFA4C10
#define DI8__Mouse_x                                               0xFA4C1C
#define __HWnd_x                                                   0xFA4C20
#define __Mouse_x                                                  0xFA4CA8
#define DI8__Main_x                                                0xFA4CBC
#define DI8__Keyboard_x                                            0xFA4CC0
#define __LoginName_x                                              0xFA538C
#define __CurrentMapLabel_x                                        0xFB56BC
#define __TargetAggroHolder_x                                      0xFB8070
#define __GroupAggro_x                                             0xFB80B0
#define __SubscriptionType_x                                       0xFE97A8

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF985B0
#define instEQZoneInfo_x                                           0xDB2000
#define pinstActiveBanker_x                                        0xF98558
#define pinstActiveCorpse_x                                        0xF98550
#define pinstActiveGMaster_x                                       0xF98554
#define pinstActiveMerchant_x                                      0xF9854C
#define pinstAltAdvManager_x                                       0xEE4EC0
#define pinstBandageTarget_x                                       0xF98568
#define pinstCEverQuest_x                                          0xFA4C24
#define pinstCamActor_x                                            0xEE4064
#define pinstCDBStr_x                                              0xEE3C40
#define pinstCDisplay_x                                            0xF97CC8
#define pinstControlledMissile_x                                   0xF95CA0
#define pinstControlledPlayer_x                                    0xF985A0
#define pinstCResolutionHandler_x                                  0x1624678
#define pinstCSidlManager_x                                        0x1623614
#define pinstCXWndManager_x                                        0x162360C
#define instDynamicZone_x                                          0xF9C0F0
#define pinstDZMember_x                                            0xF9C200
#define pinstDZTimerInfo_x                                         0xF9C204
#define pinstEqLogin_x                                             0xFA4CD8
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE57D0
#define pinstEQSpellStrings_x                                      0xED48E0
#define instExpeditionLeader_x                                     0xF9C13A
#define instExpeditionName_x                                       0xF9C17A
#define pinstSGraphicsEngine_x                                     0x1624444
#define pinstGroup_x                                               0xF97D4E
#define pinstImeManager_x                                          0x1623610
#define pinstLocalPC_x                                             0xF95CB8
#define pinstLocalPlayer_x                                         0xF98344
#define pinstMercenaryData_x                                       0xF9F73C
#define pinstMercenaryStats_x                                      0xFB813C
#define pinstModelPlayer_x                                         0xF98560
#define pinstRenderInterface_x                                     0x1624450
#define pinstSkillMgr_x                                            0xFA1828
#define pinstSpawnManager_x                                        0xFA0300
#define pinstSpellManager_x                                        0xFA1A68
#define pinstSpellSets_x                                           0xE492F4
#define pinstStringTable_x                                         0xF95CC0
#define pinstSwitchManager_x                                       0xF95B50
#define pinstTarget_x                                              0xF9859C
#define pinstTargetObject_x                                        0xF95CB0
#define pinstTargetSwitch_x                                        0xF95CB4
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF985A4
#define pinstTradeTarget_x                                         0xF9855C
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4060
#define pinstWorldData_x                                           0xF95CC4
#define pinstZoneAddr_x                                            0xDB22A0
#define pinstPlayerPath_x                                          0xFA0398
#define pinstTargetIndicator_x                                     0xFA1CD0
#define EQObject_Top_x                                             0xF95CAC

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEE40D0
#define pinstCAchievementsWnd_x                                    0xEE3D50
#define pinstCActionsWnd_x                                         0xEE4058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE4080
#define pinstCAdvancedLootWnd_x                                    0xEE405C
#define pinstCAdventureLeaderboardWnd_x                            0xFAEEE0
#define pinstCAdventureRequestWnd_x                                0xFAEF90
#define pinstCAdventureStatsWnd_x                                  0xFAF040
#define pinstCAggroMeterWnd_x                                      0xEE3DE0
#define pinstCAlarmWnd_x                                           0xEE40C8
#define pinstCAlertHistoryWnd_x                                    0xEE4040
#define pinstCAlertStackWnd_x                                      0xEE3E1C
#define pinstCAlertWnd_x                                           0xEE4020
#define pinstCAltStorageWnd_x                                      0xFAF3A0
#define pinstCAudioTriggersWindow_x                                0xEC6C10
#define pinstCAuraWnd_x                                            0xEE40A0
#define pinstCAvaZoneWnd_x                                         0xEE3D38
#define pinstCBandolierWnd_x                                       0xEE40B0
#define pinstCBankWnd_x                                            0xEE403C
#define pinstCBarterMerchantWnd_x                                  0xFB05E0
#define pinstCBarterSearchWnd_x                                    0xFB0690
#define pinstCBarterWnd_x                                          0xFB0740
#define pinstCBazaarConfirmationWnd_x                              0xEE40DC
#define pinstCBazaarSearchWnd_x                                    0xEE3D7C
#define pinstCBazaarWnd_x                                          0xEE3D20
#define pinstCBlockedBuffWnd_x                                     0xEE3DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE3DB0
#define pinstCBodyTintWnd_x                                        0xEE4100
#define pinstCBookWnd_x                                            0xEE4048
#define pinstCBreathWnd_x                                          0xEE40D4
#define pinstCBuffWindowNORMAL_x                                   0xEE3DA0
#define pinstCBuffWindowSHORT_x                                    0xEE3DA4
#define pinstCBugReportWnd_x                                       0xEE3D5C
#define pinstCButtonWnd_x                                          0x1623878
#define pinstCCastingWnd_x                                         0xEE3DDC
#define pinstCCastSpellWnd_x                                       0xEE3DEC
#define pinstCCharacterListWnd_x                                   0xEE3D80
#define pinstCChatWindowManager_x                                  0xFB11E8
#define pinstCClaimWnd_x                                           0xFB1340
#define pinstCColorPickerWnd_x                                     0xEE3D94
#define pinstCCombatAbilityWnd_x                                   0xEE408C
#define pinstCCombatSkillsSelectWnd_x                              0xEE4094
#define pinstCCompassWnd_x                                         0xEE40A8
#define pinstCConfirmationDialog_x                                 0xFB6208
#define pinstCContainerMgr_x                                       0xEE40CC
#define pinstCContextMenuManager_x                                 0x16235C8
#define pinstCCursorAttachment_x                                   0xEE3DD4
#define pinstCDynamicZoneWnd_x                                     0xFB1908
#define pinstCEditLabelWnd_x                                       0xEE3D40
#define pinstCEQMainWnd_x                                          0xFB1B50
#define pinstCEventCalendarWnd_x                                   0xEE40BC
#define pinstCExtendedTargetWnd_x                                  0xEE3DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE3D88
#define pinstCFactionWnd_x                                         0xEE3DE8
#define pinstCFellowshipWnd_x                                      0xFB1D50
#define pinstCFileSelectionWnd_x                                   0xEE409C
#define pinstCFindItemWnd_x                                        0xEE4104
#define pinstCFindLocationWnd_x                                    0xFB1EA8
#define pinstCFriendsWnd_x                                         0xEE4098
#define pinstCGemsGameWnd_x                                        0xEE40C0
#define pinstCGiveWnd_x                                            0xEE3D28
#define pinstCGroupSearchFiltersWnd_x                              0xEE3DC4
#define pinstCGroupSearchWnd_x                                     0xFB22A0
#define pinstCGroupWnd_x                                           0xFB2350
#define pinstCGuildBankWnd_x                                       0xFB2400
#define pinstCGuildCreationWnd_x                                   0xFB24B0
#define pinstCGuildMgmtWnd_x                                       0xFB2560
#define pinstCharacterCreation_x                                   0xEE3DD0
#define pinstCHelpWnd_x                                            0xEE402C
#define pinstCHeritageSelectionWnd_x                               0xEE3D8C
#define pinstCHotButtonWnd_x                                       0xFB46B8
#define pinstCHotButtonWnd1_x                                      0xFB46B8
#define pinstCHotButtonWnd2_x                                      0xFB46BC
#define pinstCHotButtonWnd3_x                                      0xFB46C0
#define pinstCHotButtonWnd4_x                                      0xFB46C4
#define pinstCIconSelectionWnd_x                                   0xEE3D58
#define pinstCInspectWnd_x                                         0xEE3D4C
#define pinstCInventoryWnd_x                                       0xEE4028
#define pinstCInvSlotMgr_x                                         0xEE40B4
#define pinstCItemDisplayManager_x                                 0xFB4C10
#define pinstCItemExpTransferWnd_x                                 0xFB4D40
#define pinstCItemOverflowWnd_x                                    0xEE3D10
#define pinstCJournalCatWnd_x                                      0xEE40EC
#define pinstCJournalNPCWnd_x                                      0xEE40E0
#define pinstCJournalTextWnd_x                                     0xEE40E0
#define pinstCKeyRingWnd_x                                         0xEE4034
#define pinstCLargeDialogWnd_x                                     0xFB6E88
#define pinstCLayoutCopyWnd_x                                      0xFB5090
#define pinstCLFGuildWnd_x                                         0xFB5140
#define pinstCLoadskinWnd_x                                        0xEE40C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE3150
#define pinstCLootFiltersWnd_x                                     0xEE40E4
#define pinstCLootSettingsWnd_x                                    0xEE40E8
#define pinstCLootWnd_x                                            0xEE404C
#define pinstCMailAddressBookWnd_x                                 0xEE3D70
#define pinstCMailCompositionWnd_x                                 0xEE3D68
#define pinstCMailIgnoreListWnd_x                                  0xEE3D74
#define pinstCMailWnd_x                                            0xEE3D64
#define pinstCManageLootWnd_x                                      0xEE5340
#define pinstCMapToolbarWnd_x                                      0xEE3D34
#define pinstCMapViewWnd_x                                         0xEE3D24
#define pinstCMarketplaceWnd_x                                     0xEE3D04
#define pinstCMerchantWnd_x                                        0xEE3D08
#define pinstCMIZoneSelectWnd_x                                    0xFB5978
#define pinstCMusicPlayerWnd_x                                     0xEE40B8
#define pinstCNameChangeMercWnd_x                                  0xEE3E00
#define pinstCNameChangePetWnd_x                                   0xEE3DFC
#define pinstCNameChangeWnd_x                                      0xEE3D60
#define pinstCNoteWnd_x                                            0xEE4024
#define pinstCObjectPreviewWnd_x                                   0xEE3D78
#define pinstCOptionsWnd_x                                         0xEE3D98
#define pinstCOverseerWnd_x                                        0xEE3D00
#define pinstCPetInfoWnd_x                                         0xEE4050
#define pinstCPetitionQWnd_x                                       0xEE3DB8
#define pinstCPlayerNotesWnd_x                                     0xEE40AC
#define pinstCPlayerWnd_x                                          0xEE40FC
#define pinstCPopupWndManager_x                                    0xFB6208
#define pinstCProgressionSelectionWnd_x                            0xFB62B8
#define pinstCPurchaseGroupWnd_x                                   0xEE3D14
#define pinstCPurchaseWnd_x                                        0xEE3D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB6368
#define pinstCPvPStatsWnd_x                                        0xFB6418
#define pinstCQuantityWnd_x                                        0xEE4044
#define pinstCRaceChangeWnd_x                                      0xEE3D6C
#define pinstCRaidOptionsWnd_x                                     0xEE3DE4
#define pinstCRaidWnd_x                                            0xEE3DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE3D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE3DCC
#define pinstCRealEstateManageWnd_x                                0xEE3DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE3DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE3DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE3DC8
#define pinstCRespawnWnd_x                                         0xEE40A4
#define pinstCRewardSelectionWnd_x                                 0xFB6B60
#define pinstCSelectorWnd_x                                        0xEE3D1C
#define pinstCSendMoneyWnd_x                                       0xEE3D3C
#define pinstCServerListWnd_x                                      0xEE4090
#define pinstCSkillsSelectWnd_x                                    0xEE4084
#define pinstCSkillsWnd_x                                          0xEE407C
#define pinstCSocialEditWnd_x                                      0xEE3D54
#define pinstCSocialWnd_x                                          0xEE40D8
#define pinstCSpellBookWnd_x                                       0xEE3E10
#define pinstCStoryWnd_x                                           0xEE40F8
#define pinstCTargetOfTargetWnd_x                                  0xFB81C0
#define pinstCTargetWnd_x                                          0xEE3D48
#define pinstCTaskOverlayWnd_x                                     0xEE40F0
#define pinstCTaskSelectWnd_x                                      0xFB8318
#define pinstCTaskManager_x                                        0xC6D268
#define pinstCTaskTemplateSelectWnd_x                              0xFB83C8
#define pinstCTaskWnd_x                                            0xFB8478
#define pinstCTextEntryWnd_x                                       0xEE4088
#define pinstCTimeLeftWnd_x                                        0xEE3DAC
#define pinstCTipWndCONTEXT_x                                      0xFB867C
#define pinstCTipWndOFDAY_x                                        0xFB8678
#define pinstCTitleWnd_x                                           0xFB8728
#define pinstCTrackingWnd_x                                        0xEE3D44
#define pinstCTradeskillWnd_x                                      0xFB8890
#define pinstCTradeWnd_x                                           0xEE3D18
#define pinstCTrainWnd_x                                           0xEE4054
#define pinstCTributeBenefitWnd_x                                  0xFB8A90
#define pinstCTributeMasterWnd_x                                   0xFB8B40
#define pinstCTributeTrophyWnd_x                                   0xFB8BF0
#define pinstCVideoModesWnd_x                                      0xEE3D2C
#define pinstCVoiceMacroWnd_x                                      0xFA20E8
#define pinstCVoteResultsWnd_x                                     0xEE3DF8
#define pinstCVoteWnd_x                                            0xEE3DF4
#define pinstCZoneGuideWnd_x                                       0xEE4030
#define pinstCZonePathWnd_x                                        0xEE4038
#define pinstEQSuiteTextureLoader_x                                0xEB1920
#define pinstItemIconCache_x                                       0xFB1B08
#define pinstLootFiltersManager_x                                  0xEE3200
#define pinstRewardSelectionWnd_x                                  0xFB6B60

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DECB0
#define __CastRay2_x                                               0x5DEF40
#define __ConvertItemTags_x                                        0x5FC100
#define __CleanItemTags_x                                          0x47DA30
#define __CreateCascadeMenuItems_x                                 0x5721C0
#define __DoesFileExist_x                                          0x954840
#define __EQGetTime_x                                              0x951520
#define __ExecuteCmd_x                                             0x5D70E0
#define __FixHeading_x                                             0x9EFBD0
#define __FlushDxKeyboard_x                                        0x6DB780
#define __GameLoop_x                                               0x6DF080
#define __get_bearing_x                                            0x5DE850
#define __get_melee_range_x                                        0x5DF180
#define __GetAnimationCache_x                                      0x74DF60
#define __GetGaugeValueFromEQ_x                                    0x85D7F0
#define __GetLabelFromEQ_x                                         0x85F330
#define __GetXTargetType_x                                         0x9F1F40
#define __HandleMouseWheel_x                                       0x6E0510
#define __HeadingDiff_x                                            0x9EFC30
#define __HelpPath_x                                               0xF9D904
#define __ExecuteFrontEnd_x                                        0x6DBF60
#define __NewUIINI_x                                               0x85D4C0
#define __ProcessGameEvents_x                                      0x645750
#define __ProcessKeyboardEvents_x                                  0x6DD6D0
#define __ProcessMouseEvents_x                                     0x644E50
#define __SaveColors_x                                             0x5720A0
#define __STMLToText_x                                             0x98D8D0
#define __WndProc_x                                                0x6DE190
#define CMemoryMappedFile__SetFile_x                               0xAE0340
#define CrashDetected_x                                            0x6DDC90
#define DrawNetStatus_x                                            0x674B10
#define Expansion_HoT_x                                            0xDB2CF0
#define Teleport_Table_Size_x                                      0xF980F4
#define Teleport_Table_x                                           0xF95CC8
#define Util__FastTime_x                                           0x9510E0
#define __eq_delete_x                                              0x9F8A95
#define __eq_new_x                                                 0x9F9004
#define __CopyLayout_x                                             0x661890
#define __ThrottleFrameRate_x                                      0x62E603
#define __ThrottleFrameRateEnd_x                                   0x62E65F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6ECBF0
#define CAAWnd__Update_x                                           0x6EBF20
#define CAAWnd__UpdateSelected_x                                   0x6E9290

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B350
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495650
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494890

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57B0B0
#define AltAdvManager__IsAbilityReady_x                            0x579C90
#define AltAdvManager__GetAAById_x                                 0x57A030
#define AltAdvManager__CanTrainAbility_x                           0x57A0A0
#define AltAdvManager__CanSeeAbility_x                             0x57A450

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDC80
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC590
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC770
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C11F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1600
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC70
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF660
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEFB0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE820
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15C0
#define CharacterZoneClient__GetEffect_x                           0x4C1130
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC330
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6CC0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B89F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC3D0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5130
#define CharacterZoneClient__GetModCap_x                           0x4EE720
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC280
#define CharacterZoneClient__HasSkill_x                            0x4DCD70
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A30
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE4C0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA880
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA410

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x709370
#define CBankWnd__WndNotification_x                                0x709110

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x713D80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70E9D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70C9B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7184C0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x98AE70
#define CButtonWnd__CButtonWnd_x                                   0x9897D0
#define CButtonWnd__dCButtonWnd_x                                  0x989A70
#define CButtonWnd__vftable_x                                      0xB8F428

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x73B740
#define CChatWindowManager__InitContextMenu_x                      0x734670
#define CChatWindowManager__FreeChatWindow_x                       0x73A300
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x73B420
#define CChatWindowManager__CreateChatWindow_x                     0x73A930

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2740

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73C0A0
#define CChatWindow__Clear_x                                       0x73D4F0
#define CChatWindow__WndNotification_x                             0x73DC80
#define CChatWindow__AddHistory_x                                  0x73CD50

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x9A0C40
#define CContextMenu__dCContextMenu_x                              0x9A0E70
#define CContextMenu__AddMenuItem_x                                0x9A0E80
#define CContextMenu__RemoveMenuItem_x                             0x9A1180
#define CContextMenu__RemoveAllMenuItems_x                         0x9A11A0
#define CContextMenu__CheckMenuItem_x                              0x9A1200
#define CContextMenu__SetMenuItem_x                                0x9A10B0
#define CContextMenu__AddSeparator_x                               0x9A1010

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A1780
#define CContextMenuManager__RemoveMenu_x                          0x9A17F0
#define CContextMenuManager__PopupMenu_x                           0x9A18B0
#define CContextMenuManager__Flush_x                               0x9A1720
#define CContextMenuManager__GetMenu_x                             0x49D8C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x747F50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92BC00
#define CChatService__GetFriendName_x                              0x92BC10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99DD40
#define CComboWnd__Draw_x                                          0x99D1F0
#define CComboWnd__GetCurChoice_x                                  0x99DB10
#define CComboWnd__GetListRect_x                                   0x99D690
#define CComboWnd__GetTextRect_x                                   0x99DDA0
#define CComboWnd__InsertChoice_x                                  0x99D820
#define CComboWnd__SetColors_x                                     0x99D7F0
#define CComboWnd__SetChoice_x                                     0x99DAF0
#define CComboWnd__GetItemCount_x                                  0x99DB20
#define CComboWnd__GetCurChoiceText_x                              0x99DB50
#define CComboWnd__GetChoiceText_x                                 0x99DB30
#define CComboWnd__InsertChoiceAtIndex_x                           0x99D8B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x7455F0
#define CContainerWnd__vftable_x                                   0xB5D3DC
#define CContainerWnd__SetContainer_x                              0x746E10

// CDisplay
#define CDisplay__cameraType_x                                     0xEE3E18
#define CDisplay__ZoneMainUI_x                                     0x56C8E0
#define CDisplay__PreZoneMainUI_x                                  0x56C8F0
#define CDisplay__CleanGameUI_x                                    0x571E80
#define CDisplay__GetClickedActor_x                                0x5646B0
#define CDisplay__GetUserDefinedColor_x                            0x55C440
#define CDisplay__GetWorldFilePath_x                               0x5661C0
#define CDisplay__is3dON_x                                         0x560F40
#define CDisplay__ReloadUI_x                                       0x56BC00
#define CDisplay__WriteTextHD2_x                                   0x560D30
#define CDisplay__TrueDistance_x                                   0x5681A0
#define CDisplay__SetViewActor_x                                   0x563FD0
#define CDisplay__GetFloorHeight_x                                 0x561000
#define CDisplay__SetRenderWindow_x                                0x55F980
#define CDisplay__ToggleScreenshotMode_x                           0x563AA0
#define CDisplay__RealRender_World_x                               0x55EC90

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C3430

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A4740
#define CEditWnd__EnsureCaretVisible_x                             0x9A6A90
#define CEditWnd__GetCaretPt_x                                     0x9A5900
#define CEditWnd__GetCharIndexPt_x                                 0x9A56C0
#define CEditWnd__GetDisplayString_x                               0x9A5560
#define CEditWnd__GetHorzOffset_x                                  0x9A3CA0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A69A0
#define CEditWnd__GetSelStartPt_x                                  0x9A5960
#define CEditWnd__GetSTMLSafeText_x                                0x9A5370
#define CEditWnd__PointFromPrintableChar_x                         0x9A65F0
#define CEditWnd__ReplaceSelection_x                               0x9A61B0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A6750
#define CEditWnd__SetEditable_x                                    0x9A5A30
#define CEditWnd__SetWindowText_x                                  0x9A50C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x630DE0
#define CEverQuest__ClickedPlayer_x                                0x6223B0
#define CEverQuest__CreateTargetIndicator_x                        0x6426D0
#define CEverQuest__DeleteTargetIndicator_x                        0x642760
#define CEverQuest__DoTellWindow_x                                 0x4F2840
#define CEverQuest__OutputTextToLog_x                              0x4F2B10
#define CEverQuest__DropHeldItemOnGround_x                         0x617480
#define CEverQuest__dsp_chat_x                                     0x4F2EE0
#define CEverQuest__trimName_x                                     0x63DCC0
#define CEverQuest__Emote_x                                        0x6314A0
#define CEverQuest__EnterZone_x                                    0x62B160
#define CEverQuest__GetBodyTypeDesc_x                              0x636A00
#define CEverQuest__GetClassDesc_x                                 0x637040
#define CEverQuest__GetClassThreeLetterCode_x                      0x637640
#define CEverQuest__GetDeityDesc_x                                 0x640E80
#define CEverQuest__GetLangDesc_x                                  0x637800
#define CEverQuest__GetRaceDesc_x                                  0x637020
#define CEverQuest__InterpretCmd_x                                 0x6414F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x61B970
#define CEverQuest__LMouseUp_x                                     0x619A30
#define CEverQuest__RightClickedOnPlayer_x                         0x61C560
#define CEverQuest__RMouseUp_x                                     0x61ACF0
#define CEverQuest__SetGameState_x                                 0x617200
#define CEverQuest__UPCNotificationFlush_x                         0x63DBE0
#define CEverQuest__IssuePetCommand_x                              0x638E00
#define CEverQuest__ReportSuccessfulHeal_x                         0x6322A0
#define CEverQuest__ReportSuccessfulHit_x                          0x632D80

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x758EA0
#define CGaugeWnd__CalcLinesFillRect_x                             0x758F00
#define CGaugeWnd__Draw_x                                          0x7584B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4830
#define CGuild__GetGuildName_x                                     0x4B3050
#define CGuild__GetGuildIndex_x                                    0x4B3770

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x776390

//CHotButton
#define CHotButton__SetButtonSize_x                                0x6560C0
#define CHotButton__SetCheck_x                                     0x655D00

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x7833A0
#define CInvSlotMgr__MoveItem_x                                    0x781F80
#define CInvSlotMgr__SelectSlot_x                                  0x783460

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x7807D0
#define CInvSlot__SliderComplete_x                                 0x77DCB0
#define CInvSlot__GetItemBase_x                                    0x77D570
#define CInvSlot__UpdateItem_x                                     0x77D760

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7850E0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7842B0
#define CInvSlotWnd__HandleLButtonUp_x                             0x784C60

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x857C40
#define CItemDisplayWnd__UpdateStrings_x                           0x79C680
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x791980
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x791EF0
#define CItemDisplayWnd__SetItem_x                                 0x79CD70
#define CItemDisplayWnd__AboutToShow_x                             0x79C280
#define CItemDisplayWnd__WndNotification_x                         0x79E480
#define CItemDisplayWnd__RequestConvertItem_x                      0x79DB90
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79B160
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79C070

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88CD80

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A3BA0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52B270

// CLabel
#define CLabel__UpdateText_x                                       0x7AA6E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x970360
#define CListWnd__dCListWnd_x                                      0x970650
#define CListWnd__vftable_x                                        0xB8ED08
#define CListWnd__AddColumn_x                                      0x975210
#define CListWnd__AddColumn1_x                                     0x975330
#define CListWnd__AddLine_x                                        0x9756A0
#define CListWnd__AddString_x                                      0x9754A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x974FC0
#define CListWnd__CalculateVSBRange_x                              0x974DA0
#define CListWnd__ClearSel_x                                       0x975F90
#define CListWnd__ClearAllSel_x                                    0x975FE0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x976A70
#define CListWnd__Compare_x                                        0x974530
#define CListWnd__Draw_x                                           0x970810
#define CListWnd__DrawColumnSeparators_x                           0x973320
#define CListWnd__DrawHeader_x                                     0x973780
#define CListWnd__DrawItem_x                                       0x973DD0
#define CListWnd__DrawLine_x                                       0x973490
#define CListWnd__DrawSeparator_x                                  0x9733C0
#define CListWnd__EnableLine_x                                     0x972BF0
#define CListWnd__EnsureVisible_x                                  0x9769A0
#define CListWnd__ExtendSel_x                                      0x975ED0
#define CListWnd__GetColumnTooltip_x                               0x972770
#define CListWnd__GetColumnMinWidth_x                              0x9727E0
#define CListWnd__GetColumnWidth_x                                 0x9726F0
#define CListWnd__GetCurSel_x                                      0x972090
#define CListWnd__GetItemAtPoint_x                                 0x972E60
#define CListWnd__GetItemAtPoint1_x                                0x972ED0
#define CListWnd__GetItemData_x                                    0x972110
#define CListWnd__GetItemHeight_x                                  0x9724C0
#define CListWnd__GetItemIcon_x                                    0x972290
#define CListWnd__GetItemRect_x                                    0x972CE0
#define CListWnd__GetItemText_x                                    0x972150
#define CListWnd__GetSelList_x                                     0x976030
#define CListWnd__GetSeparatorRect_x                               0x973140
#define CListWnd__InsertLine_x                                     0x975B00
#define CListWnd__RemoveLine_x                                     0x975D20
#define CListWnd__SetColors_x                                      0x974D80
#define CListWnd__SetColumnJustification_x                         0x974AB0
#define CListWnd__SetColumnLabel_x                                 0x975440
#define CListWnd__SetColumnWidth_x                                 0x9749C0
#define CListWnd__SetCurSel_x                                      0x975E20
#define CListWnd__SetItemColor_x                                   0x976670
#define CListWnd__SetItemData_x                                    0x976630
#define CListWnd__SetItemText_x                                    0x976250
#define CListWnd__ShiftColumnSeparator_x                           0x974B70
#define CListWnd__Sort_x                                           0x974820
#define CListWnd__ToggleSel_x                                      0x975E50
#define CListWnd__SetColumnsSizable_x                              0x974C10
#define CListWnd__SetItemWnd_x                                     0x9764F0
#define CListWnd__GetItemWnd_x                                     0x9722E0
#define CListWnd__SetItemIcon_x                                    0x9762D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9750C0
#define CListWnd__SetVScrollPos_x                                  0x9749A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C1AE0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BCD30
#define MapViewMap__dMapViewMap_x                                  0x7BCE80
#define MapViewMap__vftable_x                                      0xB64800
#define MapViewMap__Clear_x                                        0x7BD790
#define MapViewMap__SaveEx_x                                       0x7C0CCF
#define MapViewMap__SetZoom_x                                      0x7C6900
#define MapViewMap__HandleLButtonDown_x                            0x7BCF90
#define MapViewMap__GetWorldCoordinates_x                          0x7C0100

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E4DA0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E5700
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5D90
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E9060
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E3830
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EF290
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E49F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F8AF0
#define CPacketScrambler__hton_x                                   0x8F8AE0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998FF0
#define CSidlManagerBase__CreatePageWnd_x                          0x9987E0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x993CB0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x993C40
#define CSidlManagerBase__FindAnimation1_x                         0x993F30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x994300
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x994130
#define CSidlManagerBase__CreateLabel_x                            0x84D990
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9977B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x997A40
#define CSidlManagerBase__CreateXWnd_x                             0x997A80

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84DDC0
#define CSidlManager__CreateXWnd_x                                 0x84D410

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98FC70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98FB70
#define CSidlScreenWnd__ConvertToRes_x                             0x9BD680
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98F4F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98F1E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98F2B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98F380
#define CSidlScreenWnd__DrawSidlPiece_x                            0x990510
#define CSidlScreenWnd__EnableIniStorage_x                         0x9909F0
#define CSidlScreenWnd__GetChildItem_x                             0x990970
#define CSidlScreenWnd__GetSidlPiece_x                             0x990700
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97EF10
#define CSidlScreenWnd__Init1_x                                    0x98EC90
#define CSidlScreenWnd__LoadIniInfo_x                              0x990A40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x991620
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98E0A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1623498
#define CSidlScreenWnd__StoreIniInfo_x                             0x991190
#define CSidlScreenWnd__StoreIniVis_x                              0x991510
#define CSidlScreenWnd__vftable_x                                  0xB8F6D4
#define CSidlScreenWnd__WndNotification_x                          0x9903E0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C3500
#define CSkillMgr__GetSkillCap_x                                   0x6C36D0
#define CSkillMgr__GetNameToken_x                                  0x6C2D40
#define CSkillMgr__IsActivatedSkill_x                              0x6C2E30
#define CSkillMgr__IsCombatSkill_x                                 0x6C2DA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A2880
#define CSliderWnd__SetValue_x                                     0x9A26B0
#define CSliderWnd__SetNumTicks_x                                  0x9A2710

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x854620

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9ABD90
#define CStmlWnd__CalculateHSBRange_x                              0x9ACD10
#define CStmlWnd__CalculateVSBRange_x                              0x9ACC80
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B1B50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B27F0
#define CStmlWnd__ForceParseNow_x                                  0x9AC300
#define CStmlWnd__GetNextTagPiece_x                                0x9B1AB0
#define CStmlWnd__GetVisibleText_x                                 0x9AC320
#define CStmlWnd__InitializeWindowVariables_x                      0x9B2640
#define CStmlWnd__MakeStmlColorTag_x                               0x9AB430
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AB4A0
#define CStmlWnd__SetSTMLText_x                                    0x9AA210
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B3A10
#define CStmlWnd__UpdateHistoryString_x                            0x9B29F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A90B0
#define CTabWnd__DrawCurrentPage_x                                 0x9A9A40
#define CTabWnd__DrawTab_x                                         0x9A9630
#define CTabWnd__GetCurrentPage_x                                  0x9A8810
#define CTabWnd__GetCurrentTabIndex_x                              0x9A8800
#define CTabWnd__GetPageFromTabIndex_x                             0x9A9570
#define CTabWnd__GetPageInnerRect_x                                0x9A8A40
#define CTabWnd__GetTabInnerRect_x                                 0x9A8980
#define CTabWnd__GetTabRect_x                                      0x9A8840
#define CTabWnd__InsertPage_x                                      0x9A8C30
#define CTabWnd__RemovePage_x                                      0x9A8D80
#define CTabWnd__SetPage_x                                         0x9A8AC0
#define CTabWnd__SetPageRect_x                                     0x9A8FB0
#define CTabWnd__UpdatePage_x                                      0x9A9420

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A8200
#define CPageWnd__SetTabText_x                                     0x9A81A0


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC880

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97B420
#define CTextureFont__DrawWrappedText1_x                           0x97B350
#define CTextureFont__DrawWrappedText2_x                           0x97B510
#define CTextureFont__GetTextExtent_x                              0x97B720

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9BA130

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x965E10

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x544D80
#define CXStr__CXStr1_x                                            0x482700
#define CXStr__CXStr3_x                                            0x94D470
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94D6B0
#define CXStr__operator_equal1_x                                   0x94D6F0
#define CXStr__operator_plus_equal1_x                              0x94E150
#define CXStr__SetString_x                                         0x94FFF0
#define CXStr__operator_char_p_x                                   0x94DBA0
#define CXStr__GetChar_x                                           0x94F950
#define CXStr__Delete_x                                            0x94F220
#define CXStr__GetUnicode_x                                        0x94F9C0
#define CXStr__Insert_x                                            0x94FA20
#define CXStr__FindNext_x                                          0x94F670
#define CXStr__gFreeLists_x                                        0xEB12F8
#define CXStr__gCXStrAccess_x                                      0x1622D20

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9A08A0

// CXWnd
#define CXWnd__BringToTop_x                                        0x9828A0
#define CXWnd__ClrFocus_x                                          0x982230
#define CXWnd__Destroy_x                                           0x9822D0
#define CXWnd__DoAllDrawing_x                                      0x97E560
#define CXWnd__DrawChildren_x                                      0x97E530
#define CXWnd__DrawColoredRect_x                                   0x97EAF0
#define CXWnd__DrawTooltip_x                                       0x97CB30
#define CXWnd__DrawTooltipAtPoint_x                                0x97CBF0
#define CXWnd__GetBorderFrame_x                                    0x97E790
#define CXWnd__GetChildItem_x                                      0x982AC0
#define CXWnd__GetChildWndAt_x                                     0x982940
#define CXWnd__GetClientClipRect_x                                 0x980AA0
#define CXWnd__GetRelativeRect_x                                   0x980DD0
#define CXWnd__GetScreenClipRect_x                                 0x980B50
#define CXWnd__GetScreenRect_x                                     0x980D00
#define CXWnd__GetTooltipRect_x                                    0x97EB40
#define CXWnd__GetWindowTextA_x                                    0x4F26E0
#define CXWnd__IsActive_x                                          0x97F290
#define CXWnd__IsDescendantOf_x                                    0x981770
#define CXWnd__IsReallyVisible_x                                   0x9817A0
#define CXWnd__IsType_x                                            0x9830C0
#define CXWnd__Minimize_x                                          0x981EE0
#define CXWnd__Move_x                                              0x981810
#define CXWnd__Move1_x                                             0x981910
#define CXWnd__ProcessTransition_x                                 0x9823B0
#define CXWnd__Refade_x                                            0x981BE0
#define CXWnd__Resize_x                                            0x981E70
#define CXWnd__Right_x                                             0x982690
#define CXWnd__SetFocus_x                                          0x9821F0
#define CXWnd__SetFont_x                                           0x982260
#define CXWnd__SetKeyTooltip_x                                     0x982E90
#define CXWnd__SetMouseOver_x                                      0x97FC10
#define CXWnd__SetParent_x                                         0x9814B0
#define CXWnd__StartFade_x                                         0x981660
#define CXWnd__vftable_x                                           0xB8F148
#define CXWnd__CXWnd_x                                             0x97BA30
#define CXWnd__dCXWnd_x                                            0x97C110

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BE6D0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x985920
#define CXWndManager__DrawWindows_x                                0x985A70
#define CXWndManager__GetKeyboardFlags_x                           0x9883F0
#define CXWndManager__HandleKeyboardMsg_x                          0x987FD0
#define CXWndManager__RemoveWnd_x                                  0x9886B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x988B70

// CDBStr
#define CDBStr__GetString_x                                        0x55AF70

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1E20
#define CharacterZoneClient__CastSpell_x                           0x4C5AB0
#define CharacterZoneClient__Cur_HP_x                              0x4D99E0
#define CharacterZoneClient__Cur_Mana_x                            0x4E1AF0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCB30
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDAD0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9120
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E8AC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8600
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8750
#define CharacterZoneClient__GetHPRegen_x                          0x4E8500
#define CharacterZoneClient__GetManaRegen_x                        0x4E8F00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9F50
#define CharacterZoneClient__Max_Endurance_x                       0x684660
#define CharacterZoneClient__Max_HP_x                              0x4D9810
#define CharacterZoneClient__Max_Mana_x                            0x684440
#define CharacterZoneClient__SpellDuration_x                       0x4C9990
#define CharacterZoneClient__TotalEffect_x                         0x4CD590
#define CharacterZoneClient__UseSkill_x                            0x4EAF20

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x919070

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69C0E0

// PcClient
#define PcClient__PcClient_x                                       0x6799D0
#define PcClient__GetConLevel_x                                    0x67C770

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00C0
#define CCharacterListWnd__EnterWorld_x                            0x4BFA90
#define CCharacterListWnd__Quit_x                                  0x4BF7B0
#define CCharacterListWnd__UpdateList_x                            0x4BFC80

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65BF40
#define EQ_Item__CreateItemTagString_x                             0x8F17A0
#define EQ_Item__IsStackable_x                                     0x8F6A30
#define EQ_Item__GetImageNum_x                                     0x8F3460
#define EQ_Item__CreateItemClient_x                                0x65AEF0
#define EQ_Item__GetItemValue_x                                    0x8F4740
#define EQ_Item__ValueSellMerchant_x                               0x8F87B0
#define EQ_Item__IsKeyRingItem_x                                   0x8F6200
#define EQ_Item__CanGemFitInSlot_x                                 0x8F0FB0
#define EQ_Item__CanGoInBag_x                                      0x65C060
#define EQ_Item__IsEmpty_x                                         0x8F5BD0
#define EQ_Item__GetMaxItemCount_x                                 0x8F4B30
#define EQ_Item__GetHeldItem_x                                     0x8F3320
#define ItemClient__dItemClient_x                                  0x65AE40

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57BEC0
#define EQ_LoadingS__Array_x                                       0xD9FD10

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x902890
#define EQ_PC__GetCombatAbility_x                                  0x902E10
#define EQ_PC__GetCombatAbilityTimer_x                             0x902E80
#define EQ_PC__GetItemRecastTimer_x                                0x687590
#define EQ_PC__HasLoreItem_x                                       0x67D120
#define EQ_PC__AlertInventoryChanged_x                             0x67C020
#define EQ_PC__GetPcZoneClient_x                                   0x6AC7D0
#define EQ_PC__RemoveMyAffect_x                                    0x68AB00
#define EQ_PC__GetKeyRingItems_x                                   0x903910
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x903470
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x903A60

// EQItemList
#define EQItemList__EQItemList_x                                   0x5DBCB0
#define EQItemList__add_object_x                                   0x60C200
#define EQItemList__add_item_x                                     0x5DC290
#define EQItemList__delete_item_x                                  0x5DC2E0
#define EQItemList__FreeItemList_x                                 0x5DC1F0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x557010

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69DB10
#define EQPlayer__dEQPlayer_x                                      0x6903C0
#define EQPlayer__DoAttack_x                                       0x6A6510
#define EQPlayer__EQPlayer_x                                       0x690C10
#define EQPlayer__SetNameSpriteState_x                             0x6951D0
#define EQPlayer__SetNameSpriteTint_x                              0x696090
#define PlayerBase__HasProperty_j_x                                0x9EDFA0
#define EQPlayer__IsTargetable_x                                   0x9EE500
#define EQPlayer__CanSee_x                                         0x9EE2F0
#define EQPlayer__CanSee1_x                                        0x9EE3C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EE060

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6AA2D0
#define PlayerZoneClient__GetLevel_x                               0x6AC810
#define PlayerZoneClient__IsValidTeleport_x                        0x60D6C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x573E60

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6A0CC0
#define EQPlayerManager__GetSpawnByName_x                          0x6A0D70
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6A0E00

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65F850
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65F920
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65F960
#define KeypressHandler__ClearCommandStateArray_x                  0x660E20
#define KeypressHandler__HandleKeyDown_x                           0x660E40
#define KeypressHandler__HandleKeyUp_x                             0x660EE0
#define KeypressHandler__SaveKeymapping_x                          0x661490

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x916F00

// StringTable
#define StringTable__getString_x                                   0x911D20

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x686F90
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x685150
#define PcZoneClient__GetPcSkillLimit_x                            0x68A750
#define PcZoneClient__RemovePetEffect_x                            0x68ADB0
#define PcZoneClient__HasAlternateAbility_x                        0x6842A0
#define PcZoneClient__CanEquipItem_x                               0x684960
#define PcZoneClient__GetItemByID_x                                0x687A60
#define PcZoneClient__GetItemByItemClass_x                         0x687BA0
#define PcZoneClient__RemoveBuffEffect_x                           0x68AE60
#define PcZoneClient__BandolierSwap_x                              0x685700
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x687530

// Doors
#define EQSwitch__UseSwitch_x                                      0x6122C0

// IconCache
#define IconCache__GetIcon_x                                       0x74D900

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x744500
#define CContainerMgr__CloseContainer_x                            0x7447E0
#define CContainerMgr__OpenExperimentContainer_x                   0x745340

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81CCE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x654440

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B29F0
#define CLootWnd__RequestLootSlot_x                                0x7B1C30

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6490
#define EQ_Spell__SpellAffects_x                                   0x5A6990
#define EQ_Spell__SpellAffectBase_x                                0x5A66B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F30
#define EQ_Spell__IsSPAStacking_x                                  0x5A7740
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6B90
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7750
#define __IsResEffectSpell_x                                       0x4D0730

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B15C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8697A0
#define CTargetWnd__WndNotification_x                              0x868F40
#define CTargetWnd__RefreshTargetBuffs_x                           0x8692A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867D20

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86E310
#define CTaskWnd__ConfirmAbandonTask_x                             0x8713C0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554BE0
#define CTaskManager__HandleMessage_x                              0x552AB0
#define CTaskManager__GetTaskStatus_x                              0x554C90
#define CTaskManager__GetElementDescription_x                      0x554D10

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A10C0
#define EqSoundManager__PlayScriptMp3_x                            0x5A12C0
#define EqSoundManager__SoundAssistPlay_x                          0x6C79C0
#define EqSoundManager__WaveInstancePlay_x                         0x6C6EB0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544A30

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A7860
#define CTextureAnimation__SetCurCell_x                            0x9A7620

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5844D0
#define CAltAbilityData__GetMercMaxRank_x                          0x584460

// CTargetRing
#define CTargetRing__Cast_x                                        0x651C50

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x648360
#define CharacterBase__GetItemByGlobalIndex_x                      0x929520
#define CharacterBase__GetItemByGlobalIndex1_x                     0x929570
#define CharacterBase__GetItemPossession_x                         0x65AD20
#define CharacterBase__GetMemorizedSpell_x                         0x65AD40
#define CharacterBase__IsExpansionFlag_x                           0x5D5940

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x729410
#define CCastSpellWnd__IsBardSongPlaying_x                         0x729CD0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x729D80

// messages
#define msg_spell_worn_off_x                                       0x5CD220
#define msg_new_text_x                                             0x5C0F00
#define __msgTokenTextParam_x                                      0x5CF690
#define msgTokenText_x                                             0x5CFAA0

// SpellManager
#define SpellManager__vftable_x                                    0xB3B518
#define SpellManager__SpellManager_x                               0x6CB5F0
#define Spellmanager__LoadTextSpells_x                             0x6CBEF0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CB7C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F27F0

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9223C0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x922710

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7AAB50

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7491C0
#define CCursorAttachment__AttachToCursor1_x                       0x749200
#define CCursorAttachment__Deactivate_x                            0x74A790

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B85A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B8D00
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B8980

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524B10
#define CFindItemWnd__WndNotification_x                            0x5259C0
#define CFindItemWnd__Update_x                                     0x5265A0
#define CFindItemWnd__PickupSelectedItem_x                         0x524210

// IString
#define IString__Append_x                                          0x55A9F0

// Camera
#define EverQuest__Cameras_x                                       0xDB303C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F7A0
#define LootFiltersManager__GetItemFilterData_x                    0x52F0E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52F110
#define LootFiltersManager__SetItemLootFilter_x                    0x52F320

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8096C0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F84B0
#define CResolutionHandler__GetWindowedStyle_x                     0x6C1E50

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x740EB0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92D8B0
#define CDistillerInfo__Instance_x                                 0x92D7F0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x763B10
#define CGroupWnd__UpdateDisplay_x                                 0x762D60

// ItemBase
#define ItemBase__IsLore_x                                         0x8F62A0
#define ItemBase__IsLoreEquipped_x                                 0x8F6310

#define MultipleItemMoveManager__ProcessMove_x                     0x6709F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60C160
#define EQPlacedItemManager__GetItemByGuid_x                       0x60C2A0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60C300

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B6580
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6BAE70

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A570

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x505230
#define FactionManagerClient__HandleFactionMessage_x               0x505A50
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506240
#define FactionManagerClient__GetMaxFaction_x                      0x50625F
#define FactionManagerClient__GetMinFaction_x                      0x506210

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511EC0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x97A090

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E2E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x512130

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x583680

// CTargetManager
#define CTargetManager__Get_x                                      0x6CF570

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B6580

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC640

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DC190

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE506D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5E0960

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D1F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6E1080

// AchievementManager
#define AchievementManager__Instance_x                             0x47E340

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
