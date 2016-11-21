cmake_minimum_required(VERSION 3.5)
project(ArmyTask)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Units/Solider.cpp Units/Solider.h)
add_executable(ArmyTask ${SOURCE_FILES})