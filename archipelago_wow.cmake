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
