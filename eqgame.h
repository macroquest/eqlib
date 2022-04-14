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

#define __ClientDate                                               20220303u
#define __ExpectedVersionDate                                     "Mar  3 2022"
#define __ExpectedVersionTime                                     "10:52:30"
#define __ActualVersionDate_x                                      0x1408C50B8
#define __ActualVersionTime_x                                      0x1408C50A8
#define __ActualVersionBuild_x                                     0x1408B1EF8

// Memory Protection
#define __MemChecker0_x                                            0x1402EC8D0
#define __MemChecker1_x                                            0x1405DA470
#define __MemChecker2_x                                            0x140381220 // unused (original was inlined)
#define __MemChecker3_x                                            0x140381150
#define __MemChecker4_x                                            0x1402B7650
#define __EncryptPad0_x                                            0x140C5DF60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BB7AD0
#define __ScreenX_x                                                0x140BB7AE0 // flip flopped?
#define __ScreenY_x                                                0x140BB7AE4
#define __ScreenXMax_x                                             0x140BB7AE8
#define __ScreenYMax_x                                             0x140BB7AEC
#define __InChatMode_x                                             0x140BB7B2C
#define __RunWalkState_x                                           0x140BB7B30
#define DI8__Mouse_Copy_x                                          0x140BB7B44
#define __MouseLook_x                                              0x140BB7BC2
#define __NetStatusToggle_x                                        0x140BB7BC5
#define __pulAutoRun_x                                             0x140BB7BE0
#define __Clicks_x                                                 0x140BB7BFC
#define __RMouseHeldTime_x                                         0x140BB7C64
#define __LMouseHeldTime_x                                         0x140BB7C68
#define instEQZoneInfo_x                                           0x140BB7DB8
#define __ZoneType_x                                               0x140BB7FC0 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140BB81C8
#define __AutoSkillArray_x                                         0x140BB8668
#define __RangeAttackReady_x                                       0x140BB8A14
#define __AttackOnAssist_x                                         0x140BB8B8C
#define __ShowNames_x                                              0x140BB8BEC
#define __PCNames_x                                                0x140BB8D3C
#define __UseTellWindows_x                                         0x140BB8ED4
#define __pulForward_x                                             0x140BB8F30
#define __pulBackward_x                                            0x140BB8F34
#define __pulTurnRight_x                                           0x140BB8F38
#define __pulTurnLeft_x                                            0x140BB8F3C
#define __pulStrafeLeft_x                                          0x140BB8F40
#define __pulStrafeRight_x                                         0x140BB8F44
#define __LastTell_x                                               0x140BBA430
#define __ServerName_x                                             0x140BEE088
#define __DoAbilityList_x                                          0x140BEE0C8
#define __SocialChangedList_x                                      0x140BEE110
#define __Socials_x                                                0x140BEE188
#define __Inviter_x                                                0x140C579D0
#define __Attack_x                                                 0x140C57A53
#define __Autofire_x                                               0x140C57A54
#define EverQuest__Cameras_x                                       0x140BB8EE0  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140C57A58  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x140251370
#define __gfMaxZoomCameraDistance_x                                0x1408BA9E0
#define __gfMaxCameraDistance_x                                    0x1408F6718
#define __CurrentSocial_x                                          0x140A5AA74
#define __BindList_x                                               0x140BA8AF0
#define g_eqCommandStates_x                                        0x140BAA090
#define __CommandList_x                                            0x140BAAC20
#define __ScreenMode_x                                             0x140D39E0C
#define __gWorld_x                                                 0x140DEE160
#define __gpbCommandEvent_x                                        0x140DEE16C
#define __ServerHost_x                                             0x140DEE358
#define __Guilds_x                                                 0x140DF23E0
#define __MouseEventTime_x                                         0x140DF42BC
#define DI8__Mouse_Check_x                                         0x140DFA8B0
#define __heqmain_x                                                0x140DFCD58
#define DI8__Mouse_x                                               0x140DFCD70
#define __HWnd_x                                                   0x140DFCD78
#define __Mouse_x                                                  0x140DF9DA8
#define DI8__Main_x                                                0x140DF9E40
#define DI8__Keyboard_x                                            0x140DF9E48
#define __LoginName_x                                              0x140DFA52C
#define __CurrentMapLabel_x                                        0x140E13078
#define __LabelCache_x                                             0x140E15180
#define __SubscriptionType_x                                       0x140E4DAC0
#define Teleport_Table_Size_x                                      0x140DEE1F4
#define Teleport_Table_x                                           0x140DEBCB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140DEE750
#define pinstActiveBanker_x                                        0x140DEE690
#define pinstActiveCorpse_x                                        0x140DEE680
#define pinstActiveGMaster_x                                       0x140DEE688
#define pinstActiveMerchant_x                                      0x140DEE678
#define pinstAltAdvManager_x                                       0x140D3AD30
#define pinstCEverQuest_x                                          0x140DF9DA0
#define pinstCamActor_x                                            0x140D39DF8
#define pinstCDBStr_x                                              0x140D39860
#define pinstCDisplay_x                                            0x140DEBCA8
#define pinstControlledPlayer_x                                    0x140DEE720
#define pinstCResolutionHandler_x                                  0x141487BC0
#define pinstCSidlManager_x                                        0x140E272D0
#define pinstCXWndManager_x                                        0x140E272C0
#define instDynamicZone_x                                          0x140DF22A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140DF22EE
#define instExpeditionName_x                                       0x140DF232E
#define pinstDZMember_x                                            0x140DF23B8
#define pinstDZTimerInfo_x                                         0x140DF23C0
#define pinstEqLogin_x                                             0x140DF9E70
#define instTribute_x                                              0x140B9C7B0
#define pinstEQSoundManager_x                                      0x140D3B6C0
#define pinstEQSpellStrings_x                                      0x140D1D060
#define pinstSGraphicsEngine_x                                     0x141487958
#define pinstLocalPC_x                                             0x140DEBC88
#define pinstLocalPlayer_x                                         0x140DEE670
#define pinstCMercenaryClientManager_x                             0x140DF5F08
#define pinstMercenaryStats_x                                      0x140E15CD4
#define pinstModelPlayer_x                                         0x140DEE6A0
#define pinstRenderInterface_x                                     0x141487970
#define pinstSkillMgr_x                                            0x140DF8AC8
#define pinstSpawnManager_x                                        0x140DF6B60
#define pinstSpellManager_x                                        0x140DF8D60
#define pinstSpellSets_x                                           0x140C50678
#define pinstStringTable_x                                         0x140DEBCA0
#define pinstSwitchManager_x                                       0x140DEBB00
#define pinstTarget_x                                              0x140DEE718
#define pinstTaskMember_x                                          0x140B9C2F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140DEE728
#define pinstTradeTarget_x                                         0x140DEE698
#define instTributeActive_x                                        0x140B9C7D9
#define pinstViewActor_x                                           0x140D39DF0
#define pinstWorldData_x                                           0x140DEBC98
#define pinstPlayerPath_x                                          0x140DF6C00
#define pinstTargetIndicator_x                                     0x140DF8FE0
#define EQObject_Top_x                                             0x140DEBC70

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140E0E930
#define pinstCContainerMgr_x                                       0x140D39ED0
#define pinstCContextMenuManager_x                                 0x140E27270
#define pinstCInvSlotMgr_x                                         0x140D39EC0
#define pinstCItemDisplayManager_x                                 0x140E12530
#define pinstCPopupWndManager_x                                    0x140E13C60
#define pinstCSpellDisplayMgr_x                                    0x140E14EA0
#define pinstCTaskManager_x                                        0x140A65740
#define pinstEQSuiteTextureLoader_x                                0x140CAD3E0
#define pinstItemIconCache_x                                       0x140E0F2D0
#define pinstLootFiltersManager_x                                  0x140D38CA0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x14024BDA0
#define __CastRay2_x                                               0x14024BE10
#define __ConvertItemTags_x                                        0x14026FAD0
#define __CleanItemTags_x                                          0x1400A7430
#define __CreateCascadeMenuItems_x                                 0x1401CE070
#define __DoesFileExist_x                                          0x1405DDA60
#define __EQGetTime_x                                              0x1405D9FE0
#define __ExecuteCmd_x                                             0x140243BA0
#define __FixHeading_x                                             0x1407008E0
#define __FlushDxKeyboard_x                                        0x14037BAF0
#define __get_bearing_x                                            0x14024B910
#define __get_melee_range_x                                        0x14024C110
#define __GetAnimationCache_x                                      0x1403FAB40
#define __GetGaugeValueFromEQ_x                                    0x140531140
#define __GetLabelFromEQ_x                                         0x140532C90
#define __GetXTargetType_x                                         0x140703300   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x1403812F0
#define __HeadingDiff_x                                            0x140700940
#define __HelpPath_x                                               0x140DF3F70   // Why?
#define __NewUIINI_x                                               0x140530D60   // Why?
#define __ProcessGameEvents_x                                      0x1402C6BA0
#define __ProcessKeyboardEvents_x                                  0x14037DE50
#define __ProcessMouseEvents_x                                     0x1402C6210
#define __SaveColors_x                                             0x1401CDEE0
#define __STMLToText_x                                             0x140620600
#define __WndProc_x                                                0x14037EB70
#define CMemoryMappedFile__SetFile_x                               0x140842830
#define DrawNetStatus_x                                            0x1402FCC10
#define Util__FastTime_x                                           0x1405D9B50
#define __eq_delete_x                                              0x14070B080
#define __eq_new_x                                                 0x14070B684
#define __CopyLayout_x                                             0x1402E7190
#define __ThrottleFrameRate_x                                      0x1402AA4F4
#define __ThrottleFrameRateEnd_x                                   0x1402AA558

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14038F120
#define CAAWnd__Update_x                                           0x14038E260
#define CAAWnd__UpdateSelected_x                                   0x14038B200

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C72A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C9F90
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408A14E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C2550

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D8B30
#define AltAdvManager__IsAbilityReady_x                            0x1401D72F0
#define AltAdvManager__GetAAById_x                                 0x1401D7750
#define AltAdvManager__CanTrainAbility_x                           0x1401D77C0
#define AltAdvManager__CanSeeAbility_x                             0x1401D7C60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x14010D0D0
#define CharacterZoneClient__CalcAffectChange_x                    0x14010B490
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x14010B790
#define CharacterZoneClient__CanUseItem_x                          0x140123730
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400FE2A0
#define CharacterZoneClient__CastSpell_x                           0x140103B90
#define CharacterZoneClient__CharacterZoneClient_x                 0x140110F40
#define CharacterZoneClient__Cur_HP_x                              0x14011A4E0
#define CharacterZoneClient__Cur_Mana_x                            0x1401234E0
#define CharacterZoneClient__FindAffectSlot_x                      0x140109A30
#define CharacterZoneClient__GetAdjustedSkill_x                    0x14011E660
#define CharacterZoneClient__GetBaseSkill_x                        0x14011F980  // CharacterZoneClient::Skill
#define CharacterZoneClient__GetCastingTimeModifier_x              0x140107850
#define CharacterZoneClient__GetCurrentMod_x                       0x140130D00
#define CharacterZoneClient__GetCursorItemCount_x                  0x1401220D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x14012A700
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x14010B1E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400F1680
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC480
#define CharacterZoneClient__GetHPRegen_x                          0x140129FE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x140122180
#define CharacterZoneClient__GetItemCountWorn_x                    0x140121E30
#define CharacterZoneClient__GetLastEffectSlot_x                   0x14010B270
#define CharacterZoneClient__GetManaRegen_x                        0x14012AD50
#define CharacterZoneClient__GetMaxEffects_x                       0x140103050
#define CharacterZoneClient__GetModCap_x                           0x140130BF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x14010B100
#define CharacterZoneClient__GetPCSpellAffect_x                    0x140108960
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400F5A10
#define CharacterZoneClient__HasSkill_x                            0x14011E910
#define CharacterZoneClient__IsStackBlocked_x                      0x140106F90
#define CharacterZoneClient__MakeMeVisible_x                       0x140120600
#define CharacterZoneClient__Max_Endurance_x                       0x140310140  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011A2A0
#define CharacterZoneClient__Max_Mana_x                            0x14030FEE0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14012BB00
#define CharacterZoneClient__RemovePCAffectex_x                    0x140108F90
#define CharacterZoneClient__SpellDuration_x                       0x140108440
#define CharacterZoneClient__TotalEffect_x                         0x14010C7D0
#define CharacterZoneClient__UseSkill_x                            0x14012C3F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403ADDC0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B9CF0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403B4280
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403B1D10

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403BEC70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1409059F0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403E6160
#define CChatWindowManager__InitContextMenu_x                      0x1403DD840
#define CChatWindowManager__FreeChatWindow_x                       0x1403E47E0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403E5D60
#define CChatWindowManager__CreateChatWindow_x                     0x1403E4F00

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401354F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E6D60
#define CChatWindow__Clear_x                                       0x1403E8370
#define CChatWindow__WndNotification_x                             0x1403E8A80
#define CChatWindow__AddHistory_x                                  0x1403E7B30

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140635A20
#define CContextMenu__RemoveMenuItem_x                             0x140635E60
#define CContextMenu__RemoveAllMenuItems_x                         0x140635E80
#define CContextMenu__CheckMenuItem_x                              0x140635F30
#define CContextMenu__SetMenuItem_x                                0x140635D80
#define CContextMenu__AddSeparator_x                               0x140635D50

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1406365B0
#define CContextMenuManager__RemoveMenu_x                          0x140636640
#define CContextMenuManager__PopupMenu_x                           0x140636760
#define CContextMenuManager__Flush_x                               0x140636520
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403F4290

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406D3DE0
#define CChatService__GetFriendName_x                              0x1406D3DF0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1406320F0
#define CComboWnd__Draw_x                                          0x140631410
#define CComboWnd__GetCurChoice_x                                  0x140631E60  // unused
#define CComboWnd__GetListRect_x                                   0x1406319B0
#define CComboWnd__GetTextRect_x                                   0x140632190
#define CComboWnd__InsertChoice_x                                  0x140631B50
#define CComboWnd__SetColors_x                                     0x140631B20
#define CComboWnd__SetChoice_x                                     0x140631E40
#define CComboWnd__GetItemCount_x                                  0x140631E80
#define CComboWnd__GetCurChoiceText_x                              0x140631ED0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140631EA0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140631C10

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403F1570
#define CContainerWnd__SetContainer_x                              0x1403F2F60
#define CContainerWnd__vftable_x                                   0x1408D2F70

