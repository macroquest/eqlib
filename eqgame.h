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

#define __ClientDate                                               20240513u
#define __ExpectedVersionDate                                     "May 13 2024"
#define __ExpectedVersionTime                                     "15:38:55"
#define __ActualVersionDate_x                                      0x14093FA50
#define __ActualVersionTime_x                                      0x14093FA40
#define __ActualVersionBuild_x                                     0x1408D6490

// Memory Protection
#define __MemChecker0_x                                            0x1402B0340
#define __MemChecker1_x                                            0x14056CD90
#define __MemChecker4_x                                            0x14027EC00
#define __EncryptPad0_x                                            0x140D0CE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E45A80
#define instEQZoneInfo_x                                           0x140E45C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216120
#define __gfMaxZoomCameraDistance_x                                0x1408D7708
#define __gfMaxCameraDistance_x                                    0x140A7C264
#define __CurrentSocial_x                                          0x140BC8940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D04710
#define g_eqCommandStates_x                                        0x140D05780
#define __CommandList_x                                            0x140D059C0
#define __ScreenMode_x                                             0x140D8D27C
#define __gWorld_x                                                 0x140E3E320
#define __gpbCommandEvent_x                                        0x140E408E4
#define __ServerHost_x                                             0x140E3E008
#define __Guilds_x                                                 0x140E44630
#define __MemCheckBitmask_x                                        0x140E45FB7
#define __MemCheckActive_x                                         0x140E476A5
#define __MouseEventTime_x                                         0x140EBAFF0
#define DI8__MouseState_x                                          0x140EBF200
#define __heqmain_x                                                0x140EC1690
#define DI8__Mouse_x                                               0x140EBF1D0
#define __HWnd_x                                                   0x140EBF1D8
#define __Mouse_x                                                  0x140EC16A8
#define DI8__Keyboard_x                                            0x140EC16C8
#define __LoginName_x                                              0x140EC1DAC
#define __CurrentMapLabel_x                                        0x140ED55B0
#define __LabelCache_x                                             0x140ED6180
#define __ChatFilterDefs_x                                         0x140A17350
#define Teleport_Table_Size_x                                      0x140E40970
#define Teleport_Table_x                                           0x140E3E420

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E409C0
#define pinstActiveBanker_x                                        0x140E3E348
#define pinstActiveCorpse_x                                        0x140E3E338
#define pinstActiveGMaster_x                                       0x140E3E340
#define pinstActiveMerchant_x                                      0x140E3E330
#define pinstAltAdvManager_x                                       0x140D8E1D8
#define pinstCEverQuest_x                                          0x140EBF148
#define pinstCamActor_x                                            0x140D8D268
#define pinstCDBStr_x                                              0x140D8CF90
#define pinstCDisplay_x                                            0x140E40430
#define pinstControlledPlayer_x                                    0x140E3E3D8
#define pinstCResolutionHandler_x                                  0x141546948
#define pinstCSidlManager_x                                        0x140EE7480
#define pinstCXWndManager_x                                        0x140EE7478
#define instDynamicZone_x                                          0x140E444F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4453E
#define instExpeditionName_x                                       0x140E4457E
#define pinstDZMember_x                                            0x140E44608
#define pinstDZTimerInfo_x                                         0x140E44610
#define pinstEqLogin_x                                             0x140EC16F0
#define instTribute_x                                              0x140CFFD50
#define pinstDeviceInputProxy_x                                    0x140E45ADC
#define pinstEQSoundManager_x                                      0x140D8E558
#define pinstEQSpellStrings_x                                      0x140D71B60
#define pinstSGraphicsEngine_x                                     0x1415466C8
#define pinstLocalPC_x                                             0x140E3E410
#define pinstLocalPlayer_x                                         0x140E3E328
#define pinstCMercenaryClientManager_x                             0x140EBC8E8
#define pinstModelPlayer_x                                         0x140E3E358
#define pinstRenderInterface_x                                     0x1415466E0
#define pinstSkillMgr_x                                            0x140EBE580
#define pinstSpawnManager_x                                        0x140EBCCA0
#define pinstSpellManager_x                                        0x140EBE5E8
#define pinstStringTable_x                                         0x140E3E418
#define pinstSwitchManager_x                                       0x140E3DE80
#define pinstTarget_x                                              0x140E3E3D0
#define pinstTaskMember_x                                          0x140CFFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3E3E0
#define pinstTradeTarget_x                                         0x140E3E350
#define instTributeActive_x                                        0x140CFFD79
#define pinstViewActor_x                                           0x140D8D260
#define pinstWorldData_x                                           0x140E40420
#define pinstPlayerPath_x                                          0x140EBCCC8
#define pinstTargetIndicator_x                                     0x140EBE698
#define EQObject_Top_x                                             0x140E3E3F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED2708
#define pinstCContainerMgr_x                                       0x140D8D508
#define pinstCContextMenuManager_x                                 0x140EE7160
#define pinstCInvSlotMgr_x                                         0x140D8D500
#define pinstCItemDisplayManager_x                                 0x140ED5180
#define pinstCPopupWndManager_x                                    0x140ED5A10
#define pinstCSpellDisplayMgr_x                                    0x140ED6060
#define pinstCTaskManager_x                                        0x140BC8C80
#define pinstEQSuiteTextureLoader_x                                0x140D16530
#define pinstItemIconCache_x                                       0x140ED2A68
#define pinstLootFiltersManager_x                                  0x140D8C9D8
#define pinstGFViewListener_x                                      0x140EE6938


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023ED10
#define __CastRay_x                                                0x140237150
#define __CastRay2_x                                               0x140236E50
#define __compress_block_x                                         0x140522430
#define __ConvertItemTags_x                                        0x1402375B0
#define __CleanItemTags_x                                          0x140087F30
#define __CreateCascadeMenuItems_x                                 0x140186570
#define __decompress_block_x                                       0x140568600
#define __DoesFileExist_x                                          0x140570C40
#define __EQGetTime_x                                              0x14056D340
#define __ExecuteCmd_x                                             0x14020DA50
#define __FixHeading_x                                             0x140698780
#define __FlushDxKeyboard_x                                        0x1403322C0
#define __get_bearing_x                                            0x140240F00
#define __get_melee_range_x                                        0x140240FF0
#define __GetAnimationCache_x                                      0x1403AFA00
#define __GetGaugeValueFromEQ_x                                    0x1404E32E0
#define __GetLabelFromEQ_x                                         0x1404E48E0
#define __GetXTargetType_x                                         0x140699A60   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140698800
#define __HelpPath_x                                               0x140EBAEB8   // Why?
#define __NewUIINI_x                                               0x1404F02C0   // Why?
#define __ProcessDeviceEvents_x                                    0x14027F210
#define __ProcessGameEvents_x                                      0x1402740F0
#define __ProcessKeyboardEvents_x                                  0x140333A10
#define __ProcessMouseEvents_x                                     0x140275620
#define __SaveColors_x                                             0x140196550
#define __STMLToText_x                                             0x140575580
#define __WndProc_x                                                0x140330AC0
#define CMemoryMappedFile__SetFile_x                               0x1407D09D0
#define DrawNetStatus_x                                            0x1402BE7E0
#define Util__FastTime_x                                           0x14056C8D0
#define __eq_delete_x                                              0x1406A06C4
#define __eq_new_x                                                 0x1406A0680
#define __CopyLayout_x                                             0x1402AC780
#define __ThrottleFrameRate_x                                      0x140263964
#define __ThrottleFrameRateEnd_x                                   0x1402639C4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403433B0
#define CAAWnd__Update_x                                           0x1403436B0
#define CAAWnd__UpdateSelected_x                                   0x1403446F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA320
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C20
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140824A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAC10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1650
#define AltAdvManager__IsAbilityReady_x                            0x1401A18D0
#define AltAdvManager__GetAAById_x                                 0x1401A0F20
#define AltAdvManager__CanTrainAbility_x                           0x1401A0D50
#define AltAdvManager__CanSeeAbility_x                             0x1401A0A10

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1D90
#define CharacterZoneClient__CanUseItem_x                          0x1400E60E0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2760
#define CharacterZoneClient__CastSpell_x                           0x1400D2800
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1C10
#define CharacterZoneClient__Cur_HP_x                              0x1400E77F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E79B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5590
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDE80
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC8B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6AC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E55B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFA40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE910
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7110
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AE0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF050
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7460
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFCD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6D10
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0AB0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6F10
#define CharacterZoneClient__GetModCap_x                           0x1400F8070
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6FA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D71B0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC50
#define CharacterZoneClient__HasSkill_x                            0x1400F3AA0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7C60
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB400
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7B50
#define CharacterZoneClient__Max_Endurance_x                       0x1402DB3A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7EA0
#define CharacterZoneClient__Max_Mana_x                            0x1402DB5C0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8300
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE7A0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF4A0
#define CharacterZoneClient__TotalEffect_x                         0x1400E07F0
#define CharacterZoneClient__UseSkill_x                            0x1400FD820


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361850

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036BBA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367A20
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140366AB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E250

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9AF50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391390
#define CChatWindowManager__InitContextMenu_x                      0x140391520
#define CChatWindowManager__FreeChatWindow_x                       0x140390410
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403990D0
#define CChatWindowManager__CreateChatWindow_x                     0x14038FD50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105BD0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A110
#define CChatWindow__Clear_x                                       0x14039B070
#define CChatWindow__WndNotification_x                             0x14039C260
#define CChatWindow__AddHistory_x                                  0x14039AB70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AA510
#define CContextMenu__RemoveMenuItem_x                             0x1405AA900
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AA8D0
#define CContextMenu__CheckMenuItem_x                              0x1405AA740
#define CContextMenu__SetMenuItem_x                                0x1405AA920
#define CContextMenu__AddSeparator_x                               0x1405AA680

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059C3D0
#define CContextMenuManager__RemoveMenu_x                          0x14059C9B0
#define CContextMenuManager__PopupMenu_x                           0x14059C6F0
#define CContextMenuManager__Flush_x                               0x14059C450
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A7980

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140661BA0
#define CChatService__GetFriendName_x                              0x140661BB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058D330
#define CComboWnd__Draw_x                                          0x14058D430
#define CComboWnd__GetCurChoice_x                                  0x14058D710  // unused
#define CComboWnd__GetListRect_x                                   0x14058D7B0
#define CComboWnd__InsertChoice_x                                  0x14058DAE0
#define CComboWnd__SetColors_x                                     0x14058DE70
#define CComboWnd__SetChoice_x                                     0x14058DE30
#define CComboWnd__GetItemCount_x                                  0x14058D7A0
#define CComboWnd__GetCurChoiceText_x                              0x14058D750  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058D6E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058DBA0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5700
#define CContainerWnd__SetContainer_x                              0x1403FAB80
#define CContainerWnd__vftable_x                                   0x1409B3498

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8CFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C46B0
#define CDisplay__PreZoneMainUI_x                                  0x140193490
#define CDisplay__CleanGameUI_x                                    0x140185650
#define CDisplay__GetClickedActor_x                                0x1401897C0
#define CDisplay__GetUserDefinedColor_x                            0x14018A430
#define CDisplay__InitCharSelectUI_x                               0x14018A6E0
#define CDisplay__ReloadUI_x                                       0x140195780
#define CDisplay__WriteTextHD2_x                                   0x14019C780
#define CDisplay__TrueDistance_x                                   0x14019C430
#define CDisplay__SetViewActor_x                                   0x140198C70
#define CDisplay__GetFloorHeight_x                                 0x140189A20
#define CDisplay__ToggleScreenshotMode_x                           0x14019BF20
#define CDisplay__RealRender_World_x                               0x140194B60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CE870
#define CEditWnd__DrawCaret_x                                      0x1405C0390  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C0850
#define CEditWnd__GetCaretPt_x                                     0x1405C0AD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C0B10
#define CEditWnd__GetDisplayString_x                               0x1405C0D80
#define CEditWnd__GetHorzOffset_x                                  0x1405C0FC0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1110
#define CEditWnd__GetSelStartPt_x                                  0x1405C13F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1240
#define CEditWnd__PointFromPrintableChar_x                         0x1405C1FA0
#define CEditWnd__ReplaceSelection_x                               0x1405C2350
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C27F0
#define CEditWnd__SetEditable_x                                    0x1405C2A80
#define CEditWnd__SetWindowText_x                                  0x1405C2AB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140264A70
#define CEverQuest__ClickedPlayer_x                                0x14025A5B0
#define CEverQuest__CreateTargetIndicator_x                        0x14025AE70
#define CEverQuest__DoTellWindow_x                                 0x1401058E0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401061A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266430
#define CEverQuest__dsp_chat_x                                     0x140105310 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140290620
#define CEverQuest__Emote_x                                        0x140266E10
#define CEverQuest__GetBodyTypeDesc_x                              0x140267BC0
#define CEverQuest__GetClassDesc_x                                 0x140267C20
#define CEverQuest__GetClassThreeLetterCode_x                      0x140267FF0
#define CEverQuest__GetDeityDesc_x                                 0x1402682A0
#define CEverQuest__GetLangDesc_x                                  0x1402686D0
#define CEverQuest__GetRaceDesc_x                                  0x140268A70
#define CEverQuest__InterpretCmd_x                                 0x14026A3A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027F280
#define CEverQuest__LMouseUp_x                                     0x14026BD90
#define CEverQuest__RightClickedOnPlayer_x                         0x14027CAA0
#define CEverQuest__RMouseUp_x                                     0x1402761A0
#define CEverQuest__SetGameState_x                                 0x1402817C0
#define CEverQuest__UPCNotificationFlush_x                         0x1402870F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026BA00
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277550
#define CEverQuest__ReportSuccessfulHit_x                          0x140278370

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9DA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0EB0
#define CGuild__GetGuildName_x                                     0x1400C0EF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DC270

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2210
#define CHotButton__SetCheck_x                                     0x1402A24E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F38D0
#define CInvSlotMgr__MoveItem_x                                    0x1403F3AB0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5460

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F0AC0
#define CInvSlot__SliderComplete_x                                 0x1403F2010
#define CInvSlot__GetItemBase_x                                    0x1403EC700
#define CInvSlot__UpdateItem_x                                     0x1403F24D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F67E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140417B00
#define CItemDisplayWnd__UpdateStrings_x                           0x14041A440
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414610
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140415D70
#define CItemDisplayWnd__RequestConvertItem_x                      0x140416F20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DFE10
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E1B00

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051B7A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140410D50

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DE80

