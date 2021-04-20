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
#define __ExpectedVersionDate                                     "Mar  4 2021"
#define __ExpectedVersionTime                                     "09:03:57"
#define __ActualVersionDate_x                                      0xB44EE4
#define __ActualVersionTime_x                                      0xB44ED8
#define __ActualVersionBuild_x                                     0xB350C4

// Memory Protection
#define __MemChecker0_x                                            0x664010
#define __MemChecker1_x                                            0x945260
#define __MemChecker2_x                                            0x6DE110
#define __MemChecker3_x                                            0x6DE080
#define __MemChecker4_x                                            0x637310
#define __EncryptPad0_x                                            0xE45F40

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDA0D10
#define __ScreenY_x                                                0xDA0D18
#define __ScreenX_x                                                0xDA0D1C
#define __ScreenXMax_x                                             0xDA0D20
#define __ScreenYMax_x                                             0xDA0D24
#define __InChatMode_x                                             0xDA0D64
#define __RunWalkState_x                                           0xDA0D68
#define DI8__Mouse_Copy_x                                          0xDA0D7C
#define __MouseLook_x                                              0xDA0DFA
#define __NetStatusToggle_x                                        0xDA0DFD
#define __pulAutoRun_x                                             0xDA0E18
#define __Clicks_x                                                 0xDA0E34
#define __RMouseHeldTime_x                                         0xDA0E9C
#define __LMouseHeldTime_x                                         0xDA0EA0
#define __ZoneType_x                                               0xDA11F8
#define __ShiftKeyDown_x                                           0xDA13F8
#define __AutoSkillArray_x                                         0xDA1C98
#define __RangeAttackReady_x                                       0xDA1F7C
#define __AttackOnAssist_x                                         0xDA20F4
#define __ShowNames_x                                              0xDA2138
#define __PCNames_x                                                0xDA2294
#define __UseTellWindows_x                                         0xDA242C
#define __pulForward_x                                             0xDA2464
#define __pulBackward_x                                            0xDA2468
#define __pulTurnRight_x                                           0xDA246C
#define __pulTurnLeft_x                                            0xDA2470
#define __pulStrafeLeft_x                                          0xDA2474
#define __pulStrafeRight_x                                         0xDA2478
#define __LastTell_x                                               0xDA2CE4
#define __ServerName_x                                             0xDD75A8
#define __DoAbilityList_x                                          0xDD75E8
#define __SocialChangedList_x                                      0xDD7630
#define __Socials_x                                                0xDD76A8
#define __Inviter_x                                                0xE3FA44
#define __Attack_x                                                 0xE3FAC7
#define __Autofire_x                                               0xE3FAC8