// CDisplay
#define CDisplay__cameraType_x                                     0x140D39B84
#define CDisplay__ZoneMainUI_x                                     0x1401C83D0
#define CDisplay__PreZoneMainUI_x                                  0x1401C83F0
#define CDisplay__CleanGameUI_x                                    0x1401CDC60
#define CDisplay__GetClickedActor_x                                0x1401BF070
#define CDisplay__GetUserDefinedColor_x                            0x1401B5C90
#define CDisplay__InitCharSelectUI_x                               0x1401C7CD0
#define CDisplay__ReloadUI_x                                       0x1401C7590
#define CDisplay__WriteTextHD2_x                                   0x1401BAED0
#define CDisplay__TrueDistance_x                                   0x1401C3140
#define CDisplay__SetViewActor_x                                   0x1401BE8B0
#define CDisplay__GetFloorHeight_x                                 0x1401BB200
#define CDisplay__SetRenderWindow_x                                0x1401B9920
#define CDisplay__ToggleScreenshotMode_x                           0x1401BE260
#define CDisplay__RealRender_World_x                               0x1401B8A70

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14065C600
#define CEditWnd__DrawCaret_x                                      0x14063A340  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14063C9F0
#define CEditWnd__GetCaretPt_x                                     0x14063B650  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14063B3E0
#define CEditWnd__GetDisplayString_x                               0x14063B290
#define CEditWnd__GetHorzOffset_x                                  0x140639800
#define CEditWnd__GetLineForPrintableChar_x                        0x14063C8A0
#define CEditWnd__GetSelStartPt_x                                  0x14063B6A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14063B0D0
#define CEditWnd__PointFromPrintableChar_x                         0x14063C4B0
#define CEditWnd__ReplaceSelection_x                               0x14063BFF0
#define CEditWnd__SelectableCharFromPoint_x                        0x14063C600
#define CEditWnd__SetEditable_x                                    0x14063B790
#define CEditWnd__SetWindowText_x                                  0x14063ADB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402AD560
#define CEverQuest__ClickedPlayer_x                                0x14029C870
#define CEverQuest__CreateTargetIndicator_x                        0x1402C3210
#define CEverQuest__DeleteTargetIndicator_x                        0x1402C32A0
#define CEverQuest__DoTellWindow_x                                 0x1401355F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401358D0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140290820
#define CEverQuest__dsp_chat_x                                     0x140135CE0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402BD0E0
#define CEverQuest__Emote_x                                        0x1402ADD89
#define CEverQuest__EnterZone_x                                    0x1402A68E0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402B45E0
#define CEverQuest__GetClassDesc_x                                 0x1402B4BF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402B51B0
#define CEverQuest__GetDeityDesc_x                                 0x1402C1290
#define CEverQuest__GetLangDesc_x                                  0x1402B5370
#define CEverQuest__GetRaceDesc_x                                  0x1402B4BC0
#define CEverQuest__InterpretCmd_x                                 0x1402C1990
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402953B0
#define CEverQuest__LMouseUp_x                                     0x140292FE0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402960D0
#define CEverQuest__RMouseUp_x                                     0x140294640
#define CEverQuest__SetGameState_x                                 0x1402905A0
#define CEverQuest__UPCNotificationFlush_x                         0x1402BCFA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402B6A80
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402AED90
#define CEverQuest__ReportSuccessfulHit_x                          0x1402AFAC0

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x140406AA0
#define CGaugeWnd__CalcLinesFillRect_x                             0x140406B00
#define CGaugeWnd__Draw_x                                          0x140406010

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E9760
#define CGuild__GetGuildName_x                                     0x1400E77C0
#define CGuild__GetGuildIndex_x                                    0x1400E8060

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140427100

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402D9C20
#define CHotButton__SetCheck_x                                     0x1402D97A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140436770
#define CInvSlotMgr__MoveItem_x                                    0x140434E90
#define CInvSlotMgr__SelectSlot_x                                  0x140436890

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140433220
#define CInvSlot__SliderComplete_x                                 0x14042F590
#define CInvSlot__GetItemBase_x                                    0x14042ED10
#define CInvSlot__UpdateItem_x                                     0x14042EF20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140437800
#define CInvSlotWnd__HandleLButtonUp_x                             0x140438300

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140454C90
#define CItemDisplayWnd__UpdateStrings_x                           0x140454570
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140446ED0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404475F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455BA0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529CA0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140529C20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140569040

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14045D0B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140178BE0

