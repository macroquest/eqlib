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

#define __ClientDate                                               20251201u
#define __ExpectedVersionDate                                     "Dec  1 2025"
#define __ExpectedVersionTime                                     "04:41:07"
#define __ActualVersionDate_x                                      0x140972918
#define __ActualVersionTime_x                                      0x140972908
#define __ActualVersionBuild_x                                     0x140907AC0

// Memory Protection
#define __MemChecker0_x                                            0x1402C5730
#define __MemChecker1_x                                            0x140594B40
#define __MemChecker4_x                                            0x140292F40
#define __EncryptPad0_x                                            0x140D45F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7E8C0
#define instEQZoneInfo_x                                           0x140E7EAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140226DD0
#define __gfMaxZoomCameraDistance_x                                0x140908D68
#define __gfMaxCameraDistance_x                                    0x140AB2CA4
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
#define __ChatFilterDefs_x                                         0x140A4CB70
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
#define __allowslashcommand_x                                      0x140250930
#define __CastRay_x                                                0x140248DA0
#define __CastRay2_x                                               0x140248AA0
#define __compress_block_x                                         0x140549F00
#define __ConvertItemTags_x                                        0x140249200
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x140192630
#define __decompress_block_x                                       0x140590350
#define __DoesFileExist_x                                          0x1405989F0
#define __EQGetTime_x                                              0x1405950F0
#define __ExecuteCmd_x                                             0x14021E360
#define __FixHeading_x                                             0x14064F630
#define __FlushDxKeyboard_x                                        0x140349650
#define __get_bearing_x                                            0x140252B60
#define __get_melee_range_x                                        0x140252C50
#define __GetAnimationCache_x                                      0x1403CD060
#define __GetGaugeValueFromEQ_x                                    0x140509A60
#define __GetLabelFromEQ_x                                         0x14050B060
#define __GetXTargetType_x                                         0x140650910   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064F6B0
#define __HelpPath_x                                               0x140EF3D50   // Why?
#define __NewUIINI_x                                               0x140516AB0   // Why?
#define __ProcessDeviceEvents_x                                    0x140293550
#define __ProcessGameEvents_x                                      0x140287F90
#define __ProcessKeyboardEvents_x                                  0x14034ADA0
#define __ProcessMouseEvents_x                                     0x1402896A0
#define __SaveColors_x                                             0x1401A2520
#define __STMLToText_x                                             0x1405A8830
#define __WndProc_x                                                0x140347DF0
#define CMemoryMappedFile__SetFile_x                               0x1407FD050
#define DrawNetStatus_x                                            0x1402D4A50
#define Util__FastTime_x                                           0x140594620
#define __eq_delete_x                                              0x1406C8FF8
#define __eq_new_x                                                 0x1406C9250
#define __CopyLayout_x                                             0x1402C1B40
#define __ThrottleFrameRate_x                                      0x14027756C
#define __ThrottleFrameRateEnd_x                                   0x140277572

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035AB70
#define CAAWnd__Update_x                                           0x14035AE70
#define CAAWnd__UpdateSelected_x                                   0x14035C060

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140853A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD760
#define AltAdvManager__IsAbilityReady_x                            0x1401ADBF0
#define AltAdvManager__GetAAById_x                                 0x1401AD030
#define AltAdvManager__CanTrainAbility_x                           0x1401ACE30
#define AltAdvManager__CanSeeAbility_x                             0x1401ACAF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A20
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6C70
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAF70
#define CharacterZoneClient__CanUseItem_x                          0x1400EB530
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7640
#define CharacterZoneClient__CastSpell_x                           0x1400D76E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7440
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC50
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE10
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA950
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34D0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101B90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBDF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA870
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C50
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBF70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB760
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD630
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4380
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F4FF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DBFF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D70
#define CharacterZoneClient__GetModCap_x                           0x1400FD340
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC280
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC450
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CC0
#define CharacterZoneClient__HasSkill_x                            0x1400F8E80
#define CharacterZoneClient__HitBySpell_x                          0x1400DCEE0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE20
#define CharacterZoneClient__Max_Endurance_x                       0x1402EF7D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD170
#define CharacterZoneClient__Max_Mana_x                            0x1402EF9F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F00
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C30
#define CharacterZoneClient__TotalEffect_x                         0x1400E6010
#define CharacterZoneClient__UseSkill_x                            0x140102B00


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037B1E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140385E10

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140381C40
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140385890

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140388570

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD2580

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AB2B0
#define CChatWindowManager__InitContextMenu_x                      0x1403AB440
#define CChatWindowManager__FreeChatWindow_x                       0x1403AA300
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B33F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A9D40

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B070

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4440
#define CChatWindow__Clear_x                                       0x1403B53F0
#define CChatWindow__WndNotification_x                             0x1403B65B0
#define CChatWindow__AddHistory_x                                  0x1403B4EF0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D5F60
#define CContextMenu__RemoveMenuItem_x                             0x1405D6350
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D6320
#define CContextMenu__CheckMenuItem_x                              0x1405D6190
#define CContextMenu__SetMenuItem_x                                0x1405D6370
#define CContextMenu__AddSeparator_x                               0x1405D60D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C7EA0
#define CContextMenuManager__RemoveMenu_x                          0x1405C8480
#define CContextMenuManager__PopupMenu_x                           0x1405C81C0
#define CContextMenuManager__Flush_x                               0x1405C7F20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C4A40

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406583B0
#define CChatService__GetFriendName_x                              0x1406A2E30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B8E00
#define CComboWnd__Draw_x                                          0x1405B8F00
#define CComboWnd__GetCurChoice_x                                  0x1405B91D0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B9270
#define CComboWnd__InsertChoice_x                                  0x1405B95B0
#define CComboWnd__SetColors_x                                     0x1405B9940
#define CComboWnd__SetChoice_x                                     0x1405B9900
#define CComboWnd__GetItemCount_x                                  0x1405B9260
#define CComboWnd__GetCurChoiceText_x                              0x1405B9210  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B91A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B9670

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C2740
#define CContainerWnd__SetContainer_x                              0x14041E620
#define CContainerWnd__vftable_x                                   0x1409E7988

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC5FB4
#define CDisplay__ZoneMainUI_x                                     0x1405F02B0
#define CDisplay__PreZoneMainUI_x                                  0x14019F420
#define CDisplay__CleanGameUI_x                                    0x1401916F0
#define CDisplay__GetClickedActor_x                                0x1401958B0
#define CDisplay__GetUserDefinedColor_x                            0x140196520
#define CDisplay__InitCharSelectUI_x                               0x1401967D0
#define CDisplay__ReloadUI_x                                       0x1401A1720
#define CDisplay__RestartUI_x                                      0x140202B90
#define CDisplay__WriteTextHD2_x                                   0x1401A8730
#define CDisplay__TrueDistance_x                                   0x1401A83E0
#define CDisplay__SetViewActor_x                                   0x1401A4C50
#define CDisplay__GetFloorHeight_x                                 0x140195B10
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7ED0
#define CDisplay__RealRender_World_x                               0x1401A0AF0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FA4E0
#define CEditWnd__DrawCaret_x                                      0x1405EBF60  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EC400
#define CEditWnd__GetCaretPt_x                                     0x1405EC680  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EC6C0
#define CEditWnd__GetDisplayString_x                               0x1405EC930
#define CEditWnd__GetHorzOffset_x                                  0x1405ECB60
#define CEditWnd__GetLineForPrintableChar_x                        0x1405ECCB0
#define CEditWnd__GetSelStartPt_x                                  0x1405ECF90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ECDE0
#define CEditWnd__PointFromPrintableChar_x                         0x1405EDBC0
#define CEditWnd__ReplaceSelection_x                               0x1405EDF60
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EE400
#define CEditWnd__SetEditable_x                                    0x1405EE680
#define CEditWnd__SetWindowText_x                                  0x1405EE6B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278630
#define CEverQuest__ClickedPlayer_x                                0x14026C650
#define CEverQuest__CreateTargetIndicator_x                        0x14026CF10
#define CEverQuest__DoTellWindow_x                                 0x14010AD80 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B660 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A020
#define CEverQuest__dsp_chat_x                                     0x14010A7C0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A4F80
#define CEverQuest__Emote_x                                        0x14027AA10
#define CEverQuest__GetBodyTypeDesc_x                              0x14027B7F0
#define CEverQuest__GetClassDesc_x                                 0x14027B850
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027BC20
#define CEverQuest__GetDeityDesc_x                                 0x14027BED0
#define CEverQuest__GetLangDesc_x                                  0x14027C300
#define CEverQuest__GetRaceDesc_x                                  0x14027C6A0
#define CEverQuest__InterpretCmd_x                                 0x14027E030
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402935C0
#define CEverQuest__LMouseUp_x                                     0x14027FAB0
#define CEverQuest__RightClickedOnPlayer_x                         0x140290B70
#define CEverQuest__RMouseUp_x                                     0x14028A230
#define CEverQuest__SetGameState_x                                 0x140296040
#define CEverQuest__UPCNotificationFlush_x                         0x14029B9B0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027F710
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028B600
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C420

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D7F40

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F70
#define CGuild__GetGuildName_x                                     0x1400C4FB0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FB2D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7260
#define CHotButton__SetCheck_x                                     0x1402B7530

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140415260
#define CInvSlotMgr__MoveItem_x                                    0x140415DF0
#define CInvSlotMgr__SelectSlot_x                                  0x140418110

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404120A0
#define CInvSlot__SliderComplete_x                                 0x1404138D0
#define CInvSlot__GetItemBase_x                                    0x14040D700
#define CInvSlot__UpdateItem_x                                     0x140413D90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041A2E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043BC50
#define CItemDisplayWnd__UpdateStrings_x                           0x14043E830
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140438450
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140439DB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043B070

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405064D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140508260

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140543260

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140434B30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157D40

