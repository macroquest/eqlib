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

#define __ClientDate                                               20230307u
#define __ExpectedVersionDate                                     "Mar  7 2023"
#define __ExpectedVersionTime                                     "10:36:34"
#define __ActualVersionDate_x                                      0x1407B17A8
#define __ActualVersionTime_x                                      0x1407B1798
#define __ActualVersionBuild_x                                     0x14079F448

// Memory Protection
#define __MemChecker0_x                                            0x14027B990
#define __MemChecker1_x                                            0x14051EC60
#define __MemChecker4_x                                            0x14024AFB0
#define __EncryptPad0_x                                            0x140A5C610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B979D0
#define instEQZoneInfo_x                                           0x140B97BC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401F7F00
#define __gfMaxZoomCameraDistance_x                                0x1407A7AD0
#define __gfMaxCameraDistance_x                                    0x1407E23D4
#define __CurrentSocial_x                                          0x140918900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A53F70
#define g_eqCommandStates_x                                        0x140A54FE0
#define __CommandList_x                                            0x140A55210
#define __ScreenMode_x                                             0x140ADEFC4
#define __gWorld_x                                                 0x140B90448
#define __gpbCommandEvent_x                                        0x140B8FE58
#define __ServerHost_x                                             0x140B90038
#define __Guilds_x                                                 0x140B96580
#define __MouseEventTime_x                                         0x140C0CEC8
#define DI8__Mouse_Check_x                                         0x140C11AE0
#define __heqmain_x                                                0x140C13F88
#define DI8__Mouse_x                                               0x140C13FA0
#define __HWnd_x                                                   0x140C13FA8
#define __Mouse_x                                                  0x140C10FD4
#define DI8__Main_x                                                0x140C11070
#define DI8__Keyboard_x                                            0x140C11078
#define __LoginName_x                                              0x140C1175C
#define __CurrentMapLabel_x                                        0x140C27180
#define __LabelCache_x                                             0x140C27D50
#define __SubscriptionType_x                                       0x140C5CB40
#define Teleport_Table_Size_x                                      0x140B8FEE0
#define Teleport_Table_x                                           0x140B90460

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B92910
#define pinstActiveBanker_x                                        0x140B90378
#define pinstActiveCorpse_x                                        0x140B90368
#define pinstActiveGMaster_x                                       0x140B90370
#define pinstActiveMerchant_x                                      0x140B90360
#define pinstAltAdvManager_x                                       0x140AE0138
#define pinstCEverQuest_x                                          0x140C10FD8
#define pinstCamActor_x                                            0x140ADEFB0
#define pinstCDBStr_x                                              0x140ADEF40
#define pinstCDisplay_x                                            0x140B90458
#define pinstControlledPlayer_x                                    0x140B90408
#define pinstCResolutionHandler_x                                  0x1412956E0
#define pinstCSidlManager_x                                        0x140C38D90
#define pinstCXWndManager_x                                        0x140C38D88
#define instDynamicZone_x                                          0x140B96440 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B9648E
#define instExpeditionName_x                                       0x140B964CE
#define pinstDZMember_x                                            0x140B96558
#define pinstDZTimerInfo_x                                         0x140B96560
#define pinstEqLogin_x                                             0x140C110A0
#define instTribute_x                                              0x140A4F800
#define pinstEQSoundManager_x                                      0x140AE04B8
#define pinstEQSpellStrings_x                                      0x140AC3B70
#define pinstSGraphicsEngine_x                                     0x141295478
#define pinstLocalPC_x                                             0x140B90440
#define pinstLocalPlayer_x                                         0x140B90358
#define pinstCMercenaryClientManager_x                             0x140C0E778
#define pinstModelPlayer_x                                         0x140B90388
#define pinstRenderInterface_x                                     0x141295490
#define pinstSkillMgr_x                                            0x140C10410
#define pinstSpawnManager_x                                        0x140C0EB30
#define pinstSpellManager_x                                        0x140C10478
#define pinstStringTable_x                                         0x140B90450
#define pinstSwitchManager_x                                       0x140B8FDD0
#define pinstTarget_x                                              0x140B90400
#define pinstTaskMember_x                                          0x140A4F7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B90410
#define pinstTradeTarget_x                                         0x140B90380
#define instTributeActive_x                                        0x140A4F829
#define pinstViewActor_x                                           0x140ADEFA8
#define pinstWorldData_x                                           0x140B92488
#define pinstPlayerPath_x                                          0x140C0EB58
#define pinstTargetIndicator_x                                     0x140C10528
#define EQObject_Top_x                                             0x140B90428

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C242D8
#define pinstCContainerMgr_x                                       0x140ADF038
#define pinstCContextMenuManager_x                                 0x140C38D40
#define pinstCInvSlotMgr_x                                         0x140ADF020
#define pinstCItemDisplayManager_x                                 0x140C26D50
#define pinstCPopupWndManager_x                                    0x140C275E0
#define pinstCSpellDisplayMgr_x                                    0x140C27C30
#define pinstCTaskManager_x                                        0x140918C40
#define pinstEQSuiteTextureLoader_x                                0x140A65C80
#define pinstItemIconCache_x                                       0x140C24638
#define pinstLootFiltersManager_x                                  0x140ADE958

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14020C360
#define __CastRay_x                                                0x140204B80
#define __CastRay2_x                                               0x140204890
#define __ConvertItemTags_x                                        0x140204F80
#define __CleanItemTags_x                                          0x140058EA0
#define __CreateCascadeMenuItems_x                                 0x140157360
#define __DoesFileExist_x                                          0x140523440
#define __EQGetTime_x                                              0x14051F210
#define __ExecuteCmd_x                                             0x1401DC900
#define __FixHeading_x                                             0x140621610
#define __FlushDxKeyboard_x                                        0x1402F89A0
#define __get_bearing_x                                            0x14020E550
#define __get_melee_range_x                                        0x14020E640
#define __GetAnimationCache_x                                      0x140370DA0
#define __GetGaugeValueFromEQ_x                                    0x140496C70
#define __GetLabelFromEQ_x                                         0x140498230
#define __GetXTargetType_x                                         0x1406228F0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140621690
#define __HelpPath_x                                               0x140C0CD90   // Why?
#define __NewUIINI_x                                               0x1404A33F0   // Why?
#define __ProcessGameEvents_x                                      0x140240600
#define __ProcessKeyboardEvents_x                                  0x1402FA1A0
#define __ProcessMouseEvents_x                                     0x140241AE0
#define __SaveColors_x                                             0x140166FB0
#define __STMLToText_x                                             0x14054CBA0
#define __WndProc_x                                                0x1402F7120
#define CMemoryMappedFile__SetFile_x                               0x14075D100
#define DrawNetStatus_x                                            0x140289CD0
#define Util__FastTime_x                                           0x14051FF10
#define __eq_delete_x                                              0x140627720
#define __eq_new_x                                                 0x14062781C
#define __CopyLayout_x                                             0x140277E30
#define __ThrottleFrameRate_x                                      0x1402300A1
#define __ThrottleFrameRateEnd_x                                   0x140230101

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403095F0
#define CAAWnd__Update_x                                           0x1403098F0
#define CAAWnd__UpdateSelected_x                                   0x14030A8B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078E420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C180

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x140171FF0
#define AltAdvManager__IsAbilityReady_x                            0x140172270
#define AltAdvManager__GetAAById_x                                 0x1401718C0
#define AltAdvManager__CanTrainAbility_x                           0x1401716F0
#define AltAdvManager__CanSeeAbility_x                             0x1401713B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A43D0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5180
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5390
#define CharacterZoneClient__CanUseItem_x                          0x1400B97A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5C80
#define CharacterZoneClient__CastSpell_x                           0x1400A5D20
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5280
#define CharacterZoneClient__Cur_HP_x                              0x1400BAE80
#define CharacterZoneClient__Cur_Mana_x                            0x1400BB040
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8CD0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C1820
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D0610  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA1C0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8C80
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C3350
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C2270
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA390
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA30
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C400
#define CharacterZoneClient__GetHPRegen_x                          0x1400C2980
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAAF0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C35E0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA410
#define CharacterZoneClient__GetManaRegen_x                        0x1400C43B0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA620
#define CharacterZoneClient__GetModCap_x                           0x1400CBAF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA6C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA8D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F5A0
#define CharacterZoneClient__HasSkill_x                            0x1400C7320
#define CharacterZoneClient__HitBySpell_x                          0x1400AB370
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEB50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB580
#define CharacterZoneClient__Max_Endurance_x                       0x1402A3D40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CB8C0
#define CharacterZoneClient__Max_Mana_x                            0x1402A3F30  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CBD80
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2160
#define CharacterZoneClient__SpellDuration_x                       0x1400B2D40
#define CharacterZoneClient__TotalEffect_x                         0x1400B4070
#define CharacterZoneClient__UseSkill_x                            0x1400D1560


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140327A50

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140331C70

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032DBA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032CC30

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140334320

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EEA78

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140355940
#define CChatWindowManager__InitContextMenu_x                      0x140355AD0
#define CChatWindowManager__FreeChatWindow_x                       0x140354B90
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035C890
#define CChatWindowManager__CreateChatWindow_x                     0x1403544D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D9670

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035D810
#define CChatWindow__Clear_x                                       0x14035E620
#define CChatWindow__WndNotification_x                             0x14035F7E0
#define CChatWindow__AddHistory_x                                  0x14035E120

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055DB80
#define CContextMenu__RemoveMenuItem_x                             0x14055E090
#define CContextMenu__RemoveAllMenuItems_x                         0x14055E060
#define CContextMenu__CheckMenuItem_x                              0x14055DED0
#define CContextMenu__SetMenuItem_x                                0x14055E0B0
#define CContextMenu__AddSeparator_x                               0x14055DCE0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055E700
#define CContextMenuManager__RemoveMenu_x                          0x14055EC80
#define CContextMenuManager__PopupMenu_x                           0x14055EA00
#define CContextMenuManager__Flush_x                               0x14055E780
#define CContextMenuManager__CreateDefaultMenu_x                   0x14036AC80

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405EA980
#define CChatService__GetFriendName_x                              0x1405EA990

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140559D80
#define CComboWnd__Draw_x                                          0x140559E70
#define CComboWnd__GetCurChoice_x                                  0x14055A140  // unused
#define CComboWnd__GetListRect_x                                   0x14055A1E0
#define CComboWnd__InsertChoice_x                                  0x14055A500
#define CComboWnd__SetColors_x                                     0x14055A890
#define CComboWnd__SetChoice_x                                     0x14055A850
#define CComboWnd__GetItemCount_x                                  0x14055A1D0
#define CComboWnd__GetCurChoiceText_x                              0x14055A180  // unused
#define CComboWnd__GetChoiceText_x                                 0x14055A110
#define CComboWnd__InsertChoiceAtIndex_x                           0x14055A5C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140368AB0
#define CContainerWnd__SetContainer_x                              0x1403B2AB0
#define CContainerWnd__vftable_x                                   0x1407BF6C8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ADF34C
#define CDisplay__ZoneMainUI_x                                     0x1405751A0
#define CDisplay__PreZoneMainUI_x                                  0x140163FB0
#define CDisplay__CleanGameUI_x                                    0x140156460
#define CDisplay__GetClickedActor_x                                0x14015A5F0
#define CDisplay__GetUserDefinedColor_x                            0x14015B0D0
#define CDisplay__InitCharSelectUI_x                               0x14015B380
#define CDisplay__ReloadUI_x                                       0x140166260
#define CDisplay__WriteTextHD2_x                                   0x14016D250
#define CDisplay__TrueDistance_x                                   0x14016CF30
#define CDisplay__SetViewActor_x                                   0x1401697A0
#define CDisplay__GetFloorHeight_x                                 0x14015A850
#define CDisplay__ToggleScreenshotMode_x                           0x14016CA40
#define CDisplay__RealRender_World_x                               0x140165680

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140580450
#define CEditWnd__DrawCaret_x                                      0x140561570  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140561A00
#define CEditWnd__GetCaretPt_x                                     0x140561C80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140561CC0
#define CEditWnd__GetDisplayString_x                               0x140561F20
#define CEditWnd__GetHorzOffset_x                                  0x140562160
#define CEditWnd__GetLineForPrintableChar_x                        0x1405622A0
#define CEditWnd__GetSelStartPt_x                                  0x140562580  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405623D0
#define CEditWnd__PointFromPrintableChar_x                         0x140563130
#define CEditWnd__ReplaceSelection_x                               0x1405634D0
#define CEditWnd__SelectableCharFromPoint_x                        0x140563970
#define CEditWnd__SetEditable_x                                    0x140563C00
#define CEditWnd__SetWindowText_x                                  0x140563C30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140231050
#define CEverQuest__ClickedPlayer_x                                0x140227010
#define CEverQuest__CreateTargetIndicator_x                        0x1402278D0
#define CEverQuest__DoTellWindow_x                                 0x1400D9380 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D9C40 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140232A80
#define CEverQuest__dsp_chat_x                                     0x1400D8DC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025C800
#define CEverQuest__Emote_x                                        0x140233430
#define CEverQuest__GetBodyTypeDesc_x                              0x1402341D0
#define CEverQuest__GetClassDesc_x                                 0x140234230
#define CEverQuest__GetClassThreeLetterCode_x                      0x140234600
#define CEverQuest__GetDeityDesc_x                                 0x1402348B0
#define CEverQuest__GetLangDesc_x                                  0x140234CE0
#define CEverQuest__GetRaceDesc_x                                  0x140235080
#define CEverQuest__InterpretCmd_x                                 0x140236990
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024B630
#define CEverQuest__LMouseUp_x                                     0x140238330
#define CEverQuest__RightClickedOnPlayer_x                         0x140248EA0
#define CEverQuest__RMouseUp_x                                     0x140242660
#define CEverQuest__SetGameState_x                                 0x14024DB40
#define CEverQuest__UPCNotificationFlush_x                         0x140253290 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140237FB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140243990
#define CEverQuest__ReportSuccessfulHit_x                          0x1402446D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14037B0E0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946E0
#define CGuild__GetGuildName_x                                     0x140094720

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039D2E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026DA00
#define CHotButton__SetCheck_x                                     0x14026DCD0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403ACB00
#define CInvSlotMgr__MoveItem_x                                    0x1403ACC80
#define CInvSlotMgr__SelectSlot_x                                  0x1403AE5C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403AA510
#define CInvSlot__SliderComplete_x                                 0x1403AB800
#define CInvSlot__GetItemBase_x                                    0x1403A6FA0
#define CInvSlot__UpdateItem_x                                     0x1403ABCB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403AEC80
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403AFC10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403CFBE0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D25A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CC640
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CDE60
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403CF000

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140493840
#define CSpellDisplayWnd__UpdateStrings_x                          0x140495410

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CE7B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403C8D80

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011B280

