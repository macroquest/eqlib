/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#define __ClientDate                                               20220513u
#define __ExpectedVersionDate                                     "May 13 2022"
#define __ExpectedVersionTime                                     "15:02:36"
#define __ActualVersionDate_x                                      0x140790340
#define __ActualVersionTime_x                                      0x140790330
#define __ActualVersionBuild_x                                     0x14077E548

// Memory Protection
#define __MemChecker0_x                                            0x14026C4A0
#define __MemChecker1_x                                            0x1404FEFB0
#define __MemChecker4_x                                            0x14023C4C0
#define __EncryptPad0_x                                            0x140A380B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B73490
#define instEQZoneInfo_x                                           0x140B73684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D7510
#define __gfMaxZoomCameraDistance_x                                0x140786680
#define __gfMaxCameraDistance_x                                    0x1407C0ECC
#define __CurrentSocial_x                                          0x1408F2900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2DF70
#define g_eqCommandStates_x                                        0x140A2EFD0
#define __CommandList_x                                            0x140A2F210
#define __ScreenMode_x                                             0x140ABAF84
#define __gWorld_x                                                 0x140B6DC48
#define __gpbCommandEvent_x                                        0x140B6DEC8
#define __ServerHost_x                                             0x140B6E0B8
#define __Guilds_x                                                 0x140B72040
#define __MouseEventTime_x                                         0x140BDE940
#define DI8__Mouse_Check_x                                         0x140BE35A0
#define __heqmain_x                                                0x140BE5A48
#define DI8__Mouse_x                                               0x140BE5A60
#define __HWnd_x                                                   0x140BE5A68
#define __Mouse_x                                                  0x140BE2A98
#define DI8__Main_x                                                0x140BE2B30
#define DI8__Keyboard_x                                            0x140BE2B38
#define __LoginName_x                                              0x140BE321C
#define __CurrentMapLabel_x                                        0x140BF87B0
#define __LabelCache_x                                             0x140BF93C0
#define __SubscriptionType_x                                       0x140C309C0
#define Teleport_Table_Size_x                                      0x140B6DF54
#define Teleport_Table_x                                           0x140B6BA10

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B6E3D0
#define pinstActiveBanker_x                                        0x140B6B920
#define pinstActiveCorpse_x                                        0x140B6B910
#define pinstActiveGMaster_x                                       0x140B6B918
#define pinstActiveMerchant_x                                      0x140B6B908
#define pinstAltAdvManager_x                                       0x140ABBC28
#define pinstCEverQuest_x                                          0x140BE2A90
#define pinstCamActor_x                                            0x140ABAF68
#define pinstCDBStr_x                                              0x140ABAA30
#define pinstCDisplay_x                                            0x140B6DA10
#define pinstControlledPlayer_x                                    0x140B6B9B0
#define pinstCResolutionHandler_x                                  0x141269560
#define pinstCSidlManager_x                                        0x140C0A440
#define pinstCXWndManager_x                                        0x140C0A430
#define instDynamicZone_x                                          0x140B71F00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B71F4E
#define instExpeditionName_x                                       0x140B71F8E
#define pinstDZMember_x                                            0x140B72018
#define pinstDZTimerInfo_x                                         0x140B72020
#define pinstEqLogin_x                                             0x140BE2B60
#define instTribute_x                                              0x140A29700
#define pinstEQSoundManager_x                                      0x140ABBF68
#define pinstEQSpellStrings_x                                      0x140A9F660
#define pinstSGraphicsEngine_x                                     0x1412692F8
#define pinstLocalPC_x                                             0x140B6B9F8
#define pinstLocalPlayer_x                                         0x140B6B900
#define pinstCMercenaryClientManager_x                             0x140BE01D8
#define pinstModelPlayer_x                                         0x140B6B930
#define pinstRenderInterface_x                                     0x141269310
#define pinstSkillMgr_x                                            0x140BE1E70
#define pinstSpawnManager_x                                        0x140BE05A0
#define pinstSpellManager_x                                        0x140BE1FB8
#define pinstStringTable_x                                         0x140B6BA08
#define pinstSwitchManager_x                                       0x140B6B880
#define pinstTarget_x                                              0x140B6B9A8
#define pinstTaskMember_x                                          0x140A296F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6B9B8
#define pinstTradeTarget_x                                         0x140B6B928
#define instTributeActive_x                                        0x140A29729
#define pinstViewActor_x                                           0x140ABAF60
#define pinstWorldData_x                                           0x140B6B9F0
#define pinstPlayerPath_x                                          0x140BE05C8
#define pinstTargetIndicator_x                                     0x140BE2068
#define EQObject_Top_x                                             0x140B6B9D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF5918
#define pinstCContainerMgr_x                                       0x140ABB048
#define pinstCContextMenuManager_x                                 0x140C0A3E0
#define pinstCInvSlotMgr_x                                         0x140ABB020
#define pinstCItemDisplayManager_x                                 0x140BF8380
#define pinstCPopupWndManager_x                                    0x140BF8C10
#define pinstCSpellDisplayMgr_x                                    0x140BF92A0
#define pinstCTaskManager_x                                        0x1408F2B40
#define pinstEQSuiteTextureLoader_x                                0x140A41720
#define pinstItemIconCache_x                                       0x140BF5C78
#define pinstLootFiltersManager_x                                  0x140ABA448

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6BB0
#define __CastRay2_x                                               0x1401F68C0
#define __ConvertItemTags_x                                        0x1401F6FB0
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x1401521B0
#define __DoesFileExist_x                                          0x140503750
#define __EQGetTime_x                                              0x1404FF560
#define __ExecuteCmd_x                                             0x1401CF730
#define __FixHeading_x                                             0x140601E10
#define __FlushDxKeyboard_x                                        0x1402E79F0
#define __get_bearing_x                                            0x1401FFCB0
#define __get_melee_range_x                                        0x1401FFDA0
#define __GetAnimationCache_x                                      0x14035B9D0
#define __GetGaugeValueFromEQ_x                                    0x140479D90
#define __GetLabelFromEQ_x                                         0x14047B3A0
#define __GetXTargetType_x                                         0x140603290   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140601E90
#define __HelpPath_x                                               0x140BDE808   // Why?
#define __NewUIINI_x                                               0x140485F60   // Why?
#define __ProcessGameEvents_x                                      0x140231D30
#define __ProcessKeyboardEvents_x                                  0x1402E91A0
#define __ProcessMouseEvents_x                                     0x140233140
#define __SaveColors_x                                             0x140161E80
#define __STMLToText_x                                             0x14052D270
#define __WndProc_x                                                0x1402E6160
#define CMemoryMappedFile__SetFile_x                               0x14073DB00
#define DrawNetStatus_x                                            0x14027A010
#define Util__FastTime_x                                           0x140500260
#define __eq_delete_x                                              0x140608120
#define __eq_new_x                                                 0x14060821C
#define __CopyLayout_x                                             0x140268950
#define __ThrottleFrameRate_x                                      0x140221BA1
#define __ThrottleFrameRateEnd_x                                   0x140221C01

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F8140
#define CAAWnd__Update_x                                           0x1402F8440
#define CAAWnd__UpdateSelected_x                                   0x1402F9400

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B4F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073F90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076E3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BD60

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016CBB0
#define AltAdvManager__IsAbilityReady_x                            0x14016CE30
#define AltAdvManager__GetAAById_x                                 0x14016C480
#define AltAdvManager__CanTrainAbility_x                           0x14016C2B0
#define AltAdvManager__CanSeeAbility_x                             0x14016BF70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F20
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CD0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4EE0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8BC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57D0
#define CharacterZoneClient__CastSpell_x                           0x1400A5870
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4D30
#define CharacterZoneClient__Cur_HP_x                              0x1400BA1F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA3B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8A60
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFE50
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE830  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9F50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8140
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1970
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C08A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA120
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0FA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9EA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1B80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA1A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2610
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA3B0
#define CharacterZoneClient__GetModCap_x                           0x1400C9F90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA450
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA6F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F170
#define CharacterZoneClient__HasSkill_x                            0x1400C57C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE880
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9A20
#define CharacterZoneClient__Max_Endurance_x                       0x1402928B0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9D60
#define CharacterZoneClient__Max_Mana_x                            0x140292AA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA1D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1D60
#define CharacterZoneClient__SpellDuration_x                       0x1400B2940
#define CharacterZoneClient__TotalEffect_x                         0x1400B3B70
#define CharacterZoneClient__UseSkill_x                            0x1400CF790


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403154F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F270

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B240
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A2E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403218F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CD610

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140341990
#define CChatWindowManager__InitContextMenu_x                      0x140341B20
#define CChatWindowManager__FreeChatWindow_x                       0x140340BE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403488B0
#define CChatWindowManager__CreateChatWindow_x                     0x140340520

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7580

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349820
#define CChatWindow__Clear_x                                       0x14034A630
#define CChatWindow__WndNotification_x                             0x14034B7B0
#define CChatWindow__AddHistory_x                                  0x14034A130

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E2A0
#define CContextMenu__RemoveMenuItem_x                             0x14053E7B0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053E780
#define CContextMenu__CheckMenuItem_x                              0x14053E5F0
#define CContextMenu__SetMenuItem_x                                0x14053E7D0
#define CContextMenu__AddSeparator_x                               0x14053E400

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053EE20
#define CContextMenuManager__RemoveMenu_x                          0x14053F390
#define CContextMenuManager__PopupMenu_x                           0x14053F110
#define CContextMenuManager__Flush_x                               0x14053EEA0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140355A40

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CB3D0
#define CChatService__GetFriendName_x                              0x1405CB3E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A420
#define CComboWnd__Draw_x                                          0x14053A520
#define CComboWnd__GetCurChoice_x                                  0x14053A800  // unused
#define CComboWnd__GetListRect_x                                   0x14053A8A0
#define CComboWnd__InsertChoice_x                                  0x14053ABE0
#define CComboWnd__SetColors_x                                     0x14053AF70
#define CComboWnd__SetChoice_x                                     0x14053AF30
#define CComboWnd__GetItemCount_x                                  0x14053A890
#define CComboWnd__GetCurChoiceText_x                              0x14053A840  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053A7D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053ACA0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140353AC0
#define CContainerWnd__SetContainer_x                              0x140354860
#define CContainerWnd__vftable_x                                   0x14079DF18

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABACF4
#define CDisplay__ZoneMainUI_x                                     0x140555A40
#define CDisplay__PreZoneMainUI_x                                  0x14015EDD0
#define CDisplay__CleanGameUI_x                                    0x1401512B0
#define CDisplay__GetClickedActor_x                                0x140155440
#define CDisplay__GetUserDefinedColor_x                            0x140155F20
#define CDisplay__InitCharSelectUI_x                               0x1401561D0
#define CDisplay__ReloadUI_x                                       0x140161130
#define CDisplay__WriteTextHD2_x                                   0x140168080
#define CDisplay__TrueDistance_x                                   0x140167D60
#define CDisplay__SetViewActor_x                                   0x140164670
#define CDisplay__GetFloorHeight_x                                 0x1401556A0
#define CDisplay__ToggleScreenshotMode_x                           0x140167860
#define CDisplay__RealRender_World_x                               0x1401604C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140560F60
#define CEditWnd__DrawCaret_x                                      0x140541CD0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542190
#define CEditWnd__GetCaretPt_x                                     0x140542410  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542450
#define CEditWnd__GetDisplayString_x                               0x1405426C0
#define CEditWnd__GetHorzOffset_x                                  0x140542900
#define CEditWnd__GetLineForPrintableChar_x                        0x140542A50
#define CEditWnd__GetSelStartPt_x                                  0x140542D30  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542B80
#define CEditWnd__PointFromPrintableChar_x                         0x1405438E0
#define CEditWnd__ReplaceSelection_x                               0x140543C90
#define CEditWnd__SelectableCharFromPoint_x                        0x140544130
#define CEditWnd__SetEditable_x                                    0x1405443C0
#define CEditWnd__SetWindowText_x                                  0x1405443F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222F50
#define CEverQuest__ClickedPlayer_x                                0x1402192E0
#define CEverQuest__CreateTargetIndicator_x                        0x140219A40
#define CEverQuest__DoTellWindow_x                                 0x1400D7290 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B50 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224450
#define CEverQuest__dsp_chat_x                                     0x1400D6DB0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D9C0
#define CEverQuest__Emote_x                                        0x140224DB0
#define CEverQuest__GetBodyTypeDesc_x                              0x140225B20
#define CEverQuest__GetClassDesc_x                                 0x140225B80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225F50
#define CEverQuest__GetDeityDesc_x                                 0x140226300
#define CEverQuest__GetLangDesc_x                                  0x140226730
#define CEverQuest__GetRaceDesc_x                                  0x140226AD0
#define CEverQuest__InterpretCmd_x                                 0x1402281C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023CB40
#define CEverQuest__LMouseUp_x                                     0x140229C00
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A4E0
#define CEverQuest__RMouseUp_x                                     0x140233CB0
#define CEverQuest__SetGameState_x                                 0x14023EDF0
#define CEverQuest__UPCNotificationFlush_x                         0x1402444D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229880
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234FE0
#define CEverQuest__ReportSuccessfulHit_x                          0x140235D20

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140365D20

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094340
#define CGuild__GetGuildName_x                                     0x140094380

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382500

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E6E0
#define CHotButton__SetCheck_x                                     0x14025E970

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403913E0
#define CInvSlotMgr__MoveItem_x                                    0x140391530
#define CInvSlotMgr__SelectSlot_x                                  0x140392F10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F060
#define CInvSlot__SliderComplete_x                                 0x140390290
#define CInvSlot__GetItemBase_x                                    0x14038B690
#define CInvSlot__UpdateItem_x                                     0x1403906E0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140393570
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403940D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B3990
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B6290
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0860
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B1F00
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B2DE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140476A70
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478640

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AE8C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD000

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117580

