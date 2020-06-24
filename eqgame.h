/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Jun 12 2020"
#define __ExpectedVersionTime                                     "09:56:43"
#define __ActualVersionDate_x                                      0xB1C5EC
#define __ActualVersionTime_x                                      0xB1C5E0
#define __ActualVersionBuild_x                                     0xB082BC

// Memory Protection
#define __MemChecker0_x                                            0x63F3A0
#define __MemChecker1_x                                            0x913FE0
#define __MemChecker2_x                                            0x6CE7A0
#define __MemChecker3_x                                            0x6CE6F0
#define __MemChecker4_x                                            0x86A4C0
#define __EncryptPad0_x                                            0xC54520
#define __EncryptPad1_x                                            0xCB2688
#define __EncryptPad2_x                                            0xC64DB8
#define __EncryptPad3_x                                            0xC649B8
#define __EncryptPad4_x                                            0xCA2C38
#define __EncryptPad5_x                                            0xF75D70
#define __AC1_x                                                    0x826E46
#define __AC2_x                                                    0x5F8CAF
#define __AC3_x                                                    0x6002FF
#define __AC4_x                                                    0x6042C0
#define __AC5_x                                                    0x60A56F
#define __AC6_x                                                    0x60EA76
#define __AC7_x                                                    0x5F8720
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x70A0C

