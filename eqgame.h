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

#define __ClientDate                                               20230613u
#define __ExpectedVersionDate                                     "Jun 13 2023"
#define __ExpectedVersionTime                                     "11:43:17"
#define __ActualVersionDate_x                                      0x1408107B8
#define __ActualVersionTime_x                                      0x1408107A8
#define __ActualVersionBuild_x                                     0x140805580

// Memory Protection
#define __MemChecker0_x                                            0x1402A4D40
#define __MemChecker1_x                                            0x14054E0F0
#define __MemChecker4_x                                            0x140274140
#define __EncryptPad0_x                                            0x140ACB870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C07890
#define instEQZoneInfo_x                                           0x140C07A84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021D990
#define __gfMaxZoomCameraDistance_x                                0x140806730
#define __gfMaxCameraDistance_x                                    0x140845284
#define __CurrentSocial_x                                          0x14098794C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC31B0
#define g_eqCommandStates_x                                        0x140AC4220
#define __CommandList_x                                            0x140AC4450
#define __ScreenMode_x                                             0x140B4F164
#define __gWorld_x                                                 0x140C006F8
#define __gpbCommandEvent_x                                        0x140BFFD1C
#define __ServerHost_x                                             0x140C00308
#define __Guilds_x                                                 0x140C06440
#define __MouseEventTime_x                                         0x140C7CDC0
#define DI8__Mouse_Check_x                                         0x140C80EF8
#define __heqmain_x                                                0x140C83390
#define DI8__Mouse_x                                               0x140C833E8
#define __HWnd_x                                                   0x140C83E98
#define __Mouse_x                                                  0x140C833A8
#define DI8__Main_x                                                0x140C833C0
#define DI8__Keyboard_x                                            0x140C833C8
#define __LoginName_x                                              0x140C83B2C
#define __CurrentMapLabel_x                                        0x140C97070
#define __LabelCache_x                                             0x140C97C40
#define __SubscriptionType_x                                       0x140CCCB40
#define Teleport_Table_Size_x                                      0x140C001A4
#define Teleport_Table_x                                           0x140C00720

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C027D0
#define pinstActiveBanker_x                                        0x140C00640
#define pinstActiveCorpse_x                                        0x140C00630
#define pinstActiveGMaster_x                                       0x140C00638
#define pinstActiveMerchant_x                                      0x140C00628
#define pinstAltAdvManager_x                                       0x140B4FFF8
#define pinstCEverQuest_x                                          0x140C833E0
#define pinstCamActor_x                                            0x140B4F150
#define pinstCDBStr_x                                              0x140B4EE00
#define pinstCDisplay_x                                            0x140C027A0
#define pinstControlledPlayer_x                                    0x140C006D0
#define pinstCResolutionHandler_x                                  0x1413056E8
#define pinstCSidlManager_x                                        0x140CA8E60
#define pinstCXWndManager_x                                        0x140CA8E58
#define instDynamicZone_x                                          0x140C06300 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C0634E
#define instExpeditionName_x                                       0x140C0638E
#define pinstDZMember_x                                            0x140C06418
#define pinstDZTimerInfo_x                                         0x140C06420
#define pinstEqLogin_x                                             0x140C83470
#define instTribute_x                                              0x140ABE840
#define pinstEQSoundManager_x                                      0x140B50378
#define pinstEQSpellStrings_x                                      0x140B33A10
#define pinstSGraphicsEngine_x                                     0x141305468
#define pinstLocalPC_x                                             0x140C00710
#define pinstLocalPlayer_x                                         0x140C00620
#define pinstCMercenaryClientManager_x                             0x140C7E678
#define pinstModelPlayer_x                                         0x140C00650
#define pinstRenderInterface_x                                     0x141305480
#define pinstSkillMgr_x                                            0x140C80310
#define pinstSpawnManager_x                                        0x140C7EA30
#define pinstSpellManager_x                                        0x140C80378
#define pinstStringTable_x                                         0x140C00718
#define pinstSwitchManager_x                                       0x140BFFC90
#define pinstTarget_x                                              0x140C006C8
#define pinstTaskMember_x                                          0x140ABE830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C006D8
#define pinstTradeTarget_x                                         0x140C00648
#define instTributeActive_x                                        0x140ABE869
#define pinstViewActor_x                                           0x140B4F148
#define pinstWorldData_x                                           0x140C02798
#define pinstPlayerPath_x                                          0x140C7EA58
#define pinstTargetIndicator_x                                     0x140C80428
#define EQObject_Top_x                                             0x140C006F0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C941C8
#define pinstCContainerMgr_x                                       0x140B4F3F8
#define pinstCContextMenuManager_x                                 0x140CA8C30
#define pinstCInvSlotMgr_x                                         0x140B4F3D8
#define pinstCItemDisplayManager_x                                 0x140C96C40
#define pinstCPopupWndManager_x                                    0x140C974D0
#define pinstCSpellDisplayMgr_x                                    0x140C97B20
#define pinstCTaskManager_x                                        0x140987C80
#define pinstEQSuiteTextureLoader_x                                0x140AD4EF0
#define pinstItemIconCache_x                                       0x140C94528
#define pinstLootFiltersManager_x                                  0x140B4E848
#define pinstGFViewListener_x                                      0x140CA83B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402350A0
#define __CastRay_x                                                0x14022D8C0
#define __CastRay2_x                                               0x14022D5D0
#define __ConvertItemTags_x                                        0x14022DCC0
#define __CleanItemTags_x                                          0x140086960
#define __CreateCascadeMenuItems_x                                 0x14017F4B0
#define __DoesFileExist_x                                          0x140552BC0
#define __EQGetTime_x                                              0x14054E6A0
#define __ExecuteCmd_x                                             0x140204B70
#define __FixHeading_x                                             0x140678340
#define __FlushDxKeyboard_x                                        0x1403230A0
#define __get_bearing_x                                            0x140237290
#define __get_melee_range_x                                        0x140237380
#define __GetAnimationCache_x                                      0x14039B100
#define __GetGaugeValueFromEQ_x                                    0x1404C61B0
#define __GetLabelFromEQ_x                                         0x1404C7790
#define __GetXTargetType_x                                         0x140679620   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406783C0
#define __HelpPath_x                                               0x140C7CC88   // Why?
#define __NewUIINI_x                                               0x1404D2BB0   // Why?
#define __ProcessGameEvents_x                                      0x1402695B0
#define __ProcessKeyboardEvents_x                                  0x140324900
#define __ProcessMouseEvents_x                                     0x14026AAA0
#define __SaveColors_x                                             0x14018F5A0
#define __STMLToText_x                                             0x140564110
#define __WndProc_x                                                0x140321810
#define CMemoryMappedFile__SetFile_x                               0x1407B0650
#define DrawNetStatus_x                                            0x1402B3B50
#define Util__FastTime_x                                           0x14054F420
#define __eq_delete_x                                              0x1406A243C
#define __eq_new_x                                                 0x1406A23F8
#define __CopyLayout_x                                             0x1402A11D0
#define __ThrottleFrameRate_x                                      0x140258EFC
#define __ThrottleFrameRateEnd_x                                   0x140258F5C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140333A70
#define CAAWnd__Update_x                                           0x140333D70
#define CAAWnd__UpdateSelected_x                                   0x140334D30

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A8B80
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A14B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EC760
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400A9430

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019A670
#define AltAdvManager__IsAbilityReady_x                            0x14019A8F0
#define AltAdvManager__GetAAById_x                                 0x140199F40
#define AltAdvManager__CanTrainAbility_x                           0x140199D70
#define AltAdvManager__CanSeeAbility_x                             0x140199A30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CF1C0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400CFF70
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0180
#define CharacterZoneClient__CanUseItem_x                          0x1400E48F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D0A70
#define CharacterZoneClient__CastSpell_x                           0x1400D0B10
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E03D0
#define CharacterZoneClient__Cur_HP_x                              0x1400E5FD0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6190
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D3BA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EC980
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FB910  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5090
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E3DD0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EE4D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400ED3D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D5260
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C5800
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C71D0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EDB00
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E5C40
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EE760
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D5360
#define CharacterZoneClient__GetManaRegen_x                        0x1400EF4C0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D5570
#define CharacterZoneClient__GetModCap_x                           0x1400F6C10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D5610
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D5820
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CA370
#define CharacterZoneClient__HasSkill_x                            0x1400F2440
#define CharacterZoneClient__HitBySpell_x                          0x1400D62C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400D9AA0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F66A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402CDCB0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F69E0
#define CharacterZoneClient__Max_Mana_x                            0x1402CDEA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F6EA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DD0C0
#define CharacterZoneClient__SpellDuration_x                       0x1400DDE80
#define CharacterZoneClient__TotalEffect_x                         0x1400DF1C0
#define CharacterZoneClient__UseSkill_x                            0x1400FC860


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140352020

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035C2C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403581B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140357240

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14035E980

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140853250

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14037FE90
#define CChatWindowManager__InitContextMenu_x                      0x140380020
#define CChatWindowManager__FreeChatWindow_x                       0x14037F0E0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140386840
#define CChatWindowManager__CreateChatWindow_x                     0x14037EA20

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401049C0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140387830
#define CChatWindow__Clear_x                                       0x140388670
#define CChatWindow__WndNotification_x                             0x140389860
#define CChatWindow__AddHistory_x                                  0x140388170

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14057EF00
#define CContextMenu__RemoveMenuItem_x                             0x14057F2F0
#define CContextMenu__RemoveAllMenuItems_x                         0x14057F2C0
#define CContextMenu__CheckMenuItem_x                              0x14057F130
#define CContextMenu__SetMenuItem_x                                0x14057F310
#define CContextMenu__AddSeparator_x                               0x14057F070

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14057E160
#define CContextMenuManager__RemoveMenu_x                          0x14057E730
#define CContextMenuManager__PopupMenu_x                           0x14057E470
#define CContextMenuManager__Flush_x                               0x14057E1E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140394DE0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140641A40
#define CChatService__GetFriendName_x                              0x140641A50

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14056F0A0
#define CComboWnd__Draw_x                                          0x14056F1A0
#define CComboWnd__GetCurChoice_x                                  0x14056F480  // unused
#define CComboWnd__GetListRect_x                                   0x14056F520
#define CComboWnd__InsertChoice_x                                  0x14056F860
#define CComboWnd__SetColors_x                                     0x14056FBF0
#define CComboWnd__SetChoice_x                                     0x14056FBB0
#define CComboWnd__GetItemCount_x                                  0x14056F510
#define CComboWnd__GetCurChoiceText_x                              0x14056F4C0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14056F450
#define CComboWnd__InsertChoiceAtIndex_x                           0x14056F920

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140392BB0
#define CContainerWnd__SetContainer_x                              0x1403DFA00
#define CContainerWnd__vftable_x                                   0x14081F948

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4EF0C
#define CDisplay__ZoneMainUI_x                                     0x1405A6410
#define CDisplay__PreZoneMainUI_x                                  0x14018C3F0
#define CDisplay__CleanGameUI_x                                    0x14017E5B0
#define CDisplay__GetClickedActor_x                                0x140182740
#define CDisplay__GetUserDefinedColor_x                            0x140183350
#define CDisplay__InitCharSelectUI_x                               0x140183600
#define CDisplay__ReloadUI_x                                       0x14018E6D0
#define CDisplay__WriteTextHD2_x                                   0x1401958C0
#define CDisplay__TrueDistance_x                                   0x1401955A0
#define CDisplay__SetViewActor_x                                   0x140191E00
#define CDisplay__GetFloorHeight_x                                 0x1401829A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401950A0
#define CDisplay__RealRender_World_x                               0x14018DAC0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405B0760
#define CEditWnd__DrawCaret_x                                      0x140594DB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140595270
#define CEditWnd__GetCaretPt_x                                     0x1405954F0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140595530
#define CEditWnd__GetDisplayString_x                               0x1405957A0
#define CEditWnd__GetHorzOffset_x                                  0x1405959E0
#define CEditWnd__GetLineForPrintableChar_x                        0x140595B30
#define CEditWnd__GetSelStartPt_x                                  0x140595E10  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140595C60
#define CEditWnd__PointFromPrintableChar_x                         0x1405969C0
#define CEditWnd__ReplaceSelection_x                               0x140596D70
#define CEditWnd__SelectableCharFromPoint_x                        0x140597210
#define CEditWnd__SetEditable_x                                    0x1405974A0
#define CEditWnd__SetWindowText_x                                  0x1405974D0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140259ED0
#define CEverQuest__ClickedPlayer_x                                0x14024FDF0
#define CEverQuest__CreateTargetIndicator_x                        0x1402506B0
#define CEverQuest__DoTellWindow_x                                 0x1401046D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140104F90 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025B900
#define CEverQuest__dsp_chat_x                                     0x140104110 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140285A30
#define CEverQuest__Emote_x                                        0x14025C2B0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025D050
#define CEverQuest__GetClassDesc_x                                 0x14025D0B0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025D480
#define CEverQuest__GetDeityDesc_x                                 0x14025D730
#define CEverQuest__GetLangDesc_x                                  0x14025DB60
#define CEverQuest__GetRaceDesc_x                                  0x14025DF00
#define CEverQuest__InterpretCmd_x                                 0x14025F810
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402747C0
#define CEverQuest__LMouseUp_x                                     0x1402611B0
#define CEverQuest__RightClickedOnPlayer_x                         0x140272030
#define CEverQuest__RMouseUp_x                                     0x14026B630
#define CEverQuest__SetGameState_x                                 0x140276CF0
#define CEverQuest__UPCNotificationFlush_x                         0x14027C4E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140260E30
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026C960
#define CEverQuest__ReportSuccessfulHit_x                          0x14026D810

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A54C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400BF550
#define CGuild__GetGuildName_x                                     0x1400BF590

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403C77D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140296DA0
#define CHotButton__SetCheck_x                                     0x140297070

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403D8C20
#define CInvSlotMgr__MoveItem_x                                    0x1403D8DF0
#define CInvSlotMgr__SelectSlot_x                                  0x1403DA750

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403D6160
#define CInvSlot__SliderComplete_x                                 0x1403D7490
#define CInvSlot__GetItemBase_x                                    0x1403D2BD0
#define CInvSlot__UpdateItem_x                                     0x1403D7940

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403DB5A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403FC940
#define CItemDisplayWnd__UpdateStrings_x                           0x1403FF320
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403F9360
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403FABA0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403FBD50

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404C2D40
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404C4920

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404FDE20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403F5AA0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140146E50

