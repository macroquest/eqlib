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

#define __ClientDate                                               20240509u
#define __ExpectedVersionDate                                     "May  9 2024"
#define __ExpectedVersionTime                                     "12:14:31"
#define __ActualVersionDate_x                                      0x14093EA50
#define __ActualVersionTime_x                                      0x14093EA40
#define __ActualVersionBuild_x                                     0x1408D54B0

// Memory Protection
#define __MemChecker0_x                                            0x1402AFE90
#define __MemChecker1_x                                            0x14056C580
#define __MemChecker4_x                                            0x14027E7D0
#define __EncryptPad0_x                                            0x140D0BE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E44A80
#define instEQZoneInfo_x                                           0x140E44C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140215C90
#define __gfMaxZoomCameraDistance_x                                0x1408D6728
#define __gfMaxCameraDistance_x                                    0x140A7B264
#define __CurrentSocial_x                                          0x140BC7940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D03710
#define g_eqCommandStates_x                                        0x140D04780
#define __CommandList_x                                            0x140D049C0
#define __ScreenMode_x                                             0x140D8C27C
#define __gWorld_x                                                 0x140E3D320
#define __gpbCommandEvent_x                                        0x140E3F8E4
#define __ServerHost_x                                             0x140E3D008
#define __Guilds_x                                                 0x140E43630
#define __MemCheckBitmask_x                                        0x140E42F73
#define __MemCheckActive_x                                         0x140E42A78 
#define __MouseEventTime_x                                         0x140EB9FF0
#define DI8__MouseState_x                                          0x140EBE200
#define __heqmain_x                                                0x140EC0690
#define DI8__Mouse_x                                               0x140EBE1D0
#define __HWnd_x                                                   0x140EBE1D8
#define __Mouse_x                                                  0x140EC06A8
#define DI8__Keyboard_x                                            0x140EC06C8
#define __LoginName_x                                              0x140EC0DAC
#define __CurrentMapLabel_x                                        0x140ED45B0
#define __LabelCache_x                                             0x140ED5180
#define __ChatFilterDefs_x                                         0x140A16350
#define Teleport_Table_Size_x                                      0x140E3F970
#define Teleport_Table_x                                           0x140E3D420

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E3F9C0
#define pinstActiveBanker_x                                        0x140E3D348
#define pinstActiveCorpse_x                                        0x140E3D338
#define pinstActiveGMaster_x                                       0x140E3D340
#define pinstActiveMerchant_x                                      0x140E3D330
#define pinstAltAdvManager_x                                       0x140D8D1D8
#define pinstCEverQuest_x                                          0x140EBE148
#define pinstCamActor_x                                            0x140D8C268
#define pinstCDBStr_x                                              0x140D8BF90
#define pinstCDisplay_x                                            0x140E3F430
#define pinstControlledPlayer_x                                    0x140E3D3D8
#define pinstCResolutionHandler_x                                  0x141545948
#define pinstCSidlManager_x                                        0x140EE6480
#define pinstCXWndManager_x                                        0x140EE6478
#define instDynamicZone_x                                          0x140E434F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4353E
#define instExpeditionName_x                                       0x140E4357E
#define pinstDZMember_x                                            0x140E43608
#define pinstDZTimerInfo_x                                         0x140E43610
#define pinstEqLogin_x                                             0x140EC06F0
#define instTribute_x                                              0x140CFED50
#define pinstDeviceInputProxy_x                                    0x140E42A9C
#define pinstEQSoundManager_x                                      0x140D8D558
#define pinstEQSpellStrings_x                                      0x140D70B60
#define pinstSGraphicsEngine_x                                     0x1415456C8
#define pinstLocalPC_x                                             0x140E3D410
#define pinstLocalPlayer_x                                         0x140E3D328
#define pinstCMercenaryClientManager_x                             0x140EBB8E8
#define pinstModelPlayer_x                                         0x140E3D358
#define pinstRenderInterface_x                                     0x1415456E0
#define pinstSkillMgr_x                                            0x140EBD580
#define pinstSpawnManager_x                                        0x140EBBCA0
#define pinstSpellManager_x                                        0x140EBD5E8
#define pinstStringTable_x                                         0x140E3D418
#define pinstSwitchManager_x                                       0x140E3CE80
#define pinstTarget_x                                              0x140E3D3D0
#define pinstTaskMember_x                                          0x140CFED40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3D3E0
#define pinstTradeTarget_x                                         0x140E3D350
#define instTributeActive_x                                        0x140CFED79
#define pinstViewActor_x                                           0x140D8C260
#define pinstWorldData_x                                           0x140E3F420
#define pinstPlayerPath_x                                          0x140EBBCC8
#define pinstTargetIndicator_x                                     0x140EBD698
#define EQObject_Top_x                                             0x140E3D3F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED1708
#define pinstCContainerMgr_x                                       0x140D8C508
#define pinstCContextMenuManager_x                                 0x140EE6160
#define pinstCInvSlotMgr_x                                         0x140D8C500
#define pinstCItemDisplayManager_x                                 0x140ED4180
#define pinstCPopupWndManager_x                                    0x140ED4A10
#define pinstCSpellDisplayMgr_x                                    0x140ED5060
#define pinstCTaskManager_x                                        0x140BC7C80
#define pinstEQSuiteTextureLoader_x                                0x140D15530
#define pinstItemIconCache_x                                       0x140ED1A68
#define pinstLootFiltersManager_x                                  0x140D8B9D8
#define pinstGFViewListener_x                                      0x140EE5938


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023E890
#define __CastRay_x                                                0x140236CE0
#define __CastRay2_x                                               0x1402369E0
#define __compress_block_x                                         0x140522670
#define __ConvertItemTags_x                                        0x140237140
#define __CleanItemTags_x                                          0x140087F30
#define __CreateCascadeMenuItems_x                                 0x1401865A0
#define __decompress_block_x                                       0x140566290
#define __DoesFileExist_x                                          0x140570430
#define __EQGetTime_x                                              0x14056CB30
#define __ExecuteCmd_x                                             0x14020D5A0
#define __FixHeading_x                                             0x1406975A0
#define __FlushDxKeyboard_x                                        0x140331DB0
#define __get_bearing_x                                            0x140240A80
#define __get_melee_range_x                                        0x140240B70
#define __GetAnimationCache_x                                      0x1403AF580
#define __GetGaugeValueFromEQ_x                                    0x1404E2CC0
#define __GetLabelFromEQ_x                                         0x1404E42C0
#define __GetXTargetType_x                                         0x140698880   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140697620
#define __HelpPath_x                                               0x140EB9EB8   // Why?
#define __NewUIINI_x                                               0x1404EFC90   // Why?
#define __ProcessDeviceEvents_x                                    0x1402D4520
#define __ProcessGameEvents_x                                      0x140273CD0
#define __ProcessKeyboardEvents_x                                  0x140333500
#define __ProcessMouseEvents_x                                     0x1402751F0
#define __SaveColors_x                                             0x1401965D0
#define __STMLToText_x                                             0x140574D70
#define __WndProc_x                                                0x1403305D0
#define CMemoryMappedFile__SetFile_x                               0x1407CF7F0
#define DrawNetStatus_x                                            0x1402BE2E0
#define Util__FastTime_x                                           0x14056C0C0
#define __eq_delete_x                                              0x14069F4E4
#define __eq_new_x                                                 0x14069F4A0
#define __CopyLayout_x                                             0x1402AC2A0
#define __ThrottleFrameRate_x                                      0x140263534
#define __ThrottleFrameRateEnd_x                                   0x140263594

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140342EA0
#define CAAWnd__Update_x                                           0x1403431A0
#define CAAWnd__UpdateSelected_x                                   0x1403441E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA340
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C30
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140823A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAC30

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A16E0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1960
#define AltAdvManager__GetAAById_x                                 0x1401A0FB0
#define AltAdvManager__CanTrainAbility_x                           0x1401A0DE0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0AA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1D90
#define CharacterZoneClient__CanUseItem_x                          0x1400E60D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2760
#define CharacterZoneClient__CastSpell_x                           0x1400D2800
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1C00
#define CharacterZoneClient__Cur_HP_x                              0x1400E77E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E79A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5590
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDE60
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC890  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6AC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E55A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFA20
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE8F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7110
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AE0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF030
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7450
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFCB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6D10
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0A90
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6F10
#define CharacterZoneClient__GetModCap_x                           0x1400F8050
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6FA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D71B0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC50
#define CharacterZoneClient__HasSkill_x                            0x1400F3A80
#define CharacterZoneClient__HitBySpell_x                          0x1400D7C60
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB400
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7B30
#define CharacterZoneClient__Max_Endurance_x                       0x1402DAEB0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7E80
#define CharacterZoneClient__Max_Mana_x                            0x1402DB0D0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F82E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE790
#define CharacterZoneClient__SpellDuration_x                       0x1400DF490
#define CharacterZoneClient__TotalEffect_x                         0x1400E07E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD800


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361370

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036B6A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367530
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403665C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036DD50

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A99F50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140390F00
#define CChatWindowManager__InitContextMenu_x                      0x140391090
#define CChatWindowManager__FreeChatWindow_x                       0x14038FF80
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140398C40
#define CChatWindowManager__CreateChatWindow_x                     0x14038F8C0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105BA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140399C80
#define CChatWindow__Clear_x                                       0x14039ABD0
#define CChatWindow__WndNotification_x                             0x14039BDA0
#define CChatWindow__AddHistory_x                                  0x14039A6E0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A9C80
#define CContextMenu__RemoveMenuItem_x                             0x1405AA060
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AA030
#define CContextMenu__CheckMenuItem_x                              0x1405A9EA0
#define CContextMenu__SetMenuItem_x                                0x1405AA080
#define CContextMenu__AddSeparator_x                               0x1405A9DE0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059BBD0
#define CContextMenuManager__RemoveMenu_x                          0x14059C1B0
#define CContextMenuManager__PopupMenu_x                           0x14059BEF0
#define CContextMenuManager__Flush_x                               0x14059BC50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A74D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140661430
#define CChatService__GetFriendName_x                              0x140661440

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058CBD0
#define CComboWnd__Draw_x                                          0x14058CCC0
#define CComboWnd__GetCurChoice_x                                  0x14058CF90  // unused
#define CComboWnd__GetListRect_x                                   0x14058D030
#define CComboWnd__InsertChoice_x                                  0x14058D350
#define CComboWnd__SetColors_x                                     0x14058D6E0
#define CComboWnd__SetChoice_x                                     0x14058D6A0
#define CComboWnd__GetItemCount_x                                  0x14058D020
#define CComboWnd__GetCurChoiceText_x                              0x14058CFD0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058CF60
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058D410

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5250
#define CContainerWnd__SetContainer_x                              0x1403FA6E0
#define CContainerWnd__vftable_x                                   0x1409B2498

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8BFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C3DE0
#define CDisplay__PreZoneMainUI_x                                  0x1401934C0
#define CDisplay__CleanGameUI_x                                    0x140185680
#define CDisplay__GetClickedActor_x                                0x1401897F0
#define CDisplay__GetUserDefinedColor_x                            0x14018A460
#define CDisplay__InitCharSelectUI_x                               0x14018A710
#define CDisplay__ReloadUI_x                                       0x1401957B0
#define CDisplay__WriteTextHD2_x                                   0x14019C800
#define CDisplay__TrueDistance_x                                   0x14019C4B0
#define CDisplay__SetViewActor_x                                   0x140198CF0
#define CDisplay__GetFloorHeight_x                                 0x140189A50
#define CDisplay__ToggleScreenshotMode_x                           0x14019BFA0
#define CDisplay__RealRender_World_x                               0x140194B90

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CDFA0
#define CEditWnd__DrawCaret_x                                      0x1405BFAE0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405BFF70
#define CEditWnd__GetCaretPt_x                                     0x1405C01E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C0220
#define CEditWnd__GetDisplayString_x                               0x1405C0480
#define CEditWnd__GetHorzOffset_x                                  0x1405C06C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C0800
#define CEditWnd__GetSelStartPt_x                                  0x1405C0AE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C0930
#define CEditWnd__PointFromPrintableChar_x                         0x1405C1700
#define CEditWnd__ReplaceSelection_x                               0x1405C1AA0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C1F40
#define CEditWnd__SetEditable_x                                    0x1405C21C0
#define CEditWnd__SetWindowText_x                                  0x1405C21F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140264640
#define CEverQuest__ClickedPlayer_x                                0x14025A140
#define CEverQuest__CreateTargetIndicator_x                        0x14025AA00
#define CEverQuest__DoTellWindow_x                                 0x1401058B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106170 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266000
#define CEverQuest__dsp_chat_x                                     0x1401052E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402901F0
#define CEverQuest__Emote_x                                        0x1402669E0
#define CEverQuest__GetBodyTypeDesc_x                              0x140267790
#define CEverQuest__GetClassDesc_x                                 0x1402677F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140267BC0
#define CEverQuest__GetDeityDesc_x                                 0x140267E70
#define CEverQuest__GetLangDesc_x                                  0x1402682A0
#define CEverQuest__GetRaceDesc_x                                  0x140268640
#define CEverQuest__InterpretCmd_x                                 0x140269F70
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027EE50
#define CEverQuest__LMouseUp_x                                     0x14026B960
#define CEverQuest__RightClickedOnPlayer_x                         0x14027C670
#define CEverQuest__RMouseUp_x                                     0x140275D70
#define CEverQuest__SetGameState_x                                 0x140281390
#define CEverQuest__UPCNotificationFlush_x                         0x140286CC0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026B5D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277120
#define CEverQuest__ReportSuccessfulHit_x                          0x140277F40

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9950

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0EB0
#define CGuild__GetGuildName_x                                     0x1400C0EF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DBE70

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A1DC0
#define CHotButton__SetCheck_x                                     0x1402A2090

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F3480
#define CInvSlotMgr__MoveItem_x                                    0x1403F3660
#define CInvSlotMgr__SelectSlot_x                                  0x1403F4FD0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F06B0
#define CInvSlot__SliderComplete_x                                 0x1403F1C00
#define CInvSlot__GetItemBase_x                                    0x1403EC2E0
#define CInvSlot__UpdateItem_x                                     0x1403F20B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F6360

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404174D0
#define CItemDisplayWnd__UpdateStrings_x                           0x140419DE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414020
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140415760
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404168F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DF7E0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E14D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051AF90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140410770

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DE90

