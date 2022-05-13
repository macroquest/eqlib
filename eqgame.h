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

#define __ClientDate                                               20220509u
#define __ExpectedVersionDate                                     "May  9 2022"
#define __ExpectedVersionTime                                     "19:38:23"
#define __ActualVersionDate_x                                      0x140790340
#define __ActualVersionTime_x                                      0x140790330
#define __ActualVersionBuild_x                                     0x14077E548

// Memory Protection
#define __MemChecker0_x                                            0x14026C6F0
#define __MemChecker1_x                                            0x1404FF050
#define __MemChecker4_x                                            0x14023C6F0
#define __EncryptPad0_x                                            0x140A380B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B73490
#define instEQZoneInfo_x                                           0x140B73684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D7740
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
#define __CastRay_x                                                0x1401F6DE0
#define __CastRay2_x                                               0x1401F6AF0
#define __ConvertItemTags_x                                        0x1401F71E0
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140152190
#define __DoesFileExist_x                                          0x1405037F0
#define __EQGetTime_x                                              0x1404FF600
#define __ExecuteCmd_x                                             0x1401CF960
#define __FixHeading_x                                             0x140601F20
#define __FlushDxKeyboard_x                                        0x1402E7DC0
#define __get_bearing_x                                            0x1401FFEE0
#define __get_melee_range_x                                        0x1401FFFD0
#define __GetAnimationCache_x                                      0x14035BCC0
#define __GetGaugeValueFromEQ_x                                    0x140479E30
#define __GetLabelFromEQ_x                                         0x14047B440
#define __GetXTargetType_x                                         0x1406033A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140601FA0
#define __HelpPath_x                                               0x140BDE808   // Why?
#define __NewUIINI_x                                               0x140486000   // Why?
#define __ProcessGameEvents_x                                      0x140231F60
#define __ProcessKeyboardEvents_x                                  0x1402E9570
#define __ProcessMouseEvents_x                                     0x140233370
#define __SaveColors_x                                             0x140161E60
#define __STMLToText_x                                             0x14052D230
#define __WndProc_x                                                0x1402E6530
#define CMemoryMappedFile__SetFile_x                               0x14073DC10
#define DrawNetStatus_x                                            0x14027A280
#define Util__FastTime_x                                           0x140500300
#define __eq_delete_x                                              0x140608230
#define __eq_new_x                                                 0x14060832C
#define __CopyLayout_x                                             0x140268BA0
#define __ThrottleFrameRate_x                                      0x140221DE7
#define __ThrottleFrameRateEnd_x                                   0x140221E47

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F8510
#define CAAWnd__Update_x                                           0x1402F8810
#define CAAWnd__UpdateSelected_x                                   0x1402F97D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B4E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073F90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076E3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BD50

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016CB80
#define AltAdvManager__IsAbilityReady_x                            0x14016CE00
#define AltAdvManager__GetAAById_x                                 0x14016C450
#define AltAdvManager__CanTrainAbility_x                           0x14016C280
#define AltAdvManager__CanSeeAbility_x                             0x14016BF40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3EF0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CA0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4EB0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8C40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57A0
#define CharacterZoneClient__CastSpell_x                           0x1400A5840
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4DB0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA270
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA430
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8A40
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFEE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE8B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9F30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B81C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1A00
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0930
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA100
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2A0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1030
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9F20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1C10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA180
#define CharacterZoneClient__GetManaRegen_x                        0x1400C26A0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA390
#define CharacterZoneClient__GetModCap_x                           0x1400CA010
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA430
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA6D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F140
#define CharacterZoneClient__HasSkill_x                            0x1400C5840
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE890
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9AA0
#define CharacterZoneClient__Max_Endurance_x                       0x140292B20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9DE0
#define CharacterZoneClient__Max_Mana_x                            0x140292D10  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA250
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1DC0
#define CharacterZoneClient__SpellDuration_x                       0x1400B29B0
#define CharacterZoneClient__TotalEffect_x                         0x1400B3BF0
#define CharacterZoneClient__UseSkill_x                            0x1400CF810


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315870

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F600

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B5D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A670

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140321C70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CD610

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140341C90
#define CChatWindowManager__InitContextMenu_x                      0x140341E20
#define CChatWindowManager__FreeChatWindow_x                       0x140340EE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140348BB0
#define CChatWindowManager__CreateChatWindow_x                     0x140340820

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7600

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349B20
#define CChatWindow__Clear_x                                       0x14034A920
#define CChatWindow__WndNotification_x                             0x14034BAA0
#define CChatWindow__AddHistory_x                                  0x14034A430

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E1D0
#define CContextMenu__RemoveMenuItem_x                             0x14053E6D0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053E6A0
#define CContextMenu__CheckMenuItem_x                              0x14053E510
#define CContextMenu__SetMenuItem_x                                0x14053E6F0
#define CContextMenu__AddSeparator_x                               0x14053E330

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053ED40
#define CContextMenuManager__RemoveMenu_x                          0x14053F2C0
#define CContextMenuManager__PopupMenu_x                           0x14053F040
#define CContextMenuManager__Flush_x                               0x14053EDC0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140355D30

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CB510
#define CChatService__GetFriendName_x                              0x1405CB520

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A3A0
#define CComboWnd__Draw_x                                          0x14053A490
#define CComboWnd__GetCurChoice_x                                  0x14053A760  // unused
#define CComboWnd__GetListRect_x                                   0x14053A800
#define CComboWnd__InsertChoice_x                                  0x14053AB20
#define CComboWnd__SetColors_x                                     0x14053AEB0
#define CComboWnd__SetChoice_x                                     0x14053AE70
#define CComboWnd__GetItemCount_x                                  0x14053A7F0
#define CComboWnd__GetCurChoiceText_x                              0x14053A7A0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053A730
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053ABE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140353DA0
#define CContainerWnd__SetContainer_x                              0x140354B50
#define CContainerWnd__vftable_x                                   0x14079DF18

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABACF4
#define CDisplay__ZoneMainUI_x                                     0x1405558D0
#define CDisplay__PreZoneMainUI_x                                  0x14015EDB0
#define CDisplay__CleanGameUI_x                                    0x140151290
#define CDisplay__GetClickedActor_x                                0x140155420
#define CDisplay__GetUserDefinedColor_x                            0x140155F00
#define CDisplay__InitCharSelectUI_x                               0x1401561B0
#define CDisplay__ReloadUI_x                                       0x140161110
#define CDisplay__WriteTextHD2_x                                   0x140168060
#define CDisplay__TrueDistance_x                                   0x140167D40
#define CDisplay__SetViewActor_x                                   0x140164650
#define CDisplay__GetFloorHeight_x                                 0x140155680
#define CDisplay__ToggleScreenshotMode_x                           0x140167840
#define CDisplay__RealRender_World_x                               0x1401604A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140560DF0
#define CEditWnd__DrawCaret_x                                      0x140541BF0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542080
#define CEditWnd__GetCaretPt_x                                     0x1405422F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542330
#define CEditWnd__GetDisplayString_x                               0x140542590
#define CEditWnd__GetHorzOffset_x                                  0x1405427D0
#define CEditWnd__GetLineForPrintableChar_x                        0x140542910
#define CEditWnd__GetSelStartPt_x                                  0x140542BF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542A40
#define CEditWnd__PointFromPrintableChar_x                         0x140543810
#define CEditWnd__ReplaceSelection_x                               0x140543BB0
#define CEditWnd__SelectableCharFromPoint_x                        0x140544050
#define CEditWnd__SetEditable_x                                    0x1405442D0
#define CEditWnd__SetWindowText_x                                  0x140544300

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223180
#define CEverQuest__ClickedPlayer_x                                0x140219510
#define CEverQuest__CreateTargetIndicator_x                        0x140219C70
#define CEverQuest__DoTellWindow_x                                 0x1400D7310 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7BD0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022B900
#define CEverQuest__dsp_chat_x                                     0x1400D6E30 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024DBF0
#define CEverQuest__Emote_x                                        0x140224FE0
#define CEverQuest__GetBodyTypeDesc_x                              0x140225D50
#define CEverQuest__GetClassDesc_x                                 0x140225DB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226180
#define CEverQuest__GetDeityDesc_x                                 0x140226530
#define CEverQuest__GetLangDesc_x                                  0x140226960
#define CEverQuest__GetRaceDesc_x                                  0x140226D00
#define CEverQuest__InterpretCmd_x                                 0x1402283F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023CD70
#define CEverQuest__LMouseUp_x                                     0x140229E30
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A710
#define CEverQuest__RMouseUp_x                                     0x140233EE0
#define CEverQuest__SetGameState_x                                 0x14023F020
#define CEverQuest__UPCNotificationFlush_x                         0x140244700 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229AB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140235210
#define CEverQuest__ReportSuccessfulHit_x                          0x140235F50

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366000

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094310
#define CGuild__GetGuildName_x                                     0x140094350

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382720

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E910
#define CHotButton__SetCheck_x                                     0x14025EBA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140391630
#define CInvSlotMgr__MoveItem_x                                    0x140391780
#define CInvSlotMgr__SelectSlot_x                                  0x140393140

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F2A0
#define CInvSlot__SliderComplete_x                                 0x1403904D0
#define CInvSlot__GetItemBase_x                                    0x14038B8D0
#define CInvSlot__UpdateItem_x                                     0x140390930

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403937A0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403942F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B3A20
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B62F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0930
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B1FB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B2E70

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140476B10
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404786E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AE960

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD0F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401175C0

