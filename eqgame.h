/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

#define __ClientDate                                               20220414u
#define __ExpectedVersionDate                                     "Apr 14 2022"
#define __ExpectedVersionTime                                     "16:55:49"
#define __ActualVersionDate_x                                      0x1407903E0
#define __ActualVersionTime_x                                      0x1407903D0
#define __ActualVersionBuild_x                                     0x14077E5D8

// Memory Protection
#define __MemChecker0_x                                            0x14026BD00
#define __MemChecker1_x                                            0x140501990
#define __MemChecker4_x                                            0x14023BCE0
#define __EncryptPad0_x                                            0x140A381D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B73610
#define __ScreenX_x                                                0x140B73620 // flip flopped?
#define __ScreenY_x                                                0x140B73624
#define __ScreenXMax_x                                             0x140B73628
#define __ScreenYMax_x                                             0x140B7362C
#define __InChatMode_x                                             0x140B73658
#define __RunWalkState_x                                           0x140B7365C
#define DI8__Mouse_Copy_x                                          0x140B7366C
#define __MouseLook_x                                              0x140B736DD
#define __NetStatusToggle_x                                        0x140B736DC
#define __pulAutoRun_x                                             0x140B736F8
#define __Clicks_x                                                 0x140B7370C
#define __RMouseHeldTime_x                                         0x140B73760 // EverQuest.rMouseDown
#define __LMouseHeldTime_x                                         0x140B73764 // EverQuest.lMouseDown
#define instEQZoneInfo_x                                           0x140B73804
#define __ZoneType_x                                               0x140B739C8 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140B73AE6 // EverQuest.isPressedShift
#define __AutoSkillArray_x                                         0x140B74114
#define __RangeAttackReady_x                                       0x140B73F54
#define __AttackOnAssist_x                                         0x140B740A8
#define __ShowNames_x                                              0x140B740C0
#define __PCNames_x                                                0x140B74238
#define __UseTellWindows_x                                         0x140B742A9
#define __pulForward_x                                             0x140B74302 // keyDwn[NUM_COMMANDS_ALL] NUM_COMMANDS_ALL = 546
#define __pulBackward_x                                            0x140B74303
#define __pulTurnRight_x                                           0x140B74304
#define __pulTurnLeft_x                                            0x140B74305
#define __pulStrafeLeft_x                                          0x140B74306
#define __pulStrafeRight_x                                         0x140B74307
#define __LastTell_x                                               0x140B74522
#define __ServerName_x                                             0x140B75228
#define __DoAbilityList_x                                          0x140B75268
#define __SocialChangedList_x                                      0x140B752B0
#define __Socials_x                                                0x140B75328
#define __Inviter_x                                                0x140BDE710
#define __Attack_x                                                 0x140BDE753
#define __Autofire_x                                               0x140BDE754
#define EverQuest__Cameras_x                                       0x140B742B8  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140BDE758  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x1401D6680
#define __gfMaxZoomCameraDistance_x                                0x140786710
#define __gfMaxCameraDistance_x                                    0x1407C0F5C
#define __CurrentSocial_x                                          0x1408F2A20 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2E090
#define g_eqCommandStates_x                                        0x140A2F0F0
#define __CommandList_x                                            0x140A2F330
#define __ScreenMode_x                                             0x140ABB0E4
#define __gWorld_x                                                 0x140B6DFD0
#define __gpbCommandEvent_x                                        0x140B6E050
#define __ServerHost_x                                             0x140B6E238
#define __Guilds_x                                                 0x140B721C0
#define __MouseEventTime_x                                         0x140BDEAC0
#define DI8__Mouse_Check_x                                         0x140BE3740
#define __heqmain_x                                                0x140BE5BE8
#define DI8__Mouse_x                                               0x140BE5C00
#define __HWnd_x                                                   0x140BE5C08
#define __Mouse_x                                                  0x140BE2C38
#define DI8__Main_x                                                0x140BE2CD0
#define DI8__Keyboard_x                                            0x140BE2CD8
#define __LoginName_x                                              0x140BE33BC
#define __CurrentMapLabel_x                                        0x140BF8940
#define __LabelCache_x                                             0x140BF9550
#define __SubscriptionType_x                                       0x140C30B40
#define Teleport_Table_Size_x                                      0x140B6E058
#define Teleport_Table_x                                           0x140B6BBA0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B6E550
#define pinstActiveBanker_x                                        0x140B6BAA0
#define pinstActiveCorpse_x                                        0x140B6BA90
#define pinstActiveGMaster_x                                       0x140B6BA98
#define pinstActiveMerchant_x                                      0x140B6BA88
#define pinstAltAdvManager_x                                       0x140ABBD68
#define pinstCEverQuest_x                                          0x140BE2C30
#define pinstCamActor_x                                            0x140ABB0D0
#define pinstCDBStr_x                                              0x140ABAB70
#define pinstCDisplay_x                                            0x140B6BB98
#define pinstControlledPlayer_x                                    0x140B6BB30
#define pinstCResolutionHandler_x                                  0x1412696C0
#define pinstCSidlManager_x                                        0x140C0A6E0
#define pinstCXWndManager_x                                        0x140C0A6D0
#define instDynamicZone_x                                          0x140B72080 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B720CE
#define instExpeditionName_x                                       0x140B7210E
#define pinstDZMember_x                                            0x140B72198
#define pinstDZTimerInfo_x                                         0x140B721A0
#define pinstEqLogin_x                                             0x140BE2D00
#define instTribute_x                                              0x140A29820
#define pinstEQSoundManager_x                                      0x140ABC0A8
#define pinstEQSpellStrings_x                                      0x140A9F7A0
#define pinstSGraphicsEngine_x                                     0x141269458
#define pinstLocalPC_x                                             0x140B6BB88
#define pinstLocalPlayer_x                                         0x140B6BA80
#define pinstCMercenaryClientManager_x                             0x140BE0358
#define pinstModelPlayer_x                                         0x140B6BAB0
#define pinstRenderInterface_x                                     0x141269470
#define pinstSkillMgr_x                                            0x140BE2010
#define pinstSpawnManager_x                                        0x140BE0720
#define pinstSpellManager_x                                        0x140BE2158
#define pinstSpellSets_x                                           0x140BD7240
#define pinstStringTable_x                                         0x140B6BB90
#define pinstSwitchManager_x                                       0x140B6BA00
#define pinstTarget_x                                              0x140B6BB28
#define pinstTaskMember_x                                          0x140A29810 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6BB38
#define pinstTradeTarget_x                                         0x140B6BAA8
#define instTributeActive_x                                        0x140A29849
#define pinstViewActor_x                                           0x140ABB0C8
#define pinstWorldData_x                                           0x140B6BB78
#define pinstPlayerPath_x                                          0x140BE0748
#define pinstTargetIndicator_x                                     0x140BE2208
#define EQObject_Top_x                                             0x140B6BB60

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF5AB0
#define pinstCContainerMgr_x                                       0x140ABB1B8
#define pinstCContextMenuManager_x                                 0x140C0A680
#define pinstCInvSlotMgr_x                                         0x140ABB1A0
#define pinstCItemDisplayManager_x                                 0x140BF8510
#define pinstCPopupWndManager_x                                    0x140BF8DA0
#define pinstCSpellDisplayMgr_x                                    0x140BF9430
#define pinstCTaskManager_x                                        0x1408F2C60
#define pinstEQSuiteTextureLoader_x                                0x140A41830
#define pinstItemIconCache_x                                       0x140BF5E10
#define pinstLootFiltersManager_x                                  0x140ABA588

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F5D20
#define __CastRay2_x                                               0x1401F5A30
#define __ConvertItemTags_x                                        0x1401F6120
#define __CleanItemTags_x                                          0x140059BC0
#define __CreateCascadeMenuItems_x                                 0x140151C20
#define __DoesFileExist_x                                          0x140504EB0
#define __EQGetTime_x                                              0x140501550
#define __ExecuteCmd_x                                             0x1401CE8A0
#define __FixHeading_x                                             0x140601AA0
#define __FlushDxKeyboard_x                                        0x1402EAA40
#define __get_bearing_x                                            0x1401FF3A0
#define __get_melee_range_x                                        0x1401FF490
#define __GetAnimationCache_x                                      0x14035E180
#define __GetGaugeValueFromEQ_x                                    0x14047C0D0
#define __GetLabelFromEQ_x                                         0x14047D6E0
#define __GetXTargetType_x                                         0x140602F10   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140601B20
#define __HelpPath_x                                               0x140BDE988   // Why?
#define __NewUIINI_x                                               0x140488290   // Why?
#define __ProcessGameEvents_x                                      0x140231580
#define __ProcessKeyboardEvents_x                                  0x1402EC1F0
#define __ProcessMouseEvents_x                                     0x140232990
#define __SaveColors_x                                             0x140161930
#define __STMLToText_x                                             0x14053A570
#define __WndProc_x                                                0x1402E91B0
#define CMemoryMappedFile__SetFile_x                               0x14073DC50
#define DrawNetStatus_x                                            0x140279870
#define Util__FastTime_x                                           0x1405010C0
#define __eq_delete_x                                              0x140607C80
#define __eq_new_x                                                 0x140608340
#define __CopyLayout_x                                             0x1402681A0
#define __ThrottleFrameRate_x                                      0x140221467
#define __ThrottleFrameRateEnd_x                                   0x1402214C7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB0A0
#define CAAWnd__Update_x                                           0x1402FB3A0
#define CAAWnd__UpdateSelected_x                                   0x1402FC360

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007C0E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140074B80
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076E480
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C950

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016C6A0
#define AltAdvManager__IsAbilityReady_x                            0x14016C920
#define AltAdvManager__GetAAById_x                                 0x14016BF70
#define AltAdvManager__CanTrainAbility_x                           0x14016BDA0
#define AltAdvManager__CanSeeAbility_x                             0x14016BA60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A4750
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A55E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A57F0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8E00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A60E0
#define CharacterZoneClient__CastSpell_x                           0x1400A6180
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4F30
#define CharacterZoneClient__Cur_HP_x                              0x1400BA3F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA5B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A9100
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0060
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE9B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400AA510
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8380
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1BC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0AE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400AA6A0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009B5D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009CE40
#define CharacterZoneClient__GetHPRegen_x                          0x1400C11E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400BA0E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1DD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA730
#define CharacterZoneClient__GetManaRegen_x                        0x1400C27E0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA9B0
#define CharacterZoneClient__GetModCap_x                           0x1400CA110
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AAA50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AABB0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009FCE0
#define CharacterZoneClient__HasSkill_x                            0x1400C5920
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AEC00
#define CharacterZoneClient__MakeMeVisible_x                       0x1400BAE30
#define CharacterZoneClient__Max_Endurance_x                       0x140292240  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9EE0
#define CharacterZoneClient__Max_Mana_x                            0x140292430  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA350
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B2190
#define CharacterZoneClient__SpellDuration_x                       0x1400B2B80
#define CharacterZoneClient__TotalEffect_x                         0x1400B3D70
#define CharacterZoneClient__UseSkill_x                            0x1400CF910


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140318430

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403221D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031E190
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031D230

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140324840

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CD810

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140344140
#define CChatWindowManager__InitContextMenu_x                      0x1403442D0
#define CChatWindowManager__FreeChatWindow_x                       0x140343390
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034B060
#define CChatWindowManager__CreateChatWindow_x                     0x140342CD0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7710

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034BFD0
#define CChatWindow__Clear_x                                       0x14034CDE0
#define CChatWindow__WndNotification_x                             0x14034DF60
#define CChatWindow__AddHistory_x                                  0x14034C8E0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14054B510
#define CContextMenu__RemoveMenuItem_x                             0x14054BA10
#define CContextMenu__RemoveAllMenuItems_x                         0x14054B9E0
#define CContextMenu__CheckMenuItem_x                              0x14054B850
#define CContextMenu__SetMenuItem_x                                0x14054BA30
#define CContextMenu__AddSeparator_x                               0x14054B670

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14054C080
#define CContextMenuManager__RemoveMenu_x                          0x14054C600
#define CContextMenuManager__PopupMenu_x                           0x14054C380
#define CContextMenuManager__Flush_x                               0x14054C100
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403581F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D6950
#define CChatService__GetFriendName_x                              0x1405D6960

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405476E0
#define CComboWnd__Draw_x                                          0x1405477D0
#define CComboWnd__GetCurChoice_x                                  0x140547AA0  // unused
#define CComboWnd__GetListRect_x                                   0x140547B40
#define CComboWnd__InsertChoice_x                                  0x140547E60
#define CComboWnd__SetColors_x                                     0x1405481F0
#define CComboWnd__SetChoice_x                                     0x1405481B0
#define CComboWnd__GetItemCount_x                                  0x140547B30
#define CComboWnd__GetCurChoiceText_x                              0x140547AE0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140547A70
#define CComboWnd__InsertChoiceAtIndex_x                           0x140547F20

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140356270
#define CContainerWnd__SetContainer_x                              0x140357010
#define CContainerWnd__vftable_x                                   0x14079DFA8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABAE6C
#define CDisplay__ZoneMainUI_x                                     0x1402D1010
#define CDisplay__PreZoneMainUI_x                                  0x14015E860
#define CDisplay__CleanGameUI_x                                    0x140150D20
#define CDisplay__GetClickedActor_x                                0x140154ED0
#define CDisplay__GetUserDefinedColor_x                            0x1401559B0
#define CDisplay__InitCharSelectUI_x                               0x140155C60
#define CDisplay__ReloadUI_x                                       0x140160BC0
#define CDisplay__WriteTextHD2_x                                   0x140167B60
#define CDisplay__TrueDistance_x                                   0x140167840
#define CDisplay__SetViewActor_x                                   0x140164120
#define CDisplay__GetFloorHeight_x                                 0x140155130
#define CDisplay__ToggleScreenshotMode_x                           0x140167340
#define CDisplay__RealRender_World_x                               0x14015FF50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14056C360
#define CEditWnd__DrawCaret_x                                      0x14054EF30  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054F3C0
#define CEditWnd__GetCaretPt_x                                     0x14054F630  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054F670
#define CEditWnd__GetDisplayString_x                               0x14054F8D0
#define CEditWnd__GetHorzOffset_x                                  0x14054FB10
#define CEditWnd__GetLineForPrintableChar_x                        0x14054FC50
#define CEditWnd__GetSelStartPt_x                                  0x14054FF30  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054FD80
#define CEditWnd__PointFromPrintableChar_x                         0x140550B60
#define CEditWnd__ReplaceSelection_x                               0x140550F00
#define CEditWnd__SelectableCharFromPoint_x                        0x1405513A0
#define CEditWnd__SetEditable_x                                    0x140551620
#define CEditWnd__SetWindowText_x                                  0x140551650

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222810
#define CEverQuest__ClickedPlayer_x                                0x140218B20
#define CEverQuest__CreateTargetIndicator_x                        0x140219280
#define CEverQuest__DoTellWindow_x                                 0x1400D7420 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7CE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022AF90
#define CEverQuest__dsp_chat_x                                     0x1400D6F40 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D1E0
#define CEverQuest__Emote_x                                        0x140224670
#define CEverQuest__GetBodyTypeDesc_x                              0x1402253E0
#define CEverQuest__GetClassDesc_x                                 0x140225440
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225810
#define CEverQuest__GetDeityDesc_x                                 0x140225BC0
#define CEverQuest__GetLangDesc_x                                  0x140225FF0
#define CEverQuest__GetRaceDesc_x                                  0x140226390
#define CEverQuest__InterpretCmd_x                                 0x140227A80
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C360
#define CEverQuest__LMouseUp_x                                     0x1402294C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140239D00
#define CEverQuest__RMouseUp_x                                     0x140233500
#define CEverQuest__SetGameState_x                                 0x14023E610
#define CEverQuest__UPCNotificationFlush_x                         0x140243CF0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229140
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234830
#define CEverQuest__ReportSuccessfulHit_x                          0x140235570

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403684D0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094EC0
#define CGuild__GetGuildName_x                                     0x140094F00

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140384C00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025DF10
#define CHotButton__SetCheck_x                                     0x14025E1A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403933D0
#define CInvSlotMgr__MoveItem_x                                    0x140393520
#define CInvSlotMgr__SelectSlot_x                                  0x140394F10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140391000
#define CInvSlot__SliderComplete_x                                 0x140392230
#define CInvSlot__GetItemBase_x                                    0x14038D630
#define CInvSlot__UpdateItem_x                                     0x1403926B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140395570
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403960C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B5BB0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B84D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B2A20
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B40F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B4FF0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140478DB0
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047A980

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AFDD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AF1D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117050

