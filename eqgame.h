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

#define __ClientDate                                               20230627u
#define __ExpectedVersionDate                                     "Jun 27 2023"
#define __ExpectedVersionTime                                     "12:37:51"
#define __ActualVersionDate_x                                      0x1408107A8
#define __ActualVersionTime_x                                      0x140810798
#define __ActualVersionBuild_x                                     0x140805580

// Memory Protection
#define __MemChecker0_x                                            0x1402A5440
#define __MemChecker1_x                                            0x14054E700
#define __MemChecker4_x                                            0x140274820
#define __EncryptPad0_x                                            0x140ACB870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C07890
#define instEQZoneInfo_x                                           0x140C07A84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14021DFE0
#define __gfMaxZoomCameraDistance_x                                0x140806730
#define __gfMaxCameraDistance_x                                    0x140845274
#define __CurrentSocial_x                                          0x14098794C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC31B0
#define g_eqCommandStates_x                                        0x140AC4220
#define __CommandList_x                                            0x140AC4450
#define __ScreenMode_x                                             0x140B4F164
#define __gWorld_x                                                 0x140C006F8
#define __gpbCommandEvent_x                                        0x140BFFD1C
#define __ServerHost_x                                             0x140C00308
#define __Guilds_x                                                 0x140C06440
#define __MouseEventTime_x                                         0x140C7CDC8
#define DI8__Mouse_Check_x                                         0x140C80EF8
#define __heqmain_x                                                0x140C83390
#define DI8__Mouse_x                                               0x140C833E8
#define __HWnd_x                                                   0x140C83E98
#define __Mouse_x                                                  0x140C833A8
#define DI8__Main_x                                                0x140C833C0
#define DI8__Keyboard_x                                            0x140C833C8
#define __LoginName_x                                              0x140C83B2C
#define __CurrentMapLabel_x                                        0x140C97070
#define __LabelCache_x                                             0x140C97C40
#define __SubscriptionType_x                                       0x140CCCB40
#define Teleport_Table_Size_x                                      0x140C001A4
#define Teleport_Table_x                                           0x140C00720

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C027D0
#define pinstActiveBanker_x                                        0x140C00640
#define pinstActiveCorpse_x                                        0x140C00630
#define pinstActiveGMaster_x                                       0x140C00638
#define pinstActiveMerchant_x                                      0x140C00628
#define pinstAltAdvManager_x                                       0x140B4FFF8
#define pinstCEverQuest_x                                          0x140C833E0
#define pinstCamActor_x                                            0x140B4F150
#define pinstCDBStr_x                                              0x140B4EE00
#define pinstCDisplay_x                                            0x140C027A0
#define pinstControlledPlayer_x                                    0x140C006D0
#define pinstCResolutionHandler_x                                  0x1413056E8
#define pinstCSidlManager_x                                        0x140CA8E60
#define pinstCXWndManager_x                                        0x140CA8E58
#define instDynamicZone_x                                          0x140C06300 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C0634E
#define instExpeditionName_x                                       0x140C0638E
#define pinstDZMember_x                                            0x140C06418
#define pinstDZTimerInfo_x                                         0x140C06420
#define pinstEqLogin_x                                             0x140C83470
#define instTribute_x                                              0x140ABE840
#define pinstEQSoundManager_x                                      0x140B50378
#define pinstEQSpellStrings_x                                      0x140B33A10
#define pinstSGraphicsEngine_x                                     0x141305468
#define pinstLocalPC_x                                             0x140C00710
#define pinstLocalPlayer_x                                         0x140C00620
#define pinstCMercenaryClientManager_x                             0x140C7E678
#define pinstModelPlayer_x                                         0x140C00650
#define pinstRenderInterface_x                                     0x141305480
#define pinstSkillMgr_x                                            0x140C80310
#define pinstSpawnManager_x                                        0x140C7EA30
#define pinstSpellManager_x                                        0x140C80378
#define pinstStringTable_x                                         0x140C00718
#define pinstSwitchManager_x                                       0x140BFFC90
#define pinstTarget_x                                              0x140C006C8
#define pinstTaskMember_x                                          0x140ABE830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C006D8
#define pinstTradeTarget_x                                         0x140C00648
#define instTributeActive_x                                        0x140ABE869
#define pinstViewActor_x                                           0x140B4F148
#define pinstWorldData_x                                           0x140C02798
#define pinstPlayerPath_x                                          0x140C7EA58
#define pinstTargetIndicator_x                                     0x140C80428
#define EQObject_Top_x                                             0x140C006F0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C941C8
#define pinstCContainerMgr_x                                       0x140B4F3F8
#define pinstCContextMenuManager_x                                 0x140CA8C30
#define pinstCInvSlotMgr_x                                         0x140B4F3D8
#define pinstCItemDisplayManager_x                                 0x140C96C40
#define pinstCPopupWndManager_x                                    0x140C974D0
#define pinstCSpellDisplayMgr_x                                    0x140C97B20
#define pinstCTaskManager_x                                        0x140987C80
#define pinstEQSuiteTextureLoader_x                                0x140AD4EF0
#define pinstItemIconCache_x                                       0x140C94528
#define pinstLootFiltersManager_x                                  0x140B4E848
#define pinstGFViewListener_x                                      0x140CA83B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140235720
#define __CastRay_x                                                0x14022DF40
#define __CastRay2_x                                               0x14022DC50
#define __ConvertItemTags_x                                        0x14022E340
#define __CleanItemTags_x                                          0x140086940
#define __CreateCascadeMenuItems_x                                 0x14017F450
#define __DoesFileExist_x                                          0x1405531D0
#define __EQGetTime_x                                              0x14054ECB0
#define __ExecuteCmd_x                                             0x1402051E0
#define __FixHeading_x                                             0x140678700
#define __FlushDxKeyboard_x                                        0x1403236A0
#define __get_bearing_x                                            0x140237910
#define __get_melee_range_x                                        0x140237A00
#define __GetAnimationCache_x                                      0x14039B730
#define __GetGaugeValueFromEQ_x                                    0x1404C67C0
#define __GetLabelFromEQ_x                                         0x1404C7DA0
#define __GetXTargetType_x                                         0x1406799E0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140678780
#define __HelpPath_x                                               0x140C7CC90   // Why?
#define __NewUIINI_x                                               0x1404D31E0   // Why?
#define __ProcessGameEvents_x                                      0x140269C80
#define __ProcessKeyboardEvents_x                                  0x140324F00
#define __ProcessMouseEvents_x                                     0x14026B170
#define __SaveColors_x                                             0x14018F540
#define __STMLToText_x                                             0x140564720
#define __WndProc_x                                                0x140321E10
#define CMemoryMappedFile__SetFile_x                               0x1407B0AA0
#define DrawNetStatus_x                                            0x1402B4240
#define Util__FastTime_x                                           0x14054FA30
#define __eq_delete_x                                              0x1406A2884
#define __eq_new_x                                                 0x1406A2840
#define __CopyLayout_x                                             0x1402A18D0
#define __ThrottleFrameRate_x                                      0x1402595CC
#define __ThrottleFrameRateEnd_x                                   0x14025962C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140334070
#define CAAWnd__Update_x                                           0x140334370
#define CAAWnd__UpdateSelected_x                                   0x140335330

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A8B60
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A1490
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407EC760
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400A9410

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019A620
#define AltAdvManager__IsAbilityReady_x                            0x14019A8A0
#define AltAdvManager__GetAAById_x                                 0x140199EF0
#define AltAdvManager__CanTrainAbility_x                           0x140199D20
#define AltAdvManager__CanSeeAbility_x                             0x1401999E0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CF180
#define CharacterZoneClient__CalcAffectChange_x                    0x1400CFF30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0140
#define CharacterZoneClient__CanUseItem_x                          0x1400E48B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D0A30
#define CharacterZoneClient__CastSpell_x                           0x1400D0AD0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E0390
#define CharacterZoneClient__Cur_HP_x                              0x1400E5F90
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6150
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D3B60
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EC940
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FB8D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5050
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E3D90
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EE490
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400ED390
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D5220
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C57C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7190
#define CharacterZoneClient__GetHPRegen_x                          0x1400EDAC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E5C00
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EE720
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D5320
#define CharacterZoneClient__GetManaRegen_x                        0x1400EF480
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D5530
#define CharacterZoneClient__GetModCap_x                           0x1400F6BD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D55D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D57E0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CA330
#define CharacterZoneClient__HasSkill_x                            0x1400F2400
#define CharacterZoneClient__HitBySpell_x                          0x1400D6280
#define CharacterZoneClient__IsStackBlocked_x                      0x1400D9A60
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F6660
#define CharacterZoneClient__Max_Endurance_x                       0x1402CE3C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F69A0
#define CharacterZoneClient__Max_Mana_x                            0x1402CE5B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F6E60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DD080
#define CharacterZoneClient__SpellDuration_x                       0x1400DDE40
#define CharacterZoneClient__TotalEffect_x                         0x1400DF180
#define CharacterZoneClient__UseSkill_x                            0x1400FC820


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140352640

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035C8E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403587D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140357860

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14035EFB0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140853240

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403804D0
#define CChatWindowManager__InitContextMenu_x                      0x140380660
#define CChatWindowManager__FreeChatWindow_x                       0x14037F720
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140386E80
#define CChatWindowManager__CreateChatWindow_x                     0x14037F060

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140104980

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140387E70
#define CChatWindow__Clear_x                                       0x140388CB0
#define CChatWindow__WndNotification_x                             0x140389EA0
#define CChatWindow__AddHistory_x                                  0x1403887B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14057F5E0
#define CContextMenu__RemoveMenuItem_x                             0x14057F9D0
#define CContextMenu__RemoveAllMenuItems_x                         0x14057F9A0
#define CContextMenu__CheckMenuItem_x                              0x14057F810
#define CContextMenu__SetMenuItem_x                                0x14057F9F0
#define CContextMenu__AddSeparator_x                               0x14057F750

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14057E840
#define CContextMenuManager__RemoveMenu_x                          0x14057EE10
#define CContextMenuManager__PopupMenu_x                           0x14057EB50
#define CContextMenuManager__Flush_x                               0x14057E8C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140395410

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140642480
#define CChatService__GetFriendName_x                              0x140642490

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14056F760
#define CComboWnd__Draw_x                                          0x14056F860
#define CComboWnd__GetCurChoice_x                                  0x14056FB40  // unused
#define CComboWnd__GetListRect_x                                   0x14056FBE0
#define CComboWnd__InsertChoice_x                                  0x14056FF20
#define CComboWnd__SetColors_x                                     0x1405702B0
#define CComboWnd__SetChoice_x                                     0x140570270
#define CComboWnd__GetItemCount_x                                  0x14056FBD0
#define CComboWnd__GetCurChoiceText_x                              0x14056FB80  // unused
#define CComboWnd__GetChoiceText_x                                 0x14056FB10
#define CComboWnd__InsertChoiceAtIndex_x                           0x14056FFE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403931F0
#define CContainerWnd__SetContainer_x                              0x1403DFFC0
#define CContainerWnd__vftable_x                                   0x14081F938

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4EF0C
#define CDisplay__ZoneMainUI_x                                     0x1405A6B30
#define CDisplay__PreZoneMainUI_x                                  0x14018C390
#define CDisplay__CleanGameUI_x                                    0x14017E550
#define CDisplay__GetClickedActor_x                                0x1401826E0
#define CDisplay__GetUserDefinedColor_x                            0x1401832F0
#define CDisplay__InitCharSelectUI_x                               0x1401835A0
#define CDisplay__ReloadUI_x                                       0x14018E670
#define CDisplay__WriteTextHD2_x                                   0x140195860
#define CDisplay__TrueDistance_x                                   0x140195540
#define CDisplay__SetViewActor_x                                   0x140191DA0
#define CDisplay__GetFloorHeight_x                                 0x140182940
#define CDisplay__ToggleScreenshotMode_x                           0x140195040
#define CDisplay__RealRender_World_x                               0x14018DA60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405B0E80
#define CEditWnd__DrawCaret_x                                      0x1405954C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140595980
#define CEditWnd__GetCaretPt_x                                     0x140595C00  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140595C40
#define CEditWnd__GetDisplayString_x                               0x140595EB0
#define CEditWnd__GetHorzOffset_x                                  0x1405960F0
#define CEditWnd__GetLineForPrintableChar_x                        0x140596240
#define CEditWnd__GetSelStartPt_x                                  0x140596520  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140596370
#define CEditWnd__PointFromPrintableChar_x                         0x1405970D0
#define CEditWnd__ReplaceSelection_x                               0x140597480
#define CEditWnd__SelectableCharFromPoint_x                        0x140597920
#define CEditWnd__SetEditable_x                                    0x140597BB0
#define CEditWnd__SetWindowText_x                                  0x140597BE0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025A5A0
#define CEverQuest__ClickedPlayer_x                                0x1402504A0
#define CEverQuest__CreateTargetIndicator_x                        0x140250D60
#define CEverQuest__DoTellWindow_x                                 0x140104690 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140104F50 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025BFD0
#define CEverQuest__dsp_chat_x                                     0x1401040D0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140286110
#define CEverQuest__Emote_x                                        0x14025C980
#define CEverQuest__GetBodyTypeDesc_x                              0x14025D720
#define CEverQuest__GetClassDesc_x                                 0x14025D780
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025DB50
#define CEverQuest__GetDeityDesc_x                                 0x14025DE00
#define CEverQuest__GetLangDesc_x                                  0x14025E230
#define CEverQuest__GetRaceDesc_x                                  0x14025E5D0
#define CEverQuest__InterpretCmd_x                                 0x14025FEE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140274EA0
#define CEverQuest__LMouseUp_x                                     0x140261880
#define CEverQuest__RightClickedOnPlayer_x                         0x140272700
#define CEverQuest__RMouseUp_x                                     0x14026BD00
#define CEverQuest__SetGameState_x                                 0x1402773D0
#define CEverQuest__UPCNotificationFlush_x                         0x14027CBC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140261500
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026D030
#define CEverQuest__ReportSuccessfulHit_x                          0x14026DEE0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403A5AF0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400BF560
#define CGuild__GetGuildName_x                                     0x1400BF5A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403C7D70

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140297480
#define CHotButton__SetCheck_x                                     0x140297750

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403D91D0
#define CInvSlotMgr__MoveItem_x                                    0x1403D93A0
#define CInvSlotMgr__SelectSlot_x                                  0x1403DAD00

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403D6710
#define CInvSlot__SliderComplete_x                                 0x1403D7A40
#define CInvSlot__GetItemBase_x                                    0x1403D3170
#define CInvSlot__UpdateItem_x                                     0x1403D7EF0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403DBB50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403FCF30
#define CItemDisplayWnd__UpdateStrings_x                           0x1403FF930
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403F9930
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403FB180
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403FC340

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404C3350
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404C4F30

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404FE430

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403F6060

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140146E40

