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

#define __ClientDate                                               20260407u
#define __ExpectedVersionDate                                     "Apr  7 2026"
#define __ExpectedVersionTime                                     "10:18:45"
#define __ActualVersionDate_x                                      0x14098B198
#define __ActualVersionTime_x                                      0x14098B188
#define __ActualVersionBuild_x                                     0x140920340

// Memory Protection
#define __MemChecker0_x                                            0x1402CCA70
#define __MemChecker1_x                                            0x1405A6CF0
#define __MemChecker4_x                                            0x140299D70
#define __EncryptPad0_x                                            0x140D68C20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140EB15C0
#define instEQZoneInfo_x                                           0x140EB17B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022C950
#define __gfMaxZoomCameraDistance_x                                0x1409215F8
#define __gfMaxCameraDistance_x                                    0x140ACB0E4
#define __CurrentSocial_x                                          0x140C1D0D4 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D5C950
#define g_eqCommandStates_x                                        0x140D5D9F0
#define __CommandList_x                                            0x140D5DC30
#define __ScreenMode_x                                             0x140DF8EA4
#define __gWorld_x                                                 0x140EA9CF0
#define __gpbCommandEvent_x                                        0x140EA9FE8
#define __ServerHost_x                                             0x140EAA1D8
#define __Guilds_x                                                 0x140EB0170
#define __MemCheckBitmask_x                                        0x140EB1B03
#define __MemCheckActive_x                                         0x140EB321D
#define __MouseEventTime_x                                         0x140F26B90
#define DI8__MouseState_x                                          0x140F2AD78
#define __heqmain_x                                                0x140F2D208
#define DI8__Mouse_x                                               0x140F2D220
#define __HWnd_x                                                   0x140F2D228
#define __Mouse_x                                                  0x140F2D230
#define DI8__Keyboard_x                                            0x140F2D250
#define __LoginName_x                                              0x140F2D9BC
#define __CurrentMapLabel_x                                        0x140F414F0
#define __LabelCache_x                                             0x140F420C0
#define __ChatFilterDefs_x                                         0x140A65030
#define Teleport_Table_Size_x                                      0x140EAA074
#define Teleport_Table_x                                           0x140EAA500

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140EAC500
#define pinstActiveBanker_x                                        0x140EA9F18
#define pinstActiveCorpse_x                                        0x140EA9F08
#define pinstActiveGMaster_x                                       0x140EA9F10
#define pinstActiveMerchant_x                                      0x140EA9F00
#define pinstAltAdvManager_x                                       0x140DF9CE8
#define pinstCEverQuest_x                                          0x140F2D268
#define pinstCamActor_x                                            0x140DF8E90
#define pinstCDBStr_x                                              0x140DF8AA0
#define pinstCDisplay_x                                            0x140EA9FC8
#define pinstControlledPlayer_x                                    0x140EA9FA8
#define pinstCResolutionHandler_x                                  0x140F52668
#define pinstCSidlManager_x                                        0x140F53660
#define pinstCXWndManager_x                                        0x140F53658
#define instDynamicZone_x                                          0x140EB0030 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140EB007E
#define instExpeditionName_x                                       0x140EB00BE
#define pinstDZMember_x                                            0x140EB0148
#define pinstDZTimerInfo_x                                         0x140EB0150
#define pinstEqLogin_x                                             0x140F2D300
#define instTribute_x                                              0x140D55870
#define pinstDeviceInputProxy_x                                    0x140EB161C
#define pinstEQSoundManager_x                                      0x140DFA070
#define pinstEQSpellStrings_x                                      0x140DDD620
#define pinstSGraphicsEngine_x                                     0x140F52698
#define pinstLocalPC_x                                             0x140EA9A68
#define pinstLocalPlayer_x                                         0x140EA9CF8
#define pinstCMercenaryClientManager_x                             0x140F284A8
#define pinstModelPlayer_x                                         0x140EA9F28
#define pinstRenderInterface_x                                     0x140F526B0
#define pinstSkillMgr_x                                            0x140F2A188
#define pinstSpawnManager_x                                        0x140F28888
#define pinstSpellManager_x                                        0x140F2A1F8
#define pinstStringTable_x                                         0x140EA9AE8
#define pinstSwitchManager_x                                       0x140EA99A0
#define pinstTarget_x                                              0x140EA9FA0
#define pinstTaskMember_x                                          0x140D55860 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140EA9F20
#define instTributeActive_x                                        0x140D55899
#define pinstViewActor_x                                           0x140DF8E88
#define pinstWorldData_x                                           0x140EA9A30
#define pinstPlayerPath_x                                          0x140F288B0
#define pinstTargetIndicator_x                                     0x140F2A2A8
#define EQObject_Top_x                                             0x140EA9FD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F3E640
#define pinstCContainerMgr_x                                       0x140DF8F18
#define pinstCContextMenuManager_x                                 0x140F53340
#define pinstCInvSlotMgr_x                                         0x140DF8F08
#define pinstCItemDisplayManager_x                                 0x140F410C0
#define pinstCPopupWndManager_x                                    0x140F41950
#define pinstCSpellDisplayMgr_x                                    0x140F41FA0
#define pinstCTaskManager_x                                        0x140C1E7A0
#define pinstEQSuiteTextureLoader_x                                0x140D7E6D0
#define pinstItemIconCache_x                                       0x140F3E9A8
#define pinstLootFiltersManager_x                                  0x140DF84E8
#define pinstGFViewListener_x                                      0x140F52B18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140256E80
#define __CastRay_x                                                0x14024EF30
#define __CastRay2_x                                               0x14024EC20
#define __compress_block_x                                         0x14055C0A0
#define __ConvertItemTags_x                                        0x14024F3C0
#define __CleanItemTags_x                                          0x14008C740
#define __CreateCascadeMenuItems_x                                 0x1401960C0
#define __decompress_block_x                                       0x1405A24E0
#define __DoesFileExist_x                                          0x1405AAD60
#define __EQGetTime_x                                              0x1405A72A0
#define __ExecuteCmd_x                                             0x140223DF0
#define __FixHeading_x                                             0x140663A80
#define __FlushDxKeyboard_x                                        0x140351920
#define __get_bearing_x                                            0x1402591A0
#define __get_melee_range_x                                        0x140259290
#define __GetAnimationCache_x                                      0x1403D72B0
#define __GetGaugeValueFromEQ_x                                    0x14051AEB0
#define __GetLabelFromEQ_x                                         0x14051C490
#define __GetXTargetType_x                                         0x140665F70   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140663B00
#define __HelpPath_x                                               0x140F26A58   // Why?
#define __NewUIINI_x                                               0x140527EF0   // Why?
#define __ProcessDeviceEvents_x                                    0x14029A370
#define __ProcessGameEvents_x                                      0x14028EB50
#define __ProcessKeyboardEvents_x                                  0x140353100
#define __ProcessMouseEvents_x                                     0x140290290
#define __SaveColors_x                                             0x1401A6020
#define __STMLToText_x                                             0x1405BB560
#define __WndProc_x                                                0x1403500E0
#define CMemoryMappedFile__SetFile_x                               0x140812A30
#define DrawNetStatus_x                                            0x1402DC010
#define Util__FastTime_x                                           0x1405A67B0
#define __eq_delete_x                                              0x1406DEA58
#define __eq_new_x                                                 0x1406DECB0
#define __CopyLayout_x                                             0x1402C8E40
#define __ThrottleFrameRate_x                                      0x14027DC71
#define __ThrottleFrameRateEnd_x                                   0x14027DC77

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140362F40
#define CAAWnd__Update_x                                           0x140363240
#define CAAWnd__UpdateSelected_x                                   0x140364460

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B0870
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A9170
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14086C2D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B11D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B1320
#define AltAdvManager__IsAbilityReady_x                            0x1401B17C0
#define AltAdvManager__GetAAById_x                                 0x1401B0BB0
#define AltAdvManager__CanTrainAbility_x                           0x1401B09B0
#define AltAdvManager__CanSeeAbility_x                             0x1401B0660

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D84A0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D9360
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D95B0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ED9D0
#define CharacterZoneClient__CanUseItem_x                          0x1400EDF90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9F90
#define CharacterZoneClient__CastSpell_x                           0x1400DA030
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9E90
#define CharacterZoneClient__Cur_HP_x                              0x1400EF700
#define CharacterZoneClient__Cur_Mana_x                            0x1400EF8C0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DD2E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5FE0
#define CharacterZoneClient__GetBaseSkill_x                        0x140104530  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DE780
#define CharacterZoneClient__GetCurrentMod_x                       0x1400ED2D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F7870
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F6760
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DE900
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CDE70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CFD40
#define CharacterZoneClient__GetHPRegen_x                          0x1400F6E90
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EF350
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F6080
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DE980
#define CharacterZoneClient__GetManaRegen_x                        0x1400F8700
#define CharacterZoneClient__GetModCap_x                           0x1400FFCE0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DEC10
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DEDE0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D33D0
#define CharacterZoneClient__HasSkill_x                            0x1400FB820
#define CharacterZoneClient__HitBySpell_x                          0x1400DF870
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E3240
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FF7C0
#define CharacterZoneClient__Max_Endurance_x                       0x1402F6E40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FFB10
#define CharacterZoneClient__Max_Mana_x                            0x1402F7060  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FFF70
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E6890
#define CharacterZoneClient__SpellDuration_x                       0x1400E75C0
#define CharacterZoneClient__TotalEffect_x                         0x1400E8A60
#define CharacterZoneClient__UseSkill_x                            0x140105560


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403842F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038F0F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14038ADC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140389E30

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140391960

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AEAB60

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B4BC0
#define CChatWindowManager__InitContextMenu_x                      0x1403B4D50
#define CChatWindowManager__FreeChatWindow_x                       0x1403B3BC0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BD0D0
#define CChatWindowManager__CreateChatWindow_x                     0x1403B35F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010DB60

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BE140
#define CChatWindow__Clear_x                                       0x1403BF140
#define CChatWindow__WndNotification_x                             0x1403C03B0
#define CChatWindow__AddHistory_x                                  0x1403BEC50

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E8EB0
#define CContextMenu__RemoveMenuItem_x                             0x1405E92C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E9290
#define CContextMenu__CheckMenuItem_x                              0x1405E9100
#define CContextMenu__SetMenuItem_x                                0x1405E92E0
#define CContextMenu__AddSeparator_x                               0x1405E9030

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405DAC50
#define CContextMenuManager__RemoveMenu_x                          0x1405DB230
#define CContextMenuManager__PopupMenu_x                           0x1405DAF70
#define CContextMenuManager__Flush_x                               0x1405DACD0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CEB40

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14013C1A0
#define CChatService__GetFriendName_x                              0x1406B86C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405CBB20
#define CComboWnd__Draw_x                                          0x1405CBC20
#define CComboWnd__GetCurChoice_x                                  0x1405CBF10  // unused
#define CComboWnd__GetListRect_x                                   0x1405CBFB0
#define CComboWnd__InsertChoice_x                                  0x1405CC2F0
#define CComboWnd__SetColors_x                                     0x1405CC680
#define CComboWnd__SetChoice_x                                     0x1405CC640
#define CComboWnd__GetItemCount_x                                  0x1405CBFA0
#define CComboWnd__GetCurChoiceText_x                              0x1405CBF50  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405CBEE0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CC3B0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CC820
#define CContainerWnd__SetContainer_x                              0x14042C300
#define CContainerWnd__vftable_x                                   0x1409FFF10

