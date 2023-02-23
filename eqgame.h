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

#define __ClientDate                                               20230213u
#define __ExpectedVersionDate                                     "Feb 13 2023"
#define __ExpectedVersionTime                                     "12:50:47"
#define __ActualVersionDate_x                                      0x1407AF298
#define __ActualVersionTime_x                                      0x1407AF288
#define __ActualVersionBuild_x                                     0x14079D418

// Memory Protection
#define __MemChecker0_x                                            0x14027A700
#define __MemChecker1_x                                            0x14051CDB0
#define __MemChecker4_x                                            0x140249DE0
#define __EncryptPad0_x                                            0x140A585F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B939B0
#define instEQZoneInfo_x                                           0x140B93BA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401F3C20
#define __gfMaxZoomCameraDistance_x                                0x1407A5600
#define __gfMaxCameraDistance_x                                    0x1407DFEC4
#define __CurrentSocial_x                                          0x140914900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A4FF70
#define g_eqCommandStates_x                                        0x140A50FE0
#define __CommandList_x                                            0x140A51210
#define __ScreenMode_x                                             0x140ADAF8C
#define __gWorld_x                                                 0x140B8C428
#define __gpbCommandEvent_x                                        0x140B8BE38
#define __ServerHost_x                                             0x140B8C018
#define __Guilds_x                                                 0x140B92560
#define __MouseEventTime_x                                         0x140C08EA8
#define DI8__Mouse_Check_x                                         0x140C0DAC0
#define __heqmain_x                                                0x140C0FF68
#define DI8__Mouse_x                                               0x140C0FF80
#define __HWnd_x                                                   0x140C0FF88
#define __Mouse_x                                                  0x140C0CFB4
#define DI8__Main_x                                                0x140C0D050
#define DI8__Keyboard_x                                            0x140C0D058
#define __LoginName_x                                              0x140C0D73C
#define __CurrentMapLabel_x                                        0x140C22F20
#define __LabelCache_x                                             0x140C23AF0
#define __SubscriptionType_x                                       0x140C588E0
#define Teleport_Table_Size_x                                      0x140B8BEC0
#define Teleport_Table_x                                           0x140B8C440

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B8E8F0
#define pinstActiveBanker_x                                        0x140B8C358
#define pinstActiveCorpse_x                                        0x140B8C348
#define pinstActiveGMaster_x                                       0x140B8C350
#define pinstActiveMerchant_x                                      0x140B8C340
#define pinstAltAdvManager_x                                       0x140ADC118
#define pinstCEverQuest_x                                          0x140C0CFB8
#define pinstCamActor_x                                            0x140ADAF78
#define pinstCDBStr_x                                              0x140ADAF20
#define pinstCDisplay_x                                            0x140B8C438
#define pinstControlledPlayer_x                                    0x140B8C3E8
#define pinstCResolutionHandler_x                                  0x141291480
#define pinstCSidlManager_x                                        0x140C34B30
#define pinstCXWndManager_x                                        0x140C34B28
#define instDynamicZone_x                                          0x140B92420 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B9246E
#define instExpeditionName_x                                       0x140B924AE
#define pinstDZMember_x                                            0x140B92538
#define pinstDZTimerInfo_x                                         0x140B92540
#define pinstEqLogin_x                                             0x140C0D080
#define instTribute_x                                              0x140A4B800
#define pinstEQSoundManager_x                                      0x140ADC498
#define pinstEQSpellStrings_x                                      0x140ABFB50
#define pinstSGraphicsEngine_x                                     0x141291218
#define pinstLocalPC_x                                             0x140B8C420
#define pinstLocalPlayer_x                                         0x140B8C338
#define pinstCMercenaryClientManager_x                             0x140C0A758
#define pinstModelPlayer_x                                         0x140B8C368
#define pinstRenderInterface_x                                     0x141291230
#define pinstSkillMgr_x                                            0x140C0C3F0
#define pinstSpawnManager_x                                        0x140C0AB10
#define pinstSpellManager_x                                        0x140C0C458
#define pinstStringTable_x                                         0x140B8C430
#define pinstSwitchManager_x                                       0x140B8BDB0
#define pinstTarget_x                                              0x140B8C3E0
#define pinstTaskMember_x                                          0x140A4B7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B8C3F0
#define pinstTradeTarget_x                                         0x140B8C360
#define instTributeActive_x                                        0x140A4B829
#define pinstViewActor_x                                           0x140ADAF70
#define pinstWorldData_x                                           0x140B8E468
#define pinstPlayerPath_x                                          0x140C0AB38
#define pinstTargetIndicator_x                                     0x140C0C508
#define EQObject_Top_x                                             0x140B8C408

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C20078
#define pinstCContainerMgr_x                                       0x140ADB000
#define pinstCContextMenuManager_x                                 0x140C34AE0
#define pinstCInvSlotMgr_x                                         0x140ADAFE8
#define pinstCItemDisplayManager_x                                 0x140C22AF0
#define pinstCPopupWndManager_x                                    0x140C23380
#define pinstCSpellDisplayMgr_x                                    0x140C239D0
#define pinstCTaskManager_x                                        0x140914C40
#define pinstEQSuiteTextureLoader_x                                0x140A61C60
#define pinstItemIconCache_x                                       0x140C203D8
#define pinstLootFiltersManager_x                                  0x140ADA938

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14020B1C0
#define __CastRay_x                                                0x1402039D0
#define __CastRay2_x                                               0x1402036E0
#define __ConvertItemTags_x                                        0x140203DD0
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140156ED0
#define __DoesFileExist_x                                          0x140521590
#define __EQGetTime_x                                              0x14051D360
#define __ExecuteCmd_x                                             0x1401DC0A0
#define __FixHeading_x                                             0x14061FC80
#define __FlushDxKeyboard_x                                        0x1402F73D0
#define __get_bearing_x                                            0x14020D3B0
#define __get_melee_range_x                                        0x14020D4A0
#define __GetAnimationCache_x                                      0x14036F2C0
#define __GetGaugeValueFromEQ_x                                    0x140494E00
#define __GetLabelFromEQ_x                                         0x1404963C0
#define __GetXTargetType_x                                         0x140620F60   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14061FD00
#define __HelpPath_x                                               0x140C08D70   // Why?
#define __NewUIINI_x                                               0x1404A1580   // Why?
#define __ProcessGameEvents_x                                      0x14023F420
#define __ProcessKeyboardEvents_x                                  0x1402F8BD0
#define __ProcessMouseEvents_x                                     0x140240910
#define __SaveColors_x                                             0x140166B00
#define __STMLToText_x                                             0x14054AEB0
#define __WndProc_x                                                0x1402F5B50
#define CMemoryMappedFile__SetFile_x                               0x14075B780
#define DrawNetStatus_x                                            0x140288800
#define Util__FastTime_x                                           0x14051E060
#define __eq_delete_x                                              0x140625D90
#define __eq_new_x                                                 0x140625E8C
#define __CopyLayout_x                                             0x140276BC0
#define __ThrottleFrameRate_x                                      0x14022EED1
#define __ThrottleFrameRateEnd_x                                   0x14022EF31

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140307D00
#define CAAWnd__Update_x                                           0x140308000
#define CAAWnd__UpdateSelected_x                                   0x140308FC0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078C410
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C150

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x140171A50
#define AltAdvManager__IsAbilityReady_x                            0x140171CD0
#define AltAdvManager__GetAAById_x                                 0x140171320
#define AltAdvManager__CanTrainAbility_x                           0x140171150
#define AltAdvManager__CanSeeAbility_x                             0x140170E10

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4360
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5110
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5320
#define CharacterZoneClient__CanUseItem_x                          0x1400B9750
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5C10
#define CharacterZoneClient__CastSpell_x                           0x1400A5CB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5230
#define CharacterZoneClient__Cur_HP_x                              0x1400BAE30
#define CharacterZoneClient__Cur_Mana_x                            0x1400BAFF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8C60
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C17E0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D05D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA150
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8C30
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C3310
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C2230
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA320
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A9C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C390
#define CharacterZoneClient__GetHPRegen_x                          0x1400C2940
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAAA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C35A0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA3A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C4370
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA5B0
#define CharacterZoneClient__GetModCap_x                           0x1400CBAB0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA650
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA860
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F530
#define CharacterZoneClient__HasSkill_x                            0x1400C72E0
#define CharacterZoneClient__HitBySpell_x                          0x1400AB300
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEAE0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB540
#define CharacterZoneClient__Max_Endurance_x                       0x1402A27B0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CB880
#define CharacterZoneClient__Max_Mana_x                            0x1402A29A0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CBD40
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2100
#define CharacterZoneClient__SpellDuration_x                       0x1400B2CE0
#define CharacterZoneClient__TotalEffect_x                         0x1400B4020
#define CharacterZoneClient__UseSkill_x                            0x1400D1520


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403260E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140330310

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032C240
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032B2D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403329D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EC5F8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140353F00
#define CChatWindowManager__InitContextMenu_x                      0x140354090
#define CChatWindowManager__FreeChatWindow_x                       0x140353150
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035AE40
#define CChatWindowManager__CreateChatWindow_x                     0x140352A90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D9620

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035BDB0
#define CChatWindow__Clear_x                                       0x14035CBC0
#define CChatWindow__WndNotification_x                             0x14035DD80
#define CChatWindow__AddHistory_x                                  0x14035C6C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055BEA0
#define CContextMenu__RemoveMenuItem_x                             0x14055C3C0
#define CContextMenu__RemoveAllMenuItems_x                         0x14055C390
#define CContextMenu__CheckMenuItem_x                              0x14055C200
#define CContextMenu__SetMenuItem_x                                0x14055C3E0
#define CContextMenu__AddSeparator_x                               0x14055C010

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055CA30
#define CContextMenuManager__RemoveMenu_x                          0x14055CFB0
#define CContextMenuManager__PopupMenu_x                           0x14055CD30
#define CContextMenuManager__Flush_x                               0x14055CAB0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403691C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405E9100
#define CChatService__GetFriendName_x                              0x1405E9110

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405580B0
#define CComboWnd__Draw_x                                          0x1405581B0
#define CComboWnd__GetCurChoice_x                                  0x140558480  // unused
#define CComboWnd__GetListRect_x                                   0x140558520
#define CComboWnd__InsertChoice_x                                  0x140558850
#define CComboWnd__SetColors_x                                     0x140558BE0
#define CComboWnd__SetChoice_x                                     0x140558BA0
#define CComboWnd__GetItemCount_x                                  0x140558510
#define CComboWnd__GetCurChoiceText_x                              0x1405584C0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140558450
#define CComboWnd__InsertChoiceAtIndex_x                           0x140558910

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140366FF0
#define CContainerWnd__SetContainer_x                              0x1403B0E90
#define CContainerWnd__vftable_x                                   0x1407BD1B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ADB31C
#define CDisplay__ZoneMainUI_x                                     0x140573790
#define CDisplay__PreZoneMainUI_x                                  0x140163B20
#define CDisplay__CleanGameUI_x                                    0x140155FD0
#define CDisplay__GetClickedActor_x                                0x14015A160
#define CDisplay__GetUserDefinedColor_x                            0x14015AC40
#define CDisplay__InitCharSelectUI_x                               0x14015AEF0
#define CDisplay__ReloadUI_x                                       0x140165DD0
#define CDisplay__WriteTextHD2_x                                   0x14016CCB0
#define CDisplay__TrueDistance_x                                   0x14016C990
#define CDisplay__SetViewActor_x                                   0x1401692F0
#define CDisplay__GetFloorHeight_x                                 0x14015A3C0
#define CDisplay__ToggleScreenshotMode_x                           0x14016C4A0
#define CDisplay__RealRender_World_x                               0x1401651F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14057EAD0
#define CEditWnd__DrawCaret_x                                      0x14055F8F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14055FDA0
#define CEditWnd__GetCaretPt_x                                     0x140560020  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140560060
#define CEditWnd__GetDisplayString_x                               0x1405602D0
#define CEditWnd__GetHorzOffset_x                                  0x140560510
#define CEditWnd__GetLineForPrintableChar_x                        0x140560660
#define CEditWnd__GetSelStartPt_x                                  0x140560940  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140560790
#define CEditWnd__PointFromPrintableChar_x                         0x1405614F0
#define CEditWnd__ReplaceSelection_x                               0x1405618A0
#define CEditWnd__SelectableCharFromPoint_x                        0x140561D40
#define CEditWnd__SetEditable_x                                    0x140561FD0
#define CEditWnd__SetWindowText_x                                  0x140562000

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022FE80
#define CEverQuest__ClickedPlayer_x                                0x140225E60
#define CEverQuest__CreateTargetIndicator_x                        0x140226720
#define CEverQuest__DoTellWindow_x                                 0x1400D9330 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D9BF0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402318B0
#define CEverQuest__dsp_chat_x                                     0x1400D8D70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025B630
#define CEverQuest__Emote_x                                        0x140232260
#define CEverQuest__GetBodyTypeDesc_x                              0x140233000
#define CEverQuest__GetClassDesc_x                                 0x140233060
#define CEverQuest__GetClassThreeLetterCode_x                      0x140233430
#define CEverQuest__GetDeityDesc_x                                 0x1402336E0
#define CEverQuest__GetLangDesc_x                                  0x140233B10
#define CEverQuest__GetRaceDesc_x                                  0x140233EB0
#define CEverQuest__InterpretCmd_x                                 0x1402357C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024A460
#define CEverQuest__LMouseUp_x                                     0x140237160
#define CEverQuest__RightClickedOnPlayer_x                         0x140247CD0
#define CEverQuest__RMouseUp_x                                     0x140241490
#define CEverQuest__SetGameState_x                                 0x14024C970
#define CEverQuest__UPCNotificationFlush_x                         0x1402520C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140236DE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402427C0
#define CEverQuest__ReportSuccessfulHit_x                          0x140243500

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140379620

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094670
#define CGuild__GetGuildName_x                                     0x1400946B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039B680

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026C810
#define CHotButton__SetCheck_x                                     0x14026CAE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403AAEC0
#define CInvSlotMgr__MoveItem_x                                    0x1403AB040
#define CInvSlotMgr__SelectSlot_x                                  0x1403AC9A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A88B0
#define CInvSlot__SliderComplete_x                                 0x1403A9BA0
#define CInvSlot__GetItemBase_x                                    0x1403A5330
#define CInvSlot__UpdateItem_x                                     0x1403AA050

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403AD050
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403ADFE0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403CDE90
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D0890
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CA8D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CC0F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403CD2B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404919E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404935B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CC900

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403C7010

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011B060

// CLabel
#define CLabel__UpdateText_x                                       0x1403D7D20

// CListWnd
#define CListWnd__CListWnd_x                                       0x14052F1E0
#define CListWnd__dCListWnd_x                                      0x14052F620
#define CListWnd__vftable_x                                        0x1407EBA00
#define CListWnd__AddColumn_x                                      0x14052FCC0
#define CListWnd__AddColumn1_x                                     0x14052FD60
#define CListWnd__AddLine_x                                        0x14052FEC0
#define CListWnd__AddString_x                                      0x140530450
#define CListWnd__CalculateFirstVisibleLine_x                      0x140530B50
#define CListWnd__CalculateVSBRange_x                              0x140530E30
#define CListWnd__ClearSel_x                                       0x140530FE0
#define CListWnd__ClearAllSel_x                                    0x140530F80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140531040
#define CListWnd__Compare_x                                        0x1405311F0
#define CListWnd__Draw_x                                           0x1405316C0
#define CListWnd__DrawColumnSeparators_x                           0x140532270
#define CListWnd__DrawHeader_x                                     0x140532330
#define CListWnd__DrawItem_x                                       0x140532A10
#define CListWnd__DrawLine_x                                       0x140533390
#define CListWnd__DrawSeparator_x                                  0x140533850
#define CListWnd__EnableLine_x                                     0x140533C70
#define CListWnd__EnsureVisible_x                                  0x140533CD0
#define CListWnd__ExtendSel_x                                      0x140533DD0
#define CListWnd__GetColumnMinWidth_x                              0x140534100
#define CListWnd__GetColumnWidth_x                                 0x140534180
#define CListWnd__GetCurSel_x                                      0x140534280
#define CListWnd__GetItemData_x                                    0x140534600
#define CListWnd__GetItemHeight_x                                  0x140534640
#define CListWnd__GetItemRect_x                                    0x140534800
#define CListWnd__GetItemText_x                                    0x140534AA0
#define CListWnd__GetSelList_x                                     0x140534CF0
#define CListWnd__GetSeparatorRect_x                               0x140534EE0
#define CListWnd__InsertLine_x                                     0x140536350
#define CListWnd__RemoveLine_x                                     0x140536970
#define CListWnd__SetColors_x                                      0x140536D40
#define CListWnd__SetColumnJustification_x                         0x140536D60
#define CListWnd__SetColumnLabel_x                                 0x140536DE0
#define CListWnd__SetColumnWidth_x                                 0x140536F80
#define CListWnd__SetCurSel_x                                      0x140537050
#define CListWnd__SetItemColor_x                                   0x1405372C0
#define CListWnd__SetItemData_x                                    0x140537360
#define CListWnd__SetItemText_x                                    0x1405375A0
#define CListWnd__Sort_x                                           0x1405379B0
#define CListWnd__ToggleSel_x                                      0x140537B20
#define CListWnd__SetColumnsSizable_x                              0x140536FD0
#define CListWnd__SetItemWnd_x                                     0x1405376D0
#define CListWnd__GetItemWnd_x                                     0x140534C80
#define CListWnd__SetItemIcon_x                                    0x1405373A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140530920
#define CListWnd__SetVScrollPos_x                                  0x140537910

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EA8A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407C88E0
#define MapViewMap__Clear_x                                        0x1403EC410
#define MapViewMap__SetZoom_x                                      0x1403F29D0
#define MapViewMap__HandleLButtonDown_x                            0x1403EF510

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140414140  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041A720
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041AED0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14041E6D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14041DA20
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140422980

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405C7120
#define CPacketScrambler__hton_x                                   0x1405C7110

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140555790
#define CSidlManagerBase__FindAnimation1_x                         0x1405556D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140555DC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140555B70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140554AE0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140554A70
#define CSidlManagerBase__CreateXWnd_x                             0x1405540D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140484FB0
#define CSidlManager__CreateXWnd_x                                 0x140485170

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054CA20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054C900
#define CSidlScreenWnd__ConvertToRes_x                             0x140579090 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14054CB50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054C1C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054C110
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054C380
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14054D1F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14054D420
#define CSidlScreenWnd__GetChildItem_x                             0x14054D5C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14054D810
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14053F440 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14054DB80
#define CSidlScreenWnd__LoadIniInfo_x                              0x14054DEF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14054E7A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14054F090
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C34988
#define CSidlScreenWnd__StoreIniInfo_x                             0x14054F6A0
#define CSidlScreenWnd__StoreIniVis_x                              0x14054FE90
#define CSidlScreenWnd__vftable_x                                  0x1407ECA68
#define CSidlScreenWnd__WndNotification_x                          0x14054FEE0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E1710 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E1B10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E1A50
#define CSkillMgr__IsActivatedSkill_x                              0x1402E1EB0
#define CSkillMgr__IsCombatSkill_x                                 0x1402E1EF0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404A1600
#define CSliderWnd__SetValue_x                                     0x14055E570
#define CSliderWnd__SetNumTicks_x                                  0x14055E3F0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048B580

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140566C70
#define CStmlWnd__CalculateHSBRange_x                              0x14053EDF0
#define CStmlWnd__CalculateVSBRange_x                              0x140567BA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140568610
#define CStmlWnd__ForceParseNow_x                                  0x1405686B0
#define CStmlWnd__GetVisibleText_x                                 0x140568D80
#define CStmlWnd__MakeStmlColorTag_x                               0x14056AAE0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056AB20
#define CStmlWnd__SetSTMLText_x                                    0x140571AF0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140571CA0
#define CStmlWnd__UpdateHistoryString_x                            0x140572030

// CTabWnd
#define CTabWnd__Draw_x                                            0x140563770
#define CTabWnd__DrawCurrentPage_x                                 0x140563810
#define CTabWnd__DrawTab_x                                         0x140563BE0
#define CTabWnd__GetTabRect_x                                      0x140564240
#define CTabWnd__InsertPage_x                                      0x140564510
#define CTabWnd__RemovePage_x                                      0x140564790
#define CTabWnd__SetPage_x                                         0x1405648F0
#define CTabWnd__UpdatePage_x                                      0x140564BF0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140563190
#define CPageWnd__SetTabText_x                                     0x140563200

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBD0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DFE0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140538C80
#define CTextureFont__DrawWrappedText1_x                           0x140538B90
#define CTextureFont__DrawWrappedText2_x                           0x140538DB0
#define CTextureFont__GetTextExtent_x                              0x140539160
#define CTextureFont__GetHeight_x                                  0x140539120

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405777F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052BE50

// CXStr
#define CXStr__gFreeLists_x                                        0x140A615E0
#define CXStr__gCXStrAccess_x                                      0x140C33F48

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053A6B0
#define CXWnd__ClrFocus_x                                          0x14053A8F0
#define CXWnd__Destroy_x                                           0x14053AA30
#define CXWnd__DoAllDrawing_x                                      0x14053AB30
#define CXWnd__DrawColoredRect_x                                   0x14053B2E0
#define CXWnd__DrawTooltip_x                                       0x14053C940
#define CXWnd__DrawTooltipAtPoint_x                                0x14053C9F0
#define CXWnd__GetChildItem_x                                      0x14053D2F0
#define CXWnd__GetChildWndAt_x                                     0x14053D3B0
#define CXWnd__GetClientClipRect_x                                 0x14053D510
#define CXWnd__GetRelativeRect_x                                   0x14053EF30
#define CXWnd__GetScreenClipRect_x                                 0x14053F040
#define CXWnd__GetScreenRect_x                                     0x14053F1C0
#define CXWnd__GetTooltipRect_x                                    0x14053F340
#define CXWnd__IsActive_x                                          0x14053F8F0
#define CXWnd__IsDescendantOf_x                                    0x14053F920
#define CXWnd__IsReallyVisible_x                                   0x14053F980
#define CXWnd__IsType_x                                            0x14053F9C0
#define CXWnd__Minimize_x                                          0x14053FAC0
#define CXWnd__ProcessTransition_x                                 0x140540AD0
#define CXWnd__Resize_x                                            0x140540BE0
#define CXWnd__Right_x                                             0x140540C80
#define CXWnd__SetFocus_x                                          0x140541040
#define CXWnd__SetFont_x                                           0x140541090
#define CXWnd__SetKeyTooltip_x                                     0x140541190
#define CXWnd__SetMouseOver_x                                      0x1405412D0
#define CXWnd__SetParent_x                                         0x140541350
#define CXWnd__StartFade_x                                         0x140541780
#define CXWnd__vftable_x                                           0x1407EC188
#define CXWnd__CXWnd_x                                             0x140539280
#define CXWnd__dCXWnd_x                                            0x140539BA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14057E250

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140542C90
#define CXWndManager__DrawCursor_x                                 0x140542F70
#define CXWndManager__DrawWindows_x                                0x1405430A0
#define CXWndManager__GetKeyboardFlags_x                           0x140543760
#define CXWndManager__HandleKeyboardMsg_x                          0x1405437A0
#define CXWndManager__RemoveWnd_x                                  0x140546BC0

// CDBStr
#define CDBStr__GetString_x                                        0x1401541E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D0000

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A2130
#define CCharacterListWnd__EnterWorld_x                            0x1400A0E40
#define CCharacterListWnd__Quit_x                                  0x1400A2110
#define CCharacterListWnd__UpdateList_x                            0x1400A2E30

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14059F800
#define ItemBase__CreateItemTagString_x                            0x1405A0260
#define ItemBase__GetImageNum_x                                    0x1405A2710
#define ItemBase__GetItemValue_x                                   0x1405A4250
#define ItemBase__IsEmpty_x                                        0x1405A5EB0
#define ItemBase__IsKeyRingItem_x                                  0x1405A6580
#define ItemBase__ValueSellMerchant_x                              0x1405AA5F0
#define ItemClient__CanDrop_x                                      0x14026ED30
#define ItemClient__CanGoInBag_x                                   0x14026EE60
#define ItemClient__CreateItemClient_x                             0x14026F140
#define ItemClient__dItemClient_x                                  0x14026EBA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401731F0
#define EQ_LoadingS__Array_x                                       0x140A4DA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B67F0
#define PcBase__GetCombatAbility_x                                 0x1405B6E90
#define PcBase__GetCombatAbilityTimer_x                            0x1405B6F30
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405B7680
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405B8010
#define PcClient__AlertInventoryChanged_x                          0x1402901D0
#define PcClient__GetConLevel_x                                    0x140290710  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140292D60
#define PcClient__HasLoreItem_x                                    0x140293E60
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A0D10
#define PcZoneClient__RemoveMyAffect_x                             0x1402A3820

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E06F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E08A0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E09D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E0910  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140217900  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014EA00

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140612750
#define PlayerBase__CanSee1_x                                      0x140612820
#define PlayerBase__GetVisibilityLineSegment_x                     0x140612D50
#define PlayerBase__HasProperty_x                                  0x140612F70
#define PlayerBase__IsTargetable_x                                 0x140613030
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402AF6B0
#define PlayerClient__GetPcClient_x                                0x1402B1D70
#define PlayerClient__PlayerClient_x                               0x1402A8A20
#define PlayerClient__SetNameSpriteState_x                         0x1402B5210
#define PlayerClient__SetNameSpriteTint_x                          0x1402B61D0
#define PlayerZoneClient__ChangeHeight_x                           0x1402C4230
#define PlayerZoneClient__DoAttack_x                               0x1402C4EF0
#define PlayerZoneClient__GetLevel_x                               0x1402C8620
#define PlayerZoneClient__IsValidTeleport_x                        0x14021A6B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401623C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402BE020  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402BE050  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402BE100
#define PlayerManagerClient__CreatePlayer_x                        0x1402BDA10
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406123D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140274110
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140273D10
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140273D80
#define KeypressHandler__ClearCommandStateArray_x                  0x1402740A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140274230
#define KeypressHandler__HandleKeyUp_x                             0x140274310
#define KeypressHandler__SaveKeymapping_x                          0x140273FB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405CDC10  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405C87C0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402994A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14029ED60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A13F0
#define PcZoneClient__RemovePetEffect_x                            0x1402A3920
#define PcZoneClient__HasAlternateAbility_x                        0x1402A20D0
#define PcZoneClient__CanEquipItem_x                               0x14029D070
#define PcZoneClient__GetItemByID_x                                0x14029FDE0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A36A0
#define PcZoneClient__BandolierSwap_x                              0x14029C050
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A1340

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021F170

// IconCache
#define IconCache__GetIcon_x                                       0x14036F2F0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140365E80
#define CContainerMgr__CloseContainer_x                            0x1403657C0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403661F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044BDB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402671A0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403DE960
#define CLootWnd__RequestLootSlot_x                                0x1403DF960

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A2E20
#define EQ_Spell__SpellAffects_x                                   0x1401A40D0
#define EQ_Spell__SpellAffectBase_x                                0x1401A4030
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAA40
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA9F0
#define EQ_Spell__IsSPAStacking_x                                  0x1401A3CF0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A38B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A3190

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930A0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A5370  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A53B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A48C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A3E70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AC430  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014B250
#define CTaskManager__GetTaskStatus_x                              0x14014B360
#define CTaskManager__GetElementDescription_x                      0x14014AEE0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A1180
#define EqSoundManager__PlayScriptMp3_x                            0x14019FF80
#define EqSoundManager__SoundAssistPlay_x                          0x1402E6AE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E6E10  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140562800
#define CTextureAnimation__SetCurCell_x                            0x140562B10

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140265430

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E6B60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E6BE0
#define CharacterBase__IsExpansionFlag_x                           0x1401C2F90

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140346010
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140346960
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140347D90

// messages
#define msg_spell_worn_off_x                                       0x1401D7180
#define msg_new_text_x                                             0x1401D2B30
#define __msgTokenTextParam_x                                      0x1401CA930
#define msgTokenText_x                                             0x1401CA850

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E84A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E83C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140621340

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403D8460

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036B470
#define CCursorAttachment__AttachToCursor1_x                       0x140369FB0
#define CCursorAttachment__Deactivate_x                            0x14036B970

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140575C00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140575DF0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140575E00

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401164D0
#define CFindItemWnd__Update_x                                     0x140116CA0
#define CFindItemWnd__PickupSelectedItem_x                         0x140110940

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011FA90
#define LootFiltersManager__GetItemFilterData_x                    0x1401205A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140120E40
#define LootFiltersManager__SetItemLootFilter_x                    0x1401210F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14042FC50

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140625710
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E1280

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403622E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EAB90  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EAA80  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140384AB0
#define CGroupWnd__UpdateDisplay_x                                 0x140384850

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A6650
#define ItemBase__IsLoreEquipped_x                                 0x1405A66E0

#define MultipleItemMoveManager__ProcessMove_x                     0x140286A40

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140217A60
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402179F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140217A30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB9A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400F17B0
#define FactionManagerClient__HandleFactionMessage_x               0x1400F1B60
#define FactionManagerClient__GetFactionStanding_x                 0x1400F0F80
#define FactionManagerClient__GetMaxFaction_x                      0x1400F0F80
#define FactionManagerClient__GetMinFaction_x                      0x1400F0E30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FCE80

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017BAD0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017AE50
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017B8F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017B870  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402ECB90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB9A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E0A60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140574D80

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056010

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402FDD80

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
