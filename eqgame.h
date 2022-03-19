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

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Mar 15 2022"
#define __ExpectedVersionTime                                     "14:35:04"
#define __ActualVersionDate_x                                      0x1408C40B8
#define __ActualVersionTime_x                                      0x1408C40A8
#define __ActualVersionBuild_x                                     0x1408B0EF8

// Memory Protection
#define __MemChecker0_x                                            0x1402EC6A0
#define __MemChecker1_x                                            0x1405DA220
#define __MemChecker2_x                                            0x140381050 // unused (original was inlined)
#define __MemChecker3_x                                            0x140380F80
#define __MemChecker4_x                                            0x1402B73E0
#define __EncryptPad0_x                                            0x140C5BF60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BB5AD0
#define __ScreenX_x                                                0x140BB5AE0 // flip flopped?
#define __ScreenY_x                                                0x140BB5AE4
#define __ScreenXMax_x                                             0x140BB5AE8
#define __ScreenYMax_x                                             0x140BB5AEC
#define __InChatMode_x                                             0x140BB5B2C
#define __RunWalkState_x                                           0x140BB5B30
#define DI8__Mouse_Copy_x                                          0x140BB5B44
#define __MouseLook_x                                              0x140BB5BC2
#define __NetStatusToggle_x                                        0x140BB5BC5
#define __pulAutoRun_x                                             0x140BB5BE0
#define __Clicks_x                                                 0x140BB5BFC
#define __RMouseHeldTime_x                                         0x140BB5C64
#define __LMouseHeldTime_x                                         0x140BB5C68
#define instEQZoneInfo_x                                           0x140BB5DB8
#define __ZoneType_x                                               0x140BB5FC0 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140BB61C8
#define __AutoSkillArray_x                                         0x140BB6668
#define __RangeAttackReady_x                                       0x140BB6A14
#define __AttackOnAssist_x                                         0x140BB6B8C
#define __ShowNames_x                                              0x140BB6BEC
#define __PCNames_x                                                0x140BB6D3C
#define __UseTellWindows_x                                         0x140BB6ED4
#define __pulForward_x                                             0x140BB6F30
#define __pulBackward_x                                            0x140BB6F34
#define __pulTurnRight_x                                           0x140BB6F38
#define __pulTurnLeft_x                                            0x140BB6F3C
#define __pulStrafeLeft_x                                          0x140BB6F40
#define __pulStrafeRight_x                                         0x140BB6F44
#define __LastTell_x                                               0x140BB8430
#define __ServerName_x                                             0x140BEC088
#define __DoAbilityList_x                                          0x140BEC0C8
#define __SocialChangedList_x                                      0x140BEC110
#define __Socials_x                                                0x140BEC188
#define __Inviter_x                                                0x140C559D0
#define __Attack_x                                                 0x140C55A53
#define __Autofire_x                                               0x140C55A54
#define EverQuest__Cameras_x                                       0x140BB6EE0  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140C55A58  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x1402510D0
#define __gfMaxZoomCameraDistance_x                                0x1408B99E0
#define __gfMaxCameraDistance_x                                    0x1408F5718
#define __CurrentSocial_x                                          0x140A58A74
#define __BindList_x                                               0x140BA6AF0
#define g_eqCommandStates_x                                        0x140BA8090
#define __CommandList_x                                            0x140BA8C20
#define __ScreenMode_x                                             0x140D37E0C
#define __gWorld_x                                                 0x140DEC160
#define __gpbCommandEvent_x                                        0x140DEC16C
#define __ServerHost_x                                             0x140DEC358
#define __Guilds_x                                                 0x140DF03E0
#define __MouseEventTime_x                                         0x140DF22BC
#define DI8__Mouse_Check_x                                         0x140DF88B0
#define __heqmain_x                                                0x140DFAD58
#define DI8__Mouse_x                                               0x140DFAD70
#define __HWnd_x                                                   0x140DFAD78
#define __Mouse_x                                                  0x140DF7DA8
#define DI8__Main_x                                                0x140DF7E40
#define DI8__Keyboard_x                                            0x140DF7E48
#define __LoginName_x                                              0x140DF852C
#define __CurrentMapLabel_x                                        0x140E11078
#define __LabelCache_x                                             0x140E13180
#define __SubscriptionType_x                                       0x140E4BAC0
#define Teleport_Table_Size_x                                      0x140DEC1F4
#define Teleport_Table_x                                           0x140DE9CB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140DEC750
#define pinstActiveBanker_x                                        0x140DEC690
#define pinstActiveCorpse_x                                        0x140DEC680
#define pinstActiveGMaster_x                                       0x140DEC688
#define pinstActiveMerchant_x                                      0x140DEC678
#define pinstAltAdvManager_x                                       0x140D38D30
#define pinstCEverQuest_x                                          0x140DF7DA0
#define pinstCamActor_x                                            0x140D37DF8
#define pinstCDBStr_x                                              0x140D37860
#define pinstCDisplay_x                                            0x140DE9CA8
#define pinstControlledPlayer_x                                    0x140DEC720
#define pinstCResolutionHandler_x                                  0x141485BC0
#define pinstCSidlManager_x                                        0x140E252D0
#define pinstCXWndManager_x                                        0x140E252C0
#define instDynamicZone_x                                          0x140DF02A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140DF02EE
#define instExpeditionName_x                                       0x140DF032E
#define pinstDZMember_x                                            0x140DF03B8
#define pinstDZTimerInfo_x                                         0x140DF03C0
#define pinstEqLogin_x                                             0x140DF7E70
#define instTribute_x                                              0x140B9A7B0
#define pinstEQSoundManager_x                                      0x140D396C0
#define pinstEQSpellStrings_x                                      0x140D1B060
#define pinstSGraphicsEngine_x                                     0x141485958
#define pinstLocalPC_x                                             0x140DE9C88
#define pinstLocalPlayer_x                                         0x140DEC670
#define pinstCMercenaryClientManager_x                             0x140DF3F08
#define pinstMercenaryStats_x                                      0x140E13CD4
#define pinstModelPlayer_x                                         0x140DEC6A0
#define pinstRenderInterface_x                                     0x141485970
#define pinstSkillMgr_x                                            0x140DF6AC8
#define pinstSpawnManager_x                                        0x140DF4B60
#define pinstSpellManager_x                                        0x140DF6D60
#define pinstSpellSets_x                                           0x140C4E678
#define pinstStringTable_x                                         0x140DE9CA0
#define pinstSwitchManager_x                                       0x140DE9B00
#define pinstTarget_x                                              0x140DEC718
#define pinstTaskMember_x                                          0x140B9A2F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140DEC728
#define pinstTradeTarget_x                                         0x140DEC698
#define instTributeActive_x                                        0x140B9A7D9
#define pinstViewActor_x                                           0x140D37DF0
#define pinstWorldData_x                                           0x140DE9C98
#define pinstPlayerPath_x                                          0x140DF4C00
#define pinstTargetIndicator_x                                     0x140DF6FE0
#define EQObject_Top_x                                             0x140DE9C70

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140E0C930
#define pinstCContainerMgr_x                                       0x140D37ED0
#define pinstCContextMenuManager_x                                 0x140E25270
#define pinstCInvSlotMgr_x                                         0x140D37EC0
#define pinstCItemDisplayManager_x                                 0x140E10530
#define pinstCPopupWndManager_x                                    0x140E11C60
#define pinstCSpellDisplayMgr_x                                    0x140E12EA0
#define pinstCTaskManager_x                                        0x140A63740
#define pinstEQSuiteTextureLoader_x                                0x140CAB3E0
#define pinstItemIconCache_x                                       0x140E0D2D0
#define pinstLootFiltersManager_x                                  0x140D36CA0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x14024BB00
#define __CastRay2_x                                               0x14024BB70
#define __ConvertItemTags_x                                        0x14026F830
#define __CleanItemTags_x                                          0x1400A7430
#define __CreateCascadeMenuItems_x                                 0x1401CE060
#define __DoesFileExist_x                                          0x1405DD810
#define __EQGetTime_x                                              0x1405D9D90
#define __ExecuteCmd_x                                             0x1402438F0
#define __FixHeading_x                                             0x1406FFAA0
#define __FlushDxKeyboard_x                                        0x14037B920
#define __get_bearing_x                                            0x14024B670
#define __get_melee_range_x                                        0x14024BE70
#define __GetAnimationCache_x                                      0x1403FA8D0
#define __GetGaugeValueFromEQ_x                                    0x140530F40
#define __GetLabelFromEQ_x                                         0x140532A90
#define __GetXTargetType_x                                         0x1407024C0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x140381120
#define __HeadingDiff_x                                            0x1406FFB00
#define __HelpPath_x                                               0x140DF1F70   // Why?
#define __NewUIINI_x                                               0x140530B60   // Why?
#define __ProcessGameEvents_x                                      0x1402C6930
#define __ProcessKeyboardEvents_x                                  0x14037DC80
#define __ProcessMouseEvents_x                                     0x1402C5FA0
#define __SaveColors_x                                             0x1401CDED0
#define __STMLToText_x                                             0x14061F920
#define __WndProc_x                                                0x14037E9A0
#define CMemoryMappedFile__SetFile_x                               0x1408419F0
#define DrawNetStatus_x                                            0x1402FCA00
#define Util__FastTime_x                                           0x1405D9900
#define __eq_delete_x                                              0x14070A240
#define __eq_new_x                                                 0x14070A844
#define __CopyLayout_x                                             0x1402E6F50
#define __ThrottleFrameRate_x                                      0x1402AA284
#define __ThrottleFrameRateEnd_x                                   0x1402AA2E

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14038EF40
#define CAAWnd__Update_x                                           0x14038E080
#define CAAWnd__UpdateSelected_x                                   0x14038B020

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C7290
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C9F60
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408A04E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C2540

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D8B30
#define AltAdvManager__IsAbilityReady_x                            0x1401D72F0
#define AltAdvManager__GetAAById_x                                 0x1401D7750
#define AltAdvManager__CanTrainAbility_x                           0x1401D77C0
#define AltAdvManager__CanSeeAbility_x                             0x1401D7C60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x14010D0E0
#define CharacterZoneClient__CalcAffectChange_x                    0x14010B4A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x14010B7A0
#define CharacterZoneClient__CanUseItem_x                          0x140123750
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400FE2B0
#define CharacterZoneClient__CastSpell_x                           0x140103BA0
#define CharacterZoneClient__CharacterZoneClient_x                 0x140110F50
#define CharacterZoneClient__Cur_HP_x                              0x14011A4F0
#define CharacterZoneClient__Cur_Mana_x                            0x140123500
#define CharacterZoneClient__FindAffectSlot_x                      0x140109A40
#define CharacterZoneClient__GetAdjustedSkill_x                    0x14011E670
#define CharacterZoneClient__GetBaseSkill_x                        0x14011F990  // CharacterZoneClient::Skill
#define CharacterZoneClient__GetCastingTimeModifier_x              0x140107860
#define CharacterZoneClient__GetCurrentMod_x                       0x140130D20
#define CharacterZoneClient__GetCursorItemCount_x                  0x1401220E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x14012A720
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x14010B1F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400F1690
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC490
#define CharacterZoneClient__GetHPRegen_x                          0x14012A000
#define CharacterZoneClient__GetItemCountInInventory_x             0x140122190
#define CharacterZoneClient__GetItemCountWorn_x                    0x140121E40
#define CharacterZoneClient__GetLastEffectSlot_x                   0x14010B280
#define CharacterZoneClient__GetManaRegen_x                        0x14012AD70
#define CharacterZoneClient__GetMaxEffects_x                       0x140103060
#define CharacterZoneClient__GetModCap_x                           0x140130C10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x14010B110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x140108970
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400F5A20
#define CharacterZoneClient__HasSkill_x                            0x14011E920
#define CharacterZoneClient__IsStackBlocked_x                      0x140106FA0
#define CharacterZoneClient__MakeMeVisible_x                       0x140120610
#define CharacterZoneClient__Max_Endurance_x                       0x14030FF40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011A2B0
#define CharacterZoneClient__Max_Mana_x                            0x14030FCE0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14012BB20
#define CharacterZoneClient__RemovePCAffectex_x                    0x140108FA0
#define CharacterZoneClient__SpellDuration_x                       0x140108450
#define CharacterZoneClient__TotalEffect_x                         0x14010C7E0
#define CharacterZoneClient__UseSkill_x                            0x14012C410


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403ADB80

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B9AC0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403B4050
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403B1AE0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403BEA40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1409049F0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403E5F00
#define CChatWindowManager__InitContextMenu_x                      0x1403DD5E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403E4580
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403E5B00
#define CChatWindowManager__CreateChatWindow_x                     0x1403E4CA0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140135500

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E6B00
#define CChatWindow__Clear_x                                       0x1403E8110
#define CChatWindow__WndNotification_x                             0x1403E8820
#define CChatWindow__AddHistory_x                                  0x1403E78D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140634D00
#define CContextMenu__RemoveMenuItem_x                             0x140635140
#define CContextMenu__RemoveAllMenuItems_x                         0x140635160
#define CContextMenu__CheckMenuItem_x                              0x140635210
#define CContextMenu__SetMenuItem_x                                0x140635060
#define CContextMenu__AddSeparator_x                               0x140635030

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140635890
#define CContextMenuManager__RemoveMenu_x                          0x140635920
#define CContextMenuManager__PopupMenu_x                           0x140635A40
#define CContextMenuManager__Flush_x                               0x140635800
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403F4020

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406D2F90
#define CChatService__GetFriendName_x                              0x1406D2FA0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140631410
#define CComboWnd__Draw_x                                          0x140630720
#define CComboWnd__GetCurChoice_x                                  0x140631180  // unused
#define CComboWnd__GetListRect_x                                   0x140630CC0
#define CComboWnd__GetTextRect_x                                   0x1406314B0
#define CComboWnd__InsertChoice_x                                  0x140630E70
#define CComboWnd__SetColors_x                                     0x140630E30
#define CComboWnd__SetChoice_x                                     0x140631160
#define CComboWnd__GetItemCount_x                                  0x1406311A0
#define CComboWnd__GetCurChoiceText_x                              0x1406311F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1406311C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140630F30

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403F1330
#define CContainerWnd__SetContainer_x                              0x1403F2D00
#define CContainerWnd__vftable_x                                   0x1408D1F70

