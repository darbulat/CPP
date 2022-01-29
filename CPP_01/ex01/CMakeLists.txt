cmake_minimum_required(VERSION 3.21)
project(ex00)

set(CMAKE_CXX_STANDARD 98)
#set_property(TARGET ex00 PROPERTY CXX_STANDARD 98)

include_directories(.)

add_executable(CPP
        main.cpp
        Makefile
        Zombie.cpp
        ZombieHorde.cpp
        Zombie.h)
