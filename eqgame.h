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

#define __ClientDate                                               20230713u
#define __ExpectedVersionDate                                     "Jul 13 2023"
#define __ExpectedVersionTime                                     "15:43:48"
#define __ActualVersionDate_x                                      0x140811898
#define __ActualVersionTime_x                                      0x140811888
#define __ActualVersionBuild_x                                     0x140806660

// Memory Protection
#define __MemChecker0_x                                            0x1402A6050
#define __MemChecker1_x                                            0x14054FF60
#define __MemChecker4_x                                            0x1402752E0
#define __EncryptPad0_x                                            0x140ACC870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C088A0
#define instEQZoneInfo_x                                           0x140C08A94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020E040
#define __gfMaxZoomCameraDistance_x                                0x140807810
#define __gfMaxCameraDistance_x                                    0x1408467D0
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
#define __allowslashcommand_x                                      0x140235FF0
#define __CastRay_x                                                0x14022E810
#define __CastRay2_x                                               0x14022E510
#define __ConvertItemTags_x                                        0x14022EC10
#define __CleanItemTags_x                                          0x140086C40
#define __CreateCascadeMenuItems_x                                 0x14017F900
#define __DoesFileExist_x                                          0x140554A70
#define __EQGetTime_x                                              0x140550510
#define __ExecuteCmd_x                                             0x140205A40
#define __FixHeading_x                                             0x14067A430
#define __FlushDxKeyboard_x                                        0x1403245F0
#define __get_bearing_x                                            0x1402381E0
#define __get_melee_range_x                                        0x1402382E0
#define __GetAnimationCache_x                                      0x14039C870
#define __GetGaugeValueFromEQ_x                                    0x1404C8000
#define __GetLabelFromEQ_x                                         0x1404C95F0
#define __GetXTargetType_x                                         0x14067B750   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14067A4B0
#define __HelpPath_x                                               0x140C7DCA0   // Why?
#define __NewUIINI_x                                               0x1404D4A30   // Why?
#define __ProcessGameEvents_x                                      0x14026A6D0
#define __ProcessKeyboardEvents_x                                  0x140325E50
#define __ProcessMouseEvents_x                                     0x14026BBD0
#define __SaveColors_x                                             0x14018FA00
#define __STMLToText_x                                             0x140565FB0
#define __WndProc_x                                                0x140322D60
#define CMemoryMappedFile__SetFile_x                               0x1407B11C0
#define DrawNetStatus_x                                            0x1402B4E30
#define Util__FastTime_x                                           0x1405512D0
#define __eq_delete_x                                              0x1406A45C4
#define __eq_new_x                                                 0x1406A4580
#define __CopyLayout_x                                             0x1402A2480
#define __ThrottleFrameRate_x                                      0x140259FAC
#define __ThrottleFrameRateEnd_x                                   0x14025A00C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140335280
#define CAAWnd__Update_x                                           0x140335580
#define CAAWnd__UpdateSelected_x                                   0x140336540

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A8E60
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A1790
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407ED7A8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400A9710

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019AA30
#define AltAdvManager__IsAbilityReady_x                            0x14019ACB0
#define AltAdvManager__GetAAById_x                                 0x14019A300
#define AltAdvManager__CanTrainAbility_x                           0x14019A130
#define AltAdvManager__CanSeeAbility_x                             0x140199DF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CF4F0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0320
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0570
#define CharacterZoneClient__CanUseItem_x                          0x1400E4CF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D0F40
#define CharacterZoneClient__CastSpell_x                           0x1400D0FE0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E07C0
#define CharacterZoneClient__Cur_HP_x                              0x1400E63D0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6590
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D3FF0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ECD90
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FBCF0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D54E0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E41C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EE930
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400ED800
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D56B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C5B70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7540
#define CharacterZoneClient__GetHPRegen_x                          0x1400EDF40
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6040
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EEBC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D57B0
#define CharacterZoneClient__GetManaRegen_x                        0x1400EF920
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D59C0
#define CharacterZoneClient__GetModCap_x                           0x1400F7060
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D5A60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D5C70
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CA6B0
#define CharacterZoneClient__HasSkill_x                            0x1400F2920
#define CharacterZoneClient__HitBySpell_x                          0x1400D6720
#define CharacterZoneClient__IsStackBlocked_x                      0x1400D9FB0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F6B50
#define CharacterZoneClient__Max_Endurance_x                       0x1402CEF90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F6E90
#define CharacterZoneClient__Max_Mana_x                            0x1402CF1B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F72F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DD400
#define CharacterZoneClient__SpellDuration_x                       0x1400DE130
#define CharacterZoneClient__TotalEffect_x                         0x1400DF470
#define CharacterZoneClient__UseSkill_x                            0x1400FCC40


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403537D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035DA70

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140359960
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403589F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140360120

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140854EF8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140381650
#define CChatWindowManager__InitContextMenu_x                      0x1403817E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403808A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140388000
#define CChatWindowManager__CreateChatWindow_x                     0x1403801E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140104DD0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140388FF0
#define CChatWindow__Clear_x                                       0x140389E30
#define CChatWindow__WndNotification_x                             0x14038B020
#define CChatWindow__AddHistory_x                                  0x140389930

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14058E1A0
#define CContextMenu__RemoveMenuItem_x                             0x14058E590
#define CContextMenu__RemoveAllMenuItems_x                         0x14058E560
#define CContextMenu__CheckMenuItem_x                              0x14058E3D0
#define CContextMenu__SetMenuItem_x                                0x14058E5B0
#define CContextMenu__AddSeparator_x                               0x14058E310

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140580080
#define CContextMenuManager__RemoveMenu_x                          0x140580660
#define CContextMenuManager__PopupMenu_x                           0x1405803A0
#define CContextMenuManager__Flush_x                               0x140580100
#define CContextMenuManager__CreateDefaultMenu_x                   0x140396550

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140643E30
#define CChatService__GetFriendName_x                              0x140643E40

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140570FC0
#define CComboWnd__Draw_x                                          0x1405710C0
#define CComboWnd__GetCurChoice_x                                  0x1405713A0  // unused
#define CComboWnd__GetListRect_x                                   0x140571440
#define CComboWnd__InsertChoice_x                                  0x140571780
#define CComboWnd__SetColors_x                                     0x140571B10
#define CComboWnd__SetChoice_x                                     0x140571AD0
#define CComboWnd__GetItemCount_x                                  0x140571430
#define CComboWnd__GetCurChoiceText_x                              0x1405713E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140571370
#define CComboWnd__InsertChoiceAtIndex_x                           0x140571840

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140394330
#define CContainerWnd__SetContainer_x                              0x1403E1200
#define CContainerWnd__vftable_x                                   0x140820B78

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4FF1C
#define CDisplay__ZoneMainUI_x                                     0x1405A8300
#define CDisplay__PreZoneMainUI_x                                  0x14018C850
#define CDisplay__CleanGameUI_x                                    0x14017EA00
#define CDisplay__GetClickedActor_x                                0x140182B90
#define CDisplay__GetUserDefinedColor_x                            0x1401837A0
#define CDisplay__InitCharSelectUI_x                               0x140183A50
#define CDisplay__ReloadUI_x                                       0x14018EB30
#define CDisplay__WriteTextHD2_x                                   0x140195C80
#define CDisplay__TrueDistance_x                                   0x140195930
#define CDisplay__SetViewActor_x                                   0x140192170
#define CDisplay__GetFloorHeight_x                                 0x140182DF0
#define CDisplay__ToggleScreenshotMode_x                           0x140195430
#define CDisplay__RealRender_World_x                               0x14018DF20

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405B2650
#define CEditWnd__DrawCaret_x                                      0x1405A3FF0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405A44A0
#define CEditWnd__GetCaretPt_x                                     0x1405A4720  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405A4760
#define CEditWnd__GetDisplayString_x                               0x1405A49D0
#define CEditWnd__GetHorzOffset_x                                  0x1405A4C10
#define CEditWnd__GetLineForPrintableChar_x                        0x1405A4D60
#define CEditWnd__GetSelStartPt_x                                  0x1405A5040  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405A4E90
#define CEditWnd__PointFromPrintableChar_x                         0x1405A5BF0
#define CEditWnd__ReplaceSelection_x                               0x1405A5FA0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405A6440
#define CEditWnd__SetEditable_x                                    0x1405A66D0
#define CEditWnd__SetWindowText_x                                  0x1405A6700

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025AF80
#define CEverQuest__ClickedPlayer_x                                0x140250E90
#define CEverQuest__CreateTargetIndicator_x                        0x140251750
#define CEverQuest__DoTellWindow_x                                 0x140104AE0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401053A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025C9B0
#define CEverQuest__dsp_chat_x                                     0x140104520 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140286BE0
#define CEverQuest__Emote_x                                        0x14025D360
#define CEverQuest__GetBodyTypeDesc_x                              0x14025E100
#define CEverQuest__GetClassDesc_x                                 0x14025E160
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025E530
#define CEverQuest__GetDeityDesc_x                                 0x14025E7E0
#define CEverQuest__GetLangDesc_x                                  0x14025EC10
#define CEverQuest__GetRaceDesc_x                                  0x14025EFB0
#define CEverQuest__InterpretCmd_x                                 0x1402608C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140275960
#define CEverQuest__LMouseUp_x                                     0x140262260
#define CEverQuest__RightClickedOnPlayer_x                         0x1402731D0
#define CEverQuest__RMouseUp_x                                     0x14026C760
#define CEverQuest__SetGameState_x                                 0x140277E90
#define CEverQuest__UPCNotificationFlush_x                         0x14027D690 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140261EE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026DB00
#define CEverQuest__ReportSuccessfulHit_x                          0x14026E9B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A6C20

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400BF900
#define CGuild__GetGuildName_x                                     0x1400BF940

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403C8EB0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140297F60
#define CHotButton__SetCheck_x                                     0x140298230

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403DA420
#define CInvSlotMgr__MoveItem_x                                    0x1403DA5F0
#define CInvSlotMgr__SelectSlot_x                                  0x1403DBF50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403D7970
#define CInvSlot__SliderComplete_x                                 0x1403D8CA0
#define CInvSlot__GetItemBase_x                                    0x1403D4340
#define CInvSlot__UpdateItem_x                                     0x1403D9150

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403DCDA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403FE3B0
#define CItemDisplayWnd__UpdateStrings_x                           0x140400D90
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403FADD0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403FC610
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403FD7C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404C4B80
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404C6760

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404FFC30

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403F7510

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401472C0

