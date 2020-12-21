cmake_minimum_required(VERSION 3.17)
project(QUANT_LITE VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(test)
add_subdirectory(src)

set(SOURCES bert.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

message("!!PARENT!!")

set(INCLUDE_DIRECTORIES test src "${PROJECT_BINARY_DIR}")
target_include_directories(${PROJECT_NAME} PUBLIC INCLUDE_DIRECTORIES)

