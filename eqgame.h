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

#define __ClientDate                                               20221130u
#define __ExpectedVersionDate                                     "Nov 30 2022"
#define __ExpectedVersionTime                                     "10:26:27"
#define __ActualVersionDate_x                                      0x1407A60C8
#define __ActualVersionTime_x                                      0x1407A60B8
#define __ActualVersionBuild_x                                     0x1407943B8

// Memory Protection
#define __MemChecker0_x                                            0x140273DF0
#define __MemChecker1_x                                            0x1405129D0
#define __MemChecker4_x                                            0x140243BF0
#define __EncryptPad0_x                                            0x140A4F610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B8AA90
#define instEQZoneInfo_x                                           0x140B8AC84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DF4B0
#define __gfMaxZoomCameraDistance_x                                0x14079C3F0
#define __gfMaxCameraDistance_x                                    0x1407D7198
#define __CurrentSocial_x                                          0x14090B900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A46F80
#define g_eqCommandStates_x                                        0x140A47FF0
#define __CommandList_x                                            0x140A48230
#define __ScreenMode_x                                             0x140AD206C
#define __gWorld_x                                                 0x140B83568
#define __gpbCommandEvent_x                                        0x140B82F8C
#define __ServerHost_x                                             0x140B83178
#define __Guilds_x                                                 0x140B89640
#define __MouseEventTime_x                                         0x140BF5EF8
#define DI8__Mouse_Check_x                                         0x140BFAB60
#define __heqmain_x                                                0x140BFD008
#define DI8__Mouse_x                                               0x140BFD020
#define __HWnd_x                                                   0x140BFD028
#define __Mouse_x                                                  0x140BFA054
#define DI8__Main_x                                                0x140BFA0F0
#define DI8__Keyboard_x                                            0x140BFA0F8
#define __LoginName_x                                              0x140BFA7DC
#define __CurrentMapLabel_x                                        0x140C0FFC0
#define __LabelCache_x                                             0x140C10BD0
#define __SubscriptionType_x                                       0x140C459C0
#define Teleport_Table_Size_x                                      0x140B83014
#define Teleport_Table_x                                           0x140B835A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B859D0
#define pinstActiveBanker_x                                        0x140B834B0
#define pinstActiveCorpse_x                                        0x140B834A0
#define pinstActiveGMaster_x                                       0x140B834A8
#define pinstActiveMerchant_x                                      0x140B83498
#define pinstAltAdvManager_x                                       0x140AD31F8
#define pinstCEverQuest_x                                          0x140BFA058
#define pinstCamActor_x                                            0x140AD2058
#define pinstCDBStr_x                                              0x140AD2000
#define pinstCDisplay_x                                            0x140B83588
#define pinstControlledPlayer_x                                    0x140B83540
#define pinstCResolutionHandler_x                                  0x14127E560
#define pinstCSidlManager_x                                        0x140C21C10
#define pinstCXWndManager_x                                        0x140C21C18
#define instDynamicZone_x                                          0x140B89500 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B8954E
#define instExpeditionName_x                                       0x140B8958E
#define pinstDZMember_x                                            0x140B89618
#define pinstDZTimerInfo_x                                         0x140B89620
#define pinstEqLogin_x                                             0x140BFA120
#define instTribute_x                                              0x140A42800
#define pinstEQSoundManager_x                                      0x140AD3578
#define pinstEQSpellStrings_x                                      0x140AB6C30
#define pinstSGraphicsEngine_x                                     0x14127E2F8
#define pinstLocalPC_x                                             0x140B83580
#define pinstLocalPlayer_x                                         0x140B83490
#define pinstCMercenaryClientManager_x                             0x140BF77A8
#define pinstModelPlayer_x                                         0x140B834C0
#define pinstRenderInterface_x                                     0x14127E310
#define pinstSkillMgr_x                                            0x140BF9430
#define pinstSpawnManager_x                                        0x140BF7B60
#define pinstSpellManager_x                                        0x140BF9578
#define pinstStringTable_x                                         0x140B83590
#define pinstSwitchManager_x                                       0x140B82E90
#define pinstTarget_x                                              0x140B83538
#define pinstTaskMember_x                                          0x140A427F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B83548
#define pinstTradeTarget_x                                         0x140B834B8
#define instTributeActive_x                                        0x140A42829
#define pinstViewActor_x                                           0x140AD2050
#define pinstWorldData_x                                           0x140B859C0
#define pinstPlayerPath_x                                          0x140BF7B88
#define pinstTargetIndicator_x                                     0x140BF9628
#define EQObject_Top_x                                             0x140B83560

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C0D118
#define pinstCContainerMgr_x                                       0x140AD21A8
#define pinstCContextMenuManager_x                                 0x140C21BC0
#define pinstCInvSlotMgr_x                                         0x140AD2160
#define pinstCItemDisplayManager_x                                 0x140C0FB90
#define pinstCPopupWndManager_x                                    0x140C10420
#define pinstCSpellDisplayMgr_x                                    0x140C10AB0
#define pinstCTaskManager_x                                        0x14090BC40
#define pinstEQSuiteTextureLoader_x                                0x140A58CE0
#define pinstItemIconCache_x                                       0x140C0D478
#define pinstLootFiltersManager_x                                  0x140AD1A18

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401FE350
#define __CastRay2_x                                               0x1401FE060
#define __ConvertItemTags_x                                        0x1401FE750
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153B10
#define __DoesFileExist_x                                          0x1405171B0
#define __EQGetTime_x                                              0x140512F80
#define __ExecuteCmd_x                                             0x1401D73D0
#define __FixHeading_x                                             0x140616DD0
#define __FlushDxKeyboard_x                                        0x1402EF140
#define __get_bearing_x                                            0x1402079A0
#define __get_melee_range_x                                        0x140207A90
#define __GetAnimationCache_x                                      0x140365FC0
#define __GetGaugeValueFromEQ_x                                    0x14048B1F0
#define __GetLabelFromEQ_x                                         0x14048C7A0
#define __GetXTargetType_x                                         0x1406180B0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140616E50
#define __HelpPath_x                                               0x140BF5DC0   // Why?
#define __NewUIINI_x                                               0x140497940   // Why?
#define __ProcessGameEvents_x                                      0x140239430
#define __ProcessKeyboardEvents_x                                  0x1402F0940
#define __ProcessMouseEvents_x                                     0x14023A860
#define __SaveColors_x                                             0x1401637D0
#define __STMLToText_x                                             0x140540DF0
#define __WndProc_x                                                0x1402ED8C0
#define CMemoryMappedFile__SetFile_x                               0x1407528E0
#define DrawNetStatus_x                                            0x1402819C0
#define Util__FastTime_x                                           0x140513C80
#define __eq_delete_x                                              0x14061CEF0
#define __eq_new_x                                                 0x14061CFEC
#define __CopyLayout_x                                             0x1402702B0
#define __ThrottleFrameRate_x                                      0x1402291E1
#define __ThrottleFrameRateEnd_x                                   0x140229241

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FFE20
#define CAAWnd__Update_x                                           0x140300120
#define CAAWnd__UpdateSelected_x                                   0x1403010E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140783420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C240

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E4C0
#define AltAdvManager__IsAbilityReady_x                            0x14016E740
#define AltAdvManager__GetAAById_x                                 0x14016DD90
#define AltAdvManager__CanTrainAbility_x                           0x14016DBC0
#define AltAdvManager__CanSeeAbility_x                             0x14016D880

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F40
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CF0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4F00
#define CharacterZoneClient__CanUseItem_x                          0x1400B8A90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57F0
#define CharacterZoneClient__CastSpell_x                           0x1400A5890
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4C00
#define CharacterZoneClient__Cur_HP_x                              0x1400BA0C0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA280
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8890
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C02C0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE750  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D80
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8010
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DE0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0D10
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2B0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1410
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D70
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1FF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FD0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A80
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1E0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA280
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA490
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F150
#define CharacterZoneClient__HasSkill_x                            0x1400C5690
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE7A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98F0
#define CharacterZoneClient__Max_Endurance_x                       0x14029A380  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C30
#define CharacterZoneClient__Max_Mana_x                            0x14029A570  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C80
#define CharacterZoneClient__SpellDuration_x                       0x1400B2860
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A40
#define CharacterZoneClient__UseSkill_x                            0x1400CF6A0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031DFE0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140328190

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140324110
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403231A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14032A850

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E38E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034B0F0
#define CChatWindowManager__InitContextMenu_x                      0x14034B280
#define CChatWindowManager__FreeChatWindow_x                       0x14034A340
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140352000
#define CChatWindowManager__CreateChatWindow_x                     0x140349C80

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7550

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140352F70
#define CChatWindow__Clear_x                                       0x140353D80
#define CChatWindow__WndNotification_x                             0x140354F00
#define CChatWindow__AddHistory_x                                  0x140353880

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140551D70
#define CContextMenu__RemoveMenuItem_x                             0x140552290
#define CContextMenu__RemoveAllMenuItems_x                         0x140552260
#define CContextMenu__CheckMenuItem_x                              0x1405520D0
#define CContextMenu__SetMenuItem_x                                0x1405522B0
#define CContextMenu__AddSeparator_x                               0x140551EE0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140552900
#define CContextMenuManager__RemoveMenu_x                          0x140552E80
#define CContextMenuManager__PopupMenu_x                           0x140552C00
#define CContextMenuManager__Flush_x                               0x140552980
#define CContextMenuManager__CreateDefaultMenu_x                   0x140360010

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405DF890
#define CChatService__GetFriendName_x                              0x1405DF8A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054DF10
#define CComboWnd__Draw_x                                          0x14054E010
#define CComboWnd__GetCurChoice_x                                  0x14054E2F0  // unused
#define CComboWnd__GetListRect_x                                   0x14054E390
#define CComboWnd__InsertChoice_x                                  0x14054E6D0
#define CComboWnd__SetColors_x                                     0x14054EA60
#define CComboWnd__SetChoice_x                                     0x14054EA20
#define CComboWnd__GetItemCount_x                                  0x14054E380
#define CComboWnd__GetCurChoiceText_x                              0x14054E330  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054E2C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054E790

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035E080
#define CContainerWnd__SetContainer_x                              0x14035EE30
#define CContainerWnd__vftable_x                                   0x1407B4008

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD2424
#define CDisplay__ZoneMainUI_x                                     0x1405696D0
#define CDisplay__PreZoneMainUI_x                                  0x140160760
#define CDisplay__CleanGameUI_x                                    0x140152C10
#define CDisplay__GetClickedActor_x                                0x140156DA0
#define CDisplay__GetUserDefinedColor_x                            0x140157880
#define CDisplay__InitCharSelectUI_x                               0x140157B30
#define CDisplay__ReloadUI_x                                       0x140162A80
#define CDisplay__WriteTextHD2_x                                   0x1401699B0
#define CDisplay__TrueDistance_x                                   0x140169690
#define CDisplay__SetViewActor_x                                   0x140165FC0
#define CDisplay__GetFloorHeight_x                                 0x140157000
#define CDisplay__ToggleScreenshotMode_x                           0x1401691A0
#define CDisplay__RealRender_World_x                               0x140161E30

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140574BE0
#define CEditWnd__DrawCaret_x                                      0x1405557C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140555C80
#define CEditWnd__GetCaretPt_x                                     0x140555F00  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140555F40
#define CEditWnd__GetDisplayString_x                               0x1405561B0
#define CEditWnd__GetHorzOffset_x                                  0x1405563F0
#define CEditWnd__GetLineForPrintableChar_x                        0x140556540
#define CEditWnd__GetSelStartPt_x                                  0x140556820  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140556670
#define CEditWnd__PointFromPrintableChar_x                         0x1405573D0
#define CEditWnd__ReplaceSelection_x                               0x140557780
#define CEditWnd__SelectableCharFromPoint_x                        0x140557C20
#define CEditWnd__SetEditable_x                                    0x140557EB0
#define CEditWnd__SetWindowText_x                                  0x140557EE0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022A190
#define CEverQuest__ClickedPlayer_x                                0x140220320
#define CEverQuest__CreateTargetIndicator_x                        0x140220A80
#define CEverQuest__DoTellWindow_x                                 0x1400D7260 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B20 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022BBC0
#define CEverQuest__dsp_chat_x                                     0x1400D6CA0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402552C0
#define CEverQuest__Emote_x                                        0x14022C520
#define CEverQuest__GetBodyTypeDesc_x                              0x14022D2C0
#define CEverQuest__GetClassDesc_x                                 0x14022D320
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022D6F0
#define CEverQuest__GetDeityDesc_x                                 0x14022D9A0
#define CEverQuest__GetLangDesc_x                                  0x14022DDD0
#define CEverQuest__GetRaceDesc_x                                  0x14022E170
#define CEverQuest__InterpretCmd_x                                 0x14022F9D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140244270
#define CEverQuest__LMouseUp_x                                     0x140231370
#define CEverQuest__RightClickedOnPlayer_x                         0x140241C10
#define CEverQuest__RMouseUp_x                                     0x14023B3E0
#define CEverQuest__SetGameState_x                                 0x140246760
#define CEverQuest__UPCNotificationFlush_x                         0x14024BDD0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140230FF0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023C710
#define CEverQuest__ReportSuccessfulHit_x                          0x14023D450

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140370340

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094790
#define CGuild__GetGuildName_x                                     0x1400947D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140392110

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402660B0
#define CHotButton__SetCheck_x                                     0x140266340

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A1F10
#define CInvSlotMgr__MoveItem_x                                    0x1403A2060
#define CInvSlotMgr__SelectSlot_x                                  0x1403A3A20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14039FB80
#define CInvSlot__SliderComplete_x                                 0x1403A0DB0
#define CInvSlot__GetItemBase_x                                    0x14039BC60
#define CInvSlot__UpdateItem_x                                     0x1403A1210

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A4080
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A4BD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C4620
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C6F40
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C14B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C2B90
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C3A70

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140487ED0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140489AA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C2530

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BDC50

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117F90

