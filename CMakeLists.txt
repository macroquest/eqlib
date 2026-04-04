# Generated from eqlib.vcxproj
# This file is designed to work with add_subdirectory()

# ---------------------------------------------------------------------
# Props file includes
# ---------------------------------------------------------------------
include("../Common.cmake")

# ---------------------------------------------------------------------
# vcpkg dependencies
# ---------------------------------------------------------------------
find_package(fmt REQUIRED)
find_package(glm REQUIRED)
find_package(spdlog REQUIRED)
find_package(wil REQUIRED)
find_package(dxsdk-d3dx REQUIRED)
find_package(detours REQUIRED)

# ---------------------------------------------------------------------
# Header files
# ---------------------------------------------------------------------
set(eqlib_HEADERS
    "include/eqdata/actordef.h"
    "include/eqdata/combines.h"
    "include/eqdata/dikeys.h"
    "include/eqdata/factionnames.h"
    "include/eqdata/itemclasses.h"
    "include/eqdata/skills.h"
    "include/eqdata/spelleffects.h"
    "include/eqlib/BuildType.h"
    "include/eqlib/Common.h"
    "include/eqlib/ComputedPointer.h"
    "include/eqlib/Config.h"
    "include/eqlib/Deprecate.h"
    "include/eqlib/EQLib.h"
    "include/eqlib/Events.h"
    "include/eqlib/ForeignPointer.h"
    "include/eqlib/game/Achievements.h"
    "include/eqlib/game/Actors.h"
    "include/eqlib/game/Allocator.h"
    "include/eqlib/game/AltAbilities.h"
    "include/eqlib/game/ChatFilters.h"
    "include/eqlib/game/Color.h"
    "include/eqlib/game/Constants.h"
    "include/eqlib/game/Containers.h"
    "include/eqlib/game/CXStr.h"
    "include/eqlib/game/CXWnd.h"
    "include/eqlib/game/Display.h"
    "include/eqlib/game/EQClasses.h"
    "include/eqlib/game/EQData.h"
    "include/eqlib/game/EQDX9.h"
    "include/eqlib/game/EQGuid.h"
    "include/eqlib/game/EverQuest.h"
    "include/eqlib/game/Expansions.h"
    "include/eqlib/game/ForwardDecls.h"
    "include/eqlib/game/GameFace.h"
    "include/eqlib/game/Globals.h"
    "include/eqlib/game/ItemLinks.h"
    "include/eqlib/game/Items.h"
    "include/eqlib/game/KeyCombo.h"
    "include/eqlib/game/LoginFrontend.h"
    "include/eqlib/game/MathTypes.h"
    "include/eqlib/game/Mutex.h"
    "include/eqlib/game/Objects.h"
    "include/eqlib/game/PcClient.h"
    "include/eqlib/game/PcProfile.h"
    "include/eqlib/game/PlayerClient.h"
    "include/eqlib/game/RealEstate.h"
    "include/eqlib/game/Requirements.h"
    "include/eqlib/game/SerializeBuffer.h"
    "include/eqlib/game/SoeUtil.h"
    "include/eqlib/game/Spells.h"
    "include/eqlib/game/TaskSystem.h"
    "include/eqlib/game/Types.h"
    "include/eqlib/game/UI.h"
    "include/eqlib/game/UIHelpers.h"
    "include/eqlib/game/UITemplates.h"
    "include/eqlib/game/UITextures.h"
    "include/eqlib/game/UITypes.h"
    "include/eqlib/game/XMLData.h"
    "include/eqlib/graphics/CameraInterface.h"
    "include/eqlib/graphics/FastFileInterface.h"
    "include/eqlib/graphics/GraphicsEngine.h"
    "include/eqlib/graphics/GraphicsResources.h"
    "include/eqlib/graphics/LightDefinitionInterface.h"
    "include/eqlib/graphics/LightInterface.h"
    "include/eqlib/graphics/MathInterface.h"
    "include/eqlib/graphics/NodePool.h"
    "include/eqlib/graphics/ParticleSystemInterface.h"
    "include/eqlib/graphics/Render.h"
    "include/eqlib/graphics/RenderInterface.h"
    "include/eqlib/graphics/ResourceManagerInterface.h"
    "include/eqlib/graphics/SceneGraphInterface.h"
    "include/eqlib/graphics/SkyInterface.h"
    "include/eqlib/graphics/TerrainSystemInterface.h"
    "include/eqlib/Init.h"
    "include/eqlib/MemoryPatcher.h"
    "include/eqlib/Offsets.h"
    "include/eqlib/offsets/eqgame.h"
    "include/eqlib/offsets/eqgraphics.h"
    "include/eqlib/offsets/eqmain.h"
    "include/eqlib/SizeChecks.h"
    "include/eqlib/WindowOverride.h"
    "include/eqlib/WindowsUndefs.h"
    "include/eqstd/list.h"
    "include/eqstd/map.h"
    "include/eqstd/memory.h"
    "include/eqstd/mutex.h"
    "include/eqstd/string.h"
    "include/eqstd/type_traits.h"
    "include/eqstd/unordered_map.h"
    "include/eqstd/unordered_set.h"
    "include/eqstd/utility.h"
    "include/eqstd/vector.h"
    "include/eqstd/xhash.h"
    "include/eqstd/xmemory.h"
    "include/eqstd/xnode_handle.h"
    "include/eqstd/xtree.h"
    "include/eqstd/xutility.h"
    "src/EQLibImpl.h"
    "src/eqlibVersionInfo.h"
    "src/Logging.h"
    "src/MemoryPatcherImpl.h"
    "src/pch.h"
    "src/resource.h"
)

