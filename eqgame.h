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

#define __ClientDate                                               20240222u
#define __ExpectedVersionDate                                     "Feb 22 2024"
#define __ExpectedVersionTime                                     "17:26:11"
#define __ActualVersionDate_x                                      0x140935720
#define __ActualVersionTime_x                                      0x140935710
#define __ActualVersionBuild_x                                     0x1408CC2B0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9030
#define __MemChecker1_x                                            0x140565020
#define __MemChecker4_x                                            0x1402779B0
#define __EncryptPad0_x                                            0x140D02E00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9C0
#define instEQZoneInfo_x                                           0x140E3BBB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F5E0
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
#define __allowslashcommand_x                                      0x1402382D0
#define __CastRay_x                                                0x140230630
#define __CastRay2_x                                               0x140230330
#define __ConvertItemTags_x                                        0x140230A90
#define __CleanItemTags_x                                          0x140087DB0
#define __CreateCascadeMenuItems_x                                 0x140180DF0
#define __DoesFileExist_x                                          0x140568ED0
#define __EQGetTime_x                                              0x1405655D0
#define __ExecuteCmd_x                                             0x140206F40
#define __FixHeading_x                                             0x140690DB0
#define __FlushDxKeyboard_x                                        0x14032AE60
#define __get_bearing_x                                            0x14023A4C0
#define __get_melee_range_x                                        0x14023A5C0
#define __GetAnimationCache_x                                      0x1403A8120
#define __GetGaugeValueFromEQ_x                                    0x1404DBDE0
#define __GetLabelFromEQ_x                                         0x1404DD3E0
#define __GetXTargetType_x                                         0x140692090   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140690E30
#define __HelpPath_x                                               0x140EB0DF0   // Why?
#define __NewUIINI_x                                               0x1404E8910   // Why?
#define __ProcessGameEvents_x                                      0x14026CEA0
#define __ProcessKeyboardEvents_x                                  0x14032C6C0
#define __ProcessMouseEvents_x                                     0x14026E3D0
#define __SaveColors_x                                             0x140190DB0
#define __STMLToText_x                                             0x14056D810
#define __WndProc_x                                                0x140329640
#define CMemoryMappedFile__SetFile_x                               0x1407C8D20
#define DrawNetStatus_x                                            0x1402B74D0
#define Util__FastTime_x                                           0x140564B60
#define __eq_delete_x                                              0x1406981E4
#define __eq_new_x                                                 0x1406981A0
#define __CopyLayout_x                                             0x1402A5440
#define __ThrottleFrameRate_x                                      0x14025C755
#define __ThrottleFrameRateEnd_x                                   0x14025C7B5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BF00
#define CAAWnd__Update_x                                           0x14033C200
#define CAAWnd__UpdateSelected_x                                   0x14033D240

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BEC0
#define AltAdvManager__IsAbilityReady_x                            0x14019C140
#define AltAdvManager__GetAAById_x                                 0x14019B790
#define AltAdvManager__CanTrainAbility_x                           0x14019B5C0
#define AltAdvManager__CanSeeAbility_x                             0x14019B280

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
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6FC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8990
#define CharacterZoneClient__GetHPRegen_x                          0x1400EECF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7100
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF970
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D69A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0750
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6BA0
#define CharacterZoneClient__GetModCap_x                           0x1400F7D10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E40
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBB00
#define CharacterZoneClient__HasSkill_x                            0x1400F3740
#define CharacterZoneClient__HitBySpell_x                          0x1400D78F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB090
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F77F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3F30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B40
#define CharacterZoneClient__Max_Mana_x                            0x1402D4150  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7FA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE440
#define CharacterZoneClient__SpellDuration_x                       0x1400DF140
#define CharacterZoneClient__TotalEffect_x                         0x1400E0490
#define CharacterZoneClient__UseSkill_x                            0x1400FD4C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A340

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364690

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360520
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F5B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366D60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B40

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389B90
#define CChatWindowManager__InitContextMenu_x                      0x140389D20
#define CChatWindowManager__FreeChatWindow_x                       0x140388C10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403918D0
#define CChatWindowManager__CreateChatWindow_x                     0x140388550

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105610

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392910
#define CChatWindow__Clear_x                                       0x1403937B0
#define CChatWindow__WndNotification_x                             0x1403949A0
#define CChatWindow__AddHistory_x                                  0x1403932B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A27C0
#define CContextMenu__RemoveMenuItem_x                             0x1405A2BA0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2B70
#define CContextMenu__CheckMenuItem_x                              0x1405A29E0
#define CContextMenu__SetMenuItem_x                                0x1405A2BC0
#define CContextMenu__AddSeparator_x                               0x1405A2920

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405946E0
#define CContextMenuManager__RemoveMenu_x                          0x140594CB0
#define CContextMenuManager__PopupMenu_x                           0x140594A00
#define CContextMenuManager__Flush_x                               0x140594760
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A0090

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659D60
#define CChatService__GetFriendName_x                              0x140659D70

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140585520
#define CComboWnd__Draw_x                                          0x140585610
#define CComboWnd__GetCurChoice_x                                  0x1405858E0  // unused
#define CComboWnd__GetListRect_x                                   0x140585980
#define CComboWnd__InsertChoice_x                                  0x140585CA0
#define CComboWnd__SetColors_x                                     0x140586030
#define CComboWnd__SetChoice_x                                     0x140585FF0
#define CComboWnd__GetItemCount_x                                  0x140585970
#define CComboWnd__GetCurChoiceText_x                              0x140585920  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405858B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585D60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DE10
#define CContainerWnd__SetContainer_x                              0x1403F33C0
#define CContainerWnd__vftable_x                                   0x1409A9080