// CLabel
#define CLabel__UpdateText_x                                       0x1403BD650

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405113A0
#define CListWnd__dCListWnd_x                                      0x1405117E0
#define CListWnd__vftable_x                                        0x1407CCA10
#define CListWnd__AddColumn_x                                      0x140511E80
#define CListWnd__AddColumn1_x                                     0x140511F20
#define CListWnd__AddLine_x                                        0x140512080
#define CListWnd__AddString_x                                      0x140512600
#define CListWnd__CalculateFirstVisibleLine_x                      0x140512CF0
#define CListWnd__CalculateVSBRange_x                              0x140512FD0
#define CListWnd__ClearSel_x                                       0x140513180
#define CListWnd__ClearAllSel_x                                    0x140513120
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405131E0
#define CListWnd__Compare_x                                        0x1405133A0
#define CListWnd__Draw_x                                           0x140513870
#define CListWnd__DrawColumnSeparators_x                           0x140514410
#define CListWnd__DrawHeader_x                                     0x1405144D0
#define CListWnd__DrawItem_x                                       0x140514B90
#define CListWnd__DrawLine_x                                       0x140515510
#define CListWnd__DrawSeparator_x                                  0x1405159D0
#define CListWnd__EnableLine_x                                     0x140515DF0
#define CListWnd__EnsureVisible_x                                  0x140515E50
#define CListWnd__ExtendSel_x                                      0x140515F50
#define CListWnd__GetColumnMinWidth_x                              0x140516280
#define CListWnd__GetColumnWidth_x                                 0x140516300
#define CListWnd__GetCurSel_x                                      0x140516400
#define CListWnd__GetItemData_x                                    0x140516780
#define CListWnd__GetItemHeight_x                                  0x1405167C0
#define CListWnd__GetItemRect_x                                    0x140516980
#define CListWnd__GetItemText_x                                    0x140516C20
#define CListWnd__GetSelList_x                                     0x140516E70
#define CListWnd__GetSeparatorRect_x                               0x140517060
#define CListWnd__InsertLine_x                                     0x1405184E0
#define CListWnd__RemoveLine_x                                     0x140518B00
#define CListWnd__SetColors_x                                      0x140518ED0
#define CListWnd__SetColumnJustification_x                         0x140518EF0
#define CListWnd__SetColumnLabel_x                                 0x140518F70
#define CListWnd__SetColumnWidth_x                                 0x140519110
#define CListWnd__SetCurSel_x                                      0x1405191E0
#define CListWnd__SetItemColor_x                                   0x140519450
#define CListWnd__SetItemData_x                                    0x1405194F0
#define CListWnd__SetItemText_x                                    0x140519730
#define CListWnd__Sort_x                                           0x140519B40
#define CListWnd__ToggleSel_x                                      0x140519CB0
#define CListWnd__SetColumnsSizable_x                              0x140519160
#define CListWnd__SetItemWnd_x                                     0x140519860
#define CListWnd__GetItemWnd_x                                     0x140516E00
#define CListWnd__SetItemIcon_x                                    0x140519530
#define CListWnd__CalculateCustomWindowPositions_x                 0x140512AC0
#define CListWnd__SetVScrollPos_x                                  0x140519AA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D00D0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407A9590
#define MapViewMap__Clear_x                                        0x1403D1C50
#define MapViewMap__SetZoom_x                                      0x1403D8210
#define MapViewMap__HandleLButtonDown_x                            0x1403D4D50

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F97D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF3E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140401400
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140403200
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402620
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404068B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A7E60
#define CPacketScrambler__hton_x                                   0x1405A7E50

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537AF0
#define CSidlManagerBase__FindAnimation1_x                         0x140537A30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140538120
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140537ED0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140536E30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140536DC0
#define CSidlManagerBase__CreateXWnd_x                             0x140536400

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140469200
#define CSidlManager__CreateXWnd_x                                 0x1404693C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052ED40
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052EE70
#define CSidlScreenWnd__ConvertToRes_x                             0x14055B500 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052EFA0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052E5E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E530
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052E800
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F570
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052F7A0
#define CSidlScreenWnd__GetChildItem_x                             0x14052F940
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FB60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521640 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14052FED0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140530240
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530AF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405313A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0A288
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405319D0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405321C0
#define CSidlScreenWnd__vftable_x                                  0x1407CDA70
#define CSidlScreenWnd__WndNotification_x                          0x140532210

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D09E0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0DE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D0D20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1180
#define CSkillMgr__IsCombatSkill_x                                 0x1402D11C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140485FD0
#define CSliderWnd__SetValue_x                                     0x140540950
#define CSliderWnd__SetNumTicks_x                                  0x1405407D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140470710

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140548EA0
#define CStmlWnd__CalculateHSBRange_x                              0x140521000
#define CStmlWnd__CalculateVSBRange_x                              0x140549D50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054A850
#define CStmlWnd__ForceParseNow_x                                  0x14054A8F0
#define CStmlWnd__GetVisibleText_x                                 0x14054AFD0
#define CStmlWnd__MakeStmlColorTag_x                               0x14054CD60
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054CDA0
#define CStmlWnd__SetSTMLText_x                                    0x140553D80
#define CStmlWnd__StripFirstSTMLLines_x                            0x140553F30
#define CStmlWnd__UpdateHistoryString_x                            0x1405542C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140545990
#define CTabWnd__DrawCurrentPage_x                                 0x140545A30
#define CTabWnd__DrawTab_x                                         0x140545E00
#define CTabWnd__GetTabRect_x                                      0x140546460
#define CTabWnd__InsertPage_x                                      0x140546730
#define CTabWnd__RemovePage_x                                      0x1405469C0
#define CTabWnd__SetPage_x                                         0x140546B20
#define CTabWnd__UpdatePage_x                                      0x140546E20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140545590
#define CPageWnd__SetTabText_x                                     0x140545600

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D890  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DCA0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051AE00
#define CTextureFont__DrawWrappedText1_x                           0x14051AD10
#define CTextureFont__DrawWrappedText2_x                           0x14051AF30
#define CTextureFont__GetTextExtent_x                              0x14051B2E0
#define CTextureFont__GetHeight_x                                  0x14051B2A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140559C60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E010