// CLabel
#define CLabel__UpdateText_x                                       0x140406D10

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405730F0
#define CListWnd__dCListWnd_x                                      0x140573540
#define CListWnd__vftable_x                                        0x140851B08
#define CListWnd__AddColumn_x                                      0x140573BE0
#define CListWnd__AddColumn1_x                                     0x140573C80
#define CListWnd__AddLine_x                                        0x140573DE0
#define CListWnd__AddString_x                                      0x140574370
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405748E0
#define CListWnd__CalculateVSBRange_x                              0x140574BC0
#define CListWnd__ClearSel_x                                       0x140574D70
#define CListWnd__ClearAllSel_x                                    0x140574D10
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140574DD0
#define CListWnd__Compare_x                                        0x140574F90
#define CListWnd__Draw_x                                           0x140575460
#define CListWnd__DrawColumnSeparators_x                           0x140576010
#define CListWnd__DrawHeader_x                                     0x1405760D0
#define CListWnd__DrawItem_x                                       0x1405767B0
#define CListWnd__DrawLine_x                                       0x140577130
#define CListWnd__DrawSeparator_x                                  0x1405775F0
#define CListWnd__EnableLine_x                                     0x140577A10
#define CListWnd__EnsureVisible_x                                  0x140577A70
#define CListWnd__ExtendSel_x                                      0x140577B70
#define CListWnd__GetColumnMinWidth_x                              0x140577EA0
#define CListWnd__GetColumnWidth_x                                 0x140577F20
#define CListWnd__GetCurSel_x                                      0x140578020
#define CListWnd__GetItemData_x                                    0x1405783A0
#define CListWnd__GetItemHeight_x                                  0x1405783E0
#define CListWnd__GetItemRect_x                                    0x140578600
#define CListWnd__GetItemText_x                                    0x1405788A0
#define CListWnd__GetSelList_x                                     0x140578AF0
#define CListWnd__GetSeparatorRect_x                               0x140578CE0
#define CListWnd__InsertLine_x                                     0x14057A160
#define CListWnd__RemoveLine_x                                     0x14057A7D0
#define CListWnd__SetColors_x                                      0x14057ABA0
#define CListWnd__SetColumnJustification_x                         0x14057ABC0
#define CListWnd__SetColumnLabel_x                                 0x14057AC40
#define CListWnd__SetColumnWidth_x                                 0x14057ADE0
#define CListWnd__SetCurSel_x                                      0x14057AEB0
#define CListWnd__SetItemColor_x                                   0x14057B120
#define CListWnd__SetItemData_x                                    0x14057B1C0
#define CListWnd__SetItemText_x                                    0x14057B400
#define CListWnd__Sort_x                                           0x14057B810
#define CListWnd__ToggleSel_x                                      0x14057B980
#define CListWnd__SetColumnsSizable_x                              0x14057AE30
#define CListWnd__SetItemWnd_x                                     0x14057B530
#define CListWnd__GetItemWnd_x                                     0x140578A80
#define CListWnd__SetItemIcon_x                                    0x14057B200
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405746B0
#define CListWnd__SetVScrollPos_x                                  0x14057B770

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140419F70

