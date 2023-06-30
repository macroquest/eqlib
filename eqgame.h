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

#define __ClientDate                                               20230615u
#define __ExpectedVersionDate                                     "Jun 15 2023"
#define __ExpectedVersionTime                                     "11:45:29"
#define __ActualVersionDate_x                                      0x1408107A8
#define __ActualVersionTime_x                                      0x140810798
#define __ActualVersionBuild_x                                     0x140805580

// Memory Protection
#define __MemChecker0_x                                            0x1402A5250
#define __MemChecker1_x                                            0x14054E1C0
#define __MemChecker4_x                                            0x140274640
#define __EncryptPad0_x                                            0x140ACB870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C07890
#define instEQZoneInfo_x                                           0x140C07A84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021DE50
#define __gfMaxZoomCameraDistance_x                                0x140806730
#define __gfMaxCameraDistance_x                                    0x140845274
#define __CurrentSocial_x                                          0x14098794C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC31B0
#define g_eqCommandStates_x                                        0x140AC4220
#define __CommandList_x                                            0x140AC4450
#define __ScreenMode_x                                             0x140B4F164
#define __gWorld_x                                                 0x140C006F8
#define __gpbCommandEvent_x                                        0x140BFFD1C
#define __ServerHost_x                                             0x140C00308
#define __Guilds_x                                                 0x140C06440
#define __MouseEventTime_x                                         0x140C7CDC8
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
#define __allowslashcommand_x                                      0x140235580
#define __CastRay_x                                                0x14022DDB0
#define __CastRay2_x                                               0x14022DAC0
#define __ConvertItemTags_x                                        0x14022E1B0
#define __CleanItemTags_x                                          0x140086950
#define __CreateCascadeMenuItems_x                                 0x14017F3C0
#define __DoesFileExist_x                                          0x140552C90
#define __EQGetTime_x                                              0x14054E770
#define __ExecuteCmd_x                                             0x140205080
#define __FixHeading_x                                             0x140678360
#define __FlushDxKeyboard_x                                        0x140323430
#define __get_bearing_x                                            0x140237770
#define __get_melee_range_x                                        0x140237860
#define __GetAnimationCache_x                                      0x14039B370
#define __GetGaugeValueFromEQ_x                                    0x1404C6290
#define __GetLabelFromEQ_x                                         0x1404C7870
#define __GetXTargetType_x                                         0x140679640   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406783E0
#define __HelpPath_x                                               0x140C7CC90   // Why?
#define __NewUIINI_x                                               0x1404D2CA0   // Why?
#define __ProcessGameEvents_x                                      0x140269AB0
#define __ProcessKeyboardEvents_x                                  0x140324C90
#define __ProcessMouseEvents_x                                     0x14026AFA0
#define __SaveColors_x                                             0x14018F4A0
#define __STMLToText_x                                             0x1405641F0
#define __WndProc_x                                                0x140321BA0
#define CMemoryMappedFile__SetFile_x                               0x1407B0700
#define DrawNetStatus_x                                            0x1402B4010
#define Util__FastTime_x                                           0x14054F4F0
#define __eq_delete_x                                              0x1406A24E4
#define __eq_new_x                                                 0x1406A24A0
#define __CopyLayout_x                                             0x1402A16D0
#define __ThrottleFrameRate_x                                      0x14025940C
#define __ThrottleFrameRateEnd_x                                   0x14025946C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140333DF0
#define CAAWnd__Update_x                                           0x1403340F0
#define CAAWnd__UpdateSelected_x                                   0x1403350B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A8B40
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A1480
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EC760
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400A93F0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019A550
#define AltAdvManager__IsAbilityReady_x                            0x14019A7D0
#define AltAdvManager__GetAAById_x                                 0x140199E20
#define AltAdvManager__CanTrainAbility_x                           0x140199C50
#define AltAdvManager__CanSeeAbility_x                             0x140199910

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CF170
#define CharacterZoneClient__CalcAffectChange_x                    0x1400CFF20
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0130
#define CharacterZoneClient__CanUseItem_x                          0x1400E48A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D0A20
#define CharacterZoneClient__CastSpell_x                           0x1400D0AC0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E0380
#define CharacterZoneClient__Cur_HP_x                              0x1400E5F80
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6140
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D3B50
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EC920
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FB8B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5040
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E3D80
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EE470
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400ED370
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D5210
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C57B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7180
#define CharacterZoneClient__GetHPRegen_x                          0x1400EDAA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E5BF0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EE700
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D5310
#define CharacterZoneClient__GetManaRegen_x                        0x1400EF460
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D5520
#define CharacterZoneClient__GetModCap_x                           0x1400F6BB0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D55C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D57D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CA320
#define CharacterZoneClient__HasSkill_x                            0x1400F23E0
#define CharacterZoneClient__HitBySpell_x                          0x1400D6270
#define CharacterZoneClient__IsStackBlocked_x                      0x1400D9A50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F6640
#define CharacterZoneClient__Max_Endurance_x                       0x1402CE140  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F6980
#define CharacterZoneClient__Max_Mana_x                            0x1402CE330  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F6E40
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DD070
#define CharacterZoneClient__SpellDuration_x                       0x1400DDE30
#define CharacterZoneClient__TotalEffect_x                         0x1400DF170
#define CharacterZoneClient__UseSkill_x                            0x1400FC800


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140352350

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035C5C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403584B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140357540

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14035EC80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140853240

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140380140
#define CChatWindowManager__InitContextMenu_x                      0x1403802D0
#define CChatWindowManager__FreeChatWindow_x                       0x14037F390
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140386AF0
#define CChatWindowManager__CreateChatWindow_x                     0x14037ECD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140104960

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140387AE0
#define CChatWindow__Clear_x                                       0x140388920
#define CChatWindow__WndNotification_x                             0x140389B10
#define CChatWindow__AddHistory_x                                  0x140388420

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14057EEA0
#define CContextMenu__RemoveMenuItem_x                             0x14057F280
#define CContextMenu__RemoveAllMenuItems_x                         0x14057F250
#define CContextMenu__CheckMenuItem_x                              0x14057F0C0
#define CContextMenu__SetMenuItem_x                                0x14057F2A0
#define CContextMenu__AddSeparator_x                               0x14057F000

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14057E100
#define CContextMenuManager__RemoveMenu_x                          0x14057E6E0
#define CContextMenuManager__PopupMenu_x                           0x14057E420
#define CContextMenuManager__Flush_x                               0x14057E180
#define CContextMenuManager__CreateDefaultMenu_x                   0x140395070

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140641A20
#define CChatService__GetFriendName_x                              0x140641A30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14056F110
#define CComboWnd__Draw_x                                          0x14056F200
#define CComboWnd__GetCurChoice_x                                  0x14056F4D0  // unused
#define CComboWnd__GetListRect_x                                   0x14056F570
#define CComboWnd__InsertChoice_x                                  0x14056F880
#define CComboWnd__SetColors_x                                     0x14056FC10
#define CComboWnd__SetChoice_x                                     0x14056FBD0
#define CComboWnd__GetItemCount_x                                  0x14056F560
#define CComboWnd__GetCurChoiceText_x                              0x14056F510  // unused
#define CComboWnd__GetChoiceText_x                                 0x14056F4A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14056F940

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140392E40
#define CContainerWnd__SetContainer_x                              0x1403DFBF0
#define CContainerWnd__vftable_x                                   0x14081F938

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4EF0C
#define CDisplay__ZoneMainUI_x                                     0x1405A62A0
#define CDisplay__PreZoneMainUI_x                                  0x14018C300
#define CDisplay__CleanGameUI_x                                    0x14017E4C0
#define CDisplay__GetClickedActor_x                                0x140182650
#define CDisplay__GetUserDefinedColor_x                            0x140183260
#define CDisplay__InitCharSelectUI_x                               0x140183510
#define CDisplay__ReloadUI_x                                       0x14018E5E0
#define CDisplay__WriteTextHD2_x                                   0x1401957C0
#define CDisplay__TrueDistance_x                                   0x1401954A0
#define CDisplay__SetViewActor_x                                   0x140191D00
#define CDisplay__GetFloorHeight_x                                 0x1401828B0
#define CDisplay__ToggleScreenshotMode_x                           0x140194FA0
#define CDisplay__RealRender_World_x                               0x14018D9D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405B05F0
#define CEditWnd__DrawCaret_x                                      0x140594D00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140595190
#define CEditWnd__GetCaretPt_x                                     0x140595410  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140595450
#define CEditWnd__GetDisplayString_x                               0x1405956B0
#define CEditWnd__GetHorzOffset_x                                  0x1405958F0
#define CEditWnd__GetLineForPrintableChar_x                        0x140595A30
#define CEditWnd__GetSelStartPt_x                                  0x140595D10  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140595B60
#define CEditWnd__PointFromPrintableChar_x                         0x1405968C0
#define CEditWnd__ReplaceSelection_x                               0x140596C60
#define CEditWnd__SelectableCharFromPoint_x                        0x140597100
#define CEditWnd__SetEditable_x                                    0x140597390
#define CEditWnd__SetWindowText_x                                  0x1405973C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025A3E0
#define CEverQuest__ClickedPlayer_x                                0x140250300
#define CEverQuest__CreateTargetIndicator_x                        0x140250BC0
#define CEverQuest__DoTellWindow_x                                 0x140104670 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140104F30 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025BE10
#define CEverQuest__dsp_chat_x                                     0x1401040B0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140285F30
#define CEverQuest__Emote_x                                        0x14025C7C0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025D560
#define CEverQuest__GetClassDesc_x                                 0x14025D5C0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025D990
#define CEverQuest__GetDeityDesc_x                                 0x14025DC40
#define CEverQuest__GetLangDesc_x                                  0x14025E070
#define CEverQuest__GetRaceDesc_x                                  0x14025E410
#define CEverQuest__InterpretCmd_x                                 0x14025FD20
#define CEverQuest__LeftClickedOnPlayer_x                          0x140274CC0
#define CEverQuest__LMouseUp_x                                     0x1402616C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140272530
#define CEverQuest__RMouseUp_x                                     0x14026BB30
#define CEverQuest__SetGameState_x                                 0x1402771F0
#define CEverQuest__UPCNotificationFlush_x                         0x14027C9E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140261340
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026CE60
#define CEverQuest__ReportSuccessfulHit_x                          0x14026DD10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A5710

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400BF520
#define CGuild__GetGuildName_x                                     0x1400BF560

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403C7A20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402972A0
#define CHotButton__SetCheck_x                                     0x140297570

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403D8E20
#define CInvSlotMgr__MoveItem_x                                    0x1403D8FF0
#define CInvSlotMgr__SelectSlot_x                                  0x1403DA950

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403D6380
#define CInvSlot__SliderComplete_x                                 0x1403D76B0
#define CInvSlot__GetItemBase_x                                    0x1403D2DF0
#define CInvSlot__UpdateItem_x                                     0x1403D7B60

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403DB790

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403FCB50
#define CItemDisplayWnd__UpdateStrings_x                           0x1403FF550
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403F9550
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403FADA0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403FBF60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404C2E20
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404C4A00

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404FDEF0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403F5C80

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140146D90

