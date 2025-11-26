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

#define __ClientDate                                               20251125u
#define __ExpectedVersionDate                                     "Nov 25 2025"
#define __ExpectedVersionTime                                     "04:23:06"
#define __ActualVersionDate_x                                      0x140972908
#define __ActualVersionTime_x                                      0x1409728F8
#define __ActualVersionBuild_x                                     0x140907AB0

// Memory Protection
#define __MemChecker0_x                                            0x1402C5A20
#define __MemChecker1_x                                            0x140594900
#define __MemChecker4_x                                            0x1402931C0
#define __EncryptPad0_x                                            0x140D45F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7E8C0
#define instEQZoneInfo_x                                           0x140E7EAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140227010
#define __gfMaxZoomCameraDistance_x                                0x140908D58
#define __gfMaxCameraDistance_x                                    0x140AB2C94
#define __CurrentSocial_x                                          0x140C0195C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3D720
#define g_eqCommandStates_x                                        0x140D3E7C0
#define __CommandList_x                                            0x140D3EA00
#define __ScreenMode_x                                             0x140DC6234
#define __gWorld_x                                                 0x140E793E8
#define __gpbCommandEvent_x                                        0x140E76E94
#define __ServerHost_x                                             0x140E77098
#define __Guilds_x                                                 0x140E7D470
#define __MemCheckBitmask_x                                        0x140E7EDFF
#define __MemCheckActive_x                                         0x140E80515
#define __MouseEventTime_x                                         0x140EF3E88
#define DI8__MouseState_x                                          0x140EF8108
#define __heqmain_x                                                0x140EFA5A8
#define DI8__Mouse_x                                               0x140EF8058
#define __HWnd_x                                                   0x140EF80E0
#define __Mouse_x                                                  0x140EF8014
#define DI8__Keyboard_x                                            0x140EF8030
#define __LoginName_x                                              0x140EFAC8C
#define __CurrentMapLabel_x                                        0x140F0E7A0
#define __LabelCache_x                                             0x140F0F370
#define __ChatFilterDefs_x                                         0x140A4CB60
#define Teleport_Table_Size_x                                      0x140E76F2C
#define Teleport_Table_x                                           0x140E773B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E79800
#define pinstActiveBanker_x                                        0x140E76D60
#define pinstActiveCorpse_x                                        0x140E76D50
#define pinstActiveGMaster_x                                       0x140E76D58
#define pinstActiveMerchant_x                                      0x140E76D48
#define pinstAltAdvManager_x                                       0x140DC7010
#define pinstCEverQuest_x                                          0x140EF8050
#define pinstCamActor_x                                            0x140DC6220
#define pinstCDBStr_x                                              0x140DC5DC0
#define pinstCDisplay_x                                            0x140E76E98
#define pinstControlledPlayer_x                                    0x140E76DF0
#define pinstCResolutionHandler_x                                  0x140F1FBA8
#define pinstCSidlManager_x                                        0x140F20910
#define pinstCXWndManager_x                                        0x140F20908
#define instDynamicZone_x                                          0x140E7D330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7D37E
#define instExpeditionName_x                                       0x140E7D3BE
#define pinstDZMember_x                                            0x140E7D448
#define pinstDZTimerInfo_x                                         0x140E7D450
#define pinstEqLogin_x                                             0x140EFA5D0
#define instTribute_x                                              0x140D38D60
#define pinstDeviceInputProxy_x                                    0x140E7E91C
#define pinstEQSoundManager_x                                      0x140DC7390
#define pinstEQSpellStrings_x                                      0x140DAA950
#define pinstSGraphicsEngine_x                                     0x140F1F938
#define pinstLocalPC_x                                             0x140E793D8
#define pinstLocalPlayer_x                                         0x140E76D40
#define pinstCMercenaryClientManager_x                             0x140EF57A8
#define pinstModelPlayer_x                                         0x140E76D70
#define pinstRenderInterface_x                                     0x140F1F950
#define pinstSkillMgr_x                                            0x140EF7458
#define pinstSpawnManager_x                                        0x140EF5B60
#define pinstSpellManager_x                                        0x140EF74C0
#define pinstStringTable_x                                         0x140E793E0
#define pinstSwitchManager_x                                       0x140E76CC0
#define pinstTarget_x                                              0x140E76DE8
#define pinstTaskMember_x                                          0x140D38D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E76D68
#define instTributeActive_x                                        0x140D38D89
#define pinstViewActor_x                                           0x140DC6218
#define pinstWorldData_x                                           0x140E76E08
#define pinstPlayerPath_x                                          0x140EF5B88
#define pinstTargetIndicator_x                                     0x140EF7570
#define EQObject_Top_x                                             0x140E76F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0B900
#define pinstCContainerMgr_x                                       0x140DC6348
#define pinstCContextMenuManager_x                                 0x140F205F0
#define pinstCInvSlotMgr_x                                         0x140DC6328
#define pinstCItemDisplayManager_x                                 0x140F0E370
#define pinstCPopupWndManager_x                                    0x140F0EC00
#define pinstCSpellDisplayMgr_x                                    0x140F0F250
#define pinstCTaskManager_x                                        0x140C01C90
#define pinstEQSuiteTextureLoader_x                                0x140D4F620
#define pinstItemIconCache_x                                       0x140F0BC60
#define pinstLootFiltersManager_x                                  0x140DC5808
#define pinstGFViewListener_x                                      0x140F1FDC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140250B80
#define __CastRay_x                                                0x140248FF0
#define __CastRay2_x                                               0x140248CF0
#define __compress_block_x                                         0x140549CC0
#define __ConvertItemTags_x                                        0x140249450
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x1401925D0
#define __decompress_block_x                                       0x140590110
#define __DoesFileExist_x                                          0x1405987B0
#define __EQGetTime_x                                              0x140594EB0
#define __ExecuteCmd_x                                             0x14021E5A0
#define __FixHeading_x                                             0x14064F7F0
#define __FlushDxKeyboard_x                                        0x140349990
#define __get_bearing_x                                            0x140252DB0
#define __get_melee_range_x                                        0x140252EA0
#define __GetAnimationCache_x                                      0x1403CCFD0
#define __GetGaugeValueFromEQ_x                                    0x1405097F0
#define __GetLabelFromEQ_x                                         0x14050ADE0
#define __GetXTargetType_x                                         0x140650AD0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064F870
#define __HelpPath_x                                               0x140EF3D50   // Why?
#define __NewUIINI_x                                               0x140516830   // Why?
#define __ProcessDeviceEvents_x                                    0x1402937D0
#define __ProcessGameEvents_x                                      0x140288210
#define __ProcessKeyboardEvents_x                                  0x14034B0E0
#define __ProcessMouseEvents_x                                     0x140289920
#define __SaveColors_x                                             0x1401A24C0
#define __STMLToText_x                                             0x1405A8480
#define __WndProc_x                                                0x140348130
#define CMemoryMappedFile__SetFile_x                               0x1407FD2E0
#define DrawNetStatus_x                                            0x1402D4D40
#define Util__FastTime_x                                           0x1405943E0
#define __eq_delete_x                                              0x1406C9288
#define __eq_new_x                                                 0x1406C94E0
#define __CopyLayout_x                                             0x1402C1E40
#define __ThrottleFrameRate_x                                      0x1402777E1
#define __ThrottleFrameRateEnd_x                                   0x1402777E7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035AED0
#define CAAWnd__Update_x                                           0x14035B1D0
#define CAAWnd__UpdateSelected_x                                   0x14035C3D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140853A50
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD720
#define AltAdvManager__IsAbilityReady_x                            0x1401ADBB0
#define AltAdvManager__GetAAById_x                                 0x1401ACFF0
#define AltAdvManager__CanTrainAbility_x                           0x1401ACDF0
#define AltAdvManager__CanSeeAbility_x                             0x1401ACAB0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5B90
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A00
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6C50
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAF50
#define CharacterZoneClient__CanUseItem_x                          0x1400EB510
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7620
#define CharacterZoneClient__CastSpell_x                           0x1400D76C0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7420
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC30
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECDF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA930
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34B0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101B70  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBDD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA850
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C30
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBF50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB740
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD610
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4360
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F4FD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DBFD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D50
#define CharacterZoneClient__GetModCap_x                           0x1400FD320
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC260
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC430
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CA0
#define CharacterZoneClient__HasSkill_x                            0x1400F8E60
#define CharacterZoneClient__HitBySpell_x                          0x1400DCEC0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0890
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE00
#define CharacterZoneClient__Max_Endurance_x                       0x1402EFAC0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD150
#define CharacterZoneClient__Max_Mana_x                            0x1402EFCE0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5B0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3EE0
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C10
#define CharacterZoneClient__TotalEffect_x                         0x1400E5FF0
#define CharacterZoneClient__UseSkill_x                            0x140102AE0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140385CB0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140381B30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140385730

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140388420

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD2530

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AB1C0
#define CChatWindowManager__InitContextMenu_x                      0x1403AB350
#define CChatWindowManager__FreeChatWindow_x                       0x1403AA210
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B3310
#define CChatWindowManager__CreateChatWindow_x                     0x1403A9C40

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B070

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4360
#define CChatWindow__Clear_x                                       0x1403B5310
#define CChatWindow__WndNotification_x                             0x1403B6500
#define CChatWindow__AddHistory_x                                  0x1403B4E10

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D5BE0
#define CContextMenu__RemoveMenuItem_x                             0x1405D5FD0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D5FA0
#define CContextMenu__CheckMenuItem_x                              0x1405D5E10
#define CContextMenu__SetMenuItem_x                                0x1405D5FF0
#define CContextMenu__AddSeparator_x                               0x1405D5D50

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C7AB0
#define CContextMenuManager__RemoveMenu_x                          0x1405C8090
#define CContextMenuManager__PopupMenu_x                           0x1405C7DD0
#define CContextMenuManager__Flush_x                               0x1405C7B30
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C49A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140658930
#define CChatService__GetFriendName_x                              0x1406A30B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B89D0
#define CComboWnd__Draw_x                                          0x1405B8AD0
#define CComboWnd__GetCurChoice_x                                  0x1405B8DB0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B8E50
#define CComboWnd__InsertChoice_x                                  0x1405B9190
#define CComboWnd__SetColors_x                                     0x1405B9520
#define CComboWnd__SetChoice_x                                     0x1405B94E0
#define CComboWnd__GetItemCount_x                                  0x1405B8E40
#define CComboWnd__GetCurChoiceText_x                              0x1405B8DF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B8D80
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B9250

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C26A0
#define CContainerWnd__SetContainer_x                              0x14041E310
#define CContainerWnd__vftable_x                                   0x1409E7978

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC5FB4
#define CDisplay__ZoneMainUI_x                                     0x1405EFEA0
#define CDisplay__PreZoneMainUI_x                                  0x14019F3C0
#define CDisplay__CleanGameUI_x                                    0x140191690
#define CDisplay__GetClickedActor_x                                0x140195850
#define CDisplay__GetUserDefinedColor_x                            0x1401964C0
#define CDisplay__InitCharSelectUI_x                               0x140196770
#define CDisplay__ReloadUI_x                                       0x1401A16C0
#define CDisplay__RestartUI_x                                      0x140202DF0
#define CDisplay__WriteTextHD2_x                                   0x1401A86D0
#define CDisplay__TrueDistance_x                                   0x1401A8380
#define CDisplay__SetViewActor_x                                   0x1401A4BF0
#define CDisplay__GetFloorHeight_x                                 0x140195AB0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7E70
#define CDisplay__RealRender_World_x                               0x1401A0A90

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FA0D0
#define CEditWnd__DrawCaret_x                                      0x1405EBC00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EC0C0
#define CEditWnd__GetCaretPt_x                                     0x1405EC340  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EC380
#define CEditWnd__GetDisplayString_x                               0x1405EC5F0
#define CEditWnd__GetHorzOffset_x                                  0x1405EC830
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EC980
#define CEditWnd__GetSelStartPt_x                                  0x1405ECC60  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ECAB0
#define CEditWnd__PointFromPrintableChar_x                         0x1405ED810
#define CEditWnd__ReplaceSelection_x                               0x1405EDBC0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EE060
#define CEditWnd__SetEditable_x                                    0x1405EE2F0
#define CEditWnd__SetWindowText_x                                  0x1405EE320

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402788B0
#define CEverQuest__ClickedPlayer_x                                0x14026C8A0
#define CEverQuest__CreateTargetIndicator_x                        0x14026D160
#define CEverQuest__DoTellWindow_x                                 0x14010AD80 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B660 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A2A0
#define CEverQuest__dsp_chat_x                                     0x14010A7C0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A5200
#define CEverQuest__Emote_x                                        0x14027AC90
#define CEverQuest__GetBodyTypeDesc_x                              0x14027BA70
#define CEverQuest__GetClassDesc_x                                 0x14027BAD0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027BEA0
#define CEverQuest__GetDeityDesc_x                                 0x14027C150
#define CEverQuest__GetLangDesc_x                                  0x14027C580
#define CEverQuest__GetRaceDesc_x                                  0x14027C920
#define CEverQuest__InterpretCmd_x                                 0x14027E2B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293840
#define CEverQuest__LMouseUp_x                                     0x14027FD30
#define CEverQuest__RightClickedOnPlayer_x                         0x140290DF0
#define CEverQuest__RMouseUp_x                                     0x14028A4B0
#define CEverQuest__SetGameState_x                                 0x1402962C0
#define CEverQuest__UPCNotificationFlush_x                         0x14029BC30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027F990
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028B880
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C6A0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D7E70

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F50
#define CGuild__GetGuildName_x                                     0x1400C4F90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FB2C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7500
#define CHotButton__SetCheck_x                                     0x1402B77D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140414F40
#define CInvSlotMgr__MoveItem_x                                    0x140415AD0
#define CInvSlotMgr__SelectSlot_x                                  0x140417DF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140411F20
#define CInvSlot__SliderComplete_x                                 0x1404135A0
#define CInvSlot__GetItemBase_x                                    0x14040D710
#define CInvSlot__UpdateItem_x                                     0x140413A60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140419FC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043B940
#define CItemDisplayWnd__UpdateStrings_x                           0x14043E510
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140438130
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140439A90
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043AD60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140506260
#define CSpellDisplayWnd__UpdateStrings_x                          0x140507FF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140543020

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140434800

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157CA0