// CDisplay
#define CDisplay__cameraType_x                                     0x140D37B84
#define CDisplay__ZoneMainUI_x                                     0x1401C83C0
#define CDisplay__PreZoneMainUI_x                                  0x1401C83E0
#define CDisplay__CleanGameUI_x                                    0x1401CDC50
#define CDisplay__GetClickedActor_x                                0x1401BF060
#define CDisplay__GetUserDefinedColor_x                            0x1401B5C80
#define CDisplay__InitCharSelectUI_x                               0x1401C7CC0
#define CDisplay__ReloadUI_x                                       0x1401C7580
#define CDisplay__WriteTextHD2_x                                   0x1401BAEC0
#define CDisplay__TrueDistance_x                                   0x1401C3130
#define CDisplay__SetViewActor_x                                   0x1401BE8A0
#define CDisplay__GetFloorHeight_x                                 0x1401BB1F0
#define CDisplay__SetRenderWindow_x                                0x1401B9910
#define CDisplay__ToggleScreenshotMode_x                           0x1401BE250
#define CDisplay__RealRender_World_x                               0x1401B8A60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14065BA80
#define CEditWnd__DrawCaret_x                                      0x140639610  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14063BCC0
#define CEditWnd__GetCaretPt_x                                     0x14063A920  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14063A6B0
#define CEditWnd__GetDisplayString_x                               0x14063A560
#define CEditWnd__GetHorzOffset_x                                  0x140638AC0
#define CEditWnd__GetLineForPrintableChar_x                        0x14063BB70
#define CEditWnd__GetSelStartPt_x                                  0x14063A970  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14063A3A0
#define CEditWnd__PointFromPrintableChar_x                         0x14063B780
#define CEditWnd__ReplaceSelection_x                               0x14063B2C0
#define CEditWnd__SelectableCharFromPoint_x                        0x14063B8D0
#define CEditWnd__SetEditable_x                                    0x14063AA60
#define CEditWnd__SetWindowText_x                                  0x14063A080

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402AD2F0
#define CEverQuest__ClickedPlayer_x                                0x14029C5E0
#define CEverQuest__CreateTargetIndicator_x                        0x1402C2FA0
#define CEverQuest__DeleteTargetIndicator_x                        0x1402C3030
#define CEverQuest__DoTellWindow_x                                 0x140135600 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401358E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140290590
#define CEverQuest__dsp_chat_x                                     0x140135CF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402BCE70
#define CEverQuest__Emote_x                                        0x1402ADB19
#define CEverQuest__EnterZone_x                                    0x1402A6650
#define CEverQuest__GetBodyTypeDesc_x                              0x1402B4370
#define CEverQuest__GetClassDesc_x                                 0x1402B4980
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402B4F40
#define CEverQuest__GetDeityDesc_x                                 0x1402C1020
#define CEverQuest__GetLangDesc_x                                  0x1402B5100
#define CEverQuest__GetRaceDesc_x                                  0x1402B4950
#define CEverQuest__InterpretCmd_x                                 0x1402C1720
#define CEverQuest__LeftClickedOnPlayer_x                          0x140295120
#define CEverQuest__LMouseUp_x                                     0x140292D50
#define CEverQuest__RightClickedOnPlayer_x                         0x140295E40
#define CEverQuest__RMouseUp_x                                     0x1402943B0
#define CEverQuest__SetGameState_x                                 0x140290310
#define CEverQuest__UPCNotificationFlush_x                         0x1402BCD30 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402B6810
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402AEB20
#define CEverQuest__ReportSuccessfulHit_x                          0x1402AF850

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x140406830
#define CGaugeWnd__CalcLinesFillRect_x                             0x140406890
#define CGaugeWnd__Draw_x                                          0x140405D90

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E9770
#define CGuild__GetGuildName_x                                     0x1400E77D0
#define CGuild__GetGuildIndex_x                                    0x1400E8070

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140426E00

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402D99A0
#define CHotButton__SetCheck_x                                     0x1402D9520

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140436480
#define CInvSlotMgr__MoveItem_x                                    0x140434B90
#define CInvSlotMgr__SelectSlot_x                                  0x1404365A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140432F20
#define CInvSlot__SliderComplete_x                                 0x14042F270
#define CInvSlot__GetItemBase_x                                    0x14042EA00
#define CInvSlot__UpdateItem_x                                     0x14042EC10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140437510
#define CInvSlotWnd__HandleLButtonUp_x                             0x140438010

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140454AA0
#define CItemDisplayWnd__UpdateStrings_x                           0x140454370
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140446D00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140447420
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404559B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529A90
#define CSpellDisplayWnd__UpdateStrings_x                          0x140529A10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140568E00

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14045CEC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140178BB0