// CLabel
#define CLabel__UpdateText_x                                       0x1403CE2F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140524E00
#define CListWnd__dCListWnd_x                                      0x140525240
#define CListWnd__vftable_x                                        0x1407E2CD0
#define CListWnd__AddColumn_x                                      0x1405258E0
#define CListWnd__AddColumn1_x                                     0x140525980
#define CListWnd__AddLine_x                                        0x140525AE0
#define CListWnd__AddString_x                                      0x140526070
#define CListWnd__CalculateFirstVisibleLine_x                      0x140526770
#define CListWnd__CalculateVSBRange_x                              0x140526A50
#define CListWnd__ClearSel_x                                       0x140526C00
#define CListWnd__ClearAllSel_x                                    0x140526BA0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140526C60
#define CListWnd__Compare_x                                        0x140526E20
#define CListWnd__Draw_x                                           0x1405272F0
#define CListWnd__DrawColumnSeparators_x                           0x140527E90
#define CListWnd__DrawHeader_x                                     0x140527F50
#define CListWnd__DrawItem_x                                       0x140528610
#define CListWnd__DrawLine_x                                       0x140528F90
#define CListWnd__DrawSeparator_x                                  0x140529450
#define CListWnd__EnableLine_x                                     0x140529870
#define CListWnd__EnsureVisible_x                                  0x1405298D0
#define CListWnd__ExtendSel_x                                      0x1405299D0
#define CListWnd__GetColumnMinWidth_x                              0x140529D00
#define CListWnd__GetColumnWidth_x                                 0x140529D80
#define CListWnd__GetCurSel_x                                      0x140529E80
#define CListWnd__GetItemData_x                                    0x14052A200
#define CListWnd__GetItemHeight_x                                  0x14052A240
#define CListWnd__GetItemRect_x                                    0x14052A400
#define CListWnd__GetItemText_x                                    0x14052A6A0
#define CListWnd__GetSelList_x                                     0x14052A8F0
#define CListWnd__GetSeparatorRect_x                               0x14052AAE0
#define CListWnd__InsertLine_x                                     0x14052BF60
#define CListWnd__RemoveLine_x                                     0x14052C580
#define CListWnd__SetColors_x                                      0x14052C950
#define CListWnd__SetColumnJustification_x                         0x14052C970
#define CListWnd__SetColumnLabel_x                                 0x14052C9F0
#define CListWnd__SetColumnWidth_x                                 0x14052CB90
#define CListWnd__SetCurSel_x                                      0x14052CC60
#define CListWnd__SetItemColor_x                                   0x14052CED0
#define CListWnd__SetItemData_x                                    0x14052CF70
#define CListWnd__SetItemText_x                                    0x14052D1B0
#define CListWnd__Sort_x                                           0x14052D5C0
#define CListWnd__ToggleSel_x                                      0x14052D730
#define CListWnd__SetColumnsSizable_x                              0x14052CBE0
#define CListWnd__SetItemWnd_x                                     0x14052D2E0
#define CListWnd__GetItemWnd_x                                     0x14052A880
#define CListWnd__SetItemIcon_x                                    0x14052CFB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140526540
#define CListWnd__SetVScrollPos_x                                  0x14052D520

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E0C10

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BF740
#define MapViewMap__Clear_x                                        0x1403E2780
#define MapViewMap__SetZoom_x                                      0x1403E8D40
#define MapViewMap__HandleLButtonDown_x                            0x1403E5880

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14040A2A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14040FE60
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140411E80
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140413C90
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404130B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140417A40

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BC620
#define CPacketScrambler__hton_x                                   0x1405BC610

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054B5F0
#define CSidlManagerBase__FindAnimation1_x                         0x14054B530
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054BC20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054B9D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14054A930
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14054A8C0
#define CSidlManagerBase__CreateXWnd_x                             0x140549F20

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14047A6B0
#define CSidlManager__CreateXWnd_x                                 0x14047A870

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140542980
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140542860
#define CSidlScreenWnd__ConvertToRes_x                             0x14056F190 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140542AB0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140542100
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140542050
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140542320
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140543080
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405432B0
#define CSidlScreenWnd__GetChildItem_x                             0x140543450
#define CSidlScreenWnd__GetSidlPiece_x                             0x140543670
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140535030 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405439E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140543D50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140544610
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140544EC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C21A68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405454E0
#define CSidlScreenWnd__StoreIniVis_x                              0x140545CE0
#define CSidlScreenWnd__vftable_x                                  0x1407E3D48
#define CSidlScreenWnd__WndNotification_x                          0x140545D30

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D8090 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D8490 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D83D0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D8830
#define CSkillMgr__IsCombatSkill_x                                 0x1402D8870

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404979B0
#define CSliderWnd__SetValue_x                                     0x140554440
#define CSliderWnd__SetNumTicks_x                                  0x1405542C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140481B80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055CB50
#define CStmlWnd__CalculateHSBRange_x                              0x140534A40
#define CStmlWnd__CalculateVSBRange_x                              0x14055DA80
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055E4F0
#define CStmlWnd__ForceParseNow_x                                  0x14055E590
#define CStmlWnd__GetVisibleText_x                                 0x14055EC70
#define CStmlWnd__MakeStmlColorTag_x                               0x140560A00
#define CStmlWnd__MakeWndNotificationTag_x                         0x140560A40
#define CStmlWnd__SetSTMLText_x                                    0x140567A20
#define CStmlWnd__StripFirstSTMLLines_x                            0x140567BD0
#define CStmlWnd__UpdateHistoryString_x                            0x140567F60