// CLabel
#define CLabel__UpdateText_x                                       0x1403BF890

// CListWnd
#define CListWnd__CListWnd_x                                       0x14051E8C0
#define CListWnd__dCListWnd_x                                      0x14051ED00
#define CListWnd__vftable_x                                        0x1407CCC10
#define CListWnd__AddColumn_x                                      0x14051F3A0
#define CListWnd__AddColumn1_x                                     0x14051F440
#define CListWnd__AddLine_x                                        0x14051F5A0
#define CListWnd__AddString_x                                      0x14051FB20
#define CListWnd__CalculateFirstVisibleLine_x                      0x140520210
#define CListWnd__CalculateVSBRange_x                              0x1405204F0
#define CListWnd__ClearSel_x                                       0x140520690
#define CListWnd__ClearAllSel_x                                    0x140520630
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405206F0
#define CListWnd__Compare_x                                        0x1405208B0
#define CListWnd__Draw_x                                           0x140520D80
#define CListWnd__DrawColumnSeparators_x                           0x140521920
#define CListWnd__DrawHeader_x                                     0x1405219E0
#define CListWnd__DrawItem_x                                       0x1405220A0
#define CListWnd__DrawLine_x                                       0x140522A10
#define CListWnd__DrawSeparator_x                                  0x140522ED0
#define CListWnd__EnableLine_x                                     0x1405232F0
#define CListWnd__EnsureVisible_x                                  0x140523350
#define CListWnd__ExtendSel_x                                      0x140523440
#define CListWnd__GetColumnMinWidth_x                              0x140523770
#define CListWnd__GetColumnWidth_x                                 0x1405237F0
#define CListWnd__GetCurSel_x                                      0x1405238F0
#define CListWnd__GetItemData_x                                    0x140523C70
#define CListWnd__GetItemHeight_x                                  0x140523CB0
#define CListWnd__GetItemRect_x                                    0x140523E70
#define CListWnd__GetItemText_x                                    0x140524110
#define CListWnd__GetSelList_x                                     0x140524360
#define CListWnd__GetSeparatorRect_x                               0x140524550
#define CListWnd__InsertLine_x                                     0x1405259B0
#define CListWnd__RemoveLine_x                                     0x140525FD0
#define CListWnd__SetColors_x                                      0x1405263A0
#define CListWnd__SetColumnJustification_x                         0x1405263C0
#define CListWnd__SetColumnLabel_x                                 0x140526440
#define CListWnd__SetColumnWidth_x                                 0x1405265E0
#define CListWnd__SetCurSel_x                                      0x1405266B0
#define CListWnd__SetItemColor_x                                   0x140526920
#define CListWnd__SetItemData_x                                    0x1405269C0
#define CListWnd__SetItemText_x                                    0x140526C00
#define CListWnd__Sort_x                                           0x140527010
#define CListWnd__ToggleSel_x                                      0x140527180
#define CListWnd__SetColumnsSizable_x                              0x140526630
#define CListWnd__SetItemWnd_x                                     0x140526D30
#define CListWnd__GetItemWnd_x                                     0x1405242F0
#define CListWnd__SetItemIcon_x                                    0x140526A00
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051FFE0
#define CListWnd__SetVScrollPos_x                                  0x140526F70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D2330

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407A9620
#define MapViewMap__Clear_x                                        0x1403D3EB0
#define MapViewMap__SetZoom_x                                      0x1403DA470
#define MapViewMap__HandleLButtonDown_x                            0x1403D6FB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FBA40  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140401650
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140403670
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140405490
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404048B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140408B50

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14058B920
#define CPacketScrambler__hton_x                                   0x14058B910

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140544DC0
#define CSidlManagerBase__FindAnimation1_x                         0x140544D00
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405453F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405451A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140544100
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140544090
#define CSidlManagerBase__CreateXWnd_x                             0x1405436F0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046B540
#define CSidlManager__CreateXWnd_x                                 0x14046B700

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14053C040
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14053C170
#define CSidlScreenWnd__ConvertToRes_x                             0x140566900 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14053C290
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14053B8E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14053B830
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14053BB00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14053C860
#define CSidlScreenWnd__EnableIniStorage_x                         0x14053CA90
#define CSidlScreenWnd__GetChildItem_x                             0x14053CC30
#define CSidlScreenWnd__GetSidlPiece_x                             0x14053CE50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14052EA10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14053D1C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14053D530
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14053DDF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14053E6A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0A528
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053ECB0
#define CSidlScreenWnd__StoreIniVis_x                              0x14053F4B0
#define CSidlScreenWnd__vftable_x                                  0x1407CDC70
#define CSidlScreenWnd__WndNotification_x                          0x14053F500

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D13A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D17A0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D16E0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1B40
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1B80

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404882B0
#define CSliderWnd__SetValue_x                                     0x14054DBC0
#define CSliderWnd__SetNumTicks_x                                  0x14054DA40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140472A50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140556100
#define CStmlWnd__CalculateHSBRange_x                              0x14052E410
#define CStmlWnd__CalculateVSBRange_x                              0x140556FA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140557A80
#define CStmlWnd__ForceParseNow_x                                  0x140557B20
#define CStmlWnd__GetVisibleText_x                                 0x1405581F0
#define CStmlWnd__MakeStmlColorTag_x                               0x140559F60
#define CStmlWnd__MakeWndNotificationTag_x                         0x140559FA0
#define CStmlWnd__SetSTMLText_x                                    0x140560F70
#define CStmlWnd__StripFirstSTMLLines_x                            0x140561120
#define CStmlWnd__UpdateHistoryString_x                            0x1405614B0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140552BF0
#define CTabWnd__DrawCurrentPage_x                                 0x140552C90
#define CTabWnd__DrawTab_x                                         0x140553060
#define CTabWnd__GetTabRect_x                                      0x1405536C0
#define CTabWnd__InsertPage_x                                      0x140553990
#define CTabWnd__RemovePage_x                                      0x140553C20
#define CTabWnd__SetPage_x                                         0x140553D80
#define CTabWnd__UpdatePage_x                                      0x140554080

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405527F0
#define CPageWnd__SetTabText_x                                     0x140552860

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008E3F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E800


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405282C0
#define CTextureFont__DrawWrappedText1_x                           0x1405281D0
#define CTextureFont__DrawWrappedText2_x                           0x1405283F0
#define CTextureFont__GetTextExtent_x                              0x1405287A0
#define CTextureFont__GetHeight_x                                  0x140528760

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140565060

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14051B530

