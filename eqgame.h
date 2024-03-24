/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#define __ClientDate                                               20240319u
#define __ExpectedVersionDate                                     "Mar 19 2024"
#define __ExpectedVersionTime                                     "12:41:33"
#define __ActualVersionDate_x                                      0x140935730
#define __ActualVersionTime_x                                      0x140935720
#define __ActualVersionBuild_x                                     0x1408CC2C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9590
#define __MemChecker1_x                                            0x140565090
#define __MemChecker4_x                                            0x140277F70
#define __EncryptPad0_x                                            0x140D02E20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9E0
#define instEQZoneInfo_x                                           0x140E3BBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F640
#define __gfMaxZoomCameraDistance_x                                0x1408CD530
#define __gfMaxCameraDistance_x                                    0x140A736A0
#define __CurrentSocial_x                                          0x140BBE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CFA710
#define g_eqCommandStates_x                                        0x140CFB780
#define __CommandList_x                                            0x140CFB9B0
#define __ScreenMode_x                                             0x140D83534
#define __gWorld_x                                                 0x140E33F30
#define __gpbCommandEvent_x                                        0x140E36424
#define __ServerHost_x                                             0x140E36608
#define __Guilds_x                                                 0x140E3A590
#define __MouseEventTime_x                                         0x140EB0F48
#define DI8__MouseState_x                                          0x140EB5100
#define __heqmain_x                                                0x140EB7598
#define DI8__Mouse_x                                               0x140EB75B0
#define __HWnd_x                                                   0x140EB75B8
#define __Mouse_x                                                  0x140EB75C0
#define DI8__Keyboard_x                                            0x140EB75E0
#define __LoginName_x                                              0x140EB7CBC
#define __CurrentMapLabel_x                                        0x140ECB4D0
#define __LabelCache_x                                             0x140ECC0A0
#define __ChatFilterDefs_x                                         0x140A0CF90
#define Teleport_Table_Size_x                                      0x140E364B0
#define Teleport_Table_x                                           0x140E33F60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E36920
#define pinstActiveBanker_x                                        0x140E33E80
#define pinstActiveCorpse_x                                        0x140E33E70
#define pinstActiveGMaster_x                                       0x140E33E78
#define pinstActiveMerchant_x                                      0x140E33E68
#define pinstAltAdvManager_x                                       0x140D84148
#define pinstCEverQuest_x                                          0x140EB5050
#define pinstCamActor_x                                            0x140D83520
#define pinstCDBStr_x                                              0x140D82F00
#define pinstCDisplay_x                                            0x140E35F70
#define pinstControlledPlayer_x                                    0x140E33F10
#define pinstCResolutionHandler_x                                  0x14153C858
#define pinstCSidlManager_x                                        0x140EDD3A0
#define pinstCXWndManager_x                                        0x140EDD398
#define instDynamicZone_x                                          0x140E3A450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3A49E
#define instExpeditionName_x                                       0x140E3A4DE
#define pinstDZMember_x                                            0x140E3A568
#define pinstDZTimerInfo_x                                         0x140E3A570
#define pinstEqLogin_x                                             0x140EB7600
#define instTribute_x                                              0x140CF5D50
#define pinstEQSoundManager_x                                      0x140D844C8
#define pinstEQSpellStrings_x                                      0x140D67B10
#define pinstSGraphicsEngine_x                                     0x14153C5D8
#define pinstLocalPC_x                                             0x140E33F50
#define pinstLocalPlayer_x                                         0x140E33E60
#define pinstCMercenaryClientManager_x                             0x140EB27E8
#define pinstModelPlayer_x                                         0x140E33E90
#define pinstRenderInterface_x                                     0x14153C5F0
#define pinstSkillMgr_x                                            0x140EB4490
#define pinstSpawnManager_x                                        0x140EB2BB0
#define pinstSpellManager_x                                        0x140EB44F8
#define pinstStringTable_x                                         0x140E33F58
#define pinstSwitchManager_x                                       0x140E33DE0
#define pinstTarget_x                                              0x140E33F08
#define pinstTaskMember_x                                          0x140CF5D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E33F18
#define pinstTradeTarget_x                                         0x140E33E88
#define instTributeActive_x                                        0x140CF5D79
#define pinstViewActor_x                                           0x140D83518
#define pinstWorldData_x                                           0x140E35F60
#define pinstPlayerPath_x                                          0x140EB2BD8
#define pinstTargetIndicator_x                                     0x140EB45A8
#define EQObject_Top_x                                             0x140E33F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC8628
#define pinstCContainerMgr_x                                       0x140D83198
#define pinstCContextMenuManager_x                                 0x140EDD080
#define pinstCInvSlotMgr_x                                         0x140D83190
#define pinstCItemDisplayManager_x                                 0x140ECB0A0
#define pinstCPopupWndManager_x                                    0x140ECB930
#define pinstCSpellDisplayMgr_x                                    0x140ECBF80
#define pinstCTaskManager_x                                        0x140BBEC80
#define pinstEQSuiteTextureLoader_x                                0x140D0C520
#define pinstItemIconCache_x                                       0x140EC8988
#define pinstLootFiltersManager_x                                  0x140D82948
#define pinstGFViewListener_x                                      0x140EDC858


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140238850
#define __CastRay_x                                                0x140230BC0
#define __CastRay2_x                                               0x1402308C0
#define __ConvertItemTags_x                                        0x140231020
#define __CleanItemTags_x                                          0x140087DB0
#define __CreateCascadeMenuItems_x                                 0x140180CB0
#define __DoesFileExist_x                                          0x140568F40
#define __EQGetTime_x                                              0x140565640
#define __ExecuteCmd_x                                             0x140206FA0
#define __FixHeading_x                                             0x140690E80
#define __FlushDxKeyboard_x                                        0x14032B350
#define __get_bearing_x                                            0x14023AA40
#define __get_melee_range_x                                        0x14023AB40
#define __GetAnimationCache_x                                      0x1403A8690
#define __GetGaugeValueFromEQ_x                                    0x1404DBE70
#define __GetLabelFromEQ_x                                         0x1404DD470
#define __GetXTargetType_x                                         0x140692160   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140690F00
#define __HelpPath_x                                               0x140EB0E10   // Why?
#define __NewUIINI_x                                               0x1404E89E0   // Why?
#define __ProcessGameEvents_x                                      0x14026D460
#define __ProcessKeyboardEvents_x                                  0x14032CBB0
#define __ProcessMouseEvents_x                                     0x14026E990
#define __SaveColors_x                                             0x140190C80
#define __STMLToText_x                                             0x14056D880
#define __WndProc_x                                                0x140329B30
#define CMemoryMappedFile__SetFile_x                               0x1407C8DC0
#define DrawNetStatus_x                                            0x1402B79F0
#define Util__FastTime_x                                           0x140564BD0
#define __eq_delete_x                                              0x1406982B4
#define __eq_new_x                                                 0x140698270
#define __CopyLayout_x                                             0x1402A59C0
#define __ThrottleFrameRate_x                                      0x14025CCDC
#define __ThrottleFrameRateEnd_x                                   0x14025CD3C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033C400
#define CAAWnd__Update_x                                           0x14033C700
#define CAAWnd__UpdateSelected_x                                   0x14033D740

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BDD0
#define AltAdvManager__IsAbilityReady_x                            0x14019C050
#define AltAdvManager__GetAAById_x                                 0x14019B6A0
#define AltAdvManager__CanTrainAbility_x                           0x14019B4D0
#define AltAdvManager__CanSeeAbility_x                             0x14019B190

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1850
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D10
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2470
#define CharacterZoneClient__CastSpell_x                           0x1400D2510
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1840
#define CharacterZoneClient__Cur_HP_x                              0x1400E7420
#define CharacterZoneClient__Cur_Mana_x                            0x1400E75E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDAA0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC4D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6700
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E51E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF660
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE530
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D68D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8940
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEC70
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7090
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF8F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6950
#define CharacterZoneClient__GetManaRegen_x                        0x1400F06D0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6B50
#define CharacterZoneClient__GetModCap_x                           0x1400F7C90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6BE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6DF0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAB0
#define CharacterZoneClient__HasSkill_x                            0x1400F36C0
#define CharacterZoneClient__HitBySpell_x                          0x1400D78A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB040
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7770
#define CharacterZoneClient__Max_Endurance_x                       0x1402D43F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7AC0
#define CharacterZoneClient__Max_Mana_x                            0x1402D4610  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F20
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE3D0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF0D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0420
#define CharacterZoneClient__UseSkill_x                            0x1400FD440


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A870

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364BA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360A30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035FAC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140367250

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14038A0A0
#define CChatWindowManager__InitContextMenu_x                      0x14038A230
#define CChatWindowManager__FreeChatWindow_x                       0x140389120
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391DE0
#define CChatWindowManager__CreateChatWindow_x                     0x140388A60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105580

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392E20
#define CChatWindow__Clear_x                                       0x140393CC0
#define CChatWindow__WndNotification_x                             0x140394EB0
#define CChatWindow__AddHistory_x                                  0x1403937C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A2930
#define CContextMenu__RemoveMenuItem_x                             0x1405A2D20
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2CF0
#define CContextMenu__CheckMenuItem_x                              0x1405A2B60
#define CContextMenu__SetMenuItem_x                                0x1405A2D40
#define CContextMenu__AddSeparator_x                               0x1405A2AA0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140594820
#define CContextMenuManager__RemoveMenu_x                          0x140594DF0
#define CContextMenuManager__PopupMenu_x                           0x140594B30
#define CContextMenuManager__Flush_x                               0x1405948A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A05E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659EE0
#define CChatService__GetFriendName_x                              0x140659EF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405855A0
#define CComboWnd__Draw_x                                          0x1405856A0
#define CComboWnd__GetCurChoice_x                                  0x140585980  // unused
#define CComboWnd__GetListRect_x                                   0x140585A20
#define CComboWnd__InsertChoice_x                                  0x140585D60
#define CComboWnd__SetColors_x                                     0x1405860F0
#define CComboWnd__SetChoice_x                                     0x1405860B0
#define CComboWnd__GetItemCount_x                                  0x140585A10
#define CComboWnd__GetCurChoiceText_x                              0x1405859C0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585950
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585E20

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039E350
#define CContainerWnd__SetContainer_x                              0x1403F3860
#define CContainerWnd__vftable_x                                   0x1409A9090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D832BC
#define CDisplay__ZoneMainUI_x                                     0x1405BCA90
#define CDisplay__PreZoneMainUI_x                                  0x14018DB70
#define CDisplay__CleanGameUI_x                                    0x14017FD90
#define CDisplay__GetClickedActor_x                                0x140183F00
#define CDisplay__GetUserDefinedColor_x                            0x140184B70
#define CDisplay__InitCharSelectUI_x                               0x140184E20
#define CDisplay__ReloadUI_x                                       0x14018FE60
#define CDisplay__WriteTextHD2_x                                   0x140196EF0
#define CDisplay__TrueDistance_x                                   0x140196BA0
#define CDisplay__SetViewActor_x                                   0x1401933A0
#define CDisplay__GetFloorHeight_x                                 0x140184160
#define CDisplay__ToggleScreenshotMode_x                           0x140196690
#define CDisplay__RealRender_World_x                               0x14018F240

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6C40
#define CEditWnd__DrawCaret_x                                      0x1405B8780  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8C40
#define CEditWnd__GetCaretPt_x                                     0x1405B8EC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8F00
#define CEditWnd__GetDisplayString_x                               0x1405B9170
#define CEditWnd__GetHorzOffset_x                                  0x1405B93B0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B9500
#define CEditWnd__GetSelStartPt_x                                  0x1405B97E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9630
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA390
#define CEditWnd__ReplaceSelection_x                               0x1405BA740
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BABE0
#define CEditWnd__SetEditable_x                                    0x1405BAE70
#define CEditWnd__SetWindowText_x                                  0x1405BAEA0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025DDF0
#define CEverQuest__ClickedPlayer_x                                0x140253910
#define CEverQuest__CreateTargetIndicator_x                        0x1402541D0
#define CEverQuest__DoTellWindow_x                                 0x140105290 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105B50 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F7B0
#define CEverQuest__dsp_chat_x                                     0x140104CC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289990
#define CEverQuest__Emote_x                                        0x140260190
#define CEverQuest__GetBodyTypeDesc_x                              0x140260F40
#define CEverQuest__GetClassDesc_x                                 0x140260FA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140261370
#define CEverQuest__GetDeityDesc_x                                 0x140261620
#define CEverQuest__GetLangDesc_x                                  0x140261A50
#define CEverQuest__GetRaceDesc_x                                  0x140261DF0
#define CEverQuest__InterpretCmd_x                                 0x140263720
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402785F0
#define CEverQuest__LMouseUp_x                                     0x1402650F0
#define CEverQuest__RightClickedOnPlayer_x                         0x140275E10
#define CEverQuest__RMouseUp_x                                     0x14026F510
#define CEverQuest__SetGameState_x                                 0x14027AB30
#define CEverQuest__UPCNotificationFlush_x                         0x140280460 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264D60
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402708C0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402716E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2A50

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D10
#define CGuild__GetGuildName_x                                     0x1400C0D50

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4EF0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029B4B0
#define CHotButton__SetCheck_x                                     0x14029B780

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC600
#define CInvSlotMgr__MoveItem_x                                    0x1403EC7E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EE150

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E9830
#define CInvSlot__SliderComplete_x                                 0x1403EAD80
#define CInvSlot__GetItemBase_x                                    0x1403E5470
#define CInvSlot__UpdateItem_x                                     0x1403EB230

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EF4E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404107B0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404130D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040D2E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040EA30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040FBE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D89A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA690

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513BD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409A20

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148400

