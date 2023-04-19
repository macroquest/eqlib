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

#define __ClientDate                                               20230414u
#define __ExpectedVersionDate                                     "Apr 14 2023"
#define __ExpectedVersionTime                                     "12:51:45"
#define __ActualVersionDate_x                                      0x1407B2868
#define __ActualVersionTime_x                                      0x1407B2858
#define __ActualVersionBuild_x                                     0x1407A0458

// Memory Protection
#define __MemChecker0_x                                            0x14027C430
#define __MemChecker1_x                                            0x140520390
#define __MemChecker4_x                                            0x14024B9C0
#define __EncryptPad0_x                                            0x140A5D610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B98A20
#define instEQZoneInfo_x                                           0x140B98C14 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401FEA70
#define __gfMaxZoomCameraDistance_x                                0x1407A8AF0
#define __gfMaxCameraDistance_x                                    0x1407E3514
#define __CurrentSocial_x                                          0x140919900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A54F70
#define g_eqCommandStates_x                                        0x140A55FE0
#define __CommandList_x                                            0x140A56210
#define __ScreenMode_x                                             0x140AE002C
#define __gWorld_x                                                 0x140B91498
#define __gpbCommandEvent_x                                        0x140B90EA8
#define __ServerHost_x                                             0x140B91088
#define __Guilds_x                                                 0x140B975D0
#define __MouseEventTime_x                                         0x140C0DF20
#define DI8__Mouse_Check_x                                         0x140C12B40
#define __heqmain_x                                                0x140C14FE8
#define DI8__Mouse_x                                               0x140C15000
#define __HWnd_x                                                   0x140C15008
#define __Mouse_x                                                  0x140C12034
#define DI8__Main_x                                                0x140C120D0
#define DI8__Keyboard_x                                            0x140C120D8
#define __LoginName_x                                              0x140C127BC
#define __CurrentMapLabel_x                                        0x140C281E0
#define __LabelCache_x                                             0x140C28DB0
#define __SubscriptionType_x                                       0x140C5DBA0
#define Teleport_Table_Size_x                                      0x140B90F30
#define Teleport_Table_x                                           0x140B914B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B93960
#define pinstActiveBanker_x                                        0x140B913C8
#define pinstActiveCorpse_x                                        0x140B913B8
#define pinstActiveGMaster_x                                       0x140B913C0
#define pinstActiveMerchant_x                                      0x140B913B0
#define pinstAltAdvManager_x                                       0x140AE1188
#define pinstCEverQuest_x                                          0x140C12038
#define pinstCamActor_x                                            0x140AE0018
#define pinstCDBStr_x                                              0x140ADFF90
#define pinstCDisplay_x                                            0x140B914A8
#define pinstControlledPlayer_x                                    0x140B91458
#define pinstCResolutionHandler_x                                  0x141296740
#define pinstCSidlManager_x                                        0x140C39DF0
#define pinstCXWndManager_x                                        0x140C39DE8
#define instDynamicZone_x                                          0x140B97490 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B974DE
#define instExpeditionName_x                                       0x140B9751E
#define pinstDZMember_x                                            0x140B975A8
#define pinstDZTimerInfo_x                                         0x140B975B0
#define pinstEqLogin_x                                             0x140C12100
#define instTribute_x                                              0x140A50800
#define pinstEQSoundManager_x                                      0x140AE1508
#define pinstEQSpellStrings_x                                      0x140AC4B70
#define pinstSGraphicsEngine_x                                     0x1412964D8
#define pinstLocalPC_x                                             0x140B91490
#define pinstLocalPlayer_x                                         0x140B913A8
#define pinstCMercenaryClientManager_x                             0x140C0F7D8
#define pinstModelPlayer_x                                         0x140B913D8
#define pinstRenderInterface_x                                     0x1412964F0
#define pinstSkillMgr_x                                            0x140C11470
#define pinstSpawnManager_x                                        0x140C0FB90
#define pinstSpellManager_x                                        0x140C114D8
#define pinstStringTable_x                                         0x140B914A0
#define pinstSwitchManager_x                                       0x140B90E20
#define pinstTarget_x                                              0x140B91450
#define pinstTaskMember_x                                          0x140A507F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B91460
#define pinstTradeTarget_x                                         0x140B913D0
#define instTributeActive_x                                        0x140A50829
#define pinstViewActor_x                                           0x140AE0010
#define pinstWorldData_x                                           0x140B934D8
#define pinstPlayerPath_x                                          0x140C0FBB8
#define pinstTargetIndicator_x                                     0x140C11588
#define EQObject_Top_x                                             0x140B91478

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C25338
#define pinstCContainerMgr_x                                       0x140AE00A0
#define pinstCContextMenuManager_x                                 0x140C39DA0
#define pinstCInvSlotMgr_x                                         0x140AE0090
#define pinstCItemDisplayManager_x                                 0x140C27DB0
#define pinstCPopupWndManager_x                                    0x140C28640
#define pinstCSpellDisplayMgr_x                                    0x140C28C90
#define pinstCTaskManager_x                                        0x140919C40
#define pinstEQSuiteTextureLoader_x                                0x140A66C80
#define pinstItemIconCache_x                                       0x140C25698
#define pinstLootFiltersManager_x                                  0x140ADF9A8

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14020CCF0
#define __CastRay_x                                                0x140205500
#define __CastRay2_x                                               0x140205210
#define __ConvertItemTags_x                                        0x140205900
#define __CleanItemTags_x                                          0x140058EA0
#define __CreateCascadeMenuItems_x                                 0x140157D20
#define __DoesFileExist_x                                          0x140524B70
#define __EQGetTime_x                                              0x140520940
#define __ExecuteCmd_x                                             0x1401DCFE0
#define __FixHeading_x                                             0x1406230B0
#define __FlushDxKeyboard_x                                        0x1402FA070
#define __get_bearing_x                                            0x14020EEE0
#define __get_melee_range_x                                        0x14020EFD0
#define __GetAnimationCache_x                                      0x140372490
#define __GetGaugeValueFromEQ_x                                    0x1404983B0
#define __GetLabelFromEQ_x                                         0x140499970
#define __GetXTargetType_x                                         0x140624390   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140623130
#define __HelpPath_x                                               0x140C0DDE8   // Why?
#define __NewUIINI_x                                               0x1404A4B50   // Why?
#define __ProcessGameEvents_x                                      0x140240FA0
#define __ProcessKeyboardEvents_x                                  0x1402FB870
#define __ProcessMouseEvents_x                                     0x140242490
#define __SaveColors_x                                             0x140167990
#define __STMLToText_x                                             0x14054E350
#define __WndProc_x                                                0x1402F87F0
#define CMemoryMappedFile__SetFile_x                               0x14075EBA0
#define DrawNetStatus_x                                            0x14028B220
#define Util__FastTime_x                                           0x140521640
#define __eq_delete_x                                              0x1406291C0
#define __eq_new_x                                                 0x1406292BC
#define __CopyLayout_x                                             0x1402788D0
#define __ThrottleFrameRate_x                                      0x140230A42
#define __ThrottleFrameRateEnd_x                                   0x140230AA2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14030ACC0
#define CAAWnd__Update_x                                           0x14030AFC0
#define CAAWnd__UpdateSelected_x                                   0x14030BF80

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078F420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C180

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401729D0
#define AltAdvManager__IsAbilityReady_x                            0x140172C50
#define AltAdvManager__GetAAById_x                                 0x1401722A0
#define AltAdvManager__CanTrainAbility_x                           0x1401720D0
#define AltAdvManager__CanSeeAbility_x                             0x140171D90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A43D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5180
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5390
#define CharacterZoneClient__CanUseItem_x                          0x1400B9B00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5C80
#define CharacterZoneClient__CastSpell_x                           0x1400A5D20
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B55E0
#define CharacterZoneClient__Cur_HP_x                              0x1400BB1E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BB3A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8DB0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C1B90
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D0AF0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA2A0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8FE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C36C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C25E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA470
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C400
#define CharacterZoneClient__GetHPRegen_x                          0x1400C2CF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAE50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C3950
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA570
#define CharacterZoneClient__GetManaRegen_x                        0x1400C46A0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA780
#define CharacterZoneClient__GetModCap_x                           0x1400CBDF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA820
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AAA30
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F5A0
#define CharacterZoneClient__HasSkill_x                            0x1400C7620
#define CharacterZoneClient__HitBySpell_x                          0x1400AB4D0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AECB0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB880
#define CharacterZoneClient__Max_Endurance_x                       0x1402A52B0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CBBC0
#define CharacterZoneClient__Max_Mana_x                            0x1402A54A0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CC080
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B22D0
#define CharacterZoneClient__SpellDuration_x                       0x1400B3090
#define CharacterZoneClient__TotalEffect_x                         0x1400B43D0
#define CharacterZoneClient__UseSkill_x                            0x1400D1A40


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140329130

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140333380

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032F2A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032E330

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140335A50

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EFBB8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140357040
#define CChatWindowManager__InitContextMenu_x                      0x1403571D0
#define CChatWindowManager__FreeChatWindow_x                       0x140356290
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035DF90
#define CChatWindowManager__CreateChatWindow_x                     0x140355BD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D9B70

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035EF10
#define CChatWindow__Clear_x                                       0x14035FD20
#define CChatWindow__WndNotification_x                             0x140360EE0
#define CChatWindow__AddHistory_x                                  0x14035F820

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055F420
#define CContextMenu__RemoveMenuItem_x                             0x14055F940
#define CContextMenu__RemoveAllMenuItems_x                         0x14055F910
#define CContextMenu__CheckMenuItem_x                              0x14055F780
#define CContextMenu__SetMenuItem_x                                0x14055F960
#define CContextMenu__AddSeparator_x                               0x14055F590

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055FFB0
#define CContextMenuManager__RemoveMenu_x                          0x140560520
#define CContextMenuManager__PopupMenu_x                           0x1405602A0
#define CContextMenuManager__Flush_x                               0x140560030
#define CContextMenuManager__CreateDefaultMenu_x                   0x14036C370

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405EC3D0
#define CChatService__GetFriendName_x                              0x1405EC3E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14055B5D0
#define CComboWnd__Draw_x                                          0x14055B6D0
#define CComboWnd__GetCurChoice_x                                  0x14055B9B0  // unused
#define CComboWnd__GetListRect_x                                   0x14055BA50
#define CComboWnd__InsertChoice_x                                  0x14055BD90
#define CComboWnd__SetColors_x                                     0x14055C120
#define CComboWnd__SetChoice_x                                     0x14055C0E0
#define CComboWnd__GetItemCount_x                                  0x14055BA40
#define CComboWnd__GetCurChoiceText_x                              0x14055B9F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14055B980
#define CComboWnd__InsertChoiceAtIndex_x                           0x14055BE50

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14036A1A0
#define CContainerWnd__SetContainer_x                              0x1403B4260
#define CContainerWnd__vftable_x                                   0x1407C0788