// CDisplay
#define CDisplay__cameraType_x                                     0x140DF8BB4
#define CDisplay__ZoneMainUI_x                                     0x140602FE0
#define CDisplay__PreZoneMainUI_x                                  0x1401A2F20
#define CDisplay__CleanGameUI_x                                    0x140195180
#define CDisplay__GetClickedActor_x                                0x1401993A0
#define CDisplay__GetUserDefinedColor_x                            0x14019A010
#define CDisplay__InitCharSelectUI_x                               0x14019A2C0
#define CDisplay__ReloadUI_x                                       0x1401A5220
#define CDisplay__RestartUI_x                                      0x140208330
#define CDisplay__WriteTextHD2_x                                   0x1401AC240
#define CDisplay__TrueDistance_x                                   0x1401ABEE0
#define CDisplay__SetViewActor_x                                   0x1401A8750
#define CDisplay__GetFloorHeight_x                                 0x140199600
#define CDisplay__ToggleScreenshotMode_x                           0x1401AB9D0
#define CDisplay__RealRender_World_x                               0x1401A45F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14060D9A0
#define CEditWnd__DrawCaret_x                                      0x1405FF110  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405FF630
#define CEditWnd__GetCaretPt_x                                     0x1405FF8D0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405FF910
#define CEditWnd__GetDisplayString_x                               0x1405FFB70
#define CEditWnd__GetHorzOffset_x                                  0x1405FFDC0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405FFF20
#define CEditWnd__GetSelStartPt_x                                  0x140600210  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140600050
#define CEditWnd__PointFromPrintableChar_x                         0x140600DD0
#define CEditWnd__ReplaceSelection_x                               0x140601190
#define CEditWnd__SelectableCharFromPoint_x                        0x140601650
#define CEditWnd__SetEditable_x                                    0x1406018F0
#define CEditWnd__SetWindowText_x                                  0x140601920

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027ED50
#define CEverQuest__ClickedPlayer_x                                0x140272F10
#define CEverQuest__CreateTargetIndicator_x                        0x140273810
#define CEverQuest__DoTellWindow_x                                 0x14010D860 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010E150 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140280740
#define CEverQuest__dsp_chat_x                                     0x14010D290 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402ABF50
#define CEverQuest__Emote_x                                        0x140281130
#define CEverQuest__GetBodyTypeDesc_x                              0x140281F10
#define CEverQuest__GetClassDesc_x                                 0x140281F70
#define CEverQuest__GetClassThreeLetterCode_x                      0x140282340
#define CEverQuest__GetDeityDesc_x                                 0x1402825F0
#define CEverQuest__GetLangDesc_x                                  0x140282A20
#define CEverQuest__GetRaceDesc_x                                  0x140282DC0
#define CEverQuest__InterpretCmd_x                                 0x140284A00
#define CEverQuest__LeftClickedOnPlayer_x                          0x140287FD0
#define CEverQuest__LMouseUp_x                                     0x140286510
#define CEverQuest__RightClickedOnPlayer_x                         0x140297780
#define CEverQuest__RMouseUp_x                                     0x140290E20
#define CEverQuest__SetGameState_x                                 0x14029CE90
#define CEverQuest__UPCNotificationFlush_x                         0x1402A28D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402860F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140292210
#define CEverQuest__ReportSuccessfulHit_x                          0x140293030

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E2460

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C7600
#define CGuild__GetGuildName_x                                     0x1400C7640

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140409330

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BE510
#define CHotButton__SetCheck_x                                     0x1402BE7E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140423160
#define CInvSlotMgr__MoveItem_x                                    0x140423CF0
#define CInvSlotMgr__SelectSlot_x                                  0x140426020

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14041FF50
#define CInvSlot__SliderComplete_x                                 0x140421780
#define CInvSlot__GetItemBase_x                                    0x14041B5A0
#define CInvSlot__UpdateItem_x                                     0x140421C30

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140428230

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404498B0
#define CItemDisplayWnd__UpdateStrings_x                           0x14044CAD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140446190
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140447AC0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140448CD0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140517920
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405196B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140555120

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140442810

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405194F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015AB30

