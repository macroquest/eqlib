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

#define __ClientDate                                               20251113u
#define __ExpectedVersionDate                                     "Nov 13 2025"
#define __ExpectedVersionTime                                     "18:06:13"
#define __ActualVersionDate_x                                      0x140970898
#define __ActualVersionTime_x                                      0x140970888
#define __ActualVersionBuild_x                                     0x140905A50

// Memory Protection
#define __MemChecker0_x                                            0x1402C3910
#define __MemChecker1_x                                            0x140591B00
#define __MemChecker4_x                                            0x1402910D0
#define __EncryptPad0_x                                            0x140D42F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7B960
#define instEQZoneInfo_x                                           0x140E7BB54 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140224D00
#define __gfMaxZoomCameraDistance_x                                0x140906CF8
#define __gfMaxCameraDistance_x                                    0x140AB0C24
#define __CurrentSocial_x                                          0x140BFE950 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3A730
#define g_eqCommandStates_x                                        0x140D3B7D0
#define __CommandList_x                                            0x140D3BA00
#define __ScreenMode_x                                             0x140DC32A4
#define __gWorld_x                                                 0x140E75E40
#define __gpbCommandEvent_x                                        0x140E76398
#define __ServerHost_x                                             0x140E76598
#define __Guilds_x                                                 0x140E7A520
#define __MemCheckBitmask_x                                        0x140E7BE9F
#define __MemCheckActive_x                                         0x140E7D5B5
#define __MouseEventTime_x                                         0x140EF0F30
#define DI8__MouseState_x                                          0x140EF5170
#define __heqmain_x                                                0x140EF7600
#define DI8__Mouse_x                                               0x140EF7618
#define __HWnd_x                                                   0x140EF7620
#define __Mouse_x                                                  0x140EF7628
#define DI8__Keyboard_x                                            0x140EF7648
#define __LoginName_x                                              0x140EF7D2C
#define __CurrentMapLabel_x                                        0x140F0B840
#define __LabelCache_x                                             0x140F0C410
#define __ChatFilterDefs_x                                         0x140A4AAE0
#define Teleport_Table_Size_x                                      0x140E7642C
#define Teleport_Table_x                                           0x140E73E00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E768B0
#define pinstActiveBanker_x                                        0x140E762E0
#define pinstActiveCorpse_x                                        0x140E762D0
#define pinstActiveGMaster_x                                       0x140E762D8
#define pinstActiveMerchant_x                                      0x140E762C8
#define pinstAltAdvManager_x                                       0x140DC40A8
#define pinstCEverQuest_x                                          0x140EF50C8
#define pinstCamActor_x                                            0x140DC3290
#define pinstCDBStr_x                                              0x140DC2E60
#define pinstCDisplay_x                                            0x140E73DF8
#define pinstControlledPlayer_x                                    0x140E76370
#define pinstCResolutionHandler_x                                  0x140F1CC48
#define pinstCSidlManager_x                                        0x140F1D9B0
#define pinstCXWndManager_x                                        0x140F1D9A8
#define instDynamicZone_x                                          0x140E7A3E0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7A42E
#define instExpeditionName_x                                       0x140E7A46E
#define pinstDZMember_x                                            0x140E7A4F8
#define pinstDZTimerInfo_x                                         0x140E7A500
#define pinstEqLogin_x                                             0x140EF7670
#define instTribute_x                                              0x140D35D60
#define pinstDeviceInputProxy_x                                    0x140E7B9BC
#define pinstEQSoundManager_x                                      0x140DC4430
#define pinstEQSpellStrings_x                                      0x140DA79F0
#define pinstSGraphicsEngine_x                                     0x140F1C9D8
#define pinstLocalPC_x                                             0x140E75E28
#define pinstLocalPlayer_x                                         0x140E762C0
#define pinstCMercenaryClientManager_x                             0x140EF2858
#define pinstModelPlayer_x                                         0x140E762F0
#define pinstRenderInterface_x                                     0x140F1C9F0
#define pinstSkillMgr_x                                            0x140EF4508
#define pinstSpawnManager_x                                        0x140EF2C10
#define pinstSpellManager_x                                        0x140EF4570
#define pinstStringTable_x                                         0x140E75E30
#define pinstSwitchManager_x                                       0x140E73D60
#define pinstTarget_x                                              0x140E76368
#define pinstTaskMember_x                                          0x140D35D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E762E8
#define instTributeActive_x                                        0x140D35D89
#define pinstViewActor_x                                           0x140DC3288
#define pinstWorldData_x                                           0x140E73DF0
#define pinstPlayerPath_x                                          0x140EF2C38
#define pinstTargetIndicator_x                                     0x140EF4620
#define EQObject_Top_x                                             0x140E76420

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F089A0
#define pinstCContainerMgr_x                                       0x140DC32F0
#define pinstCContextMenuManager_x                                 0x140F1D690
#define pinstCInvSlotMgr_x                                         0x140DC32D0
#define pinstCItemDisplayManager_x                                 0x140F0B410
#define pinstCPopupWndManager_x                                    0x140F0BCA0
#define pinstCSpellDisplayMgr_x                                    0x140F0C2F0
#define pinstCTaskManager_x                                        0x140BFEC90
#define pinstEQSuiteTextureLoader_x                                0x140D4C620
#define pinstItemIconCache_x                                       0x140F08D00
#define pinstLootFiltersManager_x                                  0x140DC28A8
#define pinstGFViewListener_x                                      0x140F1CE68


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14024EA70
#define __CastRay_x                                                0x140246CC0
#define __CastRay2_x                                               0x1402469C0
#define __compress_block_x                                         0x140546EC0
#define __ConvertItemTags_x                                        0x140247120
#define __CleanItemTags_x                                          0x14008A7B0
#define __CreateCascadeMenuItems_x                                 0x14018FD90
#define __decompress_block_x                                       0x14058D310
#define __DoesFileExist_x                                          0x1405959B0
#define __EQGetTime_x                                              0x1405920B0
#define __ExecuteCmd_x                                             0x14021C290
#define __FixHeading_x                                             0x14064C910
#define __FlushDxKeyboard_x                                        0x140348260
#define __get_bearing_x                                            0x140250CA0
#define __get_melee_range_x                                        0x140250D90
#define __GetAnimationCache_x                                      0x1403C9C60
#define __GetGaugeValueFromEQ_x                                    0x1405069B0
#define __GetLabelFromEQ_x                                         0x140507FB0
#define __GetXTargetType_x                                         0x14064DBF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064C990
#define __HelpPath_x                                               0x140EF0DF8   // Why?
#define __NewUIINI_x                                               0x1405139E0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402916E0
#define __ProcessGameEvents_x                                      0x140286100
#define __ProcessKeyboardEvents_x                                  0x1403499B0
#define __ProcessMouseEvents_x                                     0x140287810
#define __SaveColors_x                                             0x14019FDB0
#define __STMLToText_x                                             0x1405A55B0
#define __WndProc_x                                                0x140346A00
#define CMemoryMappedFile__SetFile_x                               0x1407FA460
#define DrawNetStatus_x                                            0x1402D2BE0
#define Util__FastTime_x                                           0x1405915E0
#define __eq_delete_x                                              0x1406C6418
#define __eq_new_x                                                 0x1406C6670
#define __CopyLayout_x                                             0x1402BFD10
#define __ThrottleFrameRate_x                                      0x1402756D3
#define __ThrottleFrameRateEnd_x                                   0x1402756D9

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403594B0
#define CAAWnd__Update_x                                           0x1403597B0
#define CAAWnd__UpdateSelected_x                                   0x14035A9B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AD1E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A5BC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140851A10
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400ADB10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AB020
#define AltAdvManager__IsAbilityReady_x                            0x1401AB4B0
#define AltAdvManager__GetAAById_x                                 0x1401AA8F0
#define AltAdvManager__CanTrainAbility_x                           0x1401AA6E0
#define AltAdvManager__CanSeeAbility_x                             0x1401AA3A0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D3BD0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D4A30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D4C80
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E8FA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E9560
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D5650
#define CharacterZoneClient__CastSpell_x                           0x1400D56F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E5470
#define CharacterZoneClient__Cur_HP_x                              0x1400EAC80
#define CharacterZoneClient__Cur_Mana_x                            0x1400EAE40
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D8960
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F14F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FFD90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D9E00
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E88A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F30A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F1F80
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D9F80
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CA3B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CBDB0
#define CharacterZoneClient__GetHPRegen_x                          0x1400F26C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EA8F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F3330
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DA000
#define CharacterZoneClient__GetManaRegen_x                        0x1400F40B0
#define CharacterZoneClient__GetModCap_x                           0x1400FB540
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DA290
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DA460
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CEF40
#define CharacterZoneClient__HasSkill_x                            0x1400F7080
#define CharacterZoneClient__HitBySpell_x                          0x1400DAEF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DE860
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FB020
#define CharacterZoneClient__Max_Endurance_x                       0x1402EE380  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FB370
#define CharacterZoneClient__Max_Mana_x                            0x1402EE5A0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FB7D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E1EB0
#define CharacterZoneClient__SpellDuration_x                       0x1400E2BE0
#define CharacterZoneClient__TotalEffect_x                         0x1400E3FC0
#define CharacterZoneClient__UseSkill_x                            0x140100D10


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140378380

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140382970

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037E7E0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403823F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403850D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD02C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A7E50
#define CChatWindowManager__InitContextMenu_x                      0x1403A7FE0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A6EA0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403AFFA0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A68D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401092A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B0FF0
#define CChatWindow__Clear_x                                       0x1403B1FB0
#define CChatWindow__WndNotification_x                             0x1403B31A0
#define CChatWindow__AddHistory_x                                  0x1403B1AB0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D2E80
#define CContextMenu__RemoveMenuItem_x                             0x1405D3270
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D3240
#define CContextMenu__CheckMenuItem_x                              0x1405D30B0
#define CContextMenu__SetMenuItem_x                                0x1405D3290
#define CContextMenu__AddSeparator_x                               0x1405D2FF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C4D50
#define CContextMenuManager__RemoveMenu_x                          0x1405C5330
#define CContextMenuManager__PopupMenu_x                           0x1405C5070
#define CContextMenuManager__Flush_x                               0x1405C4DD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C1620

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A0270
#define CChatService__GetFriendName_x                              0x1406A0280

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B5C30
#define CComboWnd__Draw_x                                          0x1405B5D30
#define CComboWnd__GetCurChoice_x                                  0x1405B6010  // unused
#define CComboWnd__GetListRect_x                                   0x1405B60B0
#define CComboWnd__InsertChoice_x                                  0x1405B63F0
#define CComboWnd__SetColors_x                                     0x1405B6780
#define CComboWnd__SetChoice_x                                     0x1405B6740
#define CComboWnd__GetItemCount_x                                  0x1405B60A0
#define CComboWnd__GetCurChoiceText_x                              0x1405B6050  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B5FE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B64B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403BF320
#define CContainerWnd__SetContainer_x                              0x14041B060
#define CContainerWnd__vftable_x                                   0x1409E58F8

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC300C
#define CDisplay__ZoneMainUI_x                                     0x1405ED1F0
#define CDisplay__PreZoneMainUI_x                                  0x14019CCB0
#define CDisplay__CleanGameUI_x                                    0x14018EE50
#define CDisplay__GetClickedActor_x                                0x140193020
#define CDisplay__GetUserDefinedColor_x                            0x140193C90
#define CDisplay__InitCharSelectUI_x                               0x140193F40
#define CDisplay__ReloadUI_x                                       0x14019EFB0
#define CDisplay__RestartUI_x                                      0x140200B30
#define CDisplay__WriteTextHD2_x                                   0x1401A5FC0
#define CDisplay__TrueDistance_x                                   0x1401A5C70
#define CDisplay__SetViewActor_x                                   0x1401A24E0
#define CDisplay__GetFloorHeight_x                                 0x140193280
#define CDisplay__ToggleScreenshotMode_x                           0x1401A5760
#define CDisplay__RealRender_World_x                               0x14019E380

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F7420
#define CEditWnd__DrawCaret_x                                      0x1405E8ED0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405E9390
#define CEditWnd__GetCaretPt_x                                     0x1405E9610  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405E9650
#define CEditWnd__GetDisplayString_x                               0x1405E98C0
#define CEditWnd__GetHorzOffset_x                                  0x1405E9B00
#define CEditWnd__GetLineForPrintableChar_x                        0x1405E9C50
#define CEditWnd__GetSelStartPt_x                                  0x1405E9F30  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405E9D80
#define CEditWnd__PointFromPrintableChar_x                         0x1405EAAE0
#define CEditWnd__ReplaceSelection_x                               0x1405EAE90
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EB330
#define CEditWnd__SetEditable_x                                    0x1405EB5C0
#define CEditWnd__SetWindowText_x                                  0x1405EB5F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402767A0
#define CEverQuest__ClickedPlayer_x                                0x14026A770
#define CEverQuest__CreateTargetIndicator_x                        0x14026B030
#define CEverQuest__DoTellWindow_x                                 0x140108FB0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140109890 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140278190
#define CEverQuest__dsp_chat_x                                     0x1401089F0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A3110
#define CEverQuest__Emote_x                                        0x140278B80
#define CEverQuest__GetBodyTypeDesc_x                              0x140279960
#define CEverQuest__GetClassDesc_x                                 0x1402799C0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140279D90
#define CEverQuest__GetDeityDesc_x                                 0x14027A040
#define CEverQuest__GetLangDesc_x                                  0x14027A470
#define CEverQuest__GetRaceDesc_x                                  0x14027A810
#define CEverQuest__InterpretCmd_x                                 0x14027C1A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140291750
#define CEverQuest__LMouseUp_x                                     0x14027DC20
#define CEverQuest__RightClickedOnPlayer_x                         0x14028ECE0
#define CEverQuest__RMouseUp_x                                     0x1402883A0
#define CEverQuest__SetGameState_x                                 0x1402941D0
#define CEverQuest__UPCNotificationFlush_x                         0x140299B40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027D880
#define CEverQuest__ReportSuccessfulHeal_x                         0x140289770
#define CEverQuest__ReportSuccessfulHit_x                          0x14028A590

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D4B50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C3C00
#define CGuild__GetGuildName_x                                     0x1400C3C40

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F80A0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B5410
#define CHotButton__SetCheck_x                                     0x1402B56E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140411C80
#define CInvSlotMgr__MoveItem_x                                    0x140412810
#define CInvSlotMgr__SelectSlot_x                                  0x140414B20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14040ECF0
#define CInvSlot__SliderComplete_x                                 0x1404102F0
#define CInvSlot__GetItemBase_x                                    0x14040A4F0
#define CInvSlot__UpdateItem_x                                     0x1404107A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140416D10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140438690
#define CItemDisplayWnd__UpdateStrings_x                           0x14043B270
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140434EA0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404367F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140437AB0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140503430
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405051C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140540220

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140431570

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140155950