// CTabWnd
#define CTabWnd__Draw_x                                            0x140559650
#define CTabWnd__DrawCurrentPage_x                                 0x1405596F0
#define CTabWnd__DrawTab_x                                         0x140559AC0
#define CTabWnd__GetTabRect_x                                      0x14055A120
#define CTabWnd__InsertPage_x                                      0x14055A3F0
#define CTabWnd__RemovePage_x                                      0x14055A670
#define CTabWnd__SetPage_x                                         0x14055A7D0
#define CTabWnd__UpdatePage_x                                      0x14055AAD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140559070
#define CPageWnd__SetTabText_x                                     0x1405590E0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCD0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E0E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052E890
#define CTextureFont__DrawWrappedText1_x                           0x14052E7A0
#define CTextureFont__DrawWrappedText2_x                           0x14052E9C0
#define CTextureFont__GetTextExtent_x                              0x14052ED70
#define CTextureFont__GetHeight_x                                  0x14052ED30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056D8F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140521A70

// CXStr
#define CXStr__gFreeLists_x                                        0x140A58660
#define CXStr__gCXStrAccess_x                                      0x140C21028

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405302F0
#define CXWnd__ClrFocus_x                                          0x140530530
#define CXWnd__Destroy_x                                           0x140530670
#define CXWnd__DoAllDrawing_x                                      0x140530780
#define CXWnd__DrawColoredRect_x                                   0x140530F30
#define CXWnd__DrawTooltip_x                                       0x1405325A0
#define CXWnd__DrawTooltipAtPoint_x                                0x140532650
#define CXWnd__GetChildItem_x                                      0x140532F50
#define CXWnd__GetChildWndAt_x                                     0x140533010
#define CXWnd__GetClientClipRect_x                                 0x140533170
#define CXWnd__GetRelativeRect_x                                   0x140534B50
#define CXWnd__GetScreenClipRect_x                                 0x140534C60
#define CXWnd__GetScreenRect_x                                     0x140534DB0
#define CXWnd__GetTooltipRect_x                                    0x140534F30
#define CXWnd__IsActive_x                                          0x1405354B0
#define CXWnd__IsDescendantOf_x                                    0x1405354E0
#define CXWnd__IsReallyVisible_x                                   0x140535550
#define CXWnd__IsType_x                                            0x140535590
#define CXWnd__Minimize_x                                          0x140535690
#define CXWnd__ProcessTransition_x                                 0x1405366D0
#define CXWnd__Refade_x                                            0x1405367D0
#define CXWnd__Resize_x                                            0x1405367E0
#define CXWnd__Right_x                                             0x140536880
#define CXWnd__SetFocus_x                                          0x140536C50
#define CXWnd__SetFont_x                                           0x140536CA0
#define CXWnd__SetKeyTooltip_x                                     0x140536DB0
#define CXWnd__SetMouseOver_x                                      0x140536EF0
#define CXWnd__SetParent_x                                         0x140536F70
#define CXWnd__StartFade_x                                         0x1405373B0
#define CXWnd__vftable_x                                           0x1407E3458
#define CXWnd__CXWnd_x                                             0x14052EE90
#define CXWnd__dCXWnd_x                                            0x14052F7E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140574360

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140538BF0
#define CXWndManager__DrawWindows_x                                0x140538D20
#define CXWndManager__GetKeyboardFlags_x                           0x1405393E0
#define CXWndManager__HandleKeyboardMsg_x                          0x140539420
#define CXWndManager__RemoveWnd_x                                  0x14053C850