// CLabel
#define CLabel__UpdateText_x                                       0x1404540E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405CF4C0
#define CListWnd__dCListWnd_x                                      0x1405CF900
#define CListWnd__vftable_x                                        0x140AE8CB0
#define CListWnd__AddColumn_x                                      0x1405CFF90
#define CListWnd__AddColumn1_x                                     0x1405D0030
#define CListWnd__AddLine_x                                        0x1405D0190
#define CListWnd__AddString_x                                      0x1405D0730
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405D0CA0
#define CListWnd__CalculateVSBRange_x                              0x1405D0F80
#define CListWnd__ClearSel_x                                       0x1405D1120
#define CListWnd__ClearAllSel_x                                    0x1405D10C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405D1180
#define CListWnd__Compare_x                                        0x1405D1340
#define CListWnd__Draw_x                                           0x1405D1800
#define CListWnd__DrawColumnSeparators_x                           0x1405D2390
#define CListWnd__DrawHeader_x                                     0x1405D2450
#define CListWnd__DrawItem_x                                       0x1405D2B30
#define CListWnd__DrawLine_x                                       0x1405D34D0
#define CListWnd__DrawSeparator_x                                  0x1405D3990
#define CListWnd__EnableLine_x                                     0x1405D3DB0
#define CListWnd__EnsureVisible_x                                  0x1405D3E10
#define CListWnd__ExtendSel_x                                      0x1405D3F10
#define CListWnd__GetColumnMinWidth_x                              0x1405D42A0
#define CListWnd__GetColumnWidth_x                                 0x1405D4320
#define CListWnd__GetCurSel_x                                      0x1405D4420
#define CListWnd__GetItemData_x                                    0x1405D47A0
#define CListWnd__GetItemHeight_x                                  0x1405D47E0
#define CListWnd__GetItemRect_x                                    0x1405D4A10
#define CListWnd__GetItemText_x                                    0x1405D4CB0
#define CListWnd__GetSelList_x                                     0x1405D4F10
#define CListWnd__GetSeparatorRect_x                               0x1405D5100
#define CListWnd__InsertLine_x                                     0x1405D6570
#define CListWnd__RemoveLine_x                                     0x1405D6BE0
#define CListWnd__SetColors_x                                      0x1405D6FA0
#define CListWnd__SetColumnJustification_x                         0x1405D6FC0
#define CListWnd__SetColumnLabel_x                                 0x1405D7040
#define CListWnd__SetColumnWidth_x                                 0x1405D71E0
#define CListWnd__SetCurSel_x                                      0x1405D72B0
#define CListWnd__SetItemColor_x                                   0x1405D7520
#define CListWnd__SetItemData_x                                    0x1405D75C0
#define CListWnd__SetItemText_x                                    0x1405D7800
#define CListWnd__Sort_x                                           0x1405D7C10
#define CListWnd__ToggleSel_x                                      0x1405D7D80
#define CListWnd__SetColumnsSizable_x                              0x1405D7230
#define CListWnd__SetItemWnd_x                                     0x1405D7930
#define CListWnd__GetItemWnd_x                                     0x1405D4EA0
#define CListWnd__SetItemIcon_x                                    0x1405D7600
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405D0A70
#define CListWnd__SetVScrollPos_x                                  0x1405D7B70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140467A70

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A4D8A0
#define MapViewMap__Clear_x                                        0x140469730
#define MapViewMap__SetZoom_x                                      0x14046FE10
#define MapViewMap__HandleLButtonDown_x                            0x14046C910

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140491EC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140498820
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140498FF0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049C910
#define CMerchantWnd__SelectBuySellSlot_x                          0x14049BC10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A0DA0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140693A00
#define CPacketScrambler__hton_x                                   0x1406939F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F89C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405F8900
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F9000
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F8DA0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F7D00
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F7C90
#define CSidlManagerBase__CreateXWnd_x                             0x1405F72F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14050A7A0
#define CSidlManager__CreateXWnd_x                                 0x14050A960

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BD180
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BD050
#define CSidlScreenWnd__ConvertToRes_x                             0x140607CE0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BD2F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BC790
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BC860
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BCA70
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405BD9E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405BDC10
#define CSidlScreenWnd__GetChildItem_x                             0x1405BDDB0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405BE000
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C8090 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405BE370
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405BE6E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140073FA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405BF9B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F529B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405C0030
#define CSidlScreenWnd__StoreIniVis_x                              0x1405C0820
#define CSidlScreenWnd__vftable_x                                  0x140AE7F38
#define CSidlScreenWnd__WndNotification_x                          0x1405C0870

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14033A8B0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14033ABD0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14033AB00
#define CSkillMgr__IsActivatedSkill_x                              0x14033AF90
#define CSkillMgr__IsCombatSkill_x                                 0x14033AFD0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14033AF00
#define CSkillMgr__GetSkillLastUsed_x                              0x14033AB50

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1401ED900
#define CSliderWnd__SetValue_x                                     0x1405D8EF0
#define CSliderWnd__SetNumTicks_x                                  0x1405D8D70

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140510FF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DD6B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405C7A40
#define CStmlWnd__CalculateVSBRange_x                              0x1405DE5D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405DF060
#define CStmlWnd__ForceParseNow_x                                  0x1405DF100
#define CStmlWnd__GetVisibleText_x                                 0x1405DF7D0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405E1560
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405E15A0
#define CStmlWnd__SetSTMLText_x                                    0x1405E8630
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E87E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405E8B80

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D92C0
#define CTabWnd__DrawCurrentPage_x                                 0x1405D9360
#define CTabWnd__DrawTab_x                                         0x1405D9730
#define CTabWnd__GetTabRect_x                                      0x1405D9DC0
#define CTabWnd__InsertPage_x                                      0x1405DA090
#define CTabWnd__RemovePage_x                                      0x1405DA320
#define CTabWnd__SetPage_x                                         0x1405DA480
#define CTabWnd__UpdatePage_x                                      0x1405DA780

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140601D80
#define CPageWnd__SetTabText_x                                     0x140601DF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C0B10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0F40


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405F01F0
#define CTextureFont__DrawWrappedText1_x                           0x1405F00F0
#define CTextureFont__DrawWrappedText2_x                           0x1405F0320
#define CTextureFont__GetTextExtent_x                              0x1405F06D0
#define CTextureFont__GetHeight_x                                  0x1405F0690

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140606400

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405B9BE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D7E040
#define CXStr__gCXStrAccess_x                                      0x140F52518

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C3090
#define CXWnd__ClrFocus_x                                          0x1405C3380
#define CXWnd__Destroy_x                                           0x1405C3500
#define CXWnd__DoAllDrawing_x                                      0x1405C3600
#define CXWnd__DrawColoredRect_x                                   0x1405C3DD0
#define CXWnd__DrawTooltip_x                                       0x1405C5440
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C5500
#define CXWnd__GetChildItem_x                                      0x1405BDE90
#define CXWnd__GetChildWndAt_x                                     0x1405C5ED0
#define CXWnd__GetClientRect_x                                     0x1405C6190
#define CXWnd__GetClientClipRect_x                                 0x1405C6040
#define CXWnd__GetRelativeRect_x                                   0x1405C7B80
#define CXWnd__GetScreenClipRect_x                                 0x1405C7C90
#define CXWnd__GetScreenRect_x                                     0x1405C7E10
#define CXWnd__GetTooltipRect_x                                    0x1405C7F90
#define CXWnd__IsActive_x                                          0x1405C8550
#define CXWnd__IsDescendantOf_x                                    0x1405C8580
#define CXWnd__IsReallyVisible_x                                   0x1405C85F0
#define CXWnd__IsType_x                                            0x1405C8640
#define CXWnd__Minimize_x                                          0x1405C8740
#define CXWnd__ProcessTransition_x                                 0x1405C9650
#define CXWnd__Resize_x                                            0x1405C9760
#define CXWnd__Right_x                                             0x1405C9800
#define CXWnd__SetFocus_x                                          0x1405C9BC0
#define CXWnd__SetFont_x                                           0x1405C9C10
#define CXWnd__SetKeyTooltip_x                                     0x1405C9D20
#define CXWnd__SetMouseOver_x                                      0x1405C9E70
#define CXWnd__SetParent_x                                         0x1405C9EF0
#define CXWnd__StartFade_x                                         0x1405CA320
#define CXWnd__vftable_x                                           0x140AE8510
#define CXWnd__CXWnd_x                                             0x1405C1C90
#define CXWnd__dCXWnd_x                                            0x1405C25C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060D130

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405EA4A0
#define CXWndManager__DrawCursor_x                                 0x1405EA780
#define CXWndManager__DrawWindows_x                                0x1405EA9E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405EB050
#define CXWndManager__HandleKeyboardMsg_x                          0x1405EB090
#define CXWndManager__RemoveWnd_x                                  0x1405EE890