// CLabel
#define CLabel__UpdateText_x                                       0x140442670

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405B95C0
#define CListWnd__dCListWnd_x                                      0x1405B9A10
#define CListWnd__vftable_x                                        0x140ACE410
#define CListWnd__AddColumn_x                                      0x1405BA0B0
#define CListWnd__AddColumn1_x                                     0x1405BA150
#define CListWnd__AddLine_x                                        0x1405BA2B0
#define CListWnd__AddString_x                                      0x1405BA840
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BADB0
#define CListWnd__CalculateVSBRange_x                              0x1405BB090
#define CListWnd__ClearSel_x                                       0x1405BB230
#define CListWnd__ClearAllSel_x                                    0x1405BB1D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BB290
#define CListWnd__Compare_x                                        0x1405BB450
#define CListWnd__Draw_x                                           0x1405BB920
#define CListWnd__DrawColumnSeparators_x                           0x1405BC4D0
#define CListWnd__DrawHeader_x                                     0x1405BC590
#define CListWnd__DrawItem_x                                       0x1405BCC70
#define CListWnd__DrawLine_x                                       0x1405BD5F0
#define CListWnd__DrawSeparator_x                                  0x1405BDAB0
#define CListWnd__EnableLine_x                                     0x1405BDED0
#define CListWnd__EnsureVisible_x                                  0x1405BDF30
#define CListWnd__ExtendSel_x                                      0x1405BE030
#define CListWnd__GetColumnMinWidth_x                              0x1405BE3C0
#define CListWnd__GetColumnWidth_x                                 0x1405BE440
#define CListWnd__GetCurSel_x                                      0x1405BE540
#define CListWnd__GetItemData_x                                    0x1405BE8C0
#define CListWnd__GetItemHeight_x                                  0x1405BE900
#define CListWnd__GetItemRect_x                                    0x1405BEB20
#define CListWnd__GetItemText_x                                    0x1405BEDC0
#define CListWnd__GetSelList_x                                     0x1405BF010
#define CListWnd__GetSeparatorRect_x                               0x1405BF200
#define CListWnd__InsertLine_x                                     0x1405C0670
#define CListWnd__RemoveLine_x                                     0x1405C0CE0
#define CListWnd__SetColors_x                                      0x1405C10A0
#define CListWnd__SetColumnJustification_x                         0x1405C10C0
#define CListWnd__SetColumnLabel_x                                 0x1405C1140
#define CListWnd__SetColumnWidth_x                                 0x1405C12E0
#define CListWnd__SetCurSel_x                                      0x1405C13B0
#define CListWnd__SetItemColor_x                                   0x1405C1620
#define CListWnd__SetItemData_x                                    0x1405C16C0
#define CListWnd__SetItemText_x                                    0x1405C1900
#define CListWnd__Sort_x                                           0x1405C1D10
#define CListWnd__ToggleSel_x                                      0x1405C1E80
#define CListWnd__SetColumnsSizable_x                              0x1405C1330
#define CListWnd__SetItemWnd_x                                     0x1405C1A30
#define CListWnd__GetItemWnd_x                                     0x1405BEFA0
#define CListWnd__SetItemIcon_x                                    0x1405C1700
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BAB80
#define CListWnd__SetVScrollPos_x                                  0x1405C1C70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140455B70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A33308
#define MapViewMap__Clear_x                                        0x1404576F0
#define MapViewMap__SetZoom_x                                      0x14045DD40
#define MapViewMap__HandleLButtonDown_x                            0x14045A880

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14047F580  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140485E10
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404865E0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140489EA0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404891F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14048E2A0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067B3C0
#define CPacketScrambler__hton_x                                   0x14067B3B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E2790
#define CSidlManagerBase__FindAnimation1_x                         0x1405E26D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E2DC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E2B70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E1AC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E1A50
#define CSidlManagerBase__CreateXWnd_x                             0x1405E1090

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F63C0
#define CSidlManager__CreateXWnd_x                                 0x1404F6580

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A70A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A71D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F1960 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A7340
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A67D0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A68A0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A6AB0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A7A30
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A7C60
#define CSidlScreenWnd__GetChildItem_x                             0x1405A7E00
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A8050
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B2160 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A83C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A8730
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405A8FF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405A99F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1CD08
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AA080
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AA870
#define CSidlScreenWnd__vftable_x                                  0x140ACD698
#define CSidlScreenWnd__WndNotification_x                          0x1405AA8C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403311E0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140331680 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403315B0
#define CSkillMgr__IsActivatedSkill_x                              0x140331A30
#define CSkillMgr__IsCombatSkill_x                                 0x140331A70
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403319A0
#define CSkillMgr__GetSkillLastUsed_x                              0x140331600

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C2800
#define CSliderWnd__SetValue_x                                     0x1405C3010
#define CSliderWnd__SetNumTicks_x                                  0x1405C2E90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FCB60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C77B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B1B10
#define CStmlWnd__CalculateVSBRange_x                              0x1405C8650
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405C9140
#define CStmlWnd__ForceParseNow_x                                  0x1405C91E0
#define CStmlWnd__GetVisibleText_x                                 0x1405C98B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CB610
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CB650
#define CStmlWnd__SetSTMLText_x                                    0x1405D2620
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D27D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D2B60

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C33E0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C3480
#define CTabWnd__DrawTab_x                                         0x1405C3850
#define CTabWnd__GetTabRect_x                                      0x1405C3EC0
#define CTabWnd__InsertPage_x                                      0x1405C4190
#define CTabWnd__RemovePage_x                                      0x1405C4420
#define CTabWnd__SetPage_x                                         0x1405C4580
#define CTabWnd__UpdatePage_x                                      0x1405C4880

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EBA50
#define CPageWnd__SetTabText_x                                     0x1405EBAC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BD1F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BD600


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DA150
#define CTextureFont__DrawWrappedText1_x                           0x1405DA060
#define CTextureFont__DrawWrappedText2_x                           0x1405DA280
#define CTextureFont__GetTextExtent_x                              0x1405DA630
#define CTextureFont__GetHeight_x                                  0x1405DA5F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F00C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A3CA0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4BF90
#define CXStr__gCXStrAccess_x                                      0x140F1C868

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AD170
#define CXWnd__ClrFocus_x                                          0x1405AD460
#define CXWnd__Destroy_x                                           0x1405AD5E0
#define CXWnd__DoAllDrawing_x                                      0x1405AD6F0
#define CXWnd__DrawColoredRect_x                                   0x1405ADEC0
#define CXWnd__DrawTooltip_x                                       0x1405AF530
#define CXWnd__DrawTooltipAtPoint_x                                0x1405AF5E0
#define CXWnd__GetChildItem_x                                      0x1405AFEF0
#define CXWnd__GetChildWndAt_x                                     0x1405AFFB0
#define CXWnd__GetClientRect_x                                     0x1405B0270
#define CXWnd__GetClientClipRect_x                                 0x1405B0120
#define CXWnd__GetRelativeRect_x                                   0x1405B1C50
#define CXWnd__GetScreenClipRect_x                                 0x1405B1D60
#define CXWnd__GetScreenRect_x                                     0x1405B1EE0
#define CXWnd__GetTooltipRect_x                                    0x1405B2060
#define CXWnd__IsActive_x                                          0x1405B2620
#define CXWnd__IsDescendantOf_x                                    0x1405B2650
#define CXWnd__IsReallyVisible_x                                   0x1405B26C0
#define CXWnd__IsType_x                                            0x1405B2710
#define CXWnd__Minimize_x                                          0x1405B2810
#define CXWnd__ProcessTransition_x                                 0x1405B3730
#define CXWnd__Resize_x                                            0x1405B3850
#define CXWnd__Right_x                                             0x1405B38F0
#define CXWnd__SetFocus_x                                          0x1405B3CA0
#define CXWnd__SetFont_x                                           0x1405B3CF0
#define CXWnd__SetKeyTooltip_x                                     0x1405B3E00
#define CXWnd__SetMouseOver_x                                      0x1405B3F30
#define CXWnd__SetParent_x                                         0x1405B3FB0
#define CXWnd__StartFade_x                                         0x1405B43F0
#define CXWnd__vftable_x                                           0x140ACDC70
#define CXWnd__CXWnd_x                                             0x1405ABCE0
#define CXWnd__dCXWnd_x                                            0x1405AC650

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F6BA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D4420
#define CXWndManager__DrawCursor_x                                 0x1405D4700
#define CXWndManager__DrawWindows_x                                0x1405D4960
#define CXWndManager__GetKeyboardFlags_x                           0x1405D4FB0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D4FF0
#define CXWndManager__RemoveWnd_x                                  0x1405D8810

