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

#define __ClientDate                                               20220815u
#define __ExpectedVersionDate                                     "Aug 15 2022"
#define __ExpectedVersionTime                                     "15:51:53"
#define __ActualVersionDate_x                                      0x140794C08
#define __ActualVersionTime_x                                      0x140794BF8
#define __ActualVersionBuild_x                                     0x140782DA8

// Memory Protection
#define __MemChecker0_x                                            0x14026CDE0
#define __MemChecker1_x                                            0x140501EE0
#define __MemChecker4_x                                            0x14023D050
#define __EncryptPad0_x                                            0x140A3E0D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B794D0
#define instEQZoneInfo_x                                           0x140B796C4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D8F80
#define __gfMaxZoomCameraDistance_x                                0x14078AF40
#define __gfMaxCameraDistance_x                                    0x1407C58DC
#define __CurrentSocial_x                                          0x1408F8900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A33F70
#define g_eqCommandStates_x                                        0x140A34FD0
#define __CommandList_x                                            0x140A35210
#define __ScreenMode_x                                             0x140AC0FFC
#define __gWorld_x                                                 0x140B73A60
#define __gpbCommandEvent_x                                        0x140B73F10
#define __ServerHost_x                                             0x140B740F8
#define __Guilds_x                                                 0x140B78080
#define __MouseEventTime_x                                         0x140BE4988
#define DI8__Mouse_Check_x                                         0x140BE95E0
#define __heqmain_x                                                0x140BEBA88
#define DI8__Mouse_x                                               0x140BEBAA0
#define __HWnd_x                                                   0x140BEBAA8
#define __Mouse_x                                                  0x140BE8AD8
#define DI8__Main_x                                                0x140BE8B70
#define DI8__Keyboard_x                                            0x140BE8B78
#define __LoginName_x                                              0x140BE925C
#define __CurrentMapLabel_x                                        0x140BFE7F0
#define __LabelCache_x                                             0x140BFF400
#define __SubscriptionType_x                                       0x140C369F0
#define Teleport_Table_Size_x                                      0x140B73F18
#define Teleport_Table_x                                           0x140B71A60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B74410
#define pinstActiveBanker_x                                        0x140B71968
#define pinstActiveCorpse_x                                        0x140B71958
#define pinstActiveGMaster_x                                       0x140B71960
#define pinstActiveMerchant_x                                      0x140B71950
#define pinstAltAdvManager_x                                       0x140AC1C68
#define pinstCEverQuest_x                                          0x140BE8AD0
#define pinstCamActor_x                                            0x140AC0FE8
#define pinstCDBStr_x                                              0x140AC0A70
#define pinstCDisplay_x                                            0x140B71A58
#define pinstControlledPlayer_x                                    0x140B719F8
#define pinstCResolutionHandler_x                                  0x14126F590
#define pinstCSidlManager_x                                        0x140C10470
#define pinstCXWndManager_x                                        0x140C10460
#define instDynamicZone_x                                          0x140B77F40 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B77F8E
#define instExpeditionName_x                                       0x140B77FCE
#define pinstDZMember_x                                            0x140B78058
#define pinstDZTimerInfo_x                                         0x140B78060
#define pinstEqLogin_x                                             0x140BE8BA0
#define instTribute_x                                              0x140A2F800
#define pinstEQSoundManager_x                                      0x140AC1FA8
#define pinstEQSpellStrings_x                                      0x140AA56A0
#define pinstSGraphicsEngine_x                                     0x14126F328
#define pinstLocalPC_x                                             0x140B71A48
#define pinstLocalPlayer_x                                         0x140B71948
#define pinstCMercenaryClientManager_x                             0x140BE6218
#define pinstModelPlayer_x                                         0x140B71978
#define pinstRenderInterface_x                                     0x14126F340
#define pinstSkillMgr_x                                            0x140BE7EB0
#define pinstSpawnManager_x                                        0x140BE65E0
#define pinstSpellManager_x                                        0x140BE7FF8
#define pinstStringTable_x                                         0x140B71A50
#define pinstSwitchManager_x                                       0x140B718C0
#define pinstTarget_x                                              0x140B719F0
#define pinstTaskMember_x                                          0x140A2F7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B71A00
#define pinstTradeTarget_x                                         0x140B71970
#define instTributeActive_x                                        0x140A2F829
#define pinstViewActor_x                                           0x140AC0FE0
#define pinstWorldData_x                                           0x140B71A28
#define pinstPlayerPath_x                                          0x140BE6608
#define pinstTargetIndicator_x                                     0x140BE80A8
#define EQObject_Top_x                                             0x140B71A20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFB958
#define pinstCContainerMgr_x                                       0x140AC0AD8
#define pinstCContextMenuManager_x                                 0x140C10410
#define pinstCInvSlotMgr_x                                         0x140AC0AC0
#define pinstCItemDisplayManager_x                                 0x140BFE3C0
#define pinstCPopupWndManager_x                                    0x140BFEC50
#define pinstCSpellDisplayMgr_x                                    0x140BFF2E0
#define pinstCTaskManager_x                                        0x1408F8C40
#define pinstEQSuiteTextureLoader_x                                0x140A47730
#define pinstItemIconCache_x                                       0x140BFBCB8
#define pinstLootFiltersManager_x                                  0x140AC0488

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F74C0
#define __CastRay2_x                                               0x1401F71D0
#define __ConvertItemTags_x                                        0x1401F78C0
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x1401534A0
#define __DoesFileExist_x                                          0x1405066C0
#define __EQGetTime_x                                              0x140502490
#define __ExecuteCmd_x                                             0x1401D0EC0
#define __FixHeading_x                                             0x140605680
#define __FlushDxKeyboard_x                                        0x1402E8570
#define __get_bearing_x                                            0x1402007E0
#define __get_melee_range_x                                        0x1402008D0
#define __GetAnimationCache_x                                      0x14035D020
#define __GetGaugeValueFromEQ_x                                    0x14047BCA0
#define __GetLabelFromEQ_x                                         0x14047D250
#define __GetXTargetType_x                                         0x140606AF0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140605700
#define __HelpPath_x                                               0x140BE4850   // Why?
#define __NewUIINI_x                                               0x140487DF0   // Why?
#define __ProcessGameEvents_x                                      0x140232890
#define __ProcessKeyboardEvents_x                                  0x1402E9D70
#define __ProcessMouseEvents_x                                     0x140233CC0
#define __SaveColors_x                                             0x140163150
#define __STMLToText_x                                             0x140530130
#define __WndProc_x                                                0x1402E6CF0
#define CMemoryMappedFile__SetFile_x                               0x140741320
#define DrawNetStatus_x                                            0x14027A960
#define Util__FastTime_x                                           0x140503190
#define __eq_delete_x                                              0x14060B930
#define __eq_new_x                                                 0x14060BA2C
#define __CopyLayout_x                                             0x140269290
#define __ThrottleFrameRate_x                                      0x140222717
#define __ThrottleFrameRateEnd_x                                   0x140222777

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F8C60
#define CAAWnd__Update_x                                           0x1402F8F60
#define CAAWnd__UpdateSelected_x                                   0x1402F9F20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B580
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407723F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DE70
#define AltAdvManager__IsAbilityReady_x                            0x14016E0F0
#define AltAdvManager__GetAAById_x                                 0x14016D740
#define AltAdvManager__CanTrainAbility_x                           0x14016D570
#define AltAdvManager__CanSeeAbility_x                             0x14016D230

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3BF0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A49A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4BB0
#define CharacterZoneClient__CanUseItem_x                          0x1400B89C0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A54A0
#define CharacterZoneClient__CastSpell_x                           0x1400A5540
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4B30
#define CharacterZoneClient__Cur_HP_x                              0x1400B9FF0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA1B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8760
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFC50
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE6B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9C50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7F40
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1770
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C06A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9E20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0DA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9CA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1980
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9EA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2410
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA0B0
#define CharacterZoneClient__GetModCap_x                           0x1400C9DC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA150
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA360
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F170
#define CharacterZoneClient__HasSkill_x                            0x1400C55F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE680
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9850
#define CharacterZoneClient__Max_Endurance_x                       0x140293210  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B90
#define CharacterZoneClient__Max_Mana_x                            0x140293400  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA050
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B60
#define CharacterZoneClient__SpellDuration_x                       0x1400B2740
#define CharacterZoneClient__TotalEffect_x                         0x1400B3970
#define CharacterZoneClient__UseSkill_x                            0x1400CF610


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403160D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140320200

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031C1A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031B240

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140322880

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D1FC0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140342FF0
#define CChatWindowManager__InitContextMenu_x                      0x140343180
#define CChatWindowManager__FreeChatWindow_x                       0x140342240
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140349F00
#define CChatWindowManager__CreateChatWindow_x                     0x140341B80

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D73E0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034AE70
#define CChatWindow__Clear_x                                       0x14034BC80
#define CChatWindow__WndNotification_x                             0x14034CE00
#define CChatWindow__AddHistory_x                                  0x14034B780

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140541070
#define CContextMenu__RemoveMenuItem_x                             0x140541580
#define CContextMenu__RemoveAllMenuItems_x                         0x140541550
#define CContextMenu__CheckMenuItem_x                              0x1405413C0
#define CContextMenu__SetMenuItem_x                                0x1405415A0
#define CContextMenu__AddSeparator_x                               0x1405411D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140541BF0
#define CContextMenuManager__RemoveMenu_x                          0x140542150
#define CContextMenuManager__PopupMenu_x                           0x140541EE0
#define CContextMenuManager__Flush_x                               0x140541C70
#define CContextMenuManager__CreateDefaultMenu_x                   0x140357090

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CE610
#define CChatService__GetFriendName_x                              0x1405CE620

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053D210
#define CComboWnd__Draw_x                                          0x14053D310
#define CComboWnd__GetCurChoice_x                                  0x14053D5F0  // unused
#define CComboWnd__GetListRect_x                                   0x14053D690
#define CComboWnd__InsertChoice_x                                  0x14053D9D0
#define CComboWnd__SetColors_x                                     0x14053DD60
#define CComboWnd__SetChoice_x                                     0x14053DD20
#define CComboWnd__GetItemCount_x                                  0x14053D680
#define CComboWnd__GetCurChoiceText_x                              0x14053D630  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053D5C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053DA90

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140355110
#define CContainerWnd__SetContainer_x                              0x140355EC0
#define CContainerWnd__vftable_x                                   0x1407A2928

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC0D64
#define CDisplay__ZoneMainUI_x                                     0x140558990
#define CDisplay__PreZoneMainUI_x                                  0x1401600A0
#define CDisplay__CleanGameUI_x                                    0x1401525A0
#define CDisplay__GetClickedActor_x                                0x140156730
#define CDisplay__GetUserDefinedColor_x                            0x140157210
#define CDisplay__InitCharSelectUI_x                               0x1401574C0
#define CDisplay__ReloadUI_x                                       0x140162400
#define CDisplay__WriteTextHD2_x                                   0x140169350
#define CDisplay__TrueDistance_x                                   0x140169030
#define CDisplay__SetViewActor_x                                   0x140165940
#define CDisplay__GetFloorHeight_x                                 0x140156990
#define CDisplay__ToggleScreenshotMode_x                           0x140168B30
#define CDisplay__RealRender_World_x                               0x140161790

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140563EA0
#define CEditWnd__DrawCaret_x                                      0x140544A90  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140544F50
#define CEditWnd__GetCaretPt_x                                     0x1405451D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140545210
#define CEditWnd__GetDisplayString_x                               0x140545480
#define CEditWnd__GetHorzOffset_x                                  0x1405456C0
#define CEditWnd__GetLineForPrintableChar_x                        0x140545810
#define CEditWnd__GetSelStartPt_x                                  0x140545AF0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140545940
#define CEditWnd__PointFromPrintableChar_x                         0x1405466A0
#define CEditWnd__ReplaceSelection_x                               0x140546A50
#define CEditWnd__SelectableCharFromPoint_x                        0x140546EF0
#define CEditWnd__SetEditable_x                                    0x140547180
#define CEditWnd__SetWindowText_x                                  0x1405471B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223AC0
#define CEverQuest__ClickedPlayer_x                                0x140219E40
#define CEverQuest__CreateTargetIndicator_x                        0x14021A5A0
#define CEverQuest__DoTellWindow_x                                 0x1400D70F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D79B0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224FC0
#define CEverQuest__dsp_chat_x                                     0x1400D6C10 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024E520
#define CEverQuest__Emote_x                                        0x140225920
#define CEverQuest__GetBodyTypeDesc_x                              0x140226690
#define CEverQuest__GetClassDesc_x                                 0x1402266F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226AC0
#define CEverQuest__GetDeityDesc_x                                 0x140226E70
#define CEverQuest__GetLangDesc_x                                  0x1402272A0
#define CEverQuest__GetRaceDesc_x                                  0x140227640
#define CEverQuest__InterpretCmd_x                                 0x140228D30
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023D6D0
#define CEverQuest__LMouseUp_x                                     0x14022A770
#define CEverQuest__RightClickedOnPlayer_x                         0x14023B070
#define CEverQuest__RMouseUp_x                                     0x140234840
#define CEverQuest__SetGameState_x                                 0x14023F980
#define CEverQuest__UPCNotificationFlush_x                         0x140245030 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022A3F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140235B70
#define CEverQuest__ReportSuccessfulHit_x                          0x1402368B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140367370

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094330
#define CGuild__GetGuildName_x                                     0x140094370

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140383C50

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025F0D0
#define CHotButton__SetCheck_x                                     0x14025F360

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140393090
#define CInvSlotMgr__MoveItem_x                                    0x1403931E0
#define CInvSlotMgr__SelectSlot_x                                  0x140394BB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140390D00
#define CInvSlot__SliderComplete_x                                 0x140391F30
#define CInvSlot__GetItemBase_x                                    0x14038CDE0
#define CInvSlot__UpdateItem_x                                     0x140392390

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140395210
#define CInvSlotWnd__HandleLButtonUp_x                             0x140395D60

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B5740
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B8050
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B2610
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B3CB0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B4B90

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140478980
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047A550

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B1910

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AEDC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117400

