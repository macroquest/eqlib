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

#define __ClientDate                                               20231009u
#define __ExpectedVersionDate                                     "Oct  9 2023"
#define __ExpectedVersionTime                                     "17:59:51"
#define __ActualVersionDate_x                                      0x14081E0F8
#define __ActualVersionTime_x                                      0x14081E0E8
#define __ActualVersionBuild_x                                     0x140812B80

// Memory Protection
#define __MemChecker0_x                                            0x1402A6A30
#define __MemChecker1_x                                            0x14055AD60
#define __MemChecker4_x                                            0x140275A40
#define __EncryptPad0_x                                            0x140AD08E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C093B0
#define instEQZoneInfo_x                                           0x140C095A4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020E360
#define __gfMaxZoomCameraDistance_x                                0x140813D30
#define __gfMaxCameraDistance_x                                    0x1408531C0
#define __CurrentSocial_x                                          0x14098C940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC81D0
#define g_eqCommandStates_x                                        0x140AC9240
#define __CommandList_x                                            0x140AC9470
#define __ScreenMode_x                                             0x140B50D08
#define __gWorld_x                                                 0x140C041E0
#define __gpbCommandEvent_x                                        0x140C03CDC
#define __ServerHost_x                                             0x140C03EC8
#define __Guilds_x                                                 0x140C07F60
#define __MouseEventTime_x                                         0x140C7E8E8
#define DI8__Mouse_Check_x                                         0x140C82AA0
#define __heqmain_x                                                0x140C84F38
#define DI8__Mouse_x                                               0x140C84F88
#define __HWnd_x                                                   0x140C859B8
#define __Mouse_x                                                  0x140C84F50
#define DI8__Main_x                                                0x140C84F68
#define DI8__Keyboard_x                                            0x140C84F70
#define __LoginName_x                                              0x140C8564C
#define __CurrentMapLabel_x                                        0x140C98B90
#define __LabelCache_x                                             0x140C99760
#define Teleport_Table_Size_x                                      0x140C03D64
#define Teleport_Table_x                                           0x140C01820

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C042F0
#define pinstActiveBanker_x                                        0x140C04208
#define pinstActiveCorpse_x                                        0x140C041F8
#define pinstActiveGMaster_x                                       0x140C04200
#define pinstActiveMerchant_x                                      0x140C041F0
#define pinstAltAdvManager_x                                       0x140B51B08
#define pinstCEverQuest_x                                          0x140C829F0
#define pinstCamActor_x                                            0x140B50CE8
#define pinstCDBStr_x                                              0x140B50900
#define pinstCDisplay_x                                            0x140C03820
#define pinstControlledPlayer_x                                    0x140C04298
#define pinstCResolutionHandler_x                                  0x1413071F8
#define pinstCSidlManager_x                                        0x140CAAA60
#define pinstCXWndManager_x                                        0x140CAAA58
#define instDynamicZone_x                                          0x140C07E20 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C07E6E
#define instExpeditionName_x                                       0x140C07EAE
#define pinstDZMember_x                                            0x140C07F38
#define pinstDZTimerInfo_x                                         0x140C07F40
#define pinstEqLogin_x                                             0x140C84F90
#define instTribute_x                                              0x140AC3840
#define pinstEQSoundManager_x                                      0x140B51E88
#define pinstEQSpellStrings_x                                      0x140B35510
#define pinstSGraphicsEngine_x                                     0x141306F78
#define pinstLocalPC_x                                             0x140C042D8
#define pinstLocalPlayer_x                                         0x140C041E8
#define pinstCMercenaryClientManager_x                             0x140C80188
#define pinstModelPlayer_x                                         0x140C04218
#define pinstRenderInterface_x                                     0x141306F90
#define pinstSkillMgr_x                                            0x140C81E30
#define pinstSpawnManager_x                                        0x140C80550
#define pinstSpellManager_x                                        0x140C81E98
#define pinstStringTable_x                                         0x140C042E0
#define pinstSwitchManager_x                                       0x140C017A0
#define pinstTarget_x                                              0x140C04290
#define pinstTaskMember_x                                          0x140AC3830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C042A0
#define pinstTradeTarget_x                                         0x140C04210
#define instTributeActive_x                                        0x140AC3869
#define pinstViewActor_x                                           0x140B50CE0
#define pinstWorldData_x                                           0x140C042D0
#define pinstPlayerPath_x                                          0x140C80578
#define pinstTargetIndicator_x                                     0x140C81F48
#define EQObject_Top_x                                             0x140C042B8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C95CE8
#define pinstCContainerMgr_x                                       0x140B509A0
#define pinstCContextMenuManager_x                                 0x140CAA740
#define pinstCInvSlotMgr_x                                         0x140B50990
#define pinstCItemDisplayManager_x                                 0x140C98760
#define pinstCPopupWndManager_x                                    0x140C98FF0
#define pinstCSpellDisplayMgr_x                                    0x140C99640
#define pinstCTaskManager_x                                        0x14098CC80
#define pinstEQSuiteTextureLoader_x                                0x140AD9F60
#define pinstItemIconCache_x                                       0x140C96048
#define pinstLootFiltersManager_x                                  0x140B50348
#define pinstGFViewListener_x                                      0x140CA9F18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140236540
#define __CastRay_x                                                0x14022EDC0
#define __CastRay2_x                                               0x14022EAC0
#define __ConvertItemTags_x                                        0x14022F220
#define __CleanItemTags_x                                          0x140087840
#define __CreateCascadeMenuItems_x                                 0x140180960
#define __DoesFileExist_x                                          0x14055EC10
#define __EQGetTime_x                                              0x14055B310
#define __ExecuteCmd_x                                             0x140205D30
#define __FixHeading_x                                             0x140685B30
#define __FlushDxKeyboard_x                                        0x140325800
#define __get_bearing_x                                            0x140238730
#define __get_melee_range_x                                        0x140238830
#define __GetAnimationCache_x                                      0x1403A0530
#define __GetGaugeValueFromEQ_x                                    0x1404D1600
#define __GetLabelFromEQ_x                                         0x1404D2BF0
#define __GetXTargetType_x                                         0x140686E10   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140685BB0
#define __HelpPath_x                                               0x140C7E7B0   // Why?
#define __NewUIINI_x                                               0x1404DE0E0   // Why?
#define __ProcessGameEvents_x                                      0x14026AE70
#define __ProcessKeyboardEvents_x                                  0x140327060
#define __ProcessMouseEvents_x                                     0x14026C360
#define __SaveColors_x                                             0x140190A60
#define __STMLToText_x                                             0x140563550
#define __WndProc_x                                                0x140323F60
#define CMemoryMappedFile__SetFile_x                               0x1407BCB30
#define DrawNetStatus_x                                            0x1402B4E50
#define Util__FastTime_x                                           0x14055A8A0
#define __eq_delete_x                                              0x14068BDD4
#define __eq_new_x                                                 0x14068BD90
#define __CopyLayout_x                                             0x1402A2E80
#define __ThrottleFrameRate_x                                      0x14025A715
#define __ThrottleFrameRateEnd_x                                   0x14025A775

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403366B0
#define CAAWnd__Update_x                                           0x1403369B0
#define CAAWnd__UpdateSelected_x                                   0x1403379B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9A80
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2380
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F9918
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA370

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BAB0
#define AltAdvManager__IsAbilityReady_x                            0x14019BD30
#define AltAdvManager__GetAAById_x                                 0x14019B380
#define AltAdvManager__CanTrainAbility_x                           0x14019B1B0
#define AltAdvManager__CanSeeAbility_x                             0x14019AE70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0280
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D10C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1310
#define CharacterZoneClient__CanUseItem_x                          0x1400E5B20
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1CE0
#define CharacterZoneClient__CastSpell_x                           0x1400D1D80
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E15F0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7220
#define CharacterZoneClient__Cur_Mana_x                            0x1400E73E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4D90
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED820
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC5E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6200
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4FF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF3B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE280
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D63D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6880
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8250
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE9C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6E90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF640
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D64D0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F03A0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D66E0
#define CharacterZoneClient__GetModCap_x                           0x1400F7B30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6780
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6990
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB3C0
#define CharacterZoneClient__HasSkill_x                            0x1400F3390
#define CharacterZoneClient__HitBySpell_x                          0x1400D7440
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAD70
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7620
#define CharacterZoneClient__Max_Endurance_x                       0x1402CF2F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7960
#define CharacterZoneClient__Max_Mana_x                            0x1402CF510  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7DC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE1B0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEEB0
#define CharacterZoneClient__TotalEffect_x                         0x1400E01E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD530


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140354C80

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035EFE0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035AE60
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140359EF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403616A0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140861360

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140382CD0
#define CChatWindowManager__InitContextMenu_x                      0x140382E60
#define CChatWindowManager__FreeChatWindow_x                       0x140381EF0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140389E50
#define CChatWindowManager__CreateChatWindow_x                     0x140381830

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401056B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038AE40
#define CChatWindow__Clear_x                                       0x14038BCC0
#define CChatWindow__WndNotification_x                             0x14038CEB0
#define CChatWindow__AddHistory_x                                  0x14038B7C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140598340
#define CContextMenu__RemoveMenuItem_x                             0x140598730
#define CContextMenu__RemoveAllMenuItems_x                         0x140598700
#define CContextMenu__CheckMenuItem_x                              0x140598570
#define CContextMenu__SetMenuItem_x                                0x140598750
#define CContextMenu__AddSeparator_x                               0x1405984B0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14058A230
#define CContextMenuManager__RemoveMenu_x                          0x14058A810
#define CContextMenuManager__PopupMenu_x                           0x14058A550
#define CContextMenuManager__Flush_x                               0x14058A2B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403985B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064EA50
#define CChatService__GetFriendName_x                              0x14064EA60

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057B1D0
#define CComboWnd__Draw_x                                          0x14057B2D0
#define CComboWnd__GetCurChoice_x                                  0x14057B5A0  // unused
#define CComboWnd__GetListRect_x                                   0x14057B640
#define CComboWnd__InsertChoice_x                                  0x14057B980
#define CComboWnd__SetColors_x                                     0x14057BD10
#define CComboWnd__SetChoice_x                                     0x14057BCD0
#define CComboWnd__GetItemCount_x                                  0x14057B630
#define CComboWnd__GetCurChoiceText_x                              0x14057B5E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057B570
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057BA40

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396330
#define CContainerWnd__SetContainer_x                              0x1403E9260
#define CContainerWnd__vftable_x                                   0x14082D3E0

