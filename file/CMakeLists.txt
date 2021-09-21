cmake_minimum_required(VERSION 3.20)
project(file C)

set(CMAKE_C_STANDARD 99)

add_executable(file main.c open.c write.c)