// CLabel
#define CLabel__UpdateText_x                                       0x140421800

// CListWnd
#define CListWnd__CListWnd_x                                       0x140590CB0
#define CListWnd__dCListWnd_x                                      0x140591100
#define CListWnd__vftable_x                                        0x140A990A8
#define CListWnd__AddColumn_x                                      0x1405917A0
#define CListWnd__AddColumn1_x                                     0x140591840
#define CListWnd__AddLine_x                                        0x1405919A0
#define CListWnd__AddString_x                                      0x140591F30
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405924A0
#define CListWnd__CalculateVSBRange_x                              0x140592780
#define CListWnd__ClearSel_x                                       0x140592930
#define CListWnd__ClearAllSel_x                                    0x1405928D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140592990
#define CListWnd__Compare_x                                        0x140592B40
#define CListWnd__Draw_x                                           0x140593010
#define CListWnd__DrawColumnSeparators_x                           0x140593BC0
#define CListWnd__DrawHeader_x                                     0x140593C80
#define CListWnd__DrawItem_x                                       0x140594360
#define CListWnd__DrawLine_x                                       0x140594CE0
#define CListWnd__DrawSeparator_x                                  0x1405951A0
#define CListWnd__EnableLine_x                                     0x1405955C0
#define CListWnd__EnsureVisible_x                                  0x140595620
#define CListWnd__ExtendSel_x                                      0x140595720
#define CListWnd__GetColumnMinWidth_x                              0x140595A50
#define CListWnd__GetColumnWidth_x                                 0x140595AD0
#define CListWnd__GetCurSel_x                                      0x140595BD0
#define CListWnd__GetItemData_x                                    0x140595F50
#define CListWnd__GetItemHeight_x                                  0x140595F90
#define CListWnd__GetItemRect_x                                    0x1405961B0
#define CListWnd__GetItemText_x                                    0x140596450
#define CListWnd__GetSelList_x                                     0x1405966A0
#define CListWnd__GetSeparatorRect_x                               0x140596890
#define CListWnd__InsertLine_x                                     0x140597D00
#define CListWnd__RemoveLine_x                                     0x140598370
#define CListWnd__SetColors_x                                      0x140598730
#define CListWnd__SetColumnJustification_x                         0x140598750
#define CListWnd__SetColumnLabel_x                                 0x1405987D0
#define CListWnd__SetColumnWidth_x                                 0x140598970
#define CListWnd__SetCurSel_x                                      0x140598A40
#define CListWnd__SetItemColor_x                                   0x140598CB0
#define CListWnd__SetItemData_x                                    0x140598D50
#define CListWnd__SetItemText_x                                    0x140598F90
#define CListWnd__Sort_x                                           0x1405993A0
#define CListWnd__ToggleSel_x                                      0x140599510
#define CListWnd__SetColumnsSizable_x                              0x1405989C0
#define CListWnd__SetItemWnd_x                                     0x1405990C0
#define CListWnd__GetItemWnd_x                                     0x140596630
#define CListWnd__SetItemIcon_x                                    0x140598D90
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592270
#define CListWnd__SetVScrollPos_x                                  0x140599300

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140434A90

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FFF68
#define MapViewMap__Clear_x                                        0x140436610
#define MapViewMap__SetZoom_x                                      0x14043CC60
#define MapViewMap__HandleLButtonDown_x                            0x1404397A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045E310  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404648B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465050
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468860
#define CMerchantWnd__SelectBuySellSlot_x                          0x140467BA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046CAF0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063E620
#define CPacketScrambler__hton_x                                   0x14063E610

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B9C80
#define CSidlManagerBase__FindAnimation1_x                         0x1405B9BC0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BA2B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BA060
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B8FC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B8F50
#define CSidlManagerBase__CreateXWnd_x                             0x1405B85B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D2E30
#define CSidlManager__CreateXWnd_x                                 0x1404D2FF0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057E8E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057EA00
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C8E20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057EB80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E030
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057E100
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057E310
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057F250
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057F480
#define CSidlScreenWnd__GetChildItem_x                             0x14057F620
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057F870
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140589920 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057FBE0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057FF50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140580810
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581100
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE67D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140581750
#define CSidlScreenWnd__StoreIniVis_x                              0x140581F40
#define CSidlScreenWnd__vftable_x                                  0x140A98318
#define CSidlScreenWnd__WndNotification_x                          0x140581F90

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031B830 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031BCD0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031BC00
#define CSkillMgr__IsActivatedSkill_x                              0x14031C080
#define CSkillMgr__IsCombatSkill_x                                 0x14031C0C0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031BFF0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031BC50

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140599E80
#define CSliderWnd__SetValue_x                                     0x14059A690
#define CSliderWnd__SetNumTicks_x                                  0x14059A510

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9480

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059EE30
#define CStmlWnd__CalculateHSBRange_x                              0x140589320
#define CStmlWnd__CalculateVSBRange_x                              0x14059FD50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A07D0
#define CStmlWnd__ForceParseNow_x                                  0x1405A0870
#define CStmlWnd__GetVisibleText_x                                 0x1405A0F40
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A2CA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A2CE0
#define CStmlWnd__SetSTMLText_x                                    0x1405A9CB0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A9E60
#define CStmlWnd__UpdateHistoryString_x                            0x1405AA1F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059AA60
#define CTabWnd__DrawCurrentPage_x                                 0x14059AB00
#define CTabWnd__DrawTab_x                                         0x14059AED0
#define CTabWnd__GetTabRect_x                                      0x14059B540
#define CTabWnd__InsertPage_x                                      0x14059B810
#define CTabWnd__RemovePage_x                                      0x14059BAA0
#define CTabWnd__SetPage_x                                         0x14059BC00
#define CTabWnd__UpdatePage_x                                      0x14059BF00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C2F10
#define CPageWnd__SetTabText_x                                     0x1405C2F80

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA600  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAA10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B1670
#define CTextureFont__DrawWrappedText1_x                           0x1405B1580
#define CTextureFont__DrawWrappedText2_x                           0x1405B17A0
#define CTextureFont__GetTextExtent_x                              0x1405B1B50
#define CTextureFont__GetHeight_x                                  0x1405B1B10

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C7580

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057DC10