// CDBStr
#define CDBStr__GetString_x                                        0x140193340

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14069D9F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D5E30
#define CCharacterListWnd__EnterWorld_x                            0x1400D4C30
#define CCharacterListWnd__Quit_x                                  0x1400D5E10
#define CCharacterListWnd__UpdateList_x                            0x1400D6B70

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14066AC30
#define ItemBase__CreateItemTagString_x                            0x14066B6D0
#define ItemBase__GetImageNum_x                                    0x14066DE30
#define ItemBase__GetItemValue_x                                   0x14066F950
#define ItemBase__IsEmpty_x                                        0x1406716D0
#define ItemBase__IsKeyRingItem_x                                  0x140671E00
#define ItemBase__ValueSellMerchant_x                              0x140676060
#define ItemClient__CanDrop_x                                      0x1402C0D20
#define ItemClient__CanGoInBag_x                                   0x1402C0E50
#define ItemClient__CreateItemClient_x                             0x1402C10E0
#define ItemClient__dItemClient_x                                  0x1402C0BA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B2F90
#define EQ_LoadingS__Array_x                                       0x140D57D40

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140682160
#define PcBase__GetCombatAbility_x                                 0x140682860
#define PcBase__GetCombatAbilityTimer_x                            0x1402F5B80
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406830D0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140683B50
#define PcClient__AlertInventoryChanged_x                          0x1402E4310
#define PcClient__GetConLevel_x                                    0x1402E4A30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E7110
#define PcClient__HasLoreItem_x                                    0x1402E81B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F4AB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F7F70

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402288D0
#define EQGroundItemListManager__Add_x                             0x140228A80
#define EQGroundItemListManager__Clear_x                           0x140228B20
#define EQGroundItemListManager__Delete_x                          0x140228BE0
#define EQGroundItemListManager__Instance_x                        0x140228C70

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140264080

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018DA60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140656420
#define PlayerBase__CanSee1_x                                      0x140656500
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406569F0
#define PlayerBase__HasProperty_x                                  0x140656BD0
#define PlayerBase__IsTargetable_x                                 0x140656C90
#define PlayerClient__ChangeBoneStringSprite_x                     0x140305D20
#define PlayerClient__GetPcClient_x                                0x140308860
#define PlayerClient__PlayerClient_x                               0x1402FE040
#define PlayerClient__SetNameSpriteState_x                         0x14030BF90
#define PlayerClient__SetNameSpriteTint_x                          0x14030CF50
#define PlayerZoneClient__ChangeHeight_x                           0x14031BB90
#define PlayerZoneClient__DoAttack_x                               0x14031C8A0
#define PlayerZoneClient__GetLevel_x                               0x14031FFF0
#define PlayerZoneClient__IsValidTeleport_x                        0x140266E10
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A17A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140315060  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140315110  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140315210
#define PlayerManagerClient__CreatePlayer_x                        0x140314B20
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140655F30

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C6330
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C5C40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C5CB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C62C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C6450
#define KeypressHandler__HandleKeyUp_x                             0x1402C6570
#define KeypressHandler__SaveKeymapping_x                          0x1402C6140  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14069B500  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140695120

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402EE290  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F2BE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F5B90
#define PcZoneClient__RemovePetEffect_x                            0x1402F8250
#define PcZoneClient__HasAlternateAbility_x                        0x1402F6770
#define PcZoneClient__CanEquipItem_x                               0x1402F0E70
#define PcZoneClient__GetItemByID_x                                0x1402F3B30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F7E00
#define PcZoneClient__BandolierSwap_x                              0x1402E43C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026BA80

