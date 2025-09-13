cmake_minimum_required(VERSION 3.10)
project(KeyLogger)

set(CMAKE_CXX_STANDARD 17)

add_executable(keylogger
    src/main.cpp
    src/keylogger.cpp
    src/keyboard_layout.cpp
    src/key_mapping.cpp
    src/datetime_utils.cpp
)

target_include_directories(keylogger PRIVATE include)
