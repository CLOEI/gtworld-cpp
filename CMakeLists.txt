cmake_minimum_required(VERSION 3.2)
project(gtworld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(GTWORLD_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories(${GTWORLD_INCLUDE_DIR})
add_library(gtworld world.cpp)