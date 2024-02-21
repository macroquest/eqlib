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

#define __ClientDate                                               20240216u
#define __ExpectedVersionDate                                     "Feb 16 2024"
#define __ExpectedVersionTime                                     "11:05:21"
#define __ActualVersionDate_x                                      0x140935720
#define __ActualVersionTime_x                                      0x140935710
#define __ActualVersionBuild_x                                     0x1408CC2B0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9120
#define __MemChecker1_x                                            0x140565110
#define __MemChecker4_x                                            0x140277AB0
#define __EncryptPad0_x                                            0x140D02E00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9C0
#define instEQZoneInfo_x                                           0x140E3BBB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F6B0
#define __gfMaxZoomCameraDistance_x                                0x1408CD520
#define __gfMaxCameraDistance_x                                    0x140A73690
#define __CurrentSocial_x                                          0x140BBE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CFA710
#define g_eqCommandStates_x                                        0x140CFB780
#define __CommandList_x                                            0x140CFB9B0
#define __ScreenMode_x                                             0x140D8350C
#define __gWorld_x                                                 0x140E33F10
#define __gpbCommandEvent_x                                        0x140E36404
#define __ServerHost_x                                             0x140E365E8
#define __Guilds_x                                                 0x140E3A570
#define __MouseEventTime_x                                         0x140EB0F28
#define DI8__MouseState_x                                          0x140EB50E0
#define __heqmain_x                                                0x140EB7578
#define DI8__Mouse_x                                               0x140EB7590
#define __HWnd_x                                                   0x140EB7598
#define __Mouse_x                                                  0x140EB75A0
#define DI8__Keyboard_x                                            0x140EB75C0
#define __LoginName_x                                              0x140EB7C9C
#define __CurrentMapLabel_x                                        0x140ECB2B0
#define __LabelCache_x                                             0x140ECBE80
#define __ChatFilterDefs_x                                         0x140A0CF80
#define Teleport_Table_Size_x                                      0x140E36490
#define Teleport_Table_x                                           0x140E33F40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E36900
#define pinstActiveBanker_x                                        0x140E33E60
#define pinstActiveCorpse_x                                        0x140E33E50
#define pinstActiveGMaster_x                                       0x140E33E58
#define pinstActiveMerchant_x                                      0x140E33E48
#define pinstAltAdvManager_x                                       0x140D84128
#define pinstCEverQuest_x                                          0x140EB5030
#define pinstCamActor_x                                            0x140D834F8
#define pinstCDBStr_x                                              0x140D82EE0
#define pinstCDisplay_x                                            0x140E35F58
#define pinstControlledPlayer_x                                    0x140E33EF0
#define pinstCResolutionHandler_x                                  0x14153C638
#define pinstCSidlManager_x                                        0x140EDD180
#define pinstCXWndManager_x                                        0x140EDD178
#define instDynamicZone_x                                          0x140E3A430 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3A47E
#define instExpeditionName_x                                       0x140E3A4BE
#define pinstDZMember_x                                            0x140E3A548
#define pinstDZTimerInfo_x                                         0x140E3A550
#define pinstEqLogin_x                                             0x140EB75E0
#define instTribute_x                                              0x140CF5D50
#define pinstEQSoundManager_x                                      0x140D844A8
#define pinstEQSpellStrings_x                                      0x140D67AF0
#define pinstSGraphicsEngine_x                                     0x14153C3B8
#define pinstLocalPC_x                                             0x140E33F30
#define pinstLocalPlayer_x                                         0x140E33E40
#define pinstCMercenaryClientManager_x                             0x140EB27C8
#define pinstModelPlayer_x                                         0x140E33E70
#define pinstRenderInterface_x                                     0x14153C3D0
#define pinstSkillMgr_x                                            0x140EB4470
#define pinstSpawnManager_x                                        0x140EB2B90
#define pinstSpellManager_x                                        0x140EB44D8
#define pinstStringTable_x                                         0x140E33F38
#define pinstSwitchManager_x                                       0x140E33DC0
#define pinstTarget_x                                              0x140E33EE8
#define pinstTaskMember_x                                          0x140CF5D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E33EF8
#define pinstTradeTarget_x                                         0x140E33E68
#define instTributeActive_x                                        0x140CF5D79
#define pinstViewActor_x                                           0x140D834F0
#define pinstWorldData_x                                           0x140E35F40
#define pinstPlayerPath_x                                          0x140EB2BB8
#define pinstTargetIndicator_x                                     0x140EB4588
#define EQObject_Top_x                                             0x140E33F18

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC8410
#define pinstCContainerMgr_x                                       0x140D83170
#define pinstCContextMenuManager_x                                 0x140EDCE60
#define pinstCInvSlotMgr_x                                         0x140D83168
#define pinstCItemDisplayManager_x                                 0x140ECAE80
#define pinstCPopupWndManager_x                                    0x140ECB710
#define pinstCSpellDisplayMgr_x                                    0x140ECBD60
#define pinstCTaskManager_x                                        0x140BBEC80
#define pinstEQSuiteTextureLoader_x                                0x140D0C500
#define pinstItemIconCache_x                                       0x140EC8770
#define pinstLootFiltersManager_x                                  0x140D82928
#define pinstGFViewListener_x                                      0x140EDC638


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402383A0
#define __CastRay_x                                                0x140230700
#define __CastRay2_x                                               0x140230400
#define __ConvertItemTags_x                                        0x140230B60
#define __CleanItemTags_x                                          0x140087DC0
#define __CreateCascadeMenuItems_x                                 0x140180DF0
#define __DoesFileExist_x                                          0x140568FC0
#define __EQGetTime_x                                              0x1405656C0
#define __ExecuteCmd_x                                             0x140207010
#define __FixHeading_x                                             0x140690E80
#define __FlushDxKeyboard_x                                        0x14032AFB0
#define __get_bearing_x                                            0x14023A590
#define __get_melee_range_x                                        0x14023A690
#define __GetAnimationCache_x                                      0x1403A8080
#define __GetGaugeValueFromEQ_x                                    0x1404DBE60
#define __GetLabelFromEQ_x                                         0x1404DD460
#define __GetXTargetType_x                                         0x140692160   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140690F00
#define __HelpPath_x                                               0x140EB0DF0   // Why?
#define __NewUIINI_x                                               0x1404E89C0   // Why?
#define __ProcessGameEvents_x                                      0x14026CFA0
#define __ProcessKeyboardEvents_x                                  0x14032C810
#define __ProcessMouseEvents_x                                     0x14026E4D0
#define __SaveColors_x                                             0x140190DB0
#define __STMLToText_x                                             0x14056D900
#define __WndProc_x                                                0x140329790
#define CMemoryMappedFile__SetFile_x                               0x1407C8DF0
#define DrawNetStatus_x                                            0x1402B75D0
#define Util__FastTime_x                                           0x140564C50
#define __eq_delete_x                                              0x1406982B4
#define __eq_new_x                                                 0x140698270
#define __CopyLayout_x                                             0x1402A5530
#define __ThrottleFrameRate_x                                      0x14025C855
#define __ThrottleFrameRateEnd_x                                   0x14025C8B5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BD80
#define CAAWnd__Update_x                                           0x14033C080
#define CAAWnd__UpdateSelected_x                                   0x14033D0C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BED0
#define AltAdvManager__IsAbilityReady_x                            0x14019C150
#define AltAdvManager__GetAAById_x                                 0x14019B7A0
#define AltAdvManager__CanTrainAbility_x                           0x14019B5D0
#define AltAdvManager__CanSeeAbility_x                             0x14019B290

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A60
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D18A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AF0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D24C0
#define CharacterZoneClient__CastSpell_x                           0x1400D2560
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E18B0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7490
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7650
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDB20
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC550  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6750
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5250
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF6E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE5B0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6920
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6FB0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8980
#define CharacterZoneClient__GetHPRegen_x                          0x1400EECF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7100
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF970
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D69A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0750
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6BA0
#define CharacterZoneClient__GetModCap_x                           0x1400F7D10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E40
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAF0
#define CharacterZoneClient__HasSkill_x                            0x1400F3740
#define CharacterZoneClient__HitBySpell_x                          0x1400D78F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB090
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F77F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D4060  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B40
#define CharacterZoneClient__Max_Mana_x                            0x1402D4280  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7FA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE440
#define CharacterZoneClient__SpellDuration_x                       0x1400DF140
#define CharacterZoneClient__TotalEffect_x                         0x1400E0490
#define CharacterZoneClient__UseSkill_x                            0x1400FD4C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A1C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403644F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360380
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035E690

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366BC0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B40

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389AB0
#define CChatWindowManager__InitContextMenu_x                      0x140389C40
#define CChatWindowManager__FreeChatWindow_x                       0x140388B30
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403917F0
#define CChatWindowManager__CreateChatWindow_x                     0x140388470

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105630

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392830
#define CChatWindow__Clear_x                                       0x1403936D0
#define CChatWindow__WndNotification_x                             0x1403948C0
#define CChatWindow__AddHistory_x                                  0x1403931D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A2870
#define CContextMenu__RemoveMenuItem_x                             0x1405A2C50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2C20
#define CContextMenu__CheckMenuItem_x                              0x1405A2A90
#define CContextMenu__SetMenuItem_x                                0x1405A2C70
#define CContextMenu__AddSeparator_x                               0x1405A29D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140594780
#define CContextMenuManager__RemoveMenu_x                          0x140594D60
#define CContextMenuManager__PopupMenu_x                           0x140594AA0
#define CContextMenuManager__Flush_x                               0x140594800
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039FFE0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14065A260
#define CChatService__GetFriendName_x                              0x14065A270

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140585780
#define CComboWnd__Draw_x                                          0x140585870
#define CComboWnd__GetCurChoice_x                                  0x140585B40  // unused
#define CComboWnd__GetListRect_x                                   0x140585BE0
#define CComboWnd__InsertChoice_x                                  0x140585F00
#define CComboWnd__SetColors_x                                     0x140586290
#define CComboWnd__SetChoice_x                                     0x140586250
#define CComboWnd__GetItemCount_x                                  0x140585BD0
#define CComboWnd__GetCurChoiceText_x                              0x140585B80  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585B10
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585FC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DD50
#define CContainerWnd__SetContainer_x                              0x1403F3360
#define CContainerWnd__vftable_x                                   0x1409A9080

