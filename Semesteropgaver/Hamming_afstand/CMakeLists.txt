cmake_minimum_required(VERSION 4.0)
project(Hamming_afstand C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Hamming_afstand
        hamming.c
        hamming.h
        main.c)
