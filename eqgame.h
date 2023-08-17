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
// eqgame.exe offsets
//

#define __ClientDate                                               20230814u
#define __ExpectedVersionDate                                     "Aug 14 2023"
#define __ExpectedVersionTime                                     "13:51:25"
#define __ActualVersionDate_x                                      0x14081BA18
#define __ActualVersionTime_x                                      0x14081BA08
#define __ActualVersionBuild_x                                     0x1408107C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A7100
#define __MemChecker1_x                                            0x140559BD0
#define __MemChecker4_x                                            0x140276100
#define __EncryptPad0_x                                            0x140AD8870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C148D0
#define instEQZoneInfo_x                                           0x140C14AC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EDE0
#define __gfMaxZoomCameraDistance_x                                0x140811970
#define __gfMaxCameraDistance_x                                    0x140850AB0
#define __CurrentSocial_x                                          0x14099494C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD01B0
#define g_eqCommandStates_x                                        0x140AD1220
#define __CommandList_x                                            0x140AD1460
#define __ScreenMode_x                                             0x140B5C1AC
#define __gWorld_x                                                 0x140C0D7D0
#define __gpbCommandEvent_x                                        0x140C0D1F4
#define __ServerHost_x                                             0x140C0D3D8
#define __Guilds_x                                                 0x140C13480
#define __MouseEventTime_x                                         0x140C89E08
#define DI8__Mouse_Check_x                                         0x140C8DF38
#define __heqmain_x                                                0x140C903D0
#define DI8__Mouse_x                                               0x140C90428
#define __HWnd_x                                                   0x140C90ED8
#define __Mouse_x                                                  0x140C903E8
#define DI8__Main_x                                                0x140C90400
#define DI8__Keyboard_x                                            0x140C90408
#define __LoginName_x                                              0x140C90B6C
#define __CurrentMapLabel_x                                        0x140CA40B0
#define __LabelCache_x                                             0x140CA4C80
#define __SubscriptionType_x                                       0x140CD9B70
#define Teleport_Table_Size_x                                      0x140C0D280
#define Teleport_Table_x                                           0x140C0D800

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C0F810
#define pinstActiveBanker_x                                        0x140C0D718
#define pinstActiveCorpse_x                                        0x140C0D708
#define pinstActiveGMaster_x                                       0x140C0D710
#define pinstActiveMerchant_x                                      0x140C0D700
#define pinstAltAdvManager_x                                       0x140B5D038
#define pinstCEverQuest_x                                          0x140C90420
#define pinstCamActor_x                                            0x140B5C198
#define pinstCDBStr_x                                              0x140B5BE40
#define pinstCDisplay_x                                            0x140C0F800
#define pinstControlledPlayer_x                                    0x140C0D7A8
#define pinstCResolutionHandler_x                                  0x141312718
#define pinstCSidlManager_x                                        0x140CB5F80
#define pinstCXWndManager_x                                        0x140CB5F78
#define instDynamicZone_x                                          0x140C13340 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C1338E
#define instExpeditionName_x                                       0x140C133CE
#define pinstDZMember_x                                            0x140C13458
#define pinstDZTimerInfo_x                                         0x140C13460
#define pinstEqLogin_x                                             0x140C904B0
#define instTribute_x                                              0x140ACB840
#define pinstEQSoundManager_x                                      0x140B5D3B8
#define pinstEQSpellStrings_x                                      0x140B40A50
#define pinstSGraphicsEngine_x                                     0x141312498
#define pinstLocalPC_x                                             0x140C0D7E8
#define pinstLocalPlayer_x                                         0x140C0D6F8
#define pinstCMercenaryClientManager_x                             0x140C8B6B8
#define pinstModelPlayer_x                                         0x140C0D728
#define pinstRenderInterface_x                                     0x1413124B0
#define pinstSkillMgr_x                                            0x140C8D350
#define pinstSpawnManager_x                                        0x140C8BA70
#define pinstSpellManager_x                                        0x140C8D3B8
#define pinstStringTable_x                                         0x140C0D7F0
#define pinstSwitchManager_x                                       0x140C0CCD0
#define pinstTarget_x                                              0x140C0D7A0
#define pinstTaskMember_x                                          0x140ACB830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C0D7B0
#define pinstTradeTarget_x                                         0x140C0D720
#define instTributeActive_x                                        0x140ACB869
#define pinstViewActor_x                                           0x140B5C190
#define pinstWorldData_x                                           0x140C0D7F8
#define pinstPlayerPath_x                                          0x140C8BA98
#define pinstTargetIndicator_x                                     0x140C8D468
#define EQObject_Top_x                                             0x140C0D7C8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140CA1208
#define pinstCContainerMgr_x                                       0x140B5C448
#define pinstCContextMenuManager_x                                 0x140CB5C60
#define pinstCInvSlotMgr_x                                         0x140B5C428
#define pinstCItemDisplayManager_x                                 0x140CA3C80
#define pinstCPopupWndManager_x                                    0x140CA4510
#define pinstCSpellDisplayMgr_x                                    0x140CA4B60
#define pinstCTaskManager_x                                        0x140994C80
#define pinstEQSuiteTextureLoader_x                                0x140AE1EF0
#define pinstItemIconCache_x                                       0x140CA1568
#define pinstLootFiltersManager_x                                  0x140B5B888
#define pinstGFViewListener_x                                      0x140CB5438


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140236D40
#define __CastRay_x                                                0x14022F620
#define __CastRay2_x                                               0x14022F320
#define __ConvertItemTags_x                                        0x14022FA20
#define __CleanItemTags_x                                          0x1400875F0
#define __CreateCascadeMenuItems_x                                 0x1401802B0
#define __DoesFileExist_x                                          0x14055DA90
#define __EQGetTime_x                                              0x14055A180
#define __ExecuteCmd_x                                             0x140206800
#define __FixHeading_x                                             0x140684210
#define __FlushDxKeyboard_x                                        0x140325B90
#define __get_bearing_x                                            0x140238F30
#define __get_melee_range_x                                        0x140239030
#define __GetAnimationCache_x                                      0x1403A02C0
#define __GetGaugeValueFromEQ_x                                    0x1404D0E20
#define __GetLabelFromEQ_x                                         0x1404D2420
#define __GetXTargetType_x                                         0x140685530   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140684290
#define __HelpPath_x                                               0x140C89CD0   // Why?
#define __NewUIINI_x                                               0x1404DD920   // Why?
#define __ProcessGameEvents_x                                      0x14026B530
#define __ProcessKeyboardEvents_x                                  0x1403273F0
#define __ProcessMouseEvents_x                                     0x14026CA20
#define __SaveColors_x                                             0x140190430
#define __STMLToText_x                                             0x140569C60
#define __WndProc_x                                                0x140324300
#define CMemoryMappedFile__SetFile_x                               0x1407BAFA0
#define DrawNetStatus_x                                            0x1402B5F10
#define Util__FastTime_x                                           0x140559710
#define __eq_delete_x                                              0x1406AE3B4
#define __eq_new_x                                                 0x1406AE370
#define __CopyLayout_x                                             0x1402A3530
#define __ThrottleFrameRate_x                                      0x14025ADED
#define __ThrottleFrameRateEnd_x                                   0x14025AE4D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403365A0
#define CAAWnd__Update_x                                           0x1403368A0
#define CAAWnd__UpdateSelected_x                                   0x140337860

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A97E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2130
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F7858
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA0D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B480
#define AltAdvManager__IsAbilityReady_x                            0x14019B700
#define AltAdvManager__GetAAById_x                                 0x14019AD50
#define AltAdvManager__CanTrainAbility_x                           0x14019AB80
#define AltAdvManager__CanSeeAbility_x                             0x14019A840

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CFFC0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0DF0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1040
#define CharacterZoneClient__CanUseItem_x                          0x1400E5740
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1A10
#define CharacterZoneClient__CastSpell_x                           0x1400D1AB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1210
#define CharacterZoneClient__Cur_HP_x                              0x1400E6E20
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6FE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4AD0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED7E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC740  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5F80
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4C10
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF380
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE250
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6150
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C65C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7F90
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE990
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6A90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF610
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6250
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0370
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6460
#define CharacterZoneClient__GetModCap_x                           0x1400F7AB0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6500
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6710
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB100
#define CharacterZoneClient__HasSkill_x                            0x1400F3370
#define CharacterZoneClient__HitBySpell_x                          0x1400D71C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAA50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F75A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D01D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F78E0
#define CharacterZoneClient__Max_Mana_x                            0x1402D03F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D40
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDE90
#define CharacterZoneClient__SpellDuration_x                       0x1400DEB90
#define CharacterZoneClient__TotalEffect_x                         0x1400DFEC0
#define CharacterZoneClient__UseSkill_x                            0x1400FD690


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140354AF0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035ED90

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035AC70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140359D00

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140361450

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14085F1D8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140382CD0
#define CChatWindowManager__InitContextMenu_x                      0x140382E60
#define CChatWindowManager__FreeChatWindow_x                       0x140381F20
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140389D10
#define CChatWindowManager__CreateChatWindow_x                     0x140381860

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105810

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038AD00
#define CChatWindow__Clear_x                                       0x14038BB80
#define CChatWindow__WndNotification_x                             0x14038CD70
#define CChatWindow__AddHistory_x                                  0x14038B680

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140597140
#define CContextMenu__RemoveMenuItem_x                             0x140597520
#define CContextMenu__RemoveAllMenuItems_x                         0x1405974F0
#define CContextMenu__CheckMenuItem_x                              0x140597360
#define CContextMenu__SetMenuItem_x                                0x140597540
#define CContextMenu__AddSeparator_x                               0x1405972A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140589030
#define CContextMenuManager__RemoveMenu_x                          0x140589610
#define CContextMenuManager__PopupMenu_x                           0x140589350
#define CContextMenuManager__Flush_x                               0x1405890B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403983F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064CC70
#define CChatService__GetFriendName_x                              0x14064CC80

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057A000
#define CComboWnd__Draw_x                                          0x14057A0F0
#define CComboWnd__GetCurChoice_x                                  0x14057A3C0  // unused
#define CComboWnd__GetListRect_x                                   0x14057A460
#define CComboWnd__InsertChoice_x                                  0x14057A770
#define CComboWnd__SetColors_x                                     0x14057AB00
#define CComboWnd__SetChoice_x                                     0x14057AAC0
#define CComboWnd__GetItemCount_x                                  0x14057A450
#define CComboWnd__GetCurChoiceText_x                              0x14057A400  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057A390
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057A830

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396180
#define CContainerWnd__SetContainer_x                              0x1403E8E70
#define CContainerWnd__vftable_x                                   0x14082ACE8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5BF54
#define CDisplay__ZoneMainUI_x                                     0x1405B1230
#define CDisplay__PreZoneMainUI_x                                  0x14018D260
#define CDisplay__CleanGameUI_x                                    0x14017F3B0
#define CDisplay__GetClickedActor_x                                0x140183540
#define CDisplay__GetUserDefinedColor_x                            0x1401841B0
#define CDisplay__InitCharSelectUI_x                               0x140184460
#define CDisplay__ReloadUI_x                                       0x14018F540
#define CDisplay__WriteTextHD2_x                                   0x1401966D0
#define CDisplay__TrueDistance_x                                   0x140196380
#define CDisplay__SetViewActor_x                                   0x140192BA0
#define CDisplay__GetFloorHeight_x                                 0x1401837A0
#define CDisplay__ToggleScreenshotMode_x                           0x140195E70
#define CDisplay__RealRender_World_x                               0x14018E930

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BB580
#define CEditWnd__DrawCaret_x                                      0x1405ACFA0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AD430
#define CEditWnd__GetCaretPt_x                                     0x1405AD6B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AD6F0
#define CEditWnd__GetDisplayString_x                               0x1405AD950
#define CEditWnd__GetHorzOffset_x                                  0x1405ADB90
#define CEditWnd__GetLineForPrintableChar_x                        0x1405ADCD0
#define CEditWnd__GetSelStartPt_x                                  0x1405ADFB0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ADE00
#define CEditWnd__PointFromPrintableChar_x                         0x1405AEB60
#define CEditWnd__ReplaceSelection_x                               0x1405AEF00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405AF3A0
#define CEditWnd__SetEditable_x                                    0x1405AF630
#define CEditWnd__SetWindowText_x                                  0x1405AF660

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025BDD0
#define CEverQuest__ClickedPlayer_x                                0x140251C00
#define CEverQuest__CreateTargetIndicator_x                        0x1402524C0
#define CEverQuest__DoTellWindow_x                                 0x140105520 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105DE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D800
#define CEverQuest__dsp_chat_x                                     0x140104F60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402879F0
#define CEverQuest__Emote_x                                        0x14025E1B0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025EF50
#define CEverQuest__GetClassDesc_x                                 0x14025EFB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F380
#define CEverQuest__GetDeityDesc_x                                 0x14025F630
#define CEverQuest__GetLangDesc_x                                  0x14025FA60
#define CEverQuest__GetRaceDesc_x                                  0x14025FE00
#define CEverQuest__InterpretCmd_x                                 0x140261710
#define CEverQuest__LeftClickedOnPlayer_x                          0x140276780
#define CEverQuest__LMouseUp_x                                     0x1402630C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140273FE0
#define CEverQuest__RMouseUp_x                                     0x14026D5B0
#define CEverQuest__SetGameState_x                                 0x140278CB0
#define CEverQuest__UPCNotificationFlush_x                         0x14027E4A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262D30
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026E960
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F7C0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AA670

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0310
#define CGuild__GetGuildName_x                                     0x1400C0350

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CCAA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140298FD0
#define CHotButton__SetCheck_x                                     0x1402992A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E1BF0
#define CInvSlotMgr__MoveItem_x                                    0x1403E1DD0
#define CInvSlotMgr__SelectSlot_x                                  0x1403E3740

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DEE50
#define CInvSlot__SliderComplete_x                                 0x1403E03A0
#define CInvSlot__GetItemBase_x                                    0x1403DAA80
#define CInvSlot__UpdateItem_x                                     0x1403E0860

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E4990

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140405D20
#define CItemDisplayWnd__UpdateStrings_x                           0x1404086E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140402790
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140403FB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140405140

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CD9A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404CF580

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140508C50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FEED0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140147E70

