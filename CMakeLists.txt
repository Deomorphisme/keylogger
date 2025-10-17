cmake_minimum_required(VERSION 3.10)
project(KeyLogger)

set(CMAKE_CXX_STANDARD 17)

add_executable(keylogger
    src/main.cpp
    src/keylogger.cpp
    src/keyboard_utils.cpp
    src/key_mapping.cpp
    src/datetime_utils.cpp
    src/host_utils.cpp
)

find_package(nlohmann_json REQUIRED)
target_link_libraries(keylogger PRIVATE nlohmann_json::nlohmann_json)

target_include_directories(keylogger
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)