// CDisplay
#define CDisplay__cameraType_x                                     0x140B50A94
#define CDisplay__ZoneMainUI_x                                     0x1405B24B0
#define CDisplay__PreZoneMainUI_x                                  0x14018D880
#define CDisplay__CleanGameUI_x                                    0x14017FA60
#define CDisplay__GetClickedActor_x                                0x140183BF0
#define CDisplay__GetUserDefinedColor_x                            0x140184860
#define CDisplay__InitCharSelectUI_x                               0x140184B10
#define CDisplay__ReloadUI_x                                       0x14018FB60
#define CDisplay__WriteTextHD2_x                                   0x140196D00
#define CDisplay__TrueDistance_x                                   0x1401969B0
#define CDisplay__SetViewActor_x                                   0x1401931D0
#define CDisplay__GetFloorHeight_x                                 0x140183E50
#define CDisplay__ToggleScreenshotMode_x                           0x1401964A0
#define CDisplay__RealRender_World_x                               0x14018EF50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BC660
#define CEditWnd__DrawCaret_x                                      0x1405AE1B0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AE670
#define CEditWnd__GetCaretPt_x                                     0x1405AE8F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AE930
#define CEditWnd__GetDisplayString_x                               0x1405AEBA0
#define CEditWnd__GetHorzOffset_x                                  0x1405AEDE0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AEF30
#define CEditWnd__GetSelStartPt_x                                  0x1405AF210  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AF060
#define CEditWnd__PointFromPrintableChar_x                         0x1405AFDC0
#define CEditWnd__ReplaceSelection_x                               0x1405B0170
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B0610
#define CEditWnd__SetEditable_x                                    0x1405B08A0
#define CEditWnd__SetWindowText_x                                  0x1405B08D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025B700
#define CEverQuest__ClickedPlayer_x                                0x140251420
#define CEverQuest__CreateTargetIndicator_x                        0x140251CE0
#define CEverQuest__DoTellWindow_x                                 0x1401053C0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105C80 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D130
#define CEverQuest__dsp_chat_x                                     0x140104E00 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287320
#define CEverQuest__Emote_x                                        0x14025DAE0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025E880
#define CEverQuest__GetClassDesc_x                                 0x14025E8E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025ECB0
#define CEverQuest__GetDeityDesc_x                                 0x14025EF60
#define CEverQuest__GetLangDesc_x                                  0x14025F390
#define CEverQuest__GetRaceDesc_x                                  0x14025F730
#define CEverQuest__InterpretCmd_x                                 0x140261040
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402760C0
#define CEverQuest__LMouseUp_x                                     0x1402629F0
#define CEverQuest__RightClickedOnPlayer_x                         0x140273910
#define CEverQuest__RMouseUp_x                                     0x14026CEE0
#define CEverQuest__SetGameState_x                                 0x1402785F0
#define CEverQuest__UPCNotificationFlush_x                         0x14027DDE0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262660
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026E290
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F0F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AA900

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C05E0
#define CGuild__GetGuildName_x                                     0x1400C0620

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CCE00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140298940
#define CHotButton__SetCheck_x                                     0x140298C10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E2000
#define CInvSlotMgr__MoveItem_x                                    0x1403E21E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403E3B50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DF220
#define CInvSlot__SliderComplete_x                                 0x1403E0770
#define CInvSlot__GetItemBase_x                                    0x1403DAE50
#define CInvSlot__UpdateItem_x                                     0x1403E0C30

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E4EE0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140406150
#define CItemDisplayWnd__UpdateStrings_x                           0x140408B10
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140402BA0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404043D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140405570

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CDFD0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404CFCD0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405098A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FF2E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401484B0