// Misc Globals
#define __do_loot_x                                                0x5E1A00
#define __gfMaxZoomCameraDistance_x                                0xB3CDC4
#define __gfMaxCameraDistance_x                                    0xB65504
#define __CurrentSocial_x                                          0xC5146C
#define __BindList_x                                               0xD96448
#define g_eqCommandStates_x                                        0xD971B0
#define __CommandList_x                                            0xD97D38
#define __ScreenMode_x                                             0xED345C
#define __GroupCount_x                                             0xF8713A
#define __gWorld_x                                                 0xF8734C
#define __gpbCommandEvent_x                                        0xF87458
#define __ServerHost_x                                             0xF87623
#define __Guilds_x                                                 0xF8B610
#define __MouseEventTime_x                                         0xF8D03C
#define DI8__Mouse_Check_x                                         0xF91B74
#define __heqmain_x                                                0xF94008
#define DI8__Mouse_x                                               0xF9402C
#define __HWnd_x                                                   0xF94030
#define __Mouse_x                                                  0xF940B8
#define DI8__Main_x                                                0xF940CC
#define DI8__Keyboard_x                                            0xF940D0
#define __LoginName_x                                              0xF9479C
#define __CurrentMapLabel_x                                        0xFA4ACC
#define __TargetAggroHolder_x                                      0xFA7480
#define __GroupAggro_x                                             0xFA74C0
#define __SubscriptionType_x                                       0xFD8BA8

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF879A8
#define instEQZoneInfo_x                                           0xDA0FF0
#define pinstActiveBanker_x                                        0xF87944
#define pinstActiveCorpse_x                                        0xF8793C
#define pinstActiveGMaster_x                                       0xF87940
#define pinstActiveMerchant_x                                      0xF87938
#define pinstAltAdvManager_x                                       0xED42A0
#define pinstBandageTarget_x                                       0xF87954
#define pinstCEverQuest_x                                          0xF94034
#define pinstCamActor_x                                            0xED3450
#define pinstCDBStr_x                                              0xED3028
#define pinstCDisplay_x                                            0xF850B4
#define pinstControlledMissile_x                                   0xF87998
#define pinstControlledPlayer_x                                    0xF8798C
#define pinstCResolutionHandler_x                                  0x1613A48
#define pinstCSidlManager_x                                        0x16129E4
#define pinstCXWndManager_x                                        0x16129DC
#define instDynamicZone_x                                          0xF8B4E8
#define pinstDZMember_x                                            0xF8B5F8
#define pinstDZTimerInfo_x                                         0xF8B5FC
#define pinstEqLogin_x                                             0xF940E8
#define instEQMisc_x                                               0xD8A8D8
#define pinstEQSoundManager_x                                      0xED4BB0
#define pinstEQSpellStrings_x                                      0xEC3CC8
#define instExpeditionLeader_x                                     0xF8B532
#define instExpeditionName_x                                       0xF8B572
#define pinstSGraphicsEngine_x                                     0x1613814
#define pinstGroup_x                                               0xF87136
#define pinstImeManager_x                                          0x16129E0
#define pinstLocalPC_x                                             0xF850A4
#define pinstLocalPlayer_x                                         0xF87934
#define pinstMercenaryData_x                                       0xF8EB34
#define pinstMercenaryStats_x                                      0xFA754C
#define pinstModelPlayer_x                                         0xF8794C
#define pinstRenderInterface_x                                     0x1613820
#define pinstSkillMgr_x                                            0xF90C20
#define pinstSpawnManager_x                                        0xF8F6F8
#define pinstSpellManager_x                                        0xF90E60
#define pinstSpellSets_x                                           0xE386F0
#define pinstStringTable_x                                         0xF850AC
#define pinstSwitchManager_x                                       0xF84F48
#define pinstTarget_x                                              0xF87988
#define pinstTargetObject_x                                        0xF8509C
#define pinstTargetSwitch_x                                        0xF850A0
#define pinstTaskMember_x                                          0xD8A420
#define pinstTrackTarget_x                                         0xF87990
#define pinstTradeTarget_x                                         0xF87948
#define instTributeActive_x                                        0xD8A8F9
#define pinstViewActor_x                                           0xED344C
#define pinstWorldData_x                                           0xF850B0
#define pinstZoneAddr_x                                            0xDA1290
#define pinstPlayerPath_x                                          0xF8F790
#define pinstTargetIndicator_x                                     0xF910C8
#define EQObject_Top_x                                             0xF85098

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xED3490
#define pinstCAchievementsWnd_x                                    0xED3120
#define pinstCActionsWnd_x                                         0xED3420
#define pinstCAdvancedDisplayOptionsWindow_x                       0xED342C
#define pinstCAdvancedLootWnd_x                                    0xED3424
#define pinstCAdventureLeaderboardWnd_x                            0xF9E2F0
#define pinstCAdventureRequestWnd_x                                0xF9E3A0
#define pinstCAdventureStatsWnd_x                                  0xF9E450
#define pinstCAggroMeterWnd_x                                      0xED31A8
#define pinstCAlarmWnd_x                                           0xED3488
#define pinstCAlertHistoryWnd_x                                    0xED320C
#define pinstCAlertStackWnd_x                                      0xED31DC
#define pinstCAlertWnd_x                                           0xED31E0
#define pinstCAltStorageWnd_x                                      0xF9E7B0
#define pinstCAudioTriggersWindow_x                                0xEB5FF8
#define pinstCAuraWnd_x                                            0xED3468
#define pinstCAvaZoneWnd_x                                         0xED3108
#define pinstCBandolierWnd_x                                       0xED3478
#define pinstCBankWnd_x                                            0xED31E8
#define pinstCBarterMerchantWnd_x                                  0xF9F9F0
#define pinstCBarterSearchWnd_x                                    0xF9FAA0
#define pinstCBarterWnd_x                                          0xF9FB50
#define pinstCBazaarConfirmationWnd_x                              0xED34A8
#define pinstCBazaarSearchWnd_x                                    0xED3130
#define pinstCBazaarWnd_x                                          0xED30E8
#define pinstCBlockedBuffWnd_x                                     0xED316C
#define pinstCBlockedPetBuffWnd_x                                  0xED3174
#define pinstCBodyTintWnd_x                                        0xED34BC
#define pinstCBookWnd_x                                            0xED3200
#define pinstCBreathWnd_x                                          0xED3494
#define pinstCBuffWindowNORMAL_x                                   0xED3164
#define pinstCBuffWindowSHORT_x                                    0xED3168
#define pinstCBugReportWnd_x                                       0xED311C
#define pinstCButtonWnd_x                                          0x1612C48
#define pinstCCastingWnd_x                                         0xED31A4
#define pinstCCastSpellWnd_x                                       0xED31B4
#define pinstCCharacterListWnd_x                                   0xED3148
#define pinstCChatWindowManager_x                                  0xFA05F8
#define pinstCClaimWnd_x                                           0xFA0750
#define pinstCColorPickerWnd_x                                     0xED315C
#define pinstCCombatAbilityWnd_x                                   0xED3438
#define pinstCCombatSkillsSelectWnd_x                              0xED343C
#define pinstCCompassWnd_x                                         0xED346C
#define pinstCConfirmationDialog_x                                 0xFA5618
#define pinstCContainerMgr_x                                       0xED349C
#define pinstCContextMenuManager_x                                 0x1612998
#define pinstCCursorAttachment_x                                   0xED319C
#define pinstCDynamicZoneWnd_x                                     0xFA0D18
#define pinstCEditLabelWnd_x                                       0xED30FC
#define pinstCEQMainWnd_x                                          0xFA0F60
#define pinstCEventCalendarWnd_x                                   0xED348C
#define pinstCExtendedTargetWnd_x                                  0xED31A0
#define pinstCPlayerCustomizationWnd_x                             0xED314C
#define pinstCFactionWnd_x                                         0xED31B0
#define pinstCFellowshipWnd_x                                      0xFA1160
#define pinstCFileSelectionWnd_x                                   0xED3444
#define pinstCFindItemWnd_x                                        0xED34C8
#define pinstCFindLocationWnd_x                                    0xFA12B8
#define pinstCFriendsWnd_x                                         0xED3440
#define pinstCGemsGameWnd_x                                        0xED3480
#define pinstCGiveWnd_x                                            0xED30F0
#define pinstCGroupSearchFiltersWnd_x                              0xED317C
#define pinstCGroupSearchWnd_x                                     0xFA16B0
#define pinstCGroupWnd_x                                           0xFA1760
#define pinstCGuildBankWnd_x                                       0xFA1810
#define pinstCGuildCreationWnd_x                                   0xFA18C0
#define pinstCGuildMgmtWnd_x                                       0xFA1970
#define pinstCharacterCreation_x                                   0xED3198
#define pinstCHelpWnd_x                                            0xED31D8
#define pinstCHeritageSelectionWnd_x                               0xED3150
#define pinstCHotButtonWnd_x                                       0xFA3AC8
#define pinstCHotButtonWnd1_x                                      0xFA3AC8
#define pinstCHotButtonWnd2_x                                      0xFA3ACC
#define pinstCHotButtonWnd3_x                                      0xFA3AD0
#define pinstCHotButtonWnd4_x                                      0xFA3AD4
#define pinstCIconSelectionWnd_x                                   0xED3118
#define pinstCInspectWnd_x                                         0xED3110
#define pinstCInventoryWnd_x                                       0xED31D4
#define pinstCInvSlotMgr_x                                         0xED3498
#define pinstCItemDisplayManager_x                                 0xFA4020
#define pinstCItemExpTransferWnd_x                                 0xFA4154
#define pinstCItemOverflowWnd_x                                    0xED30D0
#define pinstCJournalCatWnd_x                                      0xED34AC
#define pinstCJournalNPCWnd_x                                      0xED34A4
#define pinstCJournalTextWnd_x                                     0xED34A4
#define pinstCKeyRingWnd_x                                         0xED31E4
#define pinstCLargeDialogWnd_x                                     0xFA6298
#define pinstCLayoutCopyWnd_x                                      0xFA44A0
#define pinstCLFGuildWnd_x                                         0xFA4550
#define pinstCLoadskinWnd_x                                        0xED3484
#define pinstCLootFiltersCopyWnd_x                                 0xED2538
#define pinstCLootFiltersWnd_x                                     0xED34B0
#define pinstCLootSettingsWnd_x                                    0xED34B4
#define pinstCLootWnd_x                                            0xED3214
#define pinstCMailAddressBookWnd_x                                 0xED3140
#define pinstCMailCompositionWnd_x                                 0xED313C
#define pinstCMailIgnoreListWnd_x                                  0xED3144
#define pinstCMailWnd_x                                            0xED3138
#define pinstCManageLootWnd_x                                      0xED4720
#define pinstCMapToolbarWnd_x                                      0xED30F4
#define pinstCMapViewWnd_x                                         0xED30EC
#define pinstCMarketplaceWnd_x                                     0xED30D4
#define pinstCMerchantWnd_x                                        0xED30CC
#define pinstCMIZoneSelectWnd_x                                    0xFA4D88
#define pinstCMusicPlayerWnd_x                                     0xED347C
#define pinstCNameChangeMercWnd_x                                  0xED31CC
#define pinstCNameChangePetWnd_x                                   0xED31C8
#define pinstCNameChangeWnd_x                                      0xED3128
#define pinstCNoteWnd_x                                            0xED31D0
#define pinstCObjectPreviewWnd_x                                   0xED3134
#define pinstCOptionsWnd_x                                         0xED3160
#define pinstCOverseerWnd_x                                        0xED30C8
#define pinstCPetInfoWnd_x                                         0xED3418
#define pinstCPetitionQWnd_x                                       0xED3184
#define pinstCPlayerNotesWnd_x                                     0xED3474
#define pinstCPlayerWnd_x                                          0xED34CC
#define pinstCPopupWndManager_x                                    0xFA5618
#define pinstCProgressionSelectionWnd_x                            0xFA56C8
#define pinstCPurchaseGroupWnd_x                                   0xED30E0
#define pinstCPurchaseWnd_x                                        0xED30DC
#define pinstCPvPLeaderboardWnd_x                                  0xFA5778
#define pinstCPvPStatsWnd_x                                        0xFA5828
#define pinstCQuantityWnd_x                                        0xED31FC
#define pinstCRaceChangeWnd_x                                      0xED312C
#define pinstCRaidOptionsWnd_x                                     0xED31AC
#define pinstCRaidWnd_x                                            0xED31B8
#define pinstCRealEstateItemsWnd_x                                 0xED3158
#define pinstCRealEstateLayoutDetailsWnd_x                         0xED3194
#define pinstCRealEstateManageWnd_x                                0xED3180
#define pinstCRealEstateNeighborhoodWnd_x                          0xED3188
#define pinstCRealEstatePlotSearchWnd_x                            0xED318C
#define pinstCRealEstatePurchaseWnd_x                              0xED3190
#define pinstCRespawnWnd_x                                         0xED3470
#define pinstCRewardSelectionWnd_x                                 0xFA5F70
#define pinstCSelectorWnd_x                                        0xED30E4
#define pinstCSendMoneyWnd_x                                       0xED30F8
#define pinstCServerListWnd_x                                      0xED3448
#define pinstCSkillsSelectWnd_x                                    0xED3430
#define pinstCSkillsWnd_x                                          0xED3428
#define pinstCSocialEditWnd_x                                      0xED3114
#define pinstCSocialWnd_x                                          0xED34A0
#define pinstCSpellBookWnd_x                                       0xED31C4
#define pinstCStoryWnd_x                                           0xED34B8
#define pinstCTargetOfTargetWnd_x                                  0xFA75D0
#define pinstCTargetWnd_x                                          0xED310C
#define pinstCTaskOverlayWnd_x                                     0xED34C0
#define pinstCTaskSelectWnd_x                                      0xFA7728
#define pinstCTaskManager_x                                        0xC5C268
#define pinstCTaskTemplateSelectWnd_x                              0xFA77D8
#define pinstCTaskWnd_x                                            0xFA7888
#define pinstCTextEntryWnd_x                                       0xED3434
#define pinstCTimeLeftWnd_x                                        0xED3178
#define pinstCTipWndCONTEXT_x                                      0xFA7A8C
#define pinstCTipWndOFDAY_x                                        0xFA7A88
#define pinstCTitleWnd_x                                           0xFA7B38
#define pinstCTrackingWnd_x                                        0xED3100
#define pinstCTradeskillWnd_x                                      0xFA7CA0
#define pinstCTradeWnd_x                                           0xED30D8
#define pinstCTrainWnd_x                                           0xED341C
#define pinstCTributeBenefitWnd_x                                  0xFA7EA0
#define pinstCTributeMasterWnd_x                                   0xFA7F50
#define pinstCTributeTrophyWnd_x                                   0xFA8000
#define pinstCVideoModesWnd_x                                      0xED3124
#define pinstCVoiceMacroWnd_x                                      0xF914E0
#define pinstCVoteResultsWnd_x                                     0xED31C0
#define pinstCVoteWnd_x                                            0xED31BC
#define pinstCZoneGuideWnd_x                                       0xED31F8
#define pinstCZonePathWnd_x                                        0xED3204
#define pinstEQSuiteTextureLoader_x                                0xEA0D00
#define pinstItemIconCache_x                                       0xFA0F18
#define pinstLootFiltersManager_x                                  0xED25E8
#define pinstRewardSelectionWnd_x                                  0xFA5F70

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DCCC0
#define __CastRay2_x                                               0x5DCF50
#define __ConvertItemTags_x                                        0x5F9FC0
#define __CleanItemTags_x                                          0x47DA80
#define __CreateCascadeMenuItems_x                                 0x571280
#define __DoesFileExist_x                                          0x9481F0
#define __EQGetTime_x                                              0x944ED0
#define __ExecuteCmd_x                                             0x5D51A0
#define __FixHeading_x                                             0x9E13F0
#define __FlushDxKeyboard_x                                        0x6D9410
#define __GameLoop_x                                               0x6DCD10
#define __get_bearing_x                                            0x5DC860
#define __get_melee_range_x                                        0x5DD190
#define __GetAnimationCache_x                                      0x74B910
#define __GetGaugeValueFromEQ_x                                    0x851690
#define __GetLabelFromEQ_x                                         0x8531D0
#define __GetXTargetType_x                                         0x9E3760
#define __HandleMouseWheel_x                                       0x6DE1A0
#define __HeadingDiff_x                                            0x9E1450
#define __HelpPath_x                                               0xF8CCFC
#define __ExecuteFrontEnd_x                                        0x6D9BF0
#define __NewUIINI_x                                               0x851360
#define __ProcessGameEvents_x                                      0x6430E0
#define __ProcessKeyboardEvents_x                                  0x6DB360
#define __ProcessMouseEvents_x                                     0x6427E0
#define __SaveColors_x                                             0x571160
#define __STMLToText_x                                             0x97F270
#define __WndProc_x                                                0x6DBE20
#define CMemoryMappedFile__SetFile_x                               0xAD1B90
#define CrashDetected_x                                            0x6DB920
#define DrawNetStatus_x                                            0x6726D0
#define Expansion_HoT_x                                            0xDA20E0
#define Teleport_Table_Size_x                                      0xF874E0
#define Teleport_Table_x                                           0xF850B8
#define Util__FastTime_x                                           0x944A90
#define __eq_delete_x                                              0x9EA2B5
#define __eq_new_x                                                 0x9EA824
#define __CopyLayout_x                                             0x65F280
#define __ThrottleFrameRate_x                                      0x62C293
#define __ThrottleFrameRateEnd_x                                   0x62C2EF

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EA8A0
#define CAAWnd__Update_x                                           0x6E9BD0
#define CAAWnd__UpdateSelected_x                                   0x6E6F40

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B190
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B010
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495700
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494940

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57A160
#define AltAdvManager__IsAbilityReady_x                            0x578D50
#define AltAdvManager__GetAAById_x                                 0x5790F0
#define AltAdvManager__CanTrainAbility_x                           0x579160
#define AltAdvManager__CanSeeAbility_x                             0x5794F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CD870
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC170
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC350
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C0DD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D11F0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CA850
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF240
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB90
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE2A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E11C0
#define CharacterZoneClient__GetEffect_x                           0x4C0D10
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CBF10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B68B0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B85E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E10C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0FC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CBFB0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C4D10
#define CharacterZoneClient__GetModCap_x                           0x4EE1A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CBE60
#define CharacterZoneClient__HasSkill_x                            0x4DC960
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8610
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE0A0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA470
#define CharacterZoneClient__RemovePCAffectex_x                    0x4C9FF0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x706E00
#define CBankWnd__WndNotification_x                                0x706BA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711820

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C480
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A450

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x715E50

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x97C830
#define CButtonWnd__CButtonWnd_x                                   0x97B1A0
#define CButtonWnd__dCButtonWnd_x                                  0x97B440
#define CButtonWnd__vftable_x                                      0xB7FE18

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x7390D0
#define CChatWindowManager__InitContextMenu_x                      0x731FC0
#define CChatWindowManager__FreeChatWindow_x                       0x737CA0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x738DB0
#define CChatWindowManager__CreateChatWindow_x                     0x7382D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2050

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x739A30
#define CChatWindow__Clear_x                                       0x73AE80
#define CChatWindow__WndNotification_x                             0x73B600
#define CChatWindow__AddHistory_x                                  0x73A6E0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x992570
#define CContextMenu__dCContextMenu_x                              0x9927A0
#define CContextMenu__AddMenuItem_x                                0x9927B0
#define CContextMenu__RemoveMenuItem_x                             0x992AB0
#define CContextMenu__RemoveAllMenuItems_x                         0x992AD0
#define CContextMenu__CheckMenuItem_x                              0x992B30
#define CContextMenu__SetMenuItem_x                                0x9929E0
#define CContextMenu__AddSeparator_x                               0x992940

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9930D0
#define CContextMenuManager__RemoveMenu_x                          0x993140
#define CContextMenuManager__PopupMenu_x                           0x993200
#define CContextMenuManager__Flush_x                               0x993070
#define CContextMenuManager__GetMenu_x                             0x49D4D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7458E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x91F5D0
#define CChatService__GetFriendName_x                              0x91F5E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x98F650
#define CComboWnd__Draw_x                                          0x98EAF0
#define CComboWnd__GetCurChoice_x                                  0x98F420
#define CComboWnd__GetListRect_x                                   0x98EFA0
#define CComboWnd__GetTextRect_x                                   0x98F6B0
#define CComboWnd__InsertChoice_x                                  0x98F130
#define CComboWnd__SetColors_x                                     0x98F100
#define CComboWnd__SetChoice_x                                     0x98F400
#define CComboWnd__GetItemCount_x                                  0x98F430
#define CComboWnd__GetCurChoiceText_x                              0x98F460
#define CComboWnd__GetChoiceText_x                                 0x98F440
#define CComboWnd__InsertChoiceAtIndex_x                           0x98F1C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x742F80
#define CContainerWnd__vftable_x                                   0xB4E104
#define CContainerWnd__SetContainer_x                              0x7447B0