// CLabel
#define CLabel__UpdateText_x                                       0x1404066F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140572A30
#define CListWnd__dCListWnd_x                                      0x140572E80
#define CListWnd__vftable_x                                        0x140851B18
#define CListWnd__AddColumn_x                                      0x140573520
#define CListWnd__AddColumn1_x                                     0x1405735C0
#define CListWnd__AddLine_x                                        0x140573720
#define CListWnd__AddString_x                                      0x140573CB0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140574220
#define CListWnd__CalculateVSBRange_x                              0x140574500
#define CListWnd__ClearSel_x                                       0x1405746A0
#define CListWnd__ClearAllSel_x                                    0x140574640
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140574700
#define CListWnd__Compare_x                                        0x1405748C0
#define CListWnd__Draw_x                                           0x140574D90
#define CListWnd__DrawColumnSeparators_x                           0x140575940
#define CListWnd__DrawHeader_x                                     0x140575A00
#define CListWnd__DrawItem_x                                       0x1405760E0
#define CListWnd__DrawLine_x                                       0x140576A60
#define CListWnd__DrawSeparator_x                                  0x140576F20
#define CListWnd__EnableLine_x                                     0x140577340
#define CListWnd__EnsureVisible_x                                  0x1405773A0
#define CListWnd__ExtendSel_x                                      0x1405774A0
#define CListWnd__GetColumnMinWidth_x                              0x1405777D0
#define CListWnd__GetColumnWidth_x                                 0x140577850
#define CListWnd__GetCurSel_x                                      0x140577950
#define CListWnd__GetItemData_x                                    0x140577CD0
#define CListWnd__GetItemHeight_x                                  0x140577D10
#define CListWnd__GetItemRect_x                                    0x140577F30
#define CListWnd__GetItemText_x                                    0x1405781D0
#define CListWnd__GetSelList_x                                     0x140578420
#define CListWnd__GetSeparatorRect_x                               0x140578610
#define CListWnd__InsertLine_x                                     0x140579A90
#define CListWnd__RemoveLine_x                                     0x14057A100
#define CListWnd__SetColors_x                                      0x14057A4D0
#define CListWnd__SetColumnJustification_x                         0x14057A4F0
#define CListWnd__SetColumnLabel_x                                 0x14057A570
#define CListWnd__SetColumnWidth_x                                 0x14057A710
#define CListWnd__SetCurSel_x                                      0x14057A7E0
#define CListWnd__SetItemColor_x                                   0x14057AA50
#define CListWnd__SetItemData_x                                    0x14057AAF0
#define CListWnd__SetItemText_x                                    0x14057AD30
#define CListWnd__Sort_x                                           0x14057B140
#define CListWnd__ToggleSel_x                                      0x14057B2B0
#define CListWnd__SetColumnsSizable_x                              0x14057A760
#define CListWnd__SetItemWnd_x                                     0x14057AE60
#define CListWnd__GetItemWnd_x                                     0x1405783B0
#define CListWnd__SetItemIcon_x                                    0x14057AB30
#define CListWnd__CalculateCustomWindowPositions_x                 0x140573FF0
#define CListWnd__SetVScrollPos_x                                  0x14057B0A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140419950

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082C228
#define MapViewMap__Clear_x                                        0x14041B4D0
#define MapViewMap__SetZoom_x                                      0x140421A90
#define MapViewMap__HandleLButtonDown_x                            0x14041E5D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404431F0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404497D0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140449F80
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14044D790
#define CMerchantWnd__SelectBuySellSlot_x                          0x14044CAE0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140451A40

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14061F970
#define CPacketScrambler__hton_x                                   0x14061F960

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14058E660
#define CSidlManagerBase__FindAnimation1_x                         0x14058E5A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14058EC90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14058EA40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14058D990
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14058D920
#define CSidlManagerBase__CreateXWnd_x                             0x14058CF60

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404B5FB0
#define CSidlManager__CreateXWnd_x                                 0x1404B6170

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14055E240
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14055E110
#define CSidlScreenWnd__ConvertToRes_x                             0x1405AAD20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14055E3B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14055D8A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14055D970
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14055DB40
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14055EA50
#define CSidlScreenWnd__EnableIniStorage_x                         0x14055EC80
#define CSidlScreenWnd__GetChildItem_x                             0x14055EE20
#define CSidlScreenWnd__GetSidlPiece_x                             0x14055F070
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14056B650 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14055F3E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14055F750
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140560000
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405608F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8250
#define CSidlScreenWnd__StoreIniInfo_x                             0x140560F30
#define CSidlScreenWnd__StoreIniVis_x                              0x140561720
#define CSidlScreenWnd__vftable_x                                  0x140850D20
#define CSidlScreenWnd__WndNotification_x                          0x140561770

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030CDC0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030D1C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030D100
#define CSkillMgr__IsActivatedSkill_x                              0x14030D560
#define CSkillMgr__IsCombatSkill_x                                 0x14030D5A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404D2C30
#define CSliderWnd__SetValue_x                                     0x14057C430
#define CSliderWnd__SetNumTicks_x                                  0x14057C2B0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404BC600

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405998D0
#define CStmlWnd__CalculateHSBRange_x                              0x14056B020
#define CStmlWnd__CalculateVSBRange_x                              0x14059A7F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059B260
#define CStmlWnd__ForceParseNow_x                                  0x14059B300
#define CStmlWnd__GetVisibleText_x                                 0x14059B9D0
#define CStmlWnd__MakeStmlColorTag_x                               0x14059D730
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059D770
#define CStmlWnd__SetSTMLText_x                                    0x1405A4740
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A48F0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A4C80