// CDisplay
#define CDisplay__cameraType_x                                     0x140D83294
#define CDisplay__ZoneMainUI_x                                     0x1405BC8D0
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
#define CEditBaseWnd__SetSel_x                                     0x1405C6A80
#define CEditWnd__DrawCaret_x                                      0x1405B85C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8A40
#define CEditWnd__GetCaretPt_x                                     0x1405B8CC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8D00
#define CEditWnd__GetDisplayString_x                               0x1405B8F60
#define CEditWnd__GetHorzOffset_x                                  0x1405B91A0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B92E0
#define CEditWnd__GetSelStartPt_x                                  0x1405B95C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9410
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA1F0
#define CEditWnd__ReplaceSelection_x                               0x1405BA590
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BAA30
#define CEditWnd__SetEditable_x                                    0x1405BACC0
#define CEditWnd__SetWindowText_x                                  0x1405BACF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D850
#define CEverQuest__ClickedPlayer_x                                0x140253380
#define CEverQuest__CreateTargetIndicator_x                        0x140253C40
#define CEverQuest__DoTellWindow_x                                 0x140105320 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105BE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F210
#define CEverQuest__dsp_chat_x                                     0x140104D50 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402893D0
#define CEverQuest__Emote_x                                        0x14025FBF0
#define CEverQuest__GetBodyTypeDesc_x                              0x140260990
#define CEverQuest__GetClassDesc_x                                 0x1402609F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260DC0
#define CEverQuest__GetDeityDesc_x                                 0x140261070
#define CEverQuest__GetLangDesc_x                                  0x1402614A0
#define CEverQuest__GetRaceDesc_x                                  0x140261840
#define CEverQuest__InterpretCmd_x                                 0x140263170
#define CEverQuest__LeftClickedOnPlayer_x                          0x140278030
#define CEverQuest__LMouseUp_x                                     0x140264B40
#define CEverQuest__RightClickedOnPlayer_x                         0x140275850
#define CEverQuest__RMouseUp_x                                     0x14026EF50
#define CEverQuest__SetGameState_x                                 0x14027A570
#define CEverQuest__UPCNotificationFlush_x                         0x14027FEA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402647B0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140270300
#define CEverQuest__ReportSuccessfulHit_x                          0x140271120

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B24E0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D60
#define CGuild__GetGuildName_x                                     0x1400C0DA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4A10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029AEF0
#define CHotButton__SetCheck_x                                     0x14029B1C0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC100
#define CInvSlotMgr__MoveItem_x                                    0x1403EC2E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EDC90

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E92F0
#define CInvSlot__SliderComplete_x                                 0x1403EA840
#define CInvSlot__GetItemBase_x                                    0x1403E4F30
#define CInvSlot__UpdateItem_x                                     0x1403EAD00

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EF020

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404104F0
#define CItemDisplayWnd__UpdateStrings_x                           0x140412E60
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040CFE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E740
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F910

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8910
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA600

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513B60

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409710

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148480

// CLabel
#define CLabel__UpdateText_x                                       0x14041A250