// MapViewMap
#define MapViewMap__vftable_x                                      0x14082C218
#define MapViewMap__Clear_x                                        0x14041BAF0
#define MapViewMap__SetZoom_x                                      0x1404220B0
#define MapViewMap__HandleLButtonDown_x                            0x14041EBF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140443810  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140449E00
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14044A5B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14044DDC0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14044D110
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140452070

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406203A0
#define CPacketScrambler__hton_x                                   0x140620390

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14058ED50
#define CSidlManagerBase__FindAnimation1_x                         0x14058EC90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14058F380
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14058F130
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14058E080
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14058E010
#define CSidlManagerBase__CreateXWnd_x                             0x14058D650

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404B65D0
#define CSidlManager__CreateXWnd_x                                 0x1404B6790

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14055E720
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14055E830
#define CSidlScreenWnd__ConvertToRes_x                             0x1405AB440 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14055E9B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14055DEB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14055DF80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14055E150
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14055F050
#define CSidlScreenWnd__EnableIniStorage_x                         0x14055F280
#define CSidlScreenWnd__GetChildItem_x                             0x14055F420
#define CSidlScreenWnd__GetSidlPiece_x                             0x14055F670
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14056BD10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14055F9E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14055FD50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140560600
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140560EF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8250
#define CSidlScreenWnd__StoreIniInfo_x                             0x140561540
#define CSidlScreenWnd__StoreIniVis_x                              0x140561D30
#define CSidlScreenWnd__vftable_x                                  0x140850D10
#define CSidlScreenWnd__WndNotification_x                          0x140561D80

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030D3C0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030D7C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030D700
#define CSkillMgr__IsActivatedSkill_x                              0x14030DB60
#define CSkillMgr__IsCombatSkill_x                                 0x14030DBA0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14057C300
#define CSliderWnd__SetValue_x                                     0x14057CB10
#define CSliderWnd__SetNumTicks_x                                  0x14057C990

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404BCC10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140599FE0
#define CStmlWnd__CalculateHSBRange_x                              0x14056B6C0
#define CStmlWnd__CalculateVSBRange_x                              0x14059AE80
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059B980
#define CStmlWnd__ForceParseNow_x                                  0x14059BA20
#define CStmlWnd__GetVisibleText_x                                 0x14059C0F0
#define CStmlWnd__MakeStmlColorTag_x                               0x14059DE50
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059DE90
#define CStmlWnd__SetSTMLText_x                                    0x1405A4E60
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A5010
#define CStmlWnd__UpdateHistoryString_x                            0x1405A53A0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14057CEE0
#define CTabWnd__DrawCurrentPage_x                                 0x14057CF80
#define CTabWnd__DrawTab_x                                         0x14057D350
#define CTabWnd__GetTabRect_x                                      0x14057D9B0
#define CTabWnd__InsertPage_x                                      0x14057DC80
#define CTabWnd__RemovePage_x                                      0x14057DF10
#define CTabWnd__SetPage_x                                         0x14057E070
#define CTabWnd__UpdatePage_x                                      0x14057E370

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140598040
#define CPageWnd__SetTabText_x                                     0x1405980B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B8C90  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B90A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405866A0
#define CTextureFont__DrawWrappedText1_x                           0x1405865B0
#define CTextureFont__DrawWrappedText2_x                           0x1405867D0
#define CTextureFont__GetTextExtent_x                              0x140586B80
#define CTextureFont__GetHeight_x                                  0x140586B40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405A9BA0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14055DA90

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD4860
#define CXStr__gCXStrAccess_x                                      0x140CA8098

