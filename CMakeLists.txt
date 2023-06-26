cmake_minimum_required(VERSION 3.23)
project(gpu_bench)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Lib)
add_subdirectory(mesa)
add_subdirectory(Examples/Support)
message(STATUS ${CMAKE_SOURCE_DIR})
add_subdirectory(../CmdParameter CmdParameterBinOut)

# hello example
add_executable(hello Examples/Hello.cpp)
include_directories(../CmdParameter/Lib)
target_link_libraries(hello v3dlib CmdParameter settings)

# matrix example
add_executable(matrix Examples/Matrix.cpp)
#include_directories(../CmdParameter/Lib)
target_link_libraries(matrix v3dlib CmdParameter settings)