// CLabel
#define CLabel__UpdateText_x                                       0x140445910

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BC360
#define CListWnd__dCListWnd_x                                      0x1405BC7B0
#define CListWnd__vftable_x                                        0x140AD0680
#define CListWnd__AddColumn_x                                      0x1405BCE50
#define CListWnd__AddColumn1_x                                     0x1405BCEF0
#define CListWnd__AddLine_x                                        0x1405BD050
#define CListWnd__AddString_x                                      0x1405BD5E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BDB50
#define CListWnd__CalculateVSBRange_x                              0x1405BDE30
#define CListWnd__ClearSel_x                                       0x1405BDFE0
#define CListWnd__ClearAllSel_x                                    0x1405BDF80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BE040
#define CListWnd__Compare_x                                        0x1405BE200
#define CListWnd__Draw_x                                           0x1405BE6D0
#define CListWnd__DrawColumnSeparators_x                           0x1405BF280
#define CListWnd__DrawHeader_x                                     0x1405BF340
#define CListWnd__DrawItem_x                                       0x1405BFA20
#define CListWnd__DrawLine_x                                       0x1405C03A0
#define CListWnd__DrawSeparator_x                                  0x1405C0860
#define CListWnd__EnableLine_x                                     0x1405C0C80
#define CListWnd__EnsureVisible_x                                  0x1405C0CE0
#define CListWnd__ExtendSel_x                                      0x1405C0DE0
#define CListWnd__GetColumnMinWidth_x                              0x1405C1170
#define CListWnd__GetColumnWidth_x                                 0x1405C11F0
#define CListWnd__GetCurSel_x                                      0x1405C12F0
#define CListWnd__GetItemData_x                                    0x1405C1670
#define CListWnd__GetItemHeight_x                                  0x1405C16B0
#define CListWnd__GetItemRect_x                                    0x1405C18D0
#define CListWnd__GetItemText_x                                    0x1405C1B70
#define CListWnd__GetSelList_x                                     0x1405C1DC0
#define CListWnd__GetSeparatorRect_x                               0x1405C1FB0
#define CListWnd__InsertLine_x                                     0x1405C3420
#define CListWnd__RemoveLine_x                                     0x1405C3A90
#define CListWnd__SetColors_x                                      0x1405C3E50
#define CListWnd__SetColumnJustification_x                         0x1405C3E70
#define CListWnd__SetColumnLabel_x                                 0x1405C3EF0
#define CListWnd__SetColumnWidth_x                                 0x1405C4090
#define CListWnd__SetCurSel_x                                      0x1405C4160
#define CListWnd__SetItemColor_x                                   0x1405C43D0
#define CListWnd__SetItemData_x                                    0x1405C4470
#define CListWnd__SetItemText_x                                    0x1405C46B0
#define CListWnd__Sort_x                                           0x1405C4AC0
#define CListWnd__ToggleSel_x                                      0x1405C4C30
#define CListWnd__SetColumnsSizable_x                              0x1405C40E0
#define CListWnd__SetItemWnd_x                                     0x1405C47E0
#define CListWnd__GetItemWnd_x                                     0x1405C1D50
#define CListWnd__SetItemIcon_x                                    0x1405C44B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BD920
#define CListWnd__SetVScrollPos_x                                  0x1405C4A20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140458E30

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A35388
#define MapViewMap__Clear_x                                        0x14045A9B0
#define MapViewMap__SetZoom_x                                      0x140461000
#define MapViewMap__HandleLButtonDown_x                            0x14045DB40

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140482840  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404890E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404898C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048D1A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048C4F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404915A0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E3C0
#define CPacketScrambler__hton_x                                   0x14067E3B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E5510
#define CSidlManagerBase__FindAnimation1_x                         0x1405E5450
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E5B40
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E58F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E4850
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E47E0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E3E20

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F91F0
#define CSidlManager__CreateXWnd_x                                 0x1404F93B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A9F70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AA0A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F4610 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AA220
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A96A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A9770
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A9980
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AA910
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AAB40
#define CSidlScreenWnd__GetChildItem_x                             0x1405AACE0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AAF30
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B4F50 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AB2A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AB5E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405ABEA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AC8A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1FC68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405ACF30
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AD720
#define CSidlScreenWnd__vftable_x                                  0x140ACF908
#define CSidlScreenWnd__WndNotification_x                          0x1405AD770

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332AD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332DF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332D20
#define CSkillMgr__IsActivatedSkill_x                              0x1403331B0
#define CSkillMgr__IsCombatSkill_x                                 0x1403331F0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140333120
#define CSkillMgr__GetSkillLastUsed_x                              0x140332D70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C5580
#define CSliderWnd__SetValue_x                                     0x1405C5D90
#define CSliderWnd__SetNumTicks_x                                  0x1405C5C10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FF990

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CA510
#define CStmlWnd__CalculateHSBRange_x                              0x1405B4910
#define CStmlWnd__CalculateVSBRange_x                              0x1405CB3B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CBEB0
#define CStmlWnd__ForceParseNow_x                                  0x1405CBF50
#define CStmlWnd__GetVisibleText_x                                 0x1405CC620
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CE380
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CE3C0
#define CStmlWnd__SetSTMLText_x                                    0x1405D5390
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D5540
#define CStmlWnd__UpdateHistoryString_x                            0x1405D58D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C6140
#define CTabWnd__DrawCurrentPage_x                                 0x1405C61E0
#define CTabWnd__DrawTab_x                                         0x1405C65B0
#define CTabWnd__GetTabRect_x                                      0x1405C6C20
#define CTabWnd__InsertPage_x                                      0x1405C6EF0
#define CTabWnd__RemovePage_x                                      0x1405C7180
#define CTabWnd__SetPage_x                                         0x1405C72E0
#define CTabWnd__UpdatePage_x                                      0x1405C75E0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EE750
#define CPageWnd__SetTabText_x                                     0x1405EE7C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE4F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE900


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DCED0
#define CTextureFont__DrawWrappedText1_x                           0x1405DCDE0
#define CTextureFont__DrawWrappedText2_x                           0x1405DD000
#define CTextureFont__GetTextExtent_x                              0x1405DD3B0
#define CTextureFont__GetHeight_x                                  0x1405DD370

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F2D70

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A6B70

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4EF90
#define CXStr__gCXStrAccess_x                                      0x140F1F7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AFFB0
#define CXWnd__ClrFocus_x                                          0x1405B02A0
#define CXWnd__Destroy_x                                           0x1405B0420
#define CXWnd__DoAllDrawing_x                                      0x1405B0530
#define CXWnd__DrawColoredRect_x                                   0x1405B0CF0
#define CXWnd__DrawTooltip_x                                       0x1405B2360
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B2410
#define CXWnd__GetChildItem_x                                      0x1405B2D10
#define CXWnd__GetChildWndAt_x                                     0x1405B2DD0
#define CXWnd__GetClientRect_x                                     0x1405B3090
#define CXWnd__GetClientClipRect_x                                 0x1405B2F40
#define CXWnd__GetRelativeRect_x                                   0x1405B4A50
#define CXWnd__GetScreenClipRect_x                                 0x1405B4B50
#define CXWnd__GetScreenRect_x                                     0x1405B4CD0
#define CXWnd__GetTooltipRect_x                                    0x1405B4E50
#define CXWnd__IsActive_x                                          0x1405B5410
#define CXWnd__IsDescendantOf_x                                    0x1405B5430
#define CXWnd__IsReallyVisible_x                                   0x1405B54A0
#define CXWnd__IsType_x                                            0x1405B54F0
#define CXWnd__Minimize_x                                          0x1405B55E0
#define CXWnd__ProcessTransition_x                                 0x1405B64D0
#define CXWnd__Resize_x                                            0x1405B65F0
#define CXWnd__Right_x                                             0x1405B6690
#define CXWnd__SetFocus_x                                          0x1405B6A50
#define CXWnd__SetFont_x                                           0x1405B6AA0
#define CXWnd__SetKeyTooltip_x                                     0x1405B6BB0
#define CXWnd__SetMouseOver_x                                      0x1405B6CF0
#define CXWnd__SetParent_x                                         0x1405B6D70
#define CXWnd__StartFade_x                                         0x1405B71C0
#define CXWnd__vftable_x                                           0x140ACFEE0
#define CXWnd__CXWnd_x                                             0x1405AEB90
#define CXWnd__dCXWnd_x                                            0x1405AF4C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F9850

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D71A0
#define CXWndManager__DrawCursor_x                                 0x1405D7480
#define CXWndManager__DrawWindows_x                                0x1405D76E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405D7D30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D7D70
#define CXWndManager__RemoveWnd_x                                  0x1405DB590

