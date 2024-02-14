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

#define __ClientDate                                               20240213u
#define __ExpectedVersionDate                                     "Feb 13 2024"
#define __ExpectedVersionTime                                     "12:04:33"
#define __ActualVersionDate_x                                      0x140935720
#define __ActualVersionTime_x                                      0x140935710
#define __ActualVersionBuild_x                                     0x1408CC2B0

// Memory Protection
#define __MemChecker0_x                                            0x1402A90C0
#define __MemChecker1_x                                            0x1405650F0
#define __MemChecker4_x                                            0x140277A40
#define __EncryptPad0_x                                            0x140D02E00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9C0
#define instEQZoneInfo_x                                           0x140E3BBB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F640
#define __gfMaxZoomCameraDistance_x                                0x1408CD520
#define __gfMaxCameraDistance_x                                    0x140A736A0
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
#define __ChatFilterDefs_x                                         0x140A0CF90
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
#define __allowslashcommand_x                                      0x140238330
#define __CastRay_x                                                0x140230690
#define __CastRay2_x                                               0x140230390
#define __ConvertItemTags_x                                        0x140230AF0
#define __CleanItemTags_x                                          0x140087DB0
#define __CreateCascadeMenuItems_x                                 0x140180E30
#define __DoesFileExist_x                                          0x140568FA0
#define __EQGetTime_x                                              0x1405656A0
#define __ExecuteCmd_x                                             0x140206FA0
#define __FixHeading_x                                             0x140690720
#define __FlushDxKeyboard_x                                        0x14032AEB0
#define __get_bearing_x                                            0x14023A520
#define __get_melee_range_x                                        0x14023A620
#define __GetAnimationCache_x                                      0x1403A82A0
#define __GetGaugeValueFromEQ_x                                    0x1404DBE60
#define __GetLabelFromEQ_x                                         0x1404DD460
#define __GetXTargetType_x                                         0x140691A00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406907A0
#define __HelpPath_x                                               0x140EB0DF0   // Why?
#define __NewUIINI_x                                               0x1404E89C0   // Why?
#define __ProcessGameEvents_x                                      0x14026CF30
#define __ProcessKeyboardEvents_x                                  0x14032C710
#define __ProcessMouseEvents_x                                     0x14026E460
#define __SaveColors_x                                             0x140190DF0
#define __STMLToText_x                                             0x14056D8E0
#define __WndProc_x                                                0x140329600
#define CMemoryMappedFile__SetFile_x                               0x1407C8680
#define DrawNetStatus_x                                            0x1402B7550
#define Util__FastTime_x                                           0x140564C30
#define __eq_delete_x                                              0x140697B54
#define __eq_new_x                                                 0x140697B10
#define __CopyLayout_x                                             0x1402A54D0
#define __ThrottleFrameRate_x                                      0x14025C7E5
#define __ThrottleFrameRateEnd_x                                   0x14025C845

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BF70
#define CAAWnd__Update_x                                           0x14033C270
#define CAAWnd__UpdateSelected_x                                   0x14033D2B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BF20
#define AltAdvManager__IsAbilityReady_x                            0x14019C1A0
#define AltAdvManager__GetAAById_x                                 0x14019B7F0
#define AltAdvManager__CanTrainAbility_x                           0x14019B620
#define AltAdvManager__CanSeeAbility_x                             0x14019B2E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A70
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D18B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1B00
#define CharacterZoneClient__CanUseItem_x                          0x1400E5DA0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D24D0
#define CharacterZoneClient__CastSpell_x                           0x1400D2570
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E18D0
#define CharacterZoneClient__Cur_HP_x                              0x1400E74B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7670
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5310
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDB40
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC570  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6770
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5270
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF700
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE5D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6940
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6FC0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8990
#define CharacterZoneClient__GetHPRegen_x                          0x1400EED10
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7120
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF990
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D69C0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0770
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6BC0
#define CharacterZoneClient__GetModCap_x                           0x1400F7D30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E60
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBB00
#define CharacterZoneClient__HasSkill_x                            0x1400F3760
#define CharacterZoneClient__HitBySpell_x                          0x1400D7910
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB0B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7810
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3FC0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B60
#define CharacterZoneClient__Max_Mana_x                            0x1402D41E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7FC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE460
#define CharacterZoneClient__SpellDuration_x                       0x1400DF160
#define CharacterZoneClient__TotalEffect_x                         0x1400E04B0
#define CharacterZoneClient__UseSkill_x                            0x1400FD4E0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A3C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364720

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403605A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F630

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366DD0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389C70
#define CChatWindowManager__InitContextMenu_x                      0x140389E00
#define CChatWindowManager__FreeChatWindow_x                       0x140388CF0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403919B0
#define CChatWindowManager__CreateChatWindow_x                     0x140388630

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105650

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403929F0
#define CChatWindow__Clear_x                                       0x140393890
#define CChatWindow__WndNotification_x                             0x140394A80
#define CChatWindow__AddHistory_x                                  0x140393390

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A2860
#define CContextMenu__RemoveMenuItem_x                             0x1405A2C50
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2C20
#define CContextMenu__CheckMenuItem_x                              0x1405A2A90
#define CContextMenu__SetMenuItem_x                                0x1405A2C70
#define CContextMenu__AddSeparator_x                               0x1405A29D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140594730
#define CContextMenuManager__RemoveMenu_x                          0x140594D10
#define CContextMenuManager__PopupMenu_x                           0x140594A50
#define CContextMenuManager__Flush_x                               0x1405947B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A01D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659DA0
#define CChatService__GetFriendName_x                              0x140659DB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140585670
#define CComboWnd__Draw_x                                          0x140585770
#define CComboWnd__GetCurChoice_x                                  0x140585A50  // unused
#define CComboWnd__GetListRect_x                                   0x140585AF0
#define CComboWnd__InsertChoice_x                                  0x140585E30
#define CComboWnd__SetColors_x                                     0x1405861C0
#define CComboWnd__SetChoice_x                                     0x140586180
#define CComboWnd__GetItemCount_x                                  0x140585AE0
#define CComboWnd__GetCurChoiceText_x                              0x140585A90  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585A20
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585EF0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DF40
#define CContainerWnd__SetContainer_x                              0x1403F3540
#define CContainerWnd__vftable_x                                   0x1409A9090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D83294
#define CDisplay__ZoneMainUI_x                                     0x1405BC960
#define CDisplay__PreZoneMainUI_x                                  0x14018DCE0
#define CDisplay__CleanGameUI_x                                    0x14017FF10
#define CDisplay__GetClickedActor_x                                0x140184080
#define CDisplay__GetUserDefinedColor_x                            0x140184CF0
#define CDisplay__InitCharSelectUI_x                               0x140184FA0
#define CDisplay__ReloadUI_x                                       0x14018FFD0
#define CDisplay__WriteTextHD2_x                                   0x140197040
#define CDisplay__TrueDistance_x                                   0x140196CF0
#define CDisplay__SetViewActor_x                                   0x140193510
#define CDisplay__GetFloorHeight_x                                 0x1401842E0
#define CDisplay__ToggleScreenshotMode_x                           0x1401967E0
#define CDisplay__RealRender_World_x                               0x14018F3B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6B10
#define CEditWnd__DrawCaret_x                                      0x1405B8660  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8B20
#define CEditWnd__GetCaretPt_x                                     0x1405B8DA0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8DE0
#define CEditWnd__GetDisplayString_x                               0x1405B9050
#define CEditWnd__GetHorzOffset_x                                  0x1405B9290
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B93E0
#define CEditWnd__GetSelStartPt_x                                  0x1405B96C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9510
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA270
#define CEditWnd__ReplaceSelection_x                               0x1405BA620
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BAAC0
#define CEditWnd__SetEditable_x                                    0x1405BAD50
#define CEditWnd__SetWindowText_x                                  0x1405BAD80

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D8E0
#define CEverQuest__ClickedPlayer_x                                0x1402533F0
#define CEverQuest__CreateTargetIndicator_x                        0x140253CB0
#define CEverQuest__DoTellWindow_x                                 0x140105360 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105C20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F2A0
#define CEverQuest__dsp_chat_x                                     0x140104D90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289460
#define CEverQuest__Emote_x                                        0x14025FC80
#define CEverQuest__GetBodyTypeDesc_x                              0x140260A20
#define CEverQuest__GetClassDesc_x                                 0x140260A80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260E50
#define CEverQuest__GetDeityDesc_x                                 0x140261100
#define CEverQuest__GetLangDesc_x                                  0x140261530
#define CEverQuest__GetRaceDesc_x                                  0x1402618D0
#define CEverQuest__InterpretCmd_x                                 0x140263200
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402780C0
#define CEverQuest__LMouseUp_x                                     0x140264BD0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402758E0
#define CEverQuest__RMouseUp_x                                     0x14026EFE0
#define CEverQuest__SetGameState_x                                 0x14027A600
#define CEverQuest__UPCNotificationFlush_x                         0x14027FF30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264840
#define CEverQuest__ReportSuccessfulHeal_x                         0x140270390
#define CEverQuest__ReportSuccessfulHit_x                          0x1402711B0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2660

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D50
#define CGuild__GetGuildName_x                                     0x1400C0D90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4BA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029AF90
#define CHotButton__SetCheck_x                                     0x14029B260

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC280
#define CInvSlotMgr__MoveItem_x                                    0x1403EC460
#define CInvSlotMgr__SelectSlot_x                                  0x1403EDE10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E9480
#define CInvSlot__SliderComplete_x                                 0x1403EA9D0
#define CInvSlot__GetItemBase_x                                    0x1403E50B0
#define CInvSlot__UpdateItem_x                                     0x1403EAE90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EF1A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140410400
#define CItemDisplayWnd__UpdateStrings_x                           0x140412D80
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040CEE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E650
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F820

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8990
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA680

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513C30

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409610

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148500

