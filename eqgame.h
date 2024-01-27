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

#define __ClientDate                                               20240123u
#define __ExpectedVersionDate                                     "Jan 23 2024"
#define __ExpectedVersionTime                                     "11:55:18"
#define __ActualVersionDate_x                                      0x140829478
#define __ActualVersionTime_x                                      0x140829468
#define __ActualVersionBuild_x                                     0x14081DCF0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9070
#define __MemChecker1_x                                            0x140564880
#define __MemChecker4_x                                            0x140277B00
#define __EncryptPad0_x                                            0x140ADCE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C15A00
#define instEQZoneInfo_x                                           0x140C15BF4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F490
#define __gfMaxZoomCameraDistance_x                                0x14081EF60
#define __gfMaxCameraDistance_x                                    0x14085E9C0
#define __CurrentSocial_x                                          0x140998940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AD4720
#define g_eqCommandStates_x                                        0x140AD5790
#define __CommandList_x                                            0x140AD59C0
#define __ScreenMode_x                                             0x140B5D454
#define __gWorld_x                                                 0x140C10918
#define __gpbCommandEvent_x                                        0x140C1034C
#define __ServerHost_x                                             0x140C10538
#define __Guilds_x                                                 0x140C145B0
#define __MouseEventTime_x                                         0x140C8AF50
#define DI8__MouseState_x                                          0x140C8F088
#define __heqmain_x                                                0x140C91520
#define DI8__Mouse_x                                               0x140C91538
#define __HWnd_x                                                   0x140C91540
#define __Mouse_x                                                  0x140C91548
#define DI8__Keyboard_x                                            0x140C91568
#define __LoginName_x                                              0x140C91C3C
#define __CurrentMapLabel_x                                        0x140CA52D0
#define __LabelCache_x                                             0x140CA5EA0
#define __ChatFilterDefs_x                                         0x14084BD70
#define Teleport_Table_Size_x                                      0x140C103D4
#define Teleport_Table_x                                           0x140C0DE90

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C10940
#define pinstActiveBanker_x                                        0x140C10870
#define pinstActiveCorpse_x                                        0x140C10860
#define pinstActiveGMaster_x                                       0x140C10868
#define pinstActiveMerchant_x                                      0x140C10858
#define pinstAltAdvManager_x                                       0x140B5E158
#define pinstCEverQuest_x                                          0x140C91FA8
#define pinstCamActor_x                                            0x140B5D440
#define pinstCDBStr_x                                              0x140B5CF10
#define pinstCDisplay_x                                            0x140C0FEB0
#define pinstControlledPlayer_x                                    0x140C10900
#define pinstCResolutionHandler_x                                  0x141316658
#define pinstCSidlManager_x                                        0x140CB71A0
#define pinstCXWndManager_x                                        0x140CB7198
#define instDynamicZone_x                                          0x140C14470 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C144BE
#define instExpeditionName_x                                       0x140C144FE
#define pinstDZMember_x                                            0x140C14588
#define pinstDZTimerInfo_x                                         0x140C14590
#define pinstEqLogin_x                                             0x140C91580
#define instTribute_x                                              0x140ACFD50
#define pinstEQSoundManager_x                                      0x140B5E4D8
#define pinstEQSpellStrings_x                                      0x140B41B20
#define pinstSGraphicsEngine_x                                     0x1413163D8
#define pinstLocalPC_x                                             0x140C0DE78
#define pinstLocalPlayer_x                                         0x140C10850
#define pinstCMercenaryClientManager_x                             0x140C8C808
#define pinstModelPlayer_x                                         0x140C10880
#define pinstRenderInterface_x                                     0x1413163F0
#define pinstSkillMgr_x                                            0x140C8E4A0
#define pinstSpawnManager_x                                        0x140C8CBC0
#define pinstSpellManager_x                                        0x140C8E508
#define pinstStringTable_x                                         0x140C0DE80
#define pinstSwitchManager_x                                       0x140C0DDF0
#define pinstTarget_x                                              0x140C108F8
#define pinstTaskMember_x                                          0x140ACFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C10908
#define pinstTradeTarget_x                                         0x140C10878
#define instTributeActive_x                                        0x140ACFD79
#define pinstViewActor_x                                           0x140B5D438
#define pinstWorldData_x                                           0x140C0DE88
#define pinstPlayerPath_x                                          0x140C8CBE8
#define pinstTargetIndicator_x                                     0x140C8E5B8
#define EQObject_Top_x                                             0x140C10928

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140CA2430
#define pinstCContainerMgr_x                                       0x140B5D0B8
#define pinstCContextMenuManager_x                                 0x140CB6E80
#define pinstCInvSlotMgr_x                                         0x140B5D0B0
#define pinstCItemDisplayManager_x                                 0x140CA4EA0
#define pinstCPopupWndManager_x                                    0x140CA5730
#define pinstCSpellDisplayMgr_x                                    0x140CA5D80
#define pinstCTaskManager_x                                        0x140998C80
#define pinstEQSuiteTextureLoader_x                                0x140AE6530
#define pinstItemIconCache_x                                       0x140CA2790
#define pinstLootFiltersManager_x                                  0x140B5C958
#define pinstGFViewListener_x                                      0x140CB6658


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140238350
#define __CastRay_x                                                0x1402306C0
#define __CastRay2_x                                               0x1402303C0
#define __ConvertItemTags_x                                        0x140230B20
#define __CleanItemTags_x                                          0x1400879F0
#define __CreateCascadeMenuItems_x                                 0x140180B50
#define __DoesFileExist_x                                          0x140568730
#define __EQGetTime_x                                              0x140564E30
#define __ExecuteCmd_x                                             0x140206DF0
#define __FixHeading_x                                             0x14068FD70
#define __FlushDxKeyboard_x                                        0x14032AFA0
#define __get_bearing_x                                            0x14023A540
#define __get_melee_range_x                                        0x14023A640
#define __GetAnimationCache_x                                      0x1403A7F20
#define __GetGaugeValueFromEQ_x                                    0x1404DB5F0
#define __GetLabelFromEQ_x                                         0x1404DCBF0
#define __GetXTargetType_x                                         0x140691050   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068FDF0
#define __HelpPath_x                                               0x140C8AE18   // Why?
#define __NewUIINI_x                                               0x1404E8150   // Why?
#define __ProcessGameEvents_x                                      0x14026CF50
#define __ProcessKeyboardEvents_x                                  0x14032C800
#define __ProcessMouseEvents_x                                     0x14026E470
#define __SaveColors_x                                             0x140190B10
#define __STMLToText_x                                             0x14056D070
#define __WndProc_x                                                0x1403296F0
#define CMemoryMappedFile__SetFile_x                               0x1407C7CD0
#define DrawNetStatus_x                                            0x1402B74C0
#define Util__FastTime_x                                           0x1405643C0
#define __eq_delete_x                                              0x140697194
#define __eq_new_x                                                 0x140697150
#define __CopyLayout_x                                             0x1402A5480
#define __ThrottleFrameRate_x                                      0x14025C645
#define __ThrottleFrameRateEnd_x                                   0x14025C6A5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BF40
#define CAAWnd__Update_x                                           0x14033C240
#define CAAWnd__UpdateSelected_x                                   0x14033D280

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9C50
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2540
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140804928
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA540

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BC30
#define AltAdvManager__IsAbilityReady_x                            0x14019BEB0
#define AltAdvManager__GetAAById_x                                 0x14019B500
#define AltAdvManager__CanTrainAbility_x                           0x14019B330
#define AltAdvManager__CanSeeAbility_x                             0x14019AFF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0510
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1350
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D15A0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5820
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1F70
#define CharacterZoneClient__CastSpell_x                           0x1400D2010
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1350
#define CharacterZoneClient__Cur_HP_x                              0x1400E6F30
#define CharacterZoneClient__Cur_Mana_x                            0x1400E70F0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4DA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED640
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC2C0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6200
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4CF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF200
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE0D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D63D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6A60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8430
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE810
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6BA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF490
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6450
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0270
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6650
#define CharacterZoneClient__GetModCap_x                           0x1400F7A80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D66E0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D68F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB5A0
#define CharacterZoneClient__HasSkill_x                            0x1400F3260
#define CharacterZoneClient__HitBySpell_x                          0x1400D73A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAB50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7570
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3F60  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F78B0
#define CharacterZoneClient__Max_Mana_x                            0x1402D4180  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D10
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDEE0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEBE0
#define CharacterZoneClient__TotalEffect_x                         0x1400DFF30
#define CharacterZoneClient__UseSkill_x                            0x1400FD210


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A3B0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403646E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360570
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F600

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366D90

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14086CB60

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389AB0
#define CChatWindowManager__InitContextMenu_x                      0x140389C40
#define CChatWindowManager__FreeChatWindow_x                       0x140388B30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403917F0
#define CChatWindowManager__CreateChatWindow_x                     0x140388470

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401053C0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392830
#define CChatWindow__Clear_x                                       0x1403936D0
#define CChatWindow__WndNotification_x                             0x140394890
#define CChatWindow__AddHistory_x                                  0x1403931D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A1EC0
#define CContextMenu__RemoveMenuItem_x                             0x1405A22B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2280
#define CContextMenu__CheckMenuItem_x                              0x1405A20F0
#define CContextMenu__SetMenuItem_x                                0x1405A22D0
#define CContextMenu__AddSeparator_x                               0x1405A2030

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140593DC0
#define CContextMenuManager__RemoveMenu_x                          0x1405943A0
#define CContextMenuManager__PopupMenu_x                           0x1405940E0
#define CContextMenuManager__Flush_x                               0x140593E40
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039FFB0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1404DB590
#define CChatService__GetFriendName_x                              0x140658CF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140584D50
#define CComboWnd__Draw_x                                          0x140584E50
#define CComboWnd__GetCurChoice_x                                  0x140585130  // unused
#define CComboWnd__GetListRect_x                                   0x1405851D0
#define CComboWnd__InsertChoice_x                                  0x140585510
#define CComboWnd__SetColors_x                                     0x1405858A0
#define CComboWnd__SetChoice_x                                     0x140585860
#define CComboWnd__GetItemCount_x                                  0x1405851C0
#define CComboWnd__GetCurChoiceText_x                              0x140585170  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585100
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405855D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DD30
#define CContainerWnd__SetContainer_x                              0x1403F2D20
#define CContainerWnd__vftable_x                                   0x140838840

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5D1E4
#define CDisplay__ZoneMainUI_x                                     0x1405BBFD0
#define CDisplay__PreZoneMainUI_x                                  0x14018DA00
#define CDisplay__CleanGameUI_x                                    0x14017FC30
#define CDisplay__GetClickedActor_x                                0x140183DA0
#define CDisplay__GetUserDefinedColor_x                            0x140184A10
#define CDisplay__InitCharSelectUI_x                               0x140184CC0
#define CDisplay__ReloadUI_x                                       0x14018FCF0
#define CDisplay__WriteTextHD2_x                                   0x140196D60
#define CDisplay__TrueDistance_x                                   0x140196A10
#define CDisplay__SetViewActor_x                                   0x140193230
#define CDisplay__GetFloorHeight_x                                 0x140184000
#define CDisplay__ToggleScreenshotMode_x                           0x140196500
#define CDisplay__RealRender_World_x                               0x14018F0D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6180
#define CEditWnd__DrawCaret_x                                      0x1405B7C80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8120
#define CEditWnd__GetCaretPt_x                                     0x1405B83A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B83E0
#define CEditWnd__GetDisplayString_x                               0x1405B8650
#define CEditWnd__GetHorzOffset_x                                  0x1405B8880
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B89D0
#define CEditWnd__GetSelStartPt_x                                  0x1405B8CB0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B8B00
#define CEditWnd__PointFromPrintableChar_x                         0x1405B98E0
#define CEditWnd__ReplaceSelection_x                               0x1405B9C80
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BA120
#define CEditWnd__SetEditable_x                                    0x1405BA3A0
#define CEditWnd__SetWindowText_x                                  0x1405BA3D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D740
#define CEverQuest__ClickedPlayer_x                                0x140253250
#define CEverQuest__CreateTargetIndicator_x                        0x140253B10
#define CEverQuest__DoTellWindow_x                                 0x1401050D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105990 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F170
#define CEverQuest__dsp_chat_x                                     0x140104B00 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289410
#define CEverQuest__Emote_x                                        0x14025FB50
#define CEverQuest__GetBodyTypeDesc_x                              0x1402608F0
#define CEverQuest__GetClassDesc_x                                 0x140260950
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260D20
#define CEverQuest__GetDeityDesc_x                                 0x140260FD0
#define CEverQuest__GetLangDesc_x                                  0x140261400
#define CEverQuest__GetRaceDesc_x                                  0x1402617A0
#define CEverQuest__InterpretCmd_x                                 0x1402630D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140278180
#define CEverQuest__LMouseUp_x                                     0x140264AA0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402759A0
#define CEverQuest__RMouseUp_x                                     0x14026EFF0
#define CEverQuest__SetGameState_x                                 0x14027A6C0
#define CEverQuest__UPCNotificationFlush_x                         0x14027FEC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264710
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402703A0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402711B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B22F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C07C0
#define CGuild__GetGuildName_x                                     0x1400C0800

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4790

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029AF20
#define CHotButton__SetCheck_x                                     0x14029B1F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EBAC0
#define CInvSlotMgr__MoveItem_x                                    0x1403EBCA0
#define CInvSlotMgr__SelectSlot_x                                  0x1403ED610

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8CE0
#define CInvSlot__SliderComplete_x                                 0x1403EA230
#define CInvSlot__GetItemBase_x                                    0x1403E4910
#define CInvSlot__UpdateItem_x                                     0x1403EA6E0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EE9A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040FC60
#define CItemDisplayWnd__UpdateStrings_x                           0x140412580
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040C780
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040DED0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F080

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8120
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9E10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405133C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140408EC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148210

