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

#include "eqlib/game/MathTypes.h"

struct ID3DXBuffer;

namespace eqlib {

//============================================================================

class CActorInterface;
class CTextObjectInterface;

struct BMI;
struct SEQGraphicsDisplayMode;
struct SItemPlacementStatsDisplay;

using RenderCallbackPtr = void(*)();

//----------------------------------------------------------------------------
struct SDeviceInfo
{
	char name[128];
};


//----------------------------------------------------------------------------
class [[offsetcomments]] CRenderInterface
{
public:
/*0x000*/ virtual void SetDebugShaderPath(const char*) = 0;
/*0x004*/ virtual void SetReleaseShaderPath(const char*) = 0;
/*0x008*/ virtual int GetDesktopWidth() = 0;
/*0x00C*/ virtual int GetDesktopHeight() = 0;
/*0x010*/ virtual int GetDesktopDepth() = 0;
/*0x014*/ virtual int GetDesktopRefreshRate() = 0;
/*0x018*/ virtual int GetDisplayWidth() = 0;
/*0x01C*/ virtual int GetDisplayHeight() = 0;
/*0x020*/ virtual int GetDisplayDepth() = 0;
/*0x024*/ virtual int GetDisplayRefreshRate() = 0;
/*0x028*/ virtual bool IsDisplayRgb565() = 0;
/*0x02C*/ virtual int GetNumberOfModes() = 0;
/*0x030*/ virtual HWND GetHWND() = 0;
/*0x034*/ virtual int GetModeInfo(int index, SEQGraphicsDisplayMode* mode) = 0;
/*0x038*/ virtual int GetMaxTextureWidth() const = 0;
/*0x03C*/ virtual int GetMaxTextureHeight() const = 0;
/*0x040*/ virtual bool SupportsDXT1Textures() = 0;
/*0x044*/ virtual bool SupportsDXT3Textures() = 0;
/*0x048*/ virtual bool Supports4444Textures() = 0;
/*0x04C*/ virtual bool SupportsLargeTextures() = 0;
/*0x050*/ virtual int GetTotalTextureMemory() = 0;
/*0x054*/ virtual bool GetFullScreen() = 0;
/*0x058*/ virtual int EnumerateDevices(SDeviceInfo* deviceInfo, int* numDevices, HINSTANCE hInstance) = 0;
/*0x05C*/ virtual bool InitDevice(int device, HWND hWnd, bool min) = 0;
/*0x060*/ virtual void ReleaseDevice() = 0;
/*0x064*/ virtual bool ResetDevice(bool) = 0;
/*0x068*/ virtual void SetResolutionBasedOnDesktop() = 0;
/*0x070*/ virtual void SetResolution(int width, int height, int depth, int refreshRate) = 0;
/*0x074*/ virtual void SetResolution(int) = 0;
/*0x078*/ virtual void SetFullscreen(bool fullscreen) = 0;
/*0x07c*/ virtual void SetFog(bool enable, int zmin, int zmax, float density, RGB color) = 0;
/*0x080*/ virtual void SetGammaLevel(float gamma) = 0;
///*0x048*/ virtual void RestoreDesktopGammaRamp() = 0;
/*0x084*/ virtual void SetDesktopGammaRampForWindowedMode() = 0;
/*0x088*/ virtual void DrawLine2D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x08c*/ virtual void DrawLine3D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x090*/ virtual int DrawWrappedText(int font, const char* text, const CXRect& rect, const CXRect& clip,
	COLORREF color, uint16_t flags, int offset) = 0;
/*0x094*/ virtual int DrawWrappedText(CTextObjectInterface* textObj) = 0;
/*0x098*/ virtual int DrawTexturedQuad(CVector3* points, CVector2* texCoords, RGB color, BMI* bmi) = 0;
/*0x09c*/ virtual void DrawTintedBlendTexturedQuad(CVector3* points, CVector2* texCoords, int tint1, int tint2,
	BMI* bmi1, BMI* bmi2, bool border) = 0;
/*0x0a0*/ virtual void DrawQuad(CVector3* points, RGB color) = 0;
/*0x0a4*/ virtual void ClearDeferred2D() = 0;
/*0x0a8*/ virtual void ClearBackBufferToBlack() = 0;
/*0x0ac*/ virtual void RenderScene() = 0;
/*0x0b4*/ virtual void RenderBlind() = 0;
/*0x0b8*/ virtual void UpdateDisplay() = 0;
/*0x0bc*/ virtual void SetCensorship(bool) = 0;
/*0x0c0*/ virtual void SetCurrentLanguage(int) = 0;
/*0x0c4*/ virtual void ClearDisplayBuffers() = 0;
/*0x0c8*/ virtual void ScreenCapture(const char* filename) = 0;
/*0x0cc*/ virtual void ScreenCaptureToBMI(BMI** ppBMI) = 0;
/*0x0d0*/ virtual RenderCallbackPtr SetRenderCallback(RenderCallbackPtr callback) = 0;
/*0x0d4*/ virtual void RotateStats() = 0;
/*0x0d8*/ virtual void SetItemPlacementStats(const SItemPlacementStatsDisplay* stats, bool) = 0;
/*0x0dc*/ virtual void ShowItemPlacementStats(bool) = 0;
/*0x0e0*/ virtual void TransformWorldToCamera(const CVector3& world, CVector3& camera) = 0;
/*0x0E0*/ virtual void GetEyeOffset(CVector3& pos) = 0;
/*0x0E4*/ virtual uint32_t SetDebugFlags(uint32_t flags) = 0;
/*0x0E8*/ virtual const char* GetCurrentDeviceName() = 0;
/*0x0EC*/ virtual void ParsePatchLighting(uint32_t patch, const char* filename) = 0;
/*0x0F0*/ virtual void EnableAutoMipMapping(bool, bool) = 0;
/*0x0F4*/ virtual void SetRenderOption(int option, int value) = 0;
/*0x0F8*/ virtual float GetFogEnd() = 0;
/*0x0FC*/ virtual float GetFogStart() = 0;
/*0x100*/ virtual uint32_t GetFogColor() = 0;
/*0x104*/ virtual int GetDeviceFeature(int feature) = 0;
/*0x108*/ virtual void DisplayStats(int stats) = 0;
/*0x10C*/ virtual void EnableObjectPreview(bool, int) = 0;
/*0x110*/ virtual void IsObjectPreviewEnabled(int) = 0;
/*0x114*/ virtual void SetObjectPreviewActor(CActorInterface* actor, int) = 0;
/*0x118*/ virtual void DrawObjectPreview(const CXRect& rect, COLORREF color, int) = 0;
/*0x11C*/ virtual void ResizeObjectPreview(int width, int height, int) = 0;
/*0x120*/ virtual void SetObjectPreviewMode(int) = 0;
/*0x124*/ virtual void SetPostEffect(int type, int state, float intensity, uint32_t fade, COLOR* color) = 0;
/*0x128*/ virtual void SetPersistentPostEffect(int type, bool on) = 0;
/*0x12C*/ virtual void SetPersistentIntensity(int type, float value) = 0;
/*0x130*/ virtual ID3DXBuffer* GetScreenCapData() = 0;
/*0x134*/ virtual void ClearScreenCapData() = 0;
};

//============================================================================

} // namespace eqlib