// CLabel
#define CLabel__UpdateText_x                                       0x1403D9A50

// CListWnd
#define CListWnd__CListWnd_x                                       0x140530E40
#define CListWnd__dCListWnd_x                                      0x140531280
#define CListWnd__vftable_x                                        0x1407EDE80
#define CListWnd__AddColumn_x                                      0x140531920
#define CListWnd__AddColumn1_x                                     0x1405319C0
#define CListWnd__AddLine_x                                        0x140531B20
#define CListWnd__AddString_x                                      0x1405320B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405327B0
#define CListWnd__CalculateVSBRange_x                              0x140532A90
#define CListWnd__ClearSel_x                                       0x140532C40
#define CListWnd__ClearAllSel_x                                    0x140532BE0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140532CA0
#define CListWnd__Compare_x                                        0x140532E60
#define CListWnd__Draw_x                                           0x140533330
#define CListWnd__DrawColumnSeparators_x                           0x140533ED0
#define CListWnd__DrawHeader_x                                     0x140533F90
#define CListWnd__DrawItem_x                                       0x140534660
#define CListWnd__DrawLine_x                                       0x140534FD0
#define CListWnd__DrawSeparator_x                                  0x140535490
#define CListWnd__EnableLine_x                                     0x1405358B0
#define CListWnd__EnsureVisible_x                                  0x140535910
#define CListWnd__ExtendSel_x                                      0x140535A10
#define CListWnd__GetColumnMinWidth_x                              0x140535D40
#define CListWnd__GetColumnWidth_x                                 0x140535DC0
#define CListWnd__GetCurSel_x                                      0x140535EC0
#define CListWnd__GetItemData_x                                    0x140536240
#define CListWnd__GetItemHeight_x                                  0x140536280
#define CListWnd__GetItemRect_x                                    0x140536440
#define CListWnd__GetItemText_x                                    0x1405366E0
#define CListWnd__GetSelList_x                                     0x140536930
#define CListWnd__GetSeparatorRect_x                               0x140536B20
#define CListWnd__InsertLine_x                                     0x140537F80
#define CListWnd__RemoveLine_x                                     0x1405385A0
#define CListWnd__SetColors_x                                      0x140538970
#define CListWnd__SetColumnJustification_x                         0x140538990
#define CListWnd__SetColumnLabel_x                                 0x140538A10
#define CListWnd__SetColumnWidth_x                                 0x140538BB0
#define CListWnd__SetCurSel_x                                      0x140538C80
#define CListWnd__SetItemColor_x                                   0x140538EF0
#define CListWnd__SetItemData_x                                    0x140538F90
#define CListWnd__SetItemText_x                                    0x1405391D0
#define CListWnd__Sort_x                                           0x1405395E0
#define CListWnd__ToggleSel_x                                      0x140539750
#define CListWnd__SetColumnsSizable_x                              0x140538C00
#define CListWnd__SetItemWnd_x                                     0x140539300
#define CListWnd__GetItemWnd_x                                     0x1405368C0
#define CListWnd__SetItemIcon_x                                    0x140538FD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140532580
#define CListWnd__SetVScrollPos_x                                  0x140539540

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EC600

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407CADF0
#define MapViewMap__Clear_x                                        0x1403EE180
#define MapViewMap__SetZoom_x                                      0x1403F4740
#define MapViewMap__HandleLButtonDown_x                            0x1403F1280

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140415ED0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041C490
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041CC40
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140420450
#define CMerchantWnd__SelectBuySellSlot_x                          0x14041F790
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140424700

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405C8980
#define CPacketScrambler__hton_x                                   0x1405C8970

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140557480
#define CSidlManagerBase__FindAnimation1_x                         0x1405573C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140557AB0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140557860
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405567C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140556750
#define CSidlManagerBase__CreateXWnd_x                             0x140555D90

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140486DE0
#define CSidlManager__CreateXWnd_x                                 0x140486FA0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054E700
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054E5F0
#define CSidlScreenWnd__ConvertToRes_x                             0x14057AA10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14054E830
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054DEB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054DE00
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054E070
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14054EED0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14054F100
#define CSidlScreenWnd__GetChildItem_x                             0x14054F2A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14054F4F0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140541070 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14054F860
#define CSidlScreenWnd__LoadIniInfo_x                              0x14054FBA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140550450
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140550D40
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C38BE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140551360
#define CSidlScreenWnd__StoreIniVis_x                              0x140551B50
#define CSidlScreenWnd__vftable_x                                  0x1407EEED8
#define CSidlScreenWnd__WndNotification_x                          0x140551BA0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E2CE0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E30E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E3020
#define CSkillMgr__IsActivatedSkill_x                              0x1402E3480
#define CSkillMgr__IsCombatSkill_x                                 0x1402E34C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404A3460
#define CSliderWnd__SetValue_x                                     0x140560220
#define CSliderWnd__SetNumTicks_x                                  0x1405600A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048D3C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140568690
#define CStmlWnd__CalculateHSBRange_x                              0x140540A40
#define CStmlWnd__CalculateVSBRange_x                              0x1405695B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14056A030
#define CStmlWnd__ForceParseNow_x                                  0x14056A0D0
#define CStmlWnd__GetVisibleText_x                                 0x14056A7A0
#define CStmlWnd__MakeStmlColorTag_x                               0x14056C500
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056C540
#define CStmlWnd__SetSTMLText_x                                    0x140573500
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405736B0
#define CStmlWnd__UpdateHistoryString_x                            0x140573A40

