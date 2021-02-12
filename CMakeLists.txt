cmake_minimum_required(VERSION 3.6)
project(doctest)

add_library(calc_lib    STATIC
    src/calc.cpp
)

target_include_directories(calc_lib
    PUBLIC
       ${PROJECT_SOURCE_DIR}/include
)

add_executable(main
    src/main.cpp
)

target_link_libraries(main
    PRIVATE
        calc_lib
)