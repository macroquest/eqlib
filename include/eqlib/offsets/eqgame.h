/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#define __ClientDate                                               20251119u
#define __ExpectedVersionDate                                     "Nov 19 2025"
#define __ExpectedVersionTime                                     "04:21:47"
#define __ActualVersionDate_x                                      0x1409708E8
#define __ActualVersionTime_x                                      0x1409708D8
#define __ActualVersionBuild_x                                     0x140905A90

// Memory Protection
#define __MemChecker0_x                                            0x1402C5970
#define __MemChecker1_x                                            0x140592CC0
#define __MemChecker4_x                                            0x140293120
#define __EncryptPad0_x                                            0x140D43F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7C8C0
#define instEQZoneInfo_x                                           0x140E7CAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140226F80
#define __gfMaxZoomCameraDistance_x                                0x140906D38
#define __gfMaxCameraDistance_x                                    0x140AB0C84
#define __CurrentSocial_x                                          0x140BFF95C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3B720
#define g_eqCommandStates_x                                        0x140D3C7C0
#define __CommandList_x                                            0x140D3CA00
#define __ScreenMode_x                                             0x140DC422C
#define __gWorld_x                                                 0x140E773E8
#define __gpbCommandEvent_x                                        0x140E74E94
#define __ServerHost_x                                             0x140E75098
#define __Guilds_x                                                 0x140E7B470
#define __MemCheckBitmask_x                                        0x140E7CDFF
#define __MemCheckActive_x                                         0x140E7E515
#define __MouseEventTime_x                                         0x140EF1E88
#define DI8__MouseState_x                                          0x140EF6108
#define __heqmain_x                                                0x140EF85A8
#define DI8__Mouse_x                                               0x140EF6058
#define __HWnd_x                                                   0x140EF60E0
#define __Mouse_x                                                  0x140EF6014
#define DI8__Keyboard_x                                            0x140EF6030
#define __LoginName_x                                              0x140EF8C8C
#define __CurrentMapLabel_x                                        0x140F0C7A0
#define __LabelCache_x                                             0x140F0D370
#define __ChatFilterDefs_x                                         0x140A4AB50
#define Teleport_Table_Size_x                                      0x140E74F2C
#define Teleport_Table_x                                           0x140E753B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E77800
#define pinstActiveBanker_x                                        0x140E74DD8
#define pinstActiveCorpse_x                                        0x140E74DC8
#define pinstActiveGMaster_x                                       0x140E74DD0
#define pinstActiveMerchant_x                                      0x140E74DC0
#define pinstAltAdvManager_x                                       0x140DC5010
#define pinstCEverQuest_x                                          0x140EF6050
#define pinstCamActor_x                                            0x140DC4218
#define pinstCDBStr_x                                              0x140DC3DC0
#define pinstCDisplay_x                                            0x140E74E98
#define pinstControlledPlayer_x                                    0x140E74E68
#define pinstCResolutionHandler_x                                  0x140F1DBA8
#define pinstCSidlManager_x                                        0x140F1E920
#define pinstCXWndManager_x                                        0x140F1E918
#define instDynamicZone_x                                          0x140E7B330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7B37E
#define instExpeditionName_x                                       0x140E7B3BE
#define pinstDZMember_x                                            0x140E7B448
#define pinstDZTimerInfo_x                                         0x140E7B450
#define pinstEqLogin_x                                             0x140EF85D0
#define instTribute_x                                              0x140D36D60
#define pinstDeviceInputProxy_x                                    0x140E7C91C
#define pinstEQSoundManager_x                                      0x140DC5390
#define pinstEQSpellStrings_x                                      0x140DA8950
#define pinstSGraphicsEngine_x                                     0x140F1D938
#define pinstLocalPC_x                                             0x140E773D8
#define pinstLocalPlayer_x                                         0x140E74DB8
#define pinstCMercenaryClientManager_x                             0x140EF37A8
#define pinstModelPlayer_x                                         0x140E74DE8
#define pinstRenderInterface_x                                     0x140F1D950
#define pinstSkillMgr_x                                            0x140EF5458
#define pinstSpawnManager_x                                        0x140EF3B60
#define pinstSpellManager_x                                        0x140EF54C0
#define pinstStringTable_x                                         0x140E773E0
#define pinstSwitchManager_x                                       0x140E74CC0
#define pinstTarget_x                                              0x140E74E60
#define pinstTaskMember_x                                          0x140D36D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E74DE0
#define instTributeActive_x                                        0x140D36D89
#define pinstViewActor_x                                           0x140DC4210
#define pinstWorldData_x                                           0x140E74E80
#define pinstPlayerPath_x                                          0x140EF3B88
#define pinstTargetIndicator_x                                     0x140EF5570
#define EQObject_Top_x                                             0x140E74F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F09900
#define pinstCContainerMgr_x                                       0x140DC4358
#define pinstCContextMenuManager_x                                 0x140F1E600
#define pinstCInvSlotMgr_x                                         0x140DC4338
#define pinstCItemDisplayManager_x                                 0x140F0C370
#define pinstCPopupWndManager_x                                    0x140F0CC00
#define pinstCSpellDisplayMgr_x                                    0x140F0D250
#define pinstCTaskManager_x                                        0x140BFFC90
#define pinstEQSuiteTextureLoader_x                                0x140D4D620
#define pinstItemIconCache_x                                       0x140F09C60
#define pinstLootFiltersManager_x                                  0x140DC3808
#define pinstGFViewListener_x                                      0x140F1DDD8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140250AE0
#define __CastRay_x                                                0x140248F60
#define __CastRay2_x                                               0x140248C60
#define __compress_block_x                                         0x140548090
#define __ConvertItemTags_x                                        0x1402493C0
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x140191CC0
#define __decompress_block_x                                       0x14058E4D0
#define __DoesFileExist_x                                          0x140596B70
#define __EQGetTime_x                                              0x140593270
#define __ExecuteCmd_x                                             0x14021E510
#define __FixHeading_x                                             0x14064D5D0
#define __FlushDxKeyboard_x                                        0x1403497F0
#define __get_bearing_x                                            0x140252D10
#define __get_melee_range_x                                        0x140252E00
#define __GetAnimationCache_x                                      0x1403CB300
#define __GetGaugeValueFromEQ_x                                    0x140507B20
#define __GetLabelFromEQ_x                                         0x140509120
#define __GetXTargetType_x                                         0x14064E8B0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064D650
#define __HelpPath_x                                               0x140EF1D50   // Why?
#define __NewUIINI_x                                               0x140514B60   // Why?
#define __ProcessDeviceEvents_x                                    0x140293730
#define __ProcessGameEvents_x                                      0x140288170
#define __ProcessKeyboardEvents_x                                  0x14034AF40
#define __ProcessMouseEvents_x                                     0x140289880
#define __SaveColors_x                                             0x1401A1BB0
#define __STMLToText_x                                             0x1405A67A0
#define __WndProc_x                                                0x140347F90
#define CMemoryMappedFile__SetFile_x                               0x1407FAE60
#define DrawNetStatus_x                                            0x1402D4C40
#define Util__FastTime_x                                           0x1405927A0
#define __eq_delete_x                                              0x1406C6E18
#define __eq_new_x                                                 0x1406C7070
#define __CopyLayout_x                                             0x1402C1D90
#define __ThrottleFrameRate_x                                      0x14027777C
#define __ThrottleFrameRateEnd_x                                   0x140277782

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035AD30
#define CAAWnd__Update_x                                           0x14035B030
#define CAAWnd__UpdateSelected_x                                   0x14035C230

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE390
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6D70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A40
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AECC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ACE00
#define AltAdvManager__IsAbilityReady_x                            0x1401AD290
#define AltAdvManager__GetAAById_x                                 0x1401AC6D0
#define AltAdvManager__CanTrainAbility_x                           0x1401AC4D0
#define AltAdvManager__CanSeeAbility_x                             0x1401AC190

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D59C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6830
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6A80
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAD80
#define CharacterZoneClient__CanUseItem_x                          0x1400EB340
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7450
#define CharacterZoneClient__CastSpell_x                           0x1400D74F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7250
#define CharacterZoneClient__Cur_HP_x                              0x1400ECA60
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECC20
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA760
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F32D0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101990  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBC00
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA680
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4B60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3A50
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBD80
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB570
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD440
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4180
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC6D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F4DF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DBE00
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5B70
#define CharacterZoneClient__GetModCap_x                           0x1400FD140
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC090
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC260
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0AD0
#define CharacterZoneClient__HasSkill_x                            0x1400F8C80
#define CharacterZoneClient__HitBySpell_x                          0x1400DCCF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E06C0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCC20
#define CharacterZoneClient__Max_Endurance_x                       0x1402EF990  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FCF70
#define CharacterZoneClient__Max_Mana_x                            0x1402EFBB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD3D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3D10
#define CharacterZoneClient__SpellDuration_x                       0x1400E4A40
#define CharacterZoneClient__TotalEffect_x                         0x1400E5E20
#define CharacterZoneClient__UseSkill_x                            0x140102900


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140379A30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140384000

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037FE80
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140383A80

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140386760

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD0320

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A94F0
#define CChatWindowManager__InitContextMenu_x                      0x1403A9680
#define CChatWindowManager__FreeChatWindow_x                       0x1403A8540
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B1640
#define CChatWindowManager__CreateChatWindow_x                     0x1403A7F70

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010AE90

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B2690
#define CChatWindow__Clear_x                                       0x1403B3650
#define CChatWindow__WndNotification_x                             0x1403B4840
#define CChatWindow__AddHistory_x                                  0x1403B3150

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D3E90
#define CContextMenu__RemoveMenuItem_x                             0x1405D4280
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D4250
#define CContextMenu__CheckMenuItem_x                              0x1405D40C0
#define CContextMenu__SetMenuItem_x                                0x1405D42A0
#define CContextMenu__AddSeparator_x                               0x1405D4000

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C5D50
#define CContextMenuManager__RemoveMenu_x                          0x1405C6330
#define CContextMenuManager__PopupMenu_x                           0x1405C6070
#define CContextMenuManager__Flush_x                               0x1405C5DD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C2CB0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A0C30
#define CChatService__GetFriendName_x                              0x1406A0C40

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B6C50
#define CComboWnd__Draw_x                                          0x1405B6D50
#define CComboWnd__GetCurChoice_x                                  0x1405B7030  // unused
#define CComboWnd__GetListRect_x                                   0x1405B70D0
#define CComboWnd__InsertChoice_x                                  0x1405B7410
#define CComboWnd__SetColors_x                                     0x1405B77A0
#define CComboWnd__SetChoice_x                                     0x1405B7760
#define CComboWnd__GetItemCount_x                                  0x1405B70C0
#define CComboWnd__GetCurChoiceText_x                              0x1405B7070  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B7000
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B74D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C09D0
#define CContainerWnd__SetContainer_x                              0x14041C700
#define CContainerWnd__vftable_x                                   0x1409E5968

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC3FAC
#define CDisplay__ZoneMainUI_x                                     0x1405EE170
#define CDisplay__PreZoneMainUI_x                                  0x14019EAB0
#define CDisplay__CleanGameUI_x                                    0x140190D80
#define CDisplay__GetClickedActor_x                                0x140194F40
#define CDisplay__GetUserDefinedColor_x                            0x140195BB0
#define CDisplay__InitCharSelectUI_x                               0x140195E60
#define CDisplay__ReloadUI_x                                       0x1401A0DB0
#define CDisplay__RestartUI_x                                      0x140202D70
#define CDisplay__WriteTextHD2_x                                   0x1401A7DC0
#define CDisplay__TrueDistance_x                                   0x1401A7A70
#define CDisplay__SetViewActor_x                                   0x1401A42E0
#define CDisplay__GetFloorHeight_x                                 0x1401951A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7560
#define CDisplay__RealRender_World_x                               0x1401A0180

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F83A0
#define CEditWnd__DrawCaret_x                                      0x1405E9EA0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EA360
#define CEditWnd__GetCaretPt_x                                     0x1405EA5E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EA620
#define CEditWnd__GetDisplayString_x                               0x1405EA890
#define CEditWnd__GetHorzOffset_x                                  0x1405EAAD0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EAC20
#define CEditWnd__GetSelStartPt_x                                  0x1405EAF00  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EAD50
#define CEditWnd__PointFromPrintableChar_x                         0x1405EBAB0
#define CEditWnd__ReplaceSelection_x                               0x1405EBE60
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EC300
#define CEditWnd__SetEditable_x                                    0x1405EC590
#define CEditWnd__SetWindowText_x                                  0x1405EC5C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278810
#define CEverQuest__ClickedPlayer_x                                0x14026C810
#define CEverQuest__CreateTargetIndicator_x                        0x14026D0D0
#define CEverQuest__DoTellWindow_x                                 0x14010ABA0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B480 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A200
#define CEverQuest__dsp_chat_x                                     0x14010A5E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A5160
#define CEverQuest__Emote_x                                        0x14027ABF0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027B9D0
#define CEverQuest__GetClassDesc_x                                 0x14027BA30
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027BE00
#define CEverQuest__GetDeityDesc_x                                 0x14027C0B0
#define CEverQuest__GetLangDesc_x                                  0x14027C4E0
#define CEverQuest__GetRaceDesc_x                                  0x14027C880
#define CEverQuest__InterpretCmd_x                                 0x14027E210
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402937A0
#define CEverQuest__LMouseUp_x                                     0x14027FC90
#define CEverQuest__RightClickedOnPlayer_x                         0x140290D50
#define CEverQuest__RMouseUp_x                                     0x14028A410
#define CEverQuest__SetGameState_x                                 0x140296220
#define CEverQuest__UPCNotificationFlush_x                         0x14029BB90 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027F8F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028B7E0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C600

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D61B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4D90
#define CGuild__GetGuildName_x                                     0x1400C4DD0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F9720

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7460
#define CHotButton__SetCheck_x                                     0x1402B7730

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140413320
#define CInvSlotMgr__MoveItem_x                                    0x140413EB0
#define CInvSlotMgr__SelectSlot_x                                  0x1404161C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140410390
#define CInvSlot__SliderComplete_x                                 0x140411990
#define CInvSlot__GetItemBase_x                                    0x14040BB80
#define CInvSlot__UpdateItem_x                                     0x140411E40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404183B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140439D30
#define CItemDisplayWnd__UpdateStrings_x                           0x14043C910
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140436510
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140437E70
#define CItemDisplayWnd__RequestConvertItem_x                      0x140439150

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405045B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140506340

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405413F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140432BD0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401573E0