// CLabel
#define CLabel__UpdateText_x                                       0x140406940

// CListWnd
#define CListWnd__CListWnd_x                                       0x140572A50
#define CListWnd__dCListWnd_x                                      0x140572E90
#define CListWnd__vftable_x                                        0x140851B08
#define CListWnd__AddColumn_x                                      0x140573530
#define CListWnd__AddColumn1_x                                     0x1405735D0
#define CListWnd__AddLine_x                                        0x140573730
#define CListWnd__AddString_x                                      0x140573CC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140574230
#define CListWnd__CalculateVSBRange_x                              0x140574510
#define CListWnd__ClearSel_x                                       0x1405746C0
#define CListWnd__ClearAllSel_x                                    0x140574660
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140574720
#define CListWnd__Compare_x                                        0x1405748D0
#define CListWnd__Draw_x                                           0x140574DA0
#define CListWnd__DrawColumnSeparators_x                           0x140575940
#define CListWnd__DrawHeader_x                                     0x140575A00
#define CListWnd__DrawItem_x                                       0x1405760C0
#define CListWnd__DrawLine_x                                       0x140576A30
#define CListWnd__DrawSeparator_x                                  0x140576EF0
#define CListWnd__EnableLine_x                                     0x140577310
#define CListWnd__EnsureVisible_x                                  0x140577370
#define CListWnd__ExtendSel_x                                      0x140577470
#define CListWnd__GetColumnMinWidth_x                              0x1405777A0
#define CListWnd__GetColumnWidth_x                                 0x140577820
#define CListWnd__GetCurSel_x                                      0x140577920
#define CListWnd__GetItemData_x                                    0x140577CA0
#define CListWnd__GetItemHeight_x                                  0x140577CE0
#define CListWnd__GetItemRect_x                                    0x140577F00
#define CListWnd__GetItemText_x                                    0x1405781A0
#define CListWnd__GetSelList_x                                     0x1405783F0
#define CListWnd__GetSeparatorRect_x                               0x1405785E0
#define CListWnd__InsertLine_x                                     0x140579A30
#define CListWnd__RemoveLine_x                                     0x14057A0A0
#define CListWnd__SetColors_x                                      0x14057A470
#define CListWnd__SetColumnJustification_x                         0x14057A490
#define CListWnd__SetColumnLabel_x                                 0x14057A510
#define CListWnd__SetColumnWidth_x                                 0x14057A6B0
#define CListWnd__SetCurSel_x                                      0x14057A780
#define CListWnd__SetItemColor_x                                   0x14057A9F0
#define CListWnd__SetItemData_x                                    0x14057AA90
#define CListWnd__SetItemText_x                                    0x14057ACD0
#define CListWnd__Sort_x                                           0x14057B0E0
#define CListWnd__ToggleSel_x                                      0x14057B250
#define CListWnd__SetColumnsSizable_x                              0x14057A700
#define CListWnd__SetItemWnd_x                                     0x14057AE00
#define CListWnd__GetItemWnd_x                                     0x140578380
#define CListWnd__SetItemIcon_x                                    0x14057AAD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140574000
#define CListWnd__SetVScrollPos_x                                  0x14057B040

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140419B50

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082C218
#define MapViewMap__Clear_x                                        0x14041B6D0
#define MapViewMap__SetZoom_x                                      0x140421C90
#define MapViewMap__HandleLButtonDown_x                            0x14041E7D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404433D0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404499A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14044A150
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14044D950
#define CMerchantWnd__SelectBuySellSlot_x                          0x14044CCA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140451C00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14061F940
#define CPacketScrambler__hton_x                                   0x14061F930

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14058E5C0
#define CSidlManagerBase__FindAnimation1_x                         0x14058E500
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14058EBF0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14058E9A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14058D900
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14058D890
#define CSidlManagerBase__CreateXWnd_x                             0x14058CED0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404B60B0
#define CSidlManager__CreateXWnd_x                                 0x1404B6270

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14055E1E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14055E300
#define CSidlScreenWnd__ConvertToRes_x                             0x1405AABB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14055E480
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14055D970
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14055DA40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14055DC10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14055EB20
#define CSidlScreenWnd__EnableIniStorage_x                         0x14055ED50
#define CSidlScreenWnd__GetChildItem_x                             0x14055EEF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14055F140
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14056B710 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14055F4B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14055F820
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405600E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405609D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8250
#define CSidlScreenWnd__StoreIniInfo_x                             0x140561010
#define CSidlScreenWnd__StoreIniVis_x                              0x140561800
#define CSidlScreenWnd__vftable_x                                  0x140850D10
#define CSidlScreenWnd__WndNotification_x                          0x140561850

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030D150 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030D550 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030D490
#define CSkillMgr__IsActivatedSkill_x                              0x14030D8F0
#define CSkillMgr__IsCombatSkill_x                                 0x14030D930

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404D2D20
#define CSliderWnd__SetValue_x                                     0x14057C3D0
#define CSliderWnd__SetNumTicks_x                                  0x14057C250

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404BC6F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405997C0
#define CStmlWnd__CalculateHSBRange_x                              0x14056B0E0
#define CStmlWnd__CalculateVSBRange_x                              0x14059A660
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059B150
#define CStmlWnd__ForceParseNow_x                                  0x14059B1F0
#define CStmlWnd__GetVisibleText_x                                 0x14059B8C0
#define CStmlWnd__MakeStmlColorTag_x                               0x14059D600
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059D640
#define CStmlWnd__SetSTMLText_x                                    0x1405A4600
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A47B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A4B40