// CLabel
#define CLabel__UpdateText_x                                       0x1403BD6B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140511440
#define CListWnd__dCListWnd_x                                      0x140511880
#define CListWnd__vftable_x                                        0x1407CCA10
#define CListWnd__AddColumn_x                                      0x140511F20
#define CListWnd__AddColumn1_x                                     0x140511FC0
#define CListWnd__AddLine_x                                        0x140512120
#define CListWnd__AddString_x                                      0x1405126A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140512D90
#define CListWnd__CalculateVSBRange_x                              0x140513070
#define CListWnd__ClearSel_x                                       0x140513210
#define CListWnd__ClearAllSel_x                                    0x1405131B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140513270
#define CListWnd__Compare_x                                        0x140513430
#define CListWnd__Draw_x                                           0x140513900
#define CListWnd__DrawColumnSeparators_x                           0x1405144A0
#define CListWnd__DrawHeader_x                                     0x140514560
#define CListWnd__DrawItem_x                                       0x140514C20
#define CListWnd__DrawLine_x                                       0x140515590
#define CListWnd__DrawSeparator_x                                  0x140515A50
#define CListWnd__EnableLine_x                                     0x140515E70
#define CListWnd__EnsureVisible_x                                  0x140515ED0
#define CListWnd__ExtendSel_x                                      0x140515FC0
#define CListWnd__GetColumnMinWidth_x                              0x1405162F0
#define CListWnd__GetColumnWidth_x                                 0x140516370
#define CListWnd__GetCurSel_x                                      0x140516470
#define CListWnd__GetItemData_x                                    0x1405167F0
#define CListWnd__GetItemHeight_x                                  0x140516830
#define CListWnd__GetItemRect_x                                    0x1405169F0
#define CListWnd__GetItemText_x                                    0x140516C90
#define CListWnd__GetSelList_x                                     0x140516EE0
#define CListWnd__GetSeparatorRect_x                               0x1405170D0
#define CListWnd__InsertLine_x                                     0x140518530
#define CListWnd__RemoveLine_x                                     0x140518B50
#define CListWnd__SetColors_x                                      0x140518F20
#define CListWnd__SetColumnJustification_x                         0x140518F40
#define CListWnd__SetColumnLabel_x                                 0x140518FC0
#define CListWnd__SetColumnWidth_x                                 0x140519160
#define CListWnd__SetCurSel_x                                      0x140519230
#define CListWnd__SetItemColor_x                                   0x1405194A0
#define CListWnd__SetItemData_x                                    0x140519540
#define CListWnd__SetItemText_x                                    0x140519780
#define CListWnd__Sort_x                                           0x140519B80
#define CListWnd__ToggleSel_x                                      0x140519CF0
#define CListWnd__SetColumnsSizable_x                              0x1405191B0
#define CListWnd__SetItemWnd_x                                     0x1405198B0
#define CListWnd__GetItemWnd_x                                     0x140516E70
#define CListWnd__SetItemIcon_x                                    0x140519580
#define CListWnd__CalculateCustomWindowPositions_x                 0x140512B60
#define CListWnd__SetVScrollPos_x                                  0x140519AE0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D0150

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407A9590
#define MapViewMap__Clear_x                                        0x1403D1CD0
#define MapViewMap__SetZoom_x                                      0x1403D8290
#define MapViewMap__HandleLButtonDown_x                            0x1403D4DD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9820  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF440
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140401460
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140403270
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402690
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140406930

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A8000
#define CPacketScrambler__hton_x                                   0x1405A7FF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537A80
#define CSidlManagerBase__FindAnimation1_x                         0x1405379C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405380B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140537E60
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140536DD0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140536D60
#define CSidlManagerBase__CreateXWnd_x                             0x1405363A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404692B0
#define CSidlManager__CreateXWnd_x                                 0x140469470

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052ED00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052EE30
#define CSidlScreenWnd__ConvertToRes_x                             0x14055B390 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052EF50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052E5A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E4F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052E7C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F520
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052F750
#define CSidlScreenWnd__GetChildItem_x                             0x14052F8F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FB10
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521530 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14052FE80
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405301F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530AA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140531350
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0A288
#define CSidlScreenWnd__StoreIniInfo_x                             0x140531970
#define CSidlScreenWnd__StoreIniVis_x                              0x140532160
#define CSidlScreenWnd__vftable_x                                  0x1407CDA70
#define CSidlScreenWnd__WndNotification_x                          0x1405321B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0DD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D11D0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D1110
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1570
#define CSkillMgr__IsCombatSkill_x                                 0x1402D15B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486070
#define CSliderWnd__SetValue_x                                     0x140540880
#define CSliderWnd__SetNumTicks_x                                  0x140540700

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404707C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140548DB0
#define CStmlWnd__CalculateHSBRange_x                              0x140520F10
#define CStmlWnd__CalculateVSBRange_x                              0x140549C50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054A710
#define CStmlWnd__ForceParseNow_x                                  0x14054A7B0
#define CStmlWnd__GetVisibleText_x                                 0x14054AE80
#define CStmlWnd__MakeStmlColorTag_x                               0x14054CBF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054CC30
#define CStmlWnd__SetSTMLText_x                                    0x140553C00
#define CStmlWnd__StripFirstSTMLLines_x                            0x140553DB0
#define CStmlWnd__UpdateHistoryString_x                            0x140554140

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405458A0
#define CTabWnd__DrawCurrentPage_x                                 0x140545940
#define CTabWnd__DrawTab_x                                         0x140545D10
#define CTabWnd__GetTabRect_x                                      0x140546370
#define CTabWnd__InsertPage_x                                      0x140546640
#define CTabWnd__RemovePage_x                                      0x1405468D0
#define CTabWnd__SetPage_x                                         0x140546A30
#define CTabWnd__UpdatePage_x                                      0x140546D30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405454A0
#define CPageWnd__SetTabText_x                                     0x140545510

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D850  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DC60


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051AE30
#define CTextureFont__DrawWrappedText1_x                           0x14051AD40
#define CTextureFont__DrawWrappedText2_x                           0x14051AF60
#define CTextureFont__GetTextExtent_x                              0x14051B310
#define CTextureFont__GetHeight_x                                  0x14051B2D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140559AF0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E0B0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A41090
#define CXStr__gCXStrAccess_x                                      0x140C09848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051C840
#define CXWnd__ClrFocus_x                                          0x14051CA80
#define CXWnd__Destroy_x                                           0x14051CBC0
#define CXWnd__DoAllDrawing_x                                      0x14051CCD0
#define CXWnd__DrawColoredRect_x                                   0x14051D480
#define CXWnd__DrawTooltip_x                                       0x14051EAC0
#define CXWnd__DrawTooltipAtPoint_x                                0x14051EB70
#define CXWnd__GetChildItem_x                                      0x14051F440
#define CXWnd__GetChildWndAt_x                                     0x14051F500
#define CXWnd__GetClientClipRect_x                                 0x14051F660
#define CXWnd__GetRelativeRect_x                                   0x140521040
#define CXWnd__GetScreenClipRect_x                                 0x140521140
#define CXWnd__GetScreenRect_x                                     0x1405212B0
#define CXWnd__GetTooltipRect_x                                    0x140521430
#define CXWnd__IsActive_x                                          0x1405219B0
#define CXWnd__IsDescendantOf_x                                    0x1405219E0
#define CXWnd__IsReallyVisible_x                                   0x140521A50
#define CXWnd__IsType_x                                            0x140521A90
#define CXWnd__Minimize_x                                          0x140521B90
#define CXWnd__ProcessTransition_x                                 0x140522BE0
#define CXWnd__Refade_x                                            0x140522CE0
#define CXWnd__Resize_x                                            0x140522D00
#define CXWnd__Right_x                                             0x140522DA0
#define CXWnd__SetFocus_x                                          0x140523130
#define CXWnd__SetFont_x                                           0x140523180
#define CXWnd__SetKeyTooltip_x                                     0x140523280
#define CXWnd__SetMouseOver_x                                      0x1405233C0
#define CXWnd__SetParent_x                                         0x140523440
#define CXWnd__StartFade_x                                         0x140523880
#define CXWnd__vftable_x                                           0x1407CD188
#define CXWnd__CXWnd_x                                             0x14051B430
#define CXWnd__dCXWnd_x                                            0x14051BD50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560570

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x1405250B0
#define CXWndManager__DrawWindows_x                                0x1405251E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405258A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405258E0
#define CXWndManager__RemoveWnd_x                                  0x140528D40

