cmake_minimum_required(VERSION 3.6)

# Include cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")
add_compile_options(-std=c++14)
project(doctest)

# Compile options
include(CMake/CompileOptions.cmake)

add_library(calc_lib
    src/calc.cpp
)

target_include_directories(calc_lib
    PUBLIC
       ${PROJECT_SOURCE_DIR}/include
)

add_executable(calc_exe
    src/main.cpp
)

target_link_libraries(calc_exe
    PRIVATE
        calc_lib
)


# Code coverage - Debug only
# NOTE: Code coverage results with an optimized (non-Debug) build may be misleading
option(BUILD_COVERAGE "Build code coverage" OFF)
if (CMAKE_BUILD_TYPE MATCHES Debug AND CMAKE_COMPILER_IS_GNUCXX AND BUILD_COVERAGE)
    include(CodeCoverage)
    setup_target_for_coverage(${PROJECT_NAME}_coverage calc_exe coverage)
endif()