// CTabWnd
#define CTabWnd__Draw_x                                            0x140565180
#define CTabWnd__DrawCurrentPage_x                                 0x140565220
#define CTabWnd__DrawTab_x                                         0x1405655F0
#define CTabWnd__GetTabRect_x                                      0x140565C50
#define CTabWnd__InsertPage_x                                      0x140565F20
#define CTabWnd__RemovePage_x                                      0x1405661B0
#define CTabWnd__SetPage_x                                         0x140566310
#define CTabWnd__UpdatePage_x                                      0x140566610

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140564DA0
#define CPageWnd__SetTabText_x                                     0x140564E10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC20  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E030


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14053A8B0
#define CTextureFont__DrawWrappedText1_x                           0x14053A7C0
#define CTextureFont__DrawWrappedText2_x                           0x14053A9E0
#define CTextureFont__GetTextExtent_x                              0x14053AD90
#define CTextureFont__GetHeight_x                                  0x14053AD50

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140579170

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052DD00

// CXStr
#define CXStr__gFreeLists_x                                        0x140A65600
#define CXStr__gCXStrAccess_x                                      0x140C381A8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053C2C0
#define CXWnd__ClrFocus_x                                          0x14053C500
#define CXWnd__Destroy_x                                           0x14053C640
#define CXWnd__DoAllDrawing_x                                      0x14053C750
#define CXWnd__DrawColoredRect_x                                   0x14053CF10
#define CXWnd__DrawTooltip_x                                       0x14053E580
#define CXWnd__DrawTooltipAtPoint_x                                0x14053E630
#define CXWnd__GetChildItem_x                                      0x14053EF30
#define CXWnd__GetChildWndAt_x                                     0x14053EFF0
#define CXWnd__GetClientClipRect_x                                 0x14053F150
#define CXWnd__GetRelativeRect_x                                   0x140540B60
#define CXWnd__GetScreenClipRect_x                                 0x140540C70
#define CXWnd__GetScreenRect_x                                     0x140540DF0
#define CXWnd__GetTooltipRect_x                                    0x140540F70
#define CXWnd__IsActive_x                                          0x140541520
#define CXWnd__IsDescendantOf_x                                    0x140541550
#define CXWnd__IsReallyVisible_x                                   0x1405415C0
#define CXWnd__IsType_x                                            0x140541600
#define CXWnd__Minimize_x                                          0x1405416F0
#define CXWnd__ProcessTransition_x                                 0x140542740
#define CXWnd__Resize_x                                            0x140542860
#define CXWnd__Right_x                                             0x140542900
#define CXWnd__SetFocus_x                                          0x140542CC0
#define CXWnd__SetFont_x                                           0x140542D10
#define CXWnd__SetKeyTooltip_x                                     0x140542E00
#define CXWnd__SetMouseOver_x                                      0x140542F40
#define CXWnd__SetParent_x                                         0x140542FC0
#define CXWnd__StartFade_x                                         0x140543410
#define CXWnd__vftable_x                                           0x1407EE608
#define CXWnd__CXWnd_x                                             0x14053AEB0
#define CXWnd__dCXWnd_x                                            0x14053B7B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14057FBD0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140544930
#define CXWndManager__DrawCursor_x                                 0x140544C10
#define CXWndManager__DrawWindows_x                                0x140544D40
#define CXWndManager__GetKeyboardFlags_x                           0x140545400
#define CXWndManager__HandleKeyboardMsg_x                          0x140545440
#define CXWndManager__RemoveWnd_x                                  0x1405488C0