// CDBStr
#define CDBStr__GetString_x                                        0x14018D010

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140685220

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D16D0
#define CCharacterListWnd__EnterWorld_x                            0x1400D06E0
#define CCharacterListWnd__Quit_x                                  0x1400D16B0
#define CCharacterListWnd__UpdateList_x                            0x1400D2530

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406529D0
#define ItemBase__CreateItemTagString_x                            0x140653460
#define ItemBase__GetImageNum_x                                    0x140655BA0
#define ItemBase__GetItemValue_x                                   0x140657660
#define ItemBase__IsEmpty_x                                        0x140659400
#define ItemBase__IsKeyRingItem_x                                  0x140659B30
#define ItemBase__ValueSellMerchant_x                              0x14065DDD0
#define ItemClient__CanDrop_x                                      0x1402B7CE0
#define ItemClient__CanGoInBag_x                                   0x1402B7E10
#define ItemClient__CreateItemClient_x                             0x1402B80A0
#define ItemClient__dItemClient_x                                  0x1402B7B50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AC9D0
#define EQ_LoadingS__Array_x                                       0x140D38240

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140669EA0
#define PcBase__GetCombatAbility_x                                 0x14066A590
#define PcBase__GetCombatAbilityTimer_x                            0x14066A630
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066ADD0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066B8A0
#define PcClient__AlertInventoryChanged_x                          0x1402DAE30
#define PcClient__GetConLevel_x                                    0x1402DB440  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DDBD0
#define PcClient__HasLoreItem_x                                    0x1402DEC80
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EBFF0
#define PcZoneClient__RemoveMyAffect_x                             0x1402EF4C0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140220C90
#define EQGroundItemListManager__Add_x                             0x140220E40
#define EQGroundItemListManager__Clear_x                           0x140220EE0
#define EQGroundItemListManager__Delete_x                          0x140220FA0
#define EQGroundItemListManager__Instance_x                        0x140221030

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025BB50

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140187810

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14063F720
#define PlayerBase__CanSee1_x                                      0x14063F7F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14063FCD0
#define PlayerBase__HasProperty_x                                  0x14063FEA0
#define PlayerBase__IsTargetable_x                                 0x14063FF60
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FD160
#define PlayerClient__GetPcClient_x                                0x1402FFC90
#define PlayerClient__PlayerClient_x                               0x1402F54B0
#define PlayerClient__SetNameSpriteState_x                         0x1403033C0
#define PlayerClient__SetNameSpriteTint_x                          0x140304380
#define PlayerZoneClient__ChangeHeight_x                           0x140312DB0
#define PlayerZoneClient__DoAttack_x                               0x140313AC0
#define PlayerZoneClient__GetLevel_x                               0x140317200
#define PlayerZoneClient__IsValidTeleport_x                        0x14025E8F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019B530

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030C2B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030C360  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030C460
#define PlayerManagerClient__CreatePlayer_x                        0x14030BD80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14063F2E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BD230
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BCB60
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BCBD0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BD1C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BD350
#define KeypressHandler__HandleKeyUp_x                             0x1402BD470
#define KeypressHandler__SaveKeymapping_x                          0x1402BD050  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140682D40  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067CB00

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E4D40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EA130
#define PcZoneClient__GetPcSkillLimit_x                            0x1402ED0D0
#define PcZoneClient__RemovePetEffect_x                            0x1402EF7A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EDCB0
#define PcZoneClient__CanEquipItem_x                               0x1402E8430
#define PcZoneClient__GetItemByID_x                                0x1402EB050
#define PcZoneClient__RemoveBuffEffect_x                           0x1402EF340
#define PcZoneClient__BandolierSwap_x                              0x1402E7450