// CLabel
#define CLabel__UpdateText_x                                       0x140419960

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405886E0
#define CListWnd__dCListWnd_x                                      0x140588B30
#define CListWnd__vftable_x                                        0x14086AD28
#define CListWnd__AddColumn_x                                      0x1405891D0
#define CListWnd__AddColumn1_x                                     0x140589270
#define CListWnd__AddLine_x                                        0x1405893D0
#define CListWnd__AddString_x                                      0x140589960
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589ED0
#define CListWnd__CalculateVSBRange_x                              0x14058A1B0
#define CListWnd__ClearSel_x                                       0x14058A350
#define CListWnd__ClearAllSel_x                                    0x14058A2F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058A3B0
#define CListWnd__Compare_x                                        0x14058A570
#define CListWnd__Draw_x                                           0x14058AA40
#define CListWnd__DrawColumnSeparators_x                           0x14058B5F0
#define CListWnd__DrawHeader_x                                     0x14058B6B0
#define CListWnd__DrawItem_x                                       0x14058BD80
#define CListWnd__DrawLine_x                                       0x14058C700
#define CListWnd__DrawSeparator_x                                  0x14058CBC0
#define CListWnd__EnableLine_x                                     0x14058CFE0
#define CListWnd__EnsureVisible_x                                  0x14058D040
#define CListWnd__ExtendSel_x                                      0x14058D130
#define CListWnd__GetColumnMinWidth_x                              0x14058D460
#define CListWnd__GetColumnWidth_x                                 0x14058D4E0
#define CListWnd__GetCurSel_x                                      0x14058D5E0
#define CListWnd__GetItemData_x                                    0x14058D960
#define CListWnd__GetItemHeight_x                                  0x14058D9A0
#define CListWnd__GetItemRect_x                                    0x14058DBC0
#define CListWnd__GetItemText_x                                    0x14058DE60
#define CListWnd__GetSelList_x                                     0x14058E0B0
#define CListWnd__GetSeparatorRect_x                               0x14058E2A0
#define CListWnd__InsertLine_x                                     0x14058F700
#define CListWnd__RemoveLine_x                                     0x14058FD70
#define CListWnd__SetColors_x                                      0x140590130
#define CListWnd__SetColumnJustification_x                         0x140590150
#define CListWnd__SetColumnLabel_x                                 0x1405901D0
#define CListWnd__SetColumnWidth_x                                 0x140590370
#define CListWnd__SetCurSel_x                                      0x140590440
#define CListWnd__SetItemColor_x                                   0x1405906B0
#define CListWnd__SetItemData_x                                    0x140590750
#define CListWnd__SetItemText_x                                    0x140590990
#define CListWnd__Sort_x                                           0x140590DA0
#define CListWnd__ToggleSel_x                                      0x140590F10
#define CListWnd__SetColumnsSizable_x                              0x1405903C0
#define CListWnd__SetItemWnd_x                                     0x140590AC0
#define CListWnd__GetItemWnd_x                                     0x14058E040
#define CListWnd__SetItemIcon_x                                    0x140590790
#define CListWnd__CalculateCustomWindowPositions_x                 0x140589CA0
#define CListWnd__SetVScrollPos_x                                  0x140590D00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042CC60