// IconCache
#define IconCache__GetIcon_x                                       0x1403D72E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403CB570
#define CContainerMgr__CloseContainer_x                            0x1403CAE90
#define CContainerMgr__OpenExperimentContainer_x                   0x1403CB910

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404CDA70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B8290

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14045B620
#define CLootWnd__RequestLootSlot_x                                0x14045C670

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E36E0
#define EQ_Spell__SpellAffects_x                                   0x1401E49C0
#define EQ_Spell__SpellAffectBase_x                                0x1401E4920
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DEF70
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DEF20
#define EQ_Spell__IsSPAStacking_x                                  0x1401E45F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E41A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E3A60

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C6110

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14052B740
#define CTargetWnd__RefreshTargetBuffs_x                           0x14052AE60
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14052A660

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140532FF0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018A4E0
#define CTaskManager__GetTaskStatus_x                              0x14018A5F0
#define CTaskManager__GetElementDescription_x                      0x14018A170

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E1A00
#define EqSoundManager__PlayScriptMp3_x                            0x1401E0790
#define EqSoundManager__SoundAssistPlay_x                          0x14033FC80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033FFC0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405CB0C0
#define CTextureAnimation__SetCurCell_x                            0x1405CB3D0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B6480

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B5E20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B5EA0
#define CharacterBase__IsExpansionFlag_x                           0x140207980

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A5A90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A6500
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A7A70