// CXWnd
#define CXWnd__BringToTop_x                                        0x140566F00
#define CXWnd__ClrFocus_x                                          0x140567140
#define CXWnd__Destroy_x                                           0x140567280
#define CXWnd__DoAllDrawing_x                                      0x140567390
#define CXWnd__DrawColoredRect_x                                   0x140567B60
#define CXWnd__DrawTooltip_x                                       0x1405691D0
#define CXWnd__DrawTooltipAtPoint_x                                0x140569280
#define CXWnd__GetChildItem_x                                      0x140569B80
#define CXWnd__GetChildWndAt_x                                     0x140569C40
#define CXWnd__GetClientRect_x                                     0x140569F00
#define CXWnd__GetClientClipRect_x                                 0x140569DB0
#define CXWnd__GetRelativeRect_x                                   0x14056B800
#define CXWnd__GetScreenClipRect_x                                 0x14056B910
#define CXWnd__GetScreenRect_x                                     0x14056BA90
#define CXWnd__GetTooltipRect_x                                    0x14056BC10
#define CXWnd__IsActive_x                                          0x14056C1D0
#define CXWnd__IsDescendantOf_x                                    0x14056C200
#define CXWnd__IsReallyVisible_x                                   0x14056C270
#define CXWnd__IsType_x                                            0x14056C2B0
#define CXWnd__Minimize_x                                          0x14056C3B0
#define CXWnd__ProcessTransition_x                                 0x14056D280
#define CXWnd__Resize_x                                            0x14056D390
#define CXWnd__Right_x                                             0x14056D430
#define CXWnd__SetFocus_x                                          0x14056D800
#define CXWnd__SetFont_x                                           0x14056D850
#define CXWnd__SetKeyTooltip_x                                     0x14056D950
#define CXWnd__SetMouseOver_x                                      0x14056DA90
#define CXWnd__SetParent_x                                         0x14056DB10
#define CXWnd__StartFade_x                                         0x14056DF40
#define CXWnd__vftable_x                                           0x140851388
#define CXWnd__CXWnd_x                                             0x140565AA0
#define CXWnd__dCXWnd_x                                            0x1405663F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405B0600

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140580BA0
#define CXWndManager__DrawCursor_x                                 0x140580E80
#define CXWndManager__DrawWindows_x                                0x1405810D0
#define CXWndManager__GetKeyboardFlags_x                           0x140581790
#define CXWndManager__HandleKeyboardMsg_x                          0x1405817D0
#define CXWndManager__RemoveWnd_x                                  0x140584D80

