cmake_minimum_required(VERSION 4.1)

project(claLib)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(claLib INTERFACE
        cl_numbers.h
        cl_random.h
        claLib.h
        cl_types.h
        cl_time.h)

target_include_directories(claLib INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)