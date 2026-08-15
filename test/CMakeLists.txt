# azerothcore-wotlk/modules/archipelago_wow/test/CMakeLists.txt
cmake_minimum_required(VERSION 3.16)
project(archipelago_wow_tests CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(archipelago_wow_tests test_APProtocol.cpp ../src/APProtocol.cpp)
target_include_directories(archipelago_wow_tests PRIVATE vendor ../src)
