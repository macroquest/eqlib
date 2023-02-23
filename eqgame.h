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

#define __ClientDate                                               20230221u
#define __ExpectedVersionDate                                     "Feb 21 2023"
#define __ExpectedVersionTime                                     "08:53:40"
#define __ActualVersionDate_x                                      0x1407AF298
#define __ActualVersionTime_x                                      0x1407AF288
#define __ActualVersionBuild_x                                     0x14079D418

// Memory Protection
#define __MemChecker0_x                                            0x14027A670
#define __MemChecker1_x                                            0x14051D1F0
#define __MemChecker4_x                                            0x140249CE0
#define __EncryptPad0_x                                            0x140A585F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B939B0
#define instEQZoneInfo_x                                           0x140B93BA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401F3B10
#define __gfMaxZoomCameraDistance_x                                0x1407A5600
#define __gfMaxCameraDistance_x                                    0x1407DFEC4
#define __CurrentSocial_x                                          0x140914900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A4FF70
#define g_eqCommandStates_x                                        0x140A50FE0
#define __CommandList_x                                            0x140A51210
#define __ScreenMode_x                                             0x140ADAF8C
#define __gWorld_x                                                 0x140B8C428
#define __gpbCommandEvent_x                                        0x140B8BE38
#define __ServerHost_x                                             0x140B8C018
#define __Guilds_x                                                 0x140B92560
#define __MouseEventTime_x                                         0x140C08EA8
#define DI8__Mouse_Check_x                                         0x140C0DAC0
#define __heqmain_x                                                0x140C0FF68
#define DI8__Mouse_x                                               0x140C0FF80
#define __HWnd_x                                                   0x140C0FF88
#define __Mouse_x                                                  0x140C0CFB4
#define DI8__Main_x                                                0x140C0D050
#define DI8__Keyboard_x                                            0x140C0D058
#define __LoginName_x                                              0x140C0D73C
#define __CurrentMapLabel_x                                        0x140C22F20
#define __LabelCache_x                                             0x140C23AF0
#define __SubscriptionType_x                                       0x140C588E0
#define Teleport_Table_Size_x                                      0x140B8BEC0
#define Teleport_Table_x                                           0x140B8C440

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B8E8F0
#define pinstActiveBanker_x                                        0x140B8C358
#define pinstActiveCorpse_x                                        0x140B8C348
#define pinstActiveGMaster_x                                       0x140B8C350
#define pinstActiveMerchant_x                                      0x140B8C340
#define pinstAltAdvManager_x                                       0x140ADC118
#define pinstCEverQuest_x                                          0x140C0CFB8
#define pinstCamActor_x                                            0x140ADAF78
#define pinstCDBStr_x                                              0x140ADAF20
#define pinstCDisplay_x                                            0x140B8C438
#define pinstControlledPlayer_x                                    0x140B8C3E8
#define pinstCResolutionHandler_x                                  0x141291480
#define pinstCSidlManager_x                                        0x140C34B30
#define pinstCXWndManager_x                                        0x140C34B28
#define instDynamicZone_x                                          0x140B92420 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B9246E
#define instExpeditionName_x                                       0x140B924AE
#define pinstDZMember_x                                            0x140B92538
#define pinstDZTimerInfo_x                                         0x140B92540
#define pinstEqLogin_x                                             0x140C0D080
#define instTribute_x                                              0x140A4B800
#define pinstEQSoundManager_x                                      0x140ADC498
#define pinstEQSpellStrings_x                                      0x140ABFB50
#define pinstSGraphicsEngine_x                                     0x141291218
#define pinstLocalPC_x                                             0x140B8C420
#define pinstLocalPlayer_x                                         0x140B8C338
#define pinstCMercenaryClientManager_x                             0x140C0A758
#define pinstModelPlayer_x                                         0x140B8C368
#define pinstRenderInterface_x                                     0x141291230
#define pinstSkillMgr_x                                            0x140C0C3F0
#define pinstSpawnManager_x                                        0x140C0AB10
#define pinstSpellManager_x                                        0x140C0C458
#define pinstStringTable_x                                         0x140B8C430
#define pinstSwitchManager_x                                       0x140B8BDB0
#define pinstTarget_x                                              0x140B8C3E0
#define pinstTaskMember_x                                          0x140A4B7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B8C3F0
#define pinstTradeTarget_x                                         0x140B8C360
#define instTributeActive_x                                        0x140A4B829
#define pinstViewActor_x                                           0x140ADAF70
#define pinstWorldData_x                                           0x140B8E468
#define pinstPlayerPath_x                                          0x140C0AB38
#define pinstTargetIndicator_x                                     0x140C0C508
#define EQObject_Top_x                                             0x140B8C408

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C20078
#define pinstCContainerMgr_x                                       0x140ADB000
#define pinstCContextMenuManager_x                                 0x140C34AE0
#define pinstCInvSlotMgr_x                                         0x140ADAFE8
#define pinstCItemDisplayManager_x                                 0x140C22AF0
#define pinstCPopupWndManager_x                                    0x140C23380
#define pinstCSpellDisplayMgr_x                                    0x140C239D0
#define pinstCTaskManager_x                                        0x140914C40
#define pinstEQSuiteTextureLoader_x                                0x140A61C60
#define pinstItemIconCache_x                                       0x140C203D8
#define pinstLootFiltersManager_x                                  0x140ADA938

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14020B0A0
#define __CastRay_x                                                0x1402038C0
#define __CastRay2_x                                               0x1402035D0
#define __ConvertItemTags_x                                        0x140203CC0
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140156F50
#define __DoesFileExist_x                                          0x1405219D0
#define __EQGetTime_x                                              0x14051D7A0
#define __ExecuteCmd_x                                             0x1401DBF60
#define __FixHeading_x                                             0x140620220
#define __FlushDxKeyboard_x                                        0x1402F72F0
#define __get_bearing_x                                            0x14020D290
#define __get_melee_range_x                                        0x14020D380
#define __GetAnimationCache_x                                      0x14036F410
#define __GetGaugeValueFromEQ_x                                    0x140495090
#define __GetLabelFromEQ_x                                         0x140496650
#define __GetXTargetType_x                                         0x140621500   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406202A0
#define __HelpPath_x                                               0x140C08D70   // Why?
#define __NewUIINI_x                                               0x1404A1810   // Why?
#define __ProcessGameEvents_x                                      0x14023F320
#define __ProcessKeyboardEvents_x                                  0x1402F8AF0
#define __ProcessMouseEvents_x                                     0x140240800
#define __SaveColors_x                                             0x140166B80
#define __STMLToText_x                                             0x14054B240
#define __WndProc_x                                                0x1402F5A70
#define CMemoryMappedFile__SetFile_x                               0x14075BD30
#define DrawNetStatus_x                                            0x140288720
#define Util__FastTime_x                                           0x14051E4A0
#define __eq_delete_x                                              0x140626330
#define __eq_new_x                                                 0x14062642C
#define __CopyLayout_x                                             0x140276B30
#define __ThrottleFrameRate_x                                      0x14022EDC1
#define __ThrottleFrameRateEnd_x                                   0x14022EE21

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140307C60
#define CAAWnd__Update_x                                           0x140307F60
#define CAAWnd__UpdateSelected_x                                   0x140308F20

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078C410
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C140

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x140171AE0
#define AltAdvManager__IsAbilityReady_x                            0x140171D60
#define AltAdvManager__GetAAById_x                                 0x1401713B0
#define AltAdvManager__CanTrainAbility_x                           0x1401711E0
#define AltAdvManager__CanSeeAbility_x                             0x140170EA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A43A0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5150
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5360
#define CharacterZoneClient__CanUseItem_x                          0x1400B9770
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5C50
#define CharacterZoneClient__CastSpell_x                           0x1400A5CF0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5250
#define CharacterZoneClient__Cur_HP_x                              0x1400BAE50
#define CharacterZoneClient__Cur_Mana_x                            0x1400BB010
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8CA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C17F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D05E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA190
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8C50
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C3320
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C2240
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA360
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA00
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C3D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C2950
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAAC0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C35B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA3E0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C4380
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA5F0
#define CharacterZoneClient__GetModCap_x                           0x1400CBAC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA690
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA8A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F570
#define CharacterZoneClient__HasSkill_x                            0x1400C72F0
#define CharacterZoneClient__HitBySpell_x                          0x1400AB340
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEB20
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB550
#define CharacterZoneClient__Max_Endurance_x                       0x1402A26E0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CB890
#define CharacterZoneClient__Max_Mana_x                            0x1402A28D0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CBD50
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2130
#define CharacterZoneClient__SpellDuration_x                       0x1400B2D10
#define CharacterZoneClient__TotalEffect_x                         0x1400B4040
#define CharacterZoneClient__UseSkill_x                            0x1400D1530


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403260F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140330310

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032C240
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032B2D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403329D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EC5F8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140353FC0
#define CChatWindowManager__InitContextMenu_x                      0x140354150
#define CChatWindowManager__FreeChatWindow_x                       0x140353210
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035AF10
#define CChatWindowManager__CreateChatWindow_x                     0x140352B50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D9640

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035BE90
#define CChatWindow__Clear_x                                       0x14035CCA0
#define CChatWindow__WndNotification_x                             0x14035DE60
#define CChatWindow__AddHistory_x                                  0x14035C7A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055C2D0
#define CContextMenu__RemoveMenuItem_x                             0x14055C7F0
#define CContextMenu__RemoveAllMenuItems_x                         0x14055C7C0
#define CContextMenu__CheckMenuItem_x                              0x14055C630
#define CContextMenu__SetMenuItem_x                                0x14055C810
#define CContextMenu__AddSeparator_x                               0x14055C440

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055CE60
#define CContextMenuManager__RemoveMenu_x                          0x14055D3D0
#define CContextMenuManager__PopupMenu_x                           0x14055D150
#define CContextMenuManager__Flush_x                               0x14055CEE0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403692F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405E96F0
#define CChatService__GetFriendName_x                              0x1405E9700

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140558490
#define CComboWnd__Draw_x                                          0x140558590
#define CComboWnd__GetCurChoice_x                                  0x140558870  // unused
#define CComboWnd__GetListRect_x                                   0x140558910
#define CComboWnd__InsertChoice_x                                  0x140558C50
#define CComboWnd__SetColors_x                                     0x140558FE0
#define CComboWnd__SetChoice_x                                     0x140558FA0
#define CComboWnd__GetItemCount_x                                  0x140558900
#define CComboWnd__GetCurChoiceText_x                              0x1405588B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140558840
#define CComboWnd__InsertChoiceAtIndex_x                           0x140558D10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140367130
#define CContainerWnd__SetContainer_x                              0x1403B0FE0
#define CContainerWnd__vftable_x                                   0x1407BD1B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ADB31C
#define CDisplay__ZoneMainUI_x                                     0x140573A30
#define CDisplay__PreZoneMainUI_x                                  0x140163BA0
#define CDisplay__CleanGameUI_x                                    0x140156050
#define CDisplay__GetClickedActor_x                                0x14015A1E0
#define CDisplay__GetUserDefinedColor_x                            0x14015ACC0
#define CDisplay__InitCharSelectUI_x                               0x14015AF70
#define CDisplay__ReloadUI_x                                       0x140165E50
#define CDisplay__WriteTextHD2_x                                   0x14016CD30
#define CDisplay__TrueDistance_x                                   0x14016CA10
#define CDisplay__SetViewActor_x                                   0x140169370
#define CDisplay__GetFloorHeight_x                                 0x14015A440
#define CDisplay__ToggleScreenshotMode_x                           0x14016C520
#define CDisplay__RealRender_World_x                               0x140165270

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14057ED70
#define CEditWnd__DrawCaret_x                                      0x14055FD10  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405601D0
#define CEditWnd__GetCaretPt_x                                     0x140560450  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140560490
#define CEditWnd__GetDisplayString_x                               0x140560700
#define CEditWnd__GetHorzOffset_x                                  0x140560940
#define CEditWnd__GetLineForPrintableChar_x                        0x140560A90
#define CEditWnd__GetSelStartPt_x                                  0x140560D70  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140560BC0
#define CEditWnd__PointFromPrintableChar_x                         0x140561920
#define CEditWnd__ReplaceSelection_x                               0x140561CD0
#define CEditWnd__SelectableCharFromPoint_x                        0x140562170
#define CEditWnd__SetEditable_x                                    0x140562400
#define CEditWnd__SetWindowText_x                                  0x140562430

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022FD70
#define CEverQuest__ClickedPlayer_x                                0x140225D50
#define CEverQuest__CreateTargetIndicator_x                        0x140226610
#define CEverQuest__DoTellWindow_x                                 0x1400D9350 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D9C10 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402317A0
#define CEverQuest__dsp_chat_x                                     0x1400D8D90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025B530
#define CEverQuest__Emote_x                                        0x140232150
#define CEverQuest__GetBodyTypeDesc_x                              0x140232EF0
#define CEverQuest__GetClassDesc_x                                 0x140232F50
#define CEverQuest__GetClassThreeLetterCode_x                      0x140233320
#define CEverQuest__GetDeityDesc_x                                 0x1402335D0
#define CEverQuest__GetLangDesc_x                                  0x140233A00
#define CEverQuest__GetRaceDesc_x                                  0x140233DA0
#define CEverQuest__InterpretCmd_x                                 0x1402356B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024A360
#define CEverQuest__LMouseUp_x                                     0x140237050
#define CEverQuest__RightClickedOnPlayer_x                         0x140247BC0
#define CEverQuest__RMouseUp_x                                     0x140241380
#define CEverQuest__SetGameState_x                                 0x14024C870
#define CEverQuest__UPCNotificationFlush_x                         0x140251FC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140236CD0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402426B0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402433F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140379790

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946A0
#define CGuild__GetGuildName_x                                     0x1400946E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039B820

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026C740
#define CHotButton__SetCheck_x                                     0x14026CA10

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403AB040
#define CInvSlotMgr__MoveItem_x                                    0x1403AB1C0
#define CInvSlotMgr__SelectSlot_x                                  0x1403ACB00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A8A50
#define CInvSlot__SliderComplete_x                                 0x1403A9D40
#define CInvSlot__GetItemBase_x                                    0x1403A54E0
#define CInvSlot__UpdateItem_x                                     0x1403AA1F0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403AD1C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403AE150

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403CE010
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D09D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CAA80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CC290
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403CD430

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140491C60
#define CSpellDisplayWnd__UpdateStrings_x                          0x140493830

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CCD40

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403C71C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011B0A0