// CTabWnd
#define CTabWnd__Draw_x                                            0x14057C7A0
#define CTabWnd__DrawCurrentPage_x                                 0x14057C840
#define CTabWnd__DrawTab_x                                         0x14057CC10
#define CTabWnd__GetTabRect_x                                      0x14057D270
#define CTabWnd__InsertPage_x                                      0x14057D540
#define CTabWnd__RemovePage_x                                      0x14057D7D0
#define CTabWnd__SetPage_x                                         0x14057D930
#define CTabWnd__UpdatePage_x                                      0x14057DC30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140597820
#define CPageWnd__SetTabText_x                                     0x140597890

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B8C60  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9070


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140585F50
#define CTextureFont__DrawWrappedText1_x                           0x140585E60
#define CTextureFont__DrawWrappedText2_x                           0x140586080
#define CTextureFont__GetTextExtent_x                              0x140586430
#define CTextureFont__GetHeight_x                                  0x1405863F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405A9310

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14055D550

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD4860
#define CXStr__gCXStrAccess_x                                      0x140CA8098

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405669A0
#define CXWnd__ClrFocus_x                                          0x140566BE0
#define CXWnd__Destroy_x                                           0x140566D20
#define CXWnd__DoAllDrawing_x                                      0x140566E20
#define CXWnd__DrawColoredRect_x                                   0x1405675F0
#define CXWnd__DrawTooltip_x                                       0x140568C60
#define CXWnd__DrawTooltipAtPoint_x                                0x140568D10
#define CXWnd__GetChildItem_x                                      0x140569610
#define CXWnd__GetChildWndAt_x                                     0x1405696C0
#define CXWnd__GetClientRect_x                                     0x140569960
#define CXWnd__GetClientClipRect_x                                 0x140569820
#define CXWnd__GetRelativeRect_x                                   0x14056B210
#define CXWnd__GetScreenClipRect_x                                 0x14056B320
#define CXWnd__GetScreenRect_x                                     0x14056B490
#define CXWnd__GetTooltipRect_x                                    0x14056B610
#define CXWnd__IsActive_x                                          0x14056BBD0
#define CXWnd__IsDescendantOf_x                                    0x14056BC00
#define CXWnd__IsReallyVisible_x                                   0x14056BC60
#define CXWnd__IsType_x                                            0x14056BCA0
#define CXWnd__Minimize_x                                          0x14056BDA0
#define CXWnd__ProcessTransition_x                                 0x14056CC70
#define CXWnd__Resize_x                                            0x14056CD80
#define CXWnd__Right_x                                             0x14056CE20
#define CXWnd__SetFocus_x                                          0x14056D1D0
#define CXWnd__SetFont_x                                           0x14056D220
#define CXWnd__SetKeyTooltip_x                                     0x14056D310
#define CXWnd__SetMouseOver_x                                      0x14056D450
#define CXWnd__SetParent_x                                         0x14056D4D0
#define CXWnd__StartFade_x                                         0x14056D900
#define CXWnd__vftable_x                                           0x140851388
#define CXWnd__CXWnd_x                                             0x140565570
#define CXWnd__dCXWnd_x                                            0x140565EA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405AFD70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140580430
#define CXWndManager__DrawCursor_x                                 0x140580710
#define CXWndManager__DrawWindows_x                                0x140580960
#define CXWndManager__GetKeyboardFlags_x                           0x140581020
#define CXWndManager__HandleKeyboardMsg_x                          0x140581060
#define CXWndManager__RemoveWnd_x                                  0x140584620