// CLabel
#define CLabel__UpdateText_x                                       0x140445C20

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BC780
#define CListWnd__dCListWnd_x                                      0x1405BCBD0
#define CListWnd__vftable_x                                        0x140AD06D0
#define CListWnd__AddColumn_x                                      0x1405BD270
#define CListWnd__AddColumn1_x                                     0x1405BD310
#define CListWnd__AddLine_x                                        0x1405BD470
#define CListWnd__AddString_x                                      0x1405BDA00
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BDF70
#define CListWnd__CalculateVSBRange_x                              0x1405BE250
#define CListWnd__ClearSel_x                                       0x1405BE3F0
#define CListWnd__ClearAllSel_x                                    0x1405BE390
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BE450
#define CListWnd__Compare_x                                        0x1405BE610
#define CListWnd__Draw_x                                           0x1405BEAE0
#define CListWnd__DrawColumnSeparators_x                           0x1405BF690
#define CListWnd__DrawHeader_x                                     0x1405BF750
#define CListWnd__DrawItem_x                                       0x1405BFE20
#define CListWnd__DrawLine_x                                       0x1405C07A0
#define CListWnd__DrawSeparator_x                                  0x1405C0C60
#define CListWnd__EnableLine_x                                     0x1405C1080
#define CListWnd__EnsureVisible_x                                  0x1405C10E0
#define CListWnd__ExtendSel_x                                      0x1405C11D0
#define CListWnd__GetColumnMinWidth_x                              0x1405C1560
#define CListWnd__GetColumnWidth_x                                 0x1405C15E0
#define CListWnd__GetCurSel_x                                      0x1405C16E0
#define CListWnd__GetItemData_x                                    0x1405C1A60
#define CListWnd__GetItemHeight_x                                  0x1405C1AA0
#define CListWnd__GetItemRect_x                                    0x1405C1CC0
#define CListWnd__GetItemText_x                                    0x1405C1F60
#define CListWnd__GetSelList_x                                     0x1405C21B0
#define CListWnd__GetSeparatorRect_x                               0x1405C23A0
#define CListWnd__InsertLine_x                                     0x1405C37F0
#define CListWnd__RemoveLine_x                                     0x1405C3E60
#define CListWnd__SetColors_x                                      0x1405C4220
#define CListWnd__SetColumnJustification_x                         0x1405C4240
#define CListWnd__SetColumnLabel_x                                 0x1405C42C0
#define CListWnd__SetColumnWidth_x                                 0x1405C4460
#define CListWnd__SetCurSel_x                                      0x1405C4530
#define CListWnd__SetItemColor_x                                   0x1405C47A0
#define CListWnd__SetItemData_x                                    0x1405C4840
#define CListWnd__SetItemText_x                                    0x1405C4A80
#define CListWnd__Sort_x                                           0x1405C4E90
#define CListWnd__ToggleSel_x                                      0x1405C5000
#define CListWnd__SetColumnsSizable_x                              0x1405C44B0
#define CListWnd__SetItemWnd_x                                     0x1405C4BB0
#define CListWnd__GetItemWnd_x                                     0x1405C2140
#define CListWnd__SetItemIcon_x                                    0x1405C4880
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BDD40
#define CListWnd__SetVScrollPos_x                                  0x1405C4DF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140459130

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A35398
#define MapViewMap__Clear_x                                        0x14045ACB0
#define MapViewMap__SetZoom_x                                      0x140461300
#define MapViewMap__HandleLButtonDown_x                            0x14045DE40

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140482B30  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404893C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140489B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048D480
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048C7C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140491870

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E160
#define CPacketScrambler__hton_x                                   0x14067E150

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E5830
#define CSidlManagerBase__FindAnimation1_x                         0x1405E5770
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E5E60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E5C10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E4B60
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E4AF0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E4130

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F9460
#define CSidlManager__CreateXWnd_x                                 0x1404F9620

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AA320
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AA440
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F4A20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AA5B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A9A50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A9B20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A9D30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AACA0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AAED0
#define CSidlScreenWnd__GetChildItem_x                             0x1405AB060
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AB2B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B53B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AB620
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AB990
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AC260
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405ACC60
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1FC68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AD2F0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405ADAF0
#define CSidlScreenWnd__vftable_x                                  0x140ACF958
#define CSidlScreenWnd__WndNotification_x                          0x1405ADB40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332790 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332AB0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403329E0
#define CSkillMgr__IsActivatedSkill_x                              0x140332E70
#define CSkillMgr__IsCombatSkill_x                                 0x140332EB0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140332DE0
#define CSkillMgr__GetSkillLastUsed_x                              0x140332A30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140515190
#define CSliderWnd__SetValue_x                                     0x1405C6170
#define CSliderWnd__SetNumTicks_x                                  0x1405C5FF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FFC00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CA900
#define CStmlWnd__CalculateHSBRange_x                              0x1405B4D70
#define CStmlWnd__CalculateVSBRange_x                              0x1405CB790
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CC260
#define CStmlWnd__ForceParseNow_x                                  0x1405CC300
#define CStmlWnd__GetVisibleText_x                                 0x1405CC9C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CE6F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CE730
#define CStmlWnd__SetSTMLText_x                                    0x1405D5700
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D58B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D5C40

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C6540
#define CTabWnd__DrawCurrentPage_x                                 0x1405C65E0
#define CTabWnd__DrawTab_x                                         0x1405C69B0
#define CTabWnd__GetTabRect_x                                      0x1405C7010
#define CTabWnd__InsertPage_x                                      0x1405C72E0
#define CTabWnd__RemovePage_x                                      0x1405C7570
#define CTabWnd__SetPage_x                                         0x1405C76D0
#define CTabWnd__UpdatePage_x                                      0x1405C79D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EEB10
#define CPageWnd__SetTabText_x                                     0x1405EEB80

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE510  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE920


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DD230
#define CTextureFont__DrawWrappedText1_x                           0x1405DD140
#define CTextureFont__DrawWrappedText2_x                           0x1405DD360
#define CTextureFont__GetTextExtent_x                              0x1405DD710
#define CTextureFont__GetHeight_x                                  0x1405DD6D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F3180

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A6F20

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4EF90
#define CXStr__gCXStrAccess_x                                      0x140F1F7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B03D0
#define CXWnd__ClrFocus_x                                          0x1405B06C0
#define CXWnd__Destroy_x                                           0x1405B0840
#define CXWnd__DoAllDrawing_x                                      0x1405B0950
#define CXWnd__DrawColoredRect_x                                   0x1405B1120
#define CXWnd__DrawTooltip_x                                       0x1405B2780
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B2830
#define CXWnd__GetChildItem_x                                      0x1405B3130
#define CXWnd__GetChildWndAt_x                                     0x1405B31F0
#define CXWnd__GetClientRect_x                                     0x1405B34B0
#define CXWnd__GetClientClipRect_x                                 0x1405B3360
#define CXWnd__GetRelativeRect_x                                   0x1405B4EB0
#define CXWnd__GetScreenClipRect_x                                 0x1405B4FC0
#define CXWnd__GetScreenRect_x                                     0x1405B5130
#define CXWnd__GetTooltipRect_x                                    0x1405B52B0
#define CXWnd__IsActive_x                                          0x1405B5870
#define CXWnd__IsDescendantOf_x                                    0x1405B58A0
#define CXWnd__IsReallyVisible_x                                   0x1405B5910
#define CXWnd__IsType_x                                            0x1405B5960
#define CXWnd__Minimize_x                                          0x1405B5A60
#define CXWnd__ProcessTransition_x                                 0x1405B6940
#define CXWnd__Resize_x                                            0x1405B6A50
#define CXWnd__Right_x                                             0x1405B6AF0
#define CXWnd__SetFocus_x                                          0x1405B6EB0
#define CXWnd__SetFont_x                                           0x1405B6F00
#define CXWnd__SetKeyTooltip_x                                     0x1405B7000
#define CXWnd__SetMouseOver_x                                      0x1405B7140
#define CXWnd__SetParent_x                                         0x1405B71C0
#define CXWnd__StartFade_x                                         0x1405B75F0
#define CXWnd__vftable_x                                           0x140ACFF30
#define CXWnd__CXWnd_x                                             0x1405AEF60
#define CXWnd__dCXWnd_x                                            0x1405AF8C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F9C60

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D7500
#define CXWndManager__DrawCursor_x                                 0x1405D77E0
#define CXWndManager__DrawWindows_x                                0x1405D7A40
#define CXWndManager__GetKeyboardFlags_x                           0x1405D8090
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D80D0
#define CXWndManager__RemoveWnd_x                                  0x1405DB900