// CLabel
#define CLabel__UpdateText_x                                       0x1403D7E70

// CListWnd
#define CListWnd__CListWnd_x                                       0x14052F620
#define CListWnd__dCListWnd_x                                      0x14052FA60
#define CListWnd__vftable_x                                        0x1407EBA00
#define CListWnd__AddColumn_x                                      0x140530100
#define CListWnd__AddColumn1_x                                     0x1405301A0
#define CListWnd__AddLine_x                                        0x140530300
#define CListWnd__AddString_x                                      0x140530890
#define CListWnd__CalculateFirstVisibleLine_x                      0x140530F90
#define CListWnd__CalculateVSBRange_x                              0x140531270
#define CListWnd__ClearSel_x                                       0x140531420
#define CListWnd__ClearAllSel_x                                    0x1405313C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140531480
#define CListWnd__Compare_x                                        0x140531640
#define CListWnd__Draw_x                                           0x140531B10
#define CListWnd__DrawColumnSeparators_x                           0x1405326C0
#define CListWnd__DrawHeader_x                                     0x140532780
#define CListWnd__DrawItem_x                                       0x140532E60
#define CListWnd__DrawLine_x                                       0x1405337E0
#define CListWnd__DrawSeparator_x                                  0x140533CA0
#define CListWnd__EnableLine_x                                     0x1405340C0
#define CListWnd__EnsureVisible_x                                  0x140534120
#define CListWnd__ExtendSel_x                                      0x140534220
#define CListWnd__GetColumnMinWidth_x                              0x140534550
#define CListWnd__GetColumnWidth_x                                 0x1405345D0
#define CListWnd__GetCurSel_x                                      0x1405346D0
#define CListWnd__GetItemData_x                                    0x140534A50
#define CListWnd__GetItemHeight_x                                  0x140534A90
#define CListWnd__GetItemRect_x                                    0x140534C50
#define CListWnd__GetItemText_x                                    0x140534EF0
#define CListWnd__GetSelList_x                                     0x140535140
#define CListWnd__GetSeparatorRect_x                               0x140535330
#define CListWnd__InsertLine_x                                     0x1405367B0
#define CListWnd__RemoveLine_x                                     0x140536DD0
#define CListWnd__SetColors_x                                      0x1405371A0
#define CListWnd__SetColumnJustification_x                         0x1405371C0
#define CListWnd__SetColumnLabel_x                                 0x140537240
#define CListWnd__SetColumnWidth_x                                 0x1405373E0
#define CListWnd__SetCurSel_x                                      0x1405374B0
#define CListWnd__SetItemColor_x                                   0x140537720
#define CListWnd__SetItemData_x                                    0x1405377C0
#define CListWnd__SetItemText_x                                    0x140537A00
#define CListWnd__Sort_x                                           0x140537E10
#define CListWnd__ToggleSel_x                                      0x140537F80
#define CListWnd__SetColumnsSizable_x                              0x140537430
#define CListWnd__SetItemWnd_x                                     0x140537B30
#define CListWnd__GetItemWnd_x                                     0x1405350D0
#define CListWnd__SetItemIcon_x                                    0x140537800
#define CListWnd__CalculateCustomWindowPositions_x                 0x140530D60
#define CListWnd__SetVScrollPos_x                                  0x140537D70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EAA20

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407C88E0
#define MapViewMap__Clear_x                                        0x1403EC5A0
#define MapViewMap__SetZoom_x                                      0x1403F2B60
#define MapViewMap__HandleLButtonDown_x                            0x1403EF6A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404142E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041A8B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041B060
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14041E870
#define CMerchantWnd__SelectBuySellSlot_x                          0x14041DBB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140422B20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405C7720
#define CPacketScrambler__hton_x                                   0x1405C7710

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140555B60
#define CSidlManagerBase__FindAnimation1_x                         0x140555AA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140556190
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140555F40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140554EA0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140554E30
#define CSidlManagerBase__CreateXWnd_x                             0x140554470

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140485200
#define CSidlManager__CreateXWnd_x                                 0x1404853C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054CDB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054CC90
#define CSidlScreenWnd__ConvertToRes_x                             0x140579330 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14054CEE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054C550
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054C4A0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054C710
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14054D580
#define CSidlScreenWnd__EnableIniStorage_x                         0x14054D7B0
#define CSidlScreenWnd__GetChildItem_x                             0x14054D950
#define CSidlScreenWnd__GetSidlPiece_x                             0x14054DBA0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14053F8C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14054DF10
#define CSidlScreenWnd__LoadIniInfo_x                              0x14054E280
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14054EB20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14054F410
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C34988
#define CSidlScreenWnd__StoreIniInfo_x                             0x14054FA40
#define CSidlScreenWnd__StoreIniVis_x                              0x140550230
#define CSidlScreenWnd__vftable_x                                  0x1407ECA68
#define CSidlScreenWnd__WndNotification_x                          0x140550280

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E1630 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E1A30 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E1970
#define CSkillMgr__IsActivatedSkill_x                              0x1402E1DD0
#define CSkillMgr__IsCombatSkill_x                                 0x1402E1E10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404A1890
#define CSliderWnd__SetValue_x                                     0x14055E990
#define CSliderWnd__SetNumTicks_x                                  0x14055E810

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048B7E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140566EE0
#define CStmlWnd__CalculateHSBRange_x                              0x14053F280
#define CStmlWnd__CalculateVSBRange_x                              0x140567E10
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140568890
#define CStmlWnd__ForceParseNow_x                                  0x140568930
#define CStmlWnd__GetVisibleText_x                                 0x140569000
#define CStmlWnd__MakeStmlColorTag_x                               0x14056AD60
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056ADA0
#define CStmlWnd__SetSTMLText_x                                    0x140571D70
#define CStmlWnd__StripFirstSTMLLines_x                            0x140571F20
#define CStmlWnd__UpdateHistoryString_x                            0x1405722B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405639D0
#define CTabWnd__DrawCurrentPage_x                                 0x140563A70
#define CTabWnd__DrawTab_x                                         0x140563E40
#define CTabWnd__GetTabRect_x                                      0x1405644A0
#define CTabWnd__InsertPage_x                                      0x140564770
#define CTabWnd__RemovePage_x                                      0x140564A00
#define CTabWnd__SetPage_x                                         0x140564B60
#define CTabWnd__UpdatePage_x                                      0x140564E60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405635D0
#define CPageWnd__SetTabText_x                                     0x140563640

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E000


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405390E0
#define CTextureFont__DrawWrappedText1_x                           0x140538FF0
#define CTextureFont__DrawWrappedText2_x                           0x140539210
#define CTextureFont__GetTextExtent_x                              0x1405395C0
#define CTextureFont__GetHeight_x                                  0x140539580

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140577A90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052C290