// CDBStr
#define CDBStr__GetString_x                                        0x14017C670

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140628860

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CCF40
#define CCharacterListWnd__EnterWorld_x                            0x1400CBC40
#define CCharacterListWnd__Quit_x                                  0x1400CCF20
#define CCharacterListWnd__UpdateList_x                            0x1400CDC40

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F7F00
#define ItemBase__CreateItemTagString_x                            0x1405F8980
#define ItemBase__GetImageNum_x                                    0x1405FAF50
#define ItemBase__GetItemValue_x                                   0x1405FCA10
#define ItemBase__IsEmpty_x                                        0x1405FE660
#define ItemBase__IsKeyRingItem_x                                  0x1405FEDA0
#define ItemBase__ValueSellMerchant_x                              0x140602E20
#define ItemClient__CanDrop_x                                      0x140299830
#define ItemClient__CanGoInBag_x                                   0x140299960
#define ItemClient__CreateItemClient_x                             0x140299C40
#define ItemClient__dItemClient_x                                  0x1402996A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019BCF0
#define EQ_LoadingS__Array_x                                       0x140AC0CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060EFD0
#define PcBase__GetCombatAbility_x                                 0x14060F670
#define PcBase__GetCombatAbilityTimer_x                            0x14060F710
#define PcBase__GetItemContainedRealEstateIds_x                    0x14060FE60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406107F0
#define PcClient__AlertInventoryChanged_x                          0x1402BBA40
#define PcClient__GetConLevel_x                                    0x1402BBFF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BE690
#define PcClient__HasLoreItem_x                                    0x1402BF790
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CC670
#define PcZoneClient__RemoveMyAffect_x                             0x1402CF1B0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402096D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140209880  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402099B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402098F0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140241CE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140176EA0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066B0E0
#define PlayerBase__CanSee1_x                                      0x14066B1B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14066B6E0
#define PlayerBase__HasProperty_x                                  0x14066B900
#define PlayerBase__IsTargetable_x                                 0x14066B9C0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DB0A0
#define PlayerClient__GetPcClient_x                                0x1402DD760
#define PlayerClient__PlayerClient_x                               0x1402D43F0
#define PlayerClient__SetNameSpriteState_x                         0x1402E0C00
#define PlayerClient__SetNameSpriteTint_x                          0x1402E1BC0
#define PlayerZoneClient__ChangeHeight_x                           0x1402EFC40
#define PlayerZoneClient__DoAttack_x                               0x1402F0930
#define PlayerZoneClient__GetLevel_x                               0x1402F4060
#define PlayerZoneClient__IsValidTeleport_x                        0x140244A90
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018ABA0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402E9A30  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402E9A60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402E9B10
#define PlayerManagerClient__CreatePlayer_x                        0x1402E9420
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066AD60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14029EBF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029E7F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029E860
#define KeypressHandler__ClearCommandStateArray_x                  0x14029EB80  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14029ED10
#define KeypressHandler__HandleKeyUp_x                             0x14029EE10
#define KeypressHandler__SaveKeymapping_x                          0x14029EA90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140626430  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140620FE0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C4DE0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CA680
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CCD70
#define PcZoneClient__RemovePetEffect_x                            0x1402CF2B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402CDA60
#define PcZoneClient__CanEquipItem_x                               0x1402C89A0
#define PcZoneClient__GetItemByID_x                                0x1402CB710
#define PcZoneClient__RemoveBuffEffect_x                           0x1402CF030
#define PcZoneClient__BandolierSwap_x                              0x1402C7980
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CCCC0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140249550

