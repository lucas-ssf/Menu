cmake_minimum_required(VERSION 3.28)
project(Menu C)

set(CMAKE_C_STANDARD 11)

add_executable(Menu main.c
        menu.h
        menu.c)
