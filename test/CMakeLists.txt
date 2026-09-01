# azerothcore-wotlk/modules/archipelago_wow/test/CMakeLists.txt
cmake_minimum_required(VERSION 3.16)
project(archipelago_wow_tests CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(archipelago_wow_tests test_APProtocol.cpp test_APItemDisplay.cpp test_APTraps.cpp test_APGating.cpp test_APFillerRewardEffects.cpp test_AllLocationNames.cpp test_ArchipelagoZoneLevelerScript.cpp test_ArchipelagoGoalsPure.cpp ../src/APProtocol.cpp ../src/APInterception.cpp ../src/APGateDecision.cpp)
target_include_directories(archipelago_wow_tests PRIVATE vendor ../src)

# test_AllLocationNames.cpp (M4.13) pulls in every real generated content-table
# header at once (quest_rewards, vendor_stock, recipes, trainer_spells,
# containersanity, gathersanity -- tens of thousands of constexpr LOCATIONS_RAW
# rows combined) alongside doctest's own per-TEST_CASE object generation,
# which exceeds MSVC's default COFF object section limit (C1128) in that one
# translation unit. /bigobj raises that limit; harmless on the other,
# much-smaller test files in this same target.
if (MSVC)
    target_compile_options(archipelago_wow_tests PRIVATE /bigobj)
endif()
