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

#define __ClientDate                                               20230710u
#define __ExpectedVersionDate                                     "Jul 10 2023"
#define __ExpectedVersionTime                                     "09:40:10"
#define __ActualVersionDate_x                                      0x140810898
#define __ActualVersionTime_x                                      0x140810888
#define __ActualVersionBuild_x                                     0x140805660

// Memory Protection
#define __MemChecker0_x                                            0x1402A5680
#define __MemChecker1_x                                            0x14054EE20
#define __MemChecker4_x                                            0x140274940
#define __EncryptPad0_x                                            0x140ACC870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C088A0
#define instEQZoneInfo_x                                           0x140C08A94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020D6D0
#define __gfMaxZoomCameraDistance_x                                0x140806810
#define __gfMaxCameraDistance_x                                    0x1408457D0
#define __CurrentSocial_x                                          0x14098894C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC41B0
#define g_eqCommandStates_x                                        0x140AC5220
#define __CommandList_x                                            0x140AC5460
#define __ScreenMode_x                                             0x140B50174
#define __gWorld_x                                                 0x140C01780
#define __gpbCommandEvent_x                                        0x140C011A4
#define __ServerHost_x                                             0x140C01388
#define __Guilds_x                                                 0x140C07450
#define __MouseEventTime_x                                         0x140C7DDD8
#define DI8__Mouse_Check_x                                         0x140C81F08
#define __heqmain_x                                                0x140C843A0
#define DI8__Mouse_x                                               0x140C843F8
#define __HWnd_x                                                   0x140C84EA8
#define __Mouse_x                                                  0x140C843B8
#define DI8__Main_x                                                0x140C843D0
#define DI8__Keyboard_x                                            0x140C843D8
#define __LoginName_x                                              0x140C84B3C
#define __CurrentMapLabel_x                                        0x140C98080
#define __LabelCache_x                                             0x140C98C50
#define __SubscriptionType_x                                       0x140CCDB50
#define Teleport_Table_Size_x                                      0x140C01230
#define Teleport_Table_x                                           0x140C017B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C037E0
#define pinstActiveBanker_x                                        0x140C016C8
#define pinstActiveCorpse_x                                        0x140C016B8
#define pinstActiveGMaster_x                                       0x140C016C0
#define pinstActiveMerchant_x                                      0x140C016B0
#define pinstAltAdvManager_x                                       0x140B51008
#define pinstCEverQuest_x                                          0x140C843F0
#define pinstCamActor_x                                            0x140B50160
#define pinstCDBStr_x                                              0x140B4FE10
#define pinstCDisplay_x                                            0x140C037B0
#define pinstControlledPlayer_x                                    0x140C01758
#define pinstCResolutionHandler_x                                  0x1413066F8
#define pinstCSidlManager_x                                        0x140CA9F60
#define pinstCXWndManager_x                                        0x140CA9F58
#define instDynamicZone_x                                          0x140C07310 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C0735E
#define instExpeditionName_x                                       0x140C0739E
#define pinstDZMember_x                                            0x140C07428
#define pinstDZTimerInfo_x                                         0x140C07430
#define pinstEqLogin_x                                             0x140C84480
#define instTribute_x                                              0x140ABF840
#define pinstEQSoundManager_x                                      0x140B51388
#define pinstEQSpellStrings_x                                      0x140B34A20
#define pinstSGraphicsEngine_x                                     0x141306478
#define pinstLocalPC_x                                             0x140C01798
#define pinstLocalPlayer_x                                         0x140C016A8
#define pinstCMercenaryClientManager_x                             0x140C7F688
#define pinstModelPlayer_x                                         0x140C016D8
#define pinstRenderInterface_x                                     0x141306490
#define pinstSkillMgr_x                                            0x140C81320
#define pinstSpawnManager_x                                        0x140C7FA40
#define pinstSpellManager_x                                        0x140C81388
#define pinstStringTable_x                                         0x140C017A0
#define pinstSwitchManager_x                                       0x140C00CA0
#define pinstTarget_x                                              0x140C01750
#define pinstTaskMember_x                                          0x140ABF830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C01760
#define pinstTradeTarget_x                                         0x140C016D0
#define instTributeActive_x                                        0x140ABF869
#define pinstViewActor_x                                           0x140B50158
#define pinstWorldData_x                                           0x140C017A8
#define pinstPlayerPath_x                                          0x140C7FA68
#define pinstTargetIndicator_x                                     0x140C81438
#define EQObject_Top_x                                             0x140C01778

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C951D8
#define pinstCContainerMgr_x                                       0x140B50410
#define pinstCContextMenuManager_x                                 0x140CA9C40
#define pinstCInvSlotMgr_x                                         0x140B503F0
#define pinstCItemDisplayManager_x                                 0x140C97C50
#define pinstCPopupWndManager_x                                    0x140C984E0
#define pinstCSpellDisplayMgr_x                                    0x140C98B30
#define pinstCTaskManager_x                                        0x140988C80
#define pinstEQSuiteTextureLoader_x                                0x140AD5EF0
#define pinstItemIconCache_x                                       0x140C95538
#define pinstLootFiltersManager_x                                  0x140B4F858
#define pinstGFViewListener_x                                      0x140CA93C8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140235660
#define __CastRay_x                                                0x14022DE90
#define __CastRay2_x                                               0x14022DB90
#define __ConvertItemTags_x                                        0x14022E290
#define __CleanItemTags_x                                          0x140086C50
#define __CreateCascadeMenuItems_x                                 0x14017F820
#define __DoesFileExist_x                                          0x140553930
#define __EQGetTime_x                                              0x14054F3D0
#define __ExecuteCmd_x                                             0x1402050D0
#define __FixHeading_x                                             0x140679900
#define __FlushDxKeyboard_x                                        0x140323C50
#define __get_bearing_x                                            0x140237850
#define __get_melee_range_x                                        0x140237950
#define __GetAnimationCache_x                                      0x14039BC20
#define __GetGaugeValueFromEQ_x                                    0x1404C6EB0
#define __GetLabelFromEQ_x                                         0x1404C84A0
#define __GetXTargetType_x                                         0x14067AC20   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140679980
#define __HelpPath_x                                               0x140C7DCA0   // Why?
#define __NewUIINI_x                                               0x1404D38E0   // Why?
#define __ProcessGameEvents_x                                      0x140269D30
#define __ProcessKeyboardEvents_x                                  0x1403254B0
#define __ProcessMouseEvents_x                                     0x14026B220
#define __SaveColors_x                                             0x14018F920
#define __STMLToText_x                                             0x140564E40
#define __WndProc_x                                                0x1403223C0
#define CMemoryMappedFile__SetFile_x                               0x1407B0680
#define DrawNetStatus_x                                            0x1402B4440
#define Util__FastTime_x                                           0x140550190
#define __eq_delete_x                                              0x1406A3AA4
#define __eq_new_x                                                 0x1406A3A60
#define __CopyLayout_x                                             0x1402A1AA0
#define __ThrottleFrameRate_x                                      0x14025960C
#define __ThrottleFrameRateEnd_x                                   0x14025966C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140334630
#define CAAWnd__Update_x                                           0x140334930
#define CAAWnd__UpdateSelected_x                                   0x1403358F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A8E60
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A1790
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EC7A8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400A9710

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019A960
#define AltAdvManager__IsAbilityReady_x                            0x14019ABE0
#define AltAdvManager__GetAAById_x                                 0x14019A230
#define AltAdvManager__CanTrainAbility_x                           0x14019A060
#define AltAdvManager__CanSeeAbility_x                             0x140199D20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CF510
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0340
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0590
#define CharacterZoneClient__CanUseItem_x                          0x1400E4CE0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D0F60
#define CharacterZoneClient__CastSpell_x                           0x1400D1000
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E07B0
#define CharacterZoneClient__Cur_HP_x                              0x1400E63C0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6580
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4000
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ECD70
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FBCD0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D54F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E41B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EE910
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400ED7E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D56C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C5B80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7550
#define CharacterZoneClient__GetHPRegen_x                          0x1400EDF20
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6030
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EEBA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D57C0
#define CharacterZoneClient__GetManaRegen_x                        0x1400EF900
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D59D0
#define CharacterZoneClient__GetModCap_x                           0x1400F7040
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D5A70
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D5C80
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CA6C0
#define CharacterZoneClient__HasSkill_x                            0x1400F2900
#define CharacterZoneClient__HitBySpell_x                          0x1400D6730
#define CharacterZoneClient__IsStackBlocked_x                      0x1400D9FC0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F6B30
#define CharacterZoneClient__Max_Endurance_x                       0x1402CE540  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F6E70
#define CharacterZoneClient__Max_Mana_x                            0x1402CE760  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F72D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DD400
#define CharacterZoneClient__SpellDuration_x                       0x1400DE130
#define CharacterZoneClient__TotalEffect_x                         0x1400DF460
#define CharacterZoneClient__UseSkill_x                            0x1400FCC20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140352BA0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035CE20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140358D10
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140357DA0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14035F4E0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140853EF8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403809B0
#define CChatWindowManager__InitContextMenu_x                      0x140380B40
#define CChatWindowManager__FreeChatWindow_x                       0x14037FC00
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140387360
#define CChatWindowManager__CreateChatWindow_x                     0x14037F540

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140104DA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140388350
#define CChatWindow__Clear_x                                       0x140389190
#define CChatWindow__WndNotification_x                             0x14038A380
#define CChatWindow__AddHistory_x                                  0x140388C90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14058D020
#define CContextMenu__RemoveMenuItem_x                             0x14058D410
#define CContextMenu__RemoveAllMenuItems_x                         0x14058D3E0
#define CContextMenu__CheckMenuItem_x                              0x14058D250
#define CContextMenu__SetMenuItem_x                                0x14058D430
#define CContextMenu__AddSeparator_x                               0x14058D190

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14057EF30
#define CContextMenuManager__RemoveMenu_x                          0x14057F510
#define CContextMenuManager__PopupMenu_x                           0x14057F250
#define CContextMenuManager__Flush_x                               0x14057EFB0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140395900

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405FBE10
#define CChatService__GetFriendName_x                              0x1406429C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14056FEC0
#define CComboWnd__Draw_x                                          0x14056FFC0
#define CComboWnd__GetCurChoice_x                                  0x1405702A0  // unused
#define CComboWnd__GetListRect_x                                   0x140570340
#define CComboWnd__InsertChoice_x                                  0x140570680
#define CComboWnd__SetColors_x                                     0x140570A10
#define CComboWnd__SetChoice_x                                     0x1405709D0
#define CComboWnd__GetItemCount_x                                  0x140570330
#define CComboWnd__GetCurChoiceText_x                              0x1405702E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140570270
#define CComboWnd__InsertChoiceAtIndex_x                           0x140570740

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403936D0
#define CContainerWnd__SetContainer_x                              0x1403E0570
#define CContainerWnd__vftable_x                                   0x14081FB78

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4FF1C
#define CDisplay__ZoneMainUI_x                                     0x1405A7100
#define CDisplay__PreZoneMainUI_x                                  0x14018C770
#define CDisplay__CleanGameUI_x                                    0x14017E920
#define CDisplay__GetClickedActor_x                                0x140182AB0
#define CDisplay__GetUserDefinedColor_x                            0x1401836C0
#define CDisplay__InitCharSelectUI_x                               0x140183970
#define CDisplay__ReloadUI_x                                       0x14018EA50
#define CDisplay__WriteTextHD2_x                                   0x140195BA0
#define CDisplay__TrueDistance_x                                   0x140195850
#define CDisplay__SetViewActor_x                                   0x140192090
#define CDisplay__GetFloorHeight_x                                 0x140182D10
#define CDisplay__ToggleScreenshotMode_x                           0x140195350
#define CDisplay__RealRender_World_x                               0x14018DE40

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405B1450
#define CEditWnd__DrawCaret_x                                      0x1405A2E60  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405A3320
#define CEditWnd__GetCaretPt_x                                     0x1405A35A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405A35E0
#define CEditWnd__GetDisplayString_x                               0x1405A3850
#define CEditWnd__GetHorzOffset_x                                  0x1405A3A90
#define CEditWnd__GetLineForPrintableChar_x                        0x1405A3BE0
#define CEditWnd__GetSelStartPt_x                                  0x1405A3EC0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405A3D10
#define CEditWnd__PointFromPrintableChar_x                         0x1405A4A70
#define CEditWnd__ReplaceSelection_x                               0x1405A4E20
#define CEditWnd__SelectableCharFromPoint_x                        0x1405A52C0
#define CEditWnd__SetEditable_x                                    0x1405A5550
#define CEditWnd__SetWindowText_x                                  0x1405A5580

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025A5E0
#define CEverQuest__ClickedPlayer_x                                0x140250500
#define CEverQuest__CreateTargetIndicator_x                        0x140250DC0
#define CEverQuest__DoTellWindow_x                                 0x140104AB0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105370 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025C010
#define CEverQuest__dsp_chat_x                                     0x1401044F0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140286240
#define CEverQuest__Emote_x                                        0x14025C9C0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025D760
#define CEverQuest__GetClassDesc_x                                 0x14025D7C0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025DB90
#define CEverQuest__GetDeityDesc_x                                 0x14025DE40
#define CEverQuest__GetLangDesc_x                                  0x14025E270
#define CEverQuest__GetRaceDesc_x                                  0x14025E610
#define CEverQuest__InterpretCmd_x                                 0x14025FF20
#define CEverQuest__LeftClickedOnPlayer_x                          0x140274FC0
#define CEverQuest__LMouseUp_x                                     0x1402618C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140272820
#define CEverQuest__RMouseUp_x                                     0x14026BDB0
#define CEverQuest__SetGameState_x                                 0x1402774F0
#define CEverQuest__UPCNotificationFlush_x                         0x14027CCF0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140261540
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026D150
#define CEverQuest__ReportSuccessfulHit_x                          0x14026E000

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A5FA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400BF8E0
#define CGuild__GetGuildName_x                                     0x1400BF920

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403C82C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402975C0
#define CHotButton__SetCheck_x                                     0x140297890

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403D97D0
#define CInvSlotMgr__MoveItem_x                                    0x1403D99A0
#define CInvSlotMgr__SelectSlot_x                                  0x1403DB2E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403D6D40
#define CInvSlot__SliderComplete_x                                 0x1403D8070
#define CInvSlot__GetItemBase_x                                    0x1403D3730
#define CInvSlot__UpdateItem_x                                     0x1403D8520

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403DC130

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403FD3E0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403FFD80
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403F9E80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403FB6A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403FC810

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404C3A30
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404C5610

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404FEAF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403F65E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140147200