// CLabel
#define CLabel__UpdateText_x                                       0x14040FF00

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057EB50
#define CListWnd__dCListWnd_x                                      0x14057EFA0
#define CListWnd__vftable_x                                        0x14085F528
#define CListWnd__AddColumn_x                                      0x14057F640
#define CListWnd__AddColumn1_x                                     0x14057F6E0
#define CListWnd__AddLine_x                                        0x14057F840
#define CListWnd__AddString_x                                      0x14057FDD0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140580340
#define CListWnd__CalculateVSBRange_x                              0x140580620
#define CListWnd__ClearSel_x                                       0x1405807D0
#define CListWnd__ClearAllSel_x                                    0x140580770
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140580830
#define CListWnd__Compare_x                                        0x1405809F0
#define CListWnd__Draw_x                                           0x140580EC0
#define CListWnd__DrawColumnSeparators_x                           0x140581A60
#define CListWnd__DrawHeader_x                                     0x140581B20
#define CListWnd__DrawItem_x                                       0x1405821F0
#define CListWnd__DrawLine_x                                       0x140582B70
#define CListWnd__DrawSeparator_x                                  0x140583030
#define CListWnd__EnableLine_x                                     0x140583450
#define CListWnd__EnsureVisible_x                                  0x1405834B0
#define CListWnd__ExtendSel_x                                      0x1405835B0
#define CListWnd__GetColumnMinWidth_x                              0x1405838E0
#define CListWnd__GetColumnWidth_x                                 0x140583960
#define CListWnd__GetCurSel_x                                      0x140583A60
#define CListWnd__GetItemData_x                                    0x140583DE0
#define CListWnd__GetItemHeight_x                                  0x140583E20
#define CListWnd__GetItemRect_x                                    0x140584040
#define CListWnd__GetItemText_x                                    0x1405842E0
#define CListWnd__GetSelList_x                                     0x140584530
#define CListWnd__GetSeparatorRect_x                               0x140584720
#define CListWnd__InsertLine_x                                     0x140585B70
#define CListWnd__RemoveLine_x                                     0x1405861E0
#define CListWnd__SetColors_x                                      0x1405865A0
#define CListWnd__SetColumnJustification_x                         0x1405865C0
#define CListWnd__SetColumnLabel_x                                 0x140586640
#define CListWnd__SetColumnWidth_x                                 0x1405867E0
#define CListWnd__SetCurSel_x                                      0x1405868B0
#define CListWnd__SetItemColor_x                                   0x140586B20
#define CListWnd__SetItemData_x                                    0x140586BC0
#define CListWnd__SetItemText_x                                    0x140586E00
#define CListWnd__Sort_x                                           0x140587210
#define CListWnd__ToggleSel_x                                      0x140587380
#define CListWnd__SetColumnsSizable_x                              0x140586830
#define CListWnd__SetItemWnd_x                                     0x140586F30
#define CListWnd__GetItemWnd_x                                     0x1405844C0
#define CListWnd__SetItemIcon_x                                    0x140586C00
#define CListWnd__CalculateCustomWindowPositions_x                 0x140580110
#define CListWnd__SetVScrollPos_x                                  0x140587170

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140423210