// CDBStr
#define CDBStr__GetString_x                                        0x140150E20

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C5500

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1D10
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A40
#define CCharacterListWnd__Quit_x                                  0x1400A1CF0
#define CCharacterListWnd__UpdateList_x                            0x1400A2A10

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405956A0
#define ItemBase__CreateItemTagString_x                            0x140596090
#define ItemBase__GetImageNum_x                                    0x140598270
#define ItemBase__GetItemValue_x                                   0x14059A190
#define ItemBase__IsEmpty_x                                        0x14059BCD0
#define ItemBase__IsKeyRingItem_x                                  0x14059C3E0
#define ItemBase__ValueSellMerchant_x                              0x1405A0770
#define ItemClient__CanDrop_x                                      0x140268470
#define ItemClient__CanGoInBag_x                                   0x1402685A0
#define ItemClient__CreateItemClient_x                             0x140268860
#define ItemClient__dItemClient_x                                  0x1402682D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016FC60
#define EQ_LoadingS__Array_x                                       0x140A44A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405AC210
#define PcBase__GetCombatAbility_x                                 0x1405AC860
#define PcBase__GetCombatAbilityTimer_x                            0x1405AC900
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405AD010
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405AD880
#define PcClient__AlertInventoryChanged_x                          0x140289020
#define PcClient__GetConLevel_x                                    0x140289510  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028BDD0
#define PcClient__HasLoreItem_x                                    0x14028CE50
#define PcZoneClient__GetItemRecastTimer_x                         0x140298D30
#define PcZoneClient__RemoveMyAffect_x                             0x14029B3D0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DBA70  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DBAE0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DBBF0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DBB50  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140211EF0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B720

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406096E0
#define PlayerBase__CanSee1_x                                      0x1406097B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140609CE0
#define PlayerBase__HasProperty_x                                  0x140609F00
#define PlayerBase__IsTargetable_x                                 0x140609FC0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A6E60
#define PlayerClient__GetPcClient_x                                0x1402A93F0
#define PlayerClient__PlayerClient_x                               0x1402A01D0
#define PlayerClient__SetNameSpriteState_x                         0x1402AC820
#define PlayerClient__SetNameSpriteTint_x                          0x1402AD7C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402BB370
#define PlayerZoneClient__DoAttack_x                               0x1402BC030
#define PlayerZoneClient__GetLevel_x                               0x1402BF5A0
#define PlayerZoneClient__IsValidTeleport_x                        0x140214CA0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015F000

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B5160  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B5190  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B5240
#define PlayerManagerClient__CreatePlayer_x                        0x1402B4B50
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140609360

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026D7F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026D3F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026D460
#define KeypressHandler__ClearCommandStateArray_x                  0x14026D780  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026D910
#define KeypressHandler__HandleKeyUp_x                             0x14026D9F0
#define KeypressHandler__SaveKeymapping_x                          0x14026D690  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C3110  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BDCC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402923B0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140297370
#define PcZoneClient__GetPcSkillLimit_x                            0x140299290
#define PcZoneClient__RemovePetEffect_x                            0x14029B4D0
#define PcZoneClient__HasAlternateAbility_x                        0x140299D00
#define PcZoneClient__CanEquipItem_x                               0x140295740
#define PcZoneClient__GetItemByID_x                                0x1402982E0
#define PcZoneClient__RemoveBuffEffect_x                           0x14029B280
#define PcZoneClient__BandolierSwap_x                              0x140294900
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402991E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140219760

