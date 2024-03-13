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

#define __ClientDate                                               20240304u
#define __ExpectedVersionDate                                     "Mar  4 2024"
#define __ExpectedVersionTime                                     "16:24:34"
#define __ActualVersionDate_x                                      0x140936730
#define __ActualVersionTime_x                                      0x140936720
#define __ActualVersionBuild_x                                     0x1408CD2C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A92B0
#define __MemChecker1_x                                            0x140565360
#define __MemChecker4_x                                            0x140277C80
#define __EncryptPad0_x                                            0x140D03E20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3C9E0
#define instEQZoneInfo_x                                           0x140E3CBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F340
#define __gfMaxZoomCameraDistance_x                                0x1408CE530
#define __gfMaxCameraDistance_x                                    0x140A746A0
#define __CurrentSocial_x                                          0x140BBF940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CFB710
#define g_eqCommandStates_x                                        0x140CFC780
#define __CommandList_x                                            0x140CFC9B0
#define __ScreenMode_x                                             0x140D84534
#define __gWorld_x                                                 0x140E34F30
#define __gpbCommandEvent_x                                        0x140E37424
#define __ServerHost_x                                             0x140E37608
#define __Guilds_x                                                 0x140E3B590
#define __MouseEventTime_x                                         0x140EB1F48
#define DI8__MouseState_x                                          0x140EB6100
#define __heqmain_x                                                0x140EB8598
#define DI8__Mouse_x                                               0x140EB85B0
#define __HWnd_x                                                   0x140EB85B8
#define __Mouse_x                                                  0x140EB85C0
#define DI8__Keyboard_x                                            0x140EB85E0
#define __LoginName_x                                              0x140EB8CBC
#define __CurrentMapLabel_x                                        0x140ECC4D0
#define __LabelCache_x                                             0x140ECD0A0
#define __ChatFilterDefs_x                                         0x140A0DF90
#define Teleport_Table_Size_x                                      0x140E374B0
#define Teleport_Table_x                                           0x140E34F60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E37920
#define pinstActiveBanker_x                                        0x140E34E80
#define pinstActiveCorpse_x                                        0x140E34E70
#define pinstActiveGMaster_x                                       0x140E34E78
#define pinstActiveMerchant_x                                      0x140E34E68
#define pinstAltAdvManager_x                                       0x140D85148
#define pinstCEverQuest_x                                          0x140EB6050
#define pinstCamActor_x                                            0x140D84520
#define pinstCDBStr_x                                              0x140D83F00
#define pinstCDisplay_x                                            0x140E36F70
#define pinstControlledPlayer_x                                    0x140E34F10
#define pinstCResolutionHandler_x                                  0x14153D858
#define pinstCSidlManager_x                                        0x140EDE3A0
#define pinstCXWndManager_x                                        0x140EDE398
#define instDynamicZone_x                                          0x140E3B450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3B49E
#define instExpeditionName_x                                       0x140E3B4DE
#define pinstDZMember_x                                            0x140E3B568
#define pinstDZTimerInfo_x                                         0x140E3B570
#define pinstEqLogin_x                                             0x140EB8600
#define instTribute_x                                              0x140CF6D50
#define pinstEQSoundManager_x                                      0x140D854C8
#define pinstEQSpellStrings_x                                      0x140D68B10
#define pinstSGraphicsEngine_x                                     0x14153D5D8
#define pinstLocalPC_x                                             0x140E34F50
#define pinstLocalPlayer_x                                         0x140E34E60
#define pinstCMercenaryClientManager_x                             0x140EB37E8
#define pinstModelPlayer_x                                         0x140E34E90
#define pinstRenderInterface_x                                     0x14153D5F0
#define pinstSkillMgr_x                                            0x140EB5490
#define pinstSpawnManager_x                                        0x140EB3BB0
#define pinstSpellManager_x                                        0x140EB54F8
#define pinstStringTable_x                                         0x140E34F58
#define pinstSwitchManager_x                                       0x140E34DE0
#define pinstTarget_x                                              0x140E34F08
#define pinstTaskMember_x                                          0x140CF6D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E34F18
#define pinstTradeTarget_x                                         0x140E34E88
#define instTributeActive_x                                        0x140CF6D79
#define pinstViewActor_x                                           0x140D84518
#define pinstWorldData_x                                           0x140E36F60
#define pinstPlayerPath_x                                          0x140EB3BD8
#define pinstTargetIndicator_x                                     0x140EB55A8
#define EQObject_Top_x                                             0x140E34F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC9628
#define pinstCContainerMgr_x                                       0x140D84198
#define pinstCContextMenuManager_x                                 0x140EDE080
#define pinstCInvSlotMgr_x                                         0x140D84190
#define pinstCItemDisplayManager_x                                 0x140ECC0A0
#define pinstCPopupWndManager_x                                    0x140ECC930
#define pinstCSpellDisplayMgr_x                                    0x140ECCF80
#define pinstCTaskManager_x                                        0x140BBFC80
#define pinstEQSuiteTextureLoader_x                                0x140D0D520
#define pinstItemIconCache_x                                       0x140EC9988
#define pinstLootFiltersManager_x                                  0x140D83948
#define pinstGFViewListener_x                                      0x140EDD858


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140238570
#define __CastRay_x                                                0x1402308D0
#define __CastRay2_x                                               0x1402305D0
#define __ConvertItemTags_x                                        0x140230D30
#define __CleanItemTags_x                                          0x140087DC0
#define __CreateCascadeMenuItems_x                                 0x140180DF0
#define __DoesFileExist_x                                          0x140569210
#define __EQGetTime_x                                              0x140565910
#define __ExecuteCmd_x                                             0x140206CA0
#define __FixHeading_x                                             0x140691210
#define __FlushDxKeyboard_x                                        0x14032B1A0
#define __get_bearing_x                                            0x14023A760
#define __get_melee_range_x                                        0x14023A860
#define __GetAnimationCache_x                                      0x1403A8380
#define __GetGaugeValueFromEQ_x                                    0x1404DBF00
#define __GetLabelFromEQ_x                                         0x1404DD500
#define __GetXTargetType_x                                         0x1406924F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140691290
#define __HelpPath_x                                               0x140EB1E10   // Why?
#define __NewUIINI_x                                               0x1404E8A70   // Why?
#define __ProcessGameEvents_x                                      0x14026D160
#define __ProcessKeyboardEvents_x                                  0x14032CA00
#define __ProcessMouseEvents_x                                     0x14026E6A0
#define __SaveColors_x                                             0x140190DC0
#define __STMLToText_x                                             0x14056DB50
#define __WndProc_x                                                0x140329980
#define CMemoryMappedFile__SetFile_x                               0x1407C9180
#define DrawNetStatus_x                                            0x1402B7760
#define Util__FastTime_x                                           0x140564EA0
#define __eq_delete_x                                              0x140698644
#define __eq_new_x                                                 0x140698600
#define __CopyLayout_x                                             0x1402A56D0
#define __ThrottleFrameRate_x                                      0x14025C9DC
#define __ThrottleFrameRateEnd_x                                   0x14025CA3C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BF80
#define CAAWnd__Update_x                                           0x14033C280
#define CAAWnd__UpdateSelected_x                                   0x14033D2C0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081DA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BEF0
#define AltAdvManager__IsAbilityReady_x                            0x14019C170
#define AltAdvManager__GetAAById_x                                 0x14019B7C0
#define AltAdvManager__CanTrainAbility_x                           0x14019B5F0
#define AltAdvManager__CanSeeAbility_x                             0x14019B2B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A30
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1870
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AC0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2490
#define CharacterZoneClient__CastSpell_x                           0x1400D2530
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1870
#define CharacterZoneClient__Cur_HP_x                              0x1400E7450
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7610
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDAE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC510  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6720
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5210
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF6A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE570
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D68F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8950
#define CharacterZoneClient__GetHPRegen_x                          0x1400EECB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E70C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF930
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6970
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0710
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6B70
#define CharacterZoneClient__GetModCap_x                           0x1400F7CD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E10
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAC0
#define CharacterZoneClient__HasSkill_x                            0x1400F3700
#define CharacterZoneClient__HitBySpell_x                          0x1400D78C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB060
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F77B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D4200  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B00
#define CharacterZoneClient__Max_Mana_x                            0x1402D4420  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE400
#define CharacterZoneClient__SpellDuration_x                       0x1400DF100
#define CharacterZoneClient__TotalEffect_x                         0x1400E0450
#define CharacterZoneClient__UseSkill_x                            0x1400FD480


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A440

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403647A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360620
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F6B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366E50

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A91B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389D80
#define CChatWindowManager__InitContextMenu_x                      0x140389F10
#define CChatWindowManager__FreeChatWindow_x                       0x140388E00
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391AC0
#define CChatWindowManager__CreateChatWindow_x                     0x140388740

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401055F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392B00
#define CChatWindow__Clear_x                                       0x1403939A0
#define CChatWindow__WndNotification_x                             0x140394B90
#define CChatWindow__AddHistory_x                                  0x1403934A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A2BD0
#define CContextMenu__RemoveMenuItem_x                             0x1405A2FC0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2F90
#define CContextMenu__CheckMenuItem_x                              0x1405A2E00
#define CContextMenu__SetMenuItem_x                                0x1405A2FE0
#define CContextMenu__AddSeparator_x                               0x1405A2D40

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140594A90
#define CContextMenuManager__RemoveMenu_x                          0x140595070
#define CContextMenuManager__PopupMenu_x                           0x140594DB0
#define CContextMenuManager__Flush_x                               0x140594B10
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A02D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14065A320
#define CChatService__GetFriendName_x                              0x14065A330

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405859D0
#define CComboWnd__Draw_x                                          0x140585AD0
#define CComboWnd__GetCurChoice_x                                  0x140585DB0  // unused
#define CComboWnd__GetListRect_x                                   0x140585E50
#define CComboWnd__InsertChoice_x                                  0x140586190
#define CComboWnd__SetColors_x                                     0x140586520
#define CComboWnd__SetChoice_x                                     0x1405864E0
#define CComboWnd__GetItemCount_x                                  0x140585E40
#define CComboWnd__GetCurChoiceText_x                              0x140585DF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585D80
#define CComboWnd__InsertChoiceAtIndex_x                           0x140586250

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039E050
#define CContainerWnd__SetContainer_x                              0x1403F3680
#define CContainerWnd__vftable_x                                   0x1409AA090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D842BC
#define CDisplay__ZoneMainUI_x                                     0x1405BCD90
#define CDisplay__PreZoneMainUI_x                                  0x14018DCB0
#define CDisplay__CleanGameUI_x                                    0x14017FED0
#define CDisplay__GetClickedActor_x                                0x140184040
#define CDisplay__GetUserDefinedColor_x                            0x140184CB0
#define CDisplay__InitCharSelectUI_x                               0x140184F60
#define CDisplay__ReloadUI_x                                       0x14018FFA0
#define CDisplay__WriteTextHD2_x                                   0x140197030
#define CDisplay__TrueDistance_x                                   0x140196CE0
#define CDisplay__SetViewActor_x                                   0x1401934E0
#define CDisplay__GetFloorHeight_x                                 0x1401842A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401967D0
#define CDisplay__RealRender_World_x                               0x14018F380

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6F40
#define CEditWnd__DrawCaret_x                                      0x1405B8A70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8F30
#define CEditWnd__GetCaretPt_x                                     0x1405B91B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B91F0
#define CEditWnd__GetDisplayString_x                               0x1405B9460
#define CEditWnd__GetHorzOffset_x                                  0x1405B96A0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B97F0
#define CEditWnd__GetSelStartPt_x                                  0x1405B9AD0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B9920
#define CEditWnd__PointFromPrintableChar_x                         0x1405BA680
#define CEditWnd__ReplaceSelection_x                               0x1405BAA30
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BAED0
#define CEditWnd__SetEditable_x                                    0x1405BB160
#define CEditWnd__SetWindowText_x                                  0x1405BB190

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025DAF0
#define CEverQuest__ClickedPlayer_x                                0x140253610
#define CEverQuest__CreateTargetIndicator_x                        0x140253ED0
#define CEverQuest__DoTellWindow_x                                 0x140105300 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105BC0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F4B0
#define CEverQuest__dsp_chat_x                                     0x140104D30 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402896A0
#define CEverQuest__Emote_x                                        0x14025FE90
#define CEverQuest__GetBodyTypeDesc_x                              0x140260C40
#define CEverQuest__GetClassDesc_x                                 0x140260CA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140261070
#define CEverQuest__GetDeityDesc_x                                 0x140261320
#define CEverQuest__GetLangDesc_x                                  0x140261750
#define CEverQuest__GetRaceDesc_x                                  0x140261AF0
#define CEverQuest__InterpretCmd_x                                 0x140263420
#define CEverQuest__LeftClickedOnPlayer_x                          0x140278300
#define CEverQuest__LMouseUp_x                                     0x140264DF0
#define CEverQuest__RightClickedOnPlayer_x                         0x140275B20
#define CEverQuest__RMouseUp_x                                     0x14026F220
#define CEverQuest__SetGameState_x                                 0x14027A840
#define CEverQuest__UPCNotificationFlush_x                         0x140280170 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264A60
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402705D0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402713F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2750

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D20
#define CGuild__GetGuildName_x                                     0x1400C0D60

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4C20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029B1E0
#define CHotButton__SetCheck_x                                     0x14029B4B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EC3C0
#define CInvSlotMgr__MoveItem_x                                    0x1403EC5A0
#define CInvSlotMgr__SelectSlot_x                                  0x1403EDF50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E95B0
#define CInvSlot__SliderComplete_x                                 0x1403EAB00
#define CInvSlot__GetItemBase_x                                    0x1403E51E0
#define CInvSlot__UpdateItem_x                                     0x1403EAFC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EF2E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140410650
#define CItemDisplayWnd__UpdateStrings_x                           0x140412FB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040D120
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E890
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040FA60

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8A30
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404DA720

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513EA0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409840

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401484E0