// MapViewMap
#define MapViewMap__vftable_x                                      0x140845520
#define MapViewMap__Clear_x                                        0x14042E7E0
#define MapViewMap__SetZoom_x                                      0x140434E30
#define MapViewMap__HandleLButtonDown_x                            0x140431970

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456610  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045CBF0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045D3A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140460BA0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045FEF0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140464E50

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140635920
#define CPacketScrambler__hton_x                                   0x140635910

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B1570
#define CSidlManagerBase__FindAnimation1_x                         0x1405B14B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B1BA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B1950
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B08B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B0840
#define CSidlManagerBase__CreateXWnd_x                             0x1405AFEA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB150
#define CSidlManager__CreateXWnd_x                                 0x1404CB310

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576500
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405763D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C0740 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576670
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140575B20
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575BF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575E00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576D10
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576F40
#define CSidlScreenWnd__GetChildItem_x                             0x1405770E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577330
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405812E0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405776A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577A10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405782D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140578BC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB64F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579200
#define CSidlScreenWnd__StoreIniVis_x                              0x1405799F0
#define CSidlScreenWnd__vftable_x                                  0x140869FC8
#define CSidlScreenWnd__WndNotification_x                          0x140579A40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403145A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314A40 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314970
#define CSkillMgr__IsActivatedSkill_x                              0x140314DF0
#define CSkillMgr__IsCombatSkill_x                                 0x140314E30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DB510
#define CSliderWnd__SetValue_x                                     0x140592080
#define CSliderWnd__SetNumTicks_x                                  0x140591F00

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1790

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140596820
#define CStmlWnd__CalculateHSBRange_x                              0x140580C90
#define CStmlWnd__CalculateVSBRange_x                              0x1405976C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405981A0
#define CStmlWnd__ForceParseNow_x                                  0x140598240
#define CStmlWnd__GetVisibleText_x                                 0x140598900
#define CStmlWnd__MakeStmlColorTag_x                               0x14059A650
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059A690
#define CStmlWnd__SetSTMLText_x                                    0x1405A1660
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A1810
#define CStmlWnd__UpdateHistoryString_x                            0x1405A1BA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592450
#define CTabWnd__DrawCurrentPage_x                                 0x1405924F0
#define CTabWnd__DrawTab_x                                         0x1405928C0
#define CTabWnd__GetTabRect_x                                      0x140592F30
#define CTabWnd__InsertPage_x                                      0x140593200
#define CTabWnd__RemovePage_x                                      0x140593490
#define CTabWnd__SetPage_x                                         0x1405935F0
#define CTabWnd__UpdatePage_x                                      0x1405938F0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA830
#define CPageWnd__SetTabText_x                                     0x1405BA8A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9F10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA320


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8F50
#define CTextureFont__DrawWrappedText1_x                           0x1405A8E60
#define CTextureFont__DrawWrappedText2_x                           0x1405A9080
#define CTextureFont__GetTextExtent_x                              0x1405A9430
#define CTextureFont__GetHeight_x                                  0x1405A93F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BEEA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575700

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE5EA0
#define CXStr__gCXStrAccess_x                                      0x140CB62F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057C420
#define CXWnd__ClrFocus_x                                          0x14057C660
#define CXWnd__Destroy_x                                           0x14057C7E0
#define CXWnd__DoAllDrawing_x                                      0x14057C8F0
#define CXWnd__DrawColoredRect_x                                   0x14057D0B0
#define CXWnd__DrawTooltip_x                                       0x14057E710
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E7C0
#define CXWnd__GetChildItem_x                                      0x14057F0B0
#define CXWnd__GetChildWndAt_x                                     0x14057F170
#define CXWnd__GetClientRect_x                                     0x14057F430
#define CXWnd__GetClientClipRect_x                                 0x14057F2E0
#define CXWnd__GetRelativeRect_x                                   0x140580DD0
#define CXWnd__GetScreenClipRect_x                                 0x140580EE0
#define CXWnd__GetScreenRect_x                                     0x140581060
#define CXWnd__GetTooltipRect_x                                    0x1405811E0
#define CXWnd__IsActive_x                                          0x1405817A0
#define CXWnd__IsDescendantOf_x                                    0x1405817D0
#define CXWnd__IsReallyVisible_x                                   0x140581840
#define CXWnd__IsType_x                                            0x140581880
#define CXWnd__Minimize_x                                          0x140581980
#define CXWnd__ProcessTransition_x                                 0x140582850
#define CXWnd__Resize_x                                            0x140582970
#define CXWnd__Right_x                                             0x140582A10
#define CXWnd__SetFocus_x                                          0x140582DD0
#define CXWnd__SetFont_x                                           0x140582E20
#define CXWnd__SetKeyTooltip_x                                     0x140582F20
#define CXWnd__SetMouseOver_x                                      0x140583060
#define CXWnd__SetParent_x                                         0x1405830E0
#define CXWnd__StartFade_x                                         0x140583520
#define CXWnd__vftable_x                                           0x14086A5A8
#define CXWnd__CXWnd_x                                             0x14057B000
#define CXWnd__dCXWnd_x                                            0x14057B950

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C5900

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3480
#define CXWndManager__DrawCursor_x                                 0x1405A3760
#define CXWndManager__DrawWindows_x                                0x1405A39C0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4090
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A40D0
#define CXWndManager__RemoveWnd_x                                  0x1405A7620

