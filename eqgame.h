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

#define __ClientDate                                               20230509u
#define __ExpectedVersionDate                                     "May  9 2023"
#define __ExpectedVersionTime                                     "11:40:00"
#define __ActualVersionDate_x                                      0x14080F378
#define __ActualVersionTime_x                                      0x14080F368
#define __ActualVersionBuild_x                                     0x1407FCAF8

// Memory Protection
#define __MemChecker0_x                                            0x1402CA210
#define __MemChecker1_x                                            0x140572D40
#define __MemChecker4_x                                            0x1402994F0
#define __EncryptPad0_x                                            0x140AC9860

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C056D0
#define instEQZoneInfo_x                                           0x140C058C4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402322F0
#define __gfMaxZoomCameraDistance_x                                0x140805300
#define __gfMaxCameraDistance_x                                    0x140843E04
#define __CurrentSocial_x                                          0x14098593C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC11A0
#define g_eqCommandStates_x                                        0x140AC2210
#define __CommandList_x                                            0x140AC2450
#define __ScreenMode_x                                             0x140B4CF8C
#define __gWorld_x                                                 0x140BFE328
#define __gpbCommandEvent_x                                        0x140BFDD58
#define __ServerHost_x                                             0x140BFDF48
#define __Guilds_x                                                 0x140C04280
#define __MouseEventTime_x                                         0x140C7ABD8
#define DI8__Mouse_Check_x                                         0x140C7ED08
#define __heqmain_x                                                0x140C811A0
#define DI8__Mouse_x                                               0x140C811F8
#define __HWnd_x                                                   0x140C81CA8
#define __Mouse_x                                                  0x140C811B8
#define DI8__Main_x                                                0x140C811D0
#define DI8__Keyboard_x                                            0x140C811D8
#define __LoginName_x                                              0x140C8193C
#define __CurrentMapLabel_x                                        0x140C94E80
#define __LabelCache_x                                             0x140C95A50
#define __SubscriptionType_x                                       0x140CCA860
#define Teleport_Table_Size_x                                      0x140BFDDE0
#define Teleport_Table_x                                           0x140BFE360

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C00610
#define pinstActiveBanker_x                                        0x140BFE278
#define pinstActiveCorpse_x                                        0x140BFE268
#define pinstActiveGMaster_x                                       0x140BFE270
#define pinstActiveMerchant_x                                      0x140BFE260
#define pinstAltAdvManager_x                                       0x140B4DE38
#define pinstCEverQuest_x                                          0x140C811F0
#define pinstCamActor_x                                            0x140B4CF78
#define pinstCDBStr_x                                              0x140B4CC40
#define pinstCDisplay_x                                            0x140C003D8
#define pinstControlledPlayer_x                                    0x140BFE308
#define pinstCResolutionHandler_x                                  0x141303408
#define pinstCSidlManager_x                                        0x140CA6C60
#define pinstCXWndManager_x                                        0x140CA6C58
#define instDynamicZone_x                                          0x140C04140 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C0418E
#define instExpeditionName_x                                       0x140C041CE
#define pinstDZMember_x                                            0x140C04258
#define pinstDZTimerInfo_x                                         0x140C04260
#define pinstEqLogin_x                                             0x140C81280
#define instTribute_x                                              0x140ABC830
#define pinstEQSoundManager_x                                      0x140B4E1B8
#define pinstEQSpellStrings_x                                      0x140B31860
#define pinstSGraphicsEngine_x                                     0x141303188
#define pinstLocalPC_x                                             0x140BFE348
#define pinstLocalPlayer_x                                         0x140BFE258
#define pinstCMercenaryClientManager_x                             0x140C7C488
#define pinstModelPlayer_x                                         0x140BFE288
#define pinstRenderInterface_x                                     0x1413031A0
#define pinstSkillMgr_x                                            0x140C7E120
#define pinstSpawnManager_x                                        0x140C7C840
#define pinstSpellManager_x                                        0x140C7E188
#define pinstStringTable_x                                         0x140BFE350
#define pinstSwitchManager_x                                       0x140BFDAD0
#define pinstTarget_x                                              0x140BFE300
#define pinstTaskMember_x                                          0x140ABC820 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140BFE310
#define pinstTradeTarget_x                                         0x140BFE280
#define instTributeActive_x                                        0x140ABC859
#define pinstViewActor_x                                           0x140B4CF70
#define pinstWorldData_x                                           0x140C003D0
#define pinstPlayerPath_x                                          0x140C7C868
#define pinstTargetIndicator_x                                     0x140C7E238
#define EQObject_Top_x                                             0x140BFE330

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C91FD8
#define pinstCContainerMgr_x                                       0x140B4D208
#define pinstCContextMenuManager_x                                 0x140CA6A30
#define pinstCInvSlotMgr_x                                         0x140B4D1E8
#define pinstCItemDisplayManager_x                                 0x140C94A50
#define pinstCPopupWndManager_x                                    0x140C952E0
#define pinstCSpellDisplayMgr_x                                    0x140C95930
#define pinstCTaskManager_x                                        0x140985C70
#define pinstEQSuiteTextureLoader_x                                0x140AD2EE0
#define pinstItemIconCache_x                                       0x140C92338
#define pinstLootFiltersManager_x                                  0x140B4C698
#define pinstGFViewListener_x                                      0x14130C390


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14025A4B0
#define __CastRay_x                                                0x140252CD0
#define __CastRay2_x                                               0x1402529E0
#define __ConvertItemTags_x                                        0x1402530D0
#define __CleanItemTags_x                                          0x1400ACF80
#define __CreateCascadeMenuItems_x                                 0x1401A3F40
#define __DoesFileExist_x                                          0x1405776C0
#define __EQGetTime_x                                              0x1405732F0
#define __ExecuteCmd_x                                             0x140229D20
#define __FixHeading_x                                             0x1406764C0
#define __FlushDxKeyboard_x                                        0x140348430
#define __get_bearing_x                                            0x14025C6A0
#define __get_melee_range_x                                        0x14025C790
#define __GetAnimationCache_x                                      0x1403C0230
#define __GetGaugeValueFromEQ_x                                    0x1404EB0A0
#define __GetLabelFromEQ_x                                         0x1404EC680
#define __GetXTargetType_x                                         0x1406777A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140676540
#define __HelpPath_x                                               0x140C7AAA0   // Why?
#define __NewUIINI_x                                               0x1404F7840   // Why?
#define __ProcessGameEvents_x                                      0x14028E950
#define __ProcessKeyboardEvents_x                                  0x140349C90
#define __ProcessMouseEvents_x                                     0x14028FE40
#define __SaveColors_x                                             0x1401B3DA0
#define __STMLToText_x                                             0x140588840
#define __WndProc_x                                                0x140346BA0
#define CMemoryMappedFile__SetFile_x                               0x1407AE180
#define DrawNetStatus_x                                            0x1402D9000
#define Util__FastTime_x                                           0x140573FF0
#define __eq_delete_x                                              0x1406A0364
#define __eq_new_x                                                 0x1406A0320
#define __CopyLayout_x                                             0x1402C66A0
#define __ThrottleFrameRate_x                                      0x14027E29C
#define __ThrottleFrameRateEnd_x                                   0x14027E2FC

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140358DF0
#define CAAWnd__Update_x                                           0x1403590F0
#define CAAWnd__UpdateSelected_x                                   0x14035A0B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400CF180
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C7AB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EB3E0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400CFA30

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BEE10
#define AltAdvManager__IsAbilityReady_x                            0x1401BF090
#define AltAdvManager__GetAAById_x                                 0x1401BE6E0
#define AltAdvManager__CanTrainAbility_x                           0x1401BE510
#define AltAdvManager__CanSeeAbility_x                             0x1401BE1D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400F5720
#define CharacterZoneClient__CalcAffectChange_x                    0x1400F64D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400F66E0
#define CharacterZoneClient__CanUseItem_x                          0x14010AE40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F6FD0
#define CharacterZoneClient__CastSpell_x                           0x1400F7070
#define CharacterZoneClient__CharacterZoneClient_x                 0x140106920
#define CharacterZoneClient__Cur_HP_x                              0x14010C520
#define CharacterZoneClient__Cur_Mana_x                            0x14010C6E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400FA100
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140112ED0
#define CharacterZoneClient__GetBaseSkill_x                        0x140121E50  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400FB5E0
#define CharacterZoneClient__GetCurrentMod_x                       0x14010A320
#define CharacterZoneClient__GetCursorItemCount_x                  0x140114A20
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140113920
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400FB7B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EBD60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400ED730
#define CharacterZoneClient__GetHPRegen_x                          0x140114050
#define CharacterZoneClient__GetItemCountInInventory_x             0x14010C190
#define CharacterZoneClient__GetItemCountWorn_x                    0x140114CB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400FB8B0
#define CharacterZoneClient__GetManaRegen_x                        0x140115A00
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FBAC0
#define CharacterZoneClient__GetModCap_x                           0x14011D150
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400FBB60
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400FBD70
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400F08D0
#define CharacterZoneClient__HasSkill_x                            0x140118980
#define CharacterZoneClient__HitBySpell_x                          0x1400FC810
#define CharacterZoneClient__IsStackBlocked_x                      0x1400FFFF0
#define CharacterZoneClient__MakeMeVisible_x                       0x14011CBE0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F30C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011CF20
#define CharacterZoneClient__Max_Mana_x                            0x1402F32B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14011D3E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x140103610
#define CharacterZoneClient__SpellDuration_x                       0x1401043D0
#define CharacterZoneClient__TotalEffect_x                         0x140105710
#define CharacterZoneClient__UseSkill_x                            0x140122DA0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403772F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140381570

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037D480
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037C510

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140383C40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140851D30

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A5160
#define CChatWindowManager__InitContextMenu_x                      0x1403A52F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403A43B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403ABB10
#define CChatWindowManager__CreateChatWindow_x                     0x1403A3CF0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14012AF00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403ACB00
#define CChatWindow__Clear_x                                       0x1403AD940
#define CChatWindow__WndNotification_x                             0x1403AEB30
#define CChatWindow__AddHistory_x                                  0x1403AD440

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A36F0
#define CContextMenu__RemoveMenuItem_x                             0x1405A3AE0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A3AB0
#define CContextMenu__CheckMenuItem_x                              0x1405A3920
#define CContextMenu__SetMenuItem_x                                0x1405A3B00
#define CContextMenu__AddSeparator_x                               0x1405A3860

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A2940
#define CContextMenuManager__RemoveMenu_x                          0x1405A2F20
#define CContextMenuManager__PopupMenu_x                           0x1405A2C60
#define CContextMenuManager__Flush_x                               0x1405A29C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403BA0B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405FAF20
#define CChatService__GetFriendName_x                              0x14063F6E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140593880
#define CComboWnd__Draw_x                                          0x140593980
#define CComboWnd__GetCurChoice_x                                  0x140593C60  // unused
#define CComboWnd__GetListRect_x                                   0x140593D00
#define CComboWnd__InsertChoice_x                                  0x140594040
#define CComboWnd__SetColors_x                                     0x1405943D0
#define CComboWnd__SetChoice_x                                     0x140594390
#define CComboWnd__GetItemCount_x                                  0x140593CF0
#define CComboWnd__GetCurChoiceText_x                              0x140593CA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140593C30
#define CComboWnd__InsertChoiceAtIndex_x                           0x140594100

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B7E80
#define CContainerWnd__SetContainer_x                              0x140404C40
#define CContainerWnd__vftable_x                                   0x14081E508

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4CD2C
#define CDisplay__ZoneMainUI_x                                     0x1405CAC90
#define CDisplay__PreZoneMainUI_x                                  0x1401B0D60
#define CDisplay__CleanGameUI_x                                    0x1401A3040
#define CDisplay__GetClickedActor_x                                0x1401A71D0
#define CDisplay__GetUserDefinedColor_x                            0x1401A7DE0
#define CDisplay__InitCharSelectUI_x                               0x1401A8090
#define CDisplay__ReloadUI_x                                       0x1401B3040
#define CDisplay__WriteTextHD2_x                                   0x1401BA050
#define CDisplay__TrueDistance_x                                   0x1401B9D30
#define CDisplay__SetViewActor_x                                   0x1401B6590
#define CDisplay__GetFloorHeight_x                                 0x1401A7430
#define CDisplay__ToggleScreenshotMode_x                           0x1401B9830
#define CDisplay__RealRender_World_x                               0x1401B2430

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D4FE0
#define CEditWnd__DrawCaret_x                                      0x1405B9610  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B9AD0
#define CEditWnd__GetCaretPt_x                                     0x1405B9D50  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B9D90
#define CEditWnd__GetDisplayString_x                               0x1405BA000
#define CEditWnd__GetHorzOffset_x                                  0x1405BA240
#define CEditWnd__GetLineForPrintableChar_x                        0x1405BA390
#define CEditWnd__GetSelStartPt_x                                  0x1405BA670  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405BA4C0
#define CEditWnd__PointFromPrintableChar_x                         0x1405BB220
#define CEditWnd__ReplaceSelection_x                               0x1405BB5D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BBA70
#define CEditWnd__SetEditable_x                                    0x1405BBD00
#define CEditWnd__SetWindowText_x                                  0x1405BBD30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027F270
#define CEverQuest__ClickedPlayer_x                                0x1402751B0
#define CEverQuest__CreateTargetIndicator_x                        0x140275A70
#define CEverQuest__DoTellWindow_x                                 0x14012AC10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012B4D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140280CA0
#define CEverQuest__dsp_chat_x                                     0x14012A650 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AADE0
#define CEverQuest__Emote_x                                        0x140281650
#define CEverQuest__GetBodyTypeDesc_x                              0x1402823F0
#define CEverQuest__GetClassDesc_x                                 0x140282450
#define CEverQuest__GetClassThreeLetterCode_x                      0x140282820
#define CEverQuest__GetDeityDesc_x                                 0x140282AD0
#define CEverQuest__GetLangDesc_x                                  0x140282F00
#define CEverQuest__GetRaceDesc_x                                  0x1402832A0
#define CEverQuest__InterpretCmd_x                                 0x140284BB0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140299B70
#define CEverQuest__LMouseUp_x                                     0x140286550
#define CEverQuest__RightClickedOnPlayer_x                         0x1402973D0
#define CEverQuest__RMouseUp_x                                     0x1402909D0
#define CEverQuest__SetGameState_x                                 0x14029C0A0
#define CEverQuest__UPCNotificationFlush_x                         0x1402A1890 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402861D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140291D00
#define CEverQuest__ReportSuccessfulHit_x                          0x140292BB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403CA5F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E5AE0
#define CGuild__GetGuildName_x                                     0x1400E5B20

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EC880

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BC230
#define CHotButton__SetCheck_x                                     0x1402BC500

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FE030
#define CInvSlotMgr__MoveItem_x                                    0x1403FE200
#define CInvSlotMgr__SelectSlot_x                                  0x1403FFB60

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403FB1D0
#define CInvSlot__SliderComplete_x                                 0x1403FC500
#define CInvSlot__GetItemBase_x                                    0x1403F7BA0
#define CInvSlot__UpdateItem_x                                     0x1403FC9B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404007F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140421D30
#define CItemDisplayWnd__UpdateStrings_x                           0x140424740
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041E730
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041FF80
#define CItemDisplayWnd__RequestConvertItem_x                      0x140421140

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E7C40
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E9800

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140522AB0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14041AE60

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14016D050