// CDisplay
#define CDisplay__cameraType_x                                     0x140AE03B4
#define CDisplay__ZoneMainUI_x                                     0x140576B90
#define CDisplay__PreZoneMainUI_x                                  0x140164970
#define CDisplay__CleanGameUI_x                                    0x140156E20
#define CDisplay__GetClickedActor_x                                0x14015AFB0
#define CDisplay__GetUserDefinedColor_x                            0x14015BA90
#define CDisplay__InitCharSelectUI_x                               0x14015BD40
#define CDisplay__ReloadUI_x                                       0x140166C40
#define CDisplay__WriteTextHD2_x                                   0x14016DC30
#define CDisplay__TrueDistance_x                                   0x14016D910
#define CDisplay__SetViewActor_x                                   0x14016A180
#define CDisplay__GetFloorHeight_x                                 0x14015B210
#define CDisplay__ToggleScreenshotMode_x                           0x14016D420
#define CDisplay__RealRender_World_x                               0x140166040

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140581E40
#define CEditWnd__DrawCaret_x                                      0x140562E70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140563330
#define CEditWnd__GetCaretPt_x                                     0x1405635B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405635F0
#define CEditWnd__GetDisplayString_x                               0x140563860
#define CEditWnd__GetHorzOffset_x                                  0x140563AA0
#define CEditWnd__GetLineForPrintableChar_x                        0x140563BF0
#define CEditWnd__GetSelStartPt_x                                  0x140563ED0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140563D20
#define CEditWnd__PointFromPrintableChar_x                         0x140564A80
#define CEditWnd__ReplaceSelection_x                               0x140564E30
#define CEditWnd__SelectableCharFromPoint_x                        0x1405652D0
#define CEditWnd__SetEditable_x                                    0x140565560
#define CEditWnd__SetWindowText_x                                  0x140565590

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402319F0
#define CEverQuest__ClickedPlayer_x                                0x1402279D0
#define CEverQuest__CreateTargetIndicator_x                        0x140228290
#define CEverQuest__DoTellWindow_x                                 0x1400D9880 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400DA140 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140233420
#define CEverQuest__dsp_chat_x                                     0x1400D92C0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025D2D0
#define CEverQuest__Emote_x                                        0x140233DD0
#define CEverQuest__GetBodyTypeDesc_x                              0x140234B70
#define CEverQuest__GetClassDesc_x                                 0x140234BD0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140234FA0
#define CEverQuest__GetDeityDesc_x                                 0x140235250
#define CEverQuest__GetLangDesc_x                                  0x140235680
#define CEverQuest__GetRaceDesc_x                                  0x140235A20
#define CEverQuest__InterpretCmd_x                                 0x140237330
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024C040
#define CEverQuest__LMouseUp_x                                     0x140238CD0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402498A0
#define CEverQuest__RMouseUp_x                                     0x140243010
#define CEverQuest__SetGameState_x                                 0x14024E570
#define CEverQuest__UPCNotificationFlush_x                         0x140253D60 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140238950
#define CEverQuest__ReportSuccessfulHeal_x                         0x140244340
#define CEverQuest__ReportSuccessfulHit_x                          0x140245080

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14037C810

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946E0
#define CGuild__GetGuildName_x                                     0x140094720

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039EA10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026E4C0
#define CHotButton__SetCheck_x                                     0x14026E790

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403AE280
#define CInvSlotMgr__MoveItem_x                                    0x1403AE400
#define CInvSlotMgr__SelectSlot_x                                  0x1403AFD60

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403ABC70
#define CInvSlot__SliderComplete_x                                 0x1403ACF60
#define CInvSlot__GetItemBase_x                                    0x1403A86F0
#define CInvSlot__UpdateItem_x                                     0x1403AD410

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403B0420
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403B13B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403D12F0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D3CE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CDD30
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CF550
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403D0700

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140494F60
#define CSpellDisplayWnd__UpdateStrings_x                          0x140496B20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CFF90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403CA470

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011BC80