// CDisplay
#define CDisplay__cameraType_x                                     0xED3210
#define CDisplay__ZoneMainUI_x                                     0x56BD30
#define CDisplay__PreZoneMainUI_x                                  0x56BD40
#define CDisplay__CleanGameUI_x                                    0x570F40
#define CDisplay__GetClickedActor_x                                0x563C10
#define CDisplay__GetUserDefinedColor_x                            0x55B980
#define CDisplay__GetWorldFilePath_x                               0x565720
#define CDisplay__is3dON_x                                         0x5604A0
#define CDisplay__ReloadUI_x                                       0x56B050
#define CDisplay__WriteTextHD2_x                                   0x560290
#define CDisplay__TrueDistance_x                                   0x5675F0
#define CDisplay__SetViewActor_x                                   0x563530
#define CDisplay__GetFloorHeight_x                                 0x560560
#define CDisplay__SetRenderWindow_x                                0x55EEE0
#define CDisplay__ToggleScreenshotMode_x                           0x563000
#define CDisplay__RealRender_World_x                               0x55E1D0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9B4C20

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x996070
#define CEditWnd__EnsureCaretVisible_x                             0x998390
#define CEditWnd__GetCaretPt_x                                     0x997220
#define CEditWnd__GetCharIndexPt_x                                 0x996FE0
#define CEditWnd__GetDisplayString_x                               0x996E90
#define CEditWnd__GetHorzOffset_x                                  0x9955F0
#define CEditWnd__GetLineForPrintableChar_x                        0x9982A0
#define CEditWnd__GetSelStartPt_x                                  0x997280
#define CEditWnd__GetSTMLSafeText_x                                0x996CA0
#define CEditWnd__PointFromPrintableChar_x                         0x997F10
#define CEditWnd__ReplaceSelection_x                               0x997AD0
#define CEditWnd__SelectableCharFromPoint_x                        0x998060
#define CEditWnd__SetEditable_x                                    0x997350
#define CEditWnd__SetWindowText_x                                  0x9969F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62EA70
#define CEverQuest__ClickedPlayer_x                                0x620060
#define CEverQuest__CreateTargetIndicator_x                        0x640050
#define CEverQuest__DeleteTargetIndicator_x                        0x6400E0
#define CEverQuest__DoTellWindow_x                                 0x4F2150
#define CEverQuest__OutputTextToLog_x                              0x4F2420
#define CEverQuest__DropHeldItemOnGround_x                         0x615050
#define CEverQuest__dsp_chat_x                                     0x4F27B0
#define CEverQuest__trimName_x                                     0x63B850
#define CEverQuest__Emote_x                                        0x62F130
#define CEverQuest__EnterZone_x                                    0x628E70
#define CEverQuest__GetBodyTypeDesc_x                              0x634590
#define CEverQuest__GetClassDesc_x                                 0x634BD0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6351D0
#define CEverQuest__GetDeityDesc_x                                 0x63E800
#define CEverQuest__GetLangDesc_x                                  0x635390
#define CEverQuest__GetRaceDesc_x                                  0x634BB0
#define CEverQuest__InterpretCmd_x                                 0x63EE70
#define CEverQuest__LeftClickedOnPlayer_x                          0x6195D0
#define CEverQuest__LMouseUp_x                                     0x617600
#define CEverQuest__RightClickedOnPlayer_x                         0x61A1C0
#define CEverQuest__RMouseUp_x                                     0x6188C0
#define CEverQuest__SetGameState_x                                 0x614DD0
#define CEverQuest__UPCNotificationFlush_x                         0x63B770
#define CEverQuest__IssuePetCommand_x                              0x636990
#define CEverQuest__ReportSuccessfulHeal_x                         0x62FF60
#define CEverQuest__ReportSuccessfulHit_x                          0x630A40

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756870
#define CGaugeWnd__CalcLinesFillRect_x                             0x7568D0
#define CGaugeWnd__Draw_x                                          0x755E90

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4400
#define CGuild__GetGuildName_x                                     0x4B2C20
#define CGuild__GetGuildIndex_x                                    0x4B3340

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x773C80