// CLabel
#define CLabel__UpdateText_x                                       0x1403BF3F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140514310
#define CListWnd__dCListWnd_x                                      0x140514750
#define CListWnd__vftable_x                                        0x1407D13C0
#define CListWnd__AddColumn_x                                      0x140514DF0
#define CListWnd__AddColumn1_x                                     0x140514E90
#define CListWnd__AddLine_x                                        0x140514FF0
#define CListWnd__AddString_x                                      0x140515570
#define CListWnd__CalculateFirstVisibleLine_x                      0x140515C60
#define CListWnd__CalculateVSBRange_x                              0x140515F40
#define CListWnd__ClearSel_x                                       0x1405160F0
#define CListWnd__ClearAllSel_x                                    0x140516090
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140516150
#define CListWnd__Compare_x                                        0x140516310
#define CListWnd__Draw_x                                           0x1405167E0
#define CListWnd__DrawColumnSeparators_x                           0x140517380
#define CListWnd__DrawHeader_x                                     0x140517440
#define CListWnd__DrawItem_x                                       0x140517B00
#define CListWnd__DrawLine_x                                       0x140518480
#define CListWnd__DrawSeparator_x                                  0x140518940
#define CListWnd__EnableLine_x                                     0x140518D60
#define CListWnd__EnsureVisible_x                                  0x140518DC0
#define CListWnd__ExtendSel_x                                      0x140518EC0
#define CListWnd__GetColumnMinWidth_x                              0x1405191F0
#define CListWnd__GetColumnWidth_x                                 0x140519270
#define CListWnd__GetCurSel_x                                      0x140519370
#define CListWnd__GetItemData_x                                    0x1405196F0
#define CListWnd__GetItemHeight_x                                  0x140519730
#define CListWnd__GetItemRect_x                                    0x1405198F0
#define CListWnd__GetItemText_x                                    0x140519B90
#define CListWnd__GetSelList_x                                     0x140519DE0
#define CListWnd__GetSeparatorRect_x                               0x140519FD0
#define CListWnd__InsertLine_x                                     0x14051B450
#define CListWnd__RemoveLine_x                                     0x14051BA70
#define CListWnd__SetColors_x                                      0x14051BE40
#define CListWnd__SetColumnJustification_x                         0x14051BE60
#define CListWnd__SetColumnLabel_x                                 0x14051BEE0
#define CListWnd__SetColumnWidth_x                                 0x14051C080
#define CListWnd__SetCurSel_x                                      0x14051C150
#define CListWnd__SetItemColor_x                                   0x14051C3C0
#define CListWnd__SetItemData_x                                    0x14051C460
#define CListWnd__SetItemText_x                                    0x14051C6A0
#define CListWnd__Sort_x                                           0x14051CAB0
#define CListWnd__ToggleSel_x                                      0x14051CC20
#define CListWnd__SetColumnsSizable_x                              0x14051C0D0
#define CListWnd__SetItemWnd_x                                     0x14051C7D0
#define CListWnd__GetItemWnd_x                                     0x140519D70
#define CListWnd__SetItemIcon_x                                    0x14051C4A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140515A30
#define CListWnd__SetVScrollPos_x                                  0x14051CA10

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D1E70

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407ADFA0
#define MapViewMap__Clear_x                                        0x1403D39E0
#define MapViewMap__SetZoom_x                                      0x1403D9FA0
#define MapViewMap__HandleLButtonDown_x                            0x1403D6AE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FB550  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404011E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404031F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140405000
#define CMerchantWnd__SelectBuySellSlot_x                          0x140404420
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404086B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405AB2B0
#define CPacketScrambler__hton_x                                   0x1405AB2A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14053A8F0
#define CSidlManagerBase__FindAnimation1_x                         0x14053A830
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14053AF20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14053ACD0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140539C30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140539BC0
#define CSidlManagerBase__CreateXWnd_x                             0x140539220

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046B150
#define CSidlManager__CreateXWnd_x                                 0x14046B310

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140531BA0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140531CB0
#define CSidlScreenWnd__ConvertToRes_x                             0x14055E450 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140531DE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140531440
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140531390
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140531660
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405323B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405325E0
#define CSidlScreenWnd__GetChildItem_x                             0x140532780
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405329A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140524520 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140532D10
#define CSidlScreenWnd__LoadIniInfo_x                              0x140533080
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140533920
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405341D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C102B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405347F0
#define CSidlScreenWnd__StoreIniVis_x                              0x140534FE0
#define CSidlScreenWnd__vftable_x                                  0x1407D2420
#define CSidlScreenWnd__WndNotification_x                          0x140535030

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D14A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D18A0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D17E0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1C40
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1C80

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140487E60
#define CSliderWnd__SetValue_x                                     0x140543710
#define CSliderWnd__SetNumTicks_x                                  0x140543590

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140472630

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14054BE20
#define CStmlWnd__CalculateHSBRange_x                              0x140523EE0
#define CStmlWnd__CalculateVSBRange_x                              0x14054CCC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054D7B0
#define CStmlWnd__ForceParseNow_x                                  0x14054D850
#define CStmlWnd__GetVisibleText_x                                 0x14054DF30
#define CStmlWnd__MakeStmlColorTag_x                               0x14054FCC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054FD00
#define CStmlWnd__SetSTMLText_x                                    0x140556CE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140556E90
#define CStmlWnd__UpdateHistoryString_x                            0x140557220