// CLabel
#define CLabel__UpdateText_x                                       0x14041A180

// CListWnd
#define CListWnd__CListWnd_x                                       0x140589000
#define CListWnd__dCListWnd_x                                      0x140589450
#define CListWnd__vftable_x                                        0x140A8ECA8
#define CListWnd__AddColumn_x                                      0x140589AF0
#define CListWnd__AddColumn1_x                                     0x140589B90
#define CListWnd__AddLine_x                                        0x140589CF0
#define CListWnd__AddString_x                                      0x14058A280
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058A7F0
#define CListWnd__CalculateVSBRange_x                              0x14058AAD0
#define CListWnd__ClearSel_x                                       0x14058AC70
#define CListWnd__ClearAllSel_x                                    0x14058AC10
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058ACD0
#define CListWnd__Compare_x                                        0x14058AE90
#define CListWnd__Draw_x                                           0x14058B360
#define CListWnd__DrawColumnSeparators_x                           0x14058BF10
#define CListWnd__DrawHeader_x                                     0x14058BFD0
#define CListWnd__DrawItem_x                                       0x14058C6B0
#define CListWnd__DrawLine_x                                       0x14058D030
#define CListWnd__DrawSeparator_x                                  0x14058D4F0
#define CListWnd__EnableLine_x                                     0x14058D910
#define CListWnd__EnsureVisible_x                                  0x14058D970
#define CListWnd__ExtendSel_x                                      0x14058DA70
#define CListWnd__GetColumnMinWidth_x                              0x14058DDA0
#define CListWnd__GetColumnWidth_x                                 0x14058DE20
#define CListWnd__GetCurSel_x                                      0x14058DF20
#define CListWnd__GetItemData_x                                    0x14058E2A0
#define CListWnd__GetItemHeight_x                                  0x14058E2E0
#define CListWnd__GetItemRect_x                                    0x14058E500
#define CListWnd__GetItemText_x                                    0x14058E7A0
#define CListWnd__GetSelList_x                                     0x14058E9F0
#define CListWnd__GetSeparatorRect_x                               0x14058EBE0
#define CListWnd__InsertLine_x                                     0x140590050
#define CListWnd__RemoveLine_x                                     0x1405906C0
#define CListWnd__SetColors_x                                      0x140590A80
#define CListWnd__SetColumnJustification_x                         0x140590AA0
#define CListWnd__SetColumnLabel_x                                 0x140590B20
#define CListWnd__SetColumnWidth_x                                 0x140590CC0
#define CListWnd__SetCurSel_x                                      0x140590D90
#define CListWnd__SetItemColor_x                                   0x140591000
#define CListWnd__SetItemData_x                                    0x1405910A0
#define CListWnd__SetItemText_x                                    0x1405912E0
#define CListWnd__Sort_x                                           0x1405916F0
#define CListWnd__ToggleSel_x                                      0x140591860
#define CListWnd__SetColumnsSizable_x                              0x140590D10
#define CListWnd__SetItemWnd_x                                     0x140591410
#define CListWnd__GetItemWnd_x                                     0x14058E980
#define CListWnd__SetItemIcon_x                                    0x1405910E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A5C0
#define CListWnd__SetVScrollPos_x                                  0x140591650

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D460

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B78
#define MapViewMap__Clear_x                                        0x14042EFE0
#define MapViewMap__SetZoom_x                                      0x140435630
#define MapViewMap__HandleLButtonDown_x                            0x140432170

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456E10  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D3C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045DB60
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140461390
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404606D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465620

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636980
#define CPacketScrambler__hton_x                                   0x140636970

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B1F20
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1E60
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B2550
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B2300
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B1260
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B11F0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B0830

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB9C0
#define CSidlManager__CreateXWnd_x                                 0x1404CBB80

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576D70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576C40
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C10D0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576EE0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140576390
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140576460
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140576670
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140577580
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405777B0
#define CSidlScreenWnd__GetChildItem_x                             0x140577950
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577BA0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581C50 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577F10
#define CSidlScreenWnd__LoadIniInfo_x                              0x140578280
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578B40
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140579430
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC4D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579A70
#define CSidlScreenWnd__StoreIniVis_x                              0x14057A260
#define CSidlScreenWnd__vftable_x                                  0x140A8DF18
#define CSidlScreenWnd__WndNotification_x                          0x14057A2B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403144B0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314950 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314880
#define CSkillMgr__IsActivatedSkill_x                              0x140314D00
#define CSkillMgr__IsCombatSkill_x                                 0x140314D40
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314C70
#define CSkillMgr__GetSkillLastUsed_x                              0x1403148D0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405921E0
#define CSliderWnd__SetValue_x                                     0x1405929F0
#define CSliderWnd__SetNumTicks_x                                  0x140592870

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D2000

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140597190
#define CStmlWnd__CalculateHSBRange_x                              0x140581660
#define CStmlWnd__CalculateVSBRange_x                              0x140598030
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598B20
#define CStmlWnd__ForceParseNow_x                                  0x140598BC0
#define CStmlWnd__GetVisibleText_x                                 0x140599290
#define CStmlWnd__MakeStmlColorTag_x                               0x14059AFF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059B030
#define CStmlWnd__SetSTMLText_x                                    0x1405A2000
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A21B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A2540

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592DC0
#define CTabWnd__DrawCurrentPage_x                                 0x140592E60
#define CTabWnd__DrawTab_x                                         0x140593230
#define CTabWnd__GetTabRect_x                                      0x1405938A0
#define CTabWnd__InsertPage_x                                      0x140593B70
#define CTabWnd__RemovePage_x                                      0x140593E00
#define CTabWnd__SetPage_x                                         0x140593F60
#define CTabWnd__UpdatePage_x                                      0x140594260

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BB1E0
#define CPageWnd__SetTabText_x                                     0x1405BB250

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA490  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A98E0
#define CTextureFont__DrawWrappedText1_x                           0x1405A97F0
#define CTextureFont__DrawWrappedText2_x                           0x1405A9A10
#define CTextureFont__GetTextExtent_x                              0x1405A9DC0
#define CTextureFont__GetHeight_x                                  0x1405A9D80

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BF830

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575F70

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE70
#define CXStr__gCXStrAccess_x                                      0x140EDC2D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057CCD0
#define CXWnd__ClrFocus_x                                          0x14057CFC0
#define CXWnd__Destroy_x                                           0x14057D140
#define CXWnd__DoAllDrawing_x                                      0x14057D250
#define CXWnd__DrawColoredRect_x                                   0x14057DA20
#define CXWnd__DrawTooltip_x                                       0x14057F090
#define CXWnd__DrawTooltipAtPoint_x                                0x14057F140
#define CXWnd__GetChildItem_x                                      0x14057FA50
#define CXWnd__GetChildWndAt_x                                     0x14057FB10
#define CXWnd__GetClientRect_x                                     0x14057FDC0
#define CXWnd__GetClientClipRect_x                                 0x14057FC80
#define CXWnd__GetRelativeRect_x                                   0x140581790
#define CXWnd__GetScreenClipRect_x                                 0x140581890
#define CXWnd__GetScreenRect_x                                     0x1405819E0
#define CXWnd__GetTooltipRect_x                                    0x140581B50
#define CXWnd__IsActive_x                                          0x140582110
#define CXWnd__IsDescendantOf_x                                    0x140582140
#define CXWnd__IsReallyVisible_x                                   0x1405821B0
#define CXWnd__IsType_x                                            0x1405821F0
#define CXWnd__Minimize_x                                          0x1405822F0
#define CXWnd__ProcessTransition_x                                 0x1405831A0
#define CXWnd__Resize_x                                            0x1405832C0
#define CXWnd__Right_x                                             0x140583360
#define CXWnd__SetFocus_x                                          0x140583720
#define CXWnd__SetFont_x                                           0x140583770
#define CXWnd__SetKeyTooltip_x                                     0x140583880
#define CXWnd__SetMouseOver_x                                      0x1405839C0
#define CXWnd__SetParent_x                                         0x140583A40
#define CXWnd__StartFade_x                                         0x140583E80
#define CXWnd__vftable_x                                           0x140A8E508
#define CXWnd__CXWnd_x                                             0x14057B870
#define CXWnd__dCXWnd_x                                            0x14057C1B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C6290

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3E00
#define CXWndManager__DrawCursor_x                                 0x1405A40E0
#define CXWndManager__DrawWindows_x                                0x1405A4340
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4A10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4A50
#define CXWndManager__RemoveWnd_x                                  0x1405A7FA0

