# Generated from eqlib.props
# This file should be included in CMakeLists.txt files that need these settings
# NOTE: Import order preserved from original .props file

include_guard()

set(PATH_TO_eqlib_DIR ${CMAKE_CURRENT_LIST_DIR})

macro(target_eqlib_props TARGET_NAME)

    set(eqlibRoot "${PATH_TO_eqlib_DIR}/")

    # ---------------------------------------------------------------------
    # Import from original props file
    # ---------------------------------------------------------------------
    # TODO: Manual conversion required for import: ${eqlibRoot}tools/build_scripts/nasm/nasm.targets
    # This import does not have a .props extension and cannot be automatically processed
    
    # ---------------------------------------------------------------------
    # Import from original props file
    # ---------------------------------------------------------------------
    # Depends on conversion of: ${eqlibRoot}tools/build_scripts/nasm/nasm.props
#    include(${eqlibRoot}tools/build_scripts/nasm/nasm.cmake)
#    target_nasm_props(${TARGET_NAME})
    
    # ---------------------------------------------------------------------
    # PropertyGroup settings
    # ---------------------------------------------------------------------
    set(eqlibClientTarget "Live")
    
    if("${eqlibClientTarget}" STREQUAL "Live")
        set(eqlibClientDefine "LIVE")
    elseif("${eqlibClientTarget}" STREQUAL "Test")
        set(eqlibClientDefine "TEST")
    elseif("${eqlibClientTarget}" STREQUAL "Emu")
        set(eqlibClientDefine "EMULATOR")
    elseif("${eqlibClientTarget}" STREQUAL "Beta")
        set(eqlibClientDefine "BETA")
    endif()
    
    if("${eqlibClientTarget}" STREQUAL "Live")
        set(eqlibResourceDefine EQLIB_TARGET=\"Live\")
    elseif("${eqlibClientTarget}" STREQUAL "Test")
        set(eqlibResourceDefine "EQLIB_TARGET=\"Test\"")
    elseif("${eqlibClientTarget}" STREQUAL "Emu")
        set(eqlibResourceDefine "EQLIB_TARGET=\"Emu\"")
    elseif("${eqlibClientTarget}" STREQUAL "Beta")
        set(eqlibResourceDefine "EQLIB_TARGET=\"Beta\"")
    elseif("${eqlibClientTarget}" STREQUAL "")
        set(eqlibResourceDefine "EQLIB_TARGET=\"Unknown\"")
    endif()


    # ---------------------------------------------------------------------
    # VS Settings
    # ---------------------------------------------------------------------
    # NASM targets imports
    set_property(TARGET ${TARGET_NAME} PROPERTY VS_PROJECT_IMPORT
            "${PATH_TO_eqlib_DIR}/tools/build_scripts/nasm/nasm.props"
            "${PATH_TO_eqlib_DIR}/tools/build_scripts/nasm/nasm.targets"
    )

    # This is needed by the NASM target
    set_property(TARGET ${TARGET_NAME} PROPERTY
            VS_GLOBAL_eqlibRoot "${eqlibRoot}"
    )

    # ---------------------------------------------------------------------
    # Compiler settings
    # ---------------------------------------------------------------------
    # Include directories
    target_include_directories(${TARGET_NAME} PRIVATE
        "${PATH_TO_eqlib_DIR}/include"
        "${PATH_TO_eqlib_DIR}/src"
        "${PATH_TO_eqlib_DIR}"
    )
    
    # Compiler options
    target_compile_options(${TARGET_NAME} PRIVATE
        "/utf-8"
    )
    
     
endmacro()

macro(add_nasm_sources)
    source_group("Assembly Files" FILES ${ARGN})

    # Determine architecture-specific preprocessor definitions
    if(CMAKE_GENERATOR_PLATFORM STREQUAL "x64")
        set(_NASM_ARCH_DEFINE "ARCH_X64")
    else()
        set(_NASM_ARCH_DEFINE "ARCH_X86")
    endif()

    foreach(src_file ${ARGN})
        set_source_files_properties(${src_file} PROPERTIES
            VS_TOOL_OVERRIDE "NASM"
        )

        set_property(SOURCE ${src_file} APPEND PROPERTY
            VS_SETTINGS
            "IncludePaths=${PATH_TO_eqlib_DIR}/include"
            "GenerateDebugInformation=true"
            "PreprocessorDefinitions=${_NASM_ARCH_DEFINE}\;${eqlibClientDefine}"
        )
    endforeach()
endmacro()