// CDisplay
#define CDisplay__cameraType_x                                     0x140D83294
#define CDisplay__ZoneMainUI_x                                     0x1405BC9E0
#define CDisplay__PreZoneMainUI_x                                  0x14018DCA0
#define CDisplay__CleanGameUI_x                                    0x14017FED0
#define CDisplay__GetClickedActor_x                                0x140184040
#define CDisplay__GetUserDefinedColor_x                            0x140184CB0
#define CDisplay__InitCharSelectUI_x                               0x140184F60
#define CDisplay__ReloadUI_x                                       0x14018FF90
#define CDisplay__WriteTextHD2_x                                   0x140197000
#define CDisplay__TrueDistance_x                                   0x140196CB0
#define CDisplay__SetViewActor_x                                   0x1401934D0
#define CDisplay__GetFloorHeight_x                                 0x1401842A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401967A0
#define CDisplay__RealRender_World_x                               0x14018F370

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6B90
#define CEditWnd__DrawCaret_x                                      0x1405B8740  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8BC0
#define CEditWnd__GetCaretPt_x                                     0x1405B8E40  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8E80
#define CEditWnd__GetDisplayString_x                               0x1405B90E0
#define CEditWnd__GetHorzOffset_x                                  0x1405B9320
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B9460
#define CEditWnd__GetSelStartPt_x                                  0x1405B9740  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9590
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA2F0
#define CEditWnd__ReplaceSelection_x                               0x1405BA690
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BAB30
#define CEditWnd__SetEditable_x                                    0x1405BADC0
#define CEditWnd__SetWindowText_x                                  0x1405BADF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D950
#define CEverQuest__ClickedPlayer_x                                0x140253440
#define CEverQuest__CreateTargetIndicator_x                        0x140253D00
#define CEverQuest__DoTellWindow_x                                 0x140105340 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105C00 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F310
#define CEverQuest__dsp_chat_x                                     0x140104D70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402894D0
#define CEverQuest__Emote_x                                        0x14025FCF0
#define CEverQuest__GetBodyTypeDesc_x                              0x140260A90
#define CEverQuest__GetClassDesc_x                                 0x140260AF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260EC0
#define CEverQuest__GetDeityDesc_x                                 0x140261170
#define CEverQuest__GetLangDesc_x                                  0x1402615A0
#define CEverQuest__GetRaceDesc_x                                  0x140261940
#define CEverQuest__InterpretCmd_x                                 0x140263270
#define CEverQuest__LeftClickedOnPlayer_x                          0x140278130
#define CEverQuest__LMouseUp_x                                     0x140264C40
#define CEverQuest__RightClickedOnPlayer_x                         0x140275950
#define CEverQuest__RMouseUp_x                                     0x14026F050
#define CEverQuest__SetGameState_x                                 0x14027A670
#define CEverQuest__UPCNotificationFlush_x                         0x14027FFA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402648B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140270400
#define CEverQuest__ReportSuccessfulHit_x                          0x140271220

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2440

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D50
#define CGuild__GetGuildName_x                                     0x1400C0D90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4990

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029B000
#define CHotButton__SetCheck_x                                     0x14029B2D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC0A0
#define CInvSlotMgr__MoveItem_x                                    0x1403EC280
#define CInvSlotMgr__SelectSlot_x                                  0x1403EDC30

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E92A0
#define CInvSlot__SliderComplete_x                                 0x1403EA7F0
#define CInvSlot__GetItemBase_x                                    0x1403E4ED0
#define CInvSlot__UpdateItem_x                                     0x1403EACB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EEFC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140410490
#define CItemDisplayWnd__UpdateStrings_x                           0x140412DE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040CF80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E6E0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F8A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D89A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA690

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513C50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404096B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401484B0