// CDBStr
#define CDBStr__GetString_x                                        0x14014F490

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B1800

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A40
#define CCharacterListWnd__EnterWorld_x                            0x1400A06F0
#define CCharacterListWnd__Quit_x                                  0x1400A1A20
#define CCharacterListWnd__UpdateList_x                            0x1400A2730

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405818E0
#define ItemBase__CreateItemTagString_x                            0x1405822D0
#define ItemBase__GetImageNum_x                                    0x1405844B0
#define ItemBase__GetItemValue_x                                   0x140586070
#define ItemBase__IsEmpty_x                                        0x140587BC0
#define ItemBase__IsKeyRingItem_x                                  0x1405882E0
#define ItemBase__ValueSellMerchant_x                              0x14058C6C0
#define ItemClient__CanDrop_x                                      0x140260D40
#define ItemClient__CanGoInBag_x                                   0x140260E70
#define ItemClient__CreateItemClient_x                             0x140261130
#define ItemClient__dItemClient_x                                  0x140260BA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E320
#define EQ_LoadingS__Array_x                                       0x140A2BA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140597D30
#define PcBase__GetCombatAbility_x                                 0x140598380
#define PcBase__GetCombatAbilityTimer_x                            0x140598420
#define PcBase__GetItemContainedRealEstateIds_x                    0x140598B30
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140599390
#define PcClient__AlertInventoryChanged_x                          0x140281860
#define PcClient__GetConLevel_x                                    0x140281D30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140284530
#define PcClient__HasLoreItem_x                                    0x1402855B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402914C0
#define PcZoneClient__RemoveMyAffect_x                             0x140293B70

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3FE0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D4050  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D4160  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D40C0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020B030  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149D80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F4CF0
#define PlayerBase__CanSee1_x                                      0x1405F4DC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F52F0
#define PlayerBase__HasProperty_x                                  0x1405F5510
#define PlayerBase__IsTargetable_x                                 0x1405F55D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F780
#define PlayerClient__GetPcClient_x                                0x1402A1D10
#define PlayerClient__PlayerClient_x                               0x140298970
#define PlayerClient__SetNameSpriteState_x                         0x1402A5140
#define PlayerClient__SetNameSpriteTint_x                          0x1402A60E0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4050
#define PlayerZoneClient__DoAttack_x                               0x1402B4D40
#define PlayerZoneClient__GetLevel_x                               0x1402B82B0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020DDF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D650

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402ADAD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402ADB00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402ADBB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402AD4C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F4970

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402660E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265CE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265D50
#define KeypressHandler__ClearCommandStateArray_x                  0x140266070  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140266200
#define KeypressHandler__HandleKeyUp_x                             0x1402662E0
#define KeypressHandler__SaveKeymapping_x                          0x140265F80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF0F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A96A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028AB90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028FB40
#define PcZoneClient__GetPcSkillLimit_x                            0x140291A20
#define PcZoneClient__RemovePetEffect_x                            0x140293C70
#define PcZoneClient__HasAlternateAbility_x                        0x140292490
#define PcZoneClient__CanEquipItem_x                               0x14028DF10
#define PcZoneClient__GetItemByID_x                                0x140290A80
#define PcZoneClient__RemoveBuffEffect_x                           0x140293A20
#define PcZoneClient__BandolierSwap_x                              0x14028D0D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291970

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402128B0