// CLabel
#define CLabel__UpdateText_x                                       0x140463F60

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405FCCF0
#define CListWnd__dCListWnd_x                                      0x1405FCF80
#define CListWnd__vftable_x                                        0x140903DE8
#define CListWnd__AddColumn_x                                      0x140603600
#define CListWnd__AddColumn1_x                                     0x1406036B0
#define CListWnd__AddLine_x                                        0x140603A70
#define CListWnd__AddString_x                                      0x140603880
#define CListWnd__CalculateFirstVisibleLine_x                      0x140603260
#define CListWnd__CalculateVSBRange_x                              0x140602F70
#define CListWnd__ClearSel_x                                       0x140604900
#define CListWnd__ClearAllSel_x                                    0x140604960
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1406056F0
#define CListWnd__Compare_x                                        0x1406025C0
#define CListWnd__Draw_x                                           0x1405FD100
#define CListWnd__DrawColumnSeparators_x                           0x140600D70
#define CListWnd__DrawHeader_x                                     0x1406014D0
#define CListWnd__DrawItem_x                                       0x140601B90
#define CListWnd__DrawLine_x                                       0x140601010
#define CListWnd__DrawSeparator_x                                  0x140600E30
#define CListWnd__EnableLine_x                                     0x1406001C0
#define CListWnd__EnsureVisible_x                                  0x1406055F0
#define CListWnd__ExtendSel_x                                      0x140604780
#define CListWnd__GetColumnTooltip_x                               0x1405FFC30  // unused
#define CListWnd__GetColumnMinWidth_x                              0x1405FFCB0
#define CListWnd__GetColumnWidth_x                                 0x1405FFBA0
#define CListWnd__GetCurSel_x                                      0x1405FF400
#define CListWnd__GetItemAtPoint_x                                 0x1406005E0
#define CListWnd__GetItemAtPoint1_x                                0x140600760
#define CListWnd__GetItemData_x                                    0x1405FF4A0
#define CListWnd__GetItemHeight_x                                  0x1405FF940
#define CListWnd__GetItemIcon_x                                    0x1405FF610
#define CListWnd__GetItemRect_x                                    0x1406002F0
#define CListWnd__GetItemText_x                                    0x1405FF4F0
#define CListWnd__GetSelList_x                                     0x1406049C0
#define CListWnd__GetSeparatorRect_x                               0x140600B10
#define CListWnd__InsertLine_x                                     0x140604280
#define CListWnd__RemoveLine_x                                     0x140604560
#define CListWnd__SetColors_x                                      0x140602F50
#define CListWnd__SetColumnJustification_x                         0x140602B50
#define CListWnd__SetColumnLabel_x                                 0x140603810
#define CListWnd__SetColumnWidth_x                                 0x140602A50
#define CListWnd__SetCurSel_x                                      0x1406046C0
#define CListWnd__SetItemColor_x                                   0x140605160
#define CListWnd__SetItemData_x                                    0x140605120
#define CListWnd__SetItemText_x                                    0x140604C20
#define CListWnd__ShiftColumnSeparator_x                           0x140602C50
#define CListWnd__Sort_x                                           0x1406028B0
#define CListWnd__ToggleSel_x                                      0x1406046F0
#define CListWnd__SetColumnsSizable_x                              0x140602D80
#define CListWnd__SetItemWnd_x                                     0x140604FB0
#define CListWnd__GetItemWnd_x                                     0x1405FF680
#define CListWnd__SetItemIcon_x                                    0x140604CD0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1406033D0
#define CListWnd__SetVScrollPos_x                                  0x140602A20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14047E450

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x140478590
#define MapViewMap__dMapViewMap_x                                  0x1404786C0
#define MapViewMap__vftable_x                                      0x1408DD8D0
#define MapViewMap__Clear_x                                        0x14047C8E0
#define MapViewMap__SetZoom_x                                      0x140483B20
#define MapViewMap__HandleLButtonDown_x                            0x1404787B0
#define MapViewMap__GetWorldCoordinates_x                          0x14047C350

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404A6050    // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A6AC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A7310
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A4610
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404B2080
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A5BA0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140685280
#define CPacketScrambler__hton_x                                   0x140685270

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x14062C790
#define CSidlManagerBase__CreatePageWnd_x                          0x14062BEF0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140626F00
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x140626E50
#define CSidlManagerBase__FindAnimation1_x                         0x140627300
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1406277C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140627570
#define CSidlManagerBase__CreateLabel_x                            0x14051E280
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14062ACB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140860B70
#define CSidlManagerBase__CreateXWnd_x                             0x14062B010

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051E760
#define CSidlManager__CreateXWnd_x                                 0x14051DE10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140622380
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140622250
#define CSidlScreenWnd__ConvertToRes_x                             0x1406557D0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140621960
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140621670
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140621730
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1406217F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140622B20
#define CSidlScreenWnd__EnableIniStorage_x                         0x140623100
#define CSidlScreenWnd__GetChildItem_x                             0x140623050
#define CSidlScreenWnd__GetSidlPiece_x                             0x140866290
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14060E340 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140620FD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140623160
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140624010
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140620070
#define CSidlScreenWnd__m_layoutCopy_x                             0x140E25118
#define CSidlScreenWnd__StoreIniInfo_x                             0x140623A20
#define CSidlScreenWnd__StoreIniVis_x                              0x140623E80
#define CSidlScreenWnd__vftable_x                                  0x140904E50
#define CSidlScreenWnd__WndNotification_x                          0x1406229B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14035DF00 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14035E140 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14035D570
#define CSkillMgr__IsActivatedSkill_x                              0x14035D660
#define CSkillMgr__IsCombatSkill_x                                 0x14035D5D0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140636CC0
#define CSliderWnd__SetValue_x                                     0x140636A70
#define CSliderWnd__SetNumTicks_x                                  0x140636AC0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140525B70

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140641B40
#define CStmlWnd__CalculateHSBRange_x                              0x1406107E0
#define CStmlWnd__CalculateVSBRange_x                              0x140642DB0
#define CStmlWnd__CanBreakAtCharacter_x                            0x140649440
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14064A1E0
#define CStmlWnd__ForceParseNow_x                                  0x140642320
#define CStmlWnd__GetNextTagPiece_x                                0x140649370
#define CStmlWnd__GetVisibleText_x                                 0x140642340
#define CStmlWnd__InitializeWindowVariables_x                      0x140649FE0
#define CStmlWnd__MakeStmlColorTag_x                               0x1406411F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x140641240
#define CStmlWnd__SetSTMLText_x                                    0x14063FAA0
#define CStmlWnd__StripFirstSTMLLines_x                            0x14064B690
#define CStmlWnd__UpdateHistoryString_x                            0x14064A420