// CDBStr
#define CDBStr__GetString_x                                        0x14017DDA0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063EA70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE1F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CCEF0
#define CCharacterListWnd__Quit_x                                  0x1400CE1D0
#define CCharacterListWnd__UpdateList_x                            0x1400CEEE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060DCE0
#define ItemBase__CreateItemTagString_x                            0x14060E740
#define ItemBase__GetImageNum_x                                    0x140610CA0
#define ItemBase__GetItemValue_x                                   0x1406127F0
#define ItemBase__IsEmpty_x                                        0x140614390
#define ItemBase__IsKeyRingItem_x                                  0x140614AB0
#define ItemBase__ValueSellMerchant_x                              0x140618C60
#define ItemClient__CanDrop_x                                      0x14029D530
#define ItemClient__CanGoInBag_x                                   0x14029D660
#define ItemClient__CreateItemClient_x                             0x14029D940
#define ItemClient__dItemClient_x                                  0x14029D3A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D3D0
#define EQ_LoadingS__Array_x                                       0x140AD2230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140624DB0
#define PcBase__GetCombatAbility_x                                 0x140625450
#define PcBase__GetCombatAbilityTimer_x                            0x1406254F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140625C40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140626700
#define PcClient__AlertInventoryChanged_x                          0x1402BFA90
#define PcClient__GetConLevel_x                                    0x1402C00B0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C27B0
#define PcClient__HasLoreItem_x                                    0x1402C3780
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0FB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D5030

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B4B0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B660  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B7C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B700  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244B10  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401785D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140682710
#define PlayerBase__CanSee1_x                                      0x1406827E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140682CA0
#define PlayerBase__HasProperty_x                                  0x140682ED0
#define PlayerBase__IsTargetable_x                                 0x140682F90
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1B00
#define PlayerClient__GetPcClient_x                                0x1402E4330
#define PlayerClient__PlayerClient_x                               0x1402DADD0
#define PlayerClient__SetNameSpriteState_x                         0x1402E7800
#define PlayerClient__SetNameSpriteTint_x                          0x1402E87C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6D40
#define PlayerZoneClient__DoAttack_x                               0x1402F7A50
#define PlayerZoneClient__GetLevel_x                               0x1402FB180
#define PlayerZoneClient__IsValidTeleport_x                        0x1402478A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C280

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0660  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0710  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0810
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0130
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406822D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A29A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A25A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2610
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2930  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2AC0
#define KeypressHandler__HandleKeyUp_x                             0x1402A2BC0
#define KeypressHandler__SaveKeymapping_x                          0x1402A2840  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063C5B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140637050

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9CF0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CEFF0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D16B0
#define PcZoneClient__RemovePetEffect_x                            0x1402D5130
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2390
#define PcZoneClient__CanEquipItem_x                               0x1402CD320
#define PcZoneClient__GetItemByID_x                                0x1402D0080
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4EB0
#define PcZoneClient__BandolierSwap_x                              0x1402CC300
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402D1600

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C3D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A7F50

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CAE0
#define CContainerMgr__CloseContainer_x                            0x14039C420
#define CContainerMgr__OpenExperimentContainer_x                   0x14039CE60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048FE70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295710

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140420C50
#define CLootWnd__RequestLootSlot_x                                0x140421C90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC690
#define EQ_Spell__SpellAffects_x                                   0x1401CD950
#define EQ_Spell__SpellAffectBase_x                                0x1401CD8B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6AC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6A70
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD570
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD130
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCA00

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF400

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB890
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EAFA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EA7D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2F50  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174E20
#define CTaskManager__GetTaskStatus_x                              0x140174F30
#define CTaskManager__GetElementDescription_x                      0x140174AB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAA00
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9840
#define EqSoundManager__SoundAssistPlay_x                          0x140319BF0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319F30  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405842E0
#define CTextureAnimation__SetCurCell_x                            0x1405845F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293970

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406566C0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140656740
#define CharacterBase__IsExpansionFlag_x                           0x1401ED650

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037AF60
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B8D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CE20