// CListWnd
#define CListWnd__CListWnd_x                                       0x140588E70
#define CListWnd__dCListWnd_x                                      0x1405892B0
#define CListWnd__vftable_x                                        0x140A8EC98
#define CListWnd__AddColumn_x                                      0x140589950
#define CListWnd__AddColumn1_x                                     0x1405899F0
#define CListWnd__AddLine_x                                        0x140589B50
#define CListWnd__AddString_x                                      0x14058A0E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058A650
#define CListWnd__CalculateVSBRange_x                              0x14058A930
#define CListWnd__ClearSel_x                                       0x14058AAD0
#define CListWnd__ClearAllSel_x                                    0x14058AA70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058AB30
#define CListWnd__Compare_x                                        0x14058ACF0
#define CListWnd__Draw_x                                           0x14058B1C0
#define CListWnd__DrawColumnSeparators_x                           0x14058BD60
#define CListWnd__DrawHeader_x                                     0x14058BE20
#define CListWnd__DrawItem_x                                       0x14058C4F0
#define CListWnd__DrawLine_x                                       0x14058CE60
#define CListWnd__DrawSeparator_x                                  0x14058D320
#define CListWnd__EnableLine_x                                     0x14058D740
#define CListWnd__EnsureVisible_x                                  0x14058D7A0
#define CListWnd__ExtendSel_x                                      0x14058D8A0
#define CListWnd__GetColumnMinWidth_x                              0x14058DBD0
#define CListWnd__GetColumnWidth_x                                 0x14058DC50
#define CListWnd__GetCurSel_x                                      0x14058DD50
#define CListWnd__GetItemData_x                                    0x14058E0C0
#define CListWnd__GetItemHeight_x                                  0x14058E100
#define CListWnd__GetItemRect_x                                    0x14058E320
#define CListWnd__GetItemText_x                                    0x14058E5C0
#define CListWnd__GetSelList_x                                     0x14058E810
#define CListWnd__GetSeparatorRect_x                               0x14058EA00
#define CListWnd__InsertLine_x                                     0x14058FE60
#define CListWnd__RemoveLine_x                                     0x1405904D0
#define CListWnd__SetColors_x                                      0x140590890
#define CListWnd__SetColumnJustification_x                         0x1405908B0
#define CListWnd__SetColumnLabel_x                                 0x140590930
#define CListWnd__SetColumnWidth_x                                 0x140590AD0
#define CListWnd__SetCurSel_x                                      0x140590BA0
#define CListWnd__SetItemColor_x                                   0x140590E10
#define CListWnd__SetItemData_x                                    0x140590EB0
#define CListWnd__SetItemText_x                                    0x1405910F0
#define CListWnd__Sort_x                                           0x140591500
#define CListWnd__ToggleSel_x                                      0x140591670
#define CListWnd__SetColumnsSizable_x                              0x140590B20
#define CListWnd__SetItemWnd_x                                     0x140591220
#define CListWnd__GetItemWnd_x                                     0x14058E7A0
#define CListWnd__SetItemIcon_x                                    0x140590EF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A420
#define CListWnd__SetVScrollPos_x                                  0x140591460

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D510

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B68
#define MapViewMap__Clear_x                                        0x14042F080
#define MapViewMap__SetZoom_x                                      0x1404356D0
#define MapViewMap__HandleLButtonDown_x                            0x140432210

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456E90  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D430
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045DBD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140461400
#define CMerchantWnd__SelectBuySellSlot_x                          0x140460740
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465690

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636950
#define CPacketScrambler__hton_x                                   0x140636940

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B1EA0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1DE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B24D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B2280
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B11E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B1170
#define CSidlManagerBase__CreateXWnd_x                             0x1405B07D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB970
#define CSidlManager__CreateXWnd_x                                 0x1404CBB30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576C90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576B70
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C1040 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576DF0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405762C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140576390
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405765A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140577490
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405776C0
#define CSidlScreenWnd__GetChildItem_x                             0x140577860
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577AB0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581AE0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577E20
#define CSidlScreenWnd__LoadIniInfo_x                              0x140578190
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578A60
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140579350
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC4D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579980
#define CSidlScreenWnd__StoreIniVis_x                              0x14057A170
#define CSidlScreenWnd__vftable_x                                  0x140A8DF08
#define CSidlScreenWnd__WndNotification_x                          0x14057A1C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140314500 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403149A0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403148D0
#define CSkillMgr__IsActivatedSkill_x                              0x140314D50
#define CSkillMgr__IsCombatSkill_x                                 0x140314D90
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314CC0
#define CSkillMgr__GetSkillLastUsed_x                              0x140314920

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DD2F0
#define CSliderWnd__SetValue_x                                     0x1405927E0
#define CSliderWnd__SetNumTicks_x                                  0x140592660

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1F80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140597130
#define CStmlWnd__CalculateHSBRange_x                              0x1405814E0
#define CStmlWnd__CalculateVSBRange_x                              0x140597FD0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598AB0
#define CStmlWnd__ForceParseNow_x                                  0x140598B50
#define CStmlWnd__GetVisibleText_x                                 0x140599220
#define CStmlWnd__MakeStmlColorTag_x                               0x14059AF80
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059AFC0
#define CStmlWnd__SetSTMLText_x                                    0x1405A1F80
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A2130
#define CStmlWnd__UpdateHistoryString_x                            0x1405A24C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592D90
#define CTabWnd__DrawCurrentPage_x                                 0x140592E30
#define CTabWnd__DrawTab_x                                         0x140593200
#define CTabWnd__GetTabRect_x                                      0x140593870
#define CTabWnd__InsertPage_x                                      0x140593B40
#define CTabWnd__RemovePage_x                                      0x140593DC0
#define CTabWnd__SetPage_x                                         0x140593F20
#define CTabWnd__UpdatePage_x                                      0x140594220

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BB140
#define CPageWnd__SetTabText_x                                     0x1405BB1B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA4B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8C0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A9880
#define CTextureFont__DrawWrappedText1_x                           0x1405A9790
#define CTextureFont__DrawWrappedText2_x                           0x1405A99B0
#define CTextureFont__GetTextExtent_x                              0x1405A9D60
#define CTextureFont__GetHeight_x                                  0x1405A9D20

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BF7A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575EA0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE70
#define CXStr__gCXStrAccess_x                                      0x140EDC2D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057CBC0
#define CXWnd__ClrFocus_x                                          0x14057CEB0
#define CXWnd__Destroy_x                                           0x14057D030
#define CXWnd__DoAllDrawing_x                                      0x14057D140
#define CXWnd__DrawColoredRect_x                                   0x14057D900
#define CXWnd__DrawTooltip_x                                       0x14057EF60
#define CXWnd__DrawTooltipAtPoint_x                                0x14057F010
#define CXWnd__GetChildItem_x                                      0x14057F910
#define CXWnd__GetChildWndAt_x                                     0x14057F9D0
#define CXWnd__GetClientRect_x                                     0x14057FC60
#define CXWnd__GetClientClipRect_x                                 0x14057FB20
#define CXWnd__GetRelativeRect_x                                   0x140581610
#define CXWnd__GetScreenClipRect_x                                 0x140581710
#define CXWnd__GetScreenRect_x                                     0x140581860
#define CXWnd__GetTooltipRect_x                                    0x1405819E0
#define CXWnd__IsActive_x                                          0x140581FA0
#define CXWnd__IsDescendantOf_x                                    0x140581FD0
#define CXWnd__IsReallyVisible_x                                   0x140582040
#define CXWnd__IsType_x                                            0x140582080
#define CXWnd__Minimize_x                                          0x140582180
#define CXWnd__ProcessTransition_x                                 0x140583060
#define CXWnd__Resize_x                                            0x140583170
#define CXWnd__Right_x                                             0x140583210
#define CXWnd__SetFocus_x                                          0x1405835C0
#define CXWnd__SetFont_x                                           0x140583610
#define CXWnd__SetKeyTooltip_x                                     0x140583710
#define CXWnd__SetMouseOver_x                                      0x140583850
#define CXWnd__SetParent_x                                         0x1405838D0
#define CXWnd__StartFade_x                                         0x140583D10
#define CXWnd__vftable_x                                           0x140A8E4F8
#define CXWnd__CXWnd_x                                             0x14057B780
#define CXWnd__dCXWnd_x                                            0x14057C0C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C6200

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3D50
#define CXWndManager__DrawCursor_x                                 0x1405A4030
#define CXWndManager__DrawWindows_x                                0x1405A4290
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4960
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A49A0
#define CXWndManager__RemoveWnd_x                                  0x1405A7F40

