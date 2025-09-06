cmake_minimum_required(VERSION 3.10)
project(Basics C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Basics
    basics.c
    basics.h
    main.c)