// CLabel
#define CLabel__UpdateText_x                                       0x14041A390

// CListWnd
#define CListWnd__CListWnd_x                                       0x140589360
#define CListWnd__dCListWnd_x                                      0x1405897B0
#define CListWnd__vftable_x                                        0x140A8FCA8
#define CListWnd__AddColumn_x                                      0x140589E50
#define CListWnd__AddColumn1_x                                     0x140589EF0
#define CListWnd__AddLine_x                                        0x14058A050
#define CListWnd__AddString_x                                      0x14058A5E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14058AB50
#define CListWnd__CalculateVSBRange_x                              0x14058AE30
#define CListWnd__ClearSel_x                                       0x14058AFE0
#define CListWnd__ClearAllSel_x                                    0x14058AF80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058B040
#define CListWnd__Compare_x                                        0x14058B200
#define CListWnd__Draw_x                                           0x14058B6D0
#define CListWnd__DrawColumnSeparators_x                           0x14058C280
#define CListWnd__DrawHeader_x                                     0x14058C340
#define CListWnd__DrawItem_x                                       0x14058CA20
#define CListWnd__DrawLine_x                                       0x14058D3A0
#define CListWnd__DrawSeparator_x                                  0x14058D860
#define CListWnd__EnableLine_x                                     0x14058DC80
#define CListWnd__EnsureVisible_x                                  0x14058DCE0
#define CListWnd__ExtendSel_x                                      0x14058DDE0
#define CListWnd__GetColumnMinWidth_x                              0x14058E110
#define CListWnd__GetColumnWidth_x                                 0x14058E190
#define CListWnd__GetCurSel_x                                      0x14058E290
#define CListWnd__GetItemData_x                                    0x14058E610
#define CListWnd__GetItemHeight_x                                  0x14058E650
#define CListWnd__GetItemRect_x                                    0x14058E870
#define CListWnd__GetItemText_x                                    0x14058EB10
#define CListWnd__GetSelList_x                                     0x14058ED60
#define CListWnd__GetSeparatorRect_x                               0x14058EF50
#define CListWnd__InsertLine_x                                     0x1405903C0
#define CListWnd__RemoveLine_x                                     0x140590A30
#define CListWnd__SetColors_x                                      0x140590DF0
#define CListWnd__SetColumnJustification_x                         0x140590E10
#define CListWnd__SetColumnLabel_x                                 0x140590E90
#define CListWnd__SetColumnWidth_x                                 0x140591030
#define CListWnd__SetCurSel_x                                      0x140591100
#define CListWnd__SetItemColor_x                                   0x140591370
#define CListWnd__SetItemData_x                                    0x140591410
#define CListWnd__SetItemText_x                                    0x140591650
#define CListWnd__Sort_x                                           0x140591A60
#define CListWnd__ToggleSel_x                                      0x140591BD0
#define CListWnd__SetColumnsSizable_x                              0x140591080
#define CListWnd__SetItemWnd_x                                     0x140591780
#define CListWnd__GetItemWnd_x                                     0x14058ECF0
#define CListWnd__SetItemIcon_x                                    0x140591450
#define CListWnd__CalculateCustomWindowPositions_x                 0x14058A920
#define CListWnd__SetVScrollPos_x                                  0x1405919C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042D650

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F6B78
#define MapViewMap__Clear_x                                        0x14042F1D0
#define MapViewMap__SetZoom_x                                      0x140435820
#define MapViewMap__HandleLButtonDown_x                            0x140432360

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456EB0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045D450
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045DBF0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140461400
#define CMerchantWnd__SelectBuySellSlot_x                          0x140460750
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140465690

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636EC0
#define CPacketScrambler__hton_x                                   0x140636EB0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B2330
#define CSidlManagerBase__FindAnimation1_x                         0x1405B2270
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B2960
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B2710
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B1670
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B1600
#define CSidlManagerBase__CreateXWnd_x                             0x1405B0C40

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CBA60
#define CSidlManager__CreateXWnd_x                                 0x1404CBC20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576FE0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576EB0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C1500 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140577160
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140576600
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405766D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405768E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140577800
#define CSidlScreenWnd__EnableIniStorage_x                         0x140577A30
#define CSidlScreenWnd__GetChildItem_x                             0x140577BD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577E20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581F40 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140578190
#define CSidlScreenWnd__LoadIniInfo_x                              0x140578500
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578DC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405796B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDD6F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579D00
#define CSidlScreenWnd__StoreIniVis_x                              0x14057A4F0
#define CSidlScreenWnd__vftable_x                                  0x140A8EF18
#define CSidlScreenWnd__WndNotification_x                          0x14057A540

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140314830 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314CD0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314C00
#define CSkillMgr__IsActivatedSkill_x                              0x140315080
#define CSkillMgr__IsCombatSkill_x                                 0x1403150C0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314FF0
#define CSkillMgr__GetSkillLastUsed_x                              0x140314C50

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140592540
#define CSliderWnd__SetValue_x                                     0x140592D50
#define CSliderWnd__SetNumTicks_x                                  0x140592BD0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D20A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405974F0
#define CStmlWnd__CalculateHSBRange_x                              0x140581940
#define CStmlWnd__CalculateVSBRange_x                              0x140598410
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598E90
#define CStmlWnd__ForceParseNow_x                                  0x140598F30
#define CStmlWnd__GetVisibleText_x                                 0x140599600
#define CStmlWnd__MakeStmlColorTag_x                               0x14059B360
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059B3A0
#define CStmlWnd__SetSTMLText_x                                    0x1405A2370
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A2520
#define CStmlWnd__UpdateHistoryString_x                            0x1405A28B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140593120
#define CTabWnd__DrawCurrentPage_x                                 0x1405931C0
#define CTabWnd__DrawTab_x                                         0x140593590
#define CTabWnd__GetTabRect_x                                      0x140593C00
#define CTabWnd__InsertPage_x                                      0x140593ED0
#define CTabWnd__RemovePage_x                                      0x140594160
#define CTabWnd__SetPage_x                                         0x1405942C0
#define CTabWnd__UpdatePage_x                                      0x1405945C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BB5F0
#define CPageWnd__SetTabText_x                                     0x1405BB660

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA470  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA880


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A9D10
#define CTextureFont__DrawWrappedText1_x                           0x1405A9C20
#define CTextureFont__DrawWrappedText2_x                           0x1405A9E40
#define CTextureFont__GetTextExtent_x                              0x1405AA1F0
#define CTextureFont__GetHeight_x                                  0x1405AA1B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BFC60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405761E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0CE90
#define CXStr__gCXStrAccess_x                                      0x140EDD4F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057CF80
#define CXWnd__ClrFocus_x                                          0x14057D270
#define CXWnd__Destroy_x                                           0x14057D3F0
#define CXWnd__DoAllDrawing_x                                      0x14057D500
#define CXWnd__DrawColoredRect_x                                   0x14057DCD0
#define CXWnd__DrawTooltip_x                                       0x14057F360
#define CXWnd__DrawTooltipAtPoint_x                                0x14057F410
#define CXWnd__GetChildItem_x                                      0x14057FD20
#define CXWnd__GetChildWndAt_x                                     0x14057FDE0
#define CXWnd__GetClientRect_x                                     0x140580080
#define CXWnd__GetClientClipRect_x                                 0x14057FF50
#define CXWnd__GetRelativeRect_x                                   0x140581A60
#define CXWnd__GetScreenClipRect_x                                 0x140581B70
#define CXWnd__GetScreenRect_x                                     0x140581CC0
#define CXWnd__GetTooltipRect_x                                    0x140581E40
#define CXWnd__IsActive_x                                          0x14019A7A0
#define CXWnd__IsDescendantOf_x                                    0x140582420
#define CXWnd__IsReallyVisible_x                                   0x140582490
#define CXWnd__IsType_x                                            0x1405824D0
#define CXWnd__Minimize_x                                          0x1405825D0
#define CXWnd__ProcessTransition_x                                 0x1405834D0
#define CXWnd__Resize_x                                            0x1405835F0
#define CXWnd__Right_x                                             0x140583690
#define CXWnd__SetFocus_x                                          0x140583A40
#define CXWnd__SetFont_x                                           0x140583A90
#define CXWnd__SetKeyTooltip_x                                     0x140583BA0
#define CXWnd__SetMouseOver_x                                      0x140583CE0
#define CXWnd__SetParent_x                                         0x140583D60
#define CXWnd__StartFade_x                                         0x1405841B0
#define CXWnd__vftable_x                                           0x140A8F508
#define CXWnd__CXWnd_x                                             0x14057BB00
#define CXWnd__dCXWnd_x                                            0x14057C450

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C66C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A4170
#define CXWndManager__DrawCursor_x                                 0x1405A4450
#define CXWndManager__DrawWindows_x                                0x1405A46B0
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4D80
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4DC0
#define CXWndManager__RemoveWnd_x                                  0x1405A83D0