// CDBStr
#define CDBStr__GetString_x                                        0x14017E040

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063FA90

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE740
#define CCharacterListWnd__EnterWorld_x                            0x1400CD440
#define CCharacterListWnd__Quit_x                                  0x1400CE720
#define CCharacterListWnd__UpdateList_x                            0x1400CF430

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060E6B0
#define ItemBase__CreateItemTagString_x                            0x14060F120
#define ItemBase__GetImageNum_x                                    0x1406116F0
#define ItemBase__GetItemValue_x                                   0x1406131B0
#define ItemBase__IsEmpty_x                                        0x140614DC0
#define ItemBase__IsKeyRingItem_x                                  0x1406154F0
#define ItemBase__ValueSellMerchant_x                              0x1406196C0
#define ItemClient__CanDrop_x                                      0x14029D4F0
#define ItemClient__CanGoInBag_x                                   0x14029D620
#define ItemClient__CreateItemClient_x                             0x14029D900
#define ItemClient__dItemClient_x                                  0x14029D360

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D660
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625DA0
#define PcBase__GetCombatAbility_x                                 0x140626440
#define PcBase__GetCombatAbilityTimer_x                            0x1406264E0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140626C30
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627720
#define PcClient__AlertInventoryChanged_x                          0x1402BFAA0
#define PcClient__GetConLevel_x                                    0x1402C00C0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C27F0
#define PcClient__HasLoreItem_x                                    0x1402C37C0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1070
#define PcZoneClient__RemoveMyAffect_x                             0x1402D4FD0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B600  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B7B0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B910  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B850  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244AB0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178830

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140683430
#define PlayerBase__CanSee1_x                                      0x140683500
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406839C0
#define PlayerBase__HasProperty_x                                  0x140683BF0
#define PlayerBase__IsTargetable_x                                 0x140683CB0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1A90
#define PlayerClient__GetPcClient_x                                0x1402E42C0
#define PlayerClient__PlayerClient_x                               0x1402DAD70
#define PlayerClient__SetNameSpriteState_x                         0x1402E7710
#define PlayerClient__SetNameSpriteTint_x                          0x1402E86D0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6C80
#define PlayerZoneClient__DoAttack_x                               0x1402F7990
#define PlayerZoneClient__GetLevel_x                               0x1402FB0C0
#define PlayerZoneClient__IsValidTeleport_x                        0x140247830
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C520

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F05A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0650  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0750
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0070
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140682FF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2960
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2560
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A25D0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A28F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2A80
#define KeypressHandler__HandleKeyUp_x                             0x1402A2B80
#define KeypressHandler__SaveKeymapping_x                          0x1402A2800  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D5E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140638080

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9D80  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF0A0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1770
#define PcZoneClient__RemovePetEffect_x                            0x1402D50D0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2350
#define PcZoneClient__CanEquipItem_x                               0x1402CD3C0
#define PcZoneClient__GetItemByID_x                                0x1402D0130
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4E50
#define PcZoneClient__BandolierSwap_x                              0x1402CC3A0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C360