// CTabWnd
#define CTabWnd__Draw_x                                            0x140548920
#define CTabWnd__DrawCurrentPage_x                                 0x1405489C0
#define CTabWnd__DrawTab_x                                         0x140548D90
#define CTabWnd__GetTabRect_x                                      0x1405493F0
#define CTabWnd__InsertPage_x                                      0x1405496C0
#define CTabWnd__RemovePage_x                                      0x140549940
#define CTabWnd__SetPage_x                                         0x140549AA0
#define CTabWnd__UpdatePage_x                                      0x140549DA0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140548340
#define CPageWnd__SetTabText_x                                     0x1405483B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D880  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DC90


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051DD70
#define CTextureFont__DrawWrappedText1_x                           0x14051DC80
#define CTextureFont__DrawWrappedText2_x                           0x14051DEA0
#define CTextureFont__GetTextExtent_x                              0x14051E250
#define CTextureFont__GetHeight_x                                  0x14051E210

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055CBB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140510F80

// CXStr
#define CXStr__gFreeLists_x                                        0x140A470B0
#define CXStr__gCXStrAccess_x                                      0x140C0F878

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051F7A0
#define CXWnd__ClrFocus_x                                          0x14051F9E0
#define CXWnd__Destroy_x                                           0x14051FB20
#define CXWnd__DoAllDrawing_x                                      0x14051FC30
#define CXWnd__DrawColoredRect_x                                   0x1405203E0
#define CXWnd__DrawTooltip_x                                       0x140521A50
#define CXWnd__DrawTooltipAtPoint_x                                0x140521B00
#define CXWnd__GetChildItem_x                                      0x1405223F0
#define CXWnd__GetChildWndAt_x                                     0x1405224B0
#define CXWnd__GetClientClipRect_x                                 0x140522610
#define CXWnd__GetRelativeRect_x                                   0x140524020
#define CXWnd__GetScreenClipRect_x                                 0x140524120
#define CXWnd__GetScreenRect_x                                     0x1405242A0
#define CXWnd__GetTooltipRect_x                                    0x140524420
#define CXWnd__IsActive_x                                          0x140524990
#define CXWnd__IsDescendantOf_x                                    0x1405249C0
#define CXWnd__IsReallyVisible_x                                   0x140524A30
#define CXWnd__IsType_x                                            0x140524A70
#define CXWnd__Minimize_x                                          0x140524B70
#define CXWnd__ProcessTransition_x                                 0x140525B70
#define CXWnd__Refade_x                                            0x140525C70
#define CXWnd__Resize_x                                            0x140525C90
#define CXWnd__Right_x                                             0x140525D30
#define CXWnd__SetFocus_x                                          0x1405260C0
#define CXWnd__SetFont_x                                           0x140526110
#define CXWnd__SetKeyTooltip_x                                     0x140526220
#define CXWnd__SetMouseOver_x                                      0x140526350
#define CXWnd__SetParent_x                                         0x1405263D0
#define CXWnd__StartFade_x                                         0x140526820
#define CXWnd__vftable_x                                           0x1407D1B38
#define CXWnd__CXWnd_x                                             0x14051E370
#define CXWnd__dCXWnd_x                                            0x14051EC90

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140563620

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140528060
#define CXWndManager__DrawWindows_x                                0x140528190
#define CXWndManager__GetKeyboardFlags_x                           0x140528850
#define CXWndManager__HandleKeyboardMsg_x                          0x140528890
#define CXWndManager__RemoveWnd_x                                  0x14052BB90