// CLabel
#define CLabel__UpdateText_x                                       0x140464160

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405FDAB0
#define CListWnd__dCListWnd_x                                      0x1405FDD40
#define CListWnd__vftable_x                                        0x140904DE8
#define CListWnd__AddColumn_x                                      0x1406043D0
#define CListWnd__AddColumn1_x                                     0x140604480
#define CListWnd__AddLine_x                                        0x140604840
#define CListWnd__AddString_x                                      0x140604650
#define CListWnd__CalculateFirstVisibleLine_x                      0x140604030
#define CListWnd__CalculateVSBRange_x                              0x140603D40
#define CListWnd__ClearSel_x                                       0x1406056D0
#define CListWnd__ClearAllSel_x                                    0x140605730
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1406064C0
#define CListWnd__Compare_x                                        0x140603390
#define CListWnd__Draw_x                                           0x1405FDEC0
#define CListWnd__DrawColumnSeparators_x                           0x140601B30
#define CListWnd__DrawHeader_x                                     0x1406022A0
#define CListWnd__DrawItem_x                                       0x140602960
#define CListWnd__DrawLine_x                                       0x140601DD0
#define CListWnd__DrawSeparator_x                                  0x140601BF0
#define CListWnd__EnableLine_x                                     0x140600F80
#define CListWnd__EnsureVisible_x                                  0x1406063C0
#define CListWnd__ExtendSel_x                                      0x140605550
#define CListWnd__GetColumnTooltip_x                               0x1406009F0  // unused
#define CListWnd__GetColumnMinWidth_x                              0x140600A70
#define CListWnd__GetColumnWidth_x                                 0x140600960
#define CListWnd__GetCurSel_x                                      0x1406001C0
#define CListWnd__GetItemAtPoint_x                                 0x1406013A0
#define CListWnd__GetItemAtPoint1_x                                0x140601520
#define CListWnd__GetItemData_x                                    0x140600260
#define CListWnd__GetItemHeight_x                                  0x140600700
#define CListWnd__GetItemIcon_x                                    0x1406003D0
#define CListWnd__GetItemRect_x                                    0x1406010B0
#define CListWnd__GetItemText_x                                    0x1406002B0
#define CListWnd__GetSelList_x                                     0x140605790
#define CListWnd__GetSeparatorRect_x                               0x1406018E0
#define CListWnd__InsertLine_x                                     0x140605050
#define CListWnd__RemoveLine_x                                     0x140605330
#define CListWnd__SetColors_x                                      0x140603D20
#define CListWnd__SetColumnJustification_x                         0x140603920
#define CListWnd__SetColumnLabel_x                                 0x1406045E0
#define CListWnd__SetColumnWidth_x                                 0x140603820
#define CListWnd__SetCurSel_x                                      0x140605490
#define CListWnd__SetItemColor_x                                   0x140605F30
#define CListWnd__SetItemData_x                                    0x140605EF0
#define CListWnd__SetItemText_x                                    0x1406059F0
#define CListWnd__ShiftColumnSeparator_x                           0x140603A20
#define CListWnd__Sort_x                                           0x140603680
#define CListWnd__ToggleSel_x                                      0x1406054C0
#define CListWnd__SetColumnsSizable_x                              0x140603B50
#define CListWnd__SetItemWnd_x                                     0x140605D80
#define CListWnd__GetItemWnd_x                                     0x140600440
#define CListWnd__SetItemIcon_x                                    0x140605AA0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1406041A0
#define CListWnd__SetVScrollPos_x                                  0x1406037F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14047E630

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x140478770
#define MapViewMap__dMapViewMap_x                                  0x1404788A0
#define MapViewMap__vftable_x                                      0x1408DE8D0
#define MapViewMap__Clear_x                                        0x14047CAC0
#define MapViewMap__SetZoom_x                                      0x140483D10
#define MapViewMap__HandleLButtonDown_x                            0x140478990
#define MapViewMap__GetWorldCoordinates_x                          0x14047C530

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404A62E0    // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A6D50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A75A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A48A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404B2300
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A5E30

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140685E20
#define CPacketScrambler__hton_x                                   0x140685E10

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x14062D470
#define CSidlManagerBase__CreatePageWnd_x                          0x14062CBB0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140627B90
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x140627AE0
#define CSidlManagerBase__FindAnimation1_x                         0x140627F90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140628450
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140628200
#define CSidlManagerBase__CreateLabel_x                            0x14051E470
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14062B940
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1408619F0
#define CSidlManagerBase__CreateXWnd_x                             0x14062BCB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051E950
#define CSidlManager__CreateXWnd_x                                 0x14051DFF0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140623040
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140622F10
#define CSidlScreenWnd__ConvertToRes_x                             0x140656350 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140622620
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140622330
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1406223F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1406224B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1406237F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140623DD0
#define CSidlScreenWnd__GetChildItem_x                             0x140623D20
#define CSidlScreenWnd__GetSidlPiece_x                             0x140867110
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14060F1A0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140621CB0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140623E30
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140624CA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140620D50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140E27118
#define CSidlScreenWnd__StoreIniInfo_x                             0x1406246C0
#define CSidlScreenWnd__StoreIniVis_x                              0x140624B10
#define CSidlScreenWnd__vftable_x                                  0x140905E50
#define CSidlScreenWnd__WndNotification_x                          0x140623680

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14035E090 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14035E2D0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14035D700
#define CSkillMgr__IsActivatedSkill_x                              0x14035D7F0
#define CSkillMgr__IsCombatSkill_x                                 0x14035D760

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140637A00
#define CSliderWnd__SetValue_x                                     0x1406377B0
#define CSliderWnd__SetNumTicks_x                                  0x140637800

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140525D80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1406426B0
#define CStmlWnd__CalculateHSBRange_x                              0x1406115E0
#define CStmlWnd__CalculateVSBRange_x                              0x140643920
#define CStmlWnd__CanBreakAtCharacter_x                            0x140649FC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14064AD60
#define CStmlWnd__ForceParseNow_x                                  0x140642E90
#define CStmlWnd__GetNextTagPiece_x                                0x140649EF0
#define CStmlWnd__GetVisibleText_x                                 0x140642EB0
#define CStmlWnd__InitializeWindowVariables_x                      0x14064AB60
#define CStmlWnd__MakeStmlColorTag_x                               0x140641D60
#define CStmlWnd__MakeWndNotificationTag_x                         0x140641DB0
#define CStmlWnd__SetSTMLText_x                                    0x140640610
#define CStmlWnd__StripFirstSTMLLines_x                            0x14064C210
#define CStmlWnd__UpdateHistoryString_x                            0x14064AFA0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14063F240
#define CTabWnd__DrawCurrentPage_x                                 0x14063FD30
#define CTabWnd__DrawTab_x                                         0x14063F920
#define CTabWnd__GetCurrentPage_x                                  0x14063E7A0
#define CTabWnd__GetCurrentTabIndex_x                              0x14063E790
#define CTabWnd__GetPageFromTabIndex_x                             0x14063F820
#define CTabWnd__GetPageInnerRect_x                                0x14063EA40
#define CTabWnd__GetTabInnerRect_x                                 0x14063E960
#define CTabWnd__GetTabRect_x                                      0x14063E7E0
#define CTabWnd__InsertPage_x                                      0x14063ED10
#define CTabWnd__RemovePage_x                                      0x14063EEF0
#define CTabWnd__SetPage_x                                         0x14063EAE0
#define CTabWnd__SetPageRect_x                                     0x14063F0F0
#define CTabWnd__UpdatePage_x                                      0x14063F690

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14063E2E0
#define CPageWnd__SetTabText_x                                     0x14063E270

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFF10  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DFCC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14060B3C0
#define CTextureFont__DrawWrappedText1_x                           0x14060B2D0
#define CTextureFont__DrawWrappedText2_x                           0x14060B4F0
#define CTextureFont__GetTextExtent_x                              0x14060B7A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140652790

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405F0C40