// CDBStr
#define CDBStr__GetString_x                                        0x14018F860

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140688220

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3430
#define CCharacterListWnd__EnterWorld_x                            0x1400D2440
#define CCharacterListWnd__Quit_x                                  0x1400D3410
#define CCharacterListWnd__UpdateList_x                            0x1400D4290

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406558E0
#define ItemBase__CreateItemTagString_x                            0x140656390
#define ItemBase__GetImageNum_x                                    0x140658AC0
#define ItemBase__GetItemValue_x                                   0x14065A5B0
#define ItemBase__IsEmpty_x                                        0x14065C330
#define ItemBase__IsKeyRingItem_x                                  0x14065CA60
#define ItemBase__ValueSellMerchant_x                              0x140660D30
#define ItemClient__CanDrop_x                                      0x1402B9E10
#define ItemClient__CanGoInBag_x                                   0x1402B9F40
#define ItemClient__CreateItemClient_x                             0x1402BA1D0
#define ItemClient__dItemClient_x                                  0x1402B9C80

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF0D0
#define EQ_LoadingS__Array_x                                       0x140D3B230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066CD90
#define PcBase__GetCombatAbility_x                                 0x14066D480
#define PcBase__GetCombatAbilityTimer_x                            0x14066D520
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066DCC0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066E730
#define PcClient__AlertInventoryChanged_x                          0x1402DCF90
#define PcClient__GetConLevel_x                                    0x1402DD6E0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFE70
#define PcClient__HasLoreItem_x                                    0x1402E0EC0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED730
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0C00

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140222FA0
#define EQGroundItemListManager__Add_x                             0x140223150
#define EQGroundItemListManager__Clear_x                           0x1402231F0
#define EQGroundItemListManager__Delete_x                          0x1402232B0
#define EQGroundItemListManager__Instance_x                        0x140223340

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DC70

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A050

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140641DC0
#define PlayerBase__CanSee1_x                                      0x140641E90
#define PlayerBase__GetVisibilityLineSegment_x                     0x140642370
#define PlayerBase__HasProperty_x                                  0x140642540
#define PlayerBase__IsTargetable_x                                 0x140642600
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE8A0
#define PlayerClient__GetPcClient_x                                0x1403013D0
#define PlayerClient__PlayerClient_x                               0x1402F6BF0
#define PlayerClient__SetNameSpriteState_x                         0x140304B00
#define PlayerClient__SetNameSpriteTint_x                          0x140305AC0
#define PlayerZoneClient__ChangeHeight_x                           0x1403145F0
#define PlayerZoneClient__DoAttack_x                               0x140315300
#define PlayerZoneClient__GetLevel_x                               0x140318A30
#define PlayerZoneClient__IsValidTeleport_x                        0x140260A10
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DC40

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030DAF0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DBA0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DCA0
#define PlayerManagerClient__CreatePlayer_x                        0x14030D5C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140641980

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF360
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BEC90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BED00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF2F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF480
#define KeypressHandler__HandleKeyUp_x                             0x1402BF5A0
#define KeypressHandler__SaveKeymapping_x                          0x1402BF180  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140685D40  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067FB00

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E6F80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EB860
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE810
#define PcZoneClient__RemovePetEffect_x                            0x1402F0EE0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF3F0
#define PcZoneClient__CanEquipItem_x                               0x1402E9B50
#define PcZoneClient__GetItemByID_x                                0x1402EC780
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0A80
#define PcZoneClient__BandolierSwap_x                              0x1402DD040

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265540

