cmake_minimum_required(VERSION 3.22)
project(Learn_C C)

set(CMAKE_C_STANDARD 11)

include_directories(Chapitre7/exercice_chocolat)

add_executable(Learn_C
        Chapitre7/chap7.2.c Chapitre7/chap7.3.c)