// CXStr
#define CXStr__gFreeLists_x                                        0x140A615E0
#define CXStr__gCXStrAccess_x                                      0x140C33F48

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053AB10
#define CXWnd__ClrFocus_x                                          0x14053AD50
#define CXWnd__Destroy_x                                           0x14053AE90
#define CXWnd__DoAllDrawing_x                                      0x14053AF90
#define CXWnd__DrawColoredRect_x                                   0x14053B750
#define CXWnd__DrawTooltip_x                                       0x14053CDD0
#define CXWnd__DrawTooltipAtPoint_x                                0x14053CE80
#define CXWnd__GetChildItem_x                                      0x14053D790
#define CXWnd__GetChildWndAt_x                                     0x14053D850
#define CXWnd__GetClientClipRect_x                                 0x14053D9B0
#define CXWnd__GetRelativeRect_x                                   0x14053F3B0
#define CXWnd__GetScreenClipRect_x                                 0x14053F4C0
#define CXWnd__GetScreenRect_x                                     0x14053F640
#define CXWnd__GetTooltipRect_x                                    0x14053F7C0
#define CXWnd__IsActive_x                                          0x14053FD70
#define CXWnd__IsDescendantOf_x                                    0x14053FDA0
#define CXWnd__IsReallyVisible_x                                   0x14053FE10
#define CXWnd__IsType_x                                            0x14053FE50
#define CXWnd__Minimize_x                                          0x14053FF50
#define CXWnd__ProcessTransition_x                                 0x140540F30
#define CXWnd__Resize_x                                            0x140541040
#define CXWnd__Right_x                                             0x1405410E0
#define CXWnd__SetFocus_x                                          0x1405414A0
#define CXWnd__SetFont_x                                           0x1405414F0
#define CXWnd__SetKeyTooltip_x                                     0x1405415F0
#define CXWnd__SetMouseOver_x                                      0x140541730
#define CXWnd__SetParent_x                                         0x1405417B0
#define CXWnd__StartFade_x                                         0x140541BE0
#define CXWnd__vftable_x                                           0x1407EC188
#define CXWnd__CXWnd_x                                             0x1405396E0
#define CXWnd__dCXWnd_x                                            0x14053A000

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14057E4F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405430D0
#define CXWndManager__DrawCursor_x                                 0x1405433B0
#define CXWndManager__DrawWindows_x                                0x1405434E0
#define CXWndManager__GetKeyboardFlags_x                           0x140543BA0
#define CXWndManager__HandleKeyboardMsg_x                          0x140543BE0
#define CXWndManager__RemoveWnd_x                                  0x140546F70