// CLabel
#define CLabel__UpdateText_x                                       0x1404211C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140590520
#define CListWnd__dCListWnd_x                                      0x140590960
#define CListWnd__vftable_x                                        0x140A980A8
#define CListWnd__AddColumn_x                                      0x140591000
#define CListWnd__AddColumn1_x                                     0x1405910A0
#define CListWnd__AddLine_x                                        0x140591200
#define CListWnd__AddString_x                                      0x140591790
#define CListWnd__CalculateFirstVisibleLine_x                      0x140591D00
#define CListWnd__CalculateVSBRange_x                              0x140591FE0
#define CListWnd__ClearSel_x                                       0x140592180
#define CListWnd__ClearAllSel_x                                    0x140592120
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405921E0
#define CListWnd__Compare_x                                        0x1405923A0
#define CListWnd__Draw_x                                           0x140592870
#define CListWnd__DrawColumnSeparators_x                           0x140593410
#define CListWnd__DrawHeader_x                                     0x1405934D0
#define CListWnd__DrawItem_x                                       0x140593BA0
#define CListWnd__DrawLine_x                                       0x140594510
#define CListWnd__DrawSeparator_x                                  0x1405949D0
#define CListWnd__EnableLine_x                                     0x140594DF0
#define CListWnd__EnsureVisible_x                                  0x140594E50
#define CListWnd__ExtendSel_x                                      0x140594F40
#define CListWnd__GetColumnMinWidth_x                              0x140595270
#define CListWnd__GetColumnWidth_x                                 0x1405952F0
#define CListWnd__GetCurSel_x                                      0x1405953F0
#define CListWnd__GetItemData_x                                    0x140595770
#define CListWnd__GetItemHeight_x                                  0x1405957B0
#define CListWnd__GetItemRect_x                                    0x1405959D0
#define CListWnd__GetItemText_x                                    0x140595C70
#define CListWnd__GetSelList_x                                     0x140595EC0
#define CListWnd__GetSeparatorRect_x                               0x1405960B0
#define CListWnd__InsertLine_x                                     0x140597500
#define CListWnd__RemoveLine_x                                     0x140597B70
#define CListWnd__SetColors_x                                      0x140597F30
#define CListWnd__SetColumnJustification_x                         0x140597F50
#define CListWnd__SetColumnLabel_x                                 0x140597FD0
#define CListWnd__SetColumnWidth_x                                 0x140598170
#define CListWnd__SetCurSel_x                                      0x140598240
#define CListWnd__SetItemColor_x                                   0x1405984B0
#define CListWnd__SetItemData_x                                    0x140598550
#define CListWnd__SetItemText_x                                    0x140598790
#define CListWnd__Sort_x                                           0x140598BA0
#define CListWnd__ToggleSel_x                                      0x140598D10
#define CListWnd__SetColumnsSizable_x                              0x1405981C0
#define CListWnd__SetItemWnd_x                                     0x1405988C0
#define CListWnd__GetItemWnd_x                                     0x140595E50
#define CListWnd__SetItemIcon_x                                    0x140598590
#define CListWnd__CalculateCustomWindowPositions_x                 0x140591AD0
#define CListWnd__SetVScrollPos_x                                  0x140598B00

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140434450

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FEF68
#define MapViewMap__Clear_x                                        0x140435FD0
#define MapViewMap__SetZoom_x                                      0x14043C620
#define MapViewMap__HandleLButtonDown_x                            0x140439160

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045DD00  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140464290
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140464A30
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468230
#define CMerchantWnd__SelectBuySellSlot_x                          0x140467580
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046C4B0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063DEB0
#define CPacketScrambler__hton_x                                   0x14063DEA0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B93B0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B92F0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B99E0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B9790
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B86F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B8680
#define CSidlManagerBase__CreateXWnd_x                             0x1405B7CE0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D27F0
#define CSidlManager__CreateXWnd_x                                 0x1404D29B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057E200
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057E0D0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C8550 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057E370
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057D820
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057D8F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057DB00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057EA50
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057EC80
#define CSidlScreenWnd__GetChildItem_x                             0x14057EE20
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057F070
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140589140 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057F3E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057F750
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140580010
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140580900
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE57D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140580F40
#define CSidlScreenWnd__StoreIniVis_x                              0x140581730
#define CSidlScreenWnd__vftable_x                                  0x140A97318
#define CSidlScreenWnd__WndNotification_x                          0x140581780

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031B340 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031B7E0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031B710
#define CSkillMgr__IsActivatedSkill_x                              0x14031BB90
#define CSkillMgr__IsCombatSkill_x                                 0x14031BBD0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031BB00
#define CSkillMgr__GetSkillLastUsed_x                              0x14031B760

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140599690
#define CSliderWnd__SetValue_x                                     0x140599EA0
#define CSliderWnd__SetNumTicks_x                                  0x140599D20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D8E40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059E630
#define CStmlWnd__CalculateHSBRange_x                              0x140588AF0
#define CStmlWnd__CalculateVSBRange_x                              0x14059F540
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059FF80
#define CStmlWnd__ForceParseNow_x                                  0x1405A0020
#define CStmlWnd__GetVisibleText_x                                 0x1405A06E0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A2430
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A2470
#define CStmlWnd__SetSTMLText_x                                    0x1405A9430
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A95E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A9970

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059A270
#define CTabWnd__DrawCurrentPage_x                                 0x14059A310
#define CTabWnd__DrawTab_x                                         0x14059A6E0
#define CTabWnd__GetTabRect_x                                      0x14059AD40
#define CTabWnd__InsertPage_x                                      0x14059B010
#define CTabWnd__RemovePage_x                                      0x14059B2A0
#define CTabWnd__SetPage_x                                         0x14059B400
#define CTabWnd__UpdatePage_x                                      0x14059B700

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C2650
#define CPageWnd__SetTabText_x                                     0x1405C26C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA600  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAA10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B0D90
#define CTextureFont__DrawWrappedText1_x                           0x1405B0CA0
#define CTextureFont__DrawWrappedText2_x                           0x1405B0EC0
#define CTextureFont__GetTextExtent_x                              0x1405B1270
#define CTextureFont__GetHeight_x                                  0x1405B1230

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C6CB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057D400