source_groups("Header Files" ${eqlib_HEADERS})

# ---------------------------------------------------------------------
# Other files
# ---------------------------------------------------------------------
set(eqlib_OTHERFILES
    "src/eqlib.rc"
    "src/eqlib.natvis"
    "src/eqstd.natvis"
)

source_group("Resource Files" FILES ${eqlib_OTHERFILES})

# ---------------------------------------------------------------------
# Assembly files
# ---------------------------------------------------------------------
set(eqlib_ASSEMBLY
    "include/eqlib/AssemblyMacros.asm"
    "src/AssemblyFunctions.asm"
    "src/AssemblyFunctions64.asm"
)

source_groups("Assembly Files" ${eqlib_ASSEMBLY})

# ---------------------------------------------------------------------
# Source files
# ---------------------------------------------------------------------
set(eqlib_SOURCES
    "src/EQLibImpl.cpp"
    "src/game/CXStr.cpp"
    "src/game/CXWnd.cpp"
    "src/game/Display.cpp"
    "src/game/EQClasses.cpp"
    "src/game/EverQuest.cpp"
    "src/game/FunctionDefs.cpp"
    "src/game/Globals.cpp"
    "src/game/ItemLinks.cpp"
    "src/game/Items.cpp"
    "src/game/PcClient.cpp"
    "src/game/PcProfile.cpp"
    "src/game/PlayerClient.cpp"
    "src/game/Spells.cpp"
    "src/game/UI.cpp"
    "src/game/UITemplates.cpp"
    "src/game/UITextures.cpp"
    "src/game/XMLData.cpp"
    "src/graphics/GraphicsEngine.cpp"
    "src/MemoryPatcherImpl.cpp"
    "src/Offsets.cpp"
)

source_groups("Source Files" ${eqlib_SOURCES})

# Exclude files from being built
set_source_files_properties(
    "src/AssemblyFunctions64.asm"
    PROPERTIES
        VS_SETTINGS "$<$<STREQUAL:${CMAKE_GENERATOR_PLATFORM},Win32>:ExcludedFromBuild=true>")

# Exclude files from being built
set_source_files_properties(
    "src/AssemblyFunctions.asm"
    PROPERTIES
        VS_SETTINGS "$<$<STREQUAL:${CMAKE_GENERATOR_PLATFORM},x64>:ExcludedFromBuild=true>")