// CDBStr
#define CDBStr__GetString_x                                        0x140154260

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D0600

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A2170
#define CCharacterListWnd__EnterWorld_x                            0x1400A0E80
#define CCharacterListWnd__Quit_x                                  0x1400A2150
#define CCharacterListWnd__UpdateList_x                            0x1400A2E70

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14059FA90
#define ItemBase__CreateItemTagString_x                            0x1405A04E0
#define ItemBase__GetImageNum_x                                    0x1405A2930
#define ItemBase__GetItemValue_x                                   0x1405A47F0
#define ItemBase__IsEmpty_x                                        0x1405A6490
#define ItemBase__IsKeyRingItem_x                                  0x1405A6B90
#define ItemBase__ValueSellMerchant_x                              0x1405AAB90
#define ItemClient__CanDrop_x                                      0x14026EC80
#define ItemClient__CanGoInBag_x                                   0x14026EDB0
#define ItemClient__CreateItemClient_x                             0x14026F090
#define ItemClient__dItemClient_x                                  0x14026EAF0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x140173280
#define EQ_LoadingS__Array_x                                       0x140A4DA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B6DD0
#define PcBase__GetCombatAbility_x                                 0x1405B7470
#define PcBase__GetCombatAbilityTimer_x                            0x1405B7510
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405B7C60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405B85F0
#define PcClient__AlertInventoryChanged_x                          0x1402900F0
#define PcClient__GetConLevel_x                                    0x140290640  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140292C90
#define PcClient__HasLoreItem_x                                    0x140293D90
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A0C40
#define PcZoneClient__RemoveMyAffect_x                             0x1402A3750

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E05D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E0780  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E08B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E07F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402177F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014EA50

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140612D20
#define PlayerBase__CanSee1_x                                      0x140612DF0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140613320
#define PlayerBase__HasProperty_x                                  0x140613540
#define PlayerBase__IsTargetable_x                                 0x140613600
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402AF600
#define PlayerClient__GetPcClient_x                                0x1402B1CC0
#define PlayerClient__PlayerClient_x                               0x1402A8970
#define PlayerClient__SetNameSpriteState_x                         0x1402B5160
#define PlayerClient__SetNameSpriteTint_x                          0x1402B6120
#define PlayerZoneClient__ChangeHeight_x                           0x1402C41A0
#define PlayerZoneClient__DoAttack_x                               0x1402C4E60
#define PlayerZoneClient__GetLevel_x                               0x1402C8590
#define PlayerZoneClient__IsValidTeleport_x                        0x14021A5A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140162440

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402BDF90  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402BDFC0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402BE070
#define PlayerManagerClient__CreatePlayer_x                        0x1402BD980
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406129A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140274080
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140273C80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140273CF0
#define KeypressHandler__ClearCommandStateArray_x                  0x140274010  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402741A0
#define KeypressHandler__HandleKeyUp_x                             0x140274280
#define KeypressHandler__SaveKeymapping_x                          0x140273F20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405CE210  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405C8DC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140299400  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14029ECA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A1320
#define PcZoneClient__RemovePetEffect_x                            0x1402A3850
#define PcZoneClient__HasAlternateAbility_x                        0x1402A2000
#define PcZoneClient__CanEquipItem_x                               0x14029CFC0
#define PcZoneClient__GetItemByID_x                                0x14029FD20
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A35D0
#define PcZoneClient__BandolierSwap_x                              0x14029BFA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A1270

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021F060