// CLabel
#define CLabel__UpdateText_x                                       0x140408160

// CListWnd
#define CListWnd__CListWnd_x                                       0x140574950
#define CListWnd__dCListWnd_x                                      0x140574DA0
#define CListWnd__vftable_x                                        0x140853068
#define CListWnd__AddColumn_x                                      0x140575440
#define CListWnd__AddColumn1_x                                     0x1405754E0
#define CListWnd__AddLine_x                                        0x140575640
#define CListWnd__AddString_x                                      0x140575BD0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140576140
#define CListWnd__CalculateVSBRange_x                              0x140576420
#define CListWnd__ClearSel_x                                       0x1405765D0
#define CListWnd__ClearAllSel_x                                    0x140576570
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140576630
#define CListWnd__Compare_x                                        0x1405767F0
#define CListWnd__Draw_x                                           0x140576CC0
#define CListWnd__DrawColumnSeparators_x                           0x140577870
#define CListWnd__DrawHeader_x                                     0x140577930
#define CListWnd__DrawItem_x                                       0x140578010
#define CListWnd__DrawLine_x                                       0x140578990
#define CListWnd__DrawSeparator_x                                  0x140578E50
#define CListWnd__EnableLine_x                                     0x140579270
#define CListWnd__EnsureVisible_x                                  0x1405792D0
#define CListWnd__ExtendSel_x                                      0x1405793D0
#define CListWnd__GetColumnMinWidth_x                              0x140579700
#define CListWnd__GetColumnWidth_x                                 0x140579780
#define CListWnd__GetCurSel_x                                      0x140579880
#define CListWnd__GetItemData_x                                    0x140579C00
#define CListWnd__GetItemHeight_x                                  0x140579C40
#define CListWnd__GetItemRect_x                                    0x140579E60
#define CListWnd__GetItemText_x                                    0x14057A100
#define CListWnd__GetSelList_x                                     0x14057A350
#define CListWnd__GetSeparatorRect_x                               0x14057A540
#define CListWnd__InsertLine_x                                     0x14057B9C0
#define CListWnd__RemoveLine_x                                     0x14057C030
#define CListWnd__SetColors_x                                      0x14057C400
#define CListWnd__SetColumnJustification_x                         0x14057C420
#define CListWnd__SetColumnLabel_x                                 0x14057C4A0
#define CListWnd__SetColumnWidth_x                                 0x14057C640
#define CListWnd__SetCurSel_x                                      0x14057C710
#define CListWnd__SetItemColor_x                                   0x14057C980
#define CListWnd__SetItemData_x                                    0x14057CA20
#define CListWnd__SetItemText_x                                    0x14057CC60
#define CListWnd__Sort_x                                           0x14057D070
#define CListWnd__ToggleSel_x                                      0x14057D1E0
#define CListWnd__SetColumnsSizable_x                              0x14057C690
#define CListWnd__SetItemWnd_x                                     0x14057CD90
#define CListWnd__GetItemWnd_x                                     0x14057A2E0
#define CListWnd__SetItemIcon_x                                    0x14057CA60
#define CListWnd__CalculateCustomWindowPositions_x                 0x140575F10
#define CListWnd__SetVScrollPos_x                                  0x14057CFD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14041B3B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082D590
#define MapViewMap__Clear_x                                        0x14041CF30
#define MapViewMap__SetZoom_x                                      0x140423570
#define MapViewMap__HandleLButtonDown_x                            0x1404200B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140444CC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14044B2A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14044BA50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14044F270
#define CMerchantWnd__SelectBuySellSlot_x                          0x14044E5B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140453520

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140621D40
#define CPacketScrambler__hton_x                                   0x140621D30

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14059D880
#define CSidlManagerBase__FindAnimation1_x                         0x14059D7C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14059DEB0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14059DC60
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14059CBC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14059CB50
#define CSidlManagerBase__CreateXWnd_x                             0x14059C190

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404B7E10
#define CSidlManager__CreateXWnd_x                                 0x1404B7FD0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14055FFC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405600D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405ACC10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140560250
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14055F750
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14055F820
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14055F9F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405608F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140560B20
#define CSidlScreenWnd__GetChildItem_x                             0x140560CC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140560F10
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14056D610 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140561280
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405615F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140561EA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140562790
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA9260
#define CSidlScreenWnd__StoreIniInfo_x                             0x140562DD0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405635C0
#define CSidlScreenWnd__vftable_x                                  0x140852250
#define CSidlScreenWnd__WndNotification_x                          0x140563610

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030E230 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030E630 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030E570
#define CSkillMgr__IsActivatedSkill_x                              0x14030E9D0
#define CSkillMgr__IsCombatSkill_x                                 0x14030EA10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404D4AA0
#define CSliderWnd__SetValue_x                                     0x14057E350
#define CSliderWnd__SetNumTicks_x                                  0x14057E1D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404BE440

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140582AC0
#define CStmlWnd__CalculateHSBRange_x                              0x14056CFE0
#define CStmlWnd__CalculateVSBRange_x                              0x140583960
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140584460
#define CStmlWnd__ForceParseNow_x                                  0x140584500
#define CStmlWnd__GetVisibleText_x                                 0x140584BD0
#define CStmlWnd__MakeStmlColorTag_x                               0x140586930
#define CStmlWnd__MakeWndNotificationTag_x                         0x140586970
#define CStmlWnd__SetSTMLText_x                                    0x14058D940
#define CStmlWnd__StripFirstSTMLLines_x                            0x14058DAF0
#define CStmlWnd__UpdateHistoryString_x                            0x14058DE80

