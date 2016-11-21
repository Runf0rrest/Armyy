cmake_minimum_required(VERSION 3.6)
project(army)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Units/Rogue.cpp Units/Rogue.h)
add_executable(army ${SOURCE_FILES})