//CHotButton
#define CHotButton__SetButtonSize_x                                0x653A90
#define CHotButton__SetCheck_x                                     0x6536D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x780CB0
#define CInvSlotMgr__MoveItem_x                                    0x77F850
#define CInvSlotMgr__SelectSlot_x                                  0x780D70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E0A0
#define CInvSlot__SliderComplete_x                                 0x77B580
#define CInvSlot__GetItemBase_x                                    0x77AE40
#define CInvSlot__UpdateItem_x                                     0x77B030

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7829C0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x781BA0
#define CInvSlotWnd__HandleLButtonUp_x                             0x782540

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x84B9B0
#define CItemDisplayWnd__UpdateStrings_x                           0x791A40
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78B410
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78B990
#define CItemDisplayWnd__SetItem_x                                 0x792040
#define CItemDisplayWnd__AboutToShow_x                             0x7916A0
#define CItemDisplayWnd__WndNotification_x                         0x7935D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x792E70
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7906C0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x7914C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x880C30

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x797F10

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52A930

// CLabel
#define CLabel__UpdateText_x                                       0x79E630

// CListWnd
#define CListWnd__CListWnd_x                                       0x9634C0
#define CListWnd__dCListWnd_x                                      0x9637B0
#define CListWnd__vftable_x                                        0xB7F700
#define CListWnd__AddColumn_x                                      0x968180
#define CListWnd__AddColumn1_x                                     0x9682A0
#define CListWnd__AddLine_x                                        0x968610
#define CListWnd__AddString_x                                      0x968410
#define CListWnd__CalculateFirstVisibleLine_x                      0x967F30
#define CListWnd__CalculateVSBRange_x                              0x967D10
#define CListWnd__ClearSel_x                                       0x968F00
#define CListWnd__ClearAllSel_x                                    0x968F50
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9699E0
#define CListWnd__Compare_x                                        0x967650
#define CListWnd__Draw_x                                           0x963970
#define CListWnd__DrawColumnSeparators_x                           0x966460
#define CListWnd__DrawHeader_x                                     0x9668B0
#define CListWnd__DrawItem_x                                       0x966EF0
#define CListWnd__DrawLine_x                                       0x9665C0
#define CListWnd__DrawSeparator_x                                  0x966500
#define CListWnd__EnableLine_x                                     0x965D30
#define CListWnd__EnsureVisible_x                                  0x969910
#define CListWnd__ExtendSel_x                                      0x968E40
#define CListWnd__GetColumnTooltip_x                               0x9658B0
#define CListWnd__GetColumnMinWidth_x                              0x965920
#define CListWnd__GetColumnWidth_x                                 0x965830
#define CListWnd__GetCurSel_x                                      0x9651D0
#define CListWnd__GetItemAtPoint_x                                 0x965FA0
#define CListWnd__GetItemAtPoint1_x                                0x966010
#define CListWnd__GetItemData_x                                    0x965250
#define CListWnd__GetItemHeight_x                                  0x965600
#define CListWnd__GetItemIcon_x                                    0x9653D0
#define CListWnd__GetItemRect_x                                    0x965E20
#define CListWnd__GetItemText_x                                    0x965290
#define CListWnd__GetSelList_x                                     0x968FA0
#define CListWnd__GetSeparatorRect_x                               0x966280
#define CListWnd__InsertLine_x                                     0x968A70
#define CListWnd__RemoveLine_x                                     0x968C90
#define CListWnd__SetColors_x                                      0x967CF0
#define CListWnd__SetColumnJustification_x                         0x967A20
#define CListWnd__SetColumnLabel_x                                 0x9683B0
#define CListWnd__SetColumnWidth_x                                 0x967930
#define CListWnd__SetCurSel_x                                      0x968D90
#define CListWnd__SetItemColor_x                                   0x9695E0
#define CListWnd__SetItemData_x                                    0x9695A0
#define CListWnd__SetItemText_x                                    0x9691C0
#define CListWnd__ShiftColumnSeparator_x                           0x967AE0
#define CListWnd__Sort_x                                           0x9677E0
#define CListWnd__ToggleSel_x                                      0x968DC0
#define CListWnd__SetColumnsSizable_x                              0x967B80
#define CListWnd__SetItemWnd_x                                     0x969460
#define CListWnd__GetItemWnd_x                                     0x965420
#define CListWnd__SetItemIcon_x                                    0x969240
#define CListWnd__CalculateCustomWindowPositions_x                 0x968030
#define CListWnd__SetVScrollPos_x                                  0x967910

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7B5A90

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B0CE0
#define MapViewMap__dMapViewMap_x                                  0x7B0E30
#define MapViewMap__vftable_x                                      0xB55478
#define MapViewMap__Clear_x                                        0x7B1740
#define MapViewMap__SaveEx_x                                       0x7B4C7F
#define MapViewMap__SetZoom_x                                      0x7BA8C0
#define MapViewMap__HandleLButtonDown_x                            0x7B0F40
#define MapViewMap__GetWorldCoordinates_x                          0x7B40B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7D8C80
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7D95E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7D9C30
#define CMerchantWnd__SelectRecoverySlot_x                         0x7DCE00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7D7710
#define CMerchantWnd__SelectBuySellSlot_x                          0x7E2F80
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7D88D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8EC620
#define CPacketScrambler__hton_x                                   0x8EC610

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x98A8F0
#define CSidlManagerBase__CreatePageWnd_x                          0x98A0F0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9855E0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x985570
#define CSidlManagerBase__FindAnimation1_x                         0x985860
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x985C30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x985A60
#define CSidlManagerBase__CreateLabel_x                            0x841720
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9890E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x989370
#define CSidlManagerBase__CreateXWnd_x                             0x9893B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x841B40
#define CSidlManager__CreateXWnd_x                                 0x8411A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x9815F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x9814F0
#define CSidlScreenWnd__ConvertToRes_x                             0x9AEE70
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x980E70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x980B60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x980C30
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x980D00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x981E70
#define CSidlScreenWnd__EnableIniStorage_x                         0x982350
#define CSidlScreenWnd__GetChildItem_x                             0x9822D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x982060
#define CSidlScreenWnd__HandleLButtonUp_x                          0x970AC0
#define CSidlScreenWnd__Init1_x                                    0x980630
#define CSidlScreenWnd__LoadIniInfo_x                              0x9823A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x982F50
#define CSidlScreenWnd__LoadSidlScreen_x                           0x97FA40
#define CSidlScreenWnd__m_layoutCopy_x                             0x1612868
#define CSidlScreenWnd__StoreIniInfo_x                             0x982AD0
#define CSidlScreenWnd__StoreIniVis_x                              0x982E40
#define CSidlScreenWnd__vftable_x                                  0xB800C4
#define CSidlScreenWnd__WndNotification_x                          0x981D40

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C10E0
#define CSkillMgr__GetSkillCap_x                                   0x6C12B0
#define CSkillMgr__GetNameToken_x                                  0x6C0920
#define CSkillMgr__IsActivatedSkill_x                              0x6C0A10
#define CSkillMgr__IsCombatSkill_x                                 0x6C0980

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9941D0
#define CSliderWnd__SetValue_x                                     0x994000
#define CSliderWnd__SetNumTicks_x                                  0x994060

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x848390

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x99D5C0
#define CStmlWnd__CalculateHSBRange_x                              0x99E510
#define CStmlWnd__CalculateVSBRange_x                              0x99E490
#define CStmlWnd__CanBreakAtCharacter_x                            0x9A3340
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9A3FE0
#define CStmlWnd__ForceParseNow_x                                  0x99DB30
#define CStmlWnd__GetNextTagPiece_x                                0x9A32A0
#define CStmlWnd__GetVisibleText_x                                 0x99DB50
#define CStmlWnd__InitializeWindowVariables_x                      0x9A3E30
#define CStmlWnd__MakeStmlColorTag_x                               0x99CC60
#define CStmlWnd__MakeWndNotificationTag_x                         0x99CCD0
#define CStmlWnd__SetSTMLText_x                                    0x99BA40
#define CStmlWnd__StripFirstSTMLLines_x                            0x9A5200
#define CStmlWnd__UpdateHistoryString_x                            0x9A41E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x99A990
#define CTabWnd__DrawCurrentPage_x                                 0x99B320
#define CTabWnd__DrawTab_x                                         0x99AF10
#define CTabWnd__GetCurrentPage_x                                  0x99A0F0
#define CTabWnd__GetCurrentTabIndex_x                              0x99A0E0
#define CTabWnd__GetPageFromTabIndex_x                             0x99AE50
#define CTabWnd__GetPageInnerRect_x                                0x99A320
#define CTabWnd__GetTabInnerRect_x                                 0x99A260
#define CTabWnd__GetTabRect_x                                      0x99A120
#define CTabWnd__InsertPage_x                                      0x99A510
#define CTabWnd__RemovePage_x                                      0x99A660
#define CTabWnd__SetPage_x                                         0x99A3A0
#define CTabWnd__SetPageRect_x                                     0x99A890
#define CTabWnd__UpdatePage_x                                      0x99AD00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x999AE0
#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x999A80


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC4A0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x96CF50
#define CTextureFont__DrawWrappedText1_x                           0x96CE80
#define CTextureFont__DrawWrappedText2_x                           0x96D040
#define CTextureFont__GetTextExtent_x                              0x96D250

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9AB920

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x958F70

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x544360
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x940E20
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x941060
#define CXStr__operator_equal1_x                                   0x9410A0
#define CXStr__operator_plus_equal1_x                              0x941B00
#define CXStr__SetString_x                                         0x9439A0
#define CXStr__operator_char_p_x                                   0x941550
#define CXStr__GetChar_x                                           0x943300
#define CXStr__Delete_x                                            0x942BD0
#define CXStr__GetUnicode_x                                        0x943370
#define CXStr__Insert_x                                            0x9433D0
#define CXStr__FindNext_x                                          0x943020
#define CXStr__gFreeLists_x                                        0xEA06D8
#define CXStr__gCXStrAccess_x                                      0x16120F0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9921D0