// CTabWnd
#define CTabWnd__Draw_x                                            0x14063E6D0
#define CTabWnd__DrawCurrentPage_x                                 0x14063F1C0
#define CTabWnd__DrawTab_x                                         0x14063EDB0
#define CTabWnd__GetCurrentPage_x                                  0x14063DC40
#define CTabWnd__GetCurrentTabIndex_x                              0x14063DC30
#define CTabWnd__GetPageFromTabIndex_x                             0x14063ECB0
#define CTabWnd__GetPageInnerRect_x                                0x14063DEE0
#define CTabWnd__GetTabInnerRect_x                                 0x14063DE00
#define CTabWnd__GetTabRect_x                                      0x14063DC80
#define CTabWnd__InsertPage_x                                      0x14063E1B0
#define CTabWnd__RemovePage_x                                      0x14063E380
#define CTabWnd__SetPage_x                                         0x14063DF80
#define CTabWnd__SetPageRect_x                                     0x14063E580
#define CTabWnd__UpdatePage_x                                      0x14063EB20

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14063D5B0
#define CPageWnd__SetTabText_x                                     0x14063D540

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFEF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DFCA0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14060A5F0
#define CTextureFont__DrawWrappedText1_x                           0x14060A500
#define CTextureFont__DrawWrappedText2_x                           0x14060A720
#define CTextureFont__GetTextExtent_x                              0x14060A9D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140651C10

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405EFE80