// CLabel
#define CLabel__UpdateText_x                                       0x14042BB30

// CListWnd
#define CListWnd__CListWnd_x                                       0x140597210
#define CListWnd__dCListWnd_x                                      0x140597660
#define CListWnd__vftable_x                                        0x1408505F8
#define CListWnd__AddColumn_x                                      0x140597D00
#define CListWnd__AddColumn1_x                                     0x140597DA0
#define CListWnd__AddLine_x                                        0x140597F00
#define CListWnd__AddString_x                                      0x140598490
#define CListWnd__CalculateFirstVisibleLine_x                      0x140598A00
#define CListWnd__CalculateVSBRange_x                              0x140598CE0
#define CListWnd__ClearSel_x                                       0x140598E90
#define CListWnd__ClearAllSel_x                                    0x140598E30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140598EF0
#define CListWnd__Compare_x                                        0x1405990A0
#define CListWnd__Draw_x                                           0x140599570
#define CListWnd__DrawColumnSeparators_x                           0x14059A120
#define CListWnd__DrawHeader_x                                     0x14059A1E0
#define CListWnd__DrawItem_x                                       0x14059A8C0
#define CListWnd__DrawLine_x                                       0x14059B240
#define CListWnd__DrawSeparator_x                                  0x14059B700
#define CListWnd__EnableLine_x                                     0x14059BB20
#define CListWnd__EnsureVisible_x                                  0x14059BB80
#define CListWnd__ExtendSel_x                                      0x14059BC80
#define CListWnd__GetColumnMinWidth_x                              0x14059BFB0
#define CListWnd__GetColumnWidth_x                                 0x14059C030
#define CListWnd__GetCurSel_x                                      0x14059C130
#define CListWnd__GetItemData_x                                    0x14059C4B0
#define CListWnd__GetItemHeight_x                                  0x14059C4F0
#define CListWnd__GetItemRect_x                                    0x14059C710
#define CListWnd__GetItemText_x                                    0x14059C9B0
#define CListWnd__GetSelList_x                                     0x14059CC00
#define CListWnd__GetSeparatorRect_x                               0x14059CDF0
#define CListWnd__InsertLine_x                                     0x14059E260
#define CListWnd__RemoveLine_x                                     0x14059E8D0
#define CListWnd__SetColors_x                                      0x14059ECA0
#define CListWnd__SetColumnJustification_x                         0x14059ECC0
#define CListWnd__SetColumnLabel_x                                 0x14059ED40
#define CListWnd__SetColumnWidth_x                                 0x14059EEE0
#define CListWnd__SetCurSel_x                                      0x14059EFB0
#define CListWnd__SetItemColor_x                                   0x14059F220
#define CListWnd__SetItemData_x                                    0x14059F2C0
#define CListWnd__SetItemText_x                                    0x14059F500
#define CListWnd__Sort_x                                           0x14059F910
#define CListWnd__ToggleSel_x                                      0x14059FA80
#define CListWnd__SetColumnsSizable_x                              0x14059EF30
#define CListWnd__SetItemWnd_x                                     0x14059F630
#define CListWnd__GetItemWnd_x                                     0x14059CB90
#define CListWnd__SetItemIcon_x                                    0x14059F300
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405987D0
#define CListWnd__SetVScrollPos_x                                  0x14059F870

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043ED30

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082ADD8
#define MapViewMap__Clear_x                                        0x1404408B0
#define MapViewMap__SetZoom_x                                      0x140446E70
#define MapViewMap__HandleLButtonDown_x                            0x1404439B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404685C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046EBA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046F350
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140472B70
#define CMerchantWnd__SelectBuySellSlot_x                          0x140471EC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140476E20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14061D6D0
#define CPacketScrambler__hton_x                                   0x14061D6C0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B2EA0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B2DE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B34D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B3280
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B21D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B2160
#define CSidlManagerBase__CreateXWnd_x                             0x1405B17A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404DB1E0
#define CSidlManager__CreateXWnd_x                                 0x1404DB3A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140582D40
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140582C10
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CF5A0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140582EC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405823A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140582470
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140582640
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140583560
#define CSidlScreenWnd__EnableIniStorage_x                         0x140583790
#define CSidlScreenWnd__GetChildItem_x                             0x140583930
#define CSidlScreenWnd__GetSidlPiece_x                             0x140583B80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058FE30 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140583EF0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140584260
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140584B30
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140585420
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA6060
#define CSidlScreenWnd__StoreIniInfo_x                             0x140585A70
#define CSidlScreenWnd__StoreIniVis_x                              0x140586270
#define CSidlScreenWnd__vftable_x                                  0x14084F840
#define CSidlScreenWnd__WndNotification_x                          0x1405862C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403321B0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403325B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403324F0
#define CSkillMgr__IsActivatedSkill_x                              0x140332950
#define CSkillMgr__IsCombatSkill_x                                 0x140332990

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405A0400
#define CSliderWnd__SetValue_x                                     0x1405A0C10
#define CSliderWnd__SetNumTicks_x                                  0x1405A0A90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404E1830

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BE130
#define CStmlWnd__CalculateHSBRange_x                              0x14058F7E0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BF060
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BFAE0
#define CStmlWnd__ForceParseNow_x                                  0x1405BFB80
#define CStmlWnd__GetVisibleText_x                                 0x1405C0250
#define CStmlWnd__MakeStmlColorTag_x                               0x1405C1FB0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405C1FF0
#define CStmlWnd__SetSTMLText_x                                    0x1405C8FC0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C9170
#define CStmlWnd__UpdateHistoryString_x                            0x1405C9500

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A0FE0
#define CTabWnd__DrawCurrentPage_x                                 0x1405A1080
#define CTabWnd__DrawTab_x                                         0x1405A1450
#define CTabWnd__GetTabRect_x                                      0x1405A1AB0
#define CTabWnd__InsertPage_x                                      0x1405A1D80
#define CTabWnd__RemovePage_x                                      0x1405A2010
#define CTabWnd__SetPage_x                                         0x1405A2170
#define CTabWnd__UpdatePage_x                                      0x1405A2470

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BC190
#define CPageWnd__SetTabText_x                                     0x1405BC200

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DF2D0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DF6E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405AA7F0
#define CTextureFont__DrawWrappedText1_x                           0x1405AA700
#define CTextureFont__DrawWrappedText2_x                           0x1405AA920
#define CTextureFont__GetTextExtent_x                              0x1405AACD0
#define CTextureFont__GetHeight_x                                  0x1405AAC90

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CDD00

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140581F80

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD2850
#define CXStr__gCXStrAccess_x                                      0x140CA5EA8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058B030
#define CXWnd__ClrFocus_x                                          0x14058B270
#define CXWnd__Destroy_x                                           0x14058B3B0
#define CXWnd__DoAllDrawing_x                                      0x14058B4B0
#define CXWnd__DrawColoredRect_x                                   0x14058BC80
#define CXWnd__DrawTooltip_x                                       0x14058D300
#define CXWnd__DrawTooltipAtPoint_x                                0x14058D3B0
#define CXWnd__GetChildItem_x                                      0x14058DCC0
#define CXWnd__GetChildWndAt_x                                     0x14058DD70
#define CXWnd__GetClientRect_x                                     0x14058E030
#define CXWnd__GetClientClipRect_x                                 0x14058DEE0
#define CXWnd__GetRelativeRect_x                                   0x14058F920
#define CXWnd__GetScreenClipRect_x                                 0x14058FA30
#define CXWnd__GetScreenRect_x                                     0x14058FBB0
#define CXWnd__GetTooltipRect_x                                    0x14058FD30
#define CXWnd__IsActive_x                                          0x1405902F0
#define CXWnd__IsDescendantOf_x                                    0x140590320
#define CXWnd__IsReallyVisible_x                                   0x140590390
#define CXWnd__IsType_x                                            0x1405903D0
#define CXWnd__Minimize_x                                          0x1405904D0
#define CXWnd__ProcessTransition_x                                 0x1405913C0
#define CXWnd__Resize_x                                            0x1405914D0
#define CXWnd__Right_x                                             0x140591570
#define CXWnd__SetFocus_x                                          0x140591930
#define CXWnd__SetFont_x                                           0x140591980
#define CXWnd__SetKeyTooltip_x                                     0x140591A90
#define CXWnd__SetMouseOver_x                                      0x140591BC0
#define CXWnd__SetParent_x                                         0x140591C40
#define CXWnd__StartFade_x                                         0x140592080
#define CXWnd__vftable_x                                           0x14084FE78
#define CXWnd__CXWnd_x                                             0x140589BC0
#define CXWnd__dCXWnd_x                                            0x14058A510

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D4760

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A4CB0
#define CXWndManager__DrawCursor_x                                 0x1405A4F90
#define CXWndManager__DrawWindows_x                                0x1405A51E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A58A0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A58E0
#define CXWndManager__RemoveWnd_x                                  0x1405A8EB0