// CXStr
#define CXStr__gFreeLists_x                                        0x140D15EA0
#define CXStr__gCXStrAccess_x                                      0x140EE65D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405849B0
#define CXWnd__ClrFocus_x                                          0x140584CA0
#define CXWnd__Destroy_x                                           0x140584E20
#define CXWnd__DoAllDrawing_x                                      0x140584F20
#define CXWnd__DrawColoredRect_x                                   0x1405856F0
#define CXWnd__DrawTooltip_x                                       0x140586D80
#define CXWnd__DrawTooltipAtPoint_x                                0x140586E30
#define CXWnd__GetChildItem_x                                      0x140587740
#define CXWnd__GetChildWndAt_x                                     0x140587800
#define CXWnd__GetClientRect_x                                     0x140587AC0
#define CXWnd__GetClientClipRect_x                                 0x140587970
#define CXWnd__GetRelativeRect_x                                   0x140589460
#define CXWnd__GetScreenClipRect_x                                 0x140589560
#define CXWnd__GetScreenRect_x                                     0x1405896B0
#define CXWnd__GetTooltipRect_x                                    0x140589820
#define CXWnd__IsActive_x                                          0x140589DE0
#define CXWnd__IsDescendantOf_x                                    0x140589E10
#define CXWnd__IsReallyVisible_x                                   0x140589E70
#define CXWnd__IsType_x                                            0x140589EB0
#define CXWnd__Minimize_x                                          0x140589FB0
#define CXWnd__ProcessTransition_x                                 0x14058AE50
#define CXWnd__Resize_x                                            0x14058AF70
#define CXWnd__Right_x                                             0x14058B010
#define CXWnd__SetFocus_x                                          0x14058B3E0
#define CXWnd__SetFont_x                                           0x14058B430
#define CXWnd__SetKeyTooltip_x                                     0x14058B540
#define CXWnd__SetMouseOver_x                                      0x14058B680
#define CXWnd__SetParent_x                                         0x14058B700
#define CXWnd__StartFade_x                                         0x14058BB40
#define CXWnd__vftable_x                                           0x140A98908
#define CXWnd__CXWnd_x                                             0x140583550
#define CXWnd__dCXWnd_x                                            0x140583EA0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CDFF0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ABAC0
#define CXWndManager__DrawCursor_x                                 0x1405ABDA0
#define CXWndManager__DrawWindows_x                                0x1405AC000
#define CXWndManager__GetKeyboardFlags_x                           0x1405AC6D0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AC710
#define CXWndManager__RemoveWnd_x                                  0x1405AFD30