// CDBStr
#define CDBStr__GetString_x                                        0x1401507A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B4600

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A70
#define CCharacterListWnd__EnterWorld_x                            0x1400A0720
#define CCharacterListWnd__Quit_x                                  0x1400A1A50
#define CCharacterListWnd__UpdateList_x                            0x1400A2760

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140584950
#define ItemBase__CreateItemTagString_x                            0x140585340
#define ItemBase__GetImageNum_x                                    0x1405874E0
#define ItemBase__GetItemValue_x                                   0x1405890C0
#define ItemBase__IsEmpty_x                                        0x14058AC20
#define ItemBase__IsKeyRingItem_x                                  0x14058B330
#define ItemBase__ValueSellMerchant_x                              0x14058F710
#define ItemClient__CanDrop_x                                      0x140261480
#define ItemClient__CanGoInBag_x                                   0x1402615B0
#define ItemClient__CreateItemClient_x                             0x140261870
#define ItemClient__dItemClient_x                                  0x1402612E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F610
#define EQ_LoadingS__Array_x                                       0x140A31A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14059AFA0
#define PcBase__GetCombatAbility_x                                 0x14059B5F0
#define PcBase__GetCombatAbilityTimer_x                            0x14059B690
#define PcBase__GetItemContainedRealEstateIds_x                    0x14059BDA0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14059C600
#define PcClient__AlertInventoryChanged_x                          0x140281F30
#define PcClient__GetConLevel_x                                    0x140282400  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140284C10
#define PcClient__HasLoreItem_x                                    0x140285C80
#define PcZoneClient__GetItemRecastTimer_x                         0x140291BC0
#define PcZoneClient__RemoveMyAffect_x                             0x140294260

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D5540  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D55B0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D56C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D5620  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020B950  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B050

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F83C0
#define PlayerBase__CanSee1_x                                      0x1405F8490
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F89C0
#define PlayerBase__HasProperty_x                                  0x1405F8BE0
#define PlayerBase__IsTargetable_x                                 0x1405F8CA0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029FE70
#define PlayerClient__GetPcClient_x                                0x1402A2400
#define PlayerClient__PlayerClient_x                               0x140299060
#define PlayerClient__SetNameSpriteState_x                         0x1402A5830
#define PlayerClient__SetNameSpriteTint_x                          0x1402A67D0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4720
#define PlayerZoneClient__DoAttack_x                               0x1402B5410
#define PlayerZoneClient__GetLevel_x                               0x1402B8980
#define PlayerZoneClient__IsValidTeleport_x                        0x14020E700
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E940

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AE1A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AE1D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AE280
#define PlayerManagerClient__CreatePlayer_x                        0x1402ADB90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F8040

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402667D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402663D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140266440
#define KeypressHandler__ClearCommandStateArray_x                  0x140266760  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402668F0
#define KeypressHandler__HandleKeyUp_x                             0x1402669D0
#define KeypressHandler__SaveKeymapping_x                          0x140266670  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B1EF0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405AC950

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028B290  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140290240
#define PcZoneClient__GetPcSkillLimit_x                            0x140292110
#define PcZoneClient__RemovePetEffect_x                            0x140294360
#define PcZoneClient__HasAlternateAbility_x                        0x140292B80
#define PcZoneClient__CanEquipItem_x                               0x14028E610
#define PcZoneClient__GetItemByID_x                                0x140291170
#define PcZoneClient__RemoveBuffEffect_x                           0x140294110
#define PcZoneClient__BandolierSwap_x                              0x14028D7D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140292060

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402131C0