// IconCache
#define IconCache__GetIcon_x                                       0x1403CD000

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C1450
#define CContainerMgr__CloseContainer_x                            0x1403C0D70
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C17D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BD340

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B16F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044CC40
#define CLootWnd__RequestLootSlot_x                                0x14044DC90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE830
#define EQ_Spell__SpellAffects_x                                   0x1401DFB10
#define EQ_Spell__SpellAffectBase_x                                0x1401DFA70
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC5C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC570
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF740
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF2F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DEBB0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3A90

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051A040
#define CTargetWnd__RefreshTargetBuffs_x                           0x140519750
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140518F50

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405216E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186A40
#define CTaskManager__GetTaskStatus_x                              0x140186B50
#define CTaskManager__GetElementDescription_x                      0x1401866D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DCB50
#define EqSoundManager__PlayScriptMp3_x                            0x1401DB990
#define EqSoundManager__SoundAssistPlay_x                          0x140337F10  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140338250  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B7F80
#define CTextureAnimation__SetCurCell_x                            0x1405B8290

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AF8F0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A0830
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A08B0
#define CharacterBase__IsExpansionFlag_x                           0x140202460

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039C290
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039CD00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039E250

// messages
#define msg_spell_worn_off_x                                       0x1402194E0
#define msg_new_text_x                                             0x140214CA0
#define __msgTokenTextParam_x                                      0x14020C190
#define msgTokenText_x                                             0x14020C0A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339B50
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339A70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140650EB0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140446060

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C61D0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C9640
#define CCursorAttachment__RemoveAttachment_x                      0x1403C98F0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F1210
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F1400
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F1410

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152620
#define CFindItemWnd__Update_x                                     0x140152FC0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BC50

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CD70
#define LootFiltersManager__GetItemFilterData_x                    0x14015D890
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E130
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E3E0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049FBF0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332690
#define CResolutionHandler__UpdateResolution_x                     0x14059D440

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BD700

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A4C20  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A4B10  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4130
#define CGroupWnd__UpdateDisplay_x                                 0x1403E3D10

// ItemBase
#define ItemBase__IsLore_x                                         0x14065CBA0
#define ItemBase__IsLoreEquipped_x                                 0x14065CC30

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2B30

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DDD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DD60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DDA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CC30

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128AB0
#define FactionManagerClient__HandleFactionMessage_x               0x140128E90
#define FactionManagerClient__GetFactionStanding_x                 0x140128280
#define FactionManagerClient__GetMaxFaction_x                      0x140128280
#define FactionManagerClient__GetMinFaction_x                      0x140128130

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134290

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7CA0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6E60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7AC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7A40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033EE30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CC30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405ADD60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350A20

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FDA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140688DA0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE47E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405500E0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083B058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
