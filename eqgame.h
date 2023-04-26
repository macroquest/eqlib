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

#define __ClientDate                                               20230424u
#define __ExpectedVersionDate                                     "Apr 24 2023"
#define __ExpectedVersionTime                                     "13:27:41"
#define __ActualVersionDate_x                                      0x14080B348
#define __ActualVersionTime_x                                      0x14080B338
#define __ActualVersionBuild_x                                     0x1407F8AE8

// Memory Protection
#define __MemChecker0_x                                            0x1402C8530
#define __MemChecker1_x                                            0x1405701E0
#define __MemChecker4_x                                            0x1402979D0
#define __EncryptPad0_x                                            0x140AC5860

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C01150
#define instEQZoneInfo_x                                           0x140C01344 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402308D0
#define __gfMaxZoomCameraDistance_x                                0x1408012D0
#define __gfMaxCameraDistance_x                                    0x14083FD74
#define __CurrentSocial_x                                          0x14098193C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ABD1A0
#define g_eqCommandStates_x                                        0x140ABE210
#define __CommandList_x                                            0x140ABE450
#define __ScreenMode_x                                             0x140B489FC
#define __gWorld_x                                                 0x140BF9BB0
#define __gpbCommandEvent_x                                        0x140BF95D8
#define __ServerHost_x                                             0x140BF97B8
#define __Guilds_x                                                 0x140BFFD00
#define __MouseEventTime_x                                         0x140C76650
#define DI8__Mouse_Check_x                                         0x140C7A788
#define __heqmain_x                                                0x140C7CC20
#define DI8__Mouse_x                                               0x140C7CC78
#define __HWnd_x                                                   0x140C7D728
#define __Mouse_x                                                  0x140C7CC38
#define DI8__Main_x                                                0x140C7CC50
#define DI8__Keyboard_x                                            0x140C7CC58
#define __LoginName_x                                              0x140C7D3BC
#define __CurrentMapLabel_x                                        0x140C90900
#define __LabelCache_x                                             0x140C914D0
#define __SubscriptionType_x                                       0x140CC62E0
#define Teleport_Table_Size_x                                      0x140BF9660
#define Teleport_Table_x                                           0x140BF9BF0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140BFC090
#define pinstActiveBanker_x                                        0x140BF9AF8
#define pinstActiveCorpse_x                                        0x140BF9AE8
#define pinstActiveGMaster_x                                       0x140BF9AF0
#define pinstActiveMerchant_x                                      0x140BF9AE0
#define pinstAltAdvManager_x                                       0x140B498B8
#define pinstCEverQuest_x                                          0x140C7CC70
#define pinstCamActor_x                                            0x140B489E8
#define pinstCDBStr_x                                              0x140B486C0
#define pinstCDisplay_x                                            0x140BFBC58
#define pinstControlledPlayer_x                                    0x140BF9B88
#define pinstCResolutionHandler_x                                  0x1412FEE88
#define pinstCSidlManager_x                                        0x140CA26E0
#define pinstCXWndManager_x                                        0x140CA26D8
#define instDynamicZone_x                                          0x140BFFBC0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140BFFC0E
#define instExpeditionName_x                                       0x140BFFC4E
#define pinstDZMember_x                                            0x140BFFCD8
#define pinstDZTimerInfo_x                                         0x140BFFCE0
#define pinstEqLogin_x                                             0x140C7CD00
#define instTribute_x                                              0x140AB8830
#define pinstEQSoundManager_x                                      0x140B49C38
#define pinstEQSpellStrings_x                                      0x140B2D2E0
#define pinstSGraphicsEngine_x                                     0x1412FEC08
#define pinstLocalPC_x                                             0x140BF9BC8
#define pinstLocalPlayer_x                                         0x140BF9AD8
#define pinstCMercenaryClientManager_x                             0x140C77F08
#define pinstModelPlayer_x                                         0x140BF9B08
#define pinstRenderInterface_x                                     0x1412FEC20
#define pinstSkillMgr_x                                            0x140C79BA0
#define pinstSpawnManager_x                                        0x140C782C0
#define pinstSpellManager_x                                        0x140C79C08
#define pinstStringTable_x                                         0x140BF9BD0
#define pinstSwitchManager_x                                       0x140BF9550
#define pinstTarget_x                                              0x140BF9B80
#define pinstTaskMember_x                                          0x140AB8820 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140BF9B90
#define pinstTradeTarget_x                                         0x140BF9B00
#define instTributeActive_x                                        0x140AB8859
#define pinstViewActor_x                                           0x140B489E0
#define pinstWorldData_x                                           0x140BFBC50
#define pinstPlayerPath_x                                          0x140C782E8
#define pinstTargetIndicator_x                                     0x140C79CB8
#define EQObject_Top_x                                             0x140BF9BA8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C8DA58
#define pinstCContainerMgr_x                                       0x140B48C78
#define pinstCContextMenuManager_x                                 0x140CA24B0
#define pinstCInvSlotMgr_x                                         0x140B48C60
#define pinstCItemDisplayManager_x                                 0x140C904D0
#define pinstCPopupWndManager_x                                    0x140C90D60
#define pinstCSpellDisplayMgr_x                                    0x140C913B0
#define pinstCTaskManager_x                                        0x140981C70
#define pinstEQSuiteTextureLoader_x                                0x140ACEEE0
#define pinstItemIconCache_x                                       0x140C8DDB8
#define pinstLootFiltersManager_x                                  0x140B48118
#define pinstGFViewListener_x                                      0x141307E10


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140258970
#define __CastRay_x                                                0x140251190
#define __CastRay2_x                                               0x140250EA0
#define __ConvertItemTags_x                                        0x140251590
#define __CleanItemTags_x                                          0x1400ABD50
#define __CreateCascadeMenuItems_x                                 0x1401A2D90
#define __DoesFileExist_x                                          0x1405749C0
#define __EQGetTime_x                                              0x140570790
#define __ExecuteCmd_x                                             0x140228300
#define __FixHeading_x                                             0x1406731F0
#define __FlushDxKeyboard_x                                        0x140346670
#define __get_bearing_x                                            0x14025AB60
#define __get_melee_range_x                                        0x14025AC50
#define __GetAnimationCache_x                                      0x1403BE570
#define __GetGaugeValueFromEQ_x                                    0x1404E83A0
#define __GetLabelFromEQ_x                                         0x1404E9980
#define __GetXTargetType_x                                         0x1406744D0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140673270
#define __HelpPath_x                                               0x140C76518   // Why?
#define __NewUIINI_x                                               0x1404F4B40   // Why?
#define __ProcessGameEvents_x                                      0x14028CE40
#define __ProcessKeyboardEvents_x                                  0x140347ED0
#define __ProcessMouseEvents_x                                     0x14028E330
#define __SaveColors_x                                             0x1401B2BF0
#define __STMLToText_x                                             0x140585AA0
#define __WndProc_x                                                0x140344DF0
#define CMemoryMappedFile__SetFile_x                               0x1407AAE90
#define DrawNetStatus_x                                            0x1402D7320
#define Util__FastTime_x                                           0x140571490
#define __eq_delete_x                                              0x14069D094
#define __eq_new_x                                                 0x14069D050
#define __CopyLayout_x                                             0x1402C4A00
#define __ThrottleFrameRate_x                                      0x14027C78C
#define __ThrottleFrameRateEnd_x                                   0x14027C7EC

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140357020
#define CAAWnd__Update_x                                           0x140357320
#define CAAWnd__UpdateSelected_x                                   0x1403582E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400CDF60
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C6890
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407E73D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400CE810

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401BDC40
#define AltAdvManager__IsAbilityReady_x                            0x1401BDEC0
#define AltAdvManager__GetAAById_x                                 0x1401BD510
#define AltAdvManager__CanTrainAbility_x                           0x1401BD340
#define AltAdvManager__CanSeeAbility_x                             0x1401BD000

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400F4520
#define CharacterZoneClient__CalcAffectChange_x                    0x1400F52D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400F54E0
#define CharacterZoneClient__CanUseItem_x                          0x140109C40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F5DD0
#define CharacterZoneClient__CastSpell_x                           0x1400F5E70
#define CharacterZoneClient__CharacterZoneClient_x                 0x140105720
#define CharacterZoneClient__Cur_HP_x                              0x14010B320
#define CharacterZoneClient__Cur_Mana_x                            0x14010B4E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400F8F00
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140111CD0
#define CharacterZoneClient__GetBaseSkill_x                        0x140120C50  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400FA3E0
#define CharacterZoneClient__GetCurrentMod_x                       0x140109120
#define CharacterZoneClient__GetCursorItemCount_x                  0x140113820
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140112720
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400FA5B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EAB60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC530
#define CharacterZoneClient__GetHPRegen_x                          0x140112E50
#define CharacterZoneClient__GetItemCountInInventory_x             0x14010AF90
#define CharacterZoneClient__GetItemCountWorn_x                    0x140113AB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400FA6B0
#define CharacterZoneClient__GetManaRegen_x                        0x140114800
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FA8C0
#define CharacterZoneClient__GetModCap_x                           0x14011BF50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400FA960
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400FAB70
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400EF6D0
#define CharacterZoneClient__HasSkill_x                            0x140117780
#define CharacterZoneClient__HitBySpell_x                          0x1400FB610
#define CharacterZoneClient__IsStackBlocked_x                      0x1400FEDF0
#define CharacterZoneClient__MakeMeVisible_x                       0x14011B9E0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F13A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011BD20
#define CharacterZoneClient__Max_Mana_x                            0x1402F1590  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14011C1E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x140102410
#define CharacterZoneClient__SpellDuration_x                       0x1401031D0
#define CharacterZoneClient__TotalEffect_x                         0x140104510
#define CharacterZoneClient__UseSkill_x                            0x140121BA0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403755E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14037F860

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14037B770
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14037A800

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140381F10

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14084DCA0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A33D0
#define CChatWindowManager__InitContextMenu_x                      0x1403A3560
#define CChatWindowManager__FreeChatWindow_x                       0x1403A2620
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403A9D80
#define CChatWindowManager__CreateChatWindow_x                     0x1403A1F60

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140129D00

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403AAD70
#define CChatWindow__Clear_x                                       0x1403ABBB0
#define CChatWindow__WndNotification_x                             0x1403ACDA0
#define CChatWindow__AddHistory_x                                  0x1403AB6B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A0880
#define CContextMenu__RemoveMenuItem_x                             0x1405A0C70
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A0C40
#define CContextMenu__CheckMenuItem_x                              0x1405A0AB0
#define CContextMenu__SetMenuItem_x                                0x1405A0C90
#define CContextMenu__AddSeparator_x                               0x1405A09F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059FAD0
#define CContextMenuManager__RemoveMenu_x                          0x1405A00B0
#define CContextMenuManager__PopupMenu_x                           0x14059FDF0
#define CContextMenuManager__Flush_x                               0x14059FB50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403B8330

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14063C840
#define CChatService__GetFriendName_x                              0x14063C850

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140590A10
#define CComboWnd__Draw_x                                          0x140590B10
#define CComboWnd__GetCurChoice_x                                  0x140590DF0  // unused
#define CComboWnd__GetListRect_x                                   0x140590E90
#define CComboWnd__InsertChoice_x                                  0x1405911D0
#define CComboWnd__SetColors_x                                     0x140591560
#define CComboWnd__SetChoice_x                                     0x140591520
#define CComboWnd__GetItemCount_x                                  0x140590E80
#define CComboWnd__GetCurChoiceText_x                              0x140590E30  // unused
#define CComboWnd__GetChoiceText_x                                 0x140590DC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140591290

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403B60F0
#define CContainerWnd__SetContainer_x                              0x140402800
#define CContainerWnd__vftable_x                                   0x14081A4C8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4879C
#define CDisplay__ZoneMainUI_x                                     0x1405C7DF0
#define CDisplay__PreZoneMainUI_x                                  0x1401AFBB0
#define CDisplay__CleanGameUI_x                                    0x1401A1E90
#define CDisplay__GetClickedActor_x                                0x1401A6020
#define CDisplay__GetUserDefinedColor_x                            0x1401A6C30
#define CDisplay__InitCharSelectUI_x                               0x1401A6EE0
#define CDisplay__ReloadUI_x                                       0x1401B1E90
#define CDisplay__WriteTextHD2_x                                   0x1401B8EA0
#define CDisplay__TrueDistance_x                                   0x1401B8B80
#define CDisplay__SetViewActor_x                                   0x1401B53E0
#define CDisplay__GetFloorHeight_x                                 0x1401A6280
#define CDisplay__ToggleScreenshotMode_x                           0x1401B8680
#define CDisplay__RealRender_World_x                               0x1401B1280

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D2140
#define CEditWnd__DrawCaret_x                                      0x1405B6750  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B6C10
#define CEditWnd__GetCaretPt_x                                     0x1405B6E90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B6ED0
#define CEditWnd__GetDisplayString_x                               0x1405B7140
#define CEditWnd__GetHorzOffset_x                                  0x1405B7380
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B74D0
#define CEditWnd__GetSelStartPt_x                                  0x1405B77B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B7600
#define CEditWnd__PointFromPrintableChar_x                         0x1405B8360
#define CEditWnd__ReplaceSelection_x                               0x1405B8710
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B8BB0
#define CEditWnd__SetEditable_x                                    0x1405B8E40
#define CEditWnd__SetWindowText_x                                  0x1405B8E70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027D760
#define CEverQuest__ClickedPlayer_x                                0x140273690
#define CEverQuest__CreateTargetIndicator_x                        0x140273F50
#define CEverQuest__DoTellWindow_x                                 0x140129A10 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012A2D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027F190
#define CEverQuest__dsp_chat_x                                     0x140129450 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A92C0
#define CEverQuest__Emote_x                                        0x14027FB40
#define CEverQuest__GetBodyTypeDesc_x                              0x1402808E0
#define CEverQuest__GetClassDesc_x                                 0x140280940
#define CEverQuest__GetClassThreeLetterCode_x                      0x140280D10
#define CEverQuest__GetDeityDesc_x                                 0x140280FC0
#define CEverQuest__GetLangDesc_x                                  0x1402813F0
#define CEverQuest__GetRaceDesc_x                                  0x140281790
#define CEverQuest__InterpretCmd_x                                 0x1402830A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140298050
#define CEverQuest__LMouseUp_x                                     0x140284A40
#define CEverQuest__RightClickedOnPlayer_x                         0x1402958B0
#define CEverQuest__RMouseUp_x                                     0x14028EEB0
#define CEverQuest__SetGameState_x                                 0x14029A580
#define CEverQuest__UPCNotificationFlush_x                         0x14029FD70 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402846C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402901E0
#define CEverQuest__ReportSuccessfulHit_x                          0x140291090

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403C8930

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E48A0
#define CGuild__GetGuildName_x                                     0x1400E48E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403EAC00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BA5C0
#define CHotButton__SetCheck_x                                     0x1402BA890

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403FBE90
#define CInvSlotMgr__MoveItem_x                                    0x1403FC010
#define CInvSlotMgr__SelectSlot_x                                  0x1403FD970

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F9230
#define CInvSlot__SliderComplete_x                                 0x1403FA510
#define CInvSlot__GetItemBase_x                                    0x1403F5C20
#define CInvSlot__UpdateItem_x                                     0x1403FA9C0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FE4F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041F8C0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404222E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14041C2E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041DB30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041ECE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E4F60
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E6B20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051FF50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140418A20

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14016BE40