// CDBStr
#define CDBStr__GetString_x                                        0x140183800

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406478B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE880
#define CCharacterListWnd__EnterWorld_x                            0x1400CD580
#define CCharacterListWnd__Quit_x                                  0x1400CE860
#define CCharacterListWnd__UpdateList_x                            0x1400CF6F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140616460
#define ItemBase__CreateItemTagString_x                            0x140616EB0
#define ItemBase__GetImageNum_x                                    0x140619440
#define ItemBase__GetItemValue_x                                   0x14061AFA0
#define ItemBase__IsEmpty_x                                        0x14061CB40
#define ItemBase__IsKeyRingItem_x                                  0x14061D240
#define ItemBase__ValueSellMerchant_x                              0x140621440
#define ItemClient__CanDrop_x                                      0x1402A4810
#define ItemClient__CanGoInBag_x                                   0x1402A4940
#define ItemClient__CreateItemClient_x                             0x1402A4C20
#define ItemClient__dItemClient_x                                  0x1402A4680

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2DF0
#define EQ_LoadingS__Array_x                                       0x140D02220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062DAA0
#define PcBase__GetCombatAbility_x                                 0x14062E140
#define PcBase__GetCombatAbilityTimer_x                            0x14062E1E0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062E930
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062F420
#define PcClient__AlertInventoryChanged_x                          0x1402C6DB0
#define PcClient__GetConLevel_x                                    0x1402C73D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C9B10
#define PcClient__HasLoreItem_x                                    0x1402CAAE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8350
#define PcZoneClient__RemoveMyAffect_x                             0x1402DC440

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212140  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402122F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212450  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212390  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024BC90  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E060

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068B170
#define PlayerBase__CanSee1_x                                      0x14068B240
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068B700
#define PlayerBase__HasProperty_x                                  0x14068B8D0
#define PlayerBase__IsTargetable_x                                 0x14068B990
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E8EF0
#define PlayerClient__GetPcClient_x                                0x1402EB720
#define PlayerClient__PlayerClient_x                               0x1402E21D0
#define PlayerClient__SetNameSpriteState_x                         0x1402EEB70
#define PlayerClient__SetNameSpriteTint_x                          0x1402EFB30
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE090
#define PlayerZoneClient__DoAttack_x                               0x1402FEDA0
#define PlayerZoneClient__GetLevel_x                               0x1403024D0
#define PlayerZoneClient__IsValidTeleport_x                        0x14024EA10
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191D10

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F79B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F7A60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F7B60
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7480
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068AD30

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A9C80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A9880
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A98F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A9C10  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A9DA0
#define KeypressHandler__HandleKeyUp_x                             0x1402A9EC0
#define KeypressHandler__SaveKeymapping_x                          0x1402A9B20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406453F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063FD50

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1070  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6390
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D8A50
#define PcZoneClient__RemovePetEffect_x                            0x1402DC540
#define PcZoneClient__HasAlternateAbility_x                        0x1402D9630
#define PcZoneClient__CanEquipItem_x                               0x1402D46B0
#define PcZoneClient__GetItemByID_x                                0x1402D7420
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DC2C0
#define PcZoneClient__BandolierSwap_x                              0x1402D3690

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253540