// CLabel
#define CLabel__UpdateText_x                                       0x1403DB0A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140532570
#define CListWnd__dCListWnd_x                                      0x1405329B0
#define CListWnd__vftable_x                                        0x1407EEFC0
#define CListWnd__AddColumn_x                                      0x140533050
#define CListWnd__AddColumn1_x                                     0x1405330F0
#define CListWnd__AddLine_x                                        0x140533250
#define CListWnd__AddString_x                                      0x1405337E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140533EE0
#define CListWnd__CalculateVSBRange_x                              0x1405341C0
#define CListWnd__ClearSel_x                                       0x140534370
#define CListWnd__ClearAllSel_x                                    0x140534310
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405343D0
#define CListWnd__Compare_x                                        0x140534590
#define CListWnd__Draw_x                                           0x140534A60
#define CListWnd__DrawColumnSeparators_x                           0x140535610
#define CListWnd__DrawHeader_x                                     0x1405356D0
#define CListWnd__DrawItem_x                                       0x140535DB0
#define CListWnd__DrawLine_x                                       0x140536730
#define CListWnd__DrawSeparator_x                                  0x140536BF0
#define CListWnd__EnableLine_x                                     0x140537010
#define CListWnd__EnsureVisible_x                                  0x140537070
#define CListWnd__ExtendSel_x                                      0x140537170
#define CListWnd__GetColumnMinWidth_x                              0x1405374A0
#define CListWnd__GetColumnWidth_x                                 0x140537520
#define CListWnd__GetCurSel_x                                      0x140537620
#define CListWnd__GetItemData_x                                    0x1405379A0
#define CListWnd__GetItemHeight_x                                  0x1405379E0
#define CListWnd__GetItemRect_x                                    0x140537BA0
#define CListWnd__GetItemText_x                                    0x140537E40
#define CListWnd__GetSelList_x                                     0x140538090
#define CListWnd__GetSeparatorRect_x                               0x140538280
#define CListWnd__InsertLine_x                                     0x140539700
#define CListWnd__RemoveLine_x                                     0x140539D20
#define CListWnd__SetColors_x                                      0x14053A0F0
#define CListWnd__SetColumnJustification_x                         0x14053A110
#define CListWnd__SetColumnLabel_x                                 0x14053A190
#define CListWnd__SetColumnWidth_x                                 0x14053A330
#define CListWnd__SetCurSel_x                                      0x14053A400
#define CListWnd__SetItemColor_x                                   0x14053A670
#define CListWnd__SetItemData_x                                    0x14053A710
#define CListWnd__SetItemText_x                                    0x14053A950
#define CListWnd__Sort_x                                           0x14053AD60
#define CListWnd__ToggleSel_x                                      0x14053AED0
#define CListWnd__SetColumnsSizable_x                              0x14053A380
#define CListWnd__SetItemWnd_x                                     0x14053AA80
#define CListWnd__GetItemWnd_x                                     0x140538020
#define CListWnd__SetItemIcon_x                                    0x14053A750
#define CListWnd__CalculateCustomWindowPositions_x                 0x140533CB0
#define CListWnd__SetVScrollPos_x                                  0x14053ACC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EDC70

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407CBEC0
#define MapViewMap__Clear_x                                        0x1403EF7F0
#define MapViewMap__SetZoom_x                                      0x1403F5DB0
#define MapViewMap__HandleLButtonDown_x                            0x1403F28F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140417540  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041DB10
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041E2C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140421AE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140420E20
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140425D90

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405CA3C0
#define CPacketScrambler__hton_x                                   0x1405CA3B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140558CA0
#define CSidlManagerBase__FindAnimation1_x                         0x140558BE0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405592D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140559080
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140557FE0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140557F70
#define CSidlManagerBase__CreateXWnd_x                             0x1405575B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140488560
#define CSidlManager__CreateXWnd_x                                 0x140488720

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054FED0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054FDA0
#define CSidlScreenWnd__ConvertToRes_x                             0x14057C400 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140550000
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054F660
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054F5B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054F820
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405506A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405508D0
#define CSidlScreenWnd__GetChildItem_x                             0x140550A70
#define CSidlScreenWnd__GetSidlPiece_x                             0x140550CC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140542830 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140551030
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405513A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140551C50
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140552540
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C39C48
#define CSidlScreenWnd__StoreIniInfo_x                             0x140552B80
#define CSidlScreenWnd__StoreIniVis_x                              0x140553370
#define CSidlScreenWnd__vftable_x                                  0x1407F0018
#define CSidlScreenWnd__WndNotification_x                          0x1405533C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E4240 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E4640 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E4580
#define CSkillMgr__IsActivatedSkill_x                              0x1402E49E0
#define CSkillMgr__IsCombatSkill_x                                 0x1402E4A20

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405612E0
#define CSliderWnd__SetValue_x                                     0x140561AF0
#define CSliderWnd__SetNumTicks_x                                  0x140561970

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048EB50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14056A040
#define CStmlWnd__CalculateHSBRange_x                              0x140542230
#define CStmlWnd__CalculateVSBRange_x                              0x14056AF70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14056B9F0
#define CStmlWnd__ForceParseNow_x                                  0x14056BA90
#define CStmlWnd__GetVisibleText_x                                 0x14056C160
#define CStmlWnd__MakeStmlColorTag_x                               0x14056DEC0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056DF00
#define CStmlWnd__SetSTMLText_x                                    0x140574ED0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140575080
#define CStmlWnd__UpdateHistoryString_x                            0x140575410