// CXStr
#define CXStr__gFreeLists_x                                        0x140CAAD60
#define CXStr__gCXStrAccess_x                                      0x140E245C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x1406129F0
#define CXWnd__ClrFocus_x                                          0x140612220
#define CXWnd__Destroy_x                                           0x1406122F0
#define CXWnd__DoAllDrawing_x                                      0x14060D730
#define CXWnd__DrawChildren_x                                      0x14060D6E0
#define CXWnd__DrawColoredRect_x                                   0x14060DE30
#define CXWnd__DrawTooltip_x                                       0x14060BCC0
#define CXWnd__DrawTooltipAtPoint_x                                0x14060BD80
#define CXWnd__GetBorderFrame_x                                    0x14060DB00
#define CXWnd__GetChildItem_x                                      0x140612C80
#define CXWnd__GetChildWndAt_x                                     0x140612AB0
#define CXWnd__GetClientClipRect_x                                 0x140610510
#define CXWnd__GetRelativeRect_x                                   0x1406109D0
#define CXWnd__GetScreenClipRect_x                                 0x140610660
#define CXWnd__GetScreenRect_x                                     0x1406108D0
#define CXWnd__GetTooltipRect_x                                    0x14060DEF0
#define CXWnd__IsActive_x                                          0x14060E7B0
#define CXWnd__IsDescendantOf_x                                    0x140611550
#define CXWnd__IsReallyVisible_x                                   0x140611580
#define CXWnd__IsType_x                                            0x1406133E0
#define CXWnd__Minimize_x                                          0x140611E30
#define CXWnd__ProcessTransition_x                                 0x140612410
#define CXWnd__Refade_x                                            0x140611AA0
#define CXWnd__Resize_x                                            0x140611D80
#define CXWnd__Right_x                                             0x140612790
#define CXWnd__SetFocus_x                                          0x1406121D0
#define CXWnd__SetFont_x                                           0x140612260
#define CXWnd__SetKeyTooltip_x                                     0x140613170
#define CXWnd__SetMouseOver_x                                      0x14060F2C0
#define CXWnd__SetParent_x                                         0x140611180
#define CXWnd__StartFade_x                                         0x1406113D0
#define CXWnd__vftable_x                                           0x140904560
#define CXWnd__CXWnd_x                                             0x14060ACA0
#define CXWnd__dCXWnd_x                                            0x14060B2B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1406569B0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140615EE0
#define CXWndManager__DrawWindows_x                                0x140616020
#define CXWndManager__GetKeyboardFlags_x                           0x140619240
#define CXWndManager__HandleKeyboardMsg_x                          0x140618D10
#define CXWndManager__RemoveWnd_x                                  0x140619620
#define CXWndManager__RemovePendingDeletionWnd_x                   0x140619DE0