// CXStr
#define CXStr__gFreeLists_x                                        0x140A411B0
#define CXStr__gCXStrAccess_x                                      0x140C099D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140529CD0
#define CXWnd__ClrFocus_x                                          0x140529F10
#define CXWnd__Destroy_x                                           0x14052A050
#define CXWnd__DoAllDrawing_x                                      0x14052A150
#define CXWnd__DrawColoredRect_x                                   0x14052A910
#define CXWnd__DrawTooltip_x                                       0x14052BF80
#define CXWnd__DrawTooltipAtPoint_x                                0x14052C030
#define CXWnd__GetChildItem_x                                      0x14052C920
#define CXWnd__GetChildWndAt_x                                     0x14052C9E0
#define CXWnd__GetClientClipRect_x                                 0x14052CB30
#define CXWnd__GetRelativeRect_x                                   0x14052E530
#define CXWnd__GetScreenClipRect_x                                 0x14052E640
#define CXWnd__GetScreenRect_x                                     0x14052E7B0
#define CXWnd__GetTooltipRect_x                                    0x14052E920
#define CXWnd__IsActive_x                                          0x14052EE90
#define CXWnd__IsDescendantOf_x                                    0x14052EEC0
#define CXWnd__IsReallyVisible_x                                   0x14052EF30
#define CXWnd__IsType_x                                            0x14052EF70
#define CXWnd__Minimize_x                                          0x14052F070
#define CXWnd__ProcessTransition_x                                 0x140530070
#define CXWnd__Refade_x                                            0x140530170
#define CXWnd__Resize_x                                            0x140530180
#define CXWnd__Right_x                                             0x140530220
#define CXWnd__SetFocus_x                                          0x1405305D0
#define CXWnd__SetFont_x                                           0x140530620
#define CXWnd__SetKeyTooltip_x                                     0x140530710
#define CXWnd__SetMouseOver_x                                      0x140530840
#define CXWnd__SetParent_x                                         0x1405308C0
#define CXWnd__StartFade_x                                         0x140530CE0
#define CXWnd__vftable_x                                           0x1407CD388
#define CXWnd__CXWnd_x                                             0x1405288C0
#define CXWnd__dCXWnd_x                                            0x1405291D0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14056BAE0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x1405324E0
#define CXWndManager__DrawWindows_x                                0x140532610
#define CXWndManager__GetKeyboardFlags_x                           0x140532CD0
#define CXWndManager__HandleKeyboardMsg_x                          0x140532D10
#define CXWndManager__RemoveWnd_x                                  0x140536090