// CLabel
#define CLabel__UpdateText_x                                       0x140443D10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BA5E0
#define CListWnd__dCListWnd_x                                      0x1405BAA30
#define CListWnd__vftable_x                                        0x140ACE470
#define CListWnd__AddColumn_x                                      0x1405BB0D0
#define CListWnd__AddColumn1_x                                     0x1405BB170
#define CListWnd__AddLine_x                                        0x1405BB2D0
#define CListWnd__AddString_x                                      0x1405BB860
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BBDD0
#define CListWnd__CalculateVSBRange_x                              0x1405BC0B0
#define CListWnd__ClearSel_x                                       0x1405BC260
#define CListWnd__ClearAllSel_x                                    0x1405BC200
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BC2C0
#define CListWnd__Compare_x                                        0x1405BC480
#define CListWnd__Draw_x                                           0x1405BC950
#define CListWnd__DrawColumnSeparators_x                           0x1405BD500
#define CListWnd__DrawHeader_x                                     0x1405BD5C0
#define CListWnd__DrawItem_x                                       0x1405BDCA0
#define CListWnd__DrawLine_x                                       0x1405BE620
#define CListWnd__DrawSeparator_x                                  0x1405BEAE0
#define CListWnd__EnableLine_x                                     0x1405BEF00
#define CListWnd__EnsureVisible_x                                  0x1405BEF60
#define CListWnd__ExtendSel_x                                      0x1405BF060
#define CListWnd__GetColumnMinWidth_x                              0x1405BF3F0
#define CListWnd__GetColumnWidth_x                                 0x1405BF470
#define CListWnd__GetCurSel_x                                      0x1405BF570
#define CListWnd__GetItemData_x                                    0x1405BF8F0
#define CListWnd__GetItemHeight_x                                  0x1405BF930
#define CListWnd__GetItemRect_x                                    0x1405BFB50
#define CListWnd__GetItemText_x                                    0x1405BFDF0
#define CListWnd__GetSelList_x                                     0x1405C0040
#define CListWnd__GetSeparatorRect_x                               0x1405C0230
#define CListWnd__InsertLine_x                                     0x1405C16A0
#define CListWnd__RemoveLine_x                                     0x1405C1D10
#define CListWnd__SetColors_x                                      0x1405C20D0
#define CListWnd__SetColumnJustification_x                         0x1405C20F0
#define CListWnd__SetColumnLabel_x                                 0x1405C2170
#define CListWnd__SetColumnWidth_x                                 0x1405C2310
#define CListWnd__SetCurSel_x                                      0x1405C23E0
#define CListWnd__SetItemColor_x                                   0x1405C2650
#define CListWnd__SetItemData_x                                    0x1405C26F0
#define CListWnd__SetItemText_x                                    0x1405C2930
#define CListWnd__Sort_x                                           0x1405C2D40
#define CListWnd__ToggleSel_x                                      0x1405C2EB0
#define CListWnd__SetColumnsSizable_x                              0x1405C2360
#define CListWnd__SetItemWnd_x                                     0x1405C2A60
#define CListWnd__GetItemWnd_x                                     0x1405BFFD0
#define CListWnd__SetItemIcon_x                                    0x1405C2730
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BBBA0
#define CListWnd__SetVScrollPos_x                                  0x1405C2CA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140457210

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33378
#define MapViewMap__Clear_x                                        0x140458D90
#define MapViewMap__SetZoom_x                                      0x14045F3E0
#define MapViewMap__HandleLButtonDown_x                            0x14045BF20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140480C20  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404874C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140487CA0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048B560
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048A8B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048F960

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067BF70
#define CPacketScrambler__hton_x                                   0x14067BF60

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E3770
#define CSidlManagerBase__FindAnimation1_x                         0x1405E36B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E3DA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E3B50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E2AB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E2A40
#define CSidlManagerBase__CreateXWnd_x                             0x1405E20A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F7540
#define CSidlManager__CreateXWnd_x                                 0x1404F7700

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A8290
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A83C0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F28E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A8540
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A79C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A7A90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A7CA0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A8C30
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A8E60
#define CSidlScreenWnd__GetChildItem_x                             0x1405A9000
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A9250
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B32B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A95C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A9900
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AA1C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AABC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1DC70
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AB260
#define CSidlScreenWnd__StoreIniVis_x                              0x1405ABA50
#define CSidlScreenWnd__vftable_x                                  0x140ACD6F8
#define CSidlScreenWnd__WndNotification_x                          0x1405ABAA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332960 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332C80 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332BB0
#define CSkillMgr__IsActivatedSkill_x                              0x140333040
#define CSkillMgr__IsCombatSkill_x                                 0x140333080
#define CSkillMgr__GetSkillTimerDuration_x                         0x140332FB0
#define CSkillMgr__GetSkillLastUsed_x                              0x140332C00

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C3810
#define CSliderWnd__SetValue_x                                     0x1405C4020
#define CSliderWnd__SetNumTicks_x                                  0x1405C3EA0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FDCE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C87B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B2CB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405C9650
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CA150
#define CStmlWnd__ForceParseNow_x                                  0x1405CA1F0
#define CStmlWnd__GetVisibleText_x                                 0x1405CA8C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CC620
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CC660
#define CStmlWnd__SetSTMLText_x                                    0x1405D3630
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D37E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D3B70

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C43E0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C4480
#define CTabWnd__DrawTab_x                                         0x1405C4850
#define CTabWnd__GetTabRect_x                                      0x1405C4EC0
#define CTabWnd__InsertPage_x                                      0x1405C5190
#define CTabWnd__RemovePage_x                                      0x1405C5420
#define CTabWnd__SetPage_x                                         0x1405C5580
#define CTabWnd__UpdatePage_x                                      0x1405C5880

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405ECA00
#define CPageWnd__SetTabText_x                                     0x1405ECA70

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE330  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE740


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DB170
#define CTextureFont__DrawWrappedText1_x                           0x1405DB080
#define CTextureFont__DrawWrappedText2_x                           0x1405DB2A0
#define CTextureFont__GetTextExtent_x                              0x1405DB650
#define CTextureFont__GetHeight_x                                  0x1405DB610

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F1040

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A4E90

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4CF90
#define CXStr__gCXStrAccess_x                                      0x140F1D7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AE300
#define CXWnd__ClrFocus_x                                          0x1405AE5F0
#define CXWnd__Destroy_x                                           0x1405AE770
#define CXWnd__DoAllDrawing_x                                      0x1405AE870
#define CXWnd__DrawColoredRect_x                                   0x1405AF040
#define CXWnd__DrawTooltip_x                                       0x1405B06D0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B0780
#define CXWnd__GetChildItem_x                                      0x1405B1090
#define CXWnd__GetChildWndAt_x                                     0x1405B1150
#define CXWnd__GetClientRect_x                                     0x1405B1400
#define CXWnd__GetClientClipRect_x                                 0x1405B12C0
#define CXWnd__GetRelativeRect_x                                   0x1405B2DD0
#define CXWnd__GetScreenClipRect_x                                 0x1405B2ED0
#define CXWnd__GetScreenRect_x                                     0x1405B3040
#define CXWnd__GetTooltipRect_x                                    0x1405B31C0
#define CXWnd__IsActive_x                                          0x1405B3770
#define CXWnd__IsDescendantOf_x                                    0x1405B37A0
#define CXWnd__IsReallyVisible_x                                   0x1405B3810
#define CXWnd__IsType_x                                            0x1405B3860
#define CXWnd__Minimize_x                                          0x1405B3950
#define CXWnd__ProcessTransition_x                                 0x1405B47E0
#define CXWnd__Resize_x                                            0x1405B4900
#define CXWnd__Right_x                                             0x1405B49A0
#define CXWnd__SetFocus_x                                          0x1405B4D60
#define CXWnd__SetFont_x                                           0x1405B4DB0
#define CXWnd__SetKeyTooltip_x                                     0x1405B4EB0
#define CXWnd__SetMouseOver_x                                      0x1405B4FE0
#define CXWnd__SetParent_x                                         0x1405B5050
#define CXWnd__StartFade_x                                         0x1405B5470
#define CXWnd__vftable_x                                           0x140ACDCD0
#define CXWnd__CXWnd_x                                             0x1405ACEC0
#define CXWnd__dCXWnd_x                                            0x1405AD7F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F7B20

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D5440
#define CXWndManager__DrawCursor_x                                 0x1405D5720
#define CXWndManager__DrawWindows_x                                0x1405D5980
#define CXWndManager__GetKeyboardFlags_x                           0x1405D5FD0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D6010
#define CXWndManager__RemoveWnd_x                                  0x1405D9830