// CXWnd
#define CXWnd__BringToTop_x                                        0x9743F0
#define CXWnd__ClrFocus_x                                          0x973D80
#define CXWnd__Destroy_x                                           0x973E20
#define CXWnd__DoAllDrawing_x                                      0x970130
#define CXWnd__DrawChildren_x                                      0x970100
#define CXWnd__DrawColoredRect_x                                   0x9706C0
#define CXWnd__DrawTooltip_x                                       0x96E660
#define CXWnd__DrawTooltipAtPoint_x                                0x96E720
#define CXWnd__GetBorderFrame_x                                    0x970360
#define CXWnd__GetChildItem_x                                      0x974610
#define CXWnd__GetChildWndAt_x                                     0x974490
#define CXWnd__GetClientClipRect_x                                 0x972650
#define CXWnd__GetRelativeRect_x                                   0x972980
#define CXWnd__GetScreenClipRect_x                                 0x972720
#define CXWnd__GetScreenRect_x                                     0x9728D0
#define CXWnd__GetTooltipRect_x                                    0x970710
#define CXWnd__GetWindowTextA_x                                    0x4F1FF0
#define CXWnd__IsActive_x                                          0x970E40
#define CXWnd__IsDescendantOf_x                                    0x973310
#define CXWnd__IsReallyVisible_x                                   0x973340
#define CXWnd__IsType_x                                            0x974BD0
#define CXWnd__Minimize_x                                          0x973A70
#define CXWnd__Move_x                                              0x9733A0
#define CXWnd__Move1_x                                             0x973490
#define CXWnd__ProcessTransition_x                                 0x973F00
#define CXWnd__Refade_x                                            0x973740
#define CXWnd__Resize_x                                            0x973A10
#define CXWnd__Right_x                                             0x9741E0
#define CXWnd__SetFocus_x                                          0x973D40
#define CXWnd__SetFont_x                                           0x973DB0
#define CXWnd__SetKeyTooltip_x                                     0x9749B0
#define CXWnd__SetMouseOver_x                                      0x971780
#define CXWnd__SetParent_x                                         0x973020
#define CXWnd__StartFade_x                                         0x9731F0
#define CXWnd__vftable_x                                           0xB7FB34
#define CXWnd__CXWnd_x                                             0x96D560
#define CXWnd__dCXWnd_x                                            0x96DC40

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9AFEC0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x9773B0
#define CXWndManager__DrawWindows_x                                0x977500
#define CXWndManager__GetKeyboardFlags_x                           0x979DC0
#define CXWndManager__HandleKeyboardMsg_x                          0x9799A0
#define CXWndManager__RemoveWnd_x                                  0x97A090
#define CXWndManager__RemovePendingDeletionWnd_x                   0x97A550