// Direct Input
#define DI8__Main_x                                                0xF75D90
#define DI8__Keyboard_x                                            0xF75D94
#define DI8__Mouse_x                                               0xF75DAC
#define DI8__Mouse_Copy_x                                          0xECEF5C
#define DI8__Mouse_Check_x                                         0xF738C4
#define __AutoSkillArray_x                                         0xECFE74
#define __Attack_x                                                 0xF6DC9B
#define __Autofire_x                                               0xF6DC9C
#define __BindList_x                                               0xC42F38
#define g_eqCommandStates_x                                        0xC43CB8
#define __Clicks_x                                                 0xECF014
#define __CommandList_x                                            0xC44878
#define __CurrentMapLabel_x                                        0xF86764
#define __CurrentSocial_x                                          0xC2C7D4
#define __DoAbilityList_x                                          0xF057BC
#define __do_loot_x                                                0x5C4AE0
#define __DrawHandler_x                                            0x1605AE0
#define __GroupCount_x                                             0xECA032
#define __Guilds_x                                                 0xECDE98
#define __gWorld_x                                                 0xECA014
#define __HWnd_x                                                   0xF75DB0
#define __heqmain_x                                                0xF75D58
#define __InChatMode_x                                             0xECEF44
#define __LastTell_x                                               0xED0EB8
#define __LMouseHeldTime_x                                         0xECF080
#define __Mouse_x                                                  0xF75D7C
#define __MouseLook_x                                              0xECEFDA
#define __MouseEventTime_x                                         0xF6E77C
#define __gpbCommandEvent_x                                        0xEC7928
#define __NetStatusToggle_x                                        0xECEFDD
#define __PCNames_x                                                0xED0464
#define __RangeAttackReady_x                                       0xED0158
#define __RMouseHeldTime_x                                         0xECF07C
#define __RunWalkState_x                                           0xECEF48
#define __ScreenMode_x                                             0xE152C8
#define __ScreenX_x                                                0xECEEFC
#define __ScreenY_x                                                0xECEEF8
#define __ScreenXMax_x                                             0xECEF00
#define __ScreenYMax_x                                             0xECEF04
#define __ServerHost_x                                             0xEC7B03
#define __ServerName_x                                             0xF0577C
#define __ShiftKeyDown_x                                           0xECF5D4
#define __ShowNames_x                                              0xED0314
#define __SocialChangedList_x                                      0xF05804
#define __Socials_x                                                0xF0587C
#define __SubscriptionType_x                                       0xFCAC70
#define __TargetAggroHolder_x                                      0xF89118
#define __ZoneType_x                                               0xECF3D8
#define __GroupAggro_x                                             0xF89158
#define __LoginName_x                                              0xF764EC
#define __Inviter_x                                                0xF6DC18
#define __AttackOnAssist_x                                         0xED02D0
#define __UseTellWindows_x                                         0xED0600
#define __gfMaxZoomCameraDistance_x                                0xB11F20
#define __gfMaxCameraDistance_x                                    0xB3E3B8
#define __pulAutoRun_x                                             0xECEFF8
#define __pulForward_x                                             0xED0638
#define __pulBackward_x                                            0xED063C
#define __pulTurnRight_x                                           0xED0640
#define __pulTurnLeft_x                                            0xED0644
#define __pulStrafeLeft_x                                          0xED0648
#define __pulStrafeRight_x                                         0xED064C

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xECA230
#define instEQZoneInfo_x                                           0xECF1D0
#define pinstActiveBanker_x                                        0xEC7E14
#define pinstActiveCorpse_x                                        0xEC79FC
#define pinstActiveGMaster_x                                       0xEC7C0C
#define pinstActiveMerchant_x                                      0xEC79F8
#define pinstAltAdvManager_x                                       0xE16460
#define pinstBandageTarget_x                                       0xEC7E24
#define pinstCamActor_x                                            0xE152BC
#define pinstCDBStr_x                                              0xE1517C
#define pinstCDisplay_x                                            0xEC9E80
#define pinstCEverQuest_x                                          0xF75DA8
#define pinstEverQuestInfo_x                                       0xECEEF0
#define pinstCharData_x                                            0xECA01C
#define pinstCharSpawn_x                                           0xEC7E5C
#define pinstControlledMissile_x                                   0xEC7E70
#define pinstControlledPlayer_x                                    0xEC7E5C
#define pinstCResolutionHandler_x                                  0x1605D10
#define pinstCSidlManager_x                                        0x1604CA8
#define pinstCXWndManager_x                                        0x1604CA4
#define instDynamicZone_x                                          0xECDD70
#define pinstDZMember_x                                            0xECDE80
#define pinstDZTimerInfo_x                                         0xECDE84
#define pinstEqLogin_x                                             0xF75E38
#define instEQMisc_x                                               0xE150C0
#define pinstEQSoundManager_x                                      0xE17430
#define pinstEQSpellStrings_x                                      0xCD7AD8
#define instExpeditionLeader_x                                     0xECDDBA
#define instExpeditionName_x                                       0xECDDFA
#define pinstSGraphicsEngine_x                                     0x1605AD4
#define pinstGroup_x                                               0xECA02E
#define pinstImeManager_x                                          0x1604CA0
#define pinstLocalPlayer_x                                         0xEC79F4
#define pinstMercenaryData_x                                       0xF70274
#define pinstMercenaryStats_x                                      0xF89264
#define pinstModelPlayer_x                                         0xEC7E1C
#define pinstPCData_x                                              0xECA01C
#define pinstSkillMgr_x                                            0xF723D8
#define pinstSpawnManager_x                                        0xF70E80
#define pinstSpellManager_x                                        0xF72618
#define pinstSpellSets_x                                           0xF668C4
#define pinstStringTable_x                                         0xECA224
#define pinstSwitchManager_x                                       0xEC77D0
#define pinstTarget_x                                              0xEC7E58
#define pinstTargetObject_x                                        0xEC7E64
#define pinstTargetSwitch_x                                        0xEC9E78
#define pinstTaskMember_x                                          0xE14F50
#define pinstTrackTarget_x                                         0xEC7E60
#define pinstTradeTarget_x                                         0xEC7E18
#define instTributeActive_x                                        0xE150E1
#define pinstViewActor_x                                           0xE152B8
#define pinstWorldData_x                                           0xEC7E6C
#define pinstZoneAddr_x                                            0xECF470
#define pinstPlayerPath_x                                          0xF70F18
#define pinstTargetIndicator_x                                     0xF72880
#define EQObject_Top_x                                             0xEC79F0

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xE155D0
#define pinstCAchievementsWnd_x                                    0xE15240
#define pinstCActionsWnd_x                                         0xE15A70
#define pinstCAdvancedDisplayOptionsWnd_x                          0xE152F0
#define pinstCAdvancedLootWnd_x                                    0xE15288
#define pinstCAdventureLeaderboardWnd_x                            0xF7FF38
#define pinstCAdventureRequestWnd_x                                0xF7FFE8
#define pinstCAdventureStatsWnd_x                                  0xF80098
#define pinstCAggroMeterWnd_x                                      0xE152F4
#define pinstCAlarmWnd_x                                           0xE15258
#define pinstCAlertHistoryWnd_x                                    0xE1536C
#define pinstCAlertStackWnd_x                                      0xE152A4
#define pinstCAlertWnd_x                                           0xE152DC
#define pinstCAltStorageWnd_x                                      0xF803F8
#define pinstCAudioTriggersWindow_x                                0xCC9E08
#define pinstCAuraWnd_x                                            0xE15290
#define pinstCAvaZoneWnd_x                                         0xE15328
#define pinstCBandolierWnd_x                                       0xE152EC
#define pinstCBankWnd_x                                            0xE15324
#define pinstCBarterMerchantWnd_x                                  0xF81638
#define pinstCBarterSearchWnd_x                                    0xF816E8
#define pinstCBarterWnd_x                                          0xF81798
#define pinstCBazaarConfirmationWnd_x                              0xE15274
#define pinstCBazaarSearchWnd_x                                    0xE155DC
#define pinstCBazaarWnd_x                                          0xE1523C
#define pinstCBlockedBuffWnd_x                                     0xE1529C
#define pinstCBlockedPetBuffWnd_x                                  0xE152D8
#define pinstCBodyTintWnd_x                                        0xE15A7C
#define pinstCBookWnd_x                                            0xE1531C
#define pinstCBreathWnd_x                                          0xE15A60
#define pinstCBuffWindowNORMAL_x                                   0xE15280
#define pinstCBuffWindowSHORT_x                                    0xE15284
#define pinstCBugReportWnd_x                                       0xE15320
#define pinstCButtonWnd_x                                          0x1604F10
#define pinstCCastingWnd_x                                         0xE15308
#define pinstCCastSpellWnd_x                                       0xE15654
#define pinstCCharacterListWnd_x                                   0xE15A98
#define pinstCChatWindowManager_x                                  0xF82258
#define pinstCClaimWnd_x                                           0xF823B0
#define pinstCColorPickerWnd_x                                     0xE15588
#define pinstCCombatAbilityWnd_x                                   0xE15250
#define pinstCCombatSkillsSelectWnd_x                              0xE15AA0
#define pinstCCompassWnd_x                                         0xE15A74
#define pinstCConfirmationDialog_x                                 0xF872B0
#define pinstCContainerMgr_x                                       0xE15A90
#define pinstCContextMenuManager_x                                 0x1604C60
#define pinstCCursorAttachment_x                                   0xE152FC
#define pinstCDynamicZoneWnd_x                                     0xF82978
#define pinstCEditLabelWnd_x                                       0xE15278
#define pinstCEQMainWnd_x                                          0xF82BC0
#define pinstCEventCalendarWnd_x                                   0xE15658
#define pinstCExtendedTargetWnd_x                                  0xE152D4
#define pinstCFacePick_x                                           0xE1521C
#define pinstCFactionWnd_x                                         0xE15228
#define pinstCFellowshipWnd_x                                      0xF82DC0
#define pinstCFileSelectionWnd_x                                   0xE15378
#define pinstCFindItemWnd_x                                        0xE15AB0
#define pinstCFindLocationWnd_x                                    0xF82F18
#define pinstCFriendsWnd_x                                         0xE15218
#define pinstCGemsGameWnd_x                                        0xE15224
#define pinstCGiveWnd_x                                            0xE15260
#define pinstCGroupSearchFiltersWnd_x                              0xE15310
#define pinstCGroupSearchWnd_x                                     0xF83310
#define pinstCGroupWnd_x                                           0xF833C0
#define pinstCGuildBankWnd_x                                       0xED02B4
#define pinstCGuildCreationWnd_x                                   0xF83520
#define pinstCGuildMgmtWnd_x                                       0xF835D0
#define pinstCharacterCreation_x                                   0xE15AA8
#define pinstCHelpWnd_x                                            0xE1525C
#define pinstCHeritageSelectionWnd_x                               0xE1522C
#define pinstCHotButtonWnd_x                                       0xF85728
#define pinstCHotButtonWnd1_x                                      0xF85728
#define pinstCHotButtonWnd2_x                                      0xF8572C
#define pinstCHotButtonWnd3_x                                      0xF85730
#define pinstCHotButtonWnd4_x                                      0xF85734
#define pinstCIconSelectionWnd_x                                   0xE152F8
#define pinstCInspectWnd_x                                         0xE152E0
#define pinstCInventoryWnd_x                                       0xE15294
#define pinstCInvSlotMgr_x                                         0xE15650
#define pinstCItemDisplayManager_x                                 0xF85CB8
#define pinstCItemExpTransferWnd_x                                 0xF85DE8
#define pinstCItemOverflowWnd_x                                    0xE1564C
#define pinstCJournalCatWnd_x                                      0xE15594
#define pinstCJournalTextWnd_x                                     0xE1534C
#define pinstCKeyRingWnd_x                                         0xE15304
#define pinstCLargeDialogWnd_x                                     0xF87F30
#define pinstCLayoutCopyWnd_x                                      0xF86138
#define pinstCLFGuildWnd_x                                         0xF861E8
#define pinstCLoadskinWnd_x                                        0xE15238
#define pinstCLootFiltersCopyWnd_x                                 0xCE6458
#define pinstCLootFiltersWnd_x                                     0xE152AC
#define pinstCLootSettingsWnd_x                                    0xE152E8
#define pinstCLootWnd_x                                            0xE15598
#define pinstCMailAddressBookWnd_x                                 0xE15A64
#define pinstCMailCompositionWnd_x                                 0xE155CC
#define pinstCMailIgnoreListWnd_x                                  0xE15A68
#define pinstCMailWnd_x                                            0xE1558C
#define pinstCManageLootWnd_x                                      0xE16910
#define pinstCMapToolbarWnd_x                                      0xE15264
#define pinstCMapViewWnd_x                                         0xE15234
#define pinstCMarketplaceWnd_x                                     0xE152B4
#define pinstCMerchantWnd_x                                        0xE155A4
#define pinstCMIZoneSelectWnd_x                                    0xF86A20
#define pinstCMusicPlayerWnd_x                                     0xE15368
#define pinstCNameChangeMercWnd_x                                  0xE1526C
#define pinstCNameChangePetWnd_x                                   0xE15244
#define pinstCNameChangeWnd_x                                      0xE1527C
#define pinstCNoteWnd_x                                            0xE15248
#define pinstCObjectPreviewWnd_x                                   0xE152E4
#define pinstCOptionsWnd_x                                         0xE15254
#define pinstCPetInfoWnd_x                                         0xE15360
#define pinstCPetitionQWnd_x                                       0xE15AA4
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xE15A84
#define pinstCPlayerWnd_x                                          0xE15374
#define pinstCPopupWndManager_x                                    0xF872B0
#define pinstCProgressionSelectionWnd_x                            0xF87360
#define pinstCPurchaseGroupWnd_x                                   0xE15330
#define pinstCPurchaseWnd_x                                        0xE15314
#define pinstCPvPLeaderboardWnd_x                                  0xF87410
#define pinstCPvPStatsWnd_x                                        0xF874C0
#define pinstCQuantityWnd_x                                        0xE15350
#define pinstCRaceChangeWnd_x                                      0xE152A0
#define pinstCRaidOptionsWnd_x                                     0xE15318
#define pinstCRaidWnd_x                                            0xE1559C
#define pinstCRealEstateItemsWnd_x                                 0xE15230
#define pinstCRealEstateLayoutDetailsWnd_x                         0xE15A80
#define pinstCRealEstateManageWnd_x                                0xE1533C
#define pinstCRealEstateNeighborhoodWnd_x                          0xE1535C
#define pinstCRealEstatePlotSearchWnd_x                            0xE1537C
#define pinstCRealEstatePurchaseWnd_x                              0xE155A0
#define pinstCRespawnWnd_x                                         0xE152B0
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xE15A9C
#define pinstCSendMoneyWnd_x                                       0xE15270
#define pinstCServerListWnd_x                                      0xE155A8
#define pinstCSkillsSelectWnd_x                                    0xE15A8C
#define pinstCSkillsWnd_x                                          0xE15A78
#define pinstCSocialEditWnd_x                                      0xE15300
#define pinstCSocialWnd_x                                          0xE15268
#define pinstCSpellBookWnd_x                                       0xE1524C
#define pinstCStoryWnd_x                                           0xE15A6C
#define pinstCTargetOfTargetWnd_x                                  0xF892E8
#define pinstCTargetWnd_x                                          0xE152A8
#define pinstCTaskOverlayWnd_x                                     0xE1532C
#define pinstCTaskSelectWnd_x                                      0xF89440
#define pinstCTaskManager_x                                        0xCE6D98
#define pinstCTaskTemplateSelectWnd_x                              0xF894F0
#define pinstCTaskWnd_x                                            0xF895A0
#define pinstCTextEntryWnd_x                                       0xE1530C
#define pinstCTimeLeftWnd_x                                        0xE15A94
#define pinstCTipWndCONTEXT_x                                      0xF897A4
#define pinstCTipWndOFDAY_x                                        0xF897A0
#define pinstCTitleWnd_x                                           0xF89850
#define pinstCTrackingWnd_x                                        0xE15298
#define pinstCTradeskillWnd_x                                      0xF899B8
#define pinstCTradeWnd_x                                           0xE15A88
#define pinstCTrainWnd_x                                           0xE15590
#define pinstCTributeBenefitWnd_x                                  0xF89BB8
#define pinstCTributeMasterWnd_x                                   0xF89C68
#define pinstCTributeTrophyWnd_x                                   0xF89D18
#define pinstCVideoModesWnd_x                                      0xE15370
#define pinstCVoiceMacroWnd_x                                      0xF72FE8
#define pinstCVoteResultsWnd_x                                     0xE15220
#define pinstCVoteWnd_x                                            0xE15AAC
#define pinstCWebManager_x                                         0xF73664
#define pinstCZoneGuideWnd_x                                       0xE15334
#define pinstCZonePathWnd_x                                        0xE15354
#define pinstEQSuiteTextureLoader_x                                0xCB4160
#define pinstItemIconCache_x                                       0xF82B78
#define pinstLootFiltersManager_x                                  0xCE6508
#define pinstRewardSelectionWnd_x                                  0xF87C08

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5BFEB0
#define __CastRay2_x                                               0x5BFF00
#define __ConvertItemTags_x                                        0x5DBD40
#define __CleanItemTags_x                                          0x47D490
#define __CreateCascadeMenuItems_x                                 0x55AA70
#define __DoesFileExist_x                                          0x917060
#define __EQGetTime_x                                              0x913AB0
#define __ExecuteCmd_x                                             0x5B8760
#define __FixHeading_x                                             0x9AE190
#define __FlushDxKeyboard_x                                        0x6CA640
#define __GameLoop_x                                               0x6CD970
#define __get_bearing_x                                            0x5BFA10
#define __get_melee_range_x                                        0x5C00F0
#define __GetAnimationCache_x                                      0x732F50
#define __GetGaugeValueFromEQ_x                                    0x8252F0
#define __GetLabelFromEQ_x                                         0x826DD0
#define __GetXTargetType_x                                         0x9AFBE0
#define __HandleMouseWheel_x                                       0x6CE850
#define __HeadingDiff_x                                            0x9AE200
#define __HelpPath_x                                               0xF6E36C
#define __LoadFrontEnd_x                                           0x6CAC80
#define __NewUIINI_x                                               0x824FC0
#define __ProcessGameEvents_x                                      0x620620
#define __ProcessKeyboardEvents_x                                  0x6CC1D0
#define __ProcessMouseEvents_x                                     0x61FDE0
#define __SaveColors_x                                             0x55A950
#define __STMLToText_x                                             0x951730
#define __WndProc_x                                                0x6CCC30
#define CMemoryMappedFile__SetFile_x                               0xA9D550
#define CrashDetected_x                                            0x6CC730
#define DrawNetStatus_x                                            0x64C770
#define Expansion_HoT_x                                            0xED02BC
#define Teleport_Table_Size_x                                      0xEC79B0
#define Teleport_Table_x                                           0xEC7E78
#define Util__FastTime_x                                           0x913680
#define __eq_delete_x                                              0x9B65FE
#define __eq_new_x                                                 0x9B6BC4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6DABC0
#define CAAWnd__Update_x                                           0x6D9EE0
#define CAAWnd__UpdateSelected_x                                   0x6D7430

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4907B0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x4997A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x499570
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493D50
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4931A0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x562A70
#define AltAdvManager__IsAbilityReady_x                            0x561810
#define AltAdvManager__GetAAById_x                                 0x561BA0
#define AltAdvManager__CanTrainAbility_x                           0x561C10
#define AltAdvManager__CanSeeAbility_x                             0x561F70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C76A0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C5F60
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C6130
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BC050
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CB420
#define CharacterZoneClient__FindAffectSlot_x                      0x4C4CA0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8920
#define CharacterZoneClient__FindItemByRecord_x                    0x4D83A0
#define CharacterZoneClient__GetCurrentMod_x                       0x4E60D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA4D0
#define CharacterZoneClient__GetEffect_x                           0x4BBF90
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C5DC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B2330
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3DC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DA3F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DA310
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5E10
#define CharacterZoneClient__GetMaxEffects_x                       0x4BFA70
#define CharacterZoneClient__GetModCap_x                           0x4E5FD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5CF0
#define CharacterZoneClient__HasSkill_x                            0x4D62A0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C2BC0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D79C0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6F4450
#define CBankWnd__WndNotification_x                                0x6F4230

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x701C80

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x62EFD0
#define CButtonWnd__CButtonWnd_x                                   0x94DB00
#define CButtonWnd__dCButtonWnd_x                                  0x94DDD0
#define CButtonWnd__vftable_x                                      0xB57148

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x721FB0
#define CChatWindowManager__InitContextMenu_x                      0x71B0E0
#define CChatWindowManager__FreeChatWindow_x                       0x720AF0
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E9C90
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x721C30
#define CChatWindowManager__CreateChatWindow_x                     0x721130

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E9DA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x722820
#define CChatWindow__Clear_x                                       0x723AE0
#define CChatWindow__WndNotification_x                             0x724270
#define CChatWindow__AddHistory_x                                  0x7233A0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x962170
#define CContextMenu__dCContextMenu_x                              0x9623B0
#define CContextMenu__AddMenuItem_x                                0x9623C0
#define CContextMenu__RemoveMenuItem_x                             0x9626D0
#define CContextMenu__RemoveAllMenuItems_x                         0x9626F0
#define CContextMenu__CheckMenuItem_x                              0x962770
#define CContextMenu__SetMenuItem_x                                0x9625F0
#define CContextMenu__AddSeparator_x                               0x962550

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x962D00
#define CContextMenuManager__RemoveMenu_x                          0x962D70
#define CContextMenuManager__PopupMenu_x                           0x962E30
#define CContextMenuManager__Flush_x                               0x962CA0
#define CContextMenuManager__GetMenu_x                             0x49BA50
#define CContextMenuManager__CreateDefaultMenu_x                   0x72D730

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8EE940
#define CChatService__GetFriendName_x                              0x8EE950

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x95F5D0
#define CComboWnd__Draw_x                                          0x95EAC0
#define CComboWnd__GetCurChoice_x                                  0x95F410
#define CComboWnd__GetListRect_x                                   0x95EF70
#define CComboWnd__GetTextRect_x                                   0x95F640
#define CComboWnd__InsertChoice_x                                  0x95F100
#define CComboWnd__SetColors_x                                     0x95F0D0
#define CComboWnd__SetChoice_x                                     0x95F3E0
#define CComboWnd__GetItemCount_x                                  0x95F420
#define CComboWnd__GetCurChoiceText_x                              0x95F460
#define CComboWnd__GetChoiceText_x                                 0x95F430
#define CComboWnd__InsertChoiceAtIndex_x                           0x95F1A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x72B140
#define CContainerWnd__vftable_x                                   0xB257E4
#define CContainerWnd__SetContainer_x                              0x72C6A0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x555300
#define CDisplay__PreZoneMainUI_x                                  0x555310
#define CDisplay__CleanGameUI_x                                    0x55A710
#define CDisplay__GetClickedActor_x                                0x54D6C0
#define CDisplay__GetUserDefinedColor_x                            0x545D20
#define CDisplay__GetWorldFilePath_x                               0x54F130
#define CDisplay__is3dON_x                                         0x54A320
#define CDisplay__ReloadUI_x                                       0x554780
#define CDisplay__WriteTextHD2_x                                   0x54A110
#define CDisplay__TrueDistance_x                                   0x550DF0
#define CDisplay__SetViewActor_x                                   0x54CFE0
#define CDisplay__GetFloorHeight_x                                 0x54A3E0
#define CDisplay__SetRenderWindow_x                                0x548D40
#define CDisplay__ToggleScreenshotMode_x                           0x54CAB0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x981E60

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9656E0
#define CEditWnd__EnsureCaretVisible_x                             0x9678B0
#define CEditWnd__GetCaretPt_x                                     0x966860
#define CEditWnd__GetCharIndexPt_x                                 0x966610
#define CEditWnd__GetDisplayString_x                               0x9664B0
#define CEditWnd__GetHorzOffset_x                                  0x964D10
#define CEditWnd__GetLineForPrintableChar_x                        0x9677B0
#define CEditWnd__GetSelStartPt_x                                  0x9668C0
#define CEditWnd__GetSTMLSafeText_x                                0x9662D0
#define CEditWnd__PointFromPrintableChar_x                         0x9673E0
#define CEditWnd__ReplaceSelection_x                               0x967050
#define CEditWnd__SelectableCharFromPoint_x                        0x967550
#define CEditWnd__SetEditable_x                                    0x966990
#define CEditWnd__SetWindowTextA_x                                 0x966050

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60DF50
#define CEverQuest__ClickedPlayer_x                                0x6000E0
#define CEverQuest__CreateTargetIndicator_x                        0x61D8B0
#define CEverQuest__DeleteTargetIndicator_x                        0x61D940
#define CEverQuest__DoTellWindow_x                                 0x4E9E80
#define CEverQuest__OutputTextToLog_x                              0x4EA150
#define CEverQuest__DropHeldItemOnGround_x                         0x5F5240
#define CEverQuest__dsp_chat_x                                     0x4EA4E0
#define CEverQuest__trimName_x                                     0x619AC0
#define CEverQuest__Emote_x                                        0x60E7B0
#define CEverQuest__EnterZone_x                                    0x608840
#define CEverQuest__GetBodyTypeDesc_x                              0x613060
#define CEverQuest__GetClassDesc_x                                 0x6136A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x613CA0
#define CEverQuest__GetDeityDesc_x                                 0x61C100
#define CEverQuest__GetLangDesc_x                                  0x613E60
#define CEverQuest__GetRaceDesc_x                                  0x613680
#define CEverQuest__InterpretCmd_x                                 0x61C6D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x5F93D0
#define CEverQuest__LMouseUp_x                                     0x5F7760
#define CEverQuest__RightClickedOnPlayer_x                         0x5F9CB0
#define CEverQuest__RMouseUp_x                                     0x5F86E0
#define CEverQuest__SetGameState_x                                 0x5F4FD0
#define CEverQuest__UPCNotificationFlush_x                         0x6199C0
#define CEverQuest__IssuePetCommand_x                              0x615260
#define CEverQuest__ReportSuccessfulHeal_x                         0x60F4D0
#define CEverQuest__ReportSuccessfulHit_x                          0x60FB00

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x73D0F0
#define CGaugeWnd__CalcLinesFillRect_x                             0x73D150
#define CGaugeWnd__Draw_x                                          0x73C780

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B0070
#define CGuild__GetGuildName_x                                     0x4AEB20
#define CGuild__GetGuildIndex_x                                    0x4AF120

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7572E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x62F390

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x7643E0
#define CInvSlotMgr__MoveItem_x                                    0x7630B0
#define CInvSlotMgr__SelectSlot_x                                  0x7644B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x761890
#define CInvSlot__SliderComplete_x                                 0x75F5F0
#define CInvSlot__GetItemBase_x                                    0x75EF60
#define CInvSlot__UpdateItem_x                                     0x75F0D0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x765F40
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7650D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x765AC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x820660
#define CItemDisplayWnd__UpdateStrings_x                           0x774760
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x76E3B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x76E8E0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x774D60
#define CItemDisplayWnd__AboutToShow_x                             0x7743B0
#define CItemDisplayWnd__WndNotification_x                         0x775E90
#define CItemDisplayWnd__RequestConvertItem_x                      0x775910
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x773410
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x7741D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x8591E0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x77A3A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x5195E0