// CTabWnd
#define CTabWnd__Draw_x                                            0x14057C800
#define CTabWnd__DrawCurrentPage_x                                 0x14057C8A0
#define CTabWnd__DrawTab_x                                         0x14057CC70
#define CTabWnd__GetTabRect_x                                      0x14057D2D0
#define CTabWnd__InsertPage_x                                      0x14057D5A0
#define CTabWnd__RemovePage_x                                      0x14057D830
#define CTabWnd__SetPage_x                                         0x14057D990
#define CTabWnd__UpdatePage_x                                      0x14057DC90

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140597930
#define CPageWnd__SetTabText_x                                     0x1405979A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B8CA0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B90B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140585FB0
#define CTextureFont__DrawWrappedText1_x                           0x140585EC0
#define CTextureFont__DrawWrappedText2_x                           0x1405860E0
#define CTextureFont__GetTextExtent_x                              0x140586490
#define CTextureFont__GetHeight_x                                  0x140586450

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405A9480

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14055D480

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD4860
#define CXStr__gCXStrAccess_x                                      0x140CA8098

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405668D0
#define CXWnd__ClrFocus_x                                          0x140566B10
#define CXWnd__Destroy_x                                           0x140566C50
#define CXWnd__DoAllDrawing_x                                      0x140566D50
#define CXWnd__DrawColoredRect_x                                   0x140567510
#define CXWnd__DrawTooltip_x                                       0x140568B70
#define CXWnd__DrawTooltipAtPoint_x                                0x140568C20
#define CXWnd__GetChildItem_x                                      0x140569520
#define CXWnd__GetChildWndAt_x                                     0x1405695E0
#define CXWnd__GetClientRect_x                                     0x1405698A0
#define CXWnd__GetClientClipRect_x                                 0x140569750
#define CXWnd__GetRelativeRect_x                                   0x14056B160
#define CXWnd__GetScreenClipRect_x                                 0x14056B270
#define CXWnd__GetScreenRect_x                                     0x14056B3D0
#define CXWnd__GetTooltipRect_x                                    0x14056B550
#define CXWnd__IsActive_x                                          0x140198F20
#define CXWnd__IsDescendantOf_x                                    0x14056BB30
#define CXWnd__IsReallyVisible_x                                   0x14056BBA0
#define CXWnd__IsType_x                                            0x14056BBE0
#define CXWnd__Minimize_x                                          0x14056BCE0
#define CXWnd__ProcessTransition_x                                 0x14056CBC0
#define CXWnd__Resize_x                                            0x14056CCE0
#define CXWnd__Right_x                                             0x14056CD80
#define CXWnd__SetFocus_x                                          0x14056D140
#define CXWnd__SetFont_x                                           0x14056D190
#define CXWnd__SetKeyTooltip_x                                     0x14056D2A0
#define CXWnd__SetMouseOver_x                                      0x14056D3D0
#define CXWnd__SetParent_x                                         0x14056D450
#define CXWnd__StartFade_x                                         0x14056D880
#define CXWnd__vftable_x                                           0x140851398
#define CXWnd__CXWnd_x                                             0x140565490
#define CXWnd__dCXWnd_x                                            0x140565DE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405AFEE0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405804A0
#define CXWndManager__DrawCursor_x                                 0x140580780
#define CXWndManager__DrawWindows_x                                0x1405809D0
#define CXWndManager__GetKeyboardFlags_x                           0x140581090
#define CXWndManager__HandleKeyboardMsg_x                          0x1405810D0
#define CXWndManager__RemoveWnd_x                                  0x140584680

