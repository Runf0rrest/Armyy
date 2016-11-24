cmake_minimum_required(VERSION 3.0)
project(army)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES *.cxx)

#set(SOURCE_FILES
        #${UNITS})
        #Units/Berserker.cpp
        #Units/Rogue.cpp
        #Units/Solider.cpp
        #Units/SpellCaster.cpp
        #Units/
        #Abilities/SpellCasterState.cpp
        #Spells/Spell.cpp
        #Spells/SpellBook.cpp)

add_executable(main ${SOURCE_FILES})
