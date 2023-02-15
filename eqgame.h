/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#define __ClientDate                                               20230206u
#define __ExpectedVersionDate                                     "Feb  6 2023"
#define __ExpectedVersionTime                                     "09:54:15"
#define __ActualVersionDate_x                                      0x1407AF278
#define __ActualVersionTime_x                                      0x1407AF268
#define __ActualVersionBuild_x                                     0x14079D3F8

// Memory Protection
#define __MemChecker0_x                                            0x14027A490
#define __MemChecker1_x                                            0x14051D280
#define __MemChecker4_x                                            0x140249B40
#define __EncryptPad0_x                                            0x140A585F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B939B0
#define instEQZoneInfo_x                                           0x140B93BA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401F3960
#define __gfMaxZoomCameraDistance_x                                0x1407A55E0
#define __gfMaxCameraDistance_x                                    0x1407DFEA4
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
#define __allowslashcommand_x                                      0x14020AF00
#define __CastRay_x                                                0x140203720
#define __CastRay2_x                                               0x140203430
#define __ConvertItemTags_x                                        0x140203B20
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140156F60
#define __DoesFileExist_x                                          0x140521A60
#define __EQGetTime_x                                              0x14051D830
#define __ExecuteCmd_x                                             0x1401DBDB0
#define __FixHeading_x                                             0x140620130
#define __FlushDxKeyboard_x                                        0x1402F7140
#define __get_bearing_x                                            0x14020D0F0
#define __get_melee_range_x                                        0x14020D1E0
#define __GetAnimationCache_x                                      0x14036F4F0
#define __GetGaugeValueFromEQ_x                                    0x140495300
#define __GetLabelFromEQ_x                                         0x1404968C0
#define __GetXTargetType_x                                         0x140621410   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406201B0
#define __HelpPath_x                                               0x140C08D70   // Why?
#define __NewUIINI_x                                               0x1404A1A70   // Why?
#define __ProcessGameEvents_x                                      0x14023F170
#define __ProcessKeyboardEvents_x                                  0x1402F8940
#define __ProcessMouseEvents_x                                     0x140240660
#define __SaveColors_x                                             0x140166B90
#define __STMLToText_x                                             0x14054B400
#define __WndProc_x                                                0x1402F58C0
#define CMemoryMappedFile__SetFile_x                               0x14075BC20
#define DrawNetStatus_x                                            0x140288540
#define Util__FastTime_x                                           0x14051E530
#define __eq_delete_x                                              0x140626240
#define __eq_new_x                                                 0x14062633C
#define __CopyLayout_x                                             0x140276930
#define __ThrottleFrameRate_x                                      0x14022EC11
#define __ThrottleFrameRateEnd_x                                   0x14022EC71

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140307D80
#define CAAWnd__Update_x                                           0x140308080
#define CAAWnd__UpdateSelected_x                                   0x140309040

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14078C410
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C150

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x140171AD0
#define AltAdvManager__IsAbilityReady_x                            0x140171D50
#define AltAdvManager__GetAAById_x                                 0x1401713A0
#define AltAdvManager__CanTrainAbility_x                           0x1401711D0
#define AltAdvManager__CanSeeAbility_x                             0x140170E90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4360
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A5110
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A5320
#define CharacterZoneClient__CanUseItem_x                          0x1400B9740
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5C10
#define CharacterZoneClient__CastSpell_x                           0x1400A5CB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B5220
#define CharacterZoneClient__Cur_HP_x                              0x1400BAE20
#define CharacterZoneClient__Cur_Mana_x                            0x1400BAFE0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8C50
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C17C0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400D05B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA140
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8C20
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C32F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C2210
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA310
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A9C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C390
#define CharacterZoneClient__GetHPRegen_x                          0x1400C2920
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BAA90
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C3580
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA390
#define CharacterZoneClient__GetManaRegen_x                        0x1400C4350
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA5A0
#define CharacterZoneClient__GetModCap_x                           0x1400CBA90
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA640
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA850
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F530
#define CharacterZoneClient__HasSkill_x                            0x1400C72C0
#define CharacterZoneClient__HitBySpell_x                          0x1400AB2F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEAD0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400CB520
#define CharacterZoneClient__Max_Endurance_x                       0x1402A2530  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400CB860
#define CharacterZoneClient__Max_Mana_x                            0x1402A2720  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CBD20
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B20F0
#define CharacterZoneClient__SpellDuration_x                       0x1400B2CD0
#define CharacterZoneClient__TotalEffect_x                         0x1400B4010
#define CharacterZoneClient__UseSkill_x                            0x1400D1500


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403261F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140330410

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14032C340
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14032B3D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140332AC0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407EC5D8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403540A0
#define CChatWindowManager__InitContextMenu_x                      0x140354230
#define CChatWindowManager__FreeChatWindow_x                       0x1403532F0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14035AFF0
#define CChatWindowManager__CreateChatWindow_x                     0x140352C30

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D9620

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14035BF70
#define CChatWindow__Clear_x                                       0x14035CD80
#define CChatWindow__WndNotification_x                             0x14035DF20
#define CChatWindow__AddHistory_x                                  0x14035C880

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14055C4B0
#define CContextMenu__RemoveMenuItem_x                             0x14055C9D0
#define CContextMenu__RemoveAllMenuItems_x                         0x14055C9A0
#define CContextMenu__CheckMenuItem_x                              0x14055C810
#define CContextMenu__SetMenuItem_x                                0x14055C9F0
#define CContextMenu__AddSeparator_x                               0x14055C620

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14055D040
#define CContextMenuManager__RemoveMenu_x                          0x14055D5C0
#define CContextMenuManager__PopupMenu_x                           0x14055D340
#define CContextMenuManager__Flush_x                               0x14055D0C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403693D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405E9730
#define CChatService__GetFriendName_x                              0x1405E9740

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140558660
#define CComboWnd__Draw_x                                          0x140558760
#define CComboWnd__GetCurChoice_x                                  0x140558A40  // unused
#define CComboWnd__GetListRect_x                                   0x140558AE0
#define CComboWnd__InsertChoice_x                                  0x140558E20
#define CComboWnd__SetColors_x                                     0x1405591B0
#define CComboWnd__SetChoice_x                                     0x140559170
#define CComboWnd__GetItemCount_x                                  0x140558AD0
#define CComboWnd__GetCurChoiceText_x                              0x140558A80  // unused
#define CComboWnd__GetChoiceText_x                                 0x140558A10
#define CComboWnd__InsertChoiceAtIndex_x                           0x140558EE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403671F0
#define CContainerWnd__SetContainer_x                              0x1403B1100
#define CContainerWnd__vftable_x                                   0x1407BD198