// IconCache
#define IconCache__GetIcon_x                                       0x14035BCF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140352B80
#define CContainerMgr__CloseContainer_x                            0x140352540
#define CContainerMgr__OpenExperimentContainer_x                   0x140352EE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404304E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259660

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C4320
#define CLootWnd__RequestLootSlot_x                                0x1403C5300

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401993F0
#define EQ_Spell__SpellAffects_x                                   0x14019A690
#define EQ_Spell__SpellAffectBase_x                                0x14019A5F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA8B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA860
#define EQ_Spell__IsSPAStacking_x                                  0x14019A2B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199E70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199750

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D40

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140489E30  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140489E70
#define CTargetWnd__RefreshTargetBuffs_x                           0x140489380
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488930

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140490F10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146730
#define CTaskManager__GetTaskStatus_x                              0x140146840
#define CTaskManager__GetElementDescription_x                      0x1401463C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197750
#define EqSoundManager__PlayScriptMp3_x                            0x140196550
#define EqSoundManager__SoundAssistPlay_x                          0x1402D75B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D78E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140544B00
#define CTextureAnimation__SetCurCell_x                            0x140544E10

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257940

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9030
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C90B0
#define CharacterBase__IsExpansionFlag_x                           0x1401B8800

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140333EC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140334800
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335C40