// IconCache
#define IconCache__GetIcon_x                                       0x14036F440

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140365FB0
#define CContainerMgr__CloseContainer_x                            0x1403658F0
#define CContainerMgr__OpenExperimentContainer_x                   0x140366320

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044BF90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402670A0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403DEAC0
#define CLootWnd__RequestLootSlot_x                                0x1403DFAC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A2E10
#define EQ_Spell__SpellAffects_x                                   0x1401A40C0
#define EQ_Spell__SpellAffectBase_x                                0x1401A4020
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAA80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AAA30
#define EQ_Spell__IsSPAStacking_x                                  0x1401A3CE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A38A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A3180

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930D0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A5600  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A5640
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A4B50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A4110

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AC6C0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014B290
#define CTaskManager__GetTaskStatus_x                              0x14014B3A0
#define CTaskManager__GetElementDescription_x                      0x14014AF20

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A1170
#define EqSoundManager__PlayScriptMp3_x                            0x14019FF70
#define EqSoundManager__SoundAssistPlay_x                          0x1402E6A00  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E6D30  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140562C30
#define CTextureAnimation__SetCurCell_x                            0x140562F40

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140265330

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E7150
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E71D0
#define CharacterBase__IsExpansionFlag_x                           0x1401C2E20

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140346070
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403469C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140347E00