# Exclude files from being built
set_source_files_properties(
    "include/eqlib/AssemblyMacros.asm"
    PROPERTIES
        VS_SETTINGS "ExcludedFromBuild=true")

# ---------------------------------------------------------------------
# Target definition
# ---------------------------------------------------------------------
# Library type depends on configuration
if(MQ_STATIC_BUILD)
    set(LIB_TYPE STATIC)
else()
    set(LIB_TYPE SHARED)
endif()

add_library(eqlib ${LIB_TYPE}
    ${eqlib_HEADERS}
    ${eqlib_OTHERFILES}
    ${eqlib_ASSEMBLY}
    ${eqlib_SOURCES}
)

set_target_properties(eqlib PROPERTIES FOLDER "core")

# ---------------------------------------------------------------------
# Output name customization
# ---------------------------------------------------------------------
if(CMAKE_GENERATOR_PLATFORM STREQUAL "x64")
    if(MQ_STATIC_BUILD)
        set_target_properties(eqlib PROPERTIES OUTPUT_NAME
            "$<IF:$<CONFIG:Debug>,eqlib-static,eqlib-static>"
        )
    endif()
elseif(CMAKE_GENERATOR_PLATFORM STREQUAL "Win32")
    if(MQ_STATIC_BUILD)
        set_target_properties(eqlib PROPERTIES OUTPUT_NAME
            "$<IF:$<CONFIG:Debug>,eqlib-static,eqlib-static>"
        )
    endif()
endif()

# ---------------------------------------------------------------------
# Apply props file configurations
# ---------------------------------------------------------------------
target_Common_props(eqlib)

# ---------------------------------------------------------------------
# Add NASM tool to ASM files
# ---------------------------------------------------------------------
add_nasm_sources(${eqlib_ASSEMBLY})

# ---------------------------------------------------------------------
# Link vcpkg dependencies
# ---------------------------------------------------------------------
target_link_libraries(eqlib PRIVATE
    fmt::fmt
    glm::glm
    spdlog::spdlog
    WIL::WIL
    Microsoft::D3DX9
    detours::detours
)

# ---------------------------------------------------------------------
# Preprocessor definitions
# ---------------------------------------------------------------------
target_compile_definitions(eqlib PRIVATE
    "NOMINMAX"
    "$<$<NOT:$<BOOL:${MQ_STATIC_BUILD}>>:EQLIB_EXPORTS>"
    "$<$<BOOL:${MQ_STATIC_BUILD}>:EQLIB_STATIC>"
)

# ---------------------------------------------------------------------
# Preprocessor (RC) definitions
# ---------------------------------------------------------------------
target_compile_definitions(eqlib PRIVATE
    "$<$<CONFIG:Debug>:_DEBUG>"
    "${eqlibResourceDefine}"
)

# ---------------------------------------------------------------------
# Compiler options
# ---------------------------------------------------------------------
target_compile_options(eqlib PRIVATE
    "/permissive-"
    "/EHsc"
)

# ---------------------------------------------------------------------
# Linker options
# ---------------------------------------------------------------------
target_link_options(eqlib PRIVATE
    "$<$<STREQUAL:${CMAKE_GENERATOR_PLATFORM},Win32>:$<$<NOT:$<BOOL:${MQ_STATIC_BUILD}>>:/BASE:0x03400000>>"
    "$<$<STREQUAL:${CMAKE_GENERATOR_PLATFORM},x64>:$<$<NOT:$<BOOL:${MQ_STATIC_BUILD}>>:/BASE:0x034000000000>>"
)

# ---------------------------------------------------------------------
# Precompiled header
# ---------------------------------------------------------------------
target_precompile_headers(eqlib PRIVATE "src/pch.h")

# ============================================================================
# MANUAL CONVERSION NOTES
# ============================================================================
#
# - Warnings:
#   - Project has mixed configuration types (DLL/Static)
# - Review and adjust as needed