// CTabWnd
#define CTabWnd__Draw_x                                            0x14057E720
#define CTabWnd__DrawCurrentPage_x                                 0x14057E7C0
#define CTabWnd__DrawTab_x                                         0x14057EB90
#define CTabWnd__GetTabRect_x                                      0x14057F1F0
#define CTabWnd__InsertPage_x                                      0x14057F4C0
#define CTabWnd__RemovePage_x                                      0x14057F750
#define CTabWnd__SetPage_x                                         0x14057F8B0
#define CTabWnd__UpdatePage_x                                      0x14057FBB0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405A6B60
#define CPageWnd__SetTabText_x                                     0x1405A6BD0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9020  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9430


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140595280
#define CTextureFont__DrawWrappedText1_x                           0x140595190
#define CTextureFont__DrawWrappedText2_x                           0x1405953B0
#define CTextureFont__GetTextExtent_x                              0x140595760
#define CTextureFont__GetHeight_x                                  0x140595720

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405AB370

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14055F330

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD5860
#define CXStr__gCXStrAccess_x                                      0x140CA90A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140568700
#define CXWnd__ClrFocus_x                                          0x140568940
#define CXWnd__Destroy_x                                           0x140568AC0
#define CXWnd__DoAllDrawing_x                                      0x140568BC0
#define CXWnd__DrawColoredRect_x                                   0x140569390
#define CXWnd__DrawTooltip_x                                       0x14056AA00
#define CXWnd__DrawTooltipAtPoint_x                                0x14056AAB0
#define CXWnd__GetChildItem_x                                      0x14056B3C0
#define CXWnd__GetChildWndAt_x                                     0x14056B480
#define CXWnd__GetClientRect_x                                     0x14056B740
#define CXWnd__GetClientClipRect_x                                 0x14056B5F0
#define CXWnd__GetRelativeRect_x                                   0x14056D120
#define CXWnd__GetScreenClipRect_x                                 0x14056D220
#define CXWnd__GetScreenRect_x                                     0x14056D3A0
#define CXWnd__GetTooltipRect_x                                    0x14056D510
#define CXWnd__IsActive_x                                          0x14056DAD0
#define CXWnd__IsDescendantOf_x                                    0x14056DB00
#define CXWnd__IsReallyVisible_x                                   0x14056DB70
#define CXWnd__IsType_x                                            0x14056DBB0
#define CXWnd__Minimize_x                                          0x14056DCB0
#define CXWnd__ProcessTransition_x                                 0x14056EB20
#define CXWnd__Resize_x                                            0x14056EC30
#define CXWnd__Right_x                                             0x14056ECD0
#define CXWnd__SetFocus_x                                          0x14056F090
#define CXWnd__SetFont_x                                           0x14056F0E0
#define CXWnd__SetKeyTooltip_x                                     0x14056F1F0
#define CXWnd__SetMouseOver_x                                      0x14056F330
#define CXWnd__SetParent_x                                         0x14056F3B0
#define CXWnd__StartFade_x                                         0x14056F7F0
#define CXWnd__vftable_x                                           0x1408528D0
#define CXWnd__CXWnd_x                                             0x1405672D0
#define CXWnd__dCXWnd_x                                            0x140567C00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405B1DD0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x14058F750
#define CXWndManager__DrawCursor_x                                 0x14058FA30
#define CXWndManager__DrawWindows_x                                0x14058FC80
#define CXWndManager__GetKeyboardFlags_x                           0x140590340
#define CXWndManager__HandleKeyboardMsg_x                          0x140590380
#define CXWndManager__RemoveWnd_x                                  0x140593940

