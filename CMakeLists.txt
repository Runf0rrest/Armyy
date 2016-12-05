cmake_minimum_required(VERSION 3.0)
project(army)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file (GLOB SOURCE_FILES "*/*.cpp" "*.cpp" "!Tests/**")

add_executable(main ${SOURCE_FILES})

file (GLOB TEST_FILES "Tests/**")

add_executable(test_main ${TEST_FILES})