// CDisplay
#define CDisplay__cameraType_x                                     0x140ADB31C
#define CDisplay__ZoneMainUI_x                                     0x140573C60
#define CDisplay__PreZoneMainUI_x                                  0x140163BB0
#define CDisplay__CleanGameUI_x                                    0x140156060
#define CDisplay__GetClickedActor_x                                0x14015A1F0
#define CDisplay__GetUserDefinedColor_x                            0x14015ACD0
#define CDisplay__InitCharSelectUI_x                               0x14015AF80
#define CDisplay__ReloadUI_x                                       0x140165E60
#define CDisplay__WriteTextHD2_x                                   0x14016CD40
#define CDisplay__TrueDistance_x                                   0x14016CA20
#define CDisplay__SetViewActor_x                                   0x140169380
#define CDisplay__GetFloorHeight_x                                 0x14015A450
#define CDisplay__ToggleScreenshotMode_x                           0x14016C530
#define CDisplay__RealRender_World_x                               0x140165280

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14057EFA0
#define CEditWnd__DrawCaret_x                                      0x14055FF10  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405603C0
#define CEditWnd__GetCaretPt_x                                     0x140560630  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140560670
#define CEditWnd__GetDisplayString_x                               0x1405608E0
#define CEditWnd__GetHorzOffset_x                                  0x140560B20
#define CEditWnd__GetLineForPrintableChar_x                        0x140560C70
#define CEditWnd__GetSelStartPt_x                                  0x140560F50  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140560DA0
#define CEditWnd__PointFromPrintableChar_x                         0x140561B80
#define CEditWnd__ReplaceSelection_x                               0x140561F30
#define CEditWnd__SelectableCharFromPoint_x                        0x1405623D0
#define CEditWnd__SetEditable_x                                    0x140562660
#define CEditWnd__SetWindowText_x                                  0x140562690

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022FBC0
#define CEverQuest__ClickedPlayer_x                                0x140225BC0
#define CEverQuest__CreateTargetIndicator_x                        0x140226480
#define CEverQuest__DoTellWindow_x                                 0x1400D9330 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D9BF0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402315F0
#define CEverQuest__dsp_chat_x                                     0x1400D8D70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14025B390
#define CEverQuest__Emote_x                                        0x140231FA0
#define CEverQuest__GetBodyTypeDesc_x                              0x140232D40
#define CEverQuest__GetClassDesc_x                                 0x140232DA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140233170
#define CEverQuest__GetDeityDesc_x                                 0x140233420
#define CEverQuest__GetLangDesc_x                                  0x140233850
#define CEverQuest__GetRaceDesc_x                                  0x140233BF0
#define CEverQuest__InterpretCmd_x                                 0x140235500
#define CEverQuest__LeftClickedOnPlayer_x                          0x14024A1C0
#define CEverQuest__LMouseUp_x                                     0x140236EA0
#define CEverQuest__RightClickedOnPlayer_x                         0x140247A20
#define CEverQuest__RMouseUp_x                                     0x1402411E0
#define CEverQuest__SetGameState_x                                 0x14024C6D0
#define CEverQuest__UPCNotificationFlush_x                         0x140251E20 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140236B20
#define CEverQuest__ReportSuccessfulHeal_x                         0x140242510
#define CEverQuest__ReportSuccessfulHit_x                          0x140243250

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140379870

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094680
#define CGuild__GetGuildName_x                                     0x1400946C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x14039B910

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14026C5A0
#define CHotButton__SetCheck_x                                     0x14026C870

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403AB130
#define CInvSlotMgr__MoveItem_x                                    0x1403AB2B0
#define CInvSlotMgr__SelectSlot_x                                  0x1403ACC10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A8B30
#define CInvSlot__SliderComplete_x                                 0x1403A9E20
#define CInvSlot__GetItemBase_x                                    0x1403A55C0
#define CInvSlot__UpdateItem_x                                     0x1403AA2D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403AD2D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403AE250

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403CE1D0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403D0BE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403CABE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403CC420
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403CD5E0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140491ED0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140493AA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404CCDD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403C7320

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14011B080