// CDBStr
#define CDBStr__GetString_x                                        0x14017CB70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14062AC60

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CD2D0
#define CCharacterListWnd__EnterWorld_x                            0x1400CBFD0
#define CCharacterListWnd__Quit_x                                  0x1400CD2B0
#define CCharacterListWnd__UpdateList_x                            0x1400CDFD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405FA100
#define ItemBase__CreateItemTagString_x                            0x1405FAB70
#define ItemBase__GetImageNum_x                                    0x1405FD100
#define ItemBase__GetItemValue_x                                   0x1405FEFD0
#define ItemBase__IsEmpty_x                                        0x140600B40
#define ItemBase__IsKeyRingItem_x                                  0x140601250
#define ItemBase__ValueSellMerchant_x                              0x140605240
#define ItemClient__CanDrop_x                                      0x14029A520
#define ItemClient__CanGoInBag_x                                   0x14029A650
#define ItemClient__CreateItemClient_x                             0x14029A930
#define ItemClient__dItemClient_x                                  0x14029A390

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019C1D0
#define EQ_LoadingS__Array_x                                       0x140AC1CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406113D0
#define PcBase__GetCombatAbility_x                                 0x140611A70
#define PcBase__GetCombatAbilityTimer_x                            0x140611B10
#define PcBase__GetItemContainedRealEstateIds_x                    0x140612260
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140612BF0
#define PcClient__AlertInventoryChanged_x                          0x1402BC8C0
#define PcClient__GetConLevel_x                                    0x1402BCE80  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BF520
#define PcClient__HasLoreItem_x                                    0x1402C0630
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CD4C0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D0060

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020A0B0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020A260  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020A3C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020A300  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402427C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401773C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066D5C0
#define PlayerBase__CanSee1_x                                      0x14066D690
#define PlayerBase__GetVisibilityLineSegment_x                     0x14066DB50
#define PlayerBase__HasProperty_x                                  0x14066DD70
#define PlayerBase__IsTargetable_x                                 0x14066DE30
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DBFB0
#define PlayerClient__GetPcClient_x                                0x1402DE670
#define PlayerClient__PlayerClient_x                               0x1402D5300
#define PlayerClient__SetNameSpriteState_x                         0x1402E1B20
#define PlayerClient__SetNameSpriteTint_x                          0x1402E2AE0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F0C30
#define PlayerZoneClient__DoAttack_x                               0x1402F1940
#define PlayerZoneClient__GetLevel_x                               0x1402F50B0
#define PlayerZoneClient__IsValidTeleport_x                        0x140245550
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018B0E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EA980  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EA9B0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EAA60
#define PlayerManagerClient__CreatePlayer_x                        0x1402EA370
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066D240

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14029F9A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029F5A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029F610
#define KeypressHandler__ClearCommandStateArray_x                  0x14029F930  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14029FAC0
#define KeypressHandler__HandleKeyUp_x                             0x14029FBC0
#define KeypressHandler__SaveKeymapping_x                          0x14029F840  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140628830  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406233E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C5C80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CB510
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CDBC0
#define PcZoneClient__RemovePetEffect_x                            0x1402D0160
#define PcZoneClient__HasAlternateAbility_x                        0x1402CE8B0
#define PcZoneClient__CanEquipItem_x                               0x1402C9820
#define PcZoneClient__GetItemByID_x                                0x1402CC570
#define PcZoneClient__RemoveBuffEffect_x                           0x1402CFEE0
#define PcZoneClient__BandolierSwap_x                              0x1402C8800
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CDB10

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024A080