// CDBStr
#define CDBStr__GetString_x                                        0x14014EF20

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405BC9C0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A25E0
#define CCharacterListWnd__EnterWorld_x                            0x1400A1290
#define CCharacterListWnd__Quit_x                                  0x1400A25C0
#define CCharacterListWnd__UpdateList_x                            0x1400A32D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058D030
#define ItemBase__CreateItemTagString_x                            0x14058D9F0
#define ItemBase__GetImageNum_x                                    0x14058FBA0
#define ItemBase__GetItemValue_x                                   0x140591710
#define ItemBase__IsEmpty_x                                        0x140593260
#define ItemBase__IsKeyRingItem_x                                  0x140593930
#define ItemBase__ValueSellMerchant_x                              0x140597B50
#define ItemClient__CanDrop_x                                      0x140260370
#define ItemClient__CanGoInBag_x                                   0x1402604A0
#define ItemClient__CreateItemClient_x                             0x140260760
#define ItemClient__dItemClient_x                                  0x1402601D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016DE40
#define EQ_LoadingS__Array_x                                       0x140A2BBA0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A3150
#define PcBase__GetCombatAbility_x                                 0x1405A37A0
#define PcBase__GetCombatAbilityTimer_x                            0x1405A3840
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A3F50
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A47D0
#define PcClient__AlertInventoryChanged_x                          0x140280E20
#define PcClient__GetConLevel_x                                    0x1402812F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140283BC0
#define PcClient__HasLoreItem_x                                    0x140284C40
#define PcZoneClient__GetItemRecastTimer_x                         0x140290BD0
#define PcZoneClient__RemoveMyAffect_x                             0x140293260

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D2F20  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D2F90  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D30A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3000  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020A630  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149840

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406001E0
#define PlayerBase__CanSee1_x                                      0x1406002B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406007E0
#define PlayerBase__HasProperty_x                                  0x140600A00
#define PlayerBase__IsTargetable_x                                 0x140600AC0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029EE50
#define PlayerClient__GetPcClient_x                                0x1402A13E0
#define PlayerClient__PlayerClient_x                               0x140298030
#define PlayerClient__SetNameSpriteState_x                         0x1402A4810
#define PlayerClient__SetNameSpriteTint_x                          0x1402A57B0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3780
#define PlayerZoneClient__DoAttack_x                               0x1402B4470
#define PlayerZoneClient__GetLevel_x                               0x1402B79E0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D3F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D100

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD0A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD0D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD180
#define PlayerManagerClient__CreatePlayer_x                        0x1402ACA90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FFE60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402656E0
#define pinstKeyPressHandler_x                                     0x140BDFE14
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402652E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265350
#define KeypressHandler__ClearCommandStateArray_x                  0x140265670  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265800
#define KeypressHandler__HandleKeyUp_x                             0x1402658E0
#define KeypressHandler__SaveKeymapping_x                          0x140265580  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405BA2B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B4810

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A260  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F240
#define PcZoneClient__GetPcSkillLimit_x                            0x140291130
#define PcZoneClient__RemovePetEffect_x                            0x140293360
#define PcZoneClient__HasAlternateAbility_x                        0x140291BB0
#define PcZoneClient__CanEquipItem_x                               0x14028D610
#define PcZoneClient__GetItemByID_x                                0x140290180
#define PcZoneClient__RemoveBuffEffect_x                           0x140293110
#define PcZoneClient__BandolierSwap_x                              0x14028C7D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291080