// CLabel
#define CLabel__UpdateText_x                                       0x140407150

// CListWnd
#define CListWnd__CListWnd_x                                       0x140573850
#define CListWnd__dCListWnd_x                                      0x140573CA0
#define CListWnd__vftable_x                                        0x140852068
#define CListWnd__AddColumn_x                                      0x140574340
#define CListWnd__AddColumn1_x                                     0x1405743E0
#define CListWnd__AddLine_x                                        0x140574540
#define CListWnd__AddString_x                                      0x140574AD0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140575040
#define CListWnd__CalculateVSBRange_x                              0x140575320
#define CListWnd__ClearSel_x                                       0x1405754D0
#define CListWnd__ClearAllSel_x                                    0x140575470
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140575530
#define CListWnd__Compare_x                                        0x1405756F0
#define CListWnd__Draw_x                                           0x140575BC0
#define CListWnd__DrawColumnSeparators_x                           0x140576770
#define CListWnd__DrawHeader_x                                     0x140576830
#define CListWnd__DrawItem_x                                       0x140576F00
#define CListWnd__DrawLine_x                                       0x140577880
#define CListWnd__DrawSeparator_x                                  0x140577D40
#define CListWnd__EnableLine_x                                     0x140578160
#define CListWnd__EnsureVisible_x                                  0x1405781C0
#define CListWnd__ExtendSel_x                                      0x1405782C0
#define CListWnd__GetColumnMinWidth_x                              0x1405785F0
#define CListWnd__GetColumnWidth_x                                 0x140578670
#define CListWnd__GetCurSel_x                                      0x140578770
#define CListWnd__GetItemData_x                                    0x140578AF0
#define CListWnd__GetItemHeight_x                                  0x140578B30
#define CListWnd__GetItemRect_x                                    0x140578D50
#define CListWnd__GetItemText_x                                    0x140578FF0
#define CListWnd__GetSelList_x                                     0x140579240
#define CListWnd__GetSeparatorRect_x                               0x140579430
#define CListWnd__InsertLine_x                                     0x14057A8A0
#define CListWnd__RemoveLine_x                                     0x14057AF10
#define CListWnd__SetColors_x                                      0x14057B2E0
#define CListWnd__SetColumnJustification_x                         0x14057B300
#define CListWnd__SetColumnLabel_x                                 0x14057B380
#define CListWnd__SetColumnWidth_x                                 0x14057B520
#define CListWnd__SetCurSel_x                                      0x14057B5F0
#define CListWnd__SetItemColor_x                                   0x14057B860
#define CListWnd__SetItemData_x                                    0x14057B900
#define CListWnd__SetItemText_x                                    0x14057BB40
#define CListWnd__Sort_x                                           0x14057BF50
#define CListWnd__ToggleSel_x                                      0x14057C0C0
#define CListWnd__SetColumnsSizable_x                              0x14057B570
#define CListWnd__SetItemWnd_x                                     0x14057BC70
#define CListWnd__GetItemWnd_x                                     0x1405791D0
#define CListWnd__SetItemIcon_x                                    0x14057B940
#define CListWnd__CalculateCustomWindowPositions_x                 0x140574E10
#define CListWnd__SetVScrollPos_x                                  0x14057BEB0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14041A370

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082C590
#define MapViewMap__Clear_x                                        0x14041BEF0
#define MapViewMap__SetZoom_x                                      0x140422530
#define MapViewMap__HandleLButtonDown_x                            0x14041F070

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140443C70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14044A230
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14044A9D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14044E1D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14044D520
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140452470

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406208F0
#define CPacketScrambler__hton_x                                   0x1406208E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14059C730
#define CSidlManagerBase__FindAnimation1_x                         0x14059C670
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14059CD60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14059CB10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14059BA70
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14059BA00
#define CSidlManagerBase__CreateXWnd_x                             0x14059B040

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404B6CB0
#define CSidlManager__CreateXWnd_x                                 0x1404B6E70

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14055EE80
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14055EFA0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405ABA10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14055F120
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14055E610
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14055E6E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14055E8B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14055F7C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14055F9F0
#define CSidlScreenWnd__GetChildItem_x                             0x14055FB80
#define CSidlScreenWnd__GetSidlPiece_x                             0x14055FDD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14056C4B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140560140
#define CSidlScreenWnd__LoadIniInfo_x                              0x140560480
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140560D30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140561620
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA9260
#define CSidlScreenWnd__StoreIniInfo_x                             0x140561C60
#define CSidlScreenWnd__StoreIniVis_x                              0x140562450
#define CSidlScreenWnd__vftable_x                                  0x140851250
#define CSidlScreenWnd__WndNotification_x                          0x1405624A0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030D890 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030DC90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030DBD0
#define CSkillMgr__IsActivatedSkill_x                              0x14030E030
#define CSkillMgr__IsCombatSkill_x                                 0x14030E070

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404D3960
#define CSliderWnd__SetValue_x                                     0x14057D220
#define CSliderWnd__SetNumTicks_x                                  0x14057D0A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404BD2F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140581970
#define CStmlWnd__CalculateHSBRange_x                              0x14056BE60
#define CStmlWnd__CalculateVSBRange_x                              0x140582810
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140583300
#define CStmlWnd__ForceParseNow_x                                  0x1405833A0
#define CStmlWnd__GetVisibleText_x                                 0x140583A70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405857B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405857F0
#define CStmlWnd__SetSTMLText_x                                    0x14058C7C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x14058C970
#define CStmlWnd__UpdateHistoryString_x                            0x14058CD00