// CDBStr
#define CDBStr__GetString_x                                        0x14017E040

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140640020

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE710
#define CCharacterListWnd__EnterWorld_x                            0x1400CD410
#define CCharacterListWnd__Quit_x                                  0x1400CE6F0
#define CCharacterListWnd__UpdateList_x                            0x1400CF400

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060EBA0
#define ItemBase__CreateItemTagString_x                            0x14060F620
#define ItemBase__GetImageNum_x                                    0x140611C10
#define ItemBase__GetItemValue_x                                   0x1406136C0
#define ItemBase__IsEmpty_x                                        0x1406152C0
#define ItemBase__IsKeyRingItem_x                                  0x140615A00
#define ItemBase__ValueSellMerchant_x                              0x140619BC0
#define ItemClient__CanDrop_x                                      0x14029D7C0
#define ItemClient__CanGoInBag_x                                   0x14029D8F0
#define ItemClient__CreateItemClient_x                             0x14029DBD0
#define ItemClient__dItemClient_x                                  0x14029D630

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D690
#define EQ_LoadingS__Array_x                                       0x140CF9220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140626300
#define PcBase__GetCombatAbility_x                                 0x1406269A0
#define PcBase__GetCombatAbilityTimer_x                            0x140626A40
#define PcBase__GetItemContainedRealEstateIds_x                    0x140627190
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627C80
#define PcClient__AlertInventoryChanged_x                          0x1402BFD40
#define PcClient__GetConLevel_x                                    0x1402C0360  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2A90
#define PcClient__HasLoreItem_x                                    0x1402C3A50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1330
#define PcZoneClient__RemoveMyAffect_x                             0x1402D52A0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B360  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B510  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B670  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B5B0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244D30  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401788A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406839F0
#define PlayerBase__CanSee1_x                                      0x140683AC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683F80
#define PlayerBase__HasProperty_x                                  0x1406841B0
#define PlayerBase__IsTargetable_x                                 0x140684270
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1D80
#define PlayerClient__GetPcClient_x                                0x1402E45B0
#define PlayerClient__PlayerClient_x                               0x1402DB050
#define PlayerClient__SetNameSpriteState_x                         0x1402E7A00
#define PlayerClient__SetNameSpriteTint_x                          0x1402E89C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6F70
#define PlayerZoneClient__DoAttack_x                               0x1402F7C80
#define PlayerZoneClient__GetLevel_x                               0x1402FB3B0
#define PlayerZoneClient__IsValidTeleport_x                        0x140247AC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C530

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0890  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0940  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0A40
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0360
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406835B0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2BF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A27F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2860
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2B80  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2D10
#define KeypressHandler__HandleKeyUp_x                             0x1402A2E10
#define KeypressHandler__SaveKeymapping_x                          0x1402A2A90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063DB60  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406385F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402CA030  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF350
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1A30
#define PcZoneClient__RemovePetEffect_x                            0x1402D53A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2620
#define PcZoneClient__CanEquipItem_x                               0x1402CD670
#define PcZoneClient__GetItemByID_x                                0x1402D03F0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D5120
#define PcZoneClient__BandolierSwap_x                              0x1402CC650

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C5F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A83B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039CE00
#define CContainerMgr__CloseContainer_x                            0x14039C740
#define CContainerMgr__OpenExperimentContainer_x                   0x14039D180

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404906E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402959A0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140421680
#define CLootWnd__RequestLootSlot_x                                0x140422690

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC880
#define EQ_Spell__SpellAffects_x                                   0x1401CDB40
#define EQ_Spell__SpellAffectBase_x                                0x1401CDAA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6FE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6F90
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD760
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD320
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCBF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF960

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EC1B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EB8C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EB0F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F3860  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175120
#define CTaskManager__GetTaskStatus_x                              0x140175230
#define CTaskManager__GetElementDescription_x                      0x140174DB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CABF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A30
#define EqSoundManager__SoundAssistPlay_x                          0x140319E80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14031A1C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584F60
#define CTextureAnimation__SetCurCell_x                            0x140585270

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293C00

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140657A60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657AE0
#define CharacterBase__IsExpansionFlag_x                           0x1401ED730

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037B080
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B9F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CF40