// CLabel
#define CLabel__UpdateText_x                                       0x14041A1D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405890D0
#define CListWnd__dCListWnd_x                                      0x140589510
#define CListWnd__vftable_x                                        0x140A8EC98
#define CListWnd__AddColumn_x                                      0x140589BB0
#define CListWnd__AddColumn1_x                                     0x140589C50
#define CListWnd__AddLine_x                                        0x140589DB0
#define CListWnd__AddString_x                                      0x14058A340
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058A8B0
#define CListWnd__CalculateVSBRange_x                              0x14058AB90
#define CListWnd__ClearSel_x                                       0x14058AD40
#define CListWnd__ClearAllSel_x                                    0x14058ACE0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058ADA0
#define CListWnd__Compare_x                                        0x14058AF60
#define CListWnd__Draw_x                                           0x14058B430
#define CListWnd__DrawColumnSeparators_x                           0x14058BFD0
#define CListWnd__DrawHeader_x                                     0x14058C090
#define CListWnd__DrawItem_x                                       0x14058C750
#define CListWnd__DrawLine_x                                       0x14058D0C0
#define CListWnd__DrawSeparator_x                                  0x14058D580
#define CListWnd__EnableLine_x                                     0x14058D9A0
#define CListWnd__EnsureVisible_x                                  0x14058DA00
#define CListWnd__ExtendSel_x                                      0x14058DB00
#define CListWnd__GetColumnMinWidth_x                              0x14058DE30
#define CListWnd__GetColumnWidth_x                                 0x14058DEB0
#define CListWnd__GetCurSel_x                                      0x14058DFB0
#define CListWnd__GetItemData_x                                    0x14058E330
#define CListWnd__GetItemHeight_x                                  0x14058E370
#define CListWnd__GetItemRect_x                                    0x14058E590
#define CListWnd__GetItemText_x                                    0x14058E830
#define CListWnd__GetSelList_x                                     0x14058EA80
#define CListWnd__GetSeparatorRect_x                               0x14058EC70
#define CListWnd__InsertLine_x                                     0x1405900C0
#define CListWnd__RemoveLine_x                                     0x140590730
#define CListWnd__SetColors_x                                      0x140590AF0
#define CListWnd__SetColumnJustification_x                         0x140590B10
#define CListWnd__SetColumnLabel_x                                 0x140590B90
#define CListWnd__SetColumnWidth_x                                 0x140590D30
#define CListWnd__SetCurSel_x                                      0x140590E00
#define CListWnd__SetItemColor_x                                   0x140591070
#define CListWnd__SetItemData_x                                    0x140591110
#define CListWnd__SetItemText_x                                    0x140591350
#define CListWnd__Sort_x                                           0x140591760
#define CListWnd__ToggleSel_x                                      0x1405918D0
#define CListWnd__SetColumnsSizable_x                              0x140590D80
#define CListWnd__SetItemWnd_x                                     0x140591480
#define CListWnd__GetItemWnd_x                                     0x14058EA10
#define CListWnd__SetItemIcon_x                                    0x140591150
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A680
#define CListWnd__SetVScrollPos_x                                  0x1405916C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D4B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B68
#define MapViewMap__Clear_x                                        0x14042F030
#define MapViewMap__SetZoom_x                                      0x140435680
#define MapViewMap__HandleLButtonDown_x                            0x1404321C0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456E60  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D410
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045DBB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404613D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140460720
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465660

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636E50
#define CPacketScrambler__hton_x                                   0x140636E40

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B2000
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1F40
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B2630
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B23E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B1340
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B12D0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B0910

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB9F0
#define CSidlManager__CreateXWnd_x                                 0x1404CBBB0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576D80
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576C60
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C1150 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576F00
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405763B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140576480
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140576690
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405775A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405777D0
#define CSidlScreenWnd__GetChildItem_x                             0x140577970
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577BC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581D10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577F30
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405782A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578B70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140579460
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC4D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579AC0
#define CSidlScreenWnd__StoreIniVis_x                              0x14057A2B0
#define CSidlScreenWnd__vftable_x                                  0x140A8DF08
#define CSidlScreenWnd__WndNotification_x                          0x14057A300

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140314640 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314AE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314A10
#define CSkillMgr__IsActivatedSkill_x                              0x140314E90
#define CSkillMgr__IsCombatSkill_x                                 0x140314ED0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314E00
#define CSkillMgr__GetSkillLastUsed_x                              0x140314A60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DD370
#define CSliderWnd__SetValue_x                                     0x140592A40
#define CSliderWnd__SetNumTicks_x                                  0x1405928C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D2010

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405971E0
#define CStmlWnd__CalculateHSBRange_x                              0x1405816C0
#define CStmlWnd__CalculateVSBRange_x                              0x140598080
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598B70
#define CStmlWnd__ForceParseNow_x                                  0x140598C10
#define CStmlWnd__GetVisibleText_x                                 0x1405992E0
#define CStmlWnd__MakeStmlColorTag_x                               0x14059B020
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059B060
#define CStmlWnd__SetSTMLText_x                                    0x1405A2020
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A21D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A2560

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592E10
#define CTabWnd__DrawCurrentPage_x                                 0x140592EB0
#define CTabWnd__DrawTab_x                                         0x140593280
#define CTabWnd__GetTabRect_x                                      0x1405938F0
#define CTabWnd__InsertPage_x                                      0x140593BC0
#define CTabWnd__RemovePage_x                                      0x140593E50
#define CTabWnd__SetPage_x                                         0x140593FB0
#define CTabWnd__UpdatePage_x                                      0x1405942B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BB250
#define CPageWnd__SetTabText_x                                     0x1405BB2C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA4A0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A99C0
#define CTextureFont__DrawWrappedText1_x                           0x1405A98D0
#define CTextureFont__DrawWrappedText2_x                           0x1405A9AF0
#define CTextureFont__GetTextExtent_x                              0x1405A9EA0
#define CTextureFont__GetHeight_x                                  0x1405A9E60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BF8B0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575F90

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE70
#define CXStr__gCXStrAccess_x                                      0x140EDC2D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057CD30
#define CXWnd__ClrFocus_x                                          0x14057D020
#define CXWnd__Destroy_x                                           0x14057D1A0
#define CXWnd__DoAllDrawing_x                                      0x14057D2B0
#define CXWnd__DrawColoredRect_x                                   0x14057DA80
#define CXWnd__DrawTooltip_x                                       0x14057F0F0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057F1A0
#define CXWnd__GetChildItem_x                                      0x14057FAA0
#define CXWnd__GetChildWndAt_x                                     0x14057FB60
#define CXWnd__GetClientRect_x                                     0x14057FE10
#define CXWnd__GetClientClipRect_x                                 0x14057FCC0
#define CXWnd__GetRelativeRect_x                                   0x140581800
#define CXWnd__GetScreenClipRect_x                                 0x140581910
#define CXWnd__GetScreenRect_x                                     0x140581A90
#define CXWnd__GetTooltipRect_x                                    0x140581C10
#define CXWnd__IsActive_x                                          0x1405821D0
#define CXWnd__IsDescendantOf_x                                    0x140582200
#define CXWnd__IsReallyVisible_x                                   0x140582270
#define CXWnd__IsType_x                                            0x1405822B0
#define CXWnd__Minimize_x                                          0x1405823B0
#define CXWnd__ProcessTransition_x                                 0x140583290
#define CXWnd__Resize_x                                            0x1405833B0
#define CXWnd__Right_x                                             0x140583450
#define CXWnd__SetFocus_x                                          0x140583800
#define CXWnd__SetFont_x                                           0x140583850
#define CXWnd__SetKeyTooltip_x                                     0x140583940
#define CXWnd__SetMouseOver_x                                      0x140583A80
#define CXWnd__SetParent_x                                         0x140583B00
#define CXWnd__StartFade_x                                         0x140583F50
#define CXWnd__vftable_x                                           0x140A8E4F8
#define CXWnd__CXWnd_x                                             0x14057B8C0
#define CXWnd__dCXWnd_x                                            0x14057C210

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C6310

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3E00
#define CXWndManager__DrawCursor_x                                 0x1405A40E0
#define CXWndManager__DrawWindows_x                                0x1405A4340
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4A10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4A50
#define CXWndManager__RemoveWnd_x                                  0x1405A8080

