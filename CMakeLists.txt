cmake_minimum_required(VERSION 3.0)
project(army)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")















add_executable(main ${SOURCE_FILES})

set(SOURCE_FILES main.cpp Units/Rogue.cpp Units/SpellCaster.cpp Abilities/SpellCasterState.cpp Spells/Spell.cpp Spells/SpellBook.cpp)
add_executable(army main.cpp Abilities/NotEnoughMannaException.h)