// CLabel
#define CLabel__UpdateText_x                                       0x14040FAB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057D940
#define CListWnd__dCListWnd_x                                      0x14057DD80
#define CListWnd__vftable_x                                        0x14085D348
#define CListWnd__AddColumn_x                                      0x14057E420
#define CListWnd__AddColumn1_x                                     0x14057E4C0
#define CListWnd__AddLine_x                                        0x14057E620
#define CListWnd__AddString_x                                      0x14057EBB0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14057F120
#define CListWnd__CalculateVSBRange_x                              0x14057F400
#define CListWnd__ClearSel_x                                       0x14057F5B0
#define CListWnd__ClearAllSel_x                                    0x14057F550
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14057F610
#define CListWnd__Compare_x                                        0x14057F7C0
#define CListWnd__Draw_x                                           0x14057FC90
#define CListWnd__DrawColumnSeparators_x                           0x140580830
#define CListWnd__DrawHeader_x                                     0x1405808F0
#define CListWnd__DrawItem_x                                       0x140580FC0
#define CListWnd__DrawLine_x                                       0x140581930
#define CListWnd__DrawSeparator_x                                  0x140581DF0
#define CListWnd__EnableLine_x                                     0x140582210
#define CListWnd__EnsureVisible_x                                  0x140582270
#define CListWnd__ExtendSel_x                                      0x140582370
#define CListWnd__GetColumnMinWidth_x                              0x1405826A0
#define CListWnd__GetColumnWidth_x                                 0x140582720
#define CListWnd__GetCurSel_x                                      0x140582820
#define CListWnd__GetItemData_x                                    0x140582BA0
#define CListWnd__GetItemHeight_x                                  0x140582BE0
#define CListWnd__GetItemRect_x                                    0x140582E00
#define CListWnd__GetItemText_x                                    0x1405830A0
#define CListWnd__GetSelList_x                                     0x1405832F0
#define CListWnd__GetSeparatorRect_x                               0x1405834E0
#define CListWnd__InsertLine_x                                     0x140584950
#define CListWnd__RemoveLine_x                                     0x140584FC0
#define CListWnd__SetColors_x                                      0x140585390
#define CListWnd__SetColumnJustification_x                         0x1405853B0
#define CListWnd__SetColumnLabel_x                                 0x140585430
#define CListWnd__SetColumnWidth_x                                 0x1405855D0
#define CListWnd__SetCurSel_x                                      0x1405856A0
#define CListWnd__SetItemColor_x                                   0x140585910
#define CListWnd__SetItemData_x                                    0x1405859B0
#define CListWnd__SetItemText_x                                    0x140585BF0
#define CListWnd__Sort_x                                           0x140586000
#define CListWnd__ToggleSel_x                                      0x140586170
#define CListWnd__SetColumnsSizable_x                              0x140585620
#define CListWnd__SetItemWnd_x                                     0x140585D20
#define CListWnd__GetItemWnd_x                                     0x140583280
#define CListWnd__SetItemIcon_x                                    0x1405859F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14057EEF0
#define CListWnd__SetVScrollPos_x                                  0x140585F60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140422D30