// CDBStr
#define CDBStr__GetString_x                                        0x1401B4600

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B6FF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400FCF80
#define CCharacterListWnd__EnterWorld_x                            0x1400FC930
#define CCharacterListWnd__Quit_x                                  0x1400FC490
#define CCharacterListWnd__UpdateList_x                            0x1400FCAF0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140686A30
#define ItemBase__CreateItemTagString_x                            0x140687420
#define ItemBase__GetImageNum_x                                    0x140689620
#define ItemBase__GetItemValue_x                                   0x14068B110
#define ItemBase__IsEmpty_x                                        0x14068CD50
#define ItemBase__IsKeyRingItem_x                                  0x14068D5B0
#define ItemBase__ValueSellMerchant_x                              0x140691820
#define ItemClient__CanDrop_x                                      0x1402E0660
#define ItemClient__CanGoInBag_x                                   0x1402E0780
#define ItemClient__CreateItemClient_x                             0x1402DF4B0
#define ItemClient__dItemClient_x                                  0x1402DF3E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401D9F80
#define EQ_LoadingS__Array_x                                       0x140B9ECB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14069CFC0
#define PcBase__GetCombatAbility_x                                 0x14069D650
#define PcBase__GetCombatAbilityTimer_x                            0x14069D6F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14069DE20
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14069E690
#define PcClient__AlertInventoryChanged_x                          0x140304EB0
#define PcClient__GetConLevel_x                                    0x1403056F0  // PcClient::ConsiderTarget
#define PcClient__HasLoreItem_x                                    0x140306160
#define PcZoneClient__GetItemRecastTimer_x                         0x1403139D0
#define PcZoneClient__RemoveMyAffect_x                             0x140317C10

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402482D0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402489F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140248A50  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140248940  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140283200  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401AF370

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406FDBA0
#define PlayerBase__CanSee1_x                                      0x1406FDC70
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406FD870
#define PlayerBase__HasProperty_x                                  0x1406FD720
#define PlayerBase__IsTargetable_x                                 0x1406FDDD0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14032E150
#define PlayerClient__dPlayerClient_x                              0x14031EB40
#define PlayerClient__GetPcClient_x                                0x14032C270
#define PlayerClient__PlayerClient_x                               0x14031E940
#define PlayerClient__SetNameSpriteState_x                         0x1403242F0
#define PlayerClient__SetNameSpriteTint_x                          0x140325350
#define PlayerZoneClient__ChangeHeight_x                           0x140340200
#define PlayerZoneClient__DoAttack_x                               0x14033B900
#define PlayerZoneClient__GetLevel_x                               0x140342F20
#define PlayerZoneClient__IsValidTeleport_x                        0x140284AB0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401D0350

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140334E10  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140334ED0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140334F80
#define PlayerManagerClient__CreatePlayer_x                        0x140334930
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406FCE80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402E4CD0
#define pinstKeyPressHandler_x                                     0x140DF3684
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402E4E50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402E4DF0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402E62C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402E6310
#define KeypressHandler__HandleKeyUp_x                             0x1402E63F0
#define KeypressHandler__SaveKeymapping_x                          0x1402E6A60  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406B48C0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406AE7E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140313270  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140310E10
#define PcZoneClient__GetPcSkillLimit_x                            0x140317740
#define PcZoneClient__RemovePetEffect_x                            0x140318020
#define PcZoneClient__HasAlternateAbility_x                        0x14030FAD0
#define PcZoneClient__CanEquipItem_x                               0x140310260
#define PcZoneClient__GetItemByID_x                                0x140314190
#define PcZoneClient__RemoveBuffEffect_x                           0x1403180F0
#define PcZoneClient__BandolierSwap_x                              0x1403114D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140313940