// CTabWnd
#define CTabWnd__Draw_x                                            0x14057D5D0
#define CTabWnd__DrawCurrentPage_x                                 0x14057D670
#define CTabWnd__DrawTab_x                                         0x14057DA40
#define CTabWnd__GetTabRect_x                                      0x14057E0A0
#define CTabWnd__InsertPage_x                                      0x14057E370
#define CTabWnd__RemovePage_x                                      0x14057E600
#define CTabWnd__SetPage_x                                         0x14057E760
#define CTabWnd__UpdatePage_x                                      0x14057EA60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405A59B0
#define CPageWnd__SetTabText_x                                     0x1405A5A20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9040  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9450


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140594120
#define CTextureFont__DrawWrappedText1_x                           0x140594030
#define CTextureFont__DrawWrappedText2_x                           0x140594250
#define CTextureFont__GetTextExtent_x                              0x140594600
#define CTextureFont__GetHeight_x                                  0x1405945C0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405AA170

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14055E1F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD5860
#define CXStr__gCXStrAccess_x                                      0x140CA90A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405675B0
#define CXWnd__ClrFocus_x                                          0x1405677F0
#define CXWnd__Destroy_x                                           0x140567970
#define CXWnd__DoAllDrawing_x                                      0x140567A80
#define CXWnd__DrawColoredRect_x                                   0x140568240
#define CXWnd__DrawTooltip_x                                       0x1405698B0
#define CXWnd__DrawTooltipAtPoint_x                                0x140569960
#define CXWnd__GetChildItem_x                                      0x14056A270
#define CXWnd__GetChildWndAt_x                                     0x14056A330
#define CXWnd__GetClientRect_x                                     0x14056A5E0
#define CXWnd__GetClientClipRect_x                                 0x14056A490
#define CXWnd__GetRelativeRect_x                                   0x14056BFA0
#define CXWnd__GetScreenClipRect_x                                 0x14056C0B0
#define CXWnd__GetScreenRect_x                                     0x14056C230
#define CXWnd__GetTooltipRect_x                                    0x14056C3B0
#define CXWnd__IsActive_x                                          0x14056C970
#define CXWnd__IsDescendantOf_x                                    0x14056C9A0
#define CXWnd__IsReallyVisible_x                                   0x14056CA10
#define CXWnd__IsType_x                                            0x14056CA50
#define CXWnd__Minimize_x                                          0x14056CB40
#define CXWnd__ProcessTransition_x                                 0x14056DA10
#define CXWnd__Resize_x                                            0x14056DB20
#define CXWnd__Right_x                                             0x14056DBC0
#define CXWnd__SetFocus_x                                          0x14056DF70
#define CXWnd__SetFont_x                                           0x14056DFC0
#define CXWnd__SetKeyTooltip_x                                     0x14056E0C0
#define CXWnd__SetMouseOver_x                                      0x14056E200
#define CXWnd__SetParent_x                                         0x14056E280
#define CXWnd__StartFade_x                                         0x14056E6C0
#define CXWnd__vftable_x                                           0x1408518D0
#define CXWnd__CXWnd_x                                             0x140566160
#define CXWnd__dCXWnd_x                                            0x140566AA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405B0BD0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x14058E5E0
#define CXWndManager__DrawCursor_x                                 0x14058E8C0
#define CXWndManager__DrawWindows_x                                0x14058EB10
#define CXWndManager__GetKeyboardFlags_x                           0x14058F1D0
#define CXWndManager__HandleKeyboardMsg_x                          0x14058F210
#define CXWndManager__RemoveWnd_x                                  0x1405927F0