// CDBStr
#define CDBStr__GetString_x                                        0x14017E040

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063FF90

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE740
#define CCharacterListWnd__EnterWorld_x                            0x1400CD440
#define CCharacterListWnd__Quit_x                                  0x1400CE720
#define CCharacterListWnd__UpdateList_x                            0x1400CF430

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060E7D0
#define ItemBase__CreateItemTagString_x                            0x14060F250
#define ItemBase__GetImageNum_x                                    0x140611830
#define ItemBase__GetItemValue_x                                   0x140613670
#define ItemBase__IsEmpty_x                                        0x140615270
#define ItemBase__IsKeyRingItem_x                                  0x1406159B0
#define ItemBase__ValueSellMerchant_x                              0x140619B50
#define ItemClient__CanDrop_x                                      0x14029D5F0
#define ItemClient__CanGoInBag_x                                   0x14029D720
#define ItemClient__CreateItemClient_x                             0x14029DA00
#define ItemClient__dItemClient_x                                  0x14029D460

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D670
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140626290
#define PcBase__GetCombatAbility_x                                 0x140626930
#define PcBase__GetCombatAbilityTimer_x                            0x1406269D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140627120
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627C10
#define PcClient__AlertInventoryChanged_x                          0x1402BFBB0
#define PcClient__GetConLevel_x                                    0x1402C01D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2900
#define PcClient__HasLoreItem_x                                    0x1402C38D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1190
#define PcZoneClient__RemoveMyAffect_x                             0x1402D5100

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B6D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B880  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B9E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B920  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244B60  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178870

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140683930
#define PlayerBase__CanSee1_x                                      0x140683A00
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683EC0
#define PlayerBase__HasProperty_x                                  0x1406840F0
#define PlayerBase__IsTargetable_x                                 0x1406841B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1BE0
#define PlayerClient__GetPcClient_x                                0x1402E4410
#define PlayerClient__PlayerClient_x                               0x1402DAEA0
#define PlayerClient__SetNameSpriteState_x                         0x1402E7860
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8820
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6DC0
#define PlayerZoneClient__DoAttack_x                               0x1402F7AD0
#define PlayerZoneClient__GetLevel_x                               0x1402FB200
#define PlayerZoneClient__IsValidTeleport_x                        0x1402478F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C520

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F06E0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0790  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0890
#define PlayerManagerClient__CreatePlayer_x                        0x1402F01B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406834F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2A50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2650
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A26C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A29E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2B70
#define KeypressHandler__HandleKeyUp_x                             0x1402A2C70
#define KeypressHandler__SaveKeymapping_x                          0x1402A28F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063DAE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140638580

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9EA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF1C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1890
#define PcZoneClient__RemovePetEffect_x                            0x1402D5200
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2480
#define PcZoneClient__CanEquipItem_x                               0x1402CD4E0
#define PcZoneClient__GetItemByID_x                                0x1402D0260
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4F80
#define PcZoneClient__BandolierSwap_x                              0x1402CC4C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C420