// CLabel
#define CLabel__UpdateText_x                                       0x1403D8090

// CListWnd
#define CListWnd__CListWnd_x                                       0x14052F6B0
#define CListWnd__dCListWnd_x                                      0x14052FAF0
#define CListWnd__vftable_x                                        0x1407EB9E0
#define CListWnd__AddColumn_x                                      0x140530190
#define CListWnd__AddColumn1_x                                     0x140530230
#define CListWnd__AddLine_x                                        0x140530390
#define CListWnd__AddString_x                                      0x140530920
#define CListWnd__CalculateFirstVisibleLine_x                      0x140531020
#define CListWnd__CalculateVSBRange_x                              0x140531300
#define CListWnd__ClearSel_x                                       0x1405314A0
#define CListWnd__ClearAllSel_x                                    0x140531440
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140531500
#define CListWnd__Compare_x                                        0x1405316C0
#define CListWnd__Draw_x                                           0x140531B90
#define CListWnd__DrawColumnSeparators_x                           0x140532740
#define CListWnd__DrawHeader_x                                     0x140532800
#define CListWnd__DrawItem_x                                       0x140532EE0
#define CListWnd__DrawLine_x                                       0x140533860
#define CListWnd__DrawSeparator_x                                  0x140533D20
#define CListWnd__EnableLine_x                                     0x140534140
#define CListWnd__EnsureVisible_x                                  0x1405341A0
#define CListWnd__ExtendSel_x                                      0x140534290
#define CListWnd__GetColumnMinWidth_x                              0x1405345C0
#define CListWnd__GetColumnWidth_x                                 0x140534640
#define CListWnd__GetCurSel_x                                      0x140534740
#define CListWnd__GetItemData_x                                    0x140534AC0
#define CListWnd__GetItemHeight_x                                  0x140534B00
#define CListWnd__GetItemRect_x                                    0x140534CC0
#define CListWnd__GetItemText_x                                    0x140534F60
#define CListWnd__GetSelList_x                                     0x1405351B0
#define CListWnd__GetSeparatorRect_x                               0x1405353A0
#define CListWnd__InsertLine_x                                     0x140536810
#define CListWnd__RemoveLine_x                                     0x140536E30
#define CListWnd__SetColors_x                                      0x140537200
#define CListWnd__SetColumnJustification_x                         0x140537220
#define CListWnd__SetColumnLabel_x                                 0x1405372A0
#define CListWnd__SetColumnWidth_x                                 0x140537440
#define CListWnd__SetCurSel_x                                      0x140537510
#define CListWnd__SetItemColor_x                                   0x140537780
#define CListWnd__SetItemData_x                                    0x140537820
#define CListWnd__SetItemText_x                                    0x140537A60
#define CListWnd__Sort_x                                           0x140537E60
#define CListWnd__ToggleSel_x                                      0x140537FD0
#define CListWnd__SetColumnsSizable_x                              0x140537490
#define CListWnd__SetItemWnd_x                                     0x140537B90
#define CListWnd__GetItemWnd_x                                     0x140535140
#define CListWnd__SetItemIcon_x                                    0x140537860
#define CListWnd__CalculateCustomWindowPositions_x                 0x140530DF0
#define CListWnd__SetVScrollPos_x                                  0x140537DC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403EAC50

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407C88C0
#define MapViewMap__Clear_x                                        0x1403EC7D0
#define MapViewMap__SetZoom_x                                      0x1403F2D90
#define MapViewMap__HandleLButtonDown_x                            0x1403EF8D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140414520  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14041AAF0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14041B2A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14041EAB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14041DE00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140422D60

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405C7750
#define CPacketScrambler__hton_x                                   0x1405C7740

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140555D30
#define CSidlManagerBase__FindAnimation1_x                         0x140555C70
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140556360
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140556110
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140555070
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140555000
#define CSidlManagerBase__CreateXWnd_x                             0x140554640

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140485470
#define CSidlManager__CreateXWnd_x                                 0x140485630

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14054CF80
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14054CE50
#define CSidlScreenWnd__ConvertToRes_x                             0x140579560 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14054D0A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14054C710
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14054C660
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14054C8D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14054D740
#define CSidlScreenWnd__EnableIniStorage_x                         0x14054D970
#define CSidlScreenWnd__GetChildItem_x                             0x14054DB10
#define CSidlScreenWnd__GetSidlPiece_x                             0x14054DD60
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14053F950 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14054E0D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14054E440
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14054ECF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14054F5E0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C34988
#define CSidlScreenWnd__StoreIniInfo_x                             0x14054FC10
#define CSidlScreenWnd__StoreIniVis_x                              0x140550400
#define CSidlScreenWnd__vftable_x                                  0x1407ECA48
#define CSidlScreenWnd__WndNotification_x                          0x140550450

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402E1480 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402E1880 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402E17C0
#define CSkillMgr__IsActivatedSkill_x                              0x1402E1C20
#define CSkillMgr__IsCombatSkill_x                                 0x1402E1C60

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14055E380
#define CSliderWnd__SetValue_x                                     0x14055EB90
#define CSliderWnd__SetNumTicks_x                                  0x14055EA10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14048BA50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140567140
#define CStmlWnd__CalculateHSBRange_x                              0x14053F320
#define CStmlWnd__CalculateVSBRange_x                              0x140568060
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140568AC0
#define CStmlWnd__ForceParseNow_x                                  0x140568B60
#define CStmlWnd__GetVisibleText_x                                 0x140569220
#define CStmlWnd__MakeStmlColorTag_x                               0x14056AF70
#define CStmlWnd__MakeWndNotificationTag_x                         0x14056AFB0
#define CStmlWnd__SetSTMLText_x                                    0x140571F80
#define CStmlWnd__StripFirstSTMLLines_x                            0x140572130
#define CStmlWnd__UpdateHistoryString_x                            0x1405724C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140563C30
#define CTabWnd__DrawCurrentPage_x                                 0x140563CD0
#define CTabWnd__DrawTab_x                                         0x1405640A0
#define CTabWnd__GetTabRect_x                                      0x140564700
#define CTabWnd__InsertPage_x                                      0x1405649D0
#define CTabWnd__RemovePage_x                                      0x140564C60
#define CTabWnd__SetPage_x                                         0x140564DC0
#define CTabWnd__UpdatePage_x                                      0x1405650C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140563830
#define CPageWnd__SetTabText_x                                     0x1405638A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBE0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DFF0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140539120
#define CTextureFont__DrawWrappedText1_x                           0x140539030
#define CTextureFont__DrawWrappedText2_x                           0x140539250
#define CTextureFont__GetTextExtent_x                              0x140539600
#define CTextureFont__GetHeight_x                                  0x1405395C0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140577CC0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14052C320

