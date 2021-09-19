cmake_minimum_required(VERSION 3.20)
project(base C)

set(CMAKE_C_STANDARD 99)

add_executable(base main.c sizes.c enum.c links.c arrays.c const.c)