// CLabel
#define CLabel__Draw_x                                             0x77FE00

// CListWnd
#define CListWnd__CListWnd_x                                       0x937E50
#define CListWnd__dCListWnd_x                                      0x938170
#define CListWnd__vftable_x                                        0xB56A20
#define CListWnd__AddColumn_x                                      0x93C5C0
#define CListWnd__AddColumn1_x                                     0x93C610
#define CListWnd__AddLine_x                                        0x93C9A0
#define CListWnd__AddString_x                                      0x93C7A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x93C380
#define CListWnd__CalculateVSBRange_x                              0x93C180
#define CListWnd__ClearSel_x                                       0x93D180
#define CListWnd__ClearAllSel_x                                    0x93D1E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x93DC00
#define CListWnd__Compare_x                                        0x93BAB0
#define CListWnd__Draw_x                                           0x9382A0
#define CListWnd__DrawColumnSeparators_x                           0x93AA90
#define CListWnd__DrawHeader_x                                     0x93AEF0
#define CListWnd__DrawItem_x                                       0x93B3F0
#define CListWnd__DrawLine_x                                       0x93ABF0
#define CListWnd__DrawSeparator_x                                  0x93AB30
#define CListWnd__EnableLine_x                                     0x93A370
#define CListWnd__EnsureVisible_x                                  0x93DB20
#define CListWnd__ExtendSel_x                                      0x93D0B0
#define CListWnd__GetColumnTooltip_x                               0x939EB0
#define CListWnd__GetColumnMinWidth_x                              0x939F20
#define CListWnd__GetColumnWidth_x                                 0x939E20
#define CListWnd__GetCurSel_x                                      0x9397B0
#define CListWnd__GetItemAtPoint_x                                 0x93A5E0
#define CListWnd__GetItemAtPoint1_x                                0x93A650
#define CListWnd__GetItemData_x                                    0x939830
#define CListWnd__GetItemHeight_x                                  0x939BF0
#define CListWnd__GetItemIcon_x                                    0x9399C0
#define CListWnd__GetItemRect_x                                    0x93A460
#define CListWnd__GetItemText_x                                    0x939870
#define CListWnd__GetSelList_x                                     0x93D230
#define CListWnd__GetSeparatorRect_x                               0x93A890
#define CListWnd__InsertLine_x                                     0x93CD90
#define CListWnd__RemoveLine_x                                     0x93CEE0
#define CListWnd__SetColors_x                                      0x93C150
#define CListWnd__SetColumnJustification_x                         0x93BE80
#define CListWnd__SetColumnLabel_x                                 0x93C740
#define CListWnd__SetColumnWidth_x                                 0x93BDA0
#define CListWnd__SetCurSel_x                                      0x93CFF0
#define CListWnd__SetItemColor_x                                   0x93D7D0
#define CListWnd__SetItemData_x                                    0x93D790
#define CListWnd__SetItemText_x                                    0x93D3A0
#define CListWnd__ShiftColumnSeparator_x                           0x93BF40
#define CListWnd__Sort_x                                           0x93BC30
#define CListWnd__ToggleSel_x                                      0x93D020
#define CListWnd__SetColumnsSizable_x                              0x93BFF0
#define CListWnd__SetItemWnd_x                                     0x93D650
#define CListWnd__GetItemWnd_x                                     0x939A10
#define CListWnd__SetItemIcon_x                                    0x93D420
#define CListWnd__CalculateCustomWindowPositions_x                 0x93C480
#define CListWnd__SetVScrollPos_x                                  0x93BD80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x795560

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x790A50
#define MapViewMap__dMapViewMap_x                                  0x790BA0
#define MapViewMap__vftable_x                                      0xB2CE28
#define MapViewMap__Clear_x                                        0x7913D0
#define MapViewMap__SaveEx_x                                       0x794790
#define MapViewMap__SetZoom_x                                      0x798E50
#define MapViewMap__HandleLButtonDown_x                            0x790CB0
#define MapViewMap__GetWorldCoordinates_x                          0x793C70

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7B57B0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7B6090
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7B65C0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7B9540
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7B4330
#define CMerchantWnd__SelectBuySellSlot_x                          0x7BF0F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7B53D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8BC470
#define CPacketScrambler__hton_x                                   0x8BC460

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x95B110
#define CSidlManagerBase__CreatePageWnd_x                          0x95A900
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x956B80
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x956B10
#define CSidlManagerBase__FindAnimation1_x                         0x956D60
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x957170
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x956F60
#define CSidlManagerBase__CreateLabel_x                            0x817860
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x95A0D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x95A2B0
#define CSidlManagerBase__CreateXWnd_x                             0x817790

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x817D60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x953870
#define CSidlScreenWnd__CalculateVSBRange_x                        0x953770
#define CSidlScreenWnd__ConvertToRes_x                             0x97C950
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x953200
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x952EF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x952FC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x953090
#define CSidlScreenWnd__DrawSidlPiece_x                            0x953D00
#define CSidlScreenWnd__EnableIniStorage_x                         0x9541D0
#define CSidlScreenWnd__GetChildItem_x                             0x954150
#define CSidlScreenWnd__GetSidlPiece_x                             0x953EF0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x9439E0
#define CSidlScreenWnd__Init1_x                                    0x952AF0
#define CSidlScreenWnd__LoadIniInfo_x                              0x954220
#define CSidlScreenWnd__LoadIniListWnd_x                           0x954D40
#define CSidlScreenWnd__LoadSidlScreen_x                           0x951EF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1604B30
#define CSidlScreenWnd__StoreIniInfo_x                             0x9548C0
#define CSidlScreenWnd__StoreIniVis_x                              0x954C20
#define CSidlScreenWnd__vftable_x                                  0xB573D8
#define CSidlScreenWnd__WndNotification_x                          0x953C10

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6947B0
#define CSkillMgr__GetSkillCap_x                                   0x694990
#define CSkillMgr__GetNameToken_x                                  0x693F30
#define CSkillMgr__IsActivatedSkill_x                              0x694070
#define CSkillMgr__IsCombatSkill_x                                 0x693FB0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x963AF0
#define CSliderWnd__SetValue_x                                     0x963960
#define CSliderWnd__SetNumTicks_x                                  0x9639C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x81DA30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x96C320
#define CStmlWnd__CalculateHSBRange_x                              0x96D440
#define CStmlWnd__CalculateVSBRange_x                              0x96D3B0
#define CStmlWnd__CanBreakAtCharacter_x                            0x971770
#define CStmlWnd__FastForwardToEndOfTag_x                          0x972400
#define CStmlWnd__ForceParseNow_x                                  0x96C910
#define CStmlWnd__GetNextTagPiece_x                                0x9716D0
#define CStmlWnd__GetSTMLText_x                                    0x50AB30
#define CStmlWnd__GetVisibleText_x                                 0x96C930
#define CStmlWnd__InitializeWindowVariables_x                      0x972250
#define CStmlWnd__MakeStmlColorTag_x                               0x96B990
#define CStmlWnd__MakeWndNotificationTag_x                         0x96BA00
#define CStmlWnd__SetSTMLText_x                                    0x96AA40
#define CStmlWnd__StripFirstSTMLLines_x                            0x9734D0
#define CStmlWnd__UpdateHistoryString_x                            0x972610

