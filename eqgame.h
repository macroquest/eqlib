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

#define __ClientDate                                               20230309u
#define __ExpectedVersionDate                                     "Mar  9 2023"
#define __ExpectedVersionTime                                     "09:23:31"
#define __ActualVersionDate_x                                      0x1407B07A8
#define __ActualVersionTime_x                                      0x1407B0798
#define __ActualVersionBuild_x                                     0x14079E448

// Memory Protection
#define __MemChecker0_x                                            0x14027B5D0
#define __MemChecker1_x                                            0x14051E330
#define __MemChecker4_x                                            0x14024AC40
#define __EncryptPad0_x                                            0x140A5A610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B959D0
#define instEQZoneInfo_x                                           0x140B95BC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401F7B70
#define __gfMaxZoomCameraDistance_x                                0x1407A6AD0
#define __gfMaxCameraDistance_x                                    0x1407E13D4
#define __CurrentSocial_x                                          0x140916900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A51F70
#define g_eqCommandStates_x                                        0x140A52FE0
#define __CommandList_x                                            0x140A53210
#define __ScreenMode_x                                             0x140ADCFC4
#define __gWorld_x                                                 0x140B8E448
#define __gpbCommandEvent_x                                        0x140B8DE58
#define __ServerHost_x                                             0x140B8E038
#define __Guilds_x                                                 0x140B94580
#define __MouseEventTime_x                                         0x140C0AEC8
#define DI8__Mouse_Check_x                                         0x140C0FAE0
#define __heqmain_x                                                0x140C11F88
#define DI8__Mouse_x                                               0x140C11FA0
#define __HWnd_x                                                   0x140C11FA8
#define __Mouse_x                                                  0x140C0EFD4
#define DI8__Main_x                                                0x140C0F070
#define DI8__Keyboard_x                                            0x140C0F078
#define __LoginName_x                                              0x140C0F75C
#define __CurrentMapLabel_x                                        0x140C25180
#define __LabelCache_x                                             0x140C25D50
#define __SubscriptionType_x                                       0x140C5AB40
#define Teleport_Table_Size_x                                      0x140B8DEE0
#define Teleport_Table_x                                           0x140B8E460

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B90910
#define pinstActiveBanker_x                                        0x140B8E378
#define pinstActiveCorpse_x                                        0x140B8E368
#define pinstActiveGMaster_x                                       0x140B8E370
#define pinstActiveMerchant_x                                      0x140B8E360
#define pinstAltAdvManager_x                                       0x140ADE138
#define pinstCEverQuest_x                                          0x140C0EFD8
#define pinstCamActor_x                                            0x140ADCFB0
#define pinstCDBStr_x                                              0x140ADCF40
#define pinstCDisplay_x                                            0x140B8E458
#define pinstControlledPlayer_x                                    0x140B8E408
#define pinstCResolutionHandler_x                                  0x1412936E0
#define pinstCSidlManager_x                                        0x140C36D90
#define pinstCXWndManager_x                                        0x140C36D88
#define instDynamicZone_x                                          0x140B94440 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B9448E
#define instExpeditionName_x                                       0x140B944CE
#define pinstDZMember_x                                            0x140B94558
#define pinstDZTimerInfo_x                                         0x140B94560
#define pinstEqLogin_x                                             0x140C0F0A0
#define instTribute_x                                              0x140A4D800
#define pinstEQSoundManager_x                                      0x140ADE4B8
#define pinstEQSpellStrings_x                                      0x140AC1B70
#define pinstSGraphicsEngine_x                                     0x141293478
#define pinstLocalPC_x                                             0x140B8E440
#define pinstLocalPlayer_x                                         0x140B8E358
#define pinstCMercenaryClientManager_x                             0x140C0C778
#define pinstModelPlayer_x                                         0x140B8E388
#define pinstRenderInterface_x                                     0x141293490
#define pinstSkillMgr_x                                            0x140C0E410
#define pinstSpawnManager_x                                        0x140C0CB30
#define pinstSpellManager_x                                        0x140C0E478
#define pinstStringTable_x                                         0x140B8E450
#define pinstSwitchManager_x                                       0x140B8DDD0
#define pinstTarget_x                                              0x140B8E400
#define pinstTaskMember_x                                          0x140A4D7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B8E410
#define pinstTradeTarget_x                                         0x140B8E380
#define instTributeActive_x                                        0x140A4D829
#define pinstViewActor_x                                           0x140ADCFA8
#define pinstWorldData_x                                           0x140B90488
#define pinstPlayerPath_x                                          0x140C0CB58
#define pinstTargetIndicator_x                                     0x140C0E528
#define EQObject_Top_x                                             0x140B8E428

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C222D8
#define pinstCContainerMgr_x                                       0x140ADD038
#define pinstCContextMenuManager_x                                 0x140C36D40
#define pinstCInvSlotMgr_x                                         0x140ADD020
#define pinstCItemDisplayManager_x                                 0x140C24D50
#define pinstCPopupWndManager_x                                    0x140C255E0
#define pinstCSpellDisplayMgr_x                                    0x140C25C30
#define pinstCTaskManager_x                                        0x140916C40
#define pinstEQSuiteTextureLoader_x                                0x140A63C80
#define pinstItemIconCache_x                                       0x140C22638
#define pinstLootFiltersManager_x                                  0x140ADC958

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14020BFD0
#define __CastRay_x                                                0x1402047F0
#define __CastRay2_x                                               0x140204500
#define __ConvertItemTags_x                                        0x140204BF0
#define __CleanItemTags_x                                          0x140058EA0
#define __CreateCascadeMenuItems_x                                 0x140157330
#define __DoesFileExist_x                                          0x140522B10
#define __EQGetTime_x                                              0x14051E8E0
#define __ExecuteCmd_x                                             0x1401DC570
#define __FixHeading_x                                             0x140620EB0
#define __FlushDxKeyboard_x                                        0x1402F8440
#define __get_bearing_x                                            0x14020E1C0
#define __get_melee_range_x                                        0x14020E2B0
#define __GetAnimationCache_x                                      0x140370520
#define __GetGaugeValueFromEQ_x                                    0x1404962F0
#define __GetLabelFromEQ_x                                         0x1404978B0
#define __GetXTargetType_x                                         0x140622190   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140620F30
#define __HelpPath_x                                               0x140C0AD90   // Why?
#define __NewUIINI_x                                               0x1404A2A70   // Why?
#define __ProcessGameEvents_x                                      0x140240280
#define __ProcessKeyboardEvents_x                                  0x1402F9C40
#define __ProcessMouseEvents_x                                     0x140241760
#define __SaveColors_x                                             0x140166F80
#define __STMLToText_x                                             0x14054C200
#define __WndProc_x                                                0x1402F6BC0
#define CMemoryMappedFile__SetFile_x                               0x14075C9B0
#define DrawNetStatus_x                                            0x140289900
#define Util__FastTime_x                                           0x14051F5E0
#define __eq_delete_x                                              0x140626FC0
#define __eq_new_x                                                 0x1406270BC
#define __CopyLayout_x                                             0x140277A60
#define __ThrottleFrameRate_x                                      0x14022FD21
#define __ThrottleFrameRateEnd_x                                   0x14022FD81

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140308DB0
#define CAAWnd__Update_x                                           0x1403090B0
#define CAAWnd__UpdateSelected_x                                   0x14030A070

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078D420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C180

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x140171FD0
#define AltAdvManager__IsAbilityReady_x                            0x140172250
#define AltAdvManager__GetAAById_x                                 0x1401718A0
#define AltAdvManager__CanTrainAbility_x                           0x1401716D0
#define AltAdvManager__CanSeeAbility_x                             0x140171390

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4400
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A51B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A53C0
#define CharacterZoneClient__CanUseItem_x                          0x1400B97D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5CB0
#define CharacterZoneClient__CastSpell_x                           0x1400A5D50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B52B0
#define CharacterZoneClient__Cur_HP_x                              0x1400BAEB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BB070
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8D00
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C1850
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D0640  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA1F0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8CB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C3380
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C22A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA3C0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA60
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C430
#define CharacterZoneClient__GetHPRegen_x                          0x1400C29B0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAB20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C3610
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA440
#define CharacterZoneClient__GetManaRegen_x                        0x1400C43E0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA650
#define CharacterZoneClient__GetModCap_x                           0x1400CBB20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA6F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA900
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F5D0
#define CharacterZoneClient__HasSkill_x                            0x1400C7350
#define CharacterZoneClient__HitBySpell_x                          0x1400AB3A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEB80
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB5B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402A3920  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CB8F0
#define CharacterZoneClient__Max_Mana_x                            0x1402A3B10  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CBDB0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2190
#define CharacterZoneClient__SpellDuration_x                       0x1400B2D70
#define CharacterZoneClient__TotalEffect_x                         0x1400B40A0
#define CharacterZoneClient__UseSkill_x                            0x1400D1590


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140327220

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140331440

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032D370
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032C400

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140333AF0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EDA78

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403550B0
#define CChatWindowManager__InitContextMenu_x                      0x140355240
#define CChatWindowManager__FreeChatWindow_x                       0x140354300
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035C000
#define CChatWindowManager__CreateChatWindow_x                     0x140353C40

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D96A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035CF80
#define CChatWindow__Clear_x                                       0x14035DD90
#define CChatWindow__WndNotification_x                             0x14035EF50
#define CChatWindow__AddHistory_x                                  0x14035D890

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055D240
#define CContextMenu__RemoveMenuItem_x                             0x14055D760
#define CContextMenu__RemoveAllMenuItems_x                         0x14055D730
#define CContextMenu__CheckMenuItem_x                              0x14055D5A0
#define CContextMenu__SetMenuItem_x                                0x14055D780
#define CContextMenu__AddSeparator_x                               0x14055D3B0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055DDD0
#define CContextMenuManager__RemoveMenu_x                          0x14055E340
#define CContextMenuManager__PopupMenu_x                           0x14055E0C0
#define CContextMenuManager__Flush_x                               0x14055DE50
#define CContextMenuManager__CreateDefaultMenu_x                   0x14036A400

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405EA250
#define CChatService__GetFriendName_x                              0x1405EA260

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140559410
#define CComboWnd__Draw_x                                          0x140559510
#define CComboWnd__GetCurChoice_x                                  0x1405597F0  // unused
#define CComboWnd__GetListRect_x                                   0x140559890
#define CComboWnd__InsertChoice_x                                  0x140559BD0
#define CComboWnd__SetColors_x                                     0x140559F60
#define CComboWnd__SetChoice_x                                     0x140559F20
#define CComboWnd__GetItemCount_x                                  0x140559880
#define CComboWnd__GetCurChoiceText_x                              0x140559830  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405597C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140559C90

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140368220
#define CContainerWnd__SetContainer_x                              0x1403B2260
#define CContainerWnd__vftable_x                                   0x1407BE6C8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ADD34C
#define CDisplay__ZoneMainUI_x                                     0x1405749B0
#define CDisplay__PreZoneMainUI_x                                  0x140163F80
#define CDisplay__CleanGameUI_x                                    0x140156430
#define CDisplay__GetClickedActor_x                                0x14015A5C0
#define CDisplay__GetUserDefinedColor_x                            0x14015B0A0
#define CDisplay__InitCharSelectUI_x                               0x14015B350
#define CDisplay__ReloadUI_x                                       0x140166230
#define CDisplay__WriteTextHD2_x                                   0x14016D220
#define CDisplay__TrueDistance_x                                   0x14016CF00
#define CDisplay__SetViewActor_x                                   0x140169770
#define CDisplay__GetFloorHeight_x                                 0x14015A820
#define CDisplay__ToggleScreenshotMode_x                           0x14016CA10
#define CDisplay__RealRender_World_x                               0x140165650

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14057FC60
#define CEditWnd__DrawCaret_x                                      0x140560C80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140561140
#define CEditWnd__GetCaretPt_x                                     0x1405613C0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140561400
#define CEditWnd__GetDisplayString_x                               0x140561670
#define CEditWnd__GetHorzOffset_x                                  0x1405618B0
#define CEditWnd__GetLineForPrintableChar_x                        0x140561A00
#define CEditWnd__GetSelStartPt_x                                  0x140561CE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140561B30
#define CEditWnd__PointFromPrintableChar_x                         0x140562890
#define CEditWnd__ReplaceSelection_x                               0x140562C40
#define CEditWnd__SelectableCharFromPoint_x                        0x1405630E0
#define CEditWnd__SetEditable_x                                    0x140563370
#define CEditWnd__SetWindowText_x                                  0x1405633A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140230CD0
#define CEverQuest__ClickedPlayer_x                                0x140226C90
#define CEverQuest__CreateTargetIndicator_x                        0x140227550
#define CEverQuest__DoTellWindow_x                                 0x1400D93B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D9C70 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140232700
#define CEverQuest__dsp_chat_x                                     0x1400D8DF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025C490
#define CEverQuest__Emote_x                                        0x1402330B0
#define CEverQuest__GetBodyTypeDesc_x                              0x140233E50
#define CEverQuest__GetClassDesc_x                                 0x140233EB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140234280
#define CEverQuest__GetDeityDesc_x                                 0x140234530
#define CEverQuest__GetLangDesc_x                                  0x140234960
#define CEverQuest__GetRaceDesc_x                                  0x140234D00
#define CEverQuest__InterpretCmd_x                                 0x140236610
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024B2C0
#define CEverQuest__LMouseUp_x                                     0x140237FB0
#define CEverQuest__RightClickedOnPlayer_x                         0x140248B20
#define CEverQuest__RMouseUp_x                                     0x1402422E0
#define CEverQuest__SetGameState_x                                 0x14024D7D0
#define CEverQuest__UPCNotificationFlush_x                         0x140252F20 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140237C30
#define CEverQuest__ReportSuccessfulHeal_x                         0x140243610
#define CEverQuest__ReportSuccessfulHit_x                          0x140244350

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14037A8A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094720
#define CGuild__GetGuildName_x                                     0x140094760

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039CA90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026D690
#define CHotButton__SetCheck_x                                     0x14026D960

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403AC2B0
#define CInvSlotMgr__MoveItem_x                                    0x1403AC430
#define CInvSlotMgr__SelectSlot_x                                  0x1403ADD70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A9CC0
#define CInvSlot__SliderComplete_x                                 0x1403AAFB0
#define CInvSlot__GetItemBase_x                                    0x1403A6750
#define CInvSlot__UpdateItem_x                                     0x1403AB460

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403AE430
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403AF3C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403CF350
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D1D20
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CBDE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CD5F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403CE780

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140492ED0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140494AA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CDE80

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403C8530

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011B210