// CDBStr
#define CDBStr__GetString_x                                        0x14017C700

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406292C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CCF50
#define CCharacterListWnd__EnterWorld_x                            0x1400CBC50
#define CCharacterListWnd__Quit_x                                  0x1400CCF30
#define CCharacterListWnd__UpdateList_x                            0x1400CDC50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405F8720
#define ItemBase__CreateItemTagString_x                            0x1405F9190
#define ItemBase__GetImageNum_x                                    0x1405FB700
#define ItemBase__GetItemValue_x                                   0x1405FD5A0
#define ItemBase__IsEmpty_x                                        0x1405FF150
#define ItemBase__IsKeyRingItem_x                                  0x1405FF870
#define ItemBase__ValueSellMerchant_x                              0x140603890
#define ItemClient__CanDrop_x                                      0x140299A10
#define ItemClient__CanGoInBag_x                                   0x140299B40
#define ItemClient__CreateItemClient_x                             0x140299E20
#define ItemClient__dItemClient_x                                  0x140299880

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019BDC0
#define EQ_LoadingS__Array_x                                       0x140AC0CC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14060FA30
#define PcBase__GetCombatAbility_x                                 0x1406100D0
#define PcBase__GetCombatAbilityTimer_x                            0x140610170
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406108C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140611250
#define PcClient__AlertInventoryChanged_x                          0x1402BBC70
#define PcClient__GetConLevel_x                                    0x1402BC230  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402BE8D0
#define PcClient__HasLoreItem_x                                    0x1402BF9E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CC8F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402CF430

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140209850  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140209A00  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140209B30  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140209A70  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140241E70  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140176F40

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14066BB30
#define PlayerBase__CanSee1_x                                      0x14066BC00
#define PlayerBase__GetVisibilityLineSegment_x                     0x14066C130
#define PlayerBase__HasProperty_x                                  0x14066C350
#define PlayerBase__IsTargetable_x                                 0x14066C410
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DB330
#define PlayerClient__GetPcClient_x                                0x1402DD9F0
#define PlayerClient__PlayerClient_x                               0x1402D4670
#define PlayerClient__SetNameSpriteState_x                         0x1402E0E90
#define PlayerClient__SetNameSpriteTint_x                          0x1402E1E50
#define PlayerZoneClient__ChangeHeight_x                           0x1402EFED0
#define PlayerZoneClient__DoAttack_x                               0x1402F0BC0
#define PlayerZoneClient__GetLevel_x                               0x1402F42F0
#define PlayerZoneClient__IsValidTeleport_x                        0x140244C30
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018AC30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402E9CC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402E9CF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402E9DA0
#define PlayerManagerClient__CreatePlayer_x                        0x1402E96B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14066B7B0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14029EDF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14029E9F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14029EA60
#define KeypressHandler__ClearCommandStateArray_x                  0x14029ED80  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14029EF10
#define KeypressHandler__HandleKeyUp_x                             0x14029F010
#define KeypressHandler__SaveKeymapping_x                          0x14029EC90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140626E90  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140621A40

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C5040  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CA900
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CCFF0
#define PcZoneClient__RemovePetEffect_x                            0x1402CF530
#define PcZoneClient__HasAlternateAbility_x                        0x1402CDCE0
#define PcZoneClient__CanEquipItem_x                               0x1402C8C10
#define PcZoneClient__GetItemByID_x                                0x1402CB990
#define PcZoneClient__RemoveBuffEffect_x                           0x1402CF2B0
#define PcZoneClient__BandolierSwap_x                              0x1402C7BF0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CCF40

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402496F0