// CDBStr
#define CDBStr__GetString_x                                        0x14018F8C0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140687FB0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3450
#define CCharacterListWnd__EnterWorld_x                            0x1400D2460
#define CCharacterListWnd__Quit_x                                  0x1400D3430
#define CCharacterListWnd__UpdateList_x                            0x1400D42B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140655720
#define ItemBase__CreateItemTagString_x                            0x1406561B0
#define ItemBase__GetImageNum_x                                    0x1406588F0
#define ItemBase__GetItemValue_x                                   0x14065A3C0
#define ItemBase__IsEmpty_x                                        0x14065C140
#define ItemBase__IsKeyRingItem_x                                  0x14065C880
#define ItemBase__ValueSellMerchant_x                              0x140660AF0
#define ItemClient__CanDrop_x                                      0x1402B9B20
#define ItemClient__CanGoInBag_x                                   0x1402B9C50
#define ItemClient__CreateItemClient_x                             0x1402B9EE0
#define ItemClient__dItemClient_x                                  0x1402B9990

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF110
#define EQ_LoadingS__Array_x                                       0x140D3B230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066CB30
#define PcBase__GetCombatAbility_x                                 0x14066D220
#define PcBase__GetCombatAbilityTimer_x                            0x14066D2C0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066DA60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066E4D0
#define PcClient__AlertInventoryChanged_x                          0x1402DCCA0
#define PcClient__GetConLevel_x                                    0x1402DD3F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFB80
#define PcClient__HasLoreItem_x                                    0x1402E0BD0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED440
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0910

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140222D60
#define EQGroundItemListManager__Add_x                             0x140222F10
#define EQGroundItemListManager__Clear_x                           0x140222FB0
#define EQGroundItemListManager__Delete_x                          0x140223070
#define EQGroundItemListManager__Instance_x                        0x140223100

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DA30

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A0B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406421D0
#define PlayerBase__CanSee1_x                                      0x1406422A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140642780
#define PlayerBase__HasProperty_x                                  0x140642950
#define PlayerBase__IsTargetable_x                                 0x140642A10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE5A0
#define PlayerClient__GetPcClient_x                                0x1403010B0
#define PlayerClient__PlayerClient_x                               0x1402F6900
#define PlayerClient__SetNameSpriteState_x                         0x1403047E0
#define PlayerClient__SetNameSpriteTint_x                          0x1403057A0
#define PlayerZoneClient__ChangeHeight_x                           0x1403142D0
#define PlayerZoneClient__DoAttack_x                               0x140314FE0
#define PlayerZoneClient__GetLevel_x                               0x140318710
#define PlayerZoneClient__IsValidTeleport_x                        0x1402607C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DCA0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030D7D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030D880  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030D980
#define PlayerManagerClient__CreatePlayer_x                        0x14030D2A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140641D90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF060
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BE990
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BEA00
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BEFF0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF180
#define KeypressHandler__HandleKeyUp_x                             0x1402BF2A0
#define KeypressHandler__SaveKeymapping_x                          0x1402BEE80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140685AD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067F8A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E6C90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EB570
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE520
#define PcZoneClient__RemovePetEffect_x                            0x1402F0BF0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF100
#define PcZoneClient__CanEquipItem_x                               0x1402E9860
#define PcZoneClient__GetItemByID_x                                0x1402EC490
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0790
#define PcZoneClient__BandolierSwap_x                              0x1402DCD50

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402652F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CD090

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C14F0
#define CContainerMgr__CloseContainer_x                            0x1403C0E10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C1870

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BD5C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1470

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044CF40
#define CLootWnd__RequestLootSlot_x                                0x14044DF90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE8A0
#define EQ_Spell__SpellAffects_x                                   0x1401DFB80
#define EQ_Spell__SpellAffectBase_x                                0x1401DFAE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC5E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC590
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF7B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF360
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DEC20

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3AB0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051A2A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1405199B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405191B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140521940  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186AC0
#define CTaskManager__GetTaskStatus_x                              0x140186BD0
#define CTaskManager__GetElementDescription_x                      0x140186750

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DCBC0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DBA00
#define EqSoundManager__SoundAssistPlay_x                          0x140337BD0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140337F10  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B8390
#define CTextureAnimation__SetCurCell_x                            0x1405B86A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AF670

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A05B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A0630
#define CharacterBase__IsExpansionFlag_x                           0x140202200

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039C3A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039CE10
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039E360