// CXStr
#define CXStr__gFreeLists_x                                        0x140D14EA0
#define CXStr__gCXStrAccess_x                                      0x140EE55D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140584180
#define CXWnd__ClrFocus_x                                          0x140584470
#define CXWnd__Destroy_x                                           0x1405845F0
#define CXWnd__DoAllDrawing_x                                      0x140584700
#define CXWnd__DrawColoredRect_x                                   0x140584ED0
#define CXWnd__DrawTooltip_x                                       0x140586530
#define CXWnd__DrawTooltipAtPoint_x                                0x1405865E0
#define CXWnd__GetChildItem_x                                      0x140586EE0
#define CXWnd__GetChildWndAt_x                                     0x140586FA0
#define CXWnd__GetClientRect_x                                     0x140587250
#define CXWnd__GetClientClipRect_x                                 0x140587100
#define CXWnd__GetRelativeRect_x                                   0x140588C30
#define CXWnd__GetScreenClipRect_x                                 0x140588D40
#define CXWnd__GetScreenRect_x                                     0x140588EC0
#define CXWnd__GetTooltipRect_x                                    0x140589040
#define CXWnd__IsActive_x                                          0x140589600
#define CXWnd__IsDescendantOf_x                                    0x140589630
#define CXWnd__IsReallyVisible_x                                   0x1405896A0
#define CXWnd__IsType_x                                            0x1405896E0
#define CXWnd__Minimize_x                                          0x1405897E0
#define CXWnd__ProcessTransition_x                                 0x14058A6D0
#define CXWnd__Resize_x                                            0x14058A7F0
#define CXWnd__Right_x                                             0x14058A890
#define CXWnd__SetFocus_x                                          0x14058AC40
#define CXWnd__SetFont_x                                           0x14058AC90
#define CXWnd__SetKeyTooltip_x                                     0x14058AD90
#define CXWnd__SetMouseOver_x                                      0x14058AED0
#define CXWnd__SetParent_x                                         0x14058AF50
#define CXWnd__StartFade_x                                         0x14058B390
#define CXWnd__vftable_x                                           0x140A97908
#define CXWnd__CXWnd_x                                             0x140582D40
#define CXWnd__dCXWnd_x                                            0x140583680

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CD720

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AB220
#define CXWndManager__DrawCursor_x                                 0x1405AB500
#define CXWndManager__DrawWindows_x                                0x1405AB760
#define CXWndManager__GetKeyboardFlags_x                           0x1405ABE30
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ABE70
#define CXWndManager__RemoveWnd_x                                  0x1405AF460