// CXStr
#define CXStr__gFreeLists_x                                        0x140A41090
#define CXStr__gCXStrAccess_x                                      0x140C09848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051C860
#define CXWnd__ClrFocus_x                                          0x14051CAA0
#define CXWnd__Destroy_x                                           0x14051CBE0
#define CXWnd__DoAllDrawing_x                                      0x14051CCF0
#define CXWnd__DrawColoredRect_x                                   0x14051D4B0
#define CXWnd__DrawTooltip_x                                       0x14051EB20
#define CXWnd__DrawTooltipAtPoint_x                                0x14051EBD0
#define CXWnd__GetChildItem_x                                      0x14051F4D0
#define CXWnd__GetChildWndAt_x                                     0x14051F590
#define CXWnd__GetClientClipRect_x                                 0x14051F700
#define CXWnd__GetRelativeRect_x                                   0x140521140
#define CXWnd__GetScreenClipRect_x                                 0x140521250
#define CXWnd__GetScreenRect_x                                     0x1405213C0
#define CXWnd__GetTooltipRect_x                                    0x140521540
#define CXWnd__IsActive_x                                          0x140521AC0
#define CXWnd__IsDescendantOf_x                                    0x140521AF0
#define CXWnd__IsReallyVisible_x                                   0x140521B60
#define CXWnd__IsType_x                                            0x140521BA0
#define CXWnd__Minimize_x                                          0x140521CA0
#define CXWnd__ProcessTransition_x                                 0x140522CF0
#define CXWnd__Refade_x                                            0x140522DF0
#define CXWnd__Resize_x                                            0x140522E10
#define CXWnd__Right_x                                             0x140522EB0
#define CXWnd__SetFocus_x                                          0x140523280
#define CXWnd__SetFont_x                                           0x1405232D0
#define CXWnd__SetKeyTooltip_x                                     0x1405233D0
#define CXWnd__SetMouseOver_x                                      0x140523500
#define CXWnd__SetParent_x                                         0x140523580
#define CXWnd__StartFade_x                                         0x1405239C0
#define CXWnd__vftable_x                                           0x1407CD188
#define CXWnd__CXWnd_x                                             0x14051B400
#define CXWnd__dCXWnd_x                                            0x14051BD40

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405606E0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x1405251E0
#define CXWndManager__DrawWindows_x                                0x140525310
#define CXWndManager__GetKeyboardFlags_x                           0x1405259D0
#define CXWndManager__HandleKeyboardMsg_x                          0x140525A10
#define CXWndManager__RemoveWnd_x                                  0x140528D80