// IconCache
#define IconCache__GetIcon_x                                       0x140365FF0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035CE60
#define CContainerMgr__CloseContainer_x                            0x14035C820
#define CContainerMgr__OpenExperimentContainer_x                   0x14035D1C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140441860

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140260DE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D4E60
#define CLootWnd__RequestLootSlot_x                                0x1403D5DC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019E790
#define EQ_Spell__SpellAffects_x                                   0x14019FA40
#define EQ_Spell__SpellAffectBase_x                                0x14019F9A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA670
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA620
#define EQ_Spell__IsSPAStacking_x                                  0x14019F660
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019F220
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019EB00

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400931C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049B700  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049B740
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049AC50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14049A200

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A2880  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401480D0
#define CTaskManager__GetTaskStatus_x                              0x1401481E0
#define CTaskManager__GetElementDescription_x                      0x140147D60

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019CAF0
#define EqSoundManager__PlayScriptMp3_x                            0x14019B8F0
#define EqSoundManager__SoundAssistPlay_x                          0x1402DE870  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DEBA0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405586E0
#define CTextureAnimation__SetCurCell_x                            0x1405589F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025F0A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DD3B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DD430
#define CharacterBase__IsExpansionFlag_x                           0x1401BE6D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033D230
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033DB70
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033EFB0