// MapViewMap
#define MapViewMap__vftable_x                                      0x140839F30
#define MapViewMap__Clear_x                                        0x140424D90
#define MapViewMap__SetZoom_x                                      0x14042B3D0
#define MapViewMap__HandleLButtonDown_x                            0x140427F10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044CA60  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140453060
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140453810
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140457020
#define CMerchantWnd__SelectBuySellSlot_x                          0x140456370
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045B2D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062BB60
#define CPacketScrambler__hton_x                                   0x14062BB50

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A7A90
#define CSidlManagerBase__FindAnimation1_x                         0x1405A79D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A80C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A7E70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A6DD0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A6D60
#define CSidlManagerBase__CreateXWnd_x                             0x1405A63A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C1040
#define CSidlManager__CreateXWnd_x                                 0x1404C1200

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056C9D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056C8B0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B6C20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056CB50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056C000
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056C0D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056C2E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056D1F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056D420
#define CSidlScreenWnd__GetChildItem_x                             0x14056D5B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056D800
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140577780 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056DB70
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056DEE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056E790
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056F080
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA9DB8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056F6C0
#define CSidlScreenWnd__StoreIniVis_x                              0x14056FEB0
#define CSidlScreenWnd__vftable_x                                  0x14085E7C8
#define CSidlScreenWnd__WndNotification_x                          0x14056FF00

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030EF70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030F380 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030F2B0
#define CSkillMgr__IsActivatedSkill_x                              0x14030F730
#define CSkillMgr__IsCombatSkill_x                                 0x14030F770

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DE160
#define CSliderWnd__SetValue_x                                     0x140588500
#define CSliderWnd__SetNumTicks_x                                  0x140588380

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C7670

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058CC90
#define CStmlWnd__CalculateHSBRange_x                              0x140577150
#define CStmlWnd__CalculateVSBRange_x                              0x14058DB30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058E620
#define CStmlWnd__ForceParseNow_x                                  0x14058E6C0
#define CStmlWnd__GetVisibleText_x                                 0x14058ED90
#define CStmlWnd__MakeStmlColorTag_x                               0x140590AD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x140590B10
#define CStmlWnd__SetSTMLText_x                                    0x140597AE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140597C90
#define CStmlWnd__UpdateHistoryString_x                            0x140598020

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405888D0
#define CTabWnd__DrawCurrentPage_x                                 0x140588970
#define CTabWnd__DrawTab_x                                         0x140588D40
#define CTabWnd__GetTabRect_x                                      0x1405893A0
#define CTabWnd__InsertPage_x                                      0x140589670
#define CTabWnd__RemovePage_x                                      0x140589900
#define CTabWnd__SetPage_x                                         0x140589A60
#define CTabWnd__UpdatePage_x                                      0x140589D60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B0D30
#define CPageWnd__SetTabText_x                                     0x1405B0DA0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9D40  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA150


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059F490
#define CTextureFont__DrawWrappedText1_x                           0x14059F3A0
#define CTextureFont__DrawWrappedText2_x                           0x14059F5C0
#define CTextureFont__GetTextExtent_x                              0x14059F970
#define CTextureFont__GetHeight_x                                  0x14059F930

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B5380

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14056BBE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD98D0
#define CXStr__gCXStrAccess_x                                      0x140CA9BB8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140572930
#define CXWnd__ClrFocus_x                                          0x140572B70
#define CXWnd__Destroy_x                                           0x140572CF0
#define CXWnd__DoAllDrawing_x                                      0x140572E00
#define CXWnd__DrawColoredRect_x                                   0x1405735C0
#define CXWnd__DrawTooltip_x                                       0x140574C20
#define CXWnd__DrawTooltipAtPoint_x                                0x140574CD0
#define CXWnd__GetChildItem_x                                      0x1405755C0
#define CXWnd__GetChildWndAt_x                                     0x140575680
#define CXWnd__GetClientRect_x                                     0x140575910
#define CXWnd__GetClientClipRect_x                                 0x1405757E0
#define CXWnd__GetRelativeRect_x                                   0x140577270
#define CXWnd__GetScreenClipRect_x                                 0x140577380
#define CXWnd__GetScreenRect_x                                     0x140577500
#define CXWnd__GetTooltipRect_x                                    0x140577680
#define CXWnd__IsActive_x                                          0x140577C40
#define CXWnd__IsDescendantOf_x                                    0x140577C70
#define CXWnd__IsReallyVisible_x                                   0x140577CE0
#define CXWnd__IsType_x                                            0x140577D20
#define CXWnd__Minimize_x                                          0x140577E20
#define CXWnd__ProcessTransition_x                                 0x140578CD0
#define CXWnd__Resize_x                                            0x140578DF0
#define CXWnd__Right_x                                             0x140578E90
#define CXWnd__SetFocus_x                                          0x140579260
#define CXWnd__SetFont_x                                           0x1405792B0
#define CXWnd__SetKeyTooltip_x                                     0x1405793B0
#define CXWnd__SetMouseOver_x                                      0x1405794F0
#define CXWnd__SetParent_x                                         0x140579570
#define CXWnd__StartFade_x                                         0x1405799C0
#define CXWnd__vftable_x                                           0x14085EDA8
#define CXWnd__CXWnd_x                                             0x1405714C0
#define CXWnd__dCXWnd_x                                            0x140571E20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BBDE0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140599900
#define CXWndManager__DrawCursor_x                                 0x140599BE0
#define CXWndManager__DrawWindows_x                                0x140599E40
#define CXWndManager__GetKeyboardFlags_x                           0x14059A510
#define CXWndManager__HandleKeyboardMsg_x                          0x14059A550
#define CXWndManager__RemoveWnd_x                                  0x14059DB50

