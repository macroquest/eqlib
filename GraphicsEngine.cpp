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

#include "pch.h"
#include "GraphicsEngine.h"

#include "Globals.h"

namespace eqlib {


//============================================================================
// CDisplay
//============================================================================

#ifdef CDisplay__MoveMissile_x
FUNCTION_AT_ADDRESS(int, CDisplay::MoveMissile(EQMissile*), CDisplay__MoveMissile);
#endif
#ifdef CDisplay__GetOnActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::GetOnActor(CActorInterface*, PlayerZoneClient*), CDisplay__GetOnActor);
#endif
#ifdef CDisplay__DefineSoloMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::DefineSoloMode(), CDisplay__DefineSoloMode);
#endif
#ifdef CDisplay__CDisplay__CDisplay_x
FUNCTION_AT_ADDRESS(CDisplay::CDisplay(HWND), CDisplay__CDisplay);
#endif
#ifdef CDisplay__dCDisplay_x
FUNCTION_AT_ADDRESS(CDisplay::~CDisplay(), CDisplay__dCDisplay);
#endif
#ifdef CDisplay__ResetRenderWindow_x
FUNCTION_AT_ADDRESS(void, CDisplay::ResetRenderWindow(), CDisplay__ResetRenderWindow);
#endif
#ifdef CDisplay__SetCCreateCamera_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetCCreateCamera(int), CDisplay__SetCCreateCamera);
#endif
#ifdef CDisplay__SetBoneSpriteTint_x
FUNCTION_AT_ADDRESS(int, CDisplay::SetBoneSpriteTint(T3D_DAG*, T3D_RGB*), CDisplay__SetBoneSpriteTint);
#endif
#ifdef CDisplay__ReplaceMaterial_x
FUNCTION_AT_ADDRESS(int, CDisplay::ReplaceMaterial(char*, char*, T3D_HIERARCHICALSPRITEINSTANCE*, T3D_RGB*, int), CDisplay__ReplaceMaterial);
#endif
#ifdef CDisplay__ReplaceCloakMaterials_x
FUNCTION_AT_ADDRESS(int, CDisplay::ReplaceCloakMaterials(int, T3D_HIERARCHICALSPRITEINSTANCE*, T3D_RGB*), CDisplay__ReplaceCloakMaterials);
#endif
#ifdef CDisplay__ReloadUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::ReloadUI(bool, bool), CDisplay__ReloadUI);
#endif
#ifdef CDisplay__FixHeading_x
FUNCTION_AT_ADDRESS(float, CDisplay::FixHeading(float), CDisplay__FixHeading);
#endif
#ifdef CDisplay__GetFloorHeight_x
FUNCTION_AT_ADDRESS(float, CDisplay::GetFloorHeight(float, float, float, float, const CVector3&, CActorApplicationData*, EActorType, float), CDisplay__GetFloorHeight);
#endif
#ifdef CDisplay__HeadingDiff_x
FUNCTION_AT_ADDRESS(float, CDisplay::HeadingDiff(float, float, float*), CDisplay__HeadingDiff);
#endif
#ifdef CDisplay__DeleteParticleCloudInstance_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteParticleCloudInstance(T3D_PARTICLECLOUDINSTANCE**), CDisplay__DeleteParticleCloudInstance);
#endif
#ifdef CDisplay__ProcessParticleEmitter_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessParticleEmitter(EQSwitch*), CDisplay__ProcessParticleEmitter);
#endif
#ifdef CDisplay__SlideSwitchLeftRight_x
FUNCTION_AT_ADDRESS(bool, CDisplay::SlideSwitchLeftRight(EQSwitch*, float, int, float), CDisplay__SlideSwitchLeftRight);
#endif
#ifdef CDisplay__ProcessSwitches_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessSwitches(), CDisplay__ProcessSwitches);
#endif
#ifdef CDisplay__default_cameras_x
FUNCTION_AT_ADDRESS(void, CDisplay::default_cameras(), CDisplay__default_cameras);
#endif
#ifdef CDisplay__is_3dON_x
FUNCTION_AT_ADDRESS(int, CDisplay::is_3dON(), CDisplay__is_3dON);
#endif
#ifdef CDisplay__is_ParticleSystemON_x
FUNCTION_AT_ADDRESS(int, CDisplay::is_ParticleSystemON(), CDisplay__is_ParticleSystemON);
#endif
#ifdef CDisplay__InitCommonLights_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitCommonLights(), CDisplay__InitCommonLights);
#endif
#ifdef CDisplay__GetNewPCIniFlag_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetNewPCIniFlag(int, int), CDisplay__GetNewPCIniFlag);
#endif
#ifdef CDisplay__ShouldLoadNewPcModel_x
FUNCTION_AT_ADDRESS(int, CDisplay::ShouldLoadNewPcModel(int, int), CDisplay__ShouldLoadNewPcModel);
#endif
#ifdef CDisplay__GetIniRaceName_x
FUNCTION_AT_ADDRESS(char*, CDisplay::GetIniRaceName(int), CDisplay__GetIniRaceName);
#endif
#ifdef CDisplay__InitWorld_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitWorld(), CDisplay__InitWorld);
#endif
#ifdef CDisplay__InitDDraw_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitDDraw(), CDisplay__InitDDraw);
#endif
#ifdef CDisplay__InitNewUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitNewUI(), CDisplay__InitNewUI);
#endif
#ifdef CXWndDrawTemplate__operator_equal_x
FUNCTION_AT_ADDRESS(CXWndDrawTemplate&, CXWndDrawTemplate::operator=(const CXWndDrawTemplate&), CXWndDrawTemplate__operator_equal);
#endif
#ifdef CScrollbarTemplate__operator_equal_x
FUNCTION_AT_ADDRESS(CScrollbarTemplate&, CScrollbarTemplate::operator=(const CScrollbarTemplate&), CScrollbarTemplate__operator_equal);
#endif
#ifdef CDisplay__InitCharSelectUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitCharSelectUI(), CDisplay__InitCharSelectUI);
#endif
#ifdef CDisplay__InitGameUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitGameUI(), CDisplay__InitGameUI);
#endif
#ifdef CDisplay__CleanCharSelectUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanCharSelectUI(), CDisplay__CleanCharSelectUI);
#endif
#ifdef CDisplay__CleanGameUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanGameUI(), CDisplay__CleanGameUI);
#endif
#ifdef CDisplay__CleanUpNewUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanUpNewUI(), CDisplay__CleanUpNewUI);
#endif
#ifdef CDisplay__ActivateMainUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::ActivateMainUI(bool), CDisplay__ActivateMainUI);
#endif
#ifdef CDisplay__DeactivateMainUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeactivateMainUI(), CDisplay__DeactivateMainUI);
#endif
#ifdef CDisplay__NewUIProcessEscape_x
FUNCTION_AT_ADDRESS(void, CDisplay::NewUIProcessEscape(), CDisplay__NewUIProcessEscape);
#endif
#ifdef CDisplay__KeyMapUpdated_x
FUNCTION_AT_ADDRESS(void, CDisplay::KeyMapUpdated(), CDisplay__KeyMapUpdated);
#endif
#ifdef CDisplay__GetWorldFilePath_x
FUNCTION_AT_ADDRESS(bool, CDisplay::GetWorldFilePath(char*, const char*), CDisplay__GetWorldFilePath);
#endif
#ifdef CDisplay__LoadWorldFile_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadWorldFile(char*, char*, int, unsigned char), CDisplay__LoadWorldFile);
#endif
#ifdef CDisplay__LoadNPCFromS3D_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadNPCFromS3D(char*, char*, char*), CDisplay__LoadNPCFromS3D);
#endif
#ifdef CDisplay__LoadBMPFile_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadBMPFile(), CDisplay__LoadBMPFile);
#endif
#ifdef CDisplay__StartWorldDisplay_Bailout_x
FUNCTION_AT_ADDRESS(void, CDisplay::StartWorldDisplay_Bailout(const char*), CDisplay__StartWorldDisplay_Bailout);
#endif
#ifdef CDisplay__StopWorldDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::StopWorldDisplay(), CDisplay__StopWorldDisplay);
#endif
#ifdef CDisplay__SetGammaCorrection_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetGammaCorrection(float), CDisplay__SetGammaCorrection);
#endif
#ifdef CDisplay__SetPCloudDensity_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetPCloudDensity(int), CDisplay__SetPCloudDensity);
#endif
#ifdef CDisplay__CleanUpDDraw_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanUpDDraw(), CDisplay__CleanUpDDraw);
#endif
#ifdef CDisplay__IsShield_x
FUNCTION_AT_ADDRESS(unsigned int, CDisplay::IsShield(int) const, CDisplay__IsShield);
#endif
#ifdef CDisplay__GetItemType_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetItemType(int), CDisplay__GetItemType);
#endif
#ifdef CDisplay__GetUserDefinedColor_x
FUNCTION_AT_ADDRESS(COLORREF, CDisplay::GetUserDefinedColor(int), CDisplay__GetUserDefinedColor);
#endif
#ifdef CDisplay__SetUserDefinedColor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetUserDefinedColor(int, int, int, int), CDisplay__SetUserDefinedColor);
#endif
#ifdef CDisplay__InitUserDefinedColors_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitUserDefinedColors(), CDisplay__InitUserDefinedColors);
#endif
#ifdef CDisplay__WriteTextHD2_x
FUNCTION_AT_ADDRESS(int, CDisplay::WriteTextHD2(const char*, int, int, int), CDisplay__WriteTextHD2);
#endif
#ifdef CDisplay__SetActorScaleFactor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorScaleFactor(struct T3D_tagACTORINSTANCE*, float, unsigned char), CDisplay__SetActorScaleFactor);
#endif
#ifdef CDisplay__ShowDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::ShowDisplay(), CDisplay__ShowDisplay);
#endif
#ifdef CDisplay__CheckForScreenModeToggle_x
FUNCTION_AT_ADDRESS(void, CDisplay::CheckForScreenModeToggle(), CDisplay__CheckForScreenModeToggle);
#endif
#ifdef CDisplay__Render_World_x
FUNCTION_AT_ADDRESS(void, CDisplay::Render_World(), CDisplay__Render_World);
#endif
#ifdef CDisplay__SetGenericEnvironment_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetGenericEnvironment(), CDisplay__SetGenericEnvironment);
#endif
#ifdef CDisplay__SetupEmitterEnvironment_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetupEmitterEnvironment(), CDisplay__SetupEmitterEnvironment);
#endif
#ifdef CDisplay__UpdateMobileEmitterLocations_x
FUNCTION_AT_ADDRESS(void, CDisplay::UpdateMobileEmitterLocations(), CDisplay__UpdateMobileEmitterLocations);
#endif
#ifdef CDisplay__RealRender_World_x
FUNCTION_AT_ADDRESS(void, CDisplay::RealRender_World(), CDisplay__RealRender_World);
#endif
#ifdef CDisplay__Render_MinWorld_x
FUNCTION_AT_ADDRESS(void, CDisplay::Render_MinWorld(), CDisplay__Render_MinWorld);
#endif
#ifdef CDisplay__StartWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::StartWeather(int, unsigned char), CDisplay__StartWeather);
#endif
#ifdef CDisplay__ProcessWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessWeather(), CDisplay__ProcessWeather);
#endif
#ifdef CDisplay__StopWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::StopWeather(int, unsigned char), CDisplay__StopWeather);
#endif
#ifdef CDisplay__LightningStrike_x
FUNCTION_AT_ADDRESS(void, CDisplay::LightningStrike(), CDisplay__LightningStrike);
#endif
#ifdef CDisplay__GetNearestPlayerInView_x
FUNCTION_AT_ADDRESS(EQPlayer*, CDisplay::GetNearestPlayerInView(float, bool), CDisplay__GetNearestPlayerInView);
#endif
#ifdef CDisplay__ProcessEffects_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessEffects(), CDisplay__ProcessEffects);
#endif
#ifdef CDisplay__ProcessCloud_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessCloud(), CDisplay__ProcessCloud);
#endif
#ifdef CDisplay__DDrawUpdateDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::DDrawUpdateDisplay(), CDisplay__DDrawUpdateDisplay);
#endif
#ifdef CDisplay__SetViewActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewActor(CActorInterface*), CDisplay__SetViewActor);
#endif
#ifdef CDisplay__SetRenderWindow_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetRenderWindow(int mode), CDisplay__SetRenderWindow);
#endif
#ifdef CDisplay__ToggleScreenshotMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleScreenshotMode(), CDisplay__ToggleScreenshotMode);
#endif
#ifdef CDisplay__SwitchToDefaultCameraMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::SwitchToDefaultCameraMode(), CDisplay__SwitchToDefaultCameraMode);
#endif
#ifdef CDisplay__SetYon_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetYon(float), CDisplay__SetYon);
#endif
#ifdef CDisplay__SetActorYon_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorYon(float), CDisplay__SetActorYon);
#endif
#ifdef CDisplay__SetViewAngle_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewAngle(int), CDisplay__SetViewAngle);
#endif
#ifdef CDisplay__UpdateCameraAfterModeSwitch_x
FUNCTION_AT_ADDRESS(void, CDisplay::UpdateCameraAfterModeSwitch(), CDisplay__UpdateCameraAfterModeSwitch);
#endif
#ifdef CDisplay__ChangeVideoMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::ChangeVideoMode(), CDisplay__ChangeVideoMode);
#endif
#ifdef CDisplay__ToggleView_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleView(), CDisplay__ToggleView);
#endif
#ifdef CDisplay__SetFog_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetFog(bool, float, float, unsigned char, unsigned char, unsigned char), CDisplay__SetFog);
#endif
#ifdef CDisplay__ClearScreen_x
FUNCTION_AT_ADDRESS(void, CDisplay::ClearScreen(), CDisplay__ClearScreen);
#endif
#ifdef CDisplay__CreatePlayerActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::CreatePlayerActor(EQPlayer*), CDisplay__CreatePlayerActor);
#endif
#ifdef CDisplay__SetActorUserData_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorUserData(struct T3D_tagACTORINSTANCE*, void*), CDisplay__SetActorUserData);
#endif
#ifdef CDisplay__CreateLight_x
FUNCTION_AT_ADDRESS(struct T3D_POINTLIGHT*, CDisplay::CreateLight(unsigned char, float, float, float, float), CDisplay__CreateLight);
#endif
#ifdef CDisplay__GetIntensity_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::GetIntensity(unsigned char), CDisplay__GetIntensity);
#endif
#ifdef CDisplay__DeleteLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteLight(struct T3D_POINTLIGHT*), CDisplay__DeleteLight);
#endif
#ifdef CDisplay__PlaySoundAtLocation_x
FUNCTION_AT_ADDRESS(void, CDisplay::PlaySoundAtLocation(float, float, float, int), CDisplay__PlaySoundAtLocation);
#endif
#ifdef CDisplay__SetUserRender_x
FUNCTION_AT_ADDRESS(long, CDisplay::SetUserRender(int), CDisplay__SetUserRender);
#endif
#ifdef CDisplay__GetClickedActor_x
FUNCTION_AT_ADDRESS(CActorInterface*, CDisplay::GetClickedActor(int X, int Y, bool bFlag, CVector3& Vector1, CVector3& Vector2), CDisplay__GetClickedActor);
#endif
#ifdef CDisplay__CreateActor_x
FUNCTION_AT_ADDRESS(CActorInterface*, CDisplay::CreateActor(char*, float, float, float, float, float, float, bool, bool), CDisplay__CreateActor);
#endif
#ifdef CDisplay__SetActorBoundingRadius_x
FUNCTION_AT_ADDRESS(float, CDisplay::SetActorBoundingRadius(struct T3D_tagACTORINSTANCE*, float, float), CDisplay__SetActorBoundingRadius);
#endif
#ifdef CDisplay__DeleteActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteActor(struct T3D_tagACTORINSTANCE*), CDisplay__DeleteActor);
#endif
#ifdef CDisplay__dupActorHierarchicalSprite_x
FUNCTION_AT_ADDRESS(struct T3D_HIERARCHICALSPRITEINSTANCE*, CDisplay::dupActorHierarchicalSprite(struct T3D_tagACTORINSTANCE*), CDisplay__dupActorHierarchicalSprite);
#endif
#ifdef CDisplay__ToggleCharacterNameSprites_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleCharacterNameSprites(bool), CDisplay__ToggleCharacterNameSprites);
#endif
#ifdef CDisplay__ToggleNpcNameSprites_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleNpcNameSprites(bool), CDisplay__ToggleNpcNameSprites);
#endif
#ifdef CDisplay__TurnInfravisionEffectOn_x
FUNCTION_AT_ADDRESS(int, CDisplay::TurnInfravisionEffectOn(), CDisplay__TurnInfravisionEffectOn);
#endif
#ifdef CDisplay__TurnInfravisionEffectOff_x
FUNCTION_AT_ADDRESS(int, CDisplay::TurnInfravisionEffectOff(), CDisplay__TurnInfravisionEffectOff);
#endif
#ifdef CDisplay__SpurtBloodOnDag_x
FUNCTION_AT_ADDRESS(void, CDisplay::SpurtBloodOnDag(struct T3D_DAG*), CDisplay__SpurtBloodOnDag);
#endif
#ifdef CDisplay__SetDayPeriod_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetDayPeriod(unsigned char), CDisplay__SetDayPeriod);
#endif
#ifdef CDisplay__SetSkyLayer_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSkyLayer(int), CDisplay__SetSkyLayer);
#endif
#ifdef CDisplay__GetSkyTime_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetSkyTime(int*, int*), CDisplay__GetSkyTime);
#endif
#ifdef CDisplay__SetSunLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSunLight(), CDisplay__SetSunLight);
#endif
#ifdef CDisplay__SetSkyBackground_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSkyBackground(), CDisplay__SetSkyBackground);
#endif
#ifdef CDisplay__ProcessSky_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessSky(), CDisplay__ProcessSky);
#endif
#ifdef CDisplay__SimpleDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::SimpleDistance(float, float, float, float, float, float, float), CDisplay__SimpleDistance);
#endif
#ifdef CDisplay__TrueDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::TrueDistance(float, float, float, float, float, float, float), CDisplay__TrueDistance);
#endif
#ifdef CDisplay__PlayerSimpleDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::PlayerSimpleDistance(EQPlayer*, EQPlayer*, float), CDisplay__PlayerSimpleDistance);
#endif
#ifdef CDisplay__PlayerDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::PlayerDistance(EQPlayer*, EQPlayer*, float), CDisplay__PlayerDistance);
#endif
#ifdef CDisplay__hideGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::hideGrassObjects(), CDisplay__hideGrassObjects);
#endif
#ifdef CDisplay__updateGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::updateGrassObjects(), CDisplay__updateGrassObjects);
#endif
#ifdef CDisplay__loadGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::loadGrassObjects(char*), CDisplay__loadGrassObjects);
#endif
#ifdef CDisplay__SetAmbientLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetAmbientLight(float), CDisplay__SetAmbientLight);
#endif
#ifdef CDisplay__SetViewActorByName_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewActorByName(char*), CDisplay__SetViewActorByName);
#endif
#ifdef CDisplay__SetActorSpriteTint_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorSpriteTint(struct _EQRGB*, struct T3D_tagACTORINSTANCE*), CDisplay__SetActorSpriteTint);
#endif
#ifdef CDisplay__FreeAllItemLists_x
FUNCTION_AT_ADDRESS(void, CDisplay::FreeAllItemLists(), CDisplay__FreeAllItemLists);
#endif
#ifdef CDisplay__GenericSphereColl_x
FUNCTION_AT_ADDRESS(bool, CDisplay::GenericSphereColl(float, float, float, float, float, float, float*, float*, float*, unsigned char), CDisplay__GenericSphereColl);
#endif
#ifdef CDisplay__FindZoneTopZ_x
FUNCTION_AT_ADDRESS(float, CDisplay::FindZoneTopZ(float, float, float), CDisplay__FindZoneTopZ);
#endif
#ifdef CDisplay__GetEnvironment_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::GetEnvironment(float, float, float, int*), CDisplay__GetEnvironment);
#endif
#ifdef CDisplay__MoveLocalPlayerToSafeCoords_x
FUNCTION_AT_ADDRESS(void, CDisplay::MoveLocalPlayerToSafeCoords(), CDisplay__MoveLocalPlayerToSafeCoords);
#endif
#ifdef CDisplay__SetupEQPlayers_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetupEQPlayers(), CDisplay__SetupEQPlayers);
#endif
#ifdef CDisplay__MoveLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::MoveLight(struct T3D_POINTLIGHT*, struct _physicsinfo*), CDisplay__MoveLight);
#endif

const ScreenWndManager::ScreenRecord* ScreenWndManager::FindScreenRecordByScreenName(const CXStr& name)
{
	int* value = screensHash.FindFirst(name);
	if (value)
	{
		return &screens[*value];
	}

	return nullptr;
}

} // namespace eqlib