// CLabel
#define CLabel__UpdateText_x                                       0x14041A4C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140588F30
#define CListWnd__dCListWnd_x                                      0x140589380
#define CListWnd__vftable_x                                        0x140A8ECA8
#define CListWnd__AddColumn_x                                      0x140589A20
#define CListWnd__AddColumn1_x                                     0x140589AC0
#define CListWnd__AddLine_x                                        0x140589C20
#define CListWnd__AddString_x                                      0x14058A1B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058A720
#define CListWnd__CalculateVSBRange_x                              0x14058AA00
#define CListWnd__ClearSel_x                                       0x14058ABB0
#define CListWnd__ClearAllSel_x                                    0x14058AB50
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058AC10
#define CListWnd__Compare_x                                        0x14058ADD0
#define CListWnd__Draw_x                                           0x14058B2A0
#define CListWnd__DrawColumnSeparators_x                           0x14058BE50
#define CListWnd__DrawHeader_x                                     0x14058BF10
#define CListWnd__DrawItem_x                                       0x14058C5F0
#define CListWnd__DrawLine_x                                       0x14058CF70
#define CListWnd__DrawSeparator_x                                  0x14058D430
#define CListWnd__EnableLine_x                                     0x14058D850
#define CListWnd__EnsureVisible_x                                  0x14058D8B0
#define CListWnd__ExtendSel_x                                      0x14058D9B0
#define CListWnd__GetColumnMinWidth_x                              0x14058DCE0
#define CListWnd__GetColumnWidth_x                                 0x14058DD60
#define CListWnd__GetCurSel_x                                      0x14058DE60
#define CListWnd__GetItemData_x                                    0x14058E1E0
#define CListWnd__GetItemHeight_x                                  0x14058E220
#define CListWnd__GetItemRect_x                                    0x14058E440
#define CListWnd__GetItemText_x                                    0x14058E6E0
#define CListWnd__GetSelList_x                                     0x14058E930
#define CListWnd__GetSeparatorRect_x                               0x14058EB20
#define CListWnd__InsertLine_x                                     0x14058FF90
#define CListWnd__RemoveLine_x                                     0x140590600
#define CListWnd__SetColors_x                                      0x1405909C0
#define CListWnd__SetColumnJustification_x                         0x1405909E0
#define CListWnd__SetColumnLabel_x                                 0x140590A60
#define CListWnd__SetColumnWidth_x                                 0x140590C00
#define CListWnd__SetCurSel_x                                      0x140590CD0
#define CListWnd__SetItemColor_x                                   0x140590F40
#define CListWnd__SetItemData_x                                    0x140590FE0
#define CListWnd__SetItemText_x                                    0x140591220
#define CListWnd__Sort_x                                           0x140591630
#define CListWnd__ToggleSel_x                                      0x1405917A0
#define CListWnd__SetColumnsSizable_x                              0x140590C50
#define CListWnd__SetItemWnd_x                                     0x140591350
#define CListWnd__GetItemWnd_x                                     0x14058E8C0
#define CListWnd__SetItemIcon_x                                    0x140591020
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A4F0
#define CListWnd__SetVScrollPos_x                                  0x140591590

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D750

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B78
#define MapViewMap__Clear_x                                        0x14042F2C0
#define MapViewMap__SetZoom_x                                      0x140435910
#define MapViewMap__HandleLButtonDown_x                            0x140432450

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456F80  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D520
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045DCC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404614C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140460810
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465740

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636A90
#define CPacketScrambler__hton_x                                   0x140636A80

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B2060
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1FA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B2690
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B2440
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B13A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B1330
#define CSidlManagerBase__CreateXWnd_x                             0x1405B0990

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB9E0
#define CSidlManager__CreateXWnd_x                                 0x1404CBBA0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576CF0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576BE0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C1200 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576E70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140576330
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140576400
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140576610
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140577510
#define CSidlScreenWnd__EnableIniStorage_x                         0x140577740
#define CSidlScreenWnd__GetChildItem_x                             0x1405778E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577B30
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581BB0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577EA0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140578210
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578AC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405793B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC6F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405799F0
#define CSidlScreenWnd__StoreIniVis_x                              0x14057A1E0
#define CSidlScreenWnd__vftable_x                                  0x140A8DF18
#define CSidlScreenWnd__WndNotification_x                          0x14057A230

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403149F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314E90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314DC0
#define CSkillMgr__IsActivatedSkill_x                              0x140315240
#define CSkillMgr__IsCombatSkill_x                                 0x140315280
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403151B0
#define CSkillMgr__GetSkillLastUsed_x                              0x140314E10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140592110
#define CSliderWnd__SetValue_x                                     0x140592920
#define CSliderWnd__SetNumTicks_x                                  0x1405927A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D2010

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140597270
#define CStmlWnd__CalculateHSBRange_x                              0x140581580
#define CStmlWnd__CalculateVSBRange_x                              0x140598190
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598C00
#define CStmlWnd__ForceParseNow_x                                  0x140598CA0
#define CStmlWnd__GetVisibleText_x                                 0x140599370
#define CStmlWnd__MakeStmlColorTag_x                               0x14059B0D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059B110
#define CStmlWnd__SetSTMLText_x                                    0x1405A20E0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A2290
#define CStmlWnd__UpdateHistoryString_x                            0x1405A2620

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592ED0
#define CTabWnd__DrawCurrentPage_x                                 0x140592F70
#define CTabWnd__DrawTab_x                                         0x140593340
#define CTabWnd__GetTabRect_x                                      0x1405939B0
#define CTabWnd__InsertPage_x                                      0x140593C80
#define CTabWnd__RemovePage_x                                      0x140593F00
#define CTabWnd__SetPage_x                                         0x140594060
#define CTabWnd__UpdatePage_x                                      0x140594360

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BB2F0
#define CPageWnd__SetTabText_x                                     0x1405BB360

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA470  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA880


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A9A40
#define CTextureFont__DrawWrappedText1_x                           0x1405A9950
#define CTextureFont__DrawWrappedText2_x                           0x1405A9B70
#define CTextureFont__GetTextExtent_x                              0x1405A9F20
#define CTextureFont__GetHeight_x                                  0x1405A9EE0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BF960

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575F10

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE90
#define CXStr__gCXStrAccess_x                                      0x140EDC4F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057CC50
#define CXWnd__ClrFocus_x                                          0x14057CF40
#define CXWnd__Destroy_x                                           0x14057D0C0
#define CXWnd__DoAllDrawing_x                                      0x14057D1D0
#define CXWnd__DrawColoredRect_x                                   0x14057D980
#define CXWnd__DrawTooltip_x                                       0x14057EFE0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057F090
#define CXWnd__GetChildItem_x                                      0x14057F9A0
#define CXWnd__GetChildWndAt_x                                     0x14057FA60
#define CXWnd__GetClientRect_x                                     0x14057FD00
#define CXWnd__GetClientClipRect_x                                 0x14057FBC0
#define CXWnd__GetRelativeRect_x                                   0x1405816B0
#define CXWnd__GetScreenClipRect_x                                 0x1405817B0
#define CXWnd__GetScreenRect_x                                     0x140581930
#define CXWnd__GetTooltipRect_x                                    0x140581AB0
#define CXWnd__IsActive_x                                          0x140582060
#define CXWnd__IsDescendantOf_x                                    0x140582090
#define CXWnd__IsReallyVisible_x                                   0x140582100
#define CXWnd__IsType_x                                            0x140582140
#define CXWnd__Minimize_x                                          0x140582240
#define CXWnd__ProcessTransition_x                                 0x1405830F0
#define CXWnd__Resize_x                                            0x140583200
#define CXWnd__Right_x                                             0x1405832A0
#define CXWnd__SetFocus_x                                          0x140583650
#define CXWnd__SetFont_x                                           0x1405836A0
#define CXWnd__SetKeyTooltip_x                                     0x140583790
#define CXWnd__SetMouseOver_x                                      0x1405838D0
#define CXWnd__SetParent_x                                         0x140583950
#define CXWnd__StartFade_x                                         0x140583D90
#define CXWnd__vftable_x                                           0x140A8E508
#define CXWnd__CXWnd_x                                             0x14057B7F0
#define CXWnd__dCXWnd_x                                            0x14057C140

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C63C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3EF0
#define CXWndManager__DrawCursor_x                                 0x1405A41D0
#define CXWndManager__DrawWindows_x                                0x1405A4430
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4B00
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4B40
#define CXWndManager__RemoveWnd_x                                  0x1405A8110