// MapViewMap
#define MapViewMap__vftable_x                                      0x140837840
#define MapViewMap__Clear_x                                        0x1404248B0
#define MapViewMap__SetZoom_x                                      0x14042AEF0
#define MapViewMap__HandleLButtonDown_x                            0x140427A30

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044C630  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140452C00
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404533B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140456BB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140455EF0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045AE60

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062A6F0
#define CPacketScrambler__hton_x                                   0x14062A6E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A6870
#define CSidlManagerBase__FindAnimation1_x                         0x1405A67B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A6EA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A6C50
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A5BB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A5B40
#define CSidlManagerBase__CreateXWnd_x                             0x1405A5180

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C0C40
#define CSidlManager__CreateXWnd_x                                 0x1404C0E00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056B6F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056B810
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B5B40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056B980
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056AE80
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056AF50
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056B120
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056C020
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056C250
#define CSidlScreenWnd__GetChildItem_x                             0x14056C3F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056C640
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140576620 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056C9B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056CD20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056D5D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056DEC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB52D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056E500
#define CSidlScreenWnd__StoreIniVis_x                              0x14056ECF0
#define CSidlScreenWnd__vftable_x                                  0x14085C598
#define CSidlScreenWnd__WndNotification_x                          0x14056ED40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030F3D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030F7D0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030F710
#define CSkillMgr__IsActivatedSkill_x                              0x14030FB70
#define CSkillMgr__IsCombatSkill_x                                 0x14030FBB0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140586AF0
#define CSliderWnd__SetValue_x                                     0x140587300
#define CSliderWnd__SetNumTicks_x                                  0x140587180

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C7270

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058BA70
#define CStmlWnd__CalculateHSBRange_x                              0x140575FD0
#define CStmlWnd__CalculateVSBRange_x                              0x14058C920
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058D420
#define CStmlWnd__ForceParseNow_x                                  0x14058D4C0
#define CStmlWnd__GetVisibleText_x                                 0x14058DB90
#define CStmlWnd__MakeStmlColorTag_x                               0x14058F8F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14058F930
#define CStmlWnd__SetSTMLText_x                                    0x1405968F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140596AA0
#define CStmlWnd__UpdateHistoryString_x                            0x140596E30

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405876D0
#define CTabWnd__DrawCurrentPage_x                                 0x140587770
#define CTabWnd__DrawTab_x                                         0x140587B40
#define CTabWnd__GetTabRect_x                                      0x1405881A0
#define CTabWnd__InsertPage_x                                      0x140588470
#define CTabWnd__RemovePage_x                                      0x140588700
#define CTabWnd__SetPage_x                                         0x140588860
#define CTabWnd__UpdatePage_x                                      0x140588B60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405AFAC0
#define CPageWnd__SetTabText_x                                     0x1405AFB30

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9A50  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9E60


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059E270
#define CTextureFont__DrawWrappedText1_x                           0x14059E180
#define CTextureFont__DrawWrappedText2_x                           0x14059E3A0
#define CTextureFont__GetTextExtent_x                              0x14059E750
#define CTextureFont__GetHeight_x                                  0x14059E710

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B42A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140568350

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE1860
#define CXStr__gCXStrAccess_x                                      0x140CB50D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140571760
#define CXWnd__ClrFocus_x                                          0x1405719A0
#define CXWnd__Destroy_x                                           0x140571B20
#define CXWnd__DoAllDrawing_x                                      0x140571C20
#define CXWnd__DrawColoredRect_x                                   0x1405723E0
#define CXWnd__DrawTooltip_x                                       0x140573A60
#define CXWnd__DrawTooltipAtPoint_x                                0x140573B10
#define CXWnd__GetChildItem_x                                      0x140574410
#define CXWnd__GetChildWndAt_x                                     0x1405744D0
#define CXWnd__GetClientRect_x                                     0x140574780
#define CXWnd__GetClientClipRect_x                                 0x140574630
#define CXWnd__GetRelativeRect_x                                   0x140576110
#define CXWnd__GetScreenClipRect_x                                 0x140576220
#define CXWnd__GetScreenRect_x                                     0x1405763A0
#define CXWnd__GetTooltipRect_x                                    0x140576520
#define CXWnd__IsActive_x                                          0x140576AE0
#define CXWnd__IsDescendantOf_x                                    0x140576B10
#define CXWnd__IsReallyVisible_x                                   0x140576B70
#define CXWnd__IsType_x                                            0x140576BB0
#define CXWnd__Minimize_x                                          0x140576CB0
#define CXWnd__ProcessTransition_x                                 0x140577B40
#define CXWnd__Resize_x                                            0x140577C60
#define CXWnd__Right_x                                             0x140577D00
#define CXWnd__SetFocus_x                                          0x1405780B0
#define CXWnd__SetFont_x                                           0x140578100
#define CXWnd__SetKeyTooltip_x                                     0x140578200
#define CXWnd__SetMouseOver_x                                      0x140578340
#define CXWnd__SetParent_x                                         0x1405783C0
#define CXWnd__StartFade_x                                         0x140578800
#define CXWnd__vftable_x                                           0x14085CBB0
#define CXWnd__CXWnd_x                                             0x1405702F0
#define CXWnd__dCXWnd_x                                            0x140570C40

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BAD00

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405986D0
#define CXWndManager__DrawCursor_x                                 0x1405989B0
#define CXWndManager__DrawWindows_x                                0x140598C10
#define CXWndManager__GetKeyboardFlags_x                           0x1405992D0
#define CXWndManager__HandleKeyboardMsg_x                          0x140599310
#define CXWndManager__RemoveWnd_x                                  0x14059C930