// CTabWnd
#define CTabWnd__Draw_x                                            0x969B70
#define CTabWnd__DrawCurrentPage_x                                 0x96A2A0
#define CTabWnd__DrawTab_x                                         0x969FC0
#define CTabWnd__GetCurrentPage_x                                  0x969370
#define CTabWnd__GetCurrentTabIndex_x                              0x969360
#define CTabWnd__GetPageFromTabIndex_x                             0x969F00
#define CTabWnd__GetPageInnerRect_x                                0x9695B0
#define CTabWnd__GetTabInnerRect_x                                 0x9694F0
#define CTabWnd__GetTabRect_x                                      0x9693A0
#define CTabWnd__InsertPage_x                                      0x9697C0
#define CTabWnd__RemovePage_x                                      0x969930
#define CTabWnd__SetPage_x                                         0x969630
#define CTabWnd__SetPageRect_x                                     0x969AB0
#define CTabWnd__UpdatePage_x                                      0x969E80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x968F20
#define CPageWnd__GetTabText_x                                     0x77A780
#define CPageWnd__SetTabText_x                                     0x968EC0


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A93F0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x940880
#define CTextureFont__DrawWrappedText1_x                           0x9407B0
#define CTextureFont__DrawWrappedText2_x                           0x9408D0
#define CTextureFont__GetTextExtent_x                              0x940A40

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6C7800
#define CHtmlComponentWnd__ValidateUri_x                           0x758CD0
#define CHtmlWnd__SetClientCallbacks_x                             0x634400
#define CHtmlWnd__AddObserver_x                                    0x634420
#define CHtmlWnd__RemoveObserver_x                                 0x634480
#define Window__getProgress_x                                      0x871AD0
#define Window__getStatus_x                                        0x871AF0
#define Window__getURI_x                                           0x871B00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x979750

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x92D950

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9AD0
#define CXStr__CXStr1_x                                            0x936360
#define CXStr__CXStr3_x                                            0x90FA70
#define CXStr__dCXStr_x                                            0x4786D0
#define CXStr__operator_equal_x                                    0x90FCA0
#define CXStr__operator_equal1_x                                   0x90FCE0
#define CXStr__operator_plus_equal1_x                              0x910770
#define CXStr__SetString_x                                         0x912660
#define CXStr__operator_char_p_x                                   0x9101B0
#define CXStr__GetChar_x                                           0x911FB0
#define CXStr__Delete_x                                            0x911860
#define CXStr__GetUnicode_x                                        0x912020
#define CXStr__GetLength_x                                         0x47D840
#define CXStr__Mid_x                                               0x47D850
#define CXStr__Insert_x                                            0x912080
#define CXStr__FindNext_x                                          0x911CD0
#define CXStr__gFreeLists_x                                        0xCB25B8
#define CXStr__gCXStrAccess_x                                      0x1604254

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x961D90