// IconCache
#define IconCache__GetIcon_x                                       0x14035D050

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140353EF0
#define CContainerMgr__CloseContainer_x                            0x1403538B0
#define CContainerMgr__OpenExperimentContainer_x                   0x140354250

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140432420

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259E20

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C6050
#define CLootWnd__RequestLootSlot_x                                0x1403C7030

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A730
#define EQ_Spell__SpellAffects_x                                   0x14019B9D0
#define EQ_Spell__SpellAffectBase_x                                0x14019B930
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA540
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4F0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B5F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B1B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019AA90

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D60

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048BBB0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048BBF0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048B100
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048A6B0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140492C90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401479F0
#define CTaskManager__GetTaskStatus_x                              0x140147B00
#define CTaskManager__GetElementDescription_x                      0x140147680

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198A90
#define EqSoundManager__PlayScriptMp3_x                            0x140197890
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7CA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7FD0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405479B0
#define CTextureAnimation__SetCurCell_x                            0x140547CC0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402580E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405CC130
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405CC1B0
#define CharacterBase__IsExpansionFlag_x                           0x1401B9570

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140335250
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140335B90
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140336FC0

// messages
#define msg_spell_worn_off_x                                       0x1401CC5E0
#define msg_new_text_x                                             0x1401C8410
#define __msgTokenTextParam_x                                      0x1401C0260
#define msgTokenText_x                                             0x1401C0180

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9660
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D9580

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140606ED0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BFB30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140359210
#define CCursorAttachment__AttachToCursor1_x                       0x140357E60
#define CCursorAttachment__Deactivate_x                            0x140359710

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14055AE00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14055AFF0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14055B000

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112FB0
#define CFindItemWnd__Update_x                                     0x1401131B0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E200

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BB90
#define LootFiltersManager__GetItemFilterData_x                    0x14011C6A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CF40
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D1F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140415920

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14060B2A0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D1000

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403504C0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CFF90  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D00A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403727A0
#define CGroupWnd__UpdateDisplay_x                                 0x140372540

// ItemBase
#define ItemBase__IsLore_x                                         0x14058B400
#define ItemBase__IsLoreEquipped_x                                 0x14058B560

#define MultipleItemMoveManager__ProcessMove_x                     0x140278DB0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020BAB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020BA40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020BA80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB9F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF2C0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF670
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEA90
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEA90
#define FactionManagerClient__GetMinFaction_x                      0x1400EE940

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8F0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA980

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177E80
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177200
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177CA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177C20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DDD60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB9F0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D57B0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140559F80

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EEFB0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