// CXStr
#define CXStr__gFreeLists_x                                        0x140CACD60
#define CXStr__gCXStrAccess_x                                      0x140E265C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x1406136F0
#define CXWnd__ClrFocus_x                                          0x140612F00
#define CXWnd__Destroy_x                                           0x140612FE0
#define CXWnd__DoAllDrawing_x                                      0x14060E560
#define CXWnd__DrawChildren_x                                      0x14060E510
#define CXWnd__DrawColoredRect_x                                   0x14060EC80
#define CXWnd__DrawTooltip_x                                       0x14060CAE0
#define CXWnd__DrawTooltipAtPoint_x                                0x14060CBA0
#define CXWnd__GetBorderFrame_x                                    0x14060E920
#define CXWnd__GetChildItem_x                                      0x140613990
#define CXWnd__GetChildWndAt_x                                     0x1406137B0
#define CXWnd__GetClientClipRect_x                                 0x140611310
#define CXWnd__GetRelativeRect_x                                   0x1406117D0
#define CXWnd__GetScreenClipRect_x                                 0x140611460
#define CXWnd__GetScreenRect_x                                     0x1406116D0
#define CXWnd__GetTooltipRect_x                                    0x14060ED40
#define CXWnd__IsActive_x                                          0x14060F620
#define CXWnd__IsDescendantOf_x                                    0x140612320
#define CXWnd__IsReallyVisible_x                                   0x140612350
#define CXWnd__IsType_x                                            0x140614120
#define CXWnd__Minimize_x                                          0x140612B60
#define CXWnd__ProcessTransition_x                                 0x140613100
#define CXWnd__Refade_x                                            0x140612820
#define CXWnd__Resize_x                                            0x140612AC0
#define CXWnd__Right_x                                             0x140613490
#define CXWnd__SetFocus_x                                          0x140612EB0
#define CXWnd__SetFont_x                                           0x140612F40
#define CXWnd__SetKeyTooltip_x                                     0x140613EA0
#define CXWnd__SetMouseOver_x                                      0x140610100
#define CXWnd__SetParent_x                                         0x140611F40
#define CXWnd__StartFade_x                                         0x1406121A0
#define CXWnd__vftable_x                                           0x140905560
#define CXWnd__CXWnd_x                                             0x14060BA70
#define CXWnd__dCXWnd_x                                            0x14060C0A0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140657530

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140616BC0
#define CXWndManager__DrawWindows_x                                0x140616D00
#define CXWndManager__GetKeyboardFlags_x                           0x140619F30
#define CXWndManager__HandleKeyboardMsg_x                          0x140619A00
#define CXWndManager__RemoveWnd_x                                  0x14061A310
#define CXWndManager__RemovePendingDeletionWnd_x                   0x14061AAD0