// messages
#define msg_spell_worn_off_x                                       0x1401D2670
#define msg_new_text_x                                             0x1401CE0C0
#define __msgTokenTextParam_x                                      0x1401C5F10
#define msgTokenText_x                                             0x1401C5E30

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E0230
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E0150

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140618490

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CEA30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140362190
#define CCursorAttachment__AttachToCursor1_x                       0x140360DE0
#define CCursorAttachment__Deactivate_x                            0x140362690

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056BB40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056BD30
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056BD40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113410
#define CFindItemWnd__Update_x                                     0x140113BE0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E320

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C730
#define LootFiltersManager__GetItemFilterData_x                    0x14011D250
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DAF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011DDA0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140424CD0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061C860
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D7BF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140359430

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405E1320  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405E1210  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037B770
#define CGroupWnd__UpdateDisplay_x                                 0x14037B510

// ItemBase
#define ItemBase__IsLore_x                                         0x14059C4B0
#define ItemBase__IsLoreEquipped_x                                 0x14059C610

#define MultipleItemMoveManager__ProcessMove_x                     0x14027FE00

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140212050
#define EQPlacedItemManager__GetItemByGuid_x                       0x140211FE0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140212020

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2640

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF370
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF720
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB40
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB40
#define FactionManagerClient__GetMinFaction_x                      0x1400EE9F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401784E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177860
#define CAltAbilityData__GetMercCurrentRank_x                      0x140178300  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140178280  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E4920

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2640

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DBCE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056ACC0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F5E70

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
