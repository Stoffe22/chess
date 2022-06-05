cmake_minimum_required(VERSION 3.0.0)
project(CHESS VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
message(FATAL_ERROR "In-source build detected!")
endif()