// CDBStr
#define CDBStr__GetString_x                                        0x1401A1230

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406265B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F34F0
#define CCharacterListWnd__EnterWorld_x                            0x1400F21F0
#define CCharacterListWnd__Quit_x                                  0x1400F34D0
#define CCharacterListWnd__UpdateList_x                            0x1400F41F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F5DD0
#define ItemBase__CreateItemTagString_x                            0x1405F6850
#define ItemBase__GetImageNum_x                                    0x1405F8D40
#define ItemBase__GetItemValue_x                                   0x1405FA810
#define ItemBase__IsEmpty_x                                        0x1405FC430
#define ItemBase__IsKeyRingItem_x                                  0x1405FCB60
#define ItemBase__ValueSellMerchant_x                              0x140600BA0
#define ItemClient__CanDrop_x                                      0x1402BE7C0
#define ItemClient__CanGoInBag_x                                   0x1402BE8F0
#define ItemClient__CreateItemClient_x                             0x1402BEBD0
#define ItemClient__dItemClient_x                                  0x1402BE630

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401C05B0
#define EQ_LoadingS__Array_x                                       0x140ABECB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060CD50
#define PcBase__GetCombatAbility_x                                 0x14060D3F0
#define PcBase__GetCombatAbilityTimer_x                            0x14060D490
#define PcBase__GetItemContainedRealEstateIds_x                    0x14060DBE0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14060E570
#define PcClient__AlertInventoryChanged_x                          0x1402E09D0
#define PcClient__GetConLevel_x                                    0x1402E0F20  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E35C0
#define PcClient__HasLoreItem_x                                    0x1402E46D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F15F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F4130

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14022E390  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14022E540  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14022E670  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14022E5B0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140266BE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14019BA80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140668D90
#define PlayerBase__CanSee1_x                                      0x140668E60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140669390
#define PlayerBase__HasProperty_x                                  0x1406695B0
#define PlayerBase__IsTargetable_x                                 0x140669670
#define PlayerClient__ChangeBoneStringSprite_x                     0x140300010
#define PlayerClient__GetPcClient_x                                0x1403026D0
#define PlayerClient__PlayerClient_x                               0x1402F9360
#define PlayerClient__SetNameSpriteState_x                         0x140305B70
#define PlayerClient__SetNameSpriteTint_x                          0x140306B30
#define PlayerZoneClient__ChangeHeight_x                           0x140314CC0
#define PlayerZoneClient__DoAttack_x                               0x1403159B0
#define PlayerZoneClient__GetLevel_x                               0x1403190E0
#define PlayerZoneClient__IsValidTeleport_x                        0x140269990
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401AF600

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030EAB0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030EAE0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030EB90
#define PlayerManagerClient__CreatePlayer_x                        0x14030E4A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140668A10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C3BC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C37C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C3830
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C3B50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C3CE0
#define KeypressHandler__HandleKeyUp_x                             0x1402C3DE0
#define KeypressHandler__SaveKeymapping_x                          0x1402C3A60  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406241C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14061ED70

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E9D40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EF600
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F1CF0
#define PcZoneClient__RemovePetEffect_x                            0x1402F4230
#define PcZoneClient__HasAlternateAbility_x                        0x1402F29E0
#define PcZoneClient__CanEquipItem_x                               0x1402ED910
#define PcZoneClient__GetItemByID_x                                0x1402F0690
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F3FB0
#define PcZoneClient__BandolierSwap_x                              0x1402EC8F0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402F1C40

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026E450