// IconCache
#define IconCache__GetIcon_x                                       0x1403AFA30

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A44B0
#define CContainerMgr__CloseContainer_x                            0x1403A3DF0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4830

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140497B50

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029C9E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140428AD0
#define CLootWnd__RequestLootSlot_x                                0x140429AF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2020
#define EQ_Spell__SpellAffects_x                                   0x1401D32E0
#define EQ_Spell__SpellAffectBase_x                                0x1401D3240
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7380
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7330
#define EQ_Spell__IsSPAStacking_x                                  0x1401D2F00
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2AC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D2390

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFAF0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F3A90
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F31A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F29A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FB140  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AA30
#define CTaskManager__GetTaskStatus_x                              0x14017AB40
#define CTaskManager__GetElementDescription_x                      0x14017A6C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D0390
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF1D0
#define EqSoundManager__SoundAssistPlay_x                          0x140320E80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403211C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058C8C0
#define CTextureAnimation__SetCurCell_x                            0x14058CBD0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029AC40

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065F2E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065F360
#define CharacterBase__IsExpansionFlag_x                           0x1401F3BE0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403823F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140382D60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403842A0

// messages
#define msg_spell_worn_off_x                                       0x140208A90
#define msg_new_text_x                                             0x140204330
#define __msgTokenTextParam_x                                      0x1401FC030
#define msgTokenText_x                                             0x1401FBF50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322840
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322760

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140699E40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140421F50

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9190
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC0C0
#define CCursorAttachment__RemoveAttachment_x                      0x1403AC370
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C5A20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C5C10
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C5C20

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149110
#define CFindItemWnd__Update_x                                     0x140149AB0
#define CFindItemWnd__PickupSelectedItem_x                         0x1401435E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152970
#define LootFiltersManager__GetItemFilterData_x                    0x140153480
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153D20
#define LootFiltersManager__SetItemLootFilter_x                    0x140153FD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047A970

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069E6F0
#define CResolutionHandler__GetWindowedStyle_x                     0x14031B3F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A07F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140663650  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140663540  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5420
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5000

// ItemBase
#define ItemBase__IsLore_x                                         0x14061D310
#define ItemBase__IsLoreEquipped_x                                 0x14061D3A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BC9F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024BDF0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024BD80
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024BDC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403159E0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123510
#define FactionManagerClient__HandleFactionMessage_x               0x1401238C0
#define FactionManagerClient__GetFactionStanding_x                 0x140122CE0
#define FactionManagerClient__GetMaxFaction_x                      0x140122CE0
#define FactionManagerClient__GetMinFaction_x                      0x140122B90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC7B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ECA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB740
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAAC0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB560  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB4E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403278B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403159E0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402124E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140582580

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339310

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C7B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140648430
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAC930

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
