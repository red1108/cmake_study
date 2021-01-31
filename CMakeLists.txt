cmake_minimum_required(VERSION 3.6)
project(first_practice)

add_library(calc_lib    STATIC
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