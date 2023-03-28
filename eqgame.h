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

#define __ClientDate                                               20230321u
#define __ExpectedVersionDate                                     "Mar 21 2023"
#define __ExpectedVersionTime                                     "11:01:38"
#define __ActualVersionDate_x                                      0x140809268
#define __ActualVersionTime_x                                      0x140809258
#define __ActualVersionBuild_x                                     0x1407F6AA8

// Memory Protection
#define __MemChecker0_x                                            0x1402C72A0
#define __MemChecker1_x                                            0x14056DDA0
#define __MemChecker4_x                                            0x1402967A0
#define __EncryptPad0_x                                            0x140AC3870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BFF000
#define instEQZoneInfo_x                                           0x140BFF1F4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022F7F0
#define __gfMaxZoomCameraDistance_x                                0x1407FF290
#define __gfMaxCameraDistance_x                                    0x14083DBF4
#define __CurrentSocial_x                                          0x14097F93C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ABB1B0
#define g_eqCommandStates_x                                        0x140ABC220
#define __CommandList_x                                            0x140ABC460
#define __ScreenMode_x                                             0x140B468E4
#define __gWorld_x                                                 0x140BF7A68
#define __gpbCommandEvent_x                                        0x140BF7488
#define __ServerHost_x                                             0x140BF7668
#define __Guilds_x                                                 0x140BFDBB0
#define __MouseEventTime_x                                         0x140C744F8
#define DI8__Mouse_Check_x                                         0x140C78628
#define __heqmain_x                                                0x140C7AAC0
#define DI8__Mouse_x                                               0x140C7AB18
#define __HWnd_x                                                   0x140C7B5C8
#define __Mouse_x                                                  0x140C7AAD8
#define DI8__Main_x                                                0x140C7AAF0
#define DI8__Keyboard_x                                            0x140C7AAF8
#define __LoginName_x                                              0x140C7B25C
#define __CurrentMapLabel_x                                        0x140C8E7A0
#define __LabelCache_x                                             0x140C8F370
#define __SubscriptionType_x                                       0x140CC4180
#define Teleport_Table_Size_x                                      0x140BF7510
#define Teleport_Table_x                                           0x140BF7B00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140BF9F40
#define pinstActiveBanker_x                                        0x140BF79A8
#define pinstActiveCorpse_x                                        0x140BF7998
#define pinstActiveGMaster_x                                       0x140BF79A0
#define pinstActiveMerchant_x                                      0x140BF7990
#define pinstAltAdvManager_x                                       0x140B47768
#define pinstCEverQuest_x                                          0x140C7AB10
#define pinstCamActor_x                                            0x140B468D0
#define pinstCDBStr_x                                              0x140B46570
#define pinstCDisplay_x                                            0x140BF9B08
#define pinstControlledPlayer_x                                    0x140BF7A38
#define pinstCResolutionHandler_x                                  0x1412FCD28
#define pinstCSidlManager_x                                        0x140CA0580
#define pinstCXWndManager_x                                        0x140CA0578
#define instDynamicZone_x                                          0x140BFDA70 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140BFDABE
#define instExpeditionName_x                                       0x140BFDAFE
#define pinstDZMember_x                                            0x140BFDB88
#define pinstDZTimerInfo_x                                         0x140BFDB90
#define pinstEqLogin_x                                             0x140C7ABA0
#define instTribute_x                                              0x140AB6830
#define pinstEQSoundManager_x                                      0x140B47AE8
#define pinstEQSpellStrings_x                                      0x140B2B1E0
#define pinstSGraphicsEngine_x                                     0x1412FCAA8
#define pinstLocalPC_x                                             0x140BF7A78
#define pinstLocalPlayer_x                                         0x140BF7988
#define pinstCMercenaryClientManager_x                             0x140C75DA8
#define pinstModelPlayer_x                                         0x140BF79B8
#define pinstRenderInterface_x                                     0x1412FCAC0
#define pinstSkillMgr_x                                            0x140C77A40
#define pinstSpawnManager_x                                        0x140C76160
#define pinstSpellManager_x                                        0x140C77AA8
#define pinstStringTable_x                                         0x140BF7A80
#define pinstSwitchManager_x                                       0x140BF7400
#define pinstTarget_x                                              0x140BF7A30
#define pinstTaskMember_x                                          0x140AB6820 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140BF7A40
#define pinstTradeTarget_x                                         0x140BF79B0
#define instTributeActive_x                                        0x140AB6859
#define pinstViewActor_x                                           0x140B468C8
#define pinstWorldData_x                                           0x140BF9B00
#define pinstPlayerPath_x                                          0x140C76188
#define pinstTargetIndicator_x                                     0x140C77B58
#define EQObject_Top_x                                             0x140BF7A58

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C8B8F8
#define pinstCContainerMgr_x                                       0x140B469F8
#define pinstCContextMenuManager_x                                 0x140CA0350
#define pinstCInvSlotMgr_x                                         0x140B469F0
#define pinstCItemDisplayManager_x                                 0x140C8E370
#define pinstCPopupWndManager_x                                    0x140C8EC00
#define pinstCSpellDisplayMgr_x                                    0x140C8F250
#define pinstCTaskManager_x                                        0x14097FC70
#define pinstEQSuiteTextureLoader_x                                0x140ACCEF0
#define pinstItemIconCache_x                                       0x140C8BC58
#define pinstLootFiltersManager_x                                  0x140B45FC8

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140257830
#define __CastRay_x                                                0x140250060
#define __CastRay2_x                                               0x14024FD70
#define __ConvertItemTags_x                                        0x140250460
#define __CleanItemTags_x                                          0x1400AB7D0
#define __CreateCascadeMenuItems_x                                 0x1401A1D30
#define __DoesFileExist_x                                          0x140572580
#define __EQGetTime_x                                              0x14056E350
#define __ExecuteCmd_x                                             0x1402274C0
#define __FixHeading_x                                             0x1406712C0
#define __FlushDxKeyboard_x                                        0x140344600
#define __get_bearing_x                                            0x140259A20
#define __get_melee_range_x                                        0x140259B10
#define __GetAnimationCache_x                                      0x1403BC660
#define __GetGaugeValueFromEQ_x                                    0x1404E6070
#define __GetLabelFromEQ_x                                         0x1404E7650
#define __GetXTargetType_x                                         0x1406725A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140671340
#define __HelpPath_x                                               0x140C743C0   // Why?
#define __NewUIINI_x                                               0x1404F2820   // Why?
#define __ProcessGameEvents_x                                      0x14028BC70
#define __ProcessKeyboardEvents_x                                  0x140345E60
#define __ProcessMouseEvents_x                                     0x14028D150
#define __SaveColors_x                                             0x1401B1B60
#define __STMLToText_x                                             0x140583650
#define __WndProc_x                                                0x140342D80
#define CMemoryMappedFile__SetFile_x                               0x1407A8AE0
#define DrawNetStatus_x                                            0x1402D55C0
#define Util__FastTime_x                                           0x14056F050
#define __eq_delete_x                                              0x14069B164
#define __eq_new_x                                                 0x14069B120
#define __CopyLayout_x                                             0x1402C3740
#define __ThrottleFrameRate_x                                      0x14027B60B
#define __ThrottleFrameRateEnd_x                                   0x14027B66B

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140355290
#define CAAWnd__Update_x                                           0x140355590
#define CAAWnd__UpdateSelected_x                                   0x140356550

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400CD9F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C6330
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407E53C0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400CE2A0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BCBA0
#define AltAdvManager__IsAbilityReady_x                            0x1401BCE20
#define AltAdvManager__GetAAById_x                                 0x1401BC470
#define AltAdvManager__CanTrainAbility_x                           0x1401BC2A0
#define AltAdvManager__CanSeeAbility_x                             0x1401BBF60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400F3F10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400F4CC0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400F4ED0
#define CharacterZoneClient__CanUseItem_x                          0x1401092D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F57C0
#define CharacterZoneClient__CastSpell_x                           0x1400F5860
#define CharacterZoneClient__CharacterZoneClient_x                 0x140104DB0
#define CharacterZoneClient__Cur_HP_x                              0x14010A9B0
#define CharacterZoneClient__Cur_Mana_x                            0x14010AB70
#define CharacterZoneClient__FindAffectSlot_x                      0x1400F8810
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140111370
#define CharacterZoneClient__GetBaseSkill_x                        0x140120180  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400F9CF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1401087B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x140112EC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140111DC0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400F9EC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EA550
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EBF20
#define CharacterZoneClient__GetHPRegen_x                          0x1401124F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x14010A620
#define CharacterZoneClient__GetItemCountWorn_x                    0x140113150
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400F9F40
#define CharacterZoneClient__GetManaRegen_x                        0x140113F20
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FA150
#define CharacterZoneClient__GetModCap_x                           0x14011B660
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400FA1F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400FA400
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400EF0C0
#define CharacterZoneClient__HasSkill_x                            0x140116E90
#define CharacterZoneClient__HitBySpell_x                          0x1400FAEA0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400FE680
#define CharacterZoneClient__MakeMeVisible_x                       0x14011B0F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EF5E0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011B430
#define CharacterZoneClient__Max_Mana_x                            0x1402EF7D0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14011B8F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x140101C90
#define CharacterZoneClient__SpellDuration_x                       0x140102870
#define CharacterZoneClient__TotalEffect_x                         0x140103BA0
#define CharacterZoneClient__UseSkill_x                            0x1401210D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403737D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037DA20

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140379930
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403789C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403800E0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14084BB20

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A1560
#define CChatWindowManager__InitContextMenu_x                      0x1403A16F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A07B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A7F10
#define CChatWindowManager__CreateChatWindow_x                     0x1403A00F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401291F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403A8F00
#define CChatWindow__Clear_x                                       0x1403A9D40
#define CChatWindow__WndNotification_x                             0x1403AAF20
#define CChatWindow__AddHistory_x                                  0x1403A9840

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14059E330
#define CContextMenu__RemoveMenuItem_x                             0x14059E720
#define CContextMenu__RemoveAllMenuItems_x                         0x14059E6F0
#define CContextMenu__CheckMenuItem_x                              0x14059E560
#define CContextMenu__SetMenuItem_x                                0x14059E740
#define CContextMenu__AddSeparator_x                               0x14059E4A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D580
#define CContextMenuManager__RemoveMenu_x                          0x14059DB60
#define CContextMenuManager__PopupMenu_x                           0x14059D8A0
#define CContextMenuManager__Flush_x                               0x14059D600
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B6470

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140639FE0
#define CChatService__GetFriendName_x                              0x140639FF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E500
#define CComboWnd__Draw_x                                          0x14058E600
#define CComboWnd__GetCurChoice_x                                  0x14058E8D0  // unused
#define CComboWnd__GetListRect_x                                   0x14058E970
#define CComboWnd__InsertChoice_x                                  0x14058ECA0
#define CComboWnd__SetColors_x                                     0x14058F030
#define CComboWnd__SetChoice_x                                     0x14058EFF0
#define CComboWnd__GetItemCount_x                                  0x14058E960
#define CComboWnd__GetCurChoiceText_x                              0x14058E910  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E8A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058ED60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B4240
#define CContainerWnd__SetContainer_x                              0x140400650
#define CContainerWnd__vftable_x                                   0x1408183E8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4662C
#define CDisplay__ZoneMainUI_x                                     0x1405C5600
#define CDisplay__PreZoneMainUI_x                                  0x1401AEB50
#define CDisplay__CleanGameUI_x                                    0x1401A0E30
#define CDisplay__GetClickedActor_x                                0x1401A4FC0
#define CDisplay__GetUserDefinedColor_x                            0x1401A5BD0
#define CDisplay__InitCharSelectUI_x                               0x1401A5E80
#define CDisplay__ReloadUI_x                                       0x1401B0E00
#define CDisplay__WriteTextHD2_x                                   0x1401B7E10
#define CDisplay__TrueDistance_x                                   0x1401B7AF0
#define CDisplay__SetViewActor_x                                   0x1401B4350
#define CDisplay__GetFloorHeight_x                                 0x1401A5220
#define CDisplay__ToggleScreenshotMode_x                           0x1401B75F0
#define CDisplay__RealRender_World_x                               0x1401B0220

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF950
#define CEditWnd__DrawCaret_x                                      0x1405B4010  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B44B0
#define CEditWnd__GetCaretPt_x                                     0x1405B4730  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B4770
#define CEditWnd__GetDisplayString_x                               0x1405B49E0
#define CEditWnd__GetHorzOffset_x                                  0x1405B4C10
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B4D60
#define CEditWnd__GetSelStartPt_x                                  0x1405B5040  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B4E90
#define CEditWnd__PointFromPrintableChar_x                         0x1405B5BF0
#define CEditWnd__ReplaceSelection_x                               0x1405B5FA0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B6440
#define CEditWnd__SetEditable_x                                    0x1405B66C0
#define CEditWnd__SetWindowText_x                                  0x1405B66F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027C5D0
#define CEverQuest__ClickedPlayer_x                                0x140272530
#define CEverQuest__CreateTargetIndicator_x                        0x140272DF0
#define CEverQuest__DoTellWindow_x                                 0x140128F00 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401297C0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027E000
#define CEverQuest__dsp_chat_x                                     0x140128940 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A7FD0
#define CEverQuest__Emote_x                                        0x14027E9B0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027F750
#define CEverQuest__GetClassDesc_x                                 0x14027F7B0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027FB80
#define CEverQuest__GetDeityDesc_x                                 0x14027FE30
#define CEverQuest__GetLangDesc_x                                  0x140280260
#define CEverQuest__GetRaceDesc_x                                  0x140280600
#define CEverQuest__InterpretCmd_x                                 0x140281F10
#define CEverQuest__LeftClickedOnPlayer_x                          0x140296E20
#define CEverQuest__LMouseUp_x                                     0x1402838B0
#define CEverQuest__RightClickedOnPlayer_x                         0x140294680
#define CEverQuest__RMouseUp_x                                     0x14028DCD0
#define CEverQuest__SetGameState_x                                 0x140299330
#define CEverQuest__UPCNotificationFlush_x                         0x14029EA80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140283530
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028F000
#define CEverQuest__ReportSuccessfulHit_x                          0x14028FEB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C6A00

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E42C0
#define CGuild__GetGuildName_x                                     0x1400E4300

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E8C60

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B92B0
#define CHotButton__SetCheck_x                                     0x1402B9580

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F9D40
#define CInvSlotMgr__MoveItem_x                                    0x1403F9EC0
#define CInvSlotMgr__SelectSlot_x                                  0x1403FB800

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F71D0
#define CInvSlot__SliderComplete_x                                 0x1403F84B0
#define CInvSlot__GetItemBase_x                                    0x1403F3BD0
#define CInvSlot__UpdateItem_x                                     0x1403F8960

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FC370

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041D660
#define CItemDisplayWnd__UpdateStrings_x                           0x140420010
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041A0E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041B900
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041CA80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E2C30
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E4800

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051DA60

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140416830

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14016ADD0

