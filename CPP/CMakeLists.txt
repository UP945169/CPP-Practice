cmake_minimum_required(VERSION 3.20)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Chapter2)
include_directories(Chapter3)

add_executable(CPP
        Chapter2/if.cpp
        Chapter2/Ints.cpp
        Chapter2/main.cpp
        Chapter3/fig03_01.cpp
        Chapter3/fig03_03.cpp
        Chapter3/fig03_05.cpp
        Chapter3/fig03_07.cpp
        Chapter3/fig03_10.cpp
        Chapter3/fig03_16.cpp
        Chapter3/GradeBook.cpp
        Chapter3/GradeBook.h
        Chapter3/GradeBook2.h
        Chapter3/fig03_17.cpp)