// CDBStr
#define CDBStr__GetString_x                                        0x14018EF50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685DD0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3260
#define CCharacterListWnd__EnterWorld_x                            0x1400D2270
#define CCharacterListWnd__Quit_x                                  0x1400D3240
#define CCharacterListWnd__UpdateList_x                            0x1400D40C0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140653630
#define ItemBase__CreateItemTagString_x                            0x1406540B0
#define ItemBase__GetImageNum_x                                    0x140656760
#define ItemBase__GetItemValue_x                                   0x1406582A0
#define ItemBase__IsEmpty_x                                        0x140659FA0
#define ItemBase__IsKeyRingItem_x                                  0x14065A6C0
#define ItemBase__ValueSellMerchant_x                              0x14065E910
#define ItemClient__CanDrop_x                                      0x1402B9D50
#define ItemClient__CanGoInBag_x                                   0x1402B9E80
#define ItemClient__CreateItemClient_x                             0x1402BA110
#define ItemClient__dItemClient_x                                  0x1402B9BC0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AE7B0
#define EQ_LoadingS__Array_x                                       0x140D39230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066A970
#define PcBase__GetCombatAbility_x                                 0x14066B060
#define PcBase__GetCombatAbilityTimer_x                            0x14066B100
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066B8A0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066C310
#define PcClient__AlertInventoryChanged_x                          0x1402DCE80
#define PcClient__GetConLevel_x                                    0x1402DD5D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFD60
#define PcClient__HasLoreItem_x                                    0x1402E0DA0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED600
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0AD0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140222F10
#define EQGroundItemListManager__Add_x                             0x1402230C0
#define EQGroundItemListManager__Clear_x                           0x140223160
#define EQGroundItemListManager__Delete_x                          0x140223220
#define EQGroundItemListManager__Instance_x                        0x1402232B0

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DBE0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140189750

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140640090
#define PlayerBase__CanSee1_x                                      0x140640160
#define PlayerBase__GetVisibilityLineSegment_x                     0x140640640
#define PlayerBase__HasProperty_x                                  0x140640810
#define PlayerBase__IsTargetable_x                                 0x1406408D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE770
#define PlayerClient__GetPcClient_x                                0x1403012A0
#define PlayerClient__PlayerClient_x                               0x1402F6AC0
#define PlayerClient__SetNameSpriteState_x                         0x1403049D0
#define PlayerClient__SetNameSpriteTint_x                          0x140305990
#define PlayerZoneClient__ChangeHeight_x                           0x1403144C0
#define PlayerZoneClient__DoAttack_x                               0x1403151D0
#define PlayerZoneClient__GetLevel_x                               0x140318900
#define PlayerZoneClient__IsValidTeleport_x                        0x140260980
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019D330

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030D9C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DA70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DB70
#define PlayerManagerClient__CreatePlayer_x                        0x14030D490
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063FC50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF2B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BEBE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BEC50
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF240  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF3D0
#define KeypressHandler__HandleKeyUp_x                             0x1402BF4F0
#define KeypressHandler__SaveKeymapping_x                          0x1402BF0D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406838F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067D6B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E6E70  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EB730
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE6E0
#define PcZoneClient__RemovePetEffect_x                            0x1402F0DB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF2C0
#define PcZoneClient__CanEquipItem_x                               0x1402E9A30
#define PcZoneClient__GetItemByID_x                                0x1402EC650
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0950
#define PcZoneClient__BandolierSwap_x                              0x1402DCF30

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402654B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CB330

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BF780
#define CContainerMgr__CloseContainer_x                            0x1403BF0A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BFB00

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BB700

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1650

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044B030
#define CLootWnd__RequestLootSlot_x                                0x14044C080

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE1F0
#define EQ_Spell__SpellAffects_x                                   0x1401DF4D0
#define EQ_Spell__SpellAffectBase_x                                0x1401DF430
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC3F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC3A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF100
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DECB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DE570

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C38D0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140518360
#define CTargetWnd__RefreshTargetBuffs_x                           0x140517A70
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140517270

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051FA00  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186160
#define CTaskManager__GetTaskStatus_x                              0x140186270
#define CTaskManager__GetElementDescription_x                      0x140185DF0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DC510
#define EqSoundManager__PlayScriptMp3_x                            0x1401DB350
#define EqSoundManager__SoundAssistPlay_x                          0x140337DA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403380E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B6200
#define CTextureAnimation__SetCurCell_x                            0x1405B6510

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AF850

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069E3B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069E430
#define CharacterBase__IsExpansionFlag_x                           0x1402023E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039A5D0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039B040
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039C590