// CLabel
#define CLabel__UpdateText_x                                       0x1404274B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591E70
#define CListWnd__dCListWnd_x                                      0x1405922C0
#define CListWnd__vftable_x                                        0x14084A3E8
#define CListWnd__AddColumn_x                                      0x140592960
#define CListWnd__AddColumn1_x                                     0x140592A00
#define CListWnd__AddLine_x                                        0x140592B60
#define CListWnd__AddString_x                                      0x1405930F0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593660
#define CListWnd__CalculateVSBRange_x                              0x140593930
#define CListWnd__ClearSel_x                                       0x140593AE0
#define CListWnd__ClearAllSel_x                                    0x140593A80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593B40
#define CListWnd__Compare_x                                        0x140593CF0
#define CListWnd__Draw_x                                           0x1405941C0
#define CListWnd__DrawColumnSeparators_x                           0x140594D70
#define CListWnd__DrawHeader_x                                     0x140594E30
#define CListWnd__DrawItem_x                                       0x140595500
#define CListWnd__DrawLine_x                                       0x140595E80
#define CListWnd__DrawSeparator_x                                  0x140596340
#define CListWnd__EnableLine_x                                     0x140596760
#define CListWnd__EnsureVisible_x                                  0x1405967C0
#define CListWnd__ExtendSel_x                                      0x1405968C0
#define CListWnd__GetColumnMinWidth_x                              0x140596BF0
#define CListWnd__GetColumnWidth_x                                 0x140596C70
#define CListWnd__GetCurSel_x                                      0x140596D70
#define CListWnd__GetItemData_x                                    0x1405970F0
#define CListWnd__GetItemHeight_x                                  0x140597130
#define CListWnd__GetItemRect_x                                    0x140597350
#define CListWnd__GetItemText_x                                    0x1405975F0
#define CListWnd__GetSelList_x                                     0x140597840
#define CListWnd__GetSeparatorRect_x                               0x140597A30
#define CListWnd__InsertLine_x                                     0x140598EA0
#define CListWnd__RemoveLine_x                                     0x140599510
#define CListWnd__SetColors_x                                      0x1405998E0
#define CListWnd__SetColumnJustification_x                         0x140599900
#define CListWnd__SetColumnLabel_x                                 0x140599980
#define CListWnd__SetColumnWidth_x                                 0x140599B20
#define CListWnd__SetCurSel_x                                      0x140599BF0
#define CListWnd__SetItemColor_x                                   0x140599E60
#define CListWnd__SetItemData_x                                    0x140599F00
#define CListWnd__SetItemText_x                                    0x14059A140
#define CListWnd__Sort_x                                           0x14059A550
#define CListWnd__ToggleSel_x                                      0x14059A6C0
#define CListWnd__SetColumnsSizable_x                              0x140599B70
#define CListWnd__SetItemWnd_x                                     0x14059A270
#define CListWnd__GetItemWnd_x                                     0x1405977D0
#define CListWnd__SetItemIcon_x                                    0x140599F40
#define CListWnd__CalculateCustomWindowPositions_x                 0x140593430
#define CListWnd__SetVScrollPos_x                                  0x14059A4B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043A660

