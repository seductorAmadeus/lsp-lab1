cmake_minimum_required(VERSION 3.6)
project(c_lab_1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
add_definitions(-std=c89)
set(SOURCE_FILES src/sum_static.c src/prime.c src/sum_dynamic.c)
add_executable(c_lab_1 ${SOURCE_FILES})