// CDBStr
#define CDBStr__GetString_x                                        0x1401837F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140647140

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE880
#define CCharacterListWnd__EnterWorld_x                            0x1400CD580
#define CCharacterListWnd__Quit_x                                  0x1400CE860
#define CCharacterListWnd__UpdateList_x                            0x1400CF6F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140615BD0
#define ItemBase__CreateItemTagString_x                            0x140616640
#define ItemBase__GetImageNum_x                                    0x140618C00
#define ItemBase__GetItemValue_x                                   0x14061A6B0
#define ItemBase__IsEmpty_x                                        0x14061C2B0
#define ItemBase__IsKeyRingItem_x                                  0x14061C9F0
#define ItemBase__ValueSellMerchant_x                              0x140620BC0
#define ItemClient__CanDrop_x                                      0x1402A4380
#define ItemClient__CanGoInBag_x                                   0x1402A44B0
#define ItemClient__CreateItemClient_x                             0x1402A4790
#define ItemClient__dItemClient_x                                  0x1402A41F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2E80
#define EQ_LoadingS__Array_x                                       0x140D01220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062D300
#define PcBase__GetCombatAbility_x                                 0x14062D9A0
#define PcBase__GetCombatAbilityTimer_x                            0x14062DA40
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062E190
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062EC80
#define PcClient__AlertInventoryChanged_x                          0x1402C68C0
#define PcClient__GetConLevel_x                                    0x1402C6EE0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C9620
#define PcClient__HasLoreItem_x                                    0x1402CA5F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D7E60
#define PcZoneClient__RemoveMyAffect_x                             0x1402DBF50

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140211CB0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140211E60  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211FC0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140211F00  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024B810  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E040

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068AA10
#define PlayerBase__CanSee1_x                                      0x14068AAE0
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068AFA0
#define PlayerBase__HasProperty_x                                  0x14068B170
#define PlayerBase__IsTargetable_x                                 0x14068B230
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E8A40
#define PlayerClient__GetPcClient_x                                0x1402EB270
#define PlayerClient__PlayerClient_x                               0x1402E1D00
#define PlayerClient__SetNameSpriteState_x                         0x1402EE6C0
#define PlayerClient__SetNameSpriteTint_x                          0x1402EF680
#define PlayerZoneClient__ChangeHeight_x                           0x1402FDB00
#define PlayerZoneClient__DoAttack_x                               0x1402FE810
#define PlayerZoneClient__GetLevel_x                               0x140301F40
#define PlayerZoneClient__IsValidTeleport_x                        0x14024E5A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191D40

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F7420  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F74D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F75D0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F6EF0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068A5D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A97A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A93A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A9410
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A9730  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A98C0
#define KeypressHandler__HandleKeyUp_x                             0x1402A99E0
#define KeypressHandler__SaveKeymapping_x                          0x1402A9640  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140644C80  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063F5E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D0BA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D5EA0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D8560
#define PcZoneClient__RemovePetEffect_x                            0x1402DC050
#define PcZoneClient__HasAlternateAbility_x                        0x1402D9140
#define PcZoneClient__CanEquipItem_x                               0x1402D41D0
#define PcZoneClient__GetItemByID_x                                0x1402D6F30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DBDD0
#define PcZoneClient__BandolierSwap_x                              0x1402D31B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402530D0