// Doors
#define EQSwitch__UseSwitch_x                                      0x140263420

// IconCache
#define IconCache__GetIcon_x                                       0x1403C9C90

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BE0D0
#define CContainerMgr__CloseContainer_x                            0x1403BD9F0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403BE450

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BA030

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402AF600

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140449990
#define CLootWnd__RequestLootSlot_x                                0x14044A9E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DC3D0
#define EQ_Spell__SpellAffects_x                                   0x1401DD6A0
#define EQ_Spell__SpellAffectBase_x                                0x1401DD600
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DA5F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DA5A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DD2D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DCE80
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DC750

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C2780

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1405171E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1405168F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405160F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14051E880  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401841B0
#define CTaskManager__GetTaskStatus_x                              0x1401842C0
#define CTaskManager__GetElementDescription_x                      0x140183E40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DA6F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D9530
#define EqSoundManager__SoundAssistPlay_x                          0x140336820  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140336B60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B51C0
#define CTextureAnimation__SetCurCell_x                            0x1405B54D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AD800

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069D940
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069D9C0
#define CharacterBase__IsExpansionFlag_x                           0x140200190

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140398F30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403999A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039AEF0

// messages
#define msg_spell_worn_off_x                                       0x1402171D0
#define msg_new_text_x                                             0x140212990
#define __msgTokenTextParam_x                                      0x140209EB0
#define msgTokenText_x                                             0x140209DC0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338450
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338370

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064DFD0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140442DC0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C2E50
#define CCursorAttachment__IsOkToActivate_x                        0x1403C62E0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C6590
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EE560
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EE750
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EE760

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140150290
#define CFindItemWnd__Update_x                                     0x140150C30
#define CFindItemWnd__PickupSelectedItem_x                         0x140149C00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015AA10
#define LootFiltersManager__GetItemFilterData_x                    0x14015B520
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015BDC0
#define LootFiltersManager__SetItemLootFilter_x                    0x14015C070

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049C8F0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140330DA0
#define CResolutionHandler__UpdateResolution_x                     0x14059A650

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BA3A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A1DE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A1CD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E0F30
#define CGroupWnd__UpdateDisplay_x                                 0x1403E0B10

// ItemBase
#define ItemBase__IsLore_x                                         0x140659C70
#define ItemBase__IsLoreEquipped_x                                 0x140659D00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D09D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025BCB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025BC40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025BC80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B200

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140126CB0
#define FactionManagerClient__HandleFactionMessage_x               0x140127090
#define FactionManagerClient__GetFactionStanding_x                 0x140126480
#define FactionManagerClient__GetMaxFaction_x                      0x140126480
#define FactionManagerClient__GetMinFaction_x                      0x140126330

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AF7F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140132490

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B55B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B4770
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B53D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B5350  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033D700

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032B200

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AAEB0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086E70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034F000

// AchievementManager
#define AchievementManager__Instance_x                             0x14008F190

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140685DA0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE2620

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054D2E0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x140839058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071550
#define CGFScreenWnd__CGFScreenWnd1_x                              0x1400716E0
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140071890

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