// CLabel
#define CLabel__UpdateText_x                                       0x1404296D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405943A0
#define CListWnd__dCListWnd_x                                      0x1405947F0
#define CListWnd__vftable_x                                        0x14084C568
#define CListWnd__AddColumn_x                                      0x140594E90
#define CListWnd__AddColumn1_x                                     0x140594F30
#define CListWnd__AddLine_x                                        0x140595090
#define CListWnd__AddString_x                                      0x140595620
#define CListWnd__CalculateFirstVisibleLine_x                      0x140595B90
#define CListWnd__CalculateVSBRange_x                              0x140595E70
#define CListWnd__ClearSel_x                                       0x140596020
#define CListWnd__ClearAllSel_x                                    0x140595FC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140596080
#define CListWnd__Compare_x                                        0x140596240
#define CListWnd__Draw_x                                           0x140596710
#define CListWnd__DrawColumnSeparators_x                           0x1405972C0
#define CListWnd__DrawHeader_x                                     0x140597380
#define CListWnd__DrawItem_x                                       0x140597A60
#define CListWnd__DrawLine_x                                       0x1405983E0
#define CListWnd__DrawSeparator_x                                  0x1405988A0
#define CListWnd__EnableLine_x                                     0x140598CC0
#define CListWnd__EnsureVisible_x                                  0x140598D20
#define CListWnd__ExtendSel_x                                      0x140598E20
#define CListWnd__GetColumnMinWidth_x                              0x140599150
#define CListWnd__GetColumnWidth_x                                 0x1405991D0
#define CListWnd__GetCurSel_x                                      0x1405992D0
#define CListWnd__GetItemData_x                                    0x140599650
#define CListWnd__GetItemHeight_x                                  0x140599690
#define CListWnd__GetItemRect_x                                    0x1405998B0
#define CListWnd__GetItemText_x                                    0x140599B50
#define CListWnd__GetSelList_x                                     0x140599DA0
#define CListWnd__GetSeparatorRect_x                               0x140599F90
#define CListWnd__InsertLine_x                                     0x14059B410
#define CListWnd__RemoveLine_x                                     0x14059BA80
#define CListWnd__SetColors_x                                      0x14059BE50
#define CListWnd__SetColumnJustification_x                         0x14059BE70
#define CListWnd__SetColumnLabel_x                                 0x14059BEF0
#define CListWnd__SetColumnWidth_x                                 0x14059C090
#define CListWnd__SetCurSel_x                                      0x14059C160
#define CListWnd__SetItemColor_x                                   0x14059C3D0
#define CListWnd__SetItemData_x                                    0x14059C470
#define CListWnd__SetItemText_x                                    0x14059C6B0
#define CListWnd__Sort_x                                           0x14059CAC0
#define CListWnd__ToggleSel_x                                      0x14059CC30
#define CListWnd__SetColumnsSizable_x                              0x14059C0E0
#define CListWnd__SetItemWnd_x                                     0x14059C7E0
#define CListWnd__GetItemWnd_x                                     0x140599D30
#define CListWnd__SetItemIcon_x                                    0x14059C4B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140595960
#define CListWnd__SetVScrollPos_x                                  0x14059CA20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14043C8D0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140826D48
#define MapViewMap__Clear_x                                        0x14043E450
#define MapViewMap__SetZoom_x                                      0x140444A10
#define MapViewMap__HandleLButtonDown_x                            0x140441550

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140466160  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14046C720
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14046CEC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404706E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046FA30
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140474990

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14061A850
#define CPacketScrambler__hton_x                                   0x14061A840

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405AFFF0
#define CSidlManagerBase__FindAnimation1_x                         0x1405AFF30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B0620
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B03D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405AF330
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405AF2C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AE900

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D8500
#define CSidlManager__CreateXWnd_x                                 0x1404D86C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140580030
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057FF10
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CC700 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405801B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057F6A0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057F770
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F940
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140580850
#define CSidlScreenWnd__EnableIniStorage_x                         0x140580A80
#define CSidlScreenWnd__GetChildItem_x                             0x140580C20
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580E70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058D030 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405811E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140581550
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581E00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405826F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA1AE0
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582D30
#define CSidlScreenWnd__StoreIniVis_x                              0x140583520
#define CSidlScreenWnd__vftable_x                                  0x14084B7B0
#define CSidlScreenWnd__WndNotification_x                          0x140583570

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140330460 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140330860 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403307A0
#define CSkillMgr__IsActivatedSkill_x                              0x140330C00
#define CSkillMgr__IsCombatSkill_x                                 0x140330C40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F4BD0
#define CSliderWnd__SetValue_x                                     0x14059DDA0
#define CSliderWnd__SetNumTicks_x                                  0x14059DC20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DEB50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405BB270
#define CStmlWnd__CalculateHSBRange_x                              0x14058C9F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405BC1A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405BCC20
#define CStmlWnd__ForceParseNow_x                                  0x1405BCCC0
#define CStmlWnd__GetVisibleText_x                                 0x1405BD390
#define CStmlWnd__MakeStmlColorTag_x                               0x1405BF0F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405BF130
#define CStmlWnd__SetSTMLText_x                                    0x1405C6100
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405C62B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405C6640

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059E170
#define CTabWnd__DrawCurrentPage_x                                 0x14059E210
#define CTabWnd__DrawTab_x                                         0x14059E5E0
#define CTabWnd__GetTabRect_x                                      0x14059EC40
#define CTabWnd__InsertPage_x                                      0x14059EF10
#define CTabWnd__RemovePage_x                                      0x14059F1A0
#define CTabWnd__SetPage_x                                         0x14059F300
#define CTabWnd__UpdatePage_x                                      0x14059F600

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B92D0
#define CPageWnd__SetTabText_x                                     0x1405B9340

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DE0C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DE4D0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A7960
#define CTextureFont__DrawWrappedText1_x                           0x1405A7870
#define CTextureFont__DrawWrappedText2_x                           0x1405A7A90
#define CTextureFont__GetTextExtent_x                              0x1405A7E40
#define CTextureFont__GetHeight_x                                  0x1405A7E00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CAE60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057F280