// MapViewMap
#define MapViewMap__vftable_x                                      0x140824C48
#define MapViewMap__Clear_x                                        0x14043C1E0
#define MapViewMap__SetZoom_x                                      0x1404427A0
#define MapViewMap__HandleLButtonDown_x                            0x14043F2E0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140463EF0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046A4C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046AC70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046E460
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046D7B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140472710

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140617FE0
#define CPacketScrambler__hton_x                                   0x140617FD0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AD8D0
#define CSidlManagerBase__FindAnimation1_x                         0x1405AD810
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405ADF00
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405ADCB0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405ACC10
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405ACBA0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AC1E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D6190
#define CSidlManager__CreateXWnd_x                                 0x1404D6350

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057DBE0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057DAD0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9F10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057DD60
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057D260
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057D330
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057D500
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057E400
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057E630
#define CSidlScreenWnd__GetChildItem_x                             0x14057E7D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057EA20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058AB50 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057ED90
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057F100
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14057F9C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405802B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C9F980
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405808E0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405810D0
#define CSidlScreenWnd__vftable_x                                  0x140849630
#define CSidlScreenWnd__WndNotification_x                          0x140581120

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14032E560 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14032E960 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14032E8A0
#define CSkillMgr__IsActivatedSkill_x                              0x14032ED00
#define CSkillMgr__IsCombatSkill_x                                 0x14032ED40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059B040
#define CSliderWnd__SetValue_x                                     0x14059B850
#define CSliderWnd__SetNumTicks_x                                  0x14059B6D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DC7C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405B8AF0
#define CStmlWnd__CalculateHSBRange_x                              0x14058A540
#define CStmlWnd__CalculateVSBRange_x                              0x1405B9A00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BA470
#define CStmlWnd__ForceParseNow_x                                  0x1405BA510
#define CStmlWnd__GetVisibleText_x                                 0x1405BABE0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BC920
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BC960
#define CStmlWnd__SetSTMLText_x                                    0x1405C3930
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C3AE0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C3E70

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059BC20
#define CTabWnd__DrawCurrentPage_x                                 0x14059BCC0
#define CTabWnd__DrawTab_x                                         0x14059C090
#define CTabWnd__GetTabRect_x                                      0x14059C6F0
#define CTabWnd__InsertPage_x                                      0x14059C9C0
#define CTabWnd__RemovePage_x                                      0x14059CC50
#define CTabWnd__SetPage_x                                         0x14059CDB0
#define CTabWnd__UpdatePage_x                                      0x14059D0B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B6B50
#define CPageWnd__SetTabText_x                                     0x1405B6BC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DDAC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DDED0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A53C0
#define CTextureFont__DrawWrappedText1_x                           0x1405A52D0
#define CTextureFont__DrawWrappedText2_x                           0x1405A54F0
#define CTextureFont__GetTextExtent_x                              0x1405A58A0
#define CTextureFont__GetHeight_x                                  0x1405A5860

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8670

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057CE40

// CXStr
#define CXStr__gFreeLists_x                                        0x140ACC860
#define CXStr__gCXStrAccess_x                                      0x140C9F7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585DD0
#define CXWnd__ClrFocus_x                                          0x140586010
#define CXWnd__Destroy_x                                           0x140586150
#define CXWnd__DoAllDrawing_x                                      0x140586250
#define CXWnd__DrawColoredRect_x                                   0x140586A20
#define CXWnd__DrawTooltip_x                                       0x140588080
#define CXWnd__DrawTooltipAtPoint_x                                0x140588130
#define CXWnd__GetChildItem_x                                      0x140588A40
#define CXWnd__GetChildWndAt_x                                     0x140588B00
#define CXWnd__GetClientClipRect_x                                 0x140588C70
#define CXWnd__GetRelativeRect_x                                   0x14058A670
#define CXWnd__GetScreenClipRect_x                                 0x14058A780
#define CXWnd__GetScreenRect_x                                     0x14058A8F0
#define CXWnd__GetTooltipRect_x                                    0x14058AA60
#define CXWnd__IsActive_x                                          0x14058B010
#define CXWnd__IsDescendantOf_x                                    0x14058B040
#define CXWnd__IsReallyVisible_x                                   0x14058B0A0
#define CXWnd__IsType_x                                            0x14058B0E0
#define CXWnd__Minimize_x                                          0x14058B1E0
#define CXWnd__ProcessTransition_x                                 0x14058C070
#define CXWnd__Resize_x                                            0x14058C170
#define CXWnd__Right_x                                             0x14058C210
#define CXWnd__SetFocus_x                                          0x14058C5C0
#define CXWnd__SetFont_x                                           0x14058C610
#define CXWnd__SetKeyTooltip_x                                     0x14058C700
#define CXWnd__SetMouseOver_x                                      0x14058C840
#define CXWnd__SetParent_x                                         0x14058C8C0
#define CXWnd__StartFade_x                                         0x14058CCE0
#define CXWnd__vftable_x                                           0x140849C68
#define CXWnd__CXWnd_x                                             0x1405849B0
#define CXWnd__dCXWnd_x                                            0x1405852D0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF0D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x14059F8E0
#define CXWndManager__DrawCursor_x                                 0x14059FBC0
#define CXWndManager__DrawWindows_x                                0x14059FE10
#define CXWndManager__GetKeyboardFlags_x                           0x1405A04D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A0510
#define CXWndManager__RemoveWnd_x                                  0x1405A3A90

// CDBStr
#define CDBStr__GetString_x                                        0x14019F010

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140620EC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F1CE0
#define CCharacterListWnd__EnterWorld_x                            0x1400F09E0
#define CCharacterListWnd__Quit_x                                  0x1400F1CC0
#define CCharacterListWnd__UpdateList_x                            0x1400F29E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F0720
#define ItemBase__CreateItemTagString_x                            0x1405F1180
#define ItemBase__GetImageNum_x                                    0x1405F3630
#define ItemBase__GetItemValue_x                                   0x1405F50C0
#define ItemBase__IsEmpty_x                                        0x1405F6DB0
#define ItemBase__IsKeyRingItem_x                                  0x1405F74C0
#define ItemBase__ValueSellMerchant_x                              0x1405FB4C0
#define ItemClient__CanDrop_x                                      0x1402BB840
#define ItemClient__CanGoInBag_x                                   0x1402BB970
#define ItemClient__CreateItemClient_x                             0x1402BBC50
#define ItemClient__dItemClient_x                                  0x1402BB6B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401BE340
#define EQ_LoadingS__Array_x                                       0x140AB8CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140607670
#define PcBase__GetCombatAbility_x                                 0x140607D10
#define PcBase__GetCombatAbilityTimer_x                            0x140607DB0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140608500
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140608E90
#define PcClient__AlertInventoryChanged_x                          0x1402DCF90
#define PcClient__GetConLevel_x                                    0x1402DD4D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFB70
#define PcClient__HasLoreItem_x                                    0x1402E0C60
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EDB20
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0650

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14022BB10  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14022BCC0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14022BDF0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14022BD30  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140263F80  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140199800

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140663630
#define PlayerBase__CanSee1_x                                      0x140663700
#define PlayerBase__GetVisibilityLineSegment_x                     0x140663C30
#define PlayerBase__HasProperty_x                                  0x140663E50
#define PlayerBase__IsTargetable_x                                 0x140663F10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FC520
#define PlayerClient__GetPcClient_x                                0x1402FEBE0
#define PlayerClient__PlayerClient_x                               0x1402F5890
#define PlayerClient__SetNameSpriteState_x                         0x140302080
#define PlayerClient__SetNameSpriteTint_x                          0x140303040
#define PlayerZoneClient__ChangeHeight_x                           0x1403110B0
#define PlayerZoneClient__DoAttack_x                               0x140311D70
#define PlayerZoneClient__GetLevel_x                               0x1403154A0
#define PlayerZoneClient__IsValidTeleport_x                        0x140266D30
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401AD3F0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030AEA0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030AED0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030AF80
#define PlayerManagerClient__CreatePlayer_x                        0x14030A890
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406632B0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C0C60
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C0860
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C08D0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C0BF0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C0D80
#define KeypressHandler__HandleKeyUp_x                             0x1402C0E80
#define KeypressHandler__SaveKeymapping_x                          0x1402C0B00  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14061EAD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140619680

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E62B0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EBB50
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE220
#define PcZoneClient__RemovePetEffect_x                            0x1402F0750
#define PcZoneClient__HasAlternateAbility_x                        0x1402EEF00
#define PcZoneClient__CanEquipItem_x                               0x1402E9E70
#define PcZoneClient__GetItemByID_x                                0x1402ECBD0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F04D0
#define PcZoneClient__BandolierSwap_x                              0x1402E8E50
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402EE170

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026B7F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403BC690

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B3090
#define CContainerMgr__CloseContainer_x                            0x1403B29D0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B3400

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049C570

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B3BE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042E760
#define CLootWnd__RequestLootSlot_x                                0x14042F760

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401EE260
#define EQ_Spell__SpellAffects_x                                   0x1401EF520
#define EQ_Spell__SpellAffectBase_x                                0x1401EF480
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400FA5E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400FA590
#define EQ_Spell__IsSPAStacking_x                                  0x1401EF140
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401EED00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401EE5D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E2F60

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404F6660  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404F66A0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F5BA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F5150

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FD700  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140196020
#define CTaskManager__GetTaskStatus_x                              0x140196130
#define CTaskManager__GetElementDescription_x                      0x140195CB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401EC5E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401EB3E0
#define EqSoundManager__SoundAssistPlay_x                          0x140333930  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140333C60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058DA90
#define CTextureAnimation__SetCurCell_x                            0x14058DDA0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B1E60

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140637A40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140637AC0
#define CharacterBase__IsExpansionFlag_x                           0x14020E480

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403937D0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140394130
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140395590

// messages
#define msg_spell_worn_off_x                                       0x140222670
#define msg_new_text_x                                             0x14021E020
#define __msgTokenTextParam_x                                      0x140215E10
#define msgTokenText_x                                             0x140215D30

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403352F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140335210

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140672980

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140427C00

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403B87D0
#define CCursorAttachment__AttachToCursor1_x                       0x1403B7320
#define CCursorAttachment__Deactivate_x                            0x1403B8CD0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6B10
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6D00
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6D10

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140166070
#define CFindItemWnd__Update_x                                     0x140166A10
#define CFindItemWnd__PickupSelectedItem_x                         0x140160520

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14016F9B0
#define LootFiltersManager__GetItemFilterData_x                    0x1401704C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140170D60
#define LootFiltersManager__SetItemLootFilter_x                    0x140171010

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047FDD0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140676D80
#define CResolutionHandler__GetWindowedStyle_x                     0x14032E0D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403AF490

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14063BA70  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14063B960  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D1F90
#define CGroupWnd__UpdateDisplay_x                                 0x1403D1B70

// ItemBase
#define ItemBase__IsLore_x                                         0x1405F7590
#define ItemBase__IsLoreEquipped_x                                 0x1405F7620

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D3810

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402640E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140264070
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402640B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328820

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140141350
#define FactionManagerClient__HandleFactionMessage_x               0x140141700
#define FactionManagerClient__GetFactionStanding_x                 0x140140B20
#define FactionManagerClient__GetMaxFaction_x                      0x140140B20
#define FactionManagerClient__GetMinFaction_x                      0x1401409D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CFE00

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14014CA20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C6C90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C6010
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C6AB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C6A30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140339E20

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140328820

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14022BE80

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140581710

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A8990

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034B310

// AchievementManager
#define AchievementManager__Instance_x                             0x1400AFEA0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