// CXWnd
#define CXWnd__BringToTop_x                                        0x9470E0
#define CXWnd__Center_x                                            0x946C60
#define CXWnd__ClrFocus_x                                          0x946A80
#define CXWnd__Destroy_x                                           0x946B20
#define CXWnd__DoAllDrawing_x                                      0x943170
#define CXWnd__DrawChildren_x                                      0x943140
#define CXWnd__DrawColoredRect_x                                   0x9435D0
#define CXWnd__DrawTooltip_x                                       0x941C90
#define CXWnd__DrawTooltipAtPoint_x                                0x941D50
#define CXWnd__GetBorderFrame_x                                    0x943430
#define CXWnd__GetChildItem_x                                      0x9472F0
#define CXWnd__GetChildWndAt_x                                     0x947180
#define CXWnd__GetClientClipRect_x                                 0x9453E0
#define CXWnd__GetRelativeRect_x                                   0x945730
#define CXWnd__GetScreenClipRect_x                                 0x9454B0
#define CXWnd__GetScreenRect_x                                     0x945680
#define CXWnd__GetTooltipRect_x                                    0x943620
#define CXWnd__GetWindowTextA_x                                    0x49D140
#define CXWnd__IsActive_x                                          0x943D60
#define CXWnd__IsDescendantOf_x                                    0x946030
#define CXWnd__IsReallyVisible_x                                   0x946060
#define CXWnd__IsType_x                                            0x9477F0
#define CXWnd__Minimize_x                                          0x946730
#define CXWnd__Move_x                                              0x9460D0
#define CXWnd__Move1_x                                             0x946180
#define CXWnd__ProcessTransition_x                                 0x946C10
#define CXWnd__Refade_x                                            0x946430
#define CXWnd__Resize_x                                            0x9466C0
#define CXWnd__Right_x                                             0x946EA0
#define CXWnd__SetFocus_x                                          0x946A40
#define CXWnd__SetFont_x                                           0x946AB0
#define CXWnd__SetKeyTooltip_x                                     0x947600
#define CXWnd__SetMouseOver_x                                      0x944570
#define CXWnd__SetParent_x                                         0x945DE0
#define CXWnd__StartFade_x                                         0x945F20
#define CXWnd__vftable_x                                           0xB56E64
#define CXWnd__CXWnd_x                                             0x940D70
#define CXWnd__dCXWnd_x                                            0x9412B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x97D9D0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x949FE0
#define CXWndManager__DrawWindows_x                                0x94A000
#define CXWndManager__GetKeyboardFlags_x                           0x94C7C0
#define CXWndManager__HandleKeyboardMsg_x                          0x94C370
#define CXWndManager__RemoveWnd_x                                  0x94C9E0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x94CF40