// CDBStr
#define CDBStr__GetString_x                                        0x14014F4B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B1660

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A70
#define CCharacterListWnd__EnterWorld_x                            0x1400A0720
#define CCharacterListWnd__Quit_x                                  0x1400A1A50
#define CCharacterListWnd__UpdateList_x                            0x1400A2760

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140581A10
#define ItemBase__CreateItemTagString_x                            0x1405823B0
#define ItemBase__GetImageNum_x                                    0x140584580
#define ItemBase__GetItemValue_x                                   0x1405860F0
#define ItemBase__IsEmpty_x                                        0x140587BF0
#define ItemBase__IsKeyRingItem_x                                  0x1405882C0
#define ItemBase__ValueSellMerchant_x                              0x14058C5C0
#define ItemClient__CanDrop_x                                      0x140260B30
#define ItemClient__CanGoInBag_x                                   0x140260C60
#define ItemClient__CreateItemClient_x                             0x140260F20
#define ItemClient__dItemClient_x                                  0x140260990

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E350
#define EQ_LoadingS__Array_x                                       0x140A2BA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140597BC0
#define PcBase__GetCombatAbility_x                                 0x140598210
#define PcBase__GetCombatAbilityTimer_x                            0x1405982B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405989C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140599220
#define PcClient__AlertInventoryChanged_x                          0x1402815E0
#define PcClient__GetConLevel_x                                    0x140281AB0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402842C0
#define PcClient__HasLoreItem_x                                    0x140285330
#define PcZoneClient__GetItemRecastTimer_x                         0x140291250
#define PcZoneClient__RemoveMyAffect_x                             0x140293900

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3DB0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D3E20  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D3F30  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3E90  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020AE00  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149D80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F4BB0
#define PlayerBase__CanSee1_x                                      0x1405F4C80
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F51A0
#define PlayerBase__HasProperty_x                                  0x1405F53C0
#define PlayerBase__IsTargetable_x                                 0x1405F5480
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F500
#define PlayerClient__GetPcClient_x                                0x1402A1A90
#define PlayerClient__PlayerClient_x                               0x1402986F0
#define PlayerClient__SetNameSpriteState_x                         0x1402A4EC0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5E60
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3CA0
#define PlayerZoneClient__DoAttack_x                               0x1402B4990
#define PlayerZoneClient__GetLevel_x                               0x1402B7F00
#define PlayerZoneClient__IsValidTeleport_x                        0x14020DBC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D670

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD720  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD750  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD800
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD110
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F4830

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265E90
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265A90
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265B00
#define KeypressHandler__ClearCommandStateArray_x                  0x140265E20  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265FB0
#define KeypressHandler__HandleKeyUp_x                             0x140266090
#define KeypressHandler__SaveKeymapping_x                          0x140265D30  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AEF50  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A9500

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A920  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F8C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402917B0
#define PcZoneClient__RemovePetEffect_x                            0x140293A00
#define PcZoneClient__HasAlternateAbility_x                        0x140292220
#define PcZoneClient__CanEquipItem_x                               0x14028DC90
#define PcZoneClient__GetItemByID_x                                0x140290800
#define PcZoneClient__RemoveBuffEffect_x                           0x1402937B0
#define PcZoneClient__BandolierSwap_x                              0x14028CE50
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291700