// IconCache
#define IconCache__GetIcon_x                                       0x1403AF5B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4000
#define CContainerMgr__CloseContainer_x                            0x1403A3940
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4380

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140497520

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029C580

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404284A0
#define CLootWnd__RequestLootSlot_x                                0x1404294C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2130
#define EQ_Spell__SpellAffects_x                                   0x1401D33F0
#define EQ_Spell__SpellAffectBase_x                                0x1401D3350
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7380
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7330
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3010
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2BD0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D24A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFAF0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F3450
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F2B60
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F2360

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FAB10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AA10
#define CTaskManager__GetTaskStatus_x                              0x14017AB20
#define CTaskManager__GetElementDescription_x                      0x14017A6A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D04A0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF2E0
#define EqSoundManager__SoundAssistPlay_x                          0x140320990  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140320CD0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058C160
#define CTextureAnimation__SetCurCell_x                            0x14058C470

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029A7E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065EB70
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065EBF0
#define CharacterBase__IsExpansionFlag_x                           0x1401F3770

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140381F60
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403828D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140383E20

// messages
#define msg_spell_worn_off_x                                       0x1402085E0
#define msg_new_text_x                                             0x140203E70
#define __msgTokenTextParam_x                                      0x1401FBB90
#define msgTokenText_x                                             0x1401FBAB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322350
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322270

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140698C60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140421910

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A8CD0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ABC30
#define CCursorAttachment__RemoveAttachment_x                      0x1403ABEE0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C5150
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C5340
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C5350

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149130
#define CFindItemWnd__Update_x                                     0x140149AD0
#define CFindItemWnd__PickupSelectedItem_x                         0x140143600

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152960
#define LootFiltersManager__GetItemFilterData_x                    0x140153470
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153D10
#define LootFiltersManager__SetItemLootFilter_x                    0x140153FC0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047A330

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069D510
#define CResolutionHandler__GetWindowedStyle_x                     0x14031AF00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0330

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140662EE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140662DD0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C4FF0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C4BD0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061CAC0
#define ItemBase__IsLoreEquipped_x                                 0x14061CB50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BC500

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024B970
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024B900
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024B940

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403154D0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123510
#define FactionManagerClient__HandleFactionMessage_x               0x1401238C0
#define FactionManagerClient__GetFactionStanding_x                 0x140122CE0
#define FactionManagerClient__GetMaxFaction_x                      0x140122CE0
#define FactionManagerClient__GetMinFaction_x                      0x140122B90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC7E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ECB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB7D0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAB50
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB5F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB570  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403273C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403154D0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212050

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140581D70

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140338E00

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C7B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140647CC0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAB930

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