// CLabel
#define CLabel__UpdateText_x                                       0x1403D91B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140530510
#define CListWnd__dCListWnd_x                                      0x140530950
#define CListWnd__vftable_x                                        0x1407ECE80
#define CListWnd__AddColumn_x                                      0x140530FF0
#define CListWnd__AddColumn1_x                                     0x140531090
#define CListWnd__AddLine_x                                        0x1405311F0
#define CListWnd__AddString_x                                      0x140531780
#define CListWnd__CalculateFirstVisibleLine_x                      0x140531E80
#define CListWnd__CalculateVSBRange_x                              0x140532160
#define CListWnd__ClearSel_x                                       0x140532310
#define CListWnd__ClearAllSel_x                                    0x1405322B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140532370
#define CListWnd__Compare_x                                        0x140532530
#define CListWnd__Draw_x                                           0x140532A00
#define CListWnd__DrawColumnSeparators_x                           0x1405335B0
#define CListWnd__DrawHeader_x                                     0x140533670
#define CListWnd__DrawItem_x                                       0x140533D50
#define CListWnd__DrawLine_x                                       0x1405346D0
#define CListWnd__DrawSeparator_x                                  0x140534B90
#define CListWnd__EnableLine_x                                     0x140534FB0
#define CListWnd__EnsureVisible_x                                  0x140535010
#define CListWnd__ExtendSel_x                                      0x140535110
#define CListWnd__GetColumnMinWidth_x                              0x140535440
#define CListWnd__GetColumnWidth_x                                 0x1405354C0
#define CListWnd__GetCurSel_x                                      0x1405355C0
#define CListWnd__GetItemData_x                                    0x140535940
#define CListWnd__GetItemHeight_x                                  0x140535980
#define CListWnd__GetItemRect_x                                    0x140535B40
#define CListWnd__GetItemText_x                                    0x140535DE0
#define CListWnd__GetSelList_x                                     0x140536030
#define CListWnd__GetSeparatorRect_x                               0x140536220
#define CListWnd__InsertLine_x                                     0x1405376A0
#define CListWnd__RemoveLine_x                                     0x140537CC0
#define CListWnd__SetColors_x                                      0x140538090
#define CListWnd__SetColumnJustification_x                         0x1405380B0
#define CListWnd__SetColumnLabel_x                                 0x140538130
#define CListWnd__SetColumnWidth_x                                 0x1405382D0
#define CListWnd__SetCurSel_x                                      0x1405383A0
#define CListWnd__SetItemColor_x                                   0x140538610
#define CListWnd__SetItemData_x                                    0x1405386B0
#define CListWnd__SetItemText_x                                    0x1405388F0
#define CListWnd__Sort_x                                           0x140538CF0
#define CListWnd__ToggleSel_x                                      0x140538E60
#define CListWnd__SetColumnsSizable_x                              0x140538320
#define CListWnd__SetItemWnd_x                                     0x140538A20
#define CListWnd__GetItemWnd_x                                     0x140535FC0
#define CListWnd__SetItemIcon_x                                    0x1405386F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140531C50
#define CListWnd__SetVScrollPos_x                                  0x140538C50

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EBD60

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407C9DF0
#define MapViewMap__Clear_x                                        0x1403ED8E0
#define MapViewMap__SetZoom_x                                      0x1403F3EA0
#define MapViewMap__HandleLButtonDown_x                            0x1403F09E0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140415620  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041BBD0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041C370
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14041FB70
#define CMerchantWnd__SelectBuySellSlot_x                          0x14041EEC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140423E10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405C8260
#define CPacketScrambler__hton_x                                   0x1405C8250

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140556AF0
#define CSidlManagerBase__FindAnimation1_x                         0x140556A30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140557120
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140556ED0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140555E30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140555DC0
#define CSidlManagerBase__CreateXWnd_x                             0x140555400

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140486470
#define CSidlManager__CreateXWnd_x                                 0x140486630

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054DD60
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054DC50
#define CSidlScreenWnd__ConvertToRes_x                             0x14057A220 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14054DE90
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054D510
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054D460
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054D6D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14054E530
#define CSidlScreenWnd__EnableIniStorage_x                         0x14054E760
#define CSidlScreenWnd__GetChildItem_x                             0x14054E900
#define CSidlScreenWnd__GetSidlPiece_x                             0x14054EB50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140540700 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14054EEC0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14054F230
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14054FAD0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405503C0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C36BE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405509D0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405511C0
#define CSidlScreenWnd__vftable_x                                  0x1407EDED8
#define CSidlScreenWnd__WndNotification_x                          0x140551210

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E2780 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E2B80 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E2AC0
#define CSkillMgr__IsActivatedSkill_x                              0x1402E2F20
#define CSkillMgr__IsCombatSkill_x                                 0x1402E2F60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404A2AE0
#define CSliderWnd__SetValue_x                                     0x14055F900
#define CSliderWnd__SetNumTicks_x                                  0x14055F780

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048CA50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140567E50
#define CStmlWnd__CalculateHSBRange_x                              0x1405400E0
#define CStmlWnd__CalculateVSBRange_x                              0x140568D70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405697F0
#define CStmlWnd__ForceParseNow_x                                  0x140569890
#define CStmlWnd__GetVisibleText_x                                 0x140569F60
#define CStmlWnd__MakeStmlColorTag_x                               0x14056BCC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056BD00
#define CStmlWnd__SetSTMLText_x                                    0x140572CD0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140572E80
#define CStmlWnd__UpdateHistoryString_x                            0x140573210