// CXStr
#define CXStr__gFreeLists_x                                        0x140ACE850
#define CXStr__gCXStrAccess_x                                      0x140CA1928

// CXWnd
#define CXWnd__BringToTop_x                                        0x140588250
#define CXWnd__ClrFocus_x                                          0x140588490
#define CXWnd__Destroy_x                                           0x1405885D0
#define CXWnd__DoAllDrawing_x                                      0x1405886E0
#define CXWnd__DrawColoredRect_x                                   0x140588EB0
#define CXWnd__DrawTooltip_x                                       0x14058A540
#define CXWnd__DrawTooltipAtPoint_x                                0x14058A5F0
#define CXWnd__GetChildItem_x                                      0x14058AF00
#define CXWnd__GetChildWndAt_x                                     0x14058AFC0
#define CXWnd__GetClientRect_x                                     0x14058B260
#define CXWnd__GetClientClipRect_x                                 0x14058B120
#define CXWnd__GetRelativeRect_x                                   0x14058CB20
#define CXWnd__GetScreenClipRect_x                                 0x14058CC30
#define CXWnd__GetScreenRect_x                                     0x14058CDB0
#define CXWnd__GetTooltipRect_x                                    0x14058CF30
#define CXWnd__IsActive_x                                          0x14058D4F0
#define CXWnd__IsDescendantOf_x                                    0x14058D520
#define CXWnd__IsReallyVisible_x                                   0x14058D590
#define CXWnd__IsType_x                                            0x14058D5D0
#define CXWnd__Minimize_x                                          0x14058D6D0
#define CXWnd__ProcessTransition_x                                 0x14058E560
#define CXWnd__Resize_x                                            0x14058E670
#define CXWnd__Right_x                                             0x14058E710
#define CXWnd__SetFocus_x                                          0x14058EAC0
#define CXWnd__SetFont_x                                           0x14058EB10
#define CXWnd__SetKeyTooltip_x                                     0x14058EC20
#define CXWnd__SetMouseOver_x                                      0x14058ED60
#define CXWnd__SetParent_x                                         0x14058EDE0
#define CXWnd__StartFade_x                                         0x14058F230
#define CXWnd__vftable_x                                           0x14084BDE8
#define CXWnd__CXWnd_x                                             0x140586E00
#define CXWnd__dCXWnd_x                                            0x140587740

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D18C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A1E40
#define CXWndManager__DrawCursor_x                                 0x1405A2120
#define CXWndManager__DrawWindows_x                                0x1405A2370
#define CXWndManager__GetKeyboardFlags_x                           0x1405A2A30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A2A70
#define CXWndManager__RemoveWnd_x                                  0x1405A6020