// CTabWnd
#define CTabWnd__Draw_x                                            0x140566B30
#define CTabWnd__DrawCurrentPage_x                                 0x140566BD0
#define CTabWnd__DrawTab_x                                         0x140566FA0
#define CTabWnd__GetTabRect_x                                      0x140567600
#define CTabWnd__InsertPage_x                                      0x1405678D0
#define CTabWnd__RemovePage_x                                      0x140567B60
#define CTabWnd__SetPage_x                                         0x140567CC0
#define CTabWnd__UpdatePage_x                                      0x140567FC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140566730
#define CPageWnd__SetTabText_x                                     0x1405667A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC20  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E030


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14053C030
#define CTextureFont__DrawWrappedText1_x                           0x14053BF40
#define CTextureFont__DrawWrappedText2_x                           0x14053C160
#define CTextureFont__GetTextExtent_x                              0x14053C510
#define CTextureFont__GetHeight_x                                  0x14053C4D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14057AB60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052F430

// CXStr
#define CXStr__gFreeLists_x                                        0x140A66600
#define CXStr__gCXStrAccess_x                                      0x140C39208

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053DA90
#define CXWnd__ClrFocus_x                                          0x14053DCD0
#define CXWnd__Destroy_x                                           0x14053DE10
#define CXWnd__DoAllDrawing_x                                      0x14053DF10
#define CXWnd__DrawColoredRect_x                                   0x14053E6D0
#define CXWnd__DrawTooltip_x                                       0x14053FD50
#define CXWnd__DrawTooltipAtPoint_x                                0x14053FE00
#define CXWnd__GetChildItem_x                                      0x140540710
#define CXWnd__GetChildWndAt_x                                     0x1405407D0
#define CXWnd__GetClientClipRect_x                                 0x140540940
#define CXWnd__GetRelativeRect_x                                   0x140542350
#define CXWnd__GetScreenClipRect_x                                 0x140542450
#define CXWnd__GetScreenRect_x                                     0x1405425C0
#define CXWnd__GetTooltipRect_x                                    0x140542740
#define CXWnd__IsActive_x                                          0x140542CE0
#define CXWnd__IsDescendantOf_x                                    0x140542D10
#define CXWnd__IsReallyVisible_x                                   0x140542D80
#define CXWnd__IsType_x                                            0x140542DC0
#define CXWnd__Minimize_x                                          0x140542EC0
#define CXWnd__ProcessTransition_x                                 0x140543EE0
#define CXWnd__Resize_x                                            0x140544000
#define CXWnd__Right_x                                             0x1405440A0
#define CXWnd__SetFocus_x                                          0x140544460
#define CXWnd__SetFont_x                                           0x1405444B0
#define CXWnd__SetKeyTooltip_x                                     0x1405445C0
#define CXWnd__SetMouseOver_x                                      0x140544700
#define CXWnd__SetParent_x                                         0x140544780
#define CXWnd__StartFade_x                                         0x140544BB0
#define CXWnd__vftable_x                                           0x1407EF748
#define CXWnd__CXWnd_x                                             0x14053C630
#define CXWnd__dCXWnd_x                                            0x14053CF70

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405815C0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405460D0
#define CXWndManager__DrawCursor_x                                 0x1405463B0
#define CXWndManager__DrawWindows_x                                0x1405464E0
#define CXWndManager__GetKeyboardFlags_x                           0x140546BA0
#define CXWndManager__HandleKeyboardMsg_x                          0x140546BE0
#define CXWndManager__RemoveWnd_x                                  0x14054A060