// messages
#define msg_spell_worn_off_x                                       0x1402192A0
#define msg_new_text_x                                             0x140214A60
#define __msgTokenTextParam_x                                      0x14020BF30
#define msgTokenText_x                                             0x14020BE40

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339810
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339730

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140650CF0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140446370

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C6270
#define CCursorAttachment__IsOkToActivate_x                        0x1403C9700
#define CCursorAttachment__RemoveAttachment_x                      0x1403C99B0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F1620
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F1810
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F1820

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401526B0
#define CFindItemWnd__Update_x                                     0x140153070
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BC30

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CE00
#define LootFiltersManager__GetItemFilterData_x                    0x14015D910
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E1B0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E460

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049FEC0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332350
#define CResolutionHandler__UpdateResolution_x                     0x14059D710

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BD7B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A4990  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A4880  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4150
#define CGroupWnd__UpdateDisplay_x                                 0x1403E3D30

// ItemBase
#define ItemBase__IsLore_x                                         0x14065C9C0
#define ItemBase__IsLoreEquipped_x                                 0x14065CA50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2840

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DB90
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DB20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DB60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C910

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128AA0
#define FactionManagerClient__HandleFactionMessage_x               0x140128E80
#define FactionManagerClient__GetFactionStanding_x                 0x140128270
#define FactionManagerClient__GetMaxFaction_x                      0x140128270
#define FactionManagerClient__GetMinFaction_x                      0x140128120

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134280

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7CD0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6E90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7AF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7A70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033EAF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C910

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AE130

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403506E0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FDA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140688B30
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE4830

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140550320

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083B068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