// CDBStr
#define CDBStr__GetString_x                                        0x55A4B0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1A20
#define CharacterZoneClient__CastSpell_x                           0x4C5690
#define CharacterZoneClient__Cur_HP_x                              0x4D95D0
#define CharacterZoneClient__Cur_Mana_x                            0x4E16F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DC720
#define CharacterZoneClient__GetBaseSkill_x                        0x4DD6C0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C8D00
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E86B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B81F0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8340
#define CharacterZoneClient__GetHPRegen_x                          0x4E80F0
#define CharacterZoneClient__GetManaRegen_x                        0x4E8AF0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9B30
#define CharacterZoneClient__Max_Endurance_x                       0x682210
#define CharacterZoneClient__Max_HP_x                              0x4D9400
#define CharacterZoneClient__Max_Mana_x                            0x682000
#define CharacterZoneClient__SpellDuration_x                       0x4C9570
#define CharacterZoneClient__TotalEffect_x                         0x4CD180
#define CharacterZoneClient__UseSkill_x                            0x4EAB10

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x90CA30

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699C90

// PcClient
#define PcClient__PcClient_x                                       0x677590
#define PcClient__GetConLevel_x                                    0x67A320

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BFCA0
#define CCharacterListWnd__EnterWorld_x                            0x4BF670
#define CCharacterListWnd__Quit_x                                  0x4BF390
#define CCharacterListWnd__UpdateList_x                            0x4BF860

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6598B0
#define EQ_Item__CreateItemTagString_x                             0x8E5680
#define EQ_Item__IsStackable_x                                     0x8EA680
#define EQ_Item__GetImageNum_x                                     0x8E7360
#define EQ_Item__CreateItemClient_x                                0x658850
#define EQ_Item__GetItemValue_x                                    0x8E8660
#define EQ_Item__ValueSellMerchant_x                               0x8EC350
#define EQ_Item__IsKeyRingItem_x                                   0x8E9E70
#define EQ_Item__CanGemFitInSlot_x                                 0x8E4E90
#define EQ_Item__CanGoInBag_x                                      0x6599D0
#define EQ_Item__IsEmpty_x                                         0x8E9920
#define EQ_Item__GetMaxItemCount_x                                 0x8E8A60
#define EQ_Item__GetHeldItem_x                                     0x8E7220
#define ItemClient__dItemClient_x                                  0x6587A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57AF70
#define EQ_LoadingS__Array_x                                       0xD8ED00

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8F6320
#define EQ_PC__GetCombatAbility_x                                  0x8F68A0
#define EQ_PC__GetCombatAbilityTimer_x                             0x8F6910
#define EQ_PC__GetItemRecastTimer_x                                0x685150
#define EQ_PC__HasLoreItem_x                                       0x67ACD0
#define EQ_PC__AlertInventoryChanged_x                             0x679BE0
#define EQ_PC__GetPcZoneClient_x                                   0x6AA3A0
#define EQ_PC__RemoveMyAffect_x                                    0x688670
#define EQ_PC__GetKeyRingItems_x                                   0x8F73A0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8F6F00
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8F74F0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D9D90
#define EQItemList__add_object_x                                   0x609ED0
#define EQItemList__add_item_x                                     0x5DA370
#define EQItemList__delete_item_x                                  0x5DA3C0
#define EQItemList__FreeItemList_x                                 0x5DA2D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5565F0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B6C0
#define EQPlayer__dEQPlayer_x                                      0x68DF70
#define EQPlayer__DoAttack_x                                       0x6A40D0
#define EQPlayer__EQPlayer_x                                       0x68E7C0
#define EQPlayer__SetNameSpriteState_x                             0x692D70
#define EQPlayer__SetNameSpriteTint_x                              0x693C40
#define PlayerBase__HasProperty_j_x                                0x9DF7C0
#define EQPlayer__IsTargetable_x                                   0x9DFD20
#define EQPlayer__CanSee_x                                         0x9DFB10
#define EQPlayer__CanSee1_x                                        0x9DFBE0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9DF880

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7E90
#define PlayerZoneClient__GetLevel_x                               0x6AA3E0
#define PlayerZoneClient__IsValidTeleport_x                        0x60B390
#define PlayerZoneClient__LegalPlayerRace_x                        0x572F20

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E880
#define EQPlayerManager__GetSpawnByName_x                          0x69E930
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E9C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65D240
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65D310
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65D350
#define KeypressHandler__ClearCommandStateArray_x                  0x65E810
#define KeypressHandler__HandleKeyDown_x                           0x65E830
#define KeypressHandler__HandleKeyUp_x                             0x65E8D0
#define KeypressHandler__SaveKeymapping_x                          0x65EE80

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x90A8C0