// Doors
#define EQSwitch__UseSwitch_x                                      0x14028AEF0

// IconCache
#define IconCache__GetIcon_x                                       0x1403FA260

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403F0000
#define CContainerMgr__CloseContainer_x                            0x1403F0360
#define CContainerMgr__OpenExperimentContainer_x                   0x1403F1010

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404E3300

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402D7A60

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14046CFA0
#define CLootWnd__RequestLootSlot_x                                0x14046C0B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14020AD20
#define EQ_Spell__SpellAffects_x                                   0x14020B340
#define EQ_Spell__SpellAffectBase_x                                0x14020B000
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1401107D0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x140110780
#define EQ_Spell__IsSPAStacking_x                                  0x14020C5F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14020B5B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14020C620
#define __IsResEffectSpell_x                                       0x140110160

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5CB0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140540A40  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140540050
#define CTargetWnd__RefreshTargetBuffs_x                           0x140540450
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053EC60

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545D20  // CTaskWnd::UpdateTimes
#define CTaskWnd__ConfirmAbandonTask_x                             0x1405495A0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401AC8E0
#define CTaskManager__HandleMessage_x                              0x1401AA270
#define CTaskManager__GetTaskStatus_x                              0x1401AC9B0
#define CTaskManager__GetElementDescription_x                      0x1401ACA30

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140204C50
#define EqSoundManager__PlayScriptMp3_x                            0x140204EF0
#define EqSoundManager__SoundAssistPlay_x                          0x140362EA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140362290  // WaveInstance::Play

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x140197660

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14063CAD0
#define CTextureAnimation__SetCurCell_x                            0x14063C830

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402D4AB0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406D0B90
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406D0C10
#define CharacterBase__IsExpansionFlag_x                           0x140241EE0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403D0F10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403D1A20
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403D1B00