// messages
#define msg_spell_worn_off_x                                       0x14021EAD0
#define msg_new_text_x                                             0x14021A2A0
#define __msgTokenTextParam_x                                      0x140211710
#define msgTokenText_x                                             0x140211620

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403419F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403418F0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140666350

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140454870

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403D03D0
#define CCursorAttachment__IsOkToActivate_x                        0x1403D3870
#define CCursorAttachment__RemoveAttachment_x                      0x1403D3B20
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140604860
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140604A60
#define CEQSuiteTextureLoader__GetTexture_x                        0x140604A70

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401553A0
#define CFindItemWnd__Update_x                                     0x140155D60
#define CFindItemWnd__PickupSelectedItem_x                         0x14014EA40

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015FFC0
#define LootFiltersManager__GetItemFilterData_x                    0x140160AE0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140161390
#define LootFiltersManager__SetItemLootFilter_x                    0x140161640

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404AF860

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14033A470
#define CResolutionHandler__UpdateResolution_x                     0x1405AF7C0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C7690

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406BA240  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406BA130  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403F1AE0
#define CGroupWnd__UpdateDisplay_x                                 0x1403F0C70

// ItemBase
#define ItemBase__IsLore_x                                         0x140671F40
#define ItemBase__IsLoreEquipped_x                                 0x140671FD0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D9E10

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402641E0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140264170
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402641B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140334670

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012B650
#define FactionManagerClient__HandleFactionMessage_x               0x14012BA30
#define FactionManagerClient__GetFactionStanding_x                 0x14012AE20
#define FactionManagerClient__GetMaxFaction_x                      0x14012AE20
#define FactionManagerClient__GetMinFaction_x                      0x14012ACD0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x140797030

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140137000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BBFF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BB190
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BBE10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BBD90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140346D00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405C0E60

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088E20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140358880

// AchievementManager
#define AchievementManager__Instance_x                             0x14034D550

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14069E580
#define FreeToPlayClient__RestrictionInfo_x                        0x140AFCEE0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405624C0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x1408528E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif