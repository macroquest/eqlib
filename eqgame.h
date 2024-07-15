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

#define __ClientDate                                               20240711u
#define __ExpectedVersionDate                                     "Jul 11 2024"
#define __ExpectedVersionTime                                     "13:46:36"
#define __ActualVersionDate_x                                      0x140941B20
#define __ActualVersionTime_x                                      0x140941B10
#define __ActualVersionBuild_x                                     0x1408D8560

// Memory Protection
#define __MemChecker0_x                                            0x1402B0D30
#define __MemChecker1_x                                            0x14056D8C0
#define __MemChecker4_x                                            0x14027F610
#define __EncryptPad0_x                                            0x140D0EE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E47A80
#define instEQZoneInfo_x                                           0x140E47C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216270
#define __gfMaxZoomCameraDistance_x                                0x1408D97D8
#define __gfMaxCameraDistance_x                                    0x140A7E314
#define __CurrentSocial_x                                          0x140BCA940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D06710
#define g_eqCommandStates_x                                        0x140D07780
#define __CommandList_x                                            0x140D079C0
#define __ScreenMode_x                                             0x140D8F264
#define __gWorld_x                                                 0x140E3FF00
#define __gpbCommandEvent_x                                        0x140E3FF10
#define __ServerHost_x                                             0x140E400F8
#define __Guilds_x                                                 0x140E46640
#define __MemCheckBitmask_x                                        0x140E47FB7
#define __MemCheckActive_x                                         0x140E496A5
#define __MouseEventTime_x                                         0x140EBCFF0
#define DI8__MouseState_x                                          0x140EC1238
#define __heqmain_x                                                0x140EC36D8
#define DI8__Mouse_x                                               0x140EC1188
#define __HWnd_x                                                   0x140EC1210
#define __Mouse_x                                                  0x140EC1144
#define DI8__Keyboard_x                                            0x140EC1160
#define __LoginName_x                                              0x140EC3DBC
#define __CurrentMapLabel_x                                        0x140ED75C0
#define __LabelCache_x                                             0x140ED8190
#define __ChatFilterDefs_x                                         0x140A19420
#define Teleport_Table_Size_x                                      0x140E3FF18
#define Teleport_Table_x                                           0x140E40510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E429D0
#define pinstActiveBanker_x                                        0x140E40428
#define pinstActiveCorpse_x                                        0x140E40418
#define pinstActiveGMaster_x                                       0x140E40420
#define pinstActiveMerchant_x                                      0x140E40410
#define pinstAltAdvManager_x                                       0x140D901D8
#define pinstCEverQuest_x                                          0x140EC1180
#define pinstCamActor_x                                            0x140D8F248
#define pinstCDBStr_x                                              0x140D8EF90
#define pinstCDisplay_x                                            0x140E40500
#define pinstControlledPlayer_x                                    0x140E404B8
#define pinstCResolutionHandler_x                                  0x141548958
#define pinstCSidlManager_x                                        0x140EE9490
#define pinstCXWndManager_x                                        0x140EE9488
#define instDynamicZone_x                                          0x140E46500 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4654E
#define instExpeditionName_x                                       0x140E4658E
#define pinstDZMember_x                                            0x140E46618
#define pinstDZTimerInfo_x                                         0x140E46620
#define pinstEqLogin_x                                             0x140EC3700
#define instTribute_x                                              0x140D01D50
#define pinstDeviceInputProxy_x                                    0x140E47ADC
#define pinstEQSoundManager_x                                      0x140D90558
#define pinstEQSpellStrings_x                                      0x140D73B60
#define pinstSGraphicsEngine_x                                     0x1415486D8
#define pinstLocalPC_x                                             0x140E404E8
#define pinstLocalPlayer_x                                         0x140E40408
#define pinstCMercenaryClientManager_x                             0x140EBE8E8
#define pinstModelPlayer_x                                         0x140E40438
#define pinstRenderInterface_x                                     0x1415486F0
#define pinstSkillMgr_x                                            0x140EC0580
#define pinstSpawnManager_x                                        0x140EBECA0
#define pinstSpellManager_x                                        0x140EC05E8
#define pinstStringTable_x                                         0x140E40508
#define pinstSwitchManager_x                                       0x140E3FE80
#define pinstTarget_x                                              0x140E404B0
#define pinstTaskMember_x                                          0x140D01D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E404C0
#define pinstTradeTarget_x                                         0x140E40430
#define instTributeActive_x                                        0x140D01D79
#define pinstViewActor_x                                           0x140D8F240
#define pinstWorldData_x                                           0x140E404F8
#define pinstPlayerPath_x                                          0x140EBECC8
#define pinstTargetIndicator_x                                     0x140EC0698
#define EQObject_Top_x                                             0x140E404D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED4718
#define pinstCContainerMgr_x                                       0x140D8F520
#define pinstCContextMenuManager_x                                 0x140EE9170
#define pinstCInvSlotMgr_x                                         0x140D8F518
#define pinstCItemDisplayManager_x                                 0x140ED7190
#define pinstCPopupWndManager_x                                    0x140ED7A20
#define pinstCSpellDisplayMgr_x                                    0x140ED8070
#define pinstCTaskManager_x                                        0x140BCAC80
#define pinstEQSuiteTextureLoader_x                                0x140D18530
#define pinstItemIconCache_x                                       0x140ED4A78
#define pinstLootFiltersManager_x                                  0x140D8E9D8
#define pinstGFViewListener_x                                      0x140EE8948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F420
#define __CastRay_x                                                0x140237870
#define __CastRay2_x                                               0x140237570
#define __compress_block_x                                         0x140522F60
#define __ConvertItemTags_x                                        0x140237CD0
#define __CleanItemTags_x                                          0x140088110
#define __CreateCascadeMenuItems_x                                 0x140186880
#define __decompress_block_x                                       0x140569130
#define __DoesFileExist_x                                          0x140571770
#define __EQGetTime_x                                              0x14056DE70
#define __ExecuteCmd_x                                             0x14020DB80
#define __FixHeading_x                                             0x140699D70
#define __FlushDxKeyboard_x                                        0x140332E70
#define __get_bearing_x                                            0x140241610
#define __get_melee_range_x                                        0x140241700
#define __GetAnimationCache_x                                      0x1403B0540
#define __GetGaugeValueFromEQ_x                                    0x1404E3F40
#define __GetLabelFromEQ_x                                         0x1404E5550
#define __GetXTargetType_x                                         0x14069B050   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140699DF0
#define __HelpPath_x                                               0x140EBCEB8   // Why?
#define __NewUIINI_x                                               0x1404F0FE0   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FC20
#define __ProcessGameEvents_x                                      0x140274950
#define __ProcessKeyboardEvents_x                                  0x1403345C0
#define __ProcessMouseEvents_x                                     0x140276020
#define __SaveColors_x                                             0x140196890
#define __STMLToText_x                                             0x1405760B0
#define __WndProc_x                                                0x140331690
#define CMemoryMappedFile__SetFile_x                               0x1407D20B0
#define DrawNetStatus_x                                            0x1402BF170
#define Util__FastTime_x                                           0x14056D400
#define __eq_delete_x                                              0x1406A1DC4
#define __eq_new_x                                                 0x1406A1D80
#define __CopyLayout_x                                             0x1402AD160
#define __ThrottleFrameRate_x                                      0x1402641B4
#define __ThrottleFrameRateEnd_x                                   0x140264214

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343C50
#define CAAWnd__Update_x                                           0x140343F50
#define CAAWnd__UpdateSelected_x                                   0x140344F90

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140826B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAE00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A19B0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1C30
#define AltAdvManager__GetAAById_x                                 0x1401A1280
#define AltAdvManager__CanTrainAbility_x                           0x1401A10B0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0D70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0EF0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1D30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1F80
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5E10
#define CharacterZoneClient__CanUseItem_x                          0x1400E6240
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2950
#define CharacterZoneClient__CastSpell_x                           0x1400D29F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1D70
#define CharacterZoneClient__Cur_HP_x                              0x1400E7950
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7B10
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5780
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDFD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCA00  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6C30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5710
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFB90
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEA60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6E00
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7300
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8CD0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF1A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E75C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFE20
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6E80
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0C00
#define CharacterZoneClient__GetModCap_x                           0x1400F81C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7320
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBE40
#define CharacterZoneClient__HasSkill_x                            0x1400F3BF0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7DD0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB570
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7CA0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBE20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7FF0
#define CharacterZoneClient__Max_Mana_x                            0x1402DC040  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8450
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE900
#define CharacterZoneClient__SpellDuration_x                       0x1400DF600
#define CharacterZoneClient__TotalEffect_x                         0x1400E0950
#define CharacterZoneClient__UseSkill_x                            0x1400FD970


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140362140

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C470

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368300
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BEF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036EB20

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9D000

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391DF0
#define CChatWindowManager__InitContextMenu_x                      0x140391F80
#define CChatWindowManager__FreeChatWindow_x                       0x140390E70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399B30
#define CChatWindowManager__CreateChatWindow_x                     0x1403907B0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105ED0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039AB70
#define CChatWindow__Clear_x                                       0x14039BB30
#define CChatWindow__WndNotification_x                             0x14039CD20
#define CChatWindow__AddHistory_x                                  0x14039B630

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB130
#define CContextMenu__RemoveMenuItem_x                             0x1405AB520
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB4F0
#define CContextMenu__CheckMenuItem_x                              0x1405AB360
#define CContextMenu__SetMenuItem_x                                0x1405AB540
#define CContextMenu__AddSeparator_x                               0x1405AB2A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D000
#define CContextMenuManager__RemoveMenu_x                          0x14059D5D0
#define CContextMenuManager__PopupMenu_x                           0x14059D310
#define CContextMenuManager__Flush_x                               0x14059D080
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8470

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140662FA0
#define CChatService__GetFriendName_x                              0x140662FB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058DF60
#define CComboWnd__Draw_x                                          0x14058E060
#define CComboWnd__GetCurChoice_x                                  0x14058E330  // unused
#define CComboWnd__GetListRect_x                                   0x14058E3D0
#define CComboWnd__InsertChoice_x                                  0x14058E710
#define CComboWnd__SetColors_x                                     0x14058EAA0
#define CComboWnd__SetChoice_x                                     0x14058EA60
#define CComboWnd__GetItemCount_x                                  0x14058E3C0
#define CComboWnd__GetCurChoiceText_x                              0x14058E370  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E300
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E7D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A61F0
#define CContainerWnd__SetContainer_x                              0x1403FB7F0
#define CContainerWnd__vftable_x                                   0x1409B5578

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8EFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C5220
#define CDisplay__PreZoneMainUI_x                                  0x1401937B0
#define CDisplay__CleanGameUI_x                                    0x140185960
#define CDisplay__GetClickedActor_x                                0x140189AE0
#define CDisplay__GetUserDefinedColor_x                            0x14018A750
#define CDisplay__InitCharSelectUI_x                               0x14018AA00
#define CDisplay__ReloadUI_x                                       0x140195AA0
#define CDisplay__RestartUI_x                                      0x1401F4220
#define CDisplay__WriteTextHD2_x                                   0x14019CAC0
#define CDisplay__TrueDistance_x                                   0x14019C770
#define CDisplay__SetViewActor_x                                   0x140198FB0
#define CDisplay__GetFloorHeight_x                                 0x140189D40
#define CDisplay__ToggleScreenshotMode_x                           0x14019C260
#define CDisplay__RealRender_World_x                               0x140194E80

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF420
#define CEditWnd__DrawCaret_x                                      0x1405C0F00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C13C0
#define CEditWnd__GetCaretPt_x                                     0x1405C1640  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1680
#define CEditWnd__GetDisplayString_x                               0x1405C18F0
#define CEditWnd__GetHorzOffset_x                                  0x1405C1B30
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1C80
#define CEditWnd__GetSelStartPt_x                                  0x1405C1F60  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1DB0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C2B10
#define CEditWnd__ReplaceSelection_x                               0x1405C2EC0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3360
#define CEditWnd__SetEditable_x                                    0x1405C35F0
#define CEditWnd__SetWindowText_x                                  0x1405C3620

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402652C0
#define CEverQuest__ClickedPlayer_x                                0x14025ADE0
#define CEverQuest__CreateTargetIndicator_x                        0x14025B6A0
#define CEverQuest__DoTellWindow_x                                 0x140105BE0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401064A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266C80
#define CEverQuest__dsp_chat_x                                     0x140105610 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291030
#define CEverQuest__Emote_x                                        0x140267660
#define CEverQuest__GetBodyTypeDesc_x                              0x140268410
#define CEverQuest__GetClassDesc_x                                 0x140268470
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268840
#define CEverQuest__GetDeityDesc_x                                 0x140268AF0
#define CEverQuest__GetLangDesc_x                                  0x140268F20
#define CEverQuest__GetRaceDesc_x                                  0x1402692C0
#define CEverQuest__InterpretCmd_x                                 0x14026ABF0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FC90
#define CEverQuest__LMouseUp_x                                     0x14026C5E0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D4B0
#define CEverQuest__RMouseUp_x                                     0x140276BB0
#define CEverQuest__SetGameState_x                                 0x1402821D0
#define CEverQuest__UPCNotificationFlush_x                         0x140287B00 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C250
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277F60
#define CEverQuest__ReportSuccessfulHit_x                          0x140278D80

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA910

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1080
#define CGuild__GetGuildName_x                                     0x1400C10C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DCE60

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2C30
#define CHotButton__SetCheck_x                                     0x1402A2F00

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4580
#define CInvSlotMgr__MoveItem_x                                    0x1403F4760
#define CInvSlotMgr__SelectSlot_x                                  0x1403F60E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F17A0
#define CInvSlot__SliderComplete_x                                 0x1403F2CF0
#define CInvSlot__GetItemBase_x                                    0x1403ED3C0
#define CInvSlot__UpdateItem_x                                     0x1403F31A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7470

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418610
#define CItemDisplayWnd__UpdateStrings_x                           0x14041AF40
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415150
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404168A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417A40

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0A60
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2750

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C2D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411880

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E150

// CLabel
#define CLabel__UpdateText_x                                       0x140422340

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405918E0
#define CListWnd__dCListWnd_x                                      0x140591D30
#define CListWnd__vftable_x                                        0x140A9B158
#define CListWnd__AddColumn_x                                      0x1405923D0
#define CListWnd__AddColumn1_x                                     0x140592470
#define CListWnd__AddLine_x                                        0x1405925D0
#define CListWnd__AddString_x                                      0x140592B60
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405930D0
#define CListWnd__CalculateVSBRange_x                              0x1405933B0
#define CListWnd__ClearSel_x                                       0x140593560
#define CListWnd__ClearAllSel_x                                    0x140593500
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405935C0
#define CListWnd__Compare_x                                        0x140593780
#define CListWnd__Draw_x                                           0x140593C50
#define CListWnd__DrawColumnSeparators_x                           0x140594800
#define CListWnd__DrawHeader_x                                     0x1405948C0
#define CListWnd__DrawItem_x                                       0x140594FA0
#define CListWnd__DrawLine_x                                       0x140595920
#define CListWnd__DrawSeparator_x                                  0x140595DE0
#define CListWnd__EnableLine_x                                     0x140596200
#define CListWnd__EnsureVisible_x                                  0x140596260
#define CListWnd__ExtendSel_x                                      0x140596360
#define CListWnd__GetColumnMinWidth_x                              0x140596690
#define CListWnd__GetColumnWidth_x                                 0x140596710
#define CListWnd__GetCurSel_x                                      0x140596810
#define CListWnd__GetItemData_x                                    0x140596B90
#define CListWnd__GetItemHeight_x                                  0x140596BD0
#define CListWnd__GetItemRect_x                                    0x140596DF0
#define CListWnd__GetItemText_x                                    0x140597090
#define CListWnd__GetSelList_x                                     0x1405972E0
#define CListWnd__GetSeparatorRect_x                               0x1405974D0
#define CListWnd__InsertLine_x                                     0x140598930
#define CListWnd__RemoveLine_x                                     0x140598FA0
#define CListWnd__SetColors_x                                      0x140599360
#define CListWnd__SetColumnJustification_x                         0x140599380
#define CListWnd__SetColumnLabel_x                                 0x140599400
#define CListWnd__SetColumnWidth_x                                 0x1405995A0
#define CListWnd__SetCurSel_x                                      0x140599670
#define CListWnd__SetItemColor_x                                   0x1405998E0
#define CListWnd__SetItemData_x                                    0x140599980
#define CListWnd__SetItemText_x                                    0x140599BC0
#define CListWnd__Sort_x                                           0x140599FD0
#define CListWnd__ToggleSel_x                                      0x14059A140
#define CListWnd__SetColumnsSizable_x                              0x1405995F0
#define CListWnd__SetItemWnd_x                                     0x140599CF0
#define CListWnd__GetItemWnd_x                                     0x140597270
#define CListWnd__SetItemIcon_x                                    0x1405999C0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592EA0
#define CListWnd__SetVScrollPos_x                                  0x140599F30

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404355E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A02038
#define MapViewMap__Clear_x                                        0x140437160
#define MapViewMap__SetZoom_x                                      0x14043D7B0
#define MapViewMap__HandleLButtonDown_x                            0x14043A2F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EE70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404653F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469390
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404686E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D620

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063FA30
#define CPacketScrambler__hton_x                                   0x14063FA20

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA7C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA700
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BADF0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BABA0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B9B00
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9A90
#define CSidlManagerBase__CreateXWnd_x                             0x1405B90D0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3A70
#define CSidlManager__CreateXWnd_x                                 0x1404D3C30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F420
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F550
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9990 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F6D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057EB60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EC30
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EE40
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FDB0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FFE0
#define CSidlScreenWnd__GetChildItem_x                             0x140580180
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405803D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A580 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580740
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580AB0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581350
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581CB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE87E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582330
#define CSidlScreenWnd__StoreIniVis_x                              0x140582B10
#define CSidlScreenWnd__vftable_x                                  0x140A9A3C8
#define CSidlScreenWnd__WndNotification_x                          0x140582B60

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C400 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C8A0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C7D0
#define CSkillMgr__IsActivatedSkill_x                              0x14031CC50
#define CSkillMgr__IsCombatSkill_x                                 0x14031CC90
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CBC0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C820

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E3EC0
#define CSliderWnd__SetValue_x                                     0x14059B2C0
#define CSliderWnd__SetNumTicks_x                                  0x14059B140

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA0B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059FA50
#define CStmlWnd__CalculateHSBRange_x                              0x140589F30
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0970
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A13F0
#define CStmlWnd__ForceParseNow_x                                  0x1405A1490
#define CStmlWnd__GetVisibleText_x                                 0x1405A1B60
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A38C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3900
#define CStmlWnd__SetSTMLText_x                                    0x1405AA8D0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AAA80
#define CStmlWnd__UpdateHistoryString_x                            0x1405AAE10

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B690
#define CTabWnd__DrawCurrentPage_x                                 0x14059B730
#define CTabWnd__DrawTab_x                                         0x14059BB00
#define CTabWnd__GetTabRect_x                                      0x14059C170
#define CTabWnd__InsertPage_x                                      0x14059C440
#define CTabWnd__RemovePage_x                                      0x14059C6D0
#define CTabWnd__SetPage_x                                         0x14059C830
#define CTabWnd__UpdatePage_x                                      0x14059CB30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3A80
#define CPageWnd__SetTabText_x                                     0x1405C3AF0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA7C0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BABD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B21D0
#define CTextureFont__DrawWrappedText1_x                           0x1405B20E0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2300
#define CTextureFont__GetTextExtent_x                              0x1405B26B0
#define CTextureFont__GetHeight_x                                  0x1405B2670

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C80F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E740

// CXStr
#define CXStr__gFreeLists_x                                        0x140D17EA0
#define CXStr__gCXStrAccess_x                                      0x140EE85E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585590
#define CXWnd__ClrFocus_x                                          0x140585880
#define CXWnd__Destroy_x                                           0x140585A00
#define CXWnd__DoAllDrawing_x                                      0x140585B10
#define CXWnd__DrawColoredRect_x                                   0x1405862E0
#define CXWnd__DrawTooltip_x                                       0x140587970
#define CXWnd__DrawTooltipAtPoint_x                                0x140587A20
#define CXWnd__GetChildItem_x                                      0x140588310
#define CXWnd__GetChildWndAt_x                                     0x1405883D0
#define CXWnd__GetClientRect_x                                     0x140588690
#define CXWnd__GetClientClipRect_x                                 0x140588540
#define CXWnd__GetRelativeRect_x                                   0x14058A070
#define CXWnd__GetScreenClipRect_x                                 0x14058A180
#define CXWnd__GetScreenRect_x                                     0x14058A300
#define CXWnd__GetTooltipRect_x                                    0x14058A480
#define CXWnd__IsActive_x                                          0x14058AA40
#define CXWnd__IsDescendantOf_x                                    0x14058AA70
#define CXWnd__IsReallyVisible_x                                   0x14058AAE0
#define CXWnd__IsType_x                                            0x14058AB20
#define CXWnd__Minimize_x                                          0x14058AC20
#define CXWnd__ProcessTransition_x                                 0x14058BAA0
#define CXWnd__Resize_x                                            0x14058BBB0
#define CXWnd__Right_x                                             0x14058BC50
#define CXWnd__SetFocus_x                                          0x14058C000
#define CXWnd__SetFont_x                                           0x14058C050
#define CXWnd__SetKeyTooltip_x                                     0x14058C150
#define CXWnd__SetMouseOver_x                                      0x14058C290
#define CXWnd__SetParent_x                                         0x14058C310
#define CXWnd__StartFade_x                                         0x14058C750
#define CXWnd__vftable_x                                           0x140A9A9B8
#define CXWnd__CXWnd_x                                             0x140584120
#define CXWnd__dCXWnd_x                                            0x140584A70

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEBA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC6F0
#define CXWndManager__DrawCursor_x                                 0x1405AC9D0
#define CXWndManager__DrawWindows_x                                0x1405ACC30
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD300
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD340
#define CXWndManager__RemoveWnd_x                                  0x1405B0890

// CDBStr
#define CDBStr__GetString_x                                        0x140183B10

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140648CC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEA70
#define CCharacterListWnd__EnterWorld_x                            0x1400CD770
#define CCharacterListWnd__Quit_x                                  0x1400CEA50
#define CCharacterListWnd__UpdateList_x                            0x1400CF8E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140616FC0
#define ItemBase__CreateItemTagString_x                            0x140617A20
#define ItemBase__GetImageNum_x                                    0x140619FD0
#define ItemBase__GetItemValue_x                                   0x14061BE30
#define ItemBase__IsEmpty_x                                        0x14061DA60
#define ItemBase__IsKeyRingItem_x                                  0x14061E1A0
#define ItemBase__ValueSellMerchant_x                              0x1406222D0
#define ItemClient__CanDrop_x                                      0x1402A5200
#define ItemClient__CanGoInBag_x                                   0x1402A5330
#define ItemClient__CreateItemClient_x                             0x1402A5610
#define ItemClient__dItemClient_x                                  0x1402A5070

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3150
#define EQ_LoadingS__Array_x                                       0x140D04220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EAB0
#define PcBase__GetCombatAbility_x                                 0x14062F1A0
#define PcBase__GetCombatAbilityTimer_x                            0x14062F240
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062F990
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630480
#define PcClient__AlertInventoryChanged_x                          0x1402C7750
#define PcClient__GetConLevel_x                                    0x1402C7D70  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA510
#define PcClient__HasLoreItem_x                                    0x1402CB4E0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8DD0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCF60

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212290  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212440  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402125A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402124E0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C3B0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E310

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068C590
#define PlayerBase__CanSee1_x                                      0x14068C660
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068CB20
#define PlayerBase__HasProperty_x                                  0x14068CCF0
#define PlayerBase__IsTargetable_x                                 0x14068CDB0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9A30
#define PlayerClient__GetPcClient_x                                0x1402EC260
#define PlayerClient__PlayerClient_x                               0x1402E2D00
#define PlayerClient__SetNameSpriteState_x                         0x1402EF6B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0670
#define PlayerZoneClient__ChangeHeight_x                           0x1402FEBF0
#define PlayerZoneClient__DoAttack_x                               0x1402FF900
#define PlayerZoneClient__GetLevel_x                               0x140303030
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F140
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192030

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8510  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F85C0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F86C0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7FE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068C150

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA660
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA260
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA2D0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA5F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA780
#define KeypressHandler__HandleKeyUp_x                             0x1402AA8A0
#define KeypressHandler__SaveKeymapping_x                          0x1402AA500  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140646800  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641160

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1A90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6E10
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D94D0
#define PcZoneClient__RemovePetEffect_x                            0x1402DD060
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA0B0
#define PcZoneClient__CanEquipItem_x                               0x1402D5160
#define PcZoneClient__GetItemByID_x                                0x1402D7EA0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCDE0
#define PcZoneClient__BandolierSwap_x                              0x1402D4140

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253C70

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0570

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4FA0
#define CContainerMgr__CloseContainer_x                            0x1403A48E0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5320

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404987E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D3F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429620
#define CLootWnd__RequestLootSlot_x                                0x14042A630

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2480
#define EQ_Spell__SpellAffects_x                                   0x1401D3740
#define EQ_Spell__SpellAffectBase_x                                0x1401D36A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D74F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D74A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3360
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2F20
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D27F0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFCC0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F47B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3EC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F36C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBE70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017ACD0
#define CTaskManager__GetTaskStatus_x                              0x14017ADE0
#define CTaskManager__GetElementDescription_x                      0x14017A960

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D07F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF630
#define EqSoundManager__SoundAssistPlay_x                          0x140321A50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321D90  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D4F0
#define CTextureAnimation__SetCurCell_x                            0x14058D800

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B650

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406606E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140660760
#define CharacterBase__IsExpansionFlag_x                           0x1401F3A80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382D10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383680
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384BD0

// messages
#define msg_spell_worn_off_x                                       0x140208BC0
#define msg_new_text_x                                             0x140204450
#define __msgTokenTextParam_x                                      0x1401FBFF0
#define msgTokenText_x                                             0x1401FBF10

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323410
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323330

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069B430

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422A90

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9C80
#define CCursorAttachment__IsOkToActivate_x                        0x1403ACBF0
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACEA0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6590
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6780
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6790

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149400
#define CFindItemWnd__Update_x                                     0x140149DA0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401438D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152C40
#define LootFiltersManager__GetItemFilterData_x                    0x140153750
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153FF0
#define LootFiltersManager__SetItemLootFilter_x                    0x1401542A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B5E0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BFC0
#define CResolutionHandler__UpdateResolution_x                     0x14069FD60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A12C0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140664A60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140664950  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6000
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5BE0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E270
#define ItemBase__IsLoreEquipped_x                                 0x14061E300

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD390

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C510
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C4A0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C4E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403165C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401237B0
#define FactionManagerClient__HandleFactionMessage_x               0x140123B60
#define FactionManagerClient__GetFactionStanding_x                 0x140122F80
#define FactionManagerClient__GetMaxFaction_x                      0x140122F80
#define FactionManagerClient__GetMinFaction_x                      0x140122E30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EF50

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABAB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAE30
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB8D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB850  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328480

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403165C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212630

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583150

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339BD0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C990

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140649840
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAE9E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529380

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