// CTabWnd
#define CTabWnd__Draw_x                                            0x140564940
#define CTabWnd__DrawCurrentPage_x                                 0x1405649E0
#define CTabWnd__DrawTab_x                                         0x140564DB0
#define CTabWnd__GetTabRect_x                                      0x140565410
#define CTabWnd__InsertPage_x                                      0x1405656E0
#define CTabWnd__RemovePage_x                                      0x140565970
#define CTabWnd__SetPage_x                                         0x140565AD0
#define CTabWnd__UpdatePage_x                                      0x140565DD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140564540
#define CPageWnd__SetTabText_x                                     0x1405645B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC60  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E070


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140539FC0
#define CTextureFont__DrawWrappedText1_x                           0x140539ED0
#define CTextureFont__DrawWrappedText2_x                           0x14053A0F0
#define CTextureFont__GetTextExtent_x                              0x14053A4A0
#define CTextureFont__GetHeight_x                                  0x14053A460

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140578980

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052D3D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A63600
#define CXStr__gCXStrAccess_x                                      0x140C361A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053BA10
#define CXWnd__ClrFocus_x                                          0x14053BC50
#define CXWnd__Destroy_x                                           0x14053BD90
#define CXWnd__DoAllDrawing_x                                      0x14053BE90
#define CXWnd__DrawColoredRect_x                                   0x14053C640
#define CXWnd__DrawTooltip_x                                       0x14053DCA0
#define CXWnd__DrawTooltipAtPoint_x                                0x14053DD50
#define CXWnd__GetChildItem_x                                      0x14053E650
#define CXWnd__GetChildWndAt_x                                     0x14053E710
#define CXWnd__GetClientClipRect_x                                 0x14053E870
#define CXWnd__GetRelativeRect_x                                   0x140540210
#define CXWnd__GetScreenClipRect_x                                 0x140540320
#define CXWnd__GetScreenRect_x                                     0x140540490
#define CXWnd__GetTooltipRect_x                                    0x140540610
#define CXWnd__IsActive_x                                          0x140540BB0
#define CXWnd__IsDescendantOf_x                                    0x140540BE0
#define CXWnd__IsReallyVisible_x                                   0x140540C40
#define CXWnd__IsType_x                                            0x140540C80
#define CXWnd__Minimize_x                                          0x140540D80
#define CXWnd__ProcessTransition_x                                 0x140541D60
#define CXWnd__Resize_x                                            0x140541E80
#define CXWnd__Right_x                                             0x140541F20
#define CXWnd__SetFocus_x                                          0x1405422F0
#define CXWnd__SetFont_x                                           0x140542340
#define CXWnd__SetKeyTooltip_x                                     0x140542450
#define CXWnd__SetMouseOver_x                                      0x140542590
#define CXWnd__SetParent_x                                         0x140542610
#define CXWnd__StartFade_x                                         0x140542A40
#define CXWnd__vftable_x                                           0x1407ED608
#define CXWnd__CXWnd_x                                             0x14053A5C0
#define CXWnd__dCXWnd_x                                            0x14053AF00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14057F3E0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140543F80
#define CXWndManager__DrawCursor_x                                 0x140544260
#define CXWndManager__DrawWindows_x                                0x140544390
#define CXWndManager__GetKeyboardFlags_x                           0x140544A50
#define CXWndManager__HandleKeyboardMsg_x                          0x140544A90
#define CXWndManager__RemoveWnd_x                                  0x140547F10

// CDBStr
#define CDBStr__GetString_x                                        0x140154620

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D1140

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A21D0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0EE0
#define CCharacterListWnd__Quit_x                                  0x1400A21B0
#define CCharacterListWnd__UpdateList_x                            0x1400A2ED0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405A0A00
#define ItemBase__CreateItemTagString_x                            0x1405A1450
#define ItemBase__GetImageNum_x                                    0x1405A3900
#define ItemBase__GetItemValue_x                                   0x1405A53A0
#define ItemBase__IsEmpty_x                                        0x1405A7080
#define ItemBase__IsKeyRingItem_x                                  0x1405A7780
#define ItemBase__ValueSellMerchant_x                              0x1405AB7B0
#define ItemClient__CanDrop_x                                      0x14026FB90
#define ItemClient__CanGoInBag_x                                   0x14026FCC0
#define ItemClient__CreateItemClient_x                             0x14026FFA0
#define ItemClient__dItemClient_x                                  0x14026FA00

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x140173770
#define EQ_LoadingS__Array_x                                       0x140A4FA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B7900
#define PcBase__GetCombatAbility_x                                 0x1405B7FA0
#define PcBase__GetCombatAbilityTimer_x                            0x1405B8040
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405B8790
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405B9120
#define PcClient__AlertInventoryChanged_x                          0x1402912E0
#define PcClient__GetConLevel_x                                    0x140291830  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140293ED0
#define PcClient__HasLoreItem_x                                    0x140294FC0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A1E80
#define PcZoneClient__RemoveMyAffect_x                             0x1402A4990

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E0BE0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E0D90  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E0EC0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E0E00  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140218720  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014EDD0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140613890
#define PlayerBase__CanSee1_x                                      0x140613960
#define PlayerBase__GetVisibilityLineSegment_x                     0x140613E90
#define PlayerBase__HasProperty_x                                  0x1406140B0
#define PlayerBase__IsTargetable_x                                 0x140614170
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402B0860
#define PlayerClient__GetPcClient_x                                0x1402B2F20
#define PlayerClient__PlayerClient_x                               0x1402A9BC0
#define PlayerClient__SetNameSpriteState_x                         0x1402B63C0
#define PlayerClient__SetNameSpriteTint_x                          0x1402B7380
#define PlayerZoneClient__ChangeHeight_x                           0x1402C5300
#define PlayerZoneClient__DoAttack_x                               0x1402C5FC0
#define PlayerZoneClient__GetLevel_x                               0x1402C96F0
#define PlayerZoneClient__IsValidTeleport_x                        0x14021B4E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140162820

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402BF0F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402BF120  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402BF1D0
#define PlayerManagerClient__CreatePlayer_x                        0x1402BEAE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140613510

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140274FB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140274BB0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140274C20
#define KeypressHandler__ClearCommandStateArray_x                  0x140274F40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402750D0
#define KeypressHandler__HandleKeyUp_x                             0x1402751B0
#define KeypressHandler__SaveKeymapping_x                          0x140274E50  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405CED50  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405C9900

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14029A610  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14029FEB0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A2570
#define PcZoneClient__RemovePetEffect_x                            0x1402A4A90
#define PcZoneClient__HasAlternateAbility_x                        0x1402A3240
#define PcZoneClient__CanEquipItem_x                               0x14029E1D0
#define PcZoneClient__GetItemByID_x                                0x1402A0F30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A4810
#define PcZoneClient__BandolierSwap_x                              0x14029D1B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A24C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021FFA0

// IconCache
#define IconCache__GetIcon_x                                       0x140370550

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403670A0
#define CContainerMgr__CloseContainer_x                            0x1403669E0
#define CContainerMgr__OpenExperimentContainer_x                   0x140367410

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044D270

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140268000

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403DFE00
#define CLootWnd__RequestLootSlot_x                                0x1403E0E00

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A3570
#define EQ_Spell__SpellAffects_x                                   0x1401A4830
#define EQ_Spell__SpellAffectBase_x                                0x1401A4790
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAAE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AAA90
#define EQ_Spell__IsSPAStacking_x                                  0x1401A4450
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A4010
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A38E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093150

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A6870  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A68B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A5DC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A5370

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AD940  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014B5F0
#define CTaskManager__GetTaskStatus_x                              0x14014B700
#define CTaskManager__GetElementDescription_x                      0x14014B280

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A18D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401A06D0
#define EqSoundManager__SoundAssistPlay_x                          0x1402E7B50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E7E80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140563BA0
#define CTextureAnimation__SetCurCell_x                            0x140563EB0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140266290

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E7CB0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E7D30
#define CharacterBase__IsExpansionFlag_x                           0x1401C3520

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140347160
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140347AB0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140348EF0

// messages
#define msg_spell_worn_off_x                                       0x1401D7720
#define msg_new_text_x                                             0x1401D30C0
#define __msgTokenTextParam_x                                      0x1401CAEC0
#define msgTokenText_x                                             0x1401CADE0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E9510
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E9430

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140622570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403D98F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036C6B0
#define CCursorAttachment__AttachToCursor1_x                       0x14036B1F0
#define CCursorAttachment__Deactivate_x                            0x14036CBB0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140576E20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140577010
#define CEQSuiteTextureLoader__GetTexture_x                        0x140577020

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140116500
#define CFindItemWnd__Update_x                                     0x140116EA0
#define CFindItemWnd__PickupSelectedItem_x                         0x140110980

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011FDF0
#define LootFiltersManager__GetItemFilterData_x                    0x140120900
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401211A0
#define LootFiltersManager__SetItemLootFilter_x                    0x140121450

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404310E0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140626940
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E22E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403634C0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EBCE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EBBD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140385CE0
#define CGroupWnd__UpdateDisplay_x                                 0x140385A80

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A7850
#define ItemBase__IsLoreEquipped_x                                 0x1405A78E0

#define MultipleItemMoveManager__ProcessMove_x                     0x140287B50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140218880
#define EQPlacedItemManager__GetItemByGuid_x                       0x140218810
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140218850

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DCA80

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400F17F0
#define FactionManagerClient__HandleFactionMessage_x               0x1400F1BA0
#define FactionManagerClient__GetFactionStanding_x                 0x1400F0FC0
#define FactionManagerClient__GetMaxFaction_x                      0x1400F0FC0
#define FactionManagerClient__GetMinFaction_x                      0x1400F0E70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC90

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FCEB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017C050
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017B3D0
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017BE70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017BDF0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402EDC00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DCA80

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E0F50

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140575FA0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056030

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402FEE00

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