// CDBStr
#define CDBStr__GetString_x                                        0x1401B4610

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B7DE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400FCF70
#define CCharacterListWnd__EnterWorld_x                            0x1400FC920
#define CCharacterListWnd__Quit_x                                  0x1400FC480
#define CCharacterListWnd__UpdateList_x                            0x1400FCAE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140687610
#define ItemBase__CreateItemTagString_x                            0x140688030
#define ItemBase__GetImageNum_x                                    0x14068A2C0
#define ItemBase__GetItemValue_x                                   0x14068BDF0
#define ItemBase__IsEmpty_x                                        0x14068DA40
#define ItemBase__IsKeyRingItem_x                                  0x14068E2E0
#define ItemBase__ValueSellMerchant_x                              0x140692680
#define ItemClient__CanDrop_x                                      0x1402E08C0
#define ItemClient__CanGoInBag_x                                   0x1402E09E0
#define ItemClient__CreateItemClient_x                             0x1402DF710
#define ItemClient__dItemClient_x                                  0x1402DF640

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401D9F80
#define EQ_LoadingS__Array_x                                       0x140BA0CB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14069DDC0
#define PcBase__GetCombatAbility_x                                 0x14069E450
#define PcBase__GetCombatAbilityTimer_x                            0x14069E4F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14069EC20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14069F490
#define PcClient__AlertInventoryChanged_x                          0x1403050C0
#define PcClient__GetConLevel_x                                    0x140305910  // PcClient::ConsiderTarget
#define PcClient__HasLoreItem_x                                    0x140306370
#define PcZoneClient__GetItemRecastTimer_x                         0x140313BA0
#define PcZoneClient__RemoveMyAffect_x                             0x140317E00

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140248580  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140248CA0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140248D00  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140248BF0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140283490  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401AF380

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406FE9E0
#define PlayerBase__CanSee1_x                                      0x1406FEAB0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406FE6B0
#define PlayerBase__HasProperty_x                                  0x1406FE560
#define PlayerBase__IsTargetable_x                                 0x1406FEC10
#define PlayerClient__ChangeBoneStringSprite_x                     0x14032E330
#define PlayerClient__dPlayerClient_x                              0x14031ED20
#define PlayerClient__GetPcClient_x                                0x14032C450
#define PlayerClient__PlayerClient_x                               0x14031EB20
#define PlayerClient__SetNameSpriteState_x                         0x1403244D0
#define PlayerClient__SetNameSpriteTint_x                          0x140325530
#define PlayerZoneClient__ChangeHeight_x                           0x1403403D0
#define PlayerZoneClient__DoAttack_x                               0x14033BAD0
#define PlayerZoneClient__GetLevel_x                               0x1403430E0
#define PlayerZoneClient__IsValidTeleport_x                        0x140284D40
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401D0360

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140334FE0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1403350A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140335150
#define PlayerManagerClient__CreatePlayer_x                        0x140334B00
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406FDCC0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402E4F10
#define pinstKeyPressHandler_x                                     0x140DF5684
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402E5090
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402E5030
#define KeypressHandler__ClearCommandStateArray_x                  0x1402E6500  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402E6550
#define KeypressHandler__HandleKeyUp_x                             0x1402E6630
#define KeypressHandler__SaveKeymapping_x                          0x1402E6CA0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406B56B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406AF5D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140313440  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140311000
#define PcZoneClient__GetPcSkillLimit_x                            0x140317930
#define PcZoneClient__RemovePetEffect_x                            0x140318210
#define PcZoneClient__HasAlternateAbility_x                        0x14030FCD0
#define PcZoneClient__CanEquipItem_x                               0x140310460
#define PcZoneClient__GetItemByID_x                                0x140314380
#define PcZoneClient__RemoveBuffEffect_x                           0x1403182E0
#define PcZoneClient__BandolierSwap_x                              0x1403116B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140313B10