// IconCache
#define IconCache__GetIcon_x                                       0x14039B3A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140391C90
#define CContainerMgr__CloseContainer_x                            0x1403915D0
#define CContainerMgr__OpenExperimentContainer_x                   0x140392000

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14047C3D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140291B40

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14040DC00
#define CLootWnd__RequestLootSlot_x                                0x14040EBF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CBC30
#define EQ_Spell__SpellAffects_x                                   0x1401CCEF0
#define EQ_Spell__SpellAffectBase_x                                0x1401CCE50
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D59B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D5960
#define EQ_Spell__IsSPAStacking_x                                  0x1401CCB10
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CC6D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CBFA0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BE170

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404D6AD0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404D6B10
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404D6010
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404D55D0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404DDB70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401736B0
#define CTaskManager__GetTaskStatus_x                              0x1401737C0
#define CTaskManager__GetElementDescription_x                      0x140173340

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401C9FB0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C8DF0
#define EqSoundManager__SoundAssistPlay_x                          0x140312520  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140312850  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14056E6A0
#define CTextureAnimation__SetCurCell_x                            0x14056E9B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14028FDC0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063F480
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063F500
#define CharacterBase__IsExpansionFlag_x                           0x1401EBF30

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403723A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140372D00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140374160

// messages
#define msg_spell_worn_off_x                                       0x140200180
#define msg_new_text_x                                             0x1401FBB00
#define __msgTokenTextParam_x                                      0x1401F3910
#define msgTokenText_x                                             0x1401F3830

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140313EF0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140313E10

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679A20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140407090

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403974B0
#define CCursorAttachment__AttachToCursor1_x                       0x140395F30
#define CCursorAttachment__Deactivate_x                            0x1403979B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405A77B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405A79A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405A79B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140142020
#define CFindItemWnd__Update_x                                     0x1401429C0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013C4D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014B970
#define LootFiltersManager__GetItemFilterData_x                    0x14014C480
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014CD20
#define LootFiltersManager__SetItemLootFilter_x                    0x14014CFD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14045FA40

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067DEE0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030CCC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14038E080

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406434B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406433A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B0D50
#define CGroupWnd__UpdateDisplay_x                                 0x1403B0930

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FEE70
#define ItemBase__IsLoreEquipped_x                                 0x1405FEF00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B2250

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140241E40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140241DD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140241E10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403073E0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011CAD0
#define FactionManagerClient__HandleFactionMessage_x               0x14011CE80
#define FactionManagerClient__GetFactionStanding_x                 0x14011C2A0
#define FactionManagerClient__GetMaxFaction_x                      0x14011C2A0
#define FactionManagerClient__GetMinFaction_x                      0x14011C150

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AAF50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401281A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A4620
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A39A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A4440  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A43C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140318BF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403073E0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140209A40

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140561E40

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140083B10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140329E70

// AchievementManager
#define AchievementManager__Instance_x                             0x14008B020

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