// messages
#define msg_spell_worn_off_x                                       0x140219450
#define msg_new_text_x                                             0x140214C10
#define __msgTokenTextParam_x                                      0x14020C0F0
#define msgTokenText_x                                             0x14020C000

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403399C0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403398E0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064EC90

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140444460

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C44E0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C7970
#define CCursorAttachment__RemoveAttachment_x                      0x1403C7C20
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EF4E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EF6D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EF6E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140151D10
#define CFindItemWnd__Update_x                                     0x1401526B0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014B660

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015C4B0
#define LootFiltersManager__GetItemFilterData_x                    0x14015CFD0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015D870
#define LootFiltersManager__SetItemLootFilter_x                    0x14015DB20

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049DFB0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332520
#define CResolutionHandler__UpdateResolution_x                     0x14059B810

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BBA40

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A27B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A26A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E2590
#define CGroupWnd__UpdateDisplay_x                                 0x1403E2170

// ItemBase
#define ItemBase__IsLore_x                                         0x14065A800
#define ItemBase__IsLoreEquipped_x                                 0x14065A890

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2A40

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DD40
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DCD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DD10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CB00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401288E0
#define FactionManagerClient__HandleFactionMessage_x               0x140128CC0
#define FactionManagerClient__GetFactionStanding_x                 0x1401280B0
#define FactionManagerClient__GetMaxFaction_x                      0x1401280B0
#define FactionManagerClient__GetMinFaction_x                      0x140127F60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B09A0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401340C0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7390
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6550
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B71B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7130  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033EC90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CB00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AC090

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350880

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FCB0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140686950
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE25D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054E4B0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