// CXStr
#define CXStr__gFreeLists_x                                        0x140A615E0
#define CXStr__gCXStrAccess_x                                      0x140C33F48

// CXWnd
#define CXWnd__BringToTop_x                                        0x14053AB60
#define CXWnd__ClrFocus_x                                          0x14053ADA0
#define CXWnd__Destroy_x                                           0x14053AEE0
#define CXWnd__DoAllDrawing_x                                      0x14053AFF0
#define CXWnd__DrawColoredRect_x                                   0x14053B7B0
#define CXWnd__DrawTooltip_x                                       0x14053CE40
#define CXWnd__DrawTooltipAtPoint_x                                0x14053CEF0
#define CXWnd__GetChildItem_x                                      0x14053D800
#define CXWnd__GetChildWndAt_x                                     0x14053D8C0
#define CXWnd__GetClientClipRect_x                                 0x14053DA30
#define CXWnd__GetRelativeRect_x                                   0x14053F450
#define CXWnd__GetScreenClipRect_x                                 0x14053F560
#define CXWnd__GetScreenRect_x                                     0x14053F6D0
#define CXWnd__GetTooltipRect_x                                    0x14053F850
#define CXWnd__IsActive_x                                          0x14053FDD0
#define CXWnd__IsDescendantOf_x                                    0x14053FE00
#define CXWnd__IsReallyVisible_x                                   0x14053FE70
#define CXWnd__IsType_x                                            0x14053FEB0
#define CXWnd__Minimize_x                                          0x14053FFB0
#define CXWnd__ProcessTransition_x                                 0x140540F90
#define CXWnd__Resize_x                                            0x1405410B0
#define CXWnd__Right_x                                             0x140541150
#define CXWnd__SetFocus_x                                          0x140541510
#define CXWnd__SetFont_x                                           0x140541560
#define CXWnd__SetKeyTooltip_x                                     0x140541670
#define CXWnd__SetMouseOver_x                                      0x1405417B0
#define CXWnd__SetParent_x                                         0x140541830
#define CXWnd__StartFade_x                                         0x140541C70
#define CXWnd__vftable_x                                           0x1407EC168
#define CXWnd__CXWnd_x                                             0x140539720
#define CXWnd__dCXWnd_x                                            0x14053A050

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14057E720

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140543190
#define CXWndManager__DrawCursor_x                                 0x140543470
#define CXWndManager__DrawWindows_x                                0x1405435A0
#define CXWndManager__GetKeyboardFlags_x                           0x140543C60
#define CXWndManager__HandleKeyboardMsg_x                          0x140543CA0
#define CXWndManager__RemoveWnd_x                                  0x140547120

