cmake_minimum_required(VERSION 3.0)
project(army)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file (GLOB SOURCE_FILES "*/*.cpp" "*.cpp")

add_executable(main ${SOURCE_FILES} Units/Wizard.cpp Units/Wizard.h Units/Healer.cpp Units/Healer.h Units/Priest.cpp Units/Priest.h Units/Undead.cpp Units/Undead.h)

