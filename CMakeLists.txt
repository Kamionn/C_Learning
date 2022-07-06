cmake_minimum_required(VERSION 3.22)
project(Learn_C C)

set(CMAKE_C_STANDARD 11)

include_directories(Chapitre7/Header)

add_executable(Learn_C
        Chapitre7/Header/air.c
        Chapitre7/Header/air.h
        Chapitre7/Header/main.c)