// Doors
#define EQSwitch__UseSwitch_x                                      0x140212680

// IconCache
#define IconCache__GetIcon_x                                       0x14035BA00

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403528A0
#define CContainerMgr__CloseContainer_x                            0x140352260
#define CContainerMgr__OpenExperimentContainer_x                   0x140352C00

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140430490

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259430

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C42C0
#define CLootWnd__RequestLootSlot_x                                0x1403C52A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199530
#define EQ_Spell__SpellAffects_x                                   0x14019A7D0
#define EQ_Spell__SpellAffectBase_x                                0x14019A730
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA8D0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA880
#define EQ_Spell__IsSPAStacking_x                                  0x14019A3F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199FB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199890

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D70

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140489D80  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140489DC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404892D0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488880

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140490E60  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146720
#define CTaskManager__GetTaskStatus_x                              0x140146830
#define CTaskManager__GetElementDescription_x                      0x1401463B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197890
#define EqSoundManager__PlayScriptMp3_x                            0x140196690
#define EqSoundManager__SoundAssistPlay_x                          0x1402D71E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7510  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140544BF0
#define CTextureAnimation__SetCurCell_x                            0x140544F00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257710

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C8EF0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C8F70
#define CharacterBase__IsExpansionFlag_x                           0x1401B85C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140333BA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403344E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335920