// CDBStr
#define CDBStr__GetString_x                                        0x1401A0080

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140623720

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F22F0
#define CCharacterListWnd__EnterWorld_x                            0x1400F0FF0
#define CCharacterListWnd__Quit_x                                  0x1400F22D0
#define CCharacterListWnd__UpdateList_x                            0x1400F2FF0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F2F00
#define ItemBase__CreateItemTagString_x                            0x1405F3980
#define ItemBase__GetImageNum_x                                    0x1405F5E30
#define ItemBase__GetItemValue_x                                   0x1405F7900
#define ItemBase__IsEmpty_x                                        0x1405F9650
#define ItemBase__IsKeyRingItem_x                                  0x1405F9D50
#define ItemBase__ValueSellMerchant_x                              0x1405FDD90
#define ItemClient__CanDrop_x                                      0x1402BCB40
#define ItemClient__CanGoInBag_x                                   0x1402BCC70
#define ItemClient__CreateItemClient_x                             0x1402BCF50
#define ItemClient__dItemClient_x                                  0x1402BC9B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401BF3E0
#define EQ_LoadingS__Array_x                                       0x140ABACB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140609EE0
#define PcBase__GetCombatAbility_x                                 0x14060A580
#define PcBase__GetCombatAbilityTimer_x                            0x14060A620
#define PcBase__GetItemContainedRealEstateIds_x                    0x14060AD70
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14060B700
#define PcClient__AlertInventoryChanged_x                          0x1402DED00
#define PcClient__GetConLevel_x                                    0x1402DF250  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E18F0
#define PcClient__HasLoreItem_x                                    0x1402E29F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EF8E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F2410

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14022C970  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14022CB20  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14022CC50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14022CB90  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402650C0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14019A860

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140665EF0
#define PlayerBase__CanSee1_x                                      0x140665FC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406664F0
#define PlayerBase__HasProperty_x                                  0x140666710
#define PlayerBase__IsTargetable_x                                 0x1406667D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE300
#define PlayerClient__GetPcClient_x                                0x1403009C0
#define PlayerClient__PlayerClient_x                               0x1402F7650
#define PlayerClient__SetNameSpriteState_x                         0x140303E60
#define PlayerClient__SetNameSpriteTint_x                          0x140304E20
#define PlayerZoneClient__ChangeHeight_x                           0x140312F70
#define PlayerZoneClient__DoAttack_x                               0x140313C60
#define PlayerZoneClient__GetLevel_x                               0x140317390
#define PlayerZoneClient__IsValidTeleport_x                        0x140267E70
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401AE450

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030CD60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030CD90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030CE40
#define PlayerManagerClient__CreatePlayer_x                        0x14030C750
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140665B70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C1F20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C1B20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C1B90
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C1EB0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C2040
#define KeypressHandler__HandleKeyUp_x                             0x1402C2140
#define KeypressHandler__SaveKeymapping_x                          0x1402C1DC0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140621330  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14061BEF0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E8040  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402ED900
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EFFE0
#define PcZoneClient__RemovePetEffect_x                            0x1402F2510
#define PcZoneClient__HasAlternateAbility_x                        0x1402F0CC0
#define PcZoneClient__CanEquipItem_x                               0x1402EBC10
#define PcZoneClient__GetItemByID_x                                0x1402EE980
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F2290
#define PcZoneClient__BandolierSwap_x                              0x1402EABF0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402EFF30

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026C930