// messages
#define msg_spell_worn_off_x                                       0x140201E40
#define msg_new_text_x                                             0x1401FD680
#define __msgTokenTextParam_x                                      0x1401F52F0
#define msgTokenText_x                                             0x1401F5210

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B5E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B500

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140691430

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A0B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1690
#define CCursorAttachment__IsOkToActivate_x                        0x1403A45F0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A48A0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BD340
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BD530
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BD540

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401434B0
#define CFindItemWnd__Update_x                                     0x140143E50
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D970

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CCF0
#define LootFiltersManager__GetItemFilterData_x                    0x14014D800
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E0A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E350

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140472CF0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406969E0
#define CResolutionHandler__GetWindowedStyle_x                     0x140314100

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398E20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065A7A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065A690  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD940
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD520

// ItemBase
#define ItemBase__IsLore_x                                         0x140614B80
#define ItemBase__IsLoreEquipped_x                                 0x140614C10

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B56E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244C70
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244C00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244C40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E710

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D860
#define FactionManagerClient__HandleFactionMessage_x               0x14011DC10
#define FactionManagerClient__GetFactionStanding_x                 0x14011D030
#define FactionManagerClient__GetMaxFaction_x                      0x14011D030
#define FactionManagerClient__GetMinFaction_x                      0x14011CEE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC0F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128FF0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5D20
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A50A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5B40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5AC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320700

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E710

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B850

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A030

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084BB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331E90

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C0C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063F5F0
#define FreeToPlayClient__RestrictionInfo_x                        0x14087C5B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