// messages
#define msg_spell_worn_off_x                                       0x140201CE0
#define msg_new_text_x                                             0x1401FD5A0
#define __msgTokenTextParam_x                                      0x1401F53A0
#define msgTokenText_x                                             0x1401F52C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B870
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B790

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406928D0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041AAE0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1AC0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4A30
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4CE0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BE100
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BE2F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BE300

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143750
#define CFindItemWnd__Update_x                                     0x1401440F0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DC00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CFD0
#define LootFiltersManager__GetItemFilterData_x                    0x14014DAE0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E380
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E630

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140473540

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140697E90
#define CResolutionHandler__GetWindowedStyle_x                     0x140314390

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140399130

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065BDE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065BCD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BDDE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD9C0

// ItemBase
#define ItemBase__IsLore_x                                         0x140615AD0
#define ItemBase__IsLoreEquipped_x                                 0x140615B60

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5970

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244E90
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244E20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244E60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E960

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DAF0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEA0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D2C0
#define FactionManagerClient__GetMaxFaction_x                      0x14011D2C0
#define FactionManagerClient__GetMinFaction_x                      0x14011D170

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC660

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129290

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5FE0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5360
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5E00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5D80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320990

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E960

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B700

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14057AB30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331ED0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C640

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640BA0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA34D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