// CDBStr
#define CDBStr__GetString_x                                        0x544CF0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DACE0
#define CharacterZoneClient__CastSpell_x                           0x4C01D0
#define CharacterZoneClient__Cur_HP_x                              0x4D32E0
#define CharacterZoneClient__Cur_Mana_x                            0x4DA9D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D6060
#define CharacterZoneClient__GetBaseSkill_x                        0x4D7000
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C3220
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0DE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B3A00
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3B50
#define CharacterZoneClient__GetHPRegen_x                          0x4E07E0
#define CharacterZoneClient__GetManaRegen_x                        0x4E1220
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C3F70
#define CharacterZoneClient__Max_Endurance_x                       0x65B110
#define CharacterZoneClient__Max_HP_x                              0x4D3110
#define CharacterZoneClient__Max_Mana_x                            0x65AF10
#define CharacterZoneClient__SpellDuration_x                       0x4C3AA0
#define CharacterZoneClient__TotalEffect_x                         0x4C6F90
#define CharacterZoneClient__UseSkill_x                            0x4E3010

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8DB8F0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x671460

// PcClient
#define PcClient__PcClient_x                                       0x650E50
#define PcClient__GetConLevel_x                                    0x6536E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BAC00
#define CCharacterListWnd__EnterWorld_x                            0x4BA5E0
#define CCharacterListWnd__Quit_x                                  0x4BA330
#define CCharacterListWnd__UpdateList_x                            0x4BA7D0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6355D0
#define EQ_Item__CreateItemTagString_x                             0x8B5A60
#define EQ_Item__IsStackable_x                                     0x8BA6D0
#define EQ_Item__GetImageNum_x                                     0x8B75E0
#define EQ_Item__CreateItemClient_x                                0x634800
#define EQ_Item__GetItemValue_x                                    0x8B88C0
#define EQ_Item__ValueSellMerchant_x                               0x8BC050
#define EQ_Item__IsKeyRingItem_x                                   0x8B9FD0
#define EQ_Item__CanGoInBag_x                                      0x6356F0
#define EQ_Item__IsEmpty_x                                         0x8B9B50
#define EQ_Item__GetMaxItemCount_x                                 0x8B8CE0
#define EQ_Item__GetHeldItem_x                                     0x8B74B0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8B5390
#define ItemClient__ItemClient_x                                   0x5B5200
#define ItemClient__dItemClient_x                                  0x634750

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x563760
#define EQ_LoadingS__Array_x                                       0xC3BC68

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8C54C0
#define EQ_PC__GetCombatAbility_x                                  0x8C5B30
#define EQ_PC__GetCombatAbilityTimer_x                             0x8C5BA0
#define EQ_PC__GetItemRecastTimer_x                                0x65DA70
#define EQ_PC__HasLoreItem_x                                       0x653EF0
#define EQ_PC__AlertInventoryChanged_x                             0x653020
#define EQ_PC__GetPcZoneClient_x                                   0x680470
#define EQ_PC__RemoveMyAffect_x                                    0x660CA0
#define EQ_PC__GetKeyRingItems_x                                   0x8C6430
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8C61C0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8C6730

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BD430
#define EQItemList__add_object_x                                   0x5EAA50
#define EQItemList__add_item_x                                     0x5BD990
#define EQItemList__delete_item_x                                  0x5BD9E0
#define EQItemList__FreeItemList_x                                 0x5BD8E0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x541890

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x672CE0
#define EQPlayer__dEQPlayer_x                                      0x666190
#define EQPlayer__DoAttack_x                                       0x67AC10
#define EQPlayer__EQPlayer_x                                       0x666850
#define EQPlayer__SetNameSpriteState_x                             0x66AAE0
#define EQPlayer__SetNameSpriteTint_x                              0x66B9C0
#define PlayerBase__HasProperty_j_x                                0x9AC590
#define EQPlayer__IsTargetable_x                                   0x9ACA30
#define EQPlayer__CanSee_x                                         0x9AC890
#define EQPlayer__CanSee1_x                                        0x9AC960
#define PlayerBase__GetVisibilityLineSegment_x                     0x9AC650

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67DF10
#define PlayerZoneClient__GetLevel_x                               0x6804B0
#define PlayerZoneClient__IsValidTeleport_x                        0x5EBBC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x55C560

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x675A20
#define EQPlayerManager__GetSpawnByName_x                          0x675AD0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x675B60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x638D50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x638DD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x638E10
#define KeypressHandler__ClearCommandStateArray_x                  0x63A220
#define KeypressHandler__HandleKeyDown_x                           0x63A240
#define KeypressHandler__HandleKeyUp_x                             0x63A2E0
#define KeypressHandler__SaveKeymapping_x                          0x63A730

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8D9910