// messages
#define msg_spell_worn_off_x                                       0x1401CB540
#define msg_new_text_x                                             0x1401C7370
#define __msgTokenTextParam_x                                      0x1401BF310
#define msgTokenText_x                                             0x1401BF230

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8AD0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D89F0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140603670

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BDD90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140357BC0
#define CCursorAttachment__AttachToCursor1_x                       0x140356810
#define CCursorAttachment__Deactivate_x                            0x1403580C0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140557EB0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405580A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405580B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113120
#define CFindItemWnd__Update_x                                     0x140113320
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E360

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BD40
#define LootFiltersManager__GetItemFilterData_x                    0x14011C850
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D0F0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D3A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140413B30

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140607A90
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0540

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034EE70

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CCD50  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CCE60  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371030
#define CGroupWnd__UpdateDisplay_x                                 0x140370DD0

// ItemBase
#define ItemBase__IsLore_x                                         0x140588390
#define ItemBase__IsLoreEquipped_x                                 0x1405884E0

#define MultipleItemMoveManager__ProcessMove_x                     0x140278460

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020AF60
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AEF0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020AF30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAF60

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF460
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF810
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEC30
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEC30
#define FactionManagerClient__GetMinFaction_x                      0x1400EEAE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D780

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAB10

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176C50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175F50
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176A70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401769F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD1D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAF60

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D4020

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140557030

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE490

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