// messages
#define msg_spell_worn_off_x                                       0x1401CB770
#define msg_new_text_x                                             0x1401C75A0
#define __msgTokenTextParam_x                                      0x1401BF550
#define msgTokenText_x                                             0x1401BF470

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8EA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D8DC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140603780

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BDDF0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140357EB0
#define CCursorAttachment__AttachToCursor1_x                       0x140356B00
#define CCursorAttachment__Deactivate_x                            0x1403583B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140557D40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140557F30
#define CEQSuiteTextureLoader__GetTexture_x                        0x140557F40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113160
#define CFindItemWnd__Update_x                                     0x140113360
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E3D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BD60
#define LootFiltersManager__GetItemFilterData_x                    0x14011C880
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D120
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D3D0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140413B80

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140607BA0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0930

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034F150

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CCE90  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CCFA0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371270
#define CGroupWnd__UpdateDisplay_x                                 0x140371010

// ItemBase
#define ItemBase__IsLore_x                                         0x1405883B0
#define ItemBase__IsLoreEquipped_x                                 0x140588510

#define MultipleItemMoveManager__ProcessMove_x                     0x1402786D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020B190
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020B120
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020B160

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB340

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF4F0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF8A0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EECC0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EECC0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEB70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D770

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FABB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176BF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175EF0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176A10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140176990  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD5A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB340

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D4250

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140556EC0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE870

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