// StringTable
#define StringTable__getString_x                                   0x8D4760

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65D4F0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65BA10
#define PcZoneClient__GetPcSkillLimit_x                            0x660910
#define PcZoneClient__RemovePetEffect_x                            0x660F40
#define PcZoneClient__HasAlternateAbility_x                        0x65AD40
#define PcZoneClient__CanEquipItem_x                               0x65B3F0
#define PcZoneClient__GetItemByID_x                                0x65DEE0
#define PcZoneClient__GetItemByItemClass_x                         0x65E030
#define PcZoneClient__RemoveBuffEffect_x                           0x660F60
#define PcZoneClient__BandolierSwap_x                              0x65BFC0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65DA10

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F06C0

// IconCache
#define IconCache__GetIcon_x                                       0x7327F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x72A2E0
#define CContainerMgr__CloseContainer_x                            0x72A5B0
#define CContainerMgr__OpenExperimentContainer_x                   0x72B030

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7E9A30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62D7B0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x787830
#define CLootWnd__RequestLootSlot_x                                0x786B10

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58A530
#define EQ_Spell__SpellAffects_x                                   0x58A9A0
#define EQ_Spell__SpellAffectBase_x                                0x58A760
#define EQ_Spell__IsStackable_x                                    0x4CAD10
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CAB00
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7EF0
#define EQ_Spell__IsSPAStacking_x                                  0x58B7F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58AD00
#define EQ_Spell__IsNoRemove_x                                     0x4CACF0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58B800
#define __IsResEffectSpell_x                                       0x4C9EA0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD5A0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8E3F60

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x830DA0
#define CTargetWnd__WndNotification_x                              0x8305E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8308B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x82F750

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x835400
#define CTaskWnd__ConfirmAbandonTask_x                             0x838040

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53F290
#define CTaskManager__HandleMessage_x                              0x53D730
#define CTaskManager__GetTaskStatus_x                              0x53F340
#define CTaskManager__GetElementDescription_x                      0x53F3C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x585680
#define EqSoundManager__PlayScriptMp3_x                            0x585940
#define EqSoundManager__SoundAssistPlay_x                          0x698710
#define EqSoundManager__WaveInstancePlay_x                         0x697C80

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x530800

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9685D0
#define CTextureAnimation__SetCurCell_x                            0x9683D0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56B230
#define CAltAbilityData__GetMercMaxRank_x                          0x56B1C0
#define CAltAbilityData__GetMaxRank_x                              0x560690