// CDBStr
#define CDBStr__GetString_x                                        0x14017C760

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140628880

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CCF90
#define CCharacterListWnd__EnterWorld_x                            0x1400CBC90
#define CCharacterListWnd__Quit_x                                  0x1400CCF70
#define CCharacterListWnd__UpdateList_x                            0x1400CDC90

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F7FE0
#define ItemBase__CreateItemTagString_x                            0x1405F8A40
#define ItemBase__GetImageNum_x                                    0x1405FAFA0
#define ItemBase__GetItemValue_x                                   0x1405FCAD0
#define ItemBase__IsEmpty_x                                        0x1405FE6B0
#define ItemBase__IsKeyRingItem_x                                  0x1405FEDE0
#define ItemBase__ValueSellMerchant_x                              0x140602E60
#define ItemClient__CanDrop_x                                      0x140299320
#define ItemClient__CanGoInBag_x                                   0x140299450
#define ItemClient__CreateItemClient_x                             0x140299730
#define ItemClient__dItemClient_x                                  0x140299190

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019BE10
#define EQ_LoadingS__Array_x                                       0x140AC0CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060F000
#define PcBase__GetCombatAbility_x                                 0x14060F6A0
#define PcBase__GetCombatAbilityTimer_x                            0x14060F740
#define PcBase__GetItemContainedRealEstateIds_x                    0x14060FE90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140610820
#define PcClient__AlertInventoryChanged_x                          0x1402BB580
#define PcClient__GetConLevel_x                                    0x1402BBB40  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BE1E0
#define PcClient__HasLoreItem_x                                    0x1402BF2F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CC1E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402CED20

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402091E0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140209390  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402094C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140209400  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402417F0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140176F80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066B100
#define PlayerBase__CanSee1_x                                      0x14066B1D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14066B700
#define PlayerBase__HasProperty_x                                  0x14066B920
#define PlayerBase__IsTargetable_x                                 0x14066B9E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DAC20
#define PlayerClient__GetPcClient_x                                0x1402DD2E0
#define PlayerClient__PlayerClient_x                               0x1402D3F70
#define PlayerClient__SetNameSpriteState_x                         0x1402E0780
#define PlayerClient__SetNameSpriteTint_x                          0x1402E1740
#define PlayerZoneClient__ChangeHeight_x                           0x1402EF8C0
#define PlayerZoneClient__DoAttack_x                               0x1402F05B0
#define PlayerZoneClient__GetLevel_x                               0x1402F3CE0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402445A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018AC90

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402E96B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402E96E0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402E9790
#define PlayerManagerClient__CreatePlayer_x                        0x1402E90A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066AD80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14029E6F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029E2F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029E360
#define KeypressHandler__ClearCommandStateArray_x                  0x14029E680  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14029E810
#define KeypressHandler__HandleKeyUp_x                             0x14029E910
#define KeypressHandler__SaveKeymapping_x                          0x14029E590  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140626450  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140621010

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C4940  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CA200
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CC8E0
#define PcZoneClient__RemovePetEffect_x                            0x1402CEE20
#define PcZoneClient__HasAlternateAbility_x                        0x1402CD5D0
#define PcZoneClient__CanEquipItem_x                               0x1402C8510
#define PcZoneClient__GetItemByID_x                                0x1402CB290
#define PcZoneClient__RemoveBuffEffect_x                           0x1402CEBA0
#define PcZoneClient__BandolierSwap_x                              0x1402C74F0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CC830