// CDBStr
#define CDBStr__GetString_x                                        0x140155010

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D32A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A21A0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0EB0
#define CCharacterListWnd__Quit_x                                  0x1400A2180
#define CCharacterListWnd__UpdateList_x                            0x1400A2EA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405A2B60
#define ItemBase__CreateItemTagString_x                            0x1405A35C0
#define ItemBase__GetImageNum_x                                    0x1405A5A80
#define ItemBase__GetItemValue_x                                   0x1405A7590
#define ItemBase__IsEmpty_x                                        0x1405A9210
#define ItemBase__IsKeyRingItem_x                                  0x1405A98F0
#define ItemBase__ValueSellMerchant_x                              0x1405AD8B0
#define ItemClient__CanDrop_x                                      0x140270A10
#define ItemClient__CanGoInBag_x                                   0x140270B40
#define ItemClient__CreateItemClient_x                             0x140270E20
#define ItemClient__dItemClient_x                                  0x140270880

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x140174170
#define EQ_LoadingS__Array_x                                       0x140A52A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B9A50
#define PcBase__GetCombatAbility_x                                 0x1405BA0F0
#define PcBase__GetCombatAbilityTimer_x                            0x1405BA190
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405BA8E0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405BB270
#define PcClient__AlertInventoryChanged_x                          0x140292BF0
#define PcClient__GetConLevel_x                                    0x140293140  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402957E0
#define PcClient__HasLoreItem_x                                    0x1402968E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A37E0
#define PcZoneClient__RemoveMyAffect_x                             0x1402A6320

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E1650  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E1800  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E1930  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E1870  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140219450  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014F830

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140615A90
#define PlayerBase__CanSee1_x                                      0x140615B60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140616090
#define PlayerBase__HasProperty_x                                  0x1406162B0
#define PlayerBase__IsTargetable_x                                 0x140616370
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402B2200
#define PlayerClient__GetPcClient_x                                0x1402B48C0
#define PlayerClient__PlayerClient_x                               0x1402AB560
#define PlayerClient__SetNameSpriteState_x                         0x1402B7D60
#define PlayerClient__SetNameSpriteTint_x                          0x1402B8D20
#define PlayerZoneClient__ChangeHeight_x                           0x1402C6D70
#define PlayerZoneClient__DoAttack_x                               0x1402C7A60
#define PlayerZoneClient__GetLevel_x                               0x1402CB190
#define PlayerZoneClient__IsValidTeleport_x                        0x14021C200
#define PlayerZoneClient__LegalPlayerRace_x                        0x140163210

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402C0B60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402C0B90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402C0C40
#define PlayerManagerClient__CreatePlayer_x                        0x1402C0550
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140615710

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140275E20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140275A20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140275A90
#define KeypressHandler__ClearCommandStateArray_x                  0x140275DB0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140275F40
#define KeypressHandler__HandleKeyUp_x                             0x140276020
#define KeypressHandler__SaveKeymapping_x                          0x140275CC0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405D0EB0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405CBA60

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14029BF40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402A1800
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A3EE0
#define PcZoneClient__RemovePetEffect_x                            0x1402A6420
#define PcZoneClient__HasAlternateAbility_x                        0x1402A4BD0
#define PcZoneClient__CanEquipItem_x                               0x14029FB10
#define PcZoneClient__GetItemByID_x                                0x1402A2890
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A61A0
#define PcZoneClient__BandolierSwap_x                              0x14029EAF0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A3E30