// CDBStr
#define CDBStr__GetString_x                                        0x14017DF00

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063FBF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE6F0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD3F0
#define CCharacterListWnd__Quit_x                                  0x1400CE6D0
#define CCharacterListWnd__UpdateList_x                            0x1400CF3E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060E850
#define ItemBase__CreateItemTagString_x                            0x14060F2A0
#define ItemBase__GetImageNum_x                                    0x140611860
#define ItemBase__GetItemValue_x                                   0x140613310
#define ItemBase__IsEmpty_x                                        0x140614F20
#define ItemBase__IsKeyRingItem_x                                  0x140615650
#define ItemBase__ValueSellMerchant_x                              0x140619810
#define ItemClient__CanDrop_x                                      0x14029DA80
#define ItemClient__CanGoInBag_x                                   0x14029DBB0
#define ItemClient__CreateItemClient_x                             0x14029DE90
#define ItemClient__dItemClient_x                                  0x14029D8F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D570
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625EF0
#define PcBase__GetCombatAbility_x                                 0x140626590
#define PcBase__GetCombatAbilityTimer_x                            0x140626630
#define PcBase__GetItemContainedRealEstateIds_x                    0x140626D80
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627870
#define PcClient__AlertInventoryChanged_x                          0x1402BFFD0
#define PcClient__GetConLevel_x                                    0x1402C05F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2D20
#define PcClient__HasLoreItem_x                                    0x1402C3CE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1560
#define PcZoneClient__RemoveMyAffect_x                             0x1402D5490

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B660  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B810  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B970  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B8B0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140245030  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178790

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406835B0
#define PlayerBase__CanSee1_x                                      0x140683680
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683B40
#define PlayerBase__HasProperty_x                                  0x140683D70
#define PlayerBase__IsTargetable_x                                 0x140683E30
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1F70
#define PlayerClient__GetPcClient_x                                0x1402E47A0
#define PlayerClient__PlayerClient_x                               0x1402DB240
#define PlayerClient__SetNameSpriteState_x                         0x1402E7BF0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8BB0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F7160
#define PlayerZoneClient__DoAttack_x                               0x1402F7E70
#define PlayerZoneClient__GetLevel_x                               0x1402FB5A0
#define PlayerZoneClient__IsValidTeleport_x                        0x140247DC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C3F0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0A80  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0B30  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0C30
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0550
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140683170

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2EE0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2AE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2B50
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2E70  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A3000
#define KeypressHandler__HandleKeyUp_x                             0x1402A3100
#define KeypressHandler__SaveKeymapping_x                          0x1402A2D80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D730  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406381C0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402CA2A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF5A0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1C50
#define PcZoneClient__RemovePetEffect_x                            0x1402D5590
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2820
#define PcZoneClient__CanEquipItem_x                               0x1402CD8D0
#define PcZoneClient__GetItemByID_x                                0x1402D0630
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D5310
#define PcZoneClient__BandolierSwap_x                              0x1402CC8B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C8F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A86C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039D100
#define CContainerMgr__CloseContainer_x                            0x14039CA40
#define CContainerMgr__OpenExperimentContainer_x                   0x14039D480

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140490750

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295C90

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404217A0
#define CLootWnd__RequestLootSlot_x                                0x1404227B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC8A0
#define EQ_Spell__SpellAffects_x                                   0x1401CDB60
#define EQ_Spell__SpellAffectBase_x                                0x1401CDAC0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6F70
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD780
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD340
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCC10

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF950

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EC0E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB7F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EB030

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F3790  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175020
#define CTaskManager__GetTaskStatus_x                              0x140175130
#define CTaskManager__GetElementDescription_x                      0x140174CB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAC10
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A50
#define EqSoundManager__SoundAssistPlay_x                          0x14031A040  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14031A380  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584B30
#define CTextureAnimation__SetCurCell_x                            0x140584E40

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293EF0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140657620
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406576A0
#define CharacterBase__IsExpansionFlag_x                           0x1401EDA70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037B3E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037BD50
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037D290