// Doors
#define EQSwitch__UseSwitch_x                                      0x140249060

// IconCache
#define IconCache__GetIcon_x                                       0x14039B130

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140391A00
#define CContainerMgr__CloseContainer_x                            0x140391340
#define CContainerMgr__OpenExperimentContainer_x                   0x140391D70

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14047C220

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140291640

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14040D9C0
#define CLootWnd__RequestLootSlot_x                                0x14040E9C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CBDB0
#define EQ_Spell__SpellAffects_x                                   0x1401CD070
#define EQ_Spell__SpellAffectBase_x                                0x1401CCFD0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D5A00
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D59B0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CCC90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CC850
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC120

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BE1A0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404D69E0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404D6A20
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404D5F20
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404D54E0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404DDA80  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140173780
#define CTaskManager__GetTaskStatus_x                              0x140173890
#define CTaskManager__GetElementDescription_x                      0x140173410

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA130
#define EqSoundManager__PlayScriptMp3_x                            0x1401C8F70
#define EqSoundManager__SoundAssistPlay_x                          0x140312190  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403124C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14056E630
#define CTextureAnimation__SetCurCell_x                            0x14056E940

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14028F8C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063F4A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063F520
#define CharacterBase__IsExpansionFlag_x                           0x1401EB9D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403720E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140372A40
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140373EB0