// CDBStr
#define CDBStr__GetString_x                                        0x14017DBD0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140634C70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDFE0
#define CCharacterListWnd__EnterWorld_x                            0x1400CCCE0
#define CCharacterListWnd__Quit_x                                  0x1400CDFC0
#define CCharacterListWnd__UpdateList_x                            0x1400CECD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140604200
#define ItemBase__CreateItemTagString_x                            0x140604C60
#define ItemBase__GetImageNum_x                                    0x140607230
#define ItemBase__GetItemValue_x                                   0x140608CC0
#define ItemBase__IsEmpty_x                                        0x14060A8B0
#define ItemBase__IsKeyRingItem_x                                  0x14060AFF0
#define ItemBase__ValueSellMerchant_x                              0x14060F190
#define ItemClient__CanDrop_x                                      0x14029AF30
#define ItemClient__CanGoInBag_x                                   0x14029B060
#define ItemClient__CreateItemClient_x                             0x14029B340
#define ItemClient__dItemClient_x                                  0x14029ADA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D250
#define EQ_LoadingS__Array_x                                       0x140AC5CE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061B1B0
#define PcBase__GetCombatAbility_x                                 0x14061B850
#define PcBase__GetCombatAbilityTimer_x                            0x14061B8F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061C040
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061C9D0
#define PcClient__AlertInventoryChanged_x                          0x1402BCA60
#define PcClient__GetConLevel_x                                    0x1402BD040  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BF710
#define PcClient__HasLoreItem_x                                    0x1402C0800
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CD830
#define PcZoneClient__RemoveMyAffect_x                             0x1402D03C0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020A3A0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020A550  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020A6B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020A5F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140242D10  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178400

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140678640
#define PlayerBase__CanSee1_x                                      0x140678710
#define PlayerBase__GetVisibilityLineSegment_x                     0x140678BD0
#define PlayerBase__HasProperty_x                                  0x140678DF0
#define PlayerBase__IsTargetable_x                                 0x140678EB0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DC300
#define PlayerClient__GetPcClient_x                                0x1402DEB30
#define PlayerClient__PlayerClient_x                               0x1402D5660
#define PlayerClient__SetNameSpriteState_x                         0x1402E1FE0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E2FA0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F16B0
#define PlayerZoneClient__DoAttack_x                               0x1402F23C0
#define PlayerZoneClient__GetLevel_x                               0x1402F5B30
#define PlayerZoneClient__IsValidTeleport_x                        0x140245AA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C110

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EAE70  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EAF20  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EB020
#define PlayerManagerClient__CreatePlayer_x                        0x1402EA940
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140678220

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A03A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029FFA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0010
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0330  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A04C0
#define KeypressHandler__HandleKeyUp_x                             0x1402A05C0
#define KeypressHandler__SaveKeymapping_x                          0x1402A0240  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406327F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062D290

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C5FB0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CB850
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CDF30
#define PcZoneClient__RemovePetEffect_x                            0x1402D04C0
#define PcZoneClient__HasAlternateAbility_x                        0x1402CEC10
#define PcZoneClient__CanEquipItem_x                               0x1402C9B50
#define PcZoneClient__GetItemByID_x                                0x1402CC8E0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D0240
#define PcZoneClient__BandolierSwap_x                              0x1402C8B30
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CDE80

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024A5D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A0560

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403950E0
#define CContainerMgr__CloseContainer_x                            0x140394A20
#define CContainerMgr__OpenExperimentContainer_x                   0x140395460

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140485EF0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293100

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404171F0
#define CLootWnd__RequestLootSlot_x                                0x140418230

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC520
#define EQ_Spell__SpellAffects_x                                   0x1401CD7E0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD740
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6B70
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6B20
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD400
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCFC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC890

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF230

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E2380  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E23C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E18C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E0E70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E9420  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174CA0
#define CTaskManager__GetTaskStatus_x                              0x140174DB0
#define CTaskManager__GetElementDescription_x                      0x140174930

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA890
#define EqSoundManager__PlayScriptMp3_x                            0x1401C96D0
#define EqSoundManager__SoundAssistPlay_x                          0x140314460  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403147A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14057A760
#define CTextureAnimation__SetCurCell_x                            0x14057AA70

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291370

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064C470
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064C4F0
#define CharacterBase__IsExpansionFlag_x                           0x1401EC860

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140374FD0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140375930
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140376E80