// CDBStr
#define CDBStr__GetString_x                                        0x14017E080

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063FAD0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE750
#define CCharacterListWnd__EnterWorld_x                            0x1400CD450
#define CCharacterListWnd__Quit_x                                  0x1400CE730
#define CCharacterListWnd__UpdateList_x                            0x1400CF440

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060E730
#define ItemBase__CreateItemTagString_x                            0x14060F1A0
#define ItemBase__GetImageNum_x                                    0x140611770
#define ItemBase__GetItemValue_x                                   0x140613210
#define ItemBase__IsEmpty_x                                        0x140614DF0
#define ItemBase__IsKeyRingItem_x                                  0x140615520
#define ItemBase__ValueSellMerchant_x                              0x1406196F0
#define ItemClient__CanDrop_x                                      0x14029D580
#define ItemClient__CanGoInBag_x                                   0x14029D6B0
#define ItemClient__CreateItemClient_x                             0x14029D990
#define ItemClient__dItemClient_x                                  0x14029D3F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D6C0
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625DD0
#define PcBase__GetCombatAbility_x                                 0x140626470
#define PcBase__GetCombatAbilityTimer_x                            0x140626510
#define PcBase__GetItemContainedRealEstateIds_x                    0x140626C60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627750
#define PcClient__AlertInventoryChanged_x                          0x1402BFB30
#define PcClient__GetConLevel_x                                    0x1402C0150  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2880
#define PcClient__HasLoreItem_x                                    0x1402C3850
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1100
#define PcZoneClient__RemoveMyAffect_x                             0x1402D5060

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B660  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B810  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B970  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B8B0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244B10  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401788B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140683490
#define PlayerBase__CanSee1_x                                      0x140683560
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683A20
#define PlayerBase__HasProperty_x                                  0x140683C50
#define PlayerBase__IsTargetable_x                                 0x140683D10
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1B30
#define PlayerClient__GetPcClient_x                                0x1402E4360
#define PlayerClient__PlayerClient_x                               0x1402DAE00
#define PlayerClient__SetNameSpriteState_x                         0x1402E77B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8770
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6C20
#define PlayerZoneClient__DoAttack_x                               0x1402F7930
#define PlayerZoneClient__GetLevel_x                               0x1402FB060
#define PlayerZoneClient__IsValidTeleport_x                        0x1402478A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C560

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0540  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F05F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F06F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0010
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140683050

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A29F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A25F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2660
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2980  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2B10
#define KeypressHandler__HandleKeyUp_x                             0x1402A2C10
#define KeypressHandler__SaveKeymapping_x                          0x1402A2890  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D610  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406380B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9E10  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF130
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1800
#define PcZoneClient__RemovePetEffect_x                            0x1402D5160
#define PcZoneClient__HasAlternateAbility_x                        0x1402D23E0
#define PcZoneClient__CanEquipItem_x                               0x1402CD450
#define PcZoneClient__GetItemByID_x                                0x1402D01C0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4EE0
#define PcZoneClient__BandolierSwap_x                              0x1402CC430

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C3D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A82D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CCF0
#define CContainerMgr__CloseContainer_x                            0x14039C630
#define CContainerMgr__OpenExperimentContainer_x                   0x14039D070

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140490660

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295760

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140421470
#define CLootWnd__RequestLootSlot_x                                0x140422480

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC9E0
#define EQ_Spell__SpellAffects_x                                   0x1401CDCA0
#define EQ_Spell__SpellAffectBase_x                                0x1401CDC00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7030
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6FE0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD8C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD480
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCD50

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF990

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EC0F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB800
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EB030

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F37B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175140
#define CTaskManager__GetTaskStatus_x                              0x140175250
#define CTaskManager__GetElementDescription_x                      0x140174DD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAD50
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9B90
#define EqSoundManager__SoundAssistPlay_x                          0x140319B00  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319E40  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584C00
#define CTextureAnimation__SetCurCell_x                            0x140584F10

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402939C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406574E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657560
#define CharacterBase__IsExpansionFlag_x                           0x1401EDA20

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037AF80
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B8F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CE40

// messages
#define msg_spell_worn_off_x                                       0x140201FE0
#define msg_new_text_x                                             0x1401FD8A0
#define __msgTokenTextParam_x                                      0x1401F5690
#define msgTokenText_x                                             0x1401F55B0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B4F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B410

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140691DE0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A8D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A19E0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4950
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4C00
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BDCD0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BDEC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BDED0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143780
#define CFindItemWnd__Update_x                                     0x140144120
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DC40

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CFF0
#define LootFiltersManager__GetItemFilterData_x                    0x14014DB00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E3A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E650

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404734C0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406973A0
#define CResolutionHandler__GetWindowedStyle_x                     0x140314010

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140399020

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B860  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B750  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BDD50
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD930

// ItemBase
#define ItemBase__IsLore_x                                         0x1406155F0
#define ItemBase__IsLoreEquipped_x                                 0x140615680

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5760

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244C70
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244C00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244C40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E610

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB30
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEE0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D300
#define FactionManagerClient__GetMaxFaction_x                      0x14011D300
#define FactionManagerClient__GetMinFaction_x                      0x14011D1B0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC660

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401292C0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A6020
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A53A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5E40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5DC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320610

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E610

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020BA00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057A8A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C60

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331ED0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C630

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640650
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
