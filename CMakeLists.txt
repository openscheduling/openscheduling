cmake_minimum_required(VERSION 3.0.2)

project(openscheduling
LANGUAGES CXX)

include_directories(src)
add_subdirectory(src)

include(CTest)
add_subdirectory(test)