// IconCache
#define IconCache__GetIcon_x                                       0x1403A8150

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CBC0
#define CContainerMgr__CloseContainer_x                            0x14039C500
#define CContainerMgr__OpenExperimentContainer_x                   0x14039CF40

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140490660

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402956D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140421530
#define CLootWnd__RequestLootSlot_x                                0x140422540

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC9D0
#define EQ_Spell__SpellAffects_x                                   0x1401CDC90
#define EQ_Spell__SpellAffectBase_x                                0x1401CDBF0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7010
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6FC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD8B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD470
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCD40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF9A0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EC020
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB730
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EAF60

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F36E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401750C0
#define CTaskManager__GetTaskStatus_x                              0x1401751D0
#define CTaskManager__GetElementDescription_x                      0x140174D50

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAD40
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9B80
#define EqSoundManager__SoundAssistPlay_x                          0x140319B50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319E90  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584AB0
#define CTextureAnimation__SetCurCell_x                            0x140584DC0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293930

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406574A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657520
#define CharacterBase__IsExpansionFlag_x                           0x1401ED9C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037AED0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B840
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CD90

// messages
#define msg_spell_worn_off_x                                       0x140201F80
#define msg_new_text_x                                             0x1401FD840
#define __msgTokenTextParam_x                                      0x1401F5630
#define msgTokenText_x                                             0x1401F5550

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B540
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B460

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140692470

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A9A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1890
#define CCursorAttachment__IsOkToActivate_x                        0x1403A47D0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4A80
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BDC40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BDE30
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BDE40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143700
#define CFindItemWnd__Update_x                                     0x1401440A0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DBC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF70
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E320
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E5D0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140473510

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140697A30
#define CResolutionHandler__GetWindowedStyle_x                     0x140314060

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398F20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B820  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B710  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BDBC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD7A0

// ItemBase
#define ItemBase__IsLore_x                                         0x1406155C0
#define ItemBase__IsLoreEquipped_x                                 0x140615650

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B56E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244C10
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244BA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244BE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E660

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB00
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEB0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D2D0
#define FactionManagerClient__GetMaxFaction_x                      0x14011D2D0
#define FactionManagerClient__GetMinFaction_x                      0x14011D180

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC650

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129290

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5FC0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5340
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5DE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5D60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320650

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E660

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B9A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A7B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C60

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331E80

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C630

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640610
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