// CDBStr
#define CDBStr__GetString_x                                        0x14017D520

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140633630

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD20
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA20
#define CCharacterListWnd__Quit_x                                  0x1400CDD00
#define CCharacterListWnd__UpdateList_x                            0x1400CEA10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140603040
#define ItemBase__CreateItemTagString_x                            0x140603A90
#define ItemBase__GetImageNum_x                                    0x140605FE0
#define ItemBase__GetItemValue_x                                   0x140607B00
#define ItemBase__IsEmpty_x                                        0x140609680
#define ItemBase__IsKeyRingItem_x                                  0x140609DA0
#define ItemBase__ValueSellMerchant_x                              0x14060DDA0
#define ItemClient__CanDrop_x                                      0x14029B5B0
#define ItemClient__CanGoInBag_x                                   0x14029B6E0
#define ItemClient__CreateItemClient_x                             0x14029B9C0
#define ItemClient__dItemClient_x                                  0x14029B420

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019CC20
#define EQ_LoadingS__Array_x                                       0x140ACDCC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140619F00
#define PcBase__GetCombatAbility_x                                 0x14061A5A0
#define PcBase__GetCombatAbilityTimer_x                            0x14061A640
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061AD90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061B720
#define PcClient__AlertInventoryChanged_x                          0x1402BD9F0
#define PcClient__GetConLevel_x                                    0x1402BDFD0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C06B0
#define PcClient__HasLoreItem_x                                    0x1402C17A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE710
#define PcZoneClient__RemoveMyAffect_x                             0x1402D12A0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AE50  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B000  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B160  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B0A0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402434F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140177D40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406765F0
#define PlayerBase__CanSee1_x                                      0x1406766C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140676B80
#define PlayerBase__HasProperty_x                                  0x140676DA0
#define PlayerBase__IsTargetable_x                                 0x140676E60
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD1F0
#define PlayerClient__GetPcClient_x                                0x1402DF8C0
#define PlayerClient__PlayerClient_x                               0x1402D6550
#define PlayerClient__SetNameSpriteState_x                         0x1402E2D70
#define PlayerClient__SetNameSpriteTint_x                          0x1402E3D30
#define PlayerZoneClient__ChangeHeight_x                           0x1402F1FF0
#define PlayerZoneClient__DoAttack_x                               0x1402F2D00
#define PlayerZoneClient__GetLevel_x                               0x1402F6470
#define PlayerZoneClient__IsValidTeleport_x                        0x140246280
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BAF0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EBCC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EBD70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EBE20
#define PlayerManagerClient__CreatePlayer_x                        0x1402EB6C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140676260

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0A50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0650
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A06C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A09E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0B70
#define KeypressHandler__HandleKeyUp_x                             0x1402A0C70
#define KeypressHandler__SaveKeymapping_x                          0x1402A08F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406311F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062BD90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C6ED0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC770
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CEE10
#define PcZoneClient__RemovePetEffect_x                            0x1402D13A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402CFAF0
#define PcZoneClient__CanEquipItem_x                               0x1402CAA70
#define PcZoneClient__GetItemByID_x                                0x1402CD7C0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D1120
#define PcZoneClient__BandolierSwap_x                              0x1402C9A50
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CED60

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024ADB0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A02F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140394F60
#define CContainerMgr__CloseContainer_x                            0x1403948A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403952E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140485A80

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293790

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140416D90
#define CLootWnd__RequestLootSlot_x                                0x140417DA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CCC80
#define EQ_Spell__SpellAffects_x                                   0x1401CDF40
#define EQ_Spell__SpellAffectBase_x                                0x1401CDEA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D68F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D68A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CDB60
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD720
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCFF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BEF60

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E17B0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E17F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E0CF0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E02A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E8850  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401745F0
#define CTaskManager__GetTaskStatus_x                              0x140174700
#define CTaskManager__GetElementDescription_x                      0x140174280

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAFF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9E30
#define EqSoundManager__SoundAssistPlay_x                          0x140314830  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140314B70  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140579590
#define CTextureAnimation__SetCurCell_x                            0x1405798A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291A00

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064A6D0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064A750
#define CharacterBase__IsExpansionFlag_x                           0x1401ED630

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140374D10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140375670
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140376BA0