// CTargetRing
#define CTargetRing__Cast_x                                        0x62B8D0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x517790
#define CharacterBase__CreateItemIndex_x                           0x6339B0
#define CharacterBase__GetItemByGlobalIndex_x                      0x8EC5D0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8EC630
#define CharacterBase__GetItemPossession_x                         0x5035E0
#define CharacterBase__GetMemorizedSpell_x                         0x4CAAE0
#define CharacterBase__IsExpansionFlag_x                           0x5B6F20

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x711230
#define CCastSpellWnd__IsBardSongPlaying_x                         0x711A60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x711B10

// messages
#define msg_spell_worn_off_x                                       0x5AEEB0
#define msg_new_text_x                                             0x5A38C0
#define __msgTokenTextParam_x                                      0x5B1150
#define msgTokenText_x                                             0x5B13A0

// SpellManager
#define SpellManager__vftable_x                                    0xAFF304
#define SpellManager__SpellManager_x                               0x69BA40
#define Spellmanager__LoadTextSpells_x                             0x69C330
#define SpellManager__GetSpellByGroupAndRank_x                     0x69BC10

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9B04D0

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8E4900
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8E4B80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x780140

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x72E9D0
#define CCursorAttachment__AttachToCursor1_x                       0x72EA10
#define CCursorAttachment__Deactivate_x                            0x72FA00

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9778A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x978020
#define CEQSuiteTextureLoader__GetTexture_x                        0x977CE0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514D10
#define CFindItemWnd__WndNotification_x                            0x5157F0
#define CFindItemWnd__Update_x                                     0x516360
#define CFindItemWnd__PickupSelectedItem_x                         0x514540

// IString
#define IString__Append_x                                          0x504E00

// Camera
#define CDisplay__cameraType_x                                     0xE15380
#define EverQuest__Cameras_x                                       0xED060C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51D770
#define LootFiltersManager__GetItemFilterData_x                    0x51D080
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51D0B0
#define LootFiltersManager__SetItemLootFilter_x                    0x51D2D0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7D77D0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9B6070
#define CResolutionHandler__GetWindowedStyle_x                     0x693220

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x726F80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8F9F60
#define CDistillerInfo__Instance_x                                 0x8F9F00

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x746070
#define CGroupWnd__UpdateDisplay_x                                 0x7453C0

// ItemBase
#define ItemBase__IsLore_x                                         0x8BA080
#define ItemBase__IsLoreEquipped_x                                 0x8BA100

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EA9B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EAAF0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EAB50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688BF0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68C570

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50B180

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F7540
#define FactionManagerClient__HandleFactionMessage_x               0x4F7BB0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F8170
#define FactionManagerClient__GetMaxFaction_x                      0x4F818F
#define FactionManagerClient__GetMinFaction_x                      0x4F8140

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5035B0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x93F8A0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49C450

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x503810

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56A6F0

// CTargetManager
#define CTargetManager__Get_x                                      0x69F2D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688BF0

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A91B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BD880

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF6DCA0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x92A040

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x483470

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147478

#define CParticleSystem__Render_x                                  0x100711A0

#define CRender__RenderScene_x                                     0x10093300
#define CRender__ResetDevice_x                                     0x10092B70

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x100891C0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019930
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007B560
#define EQMain__LoginController__FlushDxKeyboard_x                 0x10015210
#define EQMain__LoginController__GiveTime_x                        0x10015270
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016D70
#define EQMain__WndProc_x                                          0x1000BF00

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10163EB0
#define EQMain__pinstCLoginViewManager_x                           0x1016A524
#define EQMain__pinstCXWndManager_x                                0x1037CA1C
#define EQMain__pinstCSidlManager_x                                0x1037CA20
#define EQMain__pinstLoginController_x                             0x1016A528
#define EQMain__pinstLoginServerAPI_x                              0x1016A518