// messages
#define msg_spell_worn_off_x                                       0x140201FE0
#define msg_new_text_x                                             0x1401FD8A0
#define __msgTokenTextParam_x                                      0x1401F56A0
#define msgTokenText_x                                             0x1401F55C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031BA30
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B950

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140692540

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041AC10

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1DE0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4D40
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4FF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BDE00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BDFF0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BE000

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401436A0
#define CFindItemWnd__Update_x                                     0x140144040
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DB70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CEF0
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E2A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E550

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404735D0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140697B00
#define CResolutionHandler__GetWindowedStyle_x                     0x140314550

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140399440

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B9A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B890  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BE0B0
#define CGroupWnd__UpdateDisplay_x                                 0x1403BDC90

// ItemBase
#define ItemBase__IsLore_x                                         0x140615720
#define ItemBase__IsLoreEquipped_x                                 0x1406157B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5C10

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140245190
#define EQPlacedItemManager__GetItemByGuid_x                       0x140245120
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140245160

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030EB30

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DA70
#define FactionManagerClient__HandleFactionMessage_x               0x14011DE20
#define FactionManagerClient__GetFactionStanding_x                 0x14011D240
#define FactionManagerClient__GetMaxFaction_x                      0x14011D240
#define FactionManagerClient__GetMinFaction_x                      0x14011D0F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC650

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129210

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5ED0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5250
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5CF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5C70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320B40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030EB30

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020BA00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A820

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C60

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140332370

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C630

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640770
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