// messages
#define msg_spell_worn_off_x                                       0x1402018F0
#define msg_new_text_x                                             0x1401FD270
#define __msgTokenTextParam_x                                      0x1401F5020
#define msgTokenText_x                                             0x1401F4F40

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140316220
#define SpellManager__GetSpellByGroupAndRank_x                     0x140316140

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140685910

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140410200

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039C3C0
#define CCursorAttachment__AttachToCursor1_x                       0x140399A80
#define CCursorAttachment__Deactivate_x                            0x14039C920

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B2740
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B2930
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B2940

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143110
#define CFindItemWnd__Update_x                                     0x140143AB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D5F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014C910
#define LootFiltersManager__GetItemFilterData_x                    0x14014D420
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014DCC0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014DF70

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140468DB0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140689DB0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030EF40

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403912E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14064E700  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14064E5F0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B5CF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B58D0

// ItemBase
#define ItemBase__IsLore_x                                         0x140609E70
#define ItemBase__IsLoreEquipped_x                                 0x140609F00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4140

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140243650
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402435E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243620

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309630

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D990
#define FactionManagerClient__HandleFactionMessage_x               0x14011DD40
#define FactionManagerClient__GetFactionStanding_x                 0x14011D160
#define FactionManagerClient__GetMaxFaction_x                      0x14011D160
#define FactionManagerClient__GetMinFaction_x                      0x14011D010

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABC70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129060

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5580
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4900
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A53A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5320  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031B350

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309630

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B1F0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056F330

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032C5D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCC0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