// Doors
#define EQSwitch__UseSwitch_x                                      0x140211EB0

// IconCache
#define IconCache__GetIcon_x                                       0x14035E1B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140355050
#define CContainerMgr__CloseContainer_x                            0x140354A10
#define CContainerMgr__OpenExperimentContainer_x                   0x1403553B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140432740

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140258C50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C6500
#define CLootWnd__RequestLootSlot_x                                0x1403C74E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140198EB0
#define EQ_Spell__SpellAffects_x                                   0x14019A150
#define EQ_Spell__SpellAffectBase_x                                0x14019A0B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AAD50
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AAD00
#define EQ_Spell__IsSPAStacking_x                                  0x140199D70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199930
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199210

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400938F0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048B340  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048B380
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048AB90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048A360

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140492360  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401461E0
#define CTaskManager__GetTaskStatus_x                              0x1401462F0
#define CTaskManager__GetElementDescription_x                      0x140145E70

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197210
#define EqSoundManager__PlayScriptMp3_x                            0x140196010
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7B80  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7EB0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140551E50
#define CTextureAnimation__SetCurCell_x                            0x140552160

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140256F30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D4480
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D4500
#define CharacterBase__IsExpansionFlag_x                           0x1401B7510

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140336AE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140337420
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403380E0

// messages
#define msg_spell_worn_off_x                                       0x1401CA6B0
#define msg_new_text_x                                             0x1401C64E0
#define __msgTokenTextParam_x                                      0x1401BE460
#define msgTokenText_x                                             0x1401BE380

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9540
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D9460

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406032F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BFFD0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035A370
#define CCursorAttachment__AttachToCursor1_x                       0x140358FC0
#define CCursorAttachment__Deactivate_x                            0x14035A870

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405632B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405634A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405634B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401129D0
#define CFindItemWnd__Update_x                                     0x140112BB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E1E0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011B800
#define LootFiltersManager__GetItemFilterData_x                    0x14011C310
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CBB0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011CE60

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140415DE0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406076C0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0060

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140351620

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D82D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D83E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140373750
#define CGroupWnd__UpdateDisplay_x                                 0x1403734F0

// ItemBase
#define ItemBase__IsLore_x                                         0x140593A00
#define ItemBase__IsLoreEquipped_x                                 0x140593B50

#define MultipleItemMoveManager__ProcessMove_x                     0x140277CC0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020A790
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020A720
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020A760

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAA40

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF4D0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF880
#define FactionManagerClient__GetFactionStanding_x                 0x1400EECA0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EECA0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEB50

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007E370

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAB80

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176640
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175A20
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176460  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401763E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DDC40

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAA40

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D3190

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140513660

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056ED0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F1410

// AchievementManager
#define AchievementManager__Instance_x                             0x14005E570

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