// CDBStr
#define CDBStr__GetString_x                                        0x14017CA90

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140629810

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CD2E0
#define CCharacterListWnd__EnterWorld_x                            0x1400CBFE0
#define CCharacterListWnd__Quit_x                                  0x1400CD2C0
#define CCharacterListWnd__UpdateList_x                            0x1400CDFE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F8F90
#define ItemBase__CreateItemTagString_x                            0x1405F99E0
#define ItemBase__GetImageNum_x                                    0x1405FBFA0
#define ItemBase__GetItemValue_x                                   0x1405FDA40
#define ItemBase__IsEmpty_x                                        0x1405FF670
#define ItemBase__IsKeyRingItem_x                                  0x1405FFDA0
#define ItemBase__ValueSellMerchant_x                              0x140603E50
#define ItemClient__CanDrop_x                                      0x140299B40
#define ItemClient__CanGoInBag_x                                   0x140299C70
#define ItemClient__CreateItemClient_x                             0x140299F50
#define ItemClient__dItemClient_x                                  0x1402999B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019C100
#define EQ_LoadingS__Array_x                                       0x140AC1CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060FF90
#define PcBase__GetCombatAbility_x                                 0x140610630
#define PcBase__GetCombatAbilityTimer_x                            0x1406106D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140610E20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406117B0
#define PcClient__AlertInventoryChanged_x                          0x1402BBEE0
#define PcClient__GetConLevel_x                                    0x1402BC4A0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BEB40
#define PcClient__HasLoreItem_x                                    0x1402BFC50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CCAA0
#define PcZoneClient__RemoveMyAffect_x                             0x1402CF610

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140209740  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402098F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140209A50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140209990  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140241E30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401772C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066C140
#define PlayerBase__CanSee1_x                                      0x14066C210
#define PlayerBase__GetVisibilityLineSegment_x                     0x14066C6D0
#define PlayerBase__HasProperty_x                                  0x14066C8F0
#define PlayerBase__IsTargetable_x                                 0x14066C9B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DB570
#define PlayerClient__GetPcClient_x                                0x1402DDC30
#define PlayerClient__PlayerClient_x                               0x1402D48C0
#define PlayerClient__SetNameSpriteState_x                         0x1402E10E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E20A0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F02C0
#define PlayerZoneClient__DoAttack_x                               0x1402F0FD0
#define PlayerZoneClient__GetLevel_x                               0x1402F4740
#define PlayerZoneClient__IsValidTeleport_x                        0x140244BC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018B000

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EA010  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EA040  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EA0F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402E9A00
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066BDC0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14029EFC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029EBC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029EC30
#define KeypressHandler__ClearCommandStateArray_x                  0x14029EF50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14029F0E0
#define KeypressHandler__HandleKeyUp_x                             0x14029F1E0
#define KeypressHandler__SaveKeymapping_x                          0x14029EE60  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406273E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140621F90

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C5290  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CAB00
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CD190
#define PcZoneClient__RemovePetEffect_x                            0x1402CF710
#define PcZoneClient__HasAlternateAbility_x                        0x1402CDE60
#define PcZoneClient__CanEquipItem_x                               0x1402C8E20
#define PcZoneClient__GetItemByID_x                                0x1402CBB50
#define PcZoneClient__RemoveBuffEffect_x                           0x1402CF490
#define PcZoneClient__BandolierSwap_x                              0x1402C7E00
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CD0E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402496F0