// IconCache
#define IconCache__GetIcon_x                                       0x1403C0260

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B6CD0
#define CContainerMgr__CloseContainer_x                            0x1403B6610
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B7040

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404A15F0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B69F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140432E00
#define CLootWnd__RequestLootSlot_x                                0x140433E00

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401F05A0
#define EQ_Spell__SpellAffects_x                                   0x1401F1860
#define EQ_Spell__SpellAffectBase_x                                0x1401F17C0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400FBF50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400FBF00
#define EQ_Spell__IsSPAStacking_x                                  0x1401F1480
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401F1040
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401F0910

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E4780

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404FB670  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404FB6B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404FABB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404FA160

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140502710  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401982B0
#define CTaskManager__GetTaskStatus_x                              0x1401983C0
#define CTaskManager__GetElementDescription_x                      0x140197F40

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401EE920
#define EqSoundManager__PlayScriptMp3_x                            0x1401ED720
#define EqSoundManager__SoundAssistPlay_x                          0x140337580  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403378B0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140592E10
#define CTextureAnimation__SetCurCell_x                            0x140593120

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B4C70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063D140
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063D1C0
#define CharacterBase__IsExpansionFlag_x                           0x140210BA0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403973A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140397D00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140399170

// messages
#define msg_spell_worn_off_x                                       0x140224E20
#define msg_new_text_x                                             0x140220790
#define __msgTokenTextParam_x                                      0x140218570
#define msgTokenText_x                                             0x140218490

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140338F50
#define SpellManager__GetSpellByGroupAndRank_x                     0x140338E70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140677B80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14042C280

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BC360
#define CCursorAttachment__AttachToCursor1_x                       0x1403BAF60
#define CCursorAttachment__Deactivate_x                            0x1403BC860

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CC1A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CC390
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CC3A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401682E0
#define CFindItemWnd__Update_x                                     0x140168C80
#define CFindItemWnd__PickupSelectedItem_x                         0x140162770

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140171C30
#define LootFiltersManager__GetItemFilterData_x                    0x140172740
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140172FE0
#define LootFiltersManager__SetItemLootFilter_x                    0x140173290

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140484C60

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067BF80
#define CResolutionHandler__GetWindowedStyle_x                     0x140331D10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B30A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140641160  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140641050  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D5BA0
#define CGroupWnd__UpdateDisplay_x                                 0x1403D5780

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FCC30
#define ItemBase__IsLoreEquipped_x                                 0x1405FCCC0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D7240

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140266D40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140266CD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140266D10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C490

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401430A0
#define FactionManagerClient__HandleFactionMessage_x               0x140143450
#define FactionManagerClient__GetFactionStanding_x                 0x140142870
#define FactionManagerClient__GetMaxFaction_x                      0x140142870
#define FactionManagerClient__GetMinFaction_x                      0x140142720

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400D15A0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14014E760

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C8EE0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C8260
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C8D00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C8C80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033DC40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032C490

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14022E700

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405868B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400AA140

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034EE60

// AchievementManager
#define AchievementManager__Instance_x                             0x1400B1650

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