// Doors
#define EQSwitch__UseSwitch_x                                      0x140220CC0

// IconCache
#define IconCache__GetIcon_x                                       0x1403724C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140369020
#define CContainerMgr__CloseContainer_x                            0x140368960
#define CContainerMgr__OpenExperimentContainer_x                   0x140369390

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044F290

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140268E30

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403E1D00
#define CLootWnd__RequestLootSlot_x                                0x1403E2D00

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A4100
#define EQ_Spell__SpellAffects_x                                   0x1401A53C0
#define EQ_Spell__SpellAffectBase_x                                0x1401A5320
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAC10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AABC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401A4FE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A4BA0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A4470

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093110

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A8940  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A8980
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A7E90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A7440

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AFA10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014C070
#define CTaskManager__GetTaskStatus_x                              0x14014C180
#define CTaskManager__GetElementDescription_x                      0x14014BD00

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A2460
#define EqSoundManager__PlayScriptMp3_x                            0x1401A1260
#define EqSoundManager__SoundAssistPlay_x                          0x1402E9610  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E9940  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140565D90
#define CTextureAnimation__SetCurCell_x                            0x1405660A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402670C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E9E30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E9EB0
#define CharacterBase__IsExpansionFlag_x                           0x1401C3EB0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403490E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140349A30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14034AE70