// StringTable
#define StringTable__getString_x                                   0x9057A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x684B50
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x682D00
#define PcZoneClient__GetPcSkillLimit_x                            0x6882C0
#define PcZoneClient__RemovePetEffect_x                            0x688920
#define PcZoneClient__HasAlternateAbility_x                        0x681E60
#define PcZoneClient__CanEquipItem_x                               0x682510
#define PcZoneClient__GetItemByID_x                                0x685620
#define PcZoneClient__GetItemByItemClass_x                         0x685760
#define PcZoneClient__RemoveBuffEffect_x                           0x6889D0
#define PcZoneClient__BandolierSwap_x                              0x6832C0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6850F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60FEF0

// IconCache
#define IconCache__GetIcon_x                                       0x74B2B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x741E90
#define CContainerMgr__CloseContainer_x                            0x742170
#define CContainerMgr__OpenExperimentContainer_x                   0x742CD0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x810C40

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651E50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7A6970
#define CLootWnd__RequestLootSlot_x                                0x7A5BA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5420
#define EQ_Spell__SpellAffects_x                                   0x5A5920
#define EQ_Spell__SpellAffectBase_x                                0x5A5640
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0B80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0B30
#define EQ_Spell__IsSPAStacking_x                                  0x5A6830
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A5C80
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A6840
#define __IsResEffectSpell_x                                       0x4D0330

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B11C0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x915340

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x85D5B0
#define CTargetWnd__WndNotification_x                              0x85CD40
#define CTargetWnd__RefreshTargetBuffs_x                           0x85D0A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x85BB20

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x862130
#define CTaskWnd__ConfirmAbandonTask_x                             0x865200

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x5541B0
#define CTaskManager__HandleMessage_x                              0x5520A0
#define CTaskManager__GetTaskStatus_x                              0x554260
#define CTaskManager__GetElementDescription_x                      0x5542E0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0050
#define EqSoundManager__PlayScriptMp3_x                            0x5A0250
#define EqSoundManager__SoundAssistPlay_x                          0x6C55A0
#define EqSoundManager__WaveInstancePlay_x                         0x6C4A90

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544010

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x999140
#define CTextureAnimation__SetCurCell_x                            0x998F00

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583530
#define CAltAbilityData__GetMercMaxRank_x                          0x5834C0
#define CAltAbilityData__GetMaxRank_x                              0x5778D0