// messages
#define msg_spell_worn_off_x                                       0x140200E20
#define msg_new_text_x                                             0x1401FC6F0
#define __msgTokenTextParam_x                                      0x1401F4490
#define msgTokenText_x                                             0x1401F43B0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140315E50
#define SpellManager__GetSpellByGroupAndRank_x                     0x140315D70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406871F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140410650

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039C5C0
#define CCursorAttachment__AttachToCursor1_x                       0x140399C80
#define CCursorAttachment__Deactivate_x                            0x14039CB30

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B3820
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B3A10
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B3A20

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143740
#define CFindItemWnd__Update_x                                     0x1401440E0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DC00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF60
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E310
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E5C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140469220

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068B6A0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030EAD0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140391410

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140650510  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140650400  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B6020
#define CGroupWnd__UpdateDisplay_x                                 0x1403B5C00

// ItemBase
#define ItemBase__IsLore_x                                         0x14060B0C0
#define ItemBase__IsLoreEquipped_x                                 0x14060B150

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B3080

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140242E70
#define EQPlacedItemManager__GetItemByGuid_x                       0x140242E00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140242E40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403090A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB40
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEF0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D310
#define FactionManagerClient__GetMaxFaction_x                      0x14011D310
#define FactionManagerClient__GetMinFaction_x                      0x14011D1C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABF20

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401292A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5BC0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4F40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A59E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5960  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031AF70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403090A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020A740

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405704F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084A00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032C5B0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BF10

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140635690
#define FreeToPlayClient__RestrictionInfo_x                        0x140870C20

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