// CDBStr
#define CDBStr__GetString_x                                        0x140154270

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405D0630

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A2130
#define CCharacterListWnd__EnterWorld_x                            0x1400A0E40
#define CCharacterListWnd__Quit_x                                  0x1400A2110
#define CCharacterListWnd__UpdateList_x                            0x1400A2E30

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14059FD20
#define ItemBase__CreateItemTagString_x                            0x1405A07B0
#define ItemBase__GetImageNum_x                                    0x1405A2C80
#define ItemBase__GetItemValue_x                                   0x1405A4740
#define ItemBase__IsEmpty_x                                        0x1405A6450
#define ItemBase__IsKeyRingItem_x                                  0x1405A6B50
#define ItemBase__ValueSellMerchant_x                              0x1405AAB80
#define ItemClient__CanDrop_x                                      0x14026EAB0
#define ItemClient__CanGoInBag_x                                   0x14026EBE0
#define ItemClient__CreateItemClient_x                             0x14026EEC0
#define ItemClient__dItemClient_x                                  0x14026E920

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x140173270
#define EQ_LoadingS__Array_x                                       0x140A4DA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405B6DF0
#define PcBase__GetCombatAbility_x                                 0x1405B7490
#define PcBase__GetCombatAbilityTimer_x                            0x1405B7530
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405B7C80
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405B8610
#define PcClient__AlertInventoryChanged_x                          0x14028FF20
#define PcClient__GetConLevel_x                                    0x140290470  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140292AC0
#define PcClient__HasLoreItem_x                                    0x140293BB0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402A0A80
#define PcZoneClient__RemoveMyAffect_x                             0x1402A35A0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401E0420  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401E05D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401E0700  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401E0640  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140217660  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014EA30

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140612D70
#define PlayerBase__CanSee1_x                                      0x140612E40
#define PlayerBase__GetVisibilityLineSegment_x                     0x140613370
#define PlayerBase__HasProperty_x                                  0x140613590
#define PlayerBase__IsTargetable_x                                 0x140613650
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402AF440
#define PlayerClient__GetPcClient_x                                0x1402B1B00
#define PlayerClient__PlayerClient_x                               0x1402A87C0
#define PlayerClient__SetNameSpriteState_x                         0x1402B4FA0
#define PlayerClient__SetNameSpriteTint_x                          0x1402B5F60
#define PlayerZoneClient__ChangeHeight_x                           0x1402C3FE0
#define PlayerZoneClient__DoAttack_x                               0x1402C4CA0
#define PlayerZoneClient__GetLevel_x                               0x1402C83D0
#define PlayerZoneClient__IsValidTeleport_x                        0x14021A410
#define PlayerZoneClient__LegalPlayerRace_x                        0x140162450

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402BDDD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402BDE00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402BDEB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402BD7C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406129F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140273E80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140273A80
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140273AF0
#define KeypressHandler__ClearCommandStateArray_x                  0x140273E10  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140273FA0
#define KeypressHandler__HandleKeyUp_x                             0x140274080
#define KeypressHandler__SaveKeymapping_x                          0x140273D20  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405CE240  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405C8DF0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140299220  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14029EAC0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402A1160
#define PcZoneClient__RemovePetEffect_x                            0x1402A36A0
#define PcZoneClient__HasAlternateAbility_x                        0x1402A1E50
#define PcZoneClient__CanEquipItem_x                               0x14029CDE0
#define PcZoneClient__GetItemByID_x                                0x14029FB50
#define PcZoneClient__RemoveBuffEffect_x                           0x1402A3420
#define PcZoneClient__BandolierSwap_x                              0x14029BDC0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402A10B0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021EED0

