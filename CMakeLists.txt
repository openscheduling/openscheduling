cmake_minimum_required(VERSION 3.0.2)

project(openscheduling
LANGUAGES CXX)

add_subdirectory(src)
include_directories(src)

include(CTest)
add_subdirectory(test)
