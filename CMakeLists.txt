cmake_minimum_required(VERSION 3.20)
project(mno VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(mno
    src/main.cpp
    src/commands.cpp
)

target_include_directories(mno PRIVATE include)

target_compile_options(mno PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
)
