cmake_minimum_required(VERSION 4.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(claLib INTERFACE)

target_include_directories(claLib INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)