// IconCache
#define IconCache__GetIcon_x                                       0x14039B760

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140392040
#define CContainerMgr__CloseContainer_x                            0x140391980
#define CContainerMgr__OpenExperimentContainer_x                   0x1403923B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14047C850

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140291D20

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14040DFE0
#define CLootWnd__RequestLootSlot_x                                0x14040EFE0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CBD70
#define EQ_Spell__SpellAffects_x                                   0x1401CD030
#define EQ_Spell__SpellAffectBase_x                                0x1401CCF90
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D59C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D5970
#define EQ_Spell__IsSPAStacking_x                                  0x1401CCC50
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CC810
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC0E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BE1B0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404D6FF0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404D7030
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404D6530
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404D5AF0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404DE090  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140173770
#define CTaskManager__GetTaskStatus_x                              0x140173880
#define CTaskManager__GetElementDescription_x                      0x140173400

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA0F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C8F30
#define EqSoundManager__SoundAssistPlay_x                          0x140312790  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140312AC0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14056ECF0
#define CTextureAnimation__SetCurCell_x                            0x14056F000

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14028FFA0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14063FEE0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14063FF60
#define CharacterBase__IsExpansionFlag_x                           0x1401EC060

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140372710
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140373070
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403744E0

// messages
#define msg_spell_worn_off_x                                       0x1402002E0
#define msg_new_text_x                                             0x1401FBC50
#define __msgTokenTextParam_x                                      0x1401F3A50
#define msgTokenText_x                                             0x1401F3970

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140314160
#define SpellManager__GetSpellByGroupAndRank_x                     0x140314080

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140679DC0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140407460

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140397850
#define CCursorAttachment__AttachToCursor1_x                       0x1403962D0
#define CCursorAttachment__Deactivate_x                            0x140397D50

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405A8040
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405A8230
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405A8240

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401420D0
#define CFindItemWnd__Update_x                                     0x140142A70
#define CFindItemWnd__PickupSelectedItem_x                         0x14013C560

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014BA20
#define LootFiltersManager__GetItemFilterData_x                    0x14014C530
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014CDD0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014D080

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14045FEC0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14067E280
#define CResolutionHandler__GetWindowedStyle_x                     0x14030CF20

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14038E410

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140643F00  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140643DF0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B1090
#define CGroupWnd__UpdateDisplay_x                                 0x1403B0C70

// ItemBase
#define ItemBase__IsLore_x                                         0x1405FF940
#define ItemBase__IsLoreEquipped_x                                 0x1405FF9D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B2470

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140241FD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140241F60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140241FA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403076B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011CB20
#define FactionManagerClient__HandleFactionMessage_x               0x14011CED0
#define FactionManagerClient__GetFactionStanding_x                 0x14011C2F0
#define FactionManagerClient__GetMaxFaction_x                      0x14011C2F0
#define FactionManagerClient__GetMinFaction_x                      0x14011C1A0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AAF80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401281F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A4710
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A3A90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A4530  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A44B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140318E60

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403076B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140209BC0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140562370

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140083B00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032A0E0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008B010

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