// IconCache
#define IconCache__GetIcon_x                                       0x1403BE5A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403B4F40
#define CContainerMgr__CloseContainer_x                            0x1403B4880
#define CContainerMgr__OpenExperimentContainer_x                   0x1403B52B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049E890

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B4EC0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404309A0
#define CLootWnd__RequestLootSlot_x                                0x1404319A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401EF340
#define EQ_Spell__SpellAffects_x                                   0x1401F0600
#define EQ_Spell__SpellAffectBase_x                                0x1401F0560
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400FAD50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400FAD00
#define EQ_Spell__IsSPAStacking_x                                  0x1401F0220
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401EFDE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401EF6B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E3540

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404F8970  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404F89B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F7EB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F7460

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FFA00  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140197090
#define CTaskManager__GetTaskStatus_x                              0x1401971A0
#define CTaskManager__GetElementDescription_x                      0x140196D20

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401ED6C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401EC4C0
#define EqSoundManager__SoundAssistPlay_x                          0x140335830  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140335B60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058FFA0
#define CTextureAnimation__SetCurCell_x                            0x1405902B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B3140

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063A2A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063A320
#define CharacterBase__IsExpansionFlag_x                           0x14020F1C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140395620
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140395F80
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403973F0

// messages
#define msg_spell_worn_off_x                                       0x140223400
#define msg_new_text_x                                             0x14021EDA0
#define __msgTokenTextParam_x                                      0x140216B70
#define msgTokenText_x                                             0x140216A90

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140337200
#define SpellManager__GetSpellByGroupAndRank_x                     0x140337120

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406748B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140429E20

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403BA6A0
#define CCursorAttachment__AttachToCursor1_x                       0x1403B91E0
#define CCursorAttachment__Deactivate_x                            0x1403BABA0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C9300
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C94F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C9500

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401670E0
#define CFindItemWnd__Update_x                                     0x140167A80
#define CFindItemWnd__PickupSelectedItem_x                         0x140161580

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140170A10
#define LootFiltersManager__GetItemFilterData_x                    0x140171520
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140171DC0
#define LootFiltersManager__SetItemLootFilter_x                    0x140172070

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140482070

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140678CB0
#define CResolutionHandler__GetWindowedStyle_x                     0x14032FFC0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403B1310

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14063E2C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14063E1B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403D3F40
#define CGroupWnd__UpdateDisplay_x                                 0x1403D3B20

// ItemBase
#define ItemBase__IsLore_x                                         0x1405F9E20
#define ItemBase__IsLoreEquipped_x                                 0x1405F9EB0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D5560

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140265220
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402651B0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402651F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032A740

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140141E90
#define FactionManagerClient__HandleFactionMessage_x               0x140142240
#define FactionManagerClient__GetFactionStanding_x                 0x140141660
#define FactionManagerClient__GetMaxFaction_x                      0x140141660
#define FactionManagerClient__GetMinFaction_x                      0x140141510

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400D0380

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14014D550

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401C7D30
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401C70B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401C7B50  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401C7AD0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033BE90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032A740

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14022CCE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583B60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A8F10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14034D0A0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400B0420

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
