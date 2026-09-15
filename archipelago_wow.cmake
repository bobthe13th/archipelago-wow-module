# modules/archipelago_wow/archipelago_wow.cmake
# Included inline by modules/CMakeLists.txt's generic per-module ".cmake"
# hook (see modules/how_to_make_a_module.md), after the shared `modules`
# static-library target already exists.
#
# MSVC's default COFF object format caps the number of sections per .obj;
# building this module for the first time (M4, Task 12-28 -- previously
# never compiled in any environment) hit that cap with error C1128 while
# compiling src/APClient.cpp. /bigobj lifts the cap; it has no other
# effect, so it's applied to the whole `modules` target rather than
# guessing which single translation unit needs it -- other files in this
# module keep growing (new content-table headers each M4 task adds), and a
# narrower per-file fix would just need revisiting again later.
if (MSVC)
    target_compile_options(modules PRIVATE /bigobj)
endif()

# M6.0 (Playerbots Integration): detects whether the mod-playerbots module (a
# separate, independently-cloned sibling under modules/mod-playerbots -- see
# the M6.0 Phase 1 fork/merge plan) is present in this checkout, and if so
# defines AC_MODULE_PLAYERBOTS_AVAILABLE so APBotSupport.cpp compiles its real
# sPlayerbotMgr->GetPlayerbotAI() path instead of always returning false.
# Harmless when mod-playerbots isn't present (the state of every checkout
# until Phase 1 runs) -- the macro is simply never defined and archipelago_wow
# builds exactly as it does today.
if (EXISTS "${CMAKE_SOURCE_DIR}/modules/mod-playerbots")
    target_compile_definitions(modules PUBLIC AC_MODULE_PLAYERBOTS_AVAILABLE=1)
endif()
