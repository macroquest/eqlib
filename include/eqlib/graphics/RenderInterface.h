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
struct COLOR;
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
/*0x000*/ virtual void SetDebugShaderPath(const char* debugShaderPath) = 0;
/*0x008*/ virtual void SetReleaseShaderPath(const char* releaseShaderPath) = 0;
/*0x010*/ virtual int GetDesktopWidth() = 0;
/*0x018*/ virtual int GetDesktopHeight() = 0;
/*0x020*/ virtual int GetDesktopDepth() = 0;
/*0x028*/ virtual int GetDesktopRefreshRate() = 0;
/*0x030*/ virtual int GetDisplayWidth() = 0;
/*0x038*/ virtual int GetDisplayHeight() = 0;
/*0x040*/ virtual int GetDisplayDepth() = 0;
/*0x048*/ virtual int GetDisplayRefreshRate() = 0;
/*0x050*/ virtual bool IsDisplayRgb565() = 0;
/*0x058*/ virtual int GetNumberOfModes() = 0;
/*0x060*/ virtual HWND GetHWND() = 0;
/*0x068*/ virtual int GetModeInfo(int index, SEQGraphicsDisplayMode* mode) = 0;
/*0x070*/ virtual int GetMaxTextureWidth() const = 0;
/*0x078*/ virtual int GetMaxTextureHeight() const = 0;
/*0x080*/ virtual bool SupportsDXT1Textures() = 0;
/*0x088*/ virtual bool SupportsDXT3Textures() = 0;
/*0x090*/ virtual bool Supports4444Textures() = 0;
/*0x098*/ virtual bool SupportsLargeTextures() = 0;
/*0x0a0*/ virtual int GetTotalTextureMemory() = 0;
/*0x0a8*/ virtual bool GetFullScreen() = 0;
/*0x0b0*/ virtual int EnumerateDevices(SDeviceInfo* deviceInfo, int* numDevices, HINSTANCE hInstance) = 0;
/*0x0b8*/ virtual bool InitDevice(int device, HWND hWnd, bool min) = 0;
/*0x0c0*/ virtual void ReleaseDevice(bool) = 0;
/*0x0c8*/ virtual void SetResolutionBasedOnDesktop() = 0;
/*0x0d0*/ virtual void SetResolution(int index) = 0;
/*0x0d8*/ virtual void SetResolution(int width, int height, int depth, int refreshRate) = 0;
/*0x0e0*/ virtual void Unknown0x70() = 0;
/*0x0e8*/ virtual void SetFullscreen(bool fullscreen) = 0;
/*0x0f0*/ virtual void SetFog(bool enable, int zmin, int zmax, float density, RGB color) = 0;
/*0x0f8*/ virtual void SetGammaLevel(float gamma) = 0;
/*0x100*/ virtual void RestoreDesktopGammaRamp() = 0;
/*0x108*/ virtual void SetDesktopGammaRampForWindowedMode() = 0;
/*0x110*/ virtual void DrawLine2D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x118*/ virtual void DrawLine3D(const CVector3& point1, const CVector3& point2, RGB color) = 0;
/*0x120*/ virtual int DrawWrappedText(int font, const char* text, const CXRect& rect, const CXRect& clip, COLORREF color, uint16_t flags, int offset) = 0;
/*0x128*/ virtual int DrawWrappedText(CTextObjectInterface* textObj) = 0;
/*0x130*/ virtual int DrawTexturedQuad(CVector3* points, CVector2* texCoords, RGB color, BMI* bmi) = 0;
/*0x138*/ virtual void DrawTintedBlendTexturedQuad(CVector3* points, CVector2* texCoords, int tint1, int tint2, BMI* bmi1, BMI* bmi2, bool border) = 0;
/*0x140*/ virtual void DrawQuad(CVector3* points, RGB color) = 0;
/*0x148*/ virtual void ClearDeferred2D() = 0;
/*0x150*/ virtual void ClearBackBufferToBlack() = 0;
/*0x158*/ virtual void RenderScene() = 0;
/*0x160*/ virtual void RenderBlind() = 0;
/*0x168*/ virtual void UpdateDisplay() = 0;
/*0x170*/ virtual void SetCensorship(bool) = 0;
/*0x178*/ virtual void SetCurrentLanguage(int) = 0;
/*0x180*/ virtual void ClearDisplayBuffers() = 0;
/*0x188*/ virtual void ScreenCapture(const char* filename) = 0;
/*0x190*/ virtual void ScreenCaptureToBMI(BMI** ppBMI) = 0;
/*0x198*/ virtual RenderCallbackPtr SetRenderCallback(RenderCallbackPtr callback) = 0;
/*0x1a0*/ virtual void RotateStats() = 0;
/*0x1a8*/ virtual void SetItemPlacementStats(const SItemPlacementStatsDisplay* stats, bool) = 0;
/*0x1b0*/ virtual void ShowItemPlacementStats(bool) = 0;
/*0x1b8*/ virtual void TransformWorldToCamera(const CVector3& world, CVector3& camera) = 0;
/*0x1c0*/ virtual void GetEyeOffset(CVector3& pos) = 0;
/*0x1c8*/ virtual uint32_t SetDebugFlags(uint32_t flags) = 0;
/*0x1d0*/ virtual const char* GetCurrentDeviceName() = 0;
/*0x1d8*/ virtual void ParsePatchLighting(uint32_t patch, const char* filename) = 0;
/*0x1e0*/ virtual void EnableAutoMipMapping(bool, bool) = 0;
/*0x1e8*/ virtual void SetRenderOption(int option, int value) = 0;
/*0x1f0*/ virtual float GetFogEnd() = 0;
/*0x1f8*/ virtual float GetFogStart() = 0;
/*0x200*/ virtual uint32_t GetFogColor() = 0;
/*0x208*/ virtual int GetDeviceFeature(int feature) = 0;
/*0x210*/ virtual void DisplayStats(int stats) = 0;
/*0x218*/ virtual void EnableObjectPreview(bool, int) = 0;
/*0x220*/ virtual void IsObjectPreviewEnabled(int) = 0;
/*0x228*/ virtual void SetObjectPreviewActor(CActorInterface* actor, int) = 0;
/*0x230*/ virtual void DrawObjectPreview(const CXRect& rect, COLORREF color, int) = 0;
/*0x238*/ virtual void ResizeObjectPreview(int width, int height, int) = 0;
/*0x240*/ virtual void SetObjectPreviewMode(int) = 0;
/*0x248*/ virtual void SetPostEffect(int type, int state, float intensity, uint32_t fade, COLOR* color) = 0;
/*0x250*/ virtual void SetPersistentPostEffect(int type, bool on) = 0;
/*0x258*/ virtual void SetPersistentIntensity(int type, float value) = 0;
/*0x260*/ virtual ID3DXBuffer* GetScreenCapData() = 0;
/*0x268*/ virtual void ClearScreenCapData() = 0;
/*0x270*/
};

//============================================================================

} // namespace eqlib