// CTargetRing
#define CTargetRing__Cast_x                                        0x64F660

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x645D50
#define CharacterBase__GetItemByGlobalIndex_x                      0x91CEC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x91CF10
#define CharacterBase__GetItemPossession_x                         0x658680
#define CharacterBase__GetMemorizedSpell_x                         0x6586A0
#define CharacterBase__IsExpansionFlag_x                           0x5D39F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726D40
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727600
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7276B0

// messages
#define msg_spell_worn_off_x                                       0x5CB320
#define msg_new_text_x                                             0x5BF0F0
#define __msgTokenTextParam_x                                      0x5CD790
#define msgTokenText_x                                             0x5CDBA0

// SpellManager
#define SpellManager__vftable_x                                    0xB2C2FC
#define SpellManager__SpellManager_x                               0x6C91D0
#define Spellmanager__LoadTextSpells_x                             0x6C9AD0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C93A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9E4010

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x915D40
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x916090

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x79EAA0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746B60
#define CCursorAttachment__AttachToCursor1_x                       0x746BA0
#define CCursorAttachment__Deactivate_x                            0x748130

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9A9D90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9AA4F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9AA170

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5242C0
#define CFindItemWnd__WndNotification_x                            0x525180
#define CFindItemWnd__Update_x                                     0x525D40
#define CFindItemWnd__PickupSelectedItem_x                         0x5239C0

// IString
#define IString__Append_x                                          0x513590

// Camera
#define EverQuest__Cameras_x                                       0xDA2438

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52EE70
#define LootFiltersManager__GetItemFilterData_x                    0x52E7A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52E7D0
#define LootFiltersManager__SetItemLootFilter_x                    0x52E9E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7FD720

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9E9CD0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFA20

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E820

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x921240
#define CDistillerInfo__Instance_x                                 0x921180

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761410
#define CGroupWnd__UpdateDisplay_x                                 0x760660

// ItemBase
#define ItemBase__IsLore_x                                         0x8E9F10
#define ItemBase__IsLoreEquipped_x                                 0x8E9F80

#define MultipleItemMoveManager__ProcessMove_x                     0x66E570

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609E30
#define EQPlacedItemManager__GetItemByGuid_x                       0x609F70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609FD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4150
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8A40

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x519D60

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504B10
#define FactionManagerClient__HandleFactionMessage_x               0x505330
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505B50
#define FactionManagerClient__GetMaxFaction_x                      0x505B6F
#define FactionManagerClient__GetMinFaction_x                      0x505B20

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511720

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x96BBE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49DEE0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511990

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5826F0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CD150

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4150

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC260

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA270

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE3FACC

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x955340

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240