// Doors
#define EQSwitch__UseSwitch_x                                      0x14028B180

// IconCache
#define IconCache__GetIcon_x                                       0x1403FA4D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403F0240
#define CContainerMgr__CloseContainer_x                            0x1403F05A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403F1250

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404E35D0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402D7CE0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14046D180
#define CLootWnd__RequestLootSlot_x                                0x14046C2B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14020AD60
#define EQ_Spell__SpellAffects_x                                   0x14020B380
#define EQ_Spell__SpellAffectBase_x                                0x14020B040
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1401107C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x140110770
#define EQ_Spell__IsSPAStacking_x                                  0x14020C630
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14020B5F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14020C660
#define __IsResEffectSpell_x                                       0x140110150

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5C80

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140540C50  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140540260
#define CTargetWnd__RefreshTargetBuffs_x                           0x140540660
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053EE70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545F30  // CTaskWnd::UpdateTimes
#define CTaskWnd__ConfirmAbandonTask_x                             0x1405497B0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401AC910
#define CTaskManager__HandleMessage_x                              0x1401AA2B0
#define CTaskManager__GetTaskStatus_x                              0x1401AC9E0
#define CTaskManager__GetElementDescription_x                      0x1401ACA60

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140204C90
#define EqSoundManager__PlayScriptMp3_x                            0x140204F30
#define EqSoundManager__SoundAssistPlay_x                          0x140363060  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140362450  // WaveInstance::Play

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x1401976A0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14063D800
#define CTextureAnimation__SetCurCell_x                            0x14063D560

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402D4D30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406D19E0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406D1A60
#define CharacterBase__IsExpansionFlag_x                           0x140242190

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403D1130
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403D1C40
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403D1D20