// CDBStr
#define CDBStr__GetString_x                                        0x140154650

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D1860

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A21A0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0EB0
#define CCharacterListWnd__Quit_x                                  0x1400A2180
#define CCharacterListWnd__UpdateList_x                            0x1400A2EA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405A1170
#define ItemBase__CreateItemTagString_x                            0x1405A1BC0
#define ItemBase__GetImageNum_x                                    0x1405A4030
#define ItemBase__GetItemValue_x                                   0x1405A5B40
#define ItemBase__IsEmpty_x                                        0x1405A77C0
#define ItemBase__IsKeyRingItem_x                                  0x1405A7EB0
#define ItemBase__ValueSellMerchant_x                              0x1405ABE80
#define ItemClient__CanDrop_x                                      0x14026FF60
#define ItemClient__CanGoInBag_x                                   0x140270090
#define ItemClient__CreateItemClient_x                             0x140270370
#define ItemClient__dItemClient_x                                  0x14026FDD0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x140173790
#define EQ_LoadingS__Array_x                                       0x140A51A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B8020
#define PcBase__GetCombatAbility_x                                 0x1405B86C0
#define PcBase__GetCombatAbilityTimer_x                            0x1405B8760
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405B8EB0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405B9840
#define PcClient__AlertInventoryChanged_x                          0x1402916A0
#define PcClient__GetConLevel_x                                    0x140291BF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140294290
#define PcClient__HasLoreItem_x                                    0x1402953A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A2280
#define PcZoneClient__RemoveMyAffect_x                             0x1402A4DB0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E0F70  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E1120  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E1250  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E1190  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140218AA0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014EE40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140613FD0
#define PlayerBase__CanSee1_x                                      0x1406140A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406145D0
#define PlayerBase__HasProperty_x                                  0x1406147F0
#define PlayerBase__IsTargetable_x                                 0x1406148B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402B0C90
#define PlayerClient__GetPcClient_x                                0x1402B3350
#define PlayerClient__PlayerClient_x                               0x1402A9FF0
#define PlayerClient__SetNameSpriteState_x                         0x1402B67F0
#define PlayerClient__SetNameSpriteTint_x                          0x1402B77B0
#define PlayerZoneClient__ChangeHeight_x                           0x1402C5830
#define PlayerZoneClient__DoAttack_x                               0x1402C64F0
#define PlayerZoneClient__GetLevel_x                               0x1402C9C20
#define PlayerZoneClient__IsValidTeleport_x                        0x14021B860
#define PlayerZoneClient__LegalPlayerRace_x                        0x140162850

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402BF620  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402BF650  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402BF700
#define PlayerManagerClient__CreatePlayer_x                        0x1402BF010
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140613C50

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140275380
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140274F80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140274FF0
#define KeypressHandler__ClearCommandStateArray_x                  0x140275310  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402754A0
#define KeypressHandler__HandleKeyUp_x                             0x140275580
#define KeypressHandler__SaveKeymapping_x                          0x140275220  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405CF470  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405CA020

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14029AA10  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402A02B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A2980
#define PcZoneClient__RemovePetEffect_x                            0x1402A4EB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402A3660
#define PcZoneClient__CanEquipItem_x                               0x14029E5D0
#define PcZoneClient__GetItemByID_x                                0x1402A1330
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A4C30
#define PcZoneClient__BandolierSwap_x                              0x14029D5B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A28D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140220320