// IconCache
#define IconCache__GetIcon_x                                       0x14039BC50

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140392520
#define CContainerMgr__CloseContainer_x                            0x140391E60
#define CContainerMgr__OpenExperimentContainer_x                   0x140392890

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14047CD50

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140291E60

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14040E410
#define CLootWnd__RequestLootSlot_x                                0x14040F410

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC130
#define EQ_Spell__SpellAffects_x                                   0x1401CD3F0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD350
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D5E60
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D5E10
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD010
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCBD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC4A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BE570

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404D76E0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404D7720
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404D6C20
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404D61E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404DE780  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140173AF0
#define CTaskManager__GetTaskStatus_x                              0x140173C00
#define CTaskManager__GetElementDescription_x                      0x140173780

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA4A0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C92E0
#define EqSoundManager__SoundAssistPlay_x                          0x140312CF0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140313030  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14056F470
#define CTextureAnimation__SetCurCell_x                            0x14056F780

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402900E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140640420
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406404A0
#define CharacterBase__IsExpansionFlag_x                           0x1401EBF80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140372C00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140373560
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403749D0

// messages
#define msg_spell_worn_off_x                                       0x1402001D0
#define msg_new_text_x                                             0x1401FBB40
#define __msgTokenTextParam_x                                      0x1401F3940
#define msgTokenText_x                                             0x1401F3860

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403146E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140314600

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14067B000

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404078A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140397D40
#define CCursorAttachment__AttachToCursor1_x                       0x1403967C0
#define CCursorAttachment__Deactivate_x                            0x140398240

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405A8610
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405A8800
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405A8810

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401424B0
#define CFindItemWnd__Update_x                                     0x140142E50
#define CFindItemWnd__PickupSelectedItem_x                         0x14013C960

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014BDD0
#define LootFiltersManager__GetItemFilterData_x                    0x14014C8E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014D180
#define LootFiltersManager__SetItemLootFilter_x                    0x14014D430

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140460330

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067F4A0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030D3F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14038E8F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140644440  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140644330  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B1600
#define CGroupWnd__UpdateDisplay_x                                 0x1403B11E0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FFE70
#define ItemBase__IsLoreEquipped_x                                 0x1405FFF00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B2680

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140241F90
#define EQPlacedItemManager__GetItemByGuid_x                       0x140241F20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140241F60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140307B70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011CEE0
#define FactionManagerClient__HandleFactionMessage_x               0x14011D290
#define FactionManagerClient__GetFactionStanding_x                 0x14011C6B0
#define FactionManagerClient__GetMaxFaction_x                      0x14011C6B0
#define FactionManagerClient__GetMinFaction_x                      0x14011C560

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AB280

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401285B0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A4A60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A3DE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A4880  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A4800  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140319410

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140307B70

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140209AE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140562A90

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140083E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032A6A0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008B320

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