// IconCache
#define IconCache__GetIcon_x                                       0x1403A80B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CB00
#define CContainerMgr__CloseContainer_x                            0x14039C440
#define CContainerMgr__OpenExperimentContainer_x                   0x14039CE80

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404906A0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402957D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404214C0
#define CLootWnd__RequestLootSlot_x                                0x1404224D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC980
#define EQ_Spell__SpellAffects_x                                   0x1401CDC40
#define EQ_Spell__SpellAffectBase_x                                0x1401CDBA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7010
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6FC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD860
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD420
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCCF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF990

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EC110
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB820
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EB050

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F37D0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401750F0
#define CTaskManager__GetTaskStatus_x                              0x140175200
#define CTaskManager__GetElementDescription_x                      0x140174D80

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CACF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9B30
#define EqSoundManager__SoundAssistPlay_x                          0x140319C90  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319FD0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584D10
#define CTextureAnimation__SetCurCell_x                            0x140585020

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293A30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406579A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657A20
#define CharacterBase__IsExpansionFlag_x                           0x1401EDAD0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037ADC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B730
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CC80

// messages
#define msg_spell_worn_off_x                                       0x140202050
#define msg_new_text_x                                             0x1401FD910
#define __msgTokenTextParam_x                                      0x1401F5720
#define msgTokenText_x                                             0x1401F5640

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B680
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B5A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140692540

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A920

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A17F0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4730
#define CCursorAttachment__RemoveAttachment_x                      0x1403A49E0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BDD50
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BDF40
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BDF50

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143720
#define CFindItemWnd__Update_x                                     0x1401440C0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DBE0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CFA0
#define LootFiltersManager__GetItemFilterData_x                    0x14014DAB0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E350
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E600

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140473510

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140697B00
#define CResolutionHandler__GetWindowedStyle_x                     0x1403141A0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398E50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065BD20  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065BC10  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BDB40
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD720

// ItemBase
#define ItemBase__IsLore_x                                         0x140615A80
#define ItemBase__IsLoreEquipped_x                                 0x140615B10

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B57E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244CC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244C50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244C90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E7B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB00
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEB0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D2D0
#define FactionManagerClient__GetMaxFaction_x                      0x14011D2D0
#define FactionManagerClient__GetMinFaction_x                      0x14011D180

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC670

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129290

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5FD0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5350
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5DF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5D70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403207A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E7B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020BA70

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A8F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331CE0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C640

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640B10
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