// IconCache
#define IconCache__GetIcon_x                                       0x140370DD0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140367930
#define CContainerMgr__CloseContainer_x                            0x140367270
#define CContainerMgr__OpenExperimentContainer_x                   0x140367CA0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044DB70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140268370

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403E06A0
#define CLootWnd__RequestLootSlot_x                                0x1403E16A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A35D0
#define EQ_Spell__SpellAffects_x                                   0x1401A4890
#define EQ_Spell__SpellAffectBase_x                                0x1401A47F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAAB0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AAA60
#define EQ_Spell__IsSPAStacking_x                                  0x1401A44B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A4070
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A3940

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093110

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A71F0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A7230
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A6740
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A5CF0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AE2C0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014B670
#define CTaskManager__GetTaskStatus_x                              0x14014B780
#define CTaskManager__GetElementDescription_x                      0x14014B300

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A1930
#define EqSoundManager__PlayScriptMp3_x                            0x1401A0730
#define EqSoundManager__SoundAssistPlay_x                          0x1402E80B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E83E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140564430
#define CTextureAnimation__SetCurCell_x                            0x140564740

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140266600

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E83E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E8460
#define CharacterBase__IsExpansionFlag_x                           0x1401C3890

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403479F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140348340
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140349780

// messages
#define msg_spell_worn_off_x                                       0x1401D7AB0
#define msg_new_text_x                                             0x1401D3450
#define __msgTokenTextParam_x                                      0x1401CB230
#define msgTokenText_x                                             0x1401CB150

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E9A70
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E9990

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140622CD0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403DA190

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036CF30
#define CCursorAttachment__AttachToCursor1_x                       0x14036BA70
#define CCursorAttachment__Deactivate_x                            0x14036D430

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140577610
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140577800
#define CEQSuiteTextureLoader__GetTexture_x                        0x140577810

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140116550
#define CFindItemWnd__Update_x                                     0x140116EF0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401109C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011FE70
#define LootFiltersManager__GetItemFilterData_x                    0x140120980
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140121220
#define LootFiltersManager__SetItemLootFilter_x                    0x1401214D0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404319E0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406270A0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E2840

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140363D50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EC410  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EC300  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140386510
#define CGroupWnd__UpdateDisplay_x                                 0x1403862B0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A7F80
#define ItemBase__IsLoreEquipped_x                                 0x1405A8010

#define MultipleItemMoveManager__ProcessMove_x                     0x140287F20

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140218C00
#define EQPlacedItemManager__GetItemByGuid_x                       0x140218B90
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140218BD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DCFC0

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
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017C080
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017B400
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017BEA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017BE20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402EE160

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DCFC0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E12E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140576790

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056030

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402FF640

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8E0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