// messages
#define msg_spell_worn_off_x                                       0x140237250
#define msg_new_text_x                                             0x1402287E0
#define __msgTokenTextParam_x                                      0x140239E80
#define msgTokenText_x                                             0x14023A290

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140368300
#define SpellManager__GetSpellByGroupAndRank_x                     0x140367790

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140702E40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404643C0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403F52E0
#define CCursorAttachment__AttachToCursor1_x                       0x1403F5390
#define CCursorAttachment__Deactivate_x                            0x1403F6D30

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140650080
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1406509A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1406504F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140171A50
#define CFindItemWnd__Update_x                                     0x140172840
#define CFindItemWnd__PickupSelectedItem_x                         0x14016FF00

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14017DC10
#define LootFiltersManager__GetItemFilterData_x                    0x14017D350
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14017D390
#define LootFiltersManager__SetItemLootFilter_x                    0x14017D620

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404CEA30

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140709C80
#define CResolutionHandler__GetWindowedStyle_x                     0x14035C250

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403EC190

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406D4910  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406D4A20  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140412620
#define CGroupWnd__UpdateDisplay_x                                 0x1404118C0

// ItemBase
#define ItemBase__IsLore_x                                         0x14068D680
#define ItemBase__IsLoreEquipped_x                                 0x14068D7E0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402F7CF0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140283120
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402832C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140283310

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E330

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14014AF40
#define FactionManagerClient__HandleFactionMessage_x               0x14014B840
#define FactionManagerClient__GetFactionStanding_x                 0x14014C6A0
#define FactionManagerClient__GetMaxFaction_x                      0x14014C6A0
#define FactionManagerClient__GetMinFaction_x                      0x14014C610

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CDC10

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14015A3F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401E2980
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401E3690
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401E3A90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401E3A10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14036C780

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E330

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402488C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405EBA10

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A69E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140381DE0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400A7DB0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
