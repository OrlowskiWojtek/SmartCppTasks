cmake_minimum_required(VERSION 3.22)

project(RPGClassesBuilder)


add_executable(RPGClassesBuilder
                main.cpp
                src/RpgCharacter.cpp)

target_include_directories(RPGClassesBuilder PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