// messages
#define msg_spell_worn_off_x                                       0x1401D7040
#define msg_new_text_x                                             0x1401D29E0
#define __msgTokenTextParam_x                                      0x1401CA7C0
#define msgTokenText_x                                             0x1401CA6E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E83C0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E82E0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406218E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403D85B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036B5A0
#define CCursorAttachment__AttachToCursor1_x                       0x14036A0E0
#define CCursorAttachment__Deactivate_x                            0x14036BAA0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140575EA0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140576090
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405760A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140116530
#define CFindItemWnd__Update_x                                     0x140116D00
#define CFindItemWnd__PickupSelectedItem_x                         0x1401109A0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011FAE0
#define LootFiltersManager__GetItemFilterData_x                    0x1401205F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140120E90
#define LootFiltersManager__SetItemLootFilter_x                    0x140121140

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14042FE00

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140625CB0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E1190

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403623D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EB170  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EB060  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140384C50
#define CGroupWnd__UpdateDisplay_x                                 0x1403849F0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A6C60
#define ItemBase__IsLoreEquipped_x                                 0x1405A6CF0

#define MultipleItemMoveManager__ProcessMove_x                     0x140286970

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140217950
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402178E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140217920

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB930

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400F17B0
#define FactionManagerClient__HandleFactionMessage_x               0x1400F1B60
#define FactionManagerClient__GetFactionStanding_x                 0x1400F0F80
#define FactionManagerClient__GetMaxFaction_x                      0x1400F0F80
#define FactionManagerClient__GetMinFaction_x                      0x1400F0E30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FCE80

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017BB60
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017AEE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017B980  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017B900  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402ECAB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB930

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E0940

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140575020

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056010

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402FDCB0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