// IconCache
#define IconCache__GetIcon_x                                       0x14039C8A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140393180
#define CContainerMgr__CloseContainer_x                            0x140392AC0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403934F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14047DE00

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140292800

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14040F430
#define CLootWnd__RequestLootSlot_x                                0x140410420

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC270
#define EQ_Spell__SpellAffects_x                                   0x1401CD530
#define EQ_Spell__SpellAffectBase_x                                0x1401CD490
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D5E50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D5E00
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD150
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CCD10
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC5E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BE550

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404D8840  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404D8880
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404D7D80
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404D7330

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404DF8E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140173BE0
#define CTaskManager__GetTaskStatus_x                              0x140173CF0
#define CTaskManager__GetElementDescription_x                      0x140173870

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA5E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9420
#define EqSoundManager__SoundAssistPlay_x                          0x140313690  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403139D0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140570550
#define CTextureAnimation__SetCurCell_x                            0x140570860

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140290A80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140641890
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140641910
#define CharacterBase__IsExpansionFlag_x                           0x1401EC890

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403738A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140374200
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140375670

// messages
#define msg_spell_worn_off_x                                       0x140200B40
#define msg_new_text_x                                             0x1401FC4B0
#define __msgTokenTextParam_x                                      0x1401F4280
#define msgTokenText_x                                             0x1401F41A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140315080
#define SpellManager__GetSpellByGroupAndRank_x                     0x140314FA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14067BB30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404088B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140398990
#define CCursorAttachment__AttachToCursor1_x                       0x140397410
#define CCursorAttachment__Deactivate_x                            0x140398E90

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405A9810
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405A9A00
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405A9A10

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140142540
#define CFindItemWnd__Update_x                                     0x140142EE0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013C9D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014BEA0
#define LootFiltersManager__GetItemFilterData_x                    0x14014C9B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014D250
#define LootFiltersManager__SetItemLootFilter_x                    0x14014D500

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404613F0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067FFC0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030DD90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14038F580

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406458C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406457B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B21D0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B1DB0

// ItemBase
#define ItemBase__IsLore_x                                         0x140601320
#define ItemBase__IsLoreEquipped_x                                 0x1406013B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B3060

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140242920
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402428B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402428F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140308510

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011CF50
#define FactionManagerClient__HandleFactionMessage_x               0x14011D300
#define FactionManagerClient__GetFactionStanding_x                 0x14011C720
#define FactionManagerClient__GetMaxFaction_x                      0x14011C720
#define FactionManagerClient__GetMinFaction_x                      0x14011C5D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AB280

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140128620

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A4B20
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A3EA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A4940  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A48C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140319DB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140308510

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020A450

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140563C00

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140083E00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032B320

// AchievementManager
#define AchievementManager__Instance_x                             0x14008B310

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