// messages
#define msg_spell_worn_off_x                                       0x1402374F0
#define msg_new_text_x                                             0x140228A90
#define __msgTokenTextParam_x                                      0x14023A120
#define msgTokenText_x                                             0x14023A530

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403684C0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140367950

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140703C80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404645C0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403F5550
#define CCursorAttachment__AttachToCursor1_x                       0x1403F5600
#define CCursorAttachment__Deactivate_x                            0x1403F6FA0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140650C00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140651520
#define CEQSuiteTextureLoader__GetTexture_x                        0x140651070

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140171A80
#define CFindItemWnd__Update_x                                     0x140172890
#define CFindItemWnd__PickupSelectedItem_x                         0x14016FF20

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14017DC50
#define LootFiltersManager__GetItemFilterData_x                    0x14017D390
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14017D3D0
#define LootFiltersManager__SetItemLootFilter_x                    0x14017D660

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404CECC0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14070AAC0
#define CResolutionHandler__GetWindowedStyle_x                     0x14035C3E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403EC400

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406D5860  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406D5750  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140412930
#define CGroupWnd__UpdateDisplay_x                                 0x140411BC0

// ItemBase
#define ItemBase__IsLore_x                                         0x14068E3B0
#define ItemBase__IsLoreEquipped_x                                 0x14068E520

#define MultipleItemMoveManager__ProcessMove_x                     0x1402F7F10

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402833B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140283550
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402835A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E4C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14014AF30
#define FactionManagerClient__HandleFactionMessage_x               0x14014B830
#define FactionManagerClient__GetFactionStanding_x                 0x14014C690
#define FactionManagerClient__GetMaxFaction_x                      0x14014C690
#define FactionManagerClient__GetMinFaction_x                      0x14014C600

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CDC30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14015A3E0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401E29A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401E3680
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401E3A80  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401E3A00  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14036C940

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E4C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140248B70

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405EC7D0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A69E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140381FB0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400A7DB0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
