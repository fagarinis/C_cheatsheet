cmake_minimum_required(VERSION 3.20)
project(primoprogetto_c C)

set(CMAKE_C_STANDARD 99)

add_executable(primoprogetto_c main.c mainStructs.h string-utils.h pointer-utils.h casting-test.h)