// IconCache
#define IconCache__GetIcon_x                                       0x14036F520

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140366070
#define CContainerMgr__CloseContainer_x                            0x1403659B0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403663E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14044C1D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140266F00

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403DECF0
#define CLootWnd__RequestLootSlot_x                                0x1403DFCF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401A2DD0
#define EQ_Spell__SpellAffects_x                                   0x1401A4080
#define EQ_Spell__SpellAffectBase_x                                0x1401A3FE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAA30
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA9E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401A3CA0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A3860
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401A3140

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930B0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404A5850  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404A5890
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404A4DA0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404A4360

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404AC920  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14014B280
#define CTaskManager__GetTaskStatus_x                              0x14014B390
#define CTaskManager__GetElementDescription_x                      0x14014AF10

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401A1130
#define EqSoundManager__PlayScriptMp3_x                            0x14019FF30
#define EqSoundManager__SoundAssistPlay_x                          0x1402E6850  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402E6B80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140562E90
#define CTextureAnimation__SetCurCell_x                            0x1405631A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140265190

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405E7190
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405E7210
#define CharacterBase__IsExpansionFlag_x                           0x1401C2C80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140346150
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140346AA0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140347EE0

// messages
#define msg_spell_worn_off_x                                       0x1401D6EA0
#define msg_new_text_x                                             0x1401D2840
#define __msgTokenTextParam_x                                      0x1401CA630
#define msgTokenText_x                                             0x1401CA550

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E8210
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E8130

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406217F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403D87D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14036B680
#define CCursorAttachment__AttachToCursor1_x                       0x14036A1C0
#define CCursorAttachment__Deactivate_x                            0x14036BB80

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405760D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405762C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405762D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140116500
#define CFindItemWnd__Update_x                                     0x140116CD0
#define CFindItemWnd__PickupSelectedItem_x                         0x140110970

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011FAB0
#define LootFiltersManager__GetItemFilterData_x                    0x1401205C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140120E60
#define LootFiltersManager__SetItemLootFilter_x                    0x140121110

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140430040

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140625BC0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402E0FE0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140362490

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405EB1B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405EB0A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140384D40
#define CGroupWnd__UpdateDisplay_x                                 0x140384AE0

// ItemBase
#define ItemBase__IsLore_x                                         0x1405A6C20
#define ItemBase__IsLoreEquipped_x                                 0x1405A6CB0

#define MultipleItemMoveManager__ProcessMove_x                     0x140286790

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402177C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140217750
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140217790

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB780

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400F1780
#define FactionManagerClient__HandleFactionMessage_x               0x1400F1B30
#define FactionManagerClient__GetFactionStanding_x                 0x1400F0F50
#define FactionManagerClient__GetMaxFaction_x                      0x1400F0F50
#define FactionManagerClient__GetMinFaction_x                      0x1400F0E00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FCE50

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x14017BB50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x14017AED0
#define CAltAbilityData__GetMercCurrentRank_x                      0x14017B970  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x14017B8F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402EC900

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402DB780

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401E0790

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140575250

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056010

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402FDDE0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