// messages
#define msg_spell_worn_off_x                                       0x1401D80E0
#define msg_new_text_x                                             0x1401D3A80
#define __msgTokenTextParam_x                                      0x1401CB860
#define msgTokenText_x                                             0x1401CB780

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402EAFE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402EAF00

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140624770

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403DB7E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036E620
#define CCursorAttachment__AttachToCursor1_x                       0x14036D160
#define CCursorAttachment__Deactivate_x                            0x14036EB20

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140579000
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405791F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140579200

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140116F40
#define CFindItemWnd__Update_x                                     0x1401178E0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401113A0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140120870
#define LootFiltersManager__GetItemFilterData_x                    0x140121380
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140121C20
#define LootFiltersManager__SetItemLootFilter_x                    0x140121ED0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140433090

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140628B40
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E3DA0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140365440

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EDE60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EDD50  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140387C40
#define CGroupWnd__UpdateDisplay_x                                 0x1403879E0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A99C0
#define ItemBase__IsLoreEquipped_x                                 0x1405A9A50

#define MultipleItemMoveManager__ProcessMove_x                     0x140289460

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402195B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140219540
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140219580

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DE540

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400F1CD0
#define FactionManagerClient__HandleFactionMessage_x               0x1400F2080
#define FactionManagerClient__GetFactionStanding_x                 0x1400F14A0
#define FactionManagerClient__GetMaxFaction_x                      0x1400F14A0
#define FactionManagerClient__GetMinFaction_x                      0x1400F1350

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC90

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FD3A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017CA50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017BDD0
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017C870  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017C7F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402EF830

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DE540

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E19C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140578180

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056030

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140300D10

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