// messages
#define msg_spell_worn_off_x                                       0x1401FFC70
#define msg_new_text_x                                             0x1401FB5E0
#define __msgTokenTextParam_x                                      0x1401F33C0
#define msgTokenText_x                                             0x1401F32E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140313B60
#define SpellManager__GetSpellByGroupAndRank_x                     0x140313A80

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679A00

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140406E40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140397220
#define CCursorAttachment__AttachToCursor1_x                       0x140395CA0
#define CCursorAttachment__Deactivate_x                            0x140397720

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405A7920
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405A7B10
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405A7B20

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401420E0
#define CFindItemWnd__Update_x                                     0x140142A80
#define CFindItemWnd__PickupSelectedItem_x                         0x14013C570

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014BA30
#define LootFiltersManager__GetItemFilterData_x                    0x14014C540
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014CDE0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014D090

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14045F890

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067DE00
#define CResolutionHandler__GetWindowedStyle_x                     0x14030C920

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14038DDD0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406434D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406433C0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B0AF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B06D0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FEEB0
#define ItemBase__IsLoreEquipped_x                                 0x1405FEF40

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B1D80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140241950
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402418E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140241920

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403070A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011CB40
#define FactionManagerClient__HandleFactionMessage_x               0x14011CEF0
#define FactionManagerClient__GetFactionStanding_x                 0x14011C310
#define FactionManagerClient__GetMaxFaction_x                      0x14011C310
#define FactionManagerClient__GetMinFaction_x                      0x14011C1C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AAFA0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128210

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A4760
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A3AE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A4580  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A4500  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140318860

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403070A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140209550

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140561D60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140083B20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140329AE0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008B030

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
