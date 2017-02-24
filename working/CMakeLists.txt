cmake_minimum_required(VERSION 3.6)
project(working)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PQ.cpp PQ.h Person.h)
add_executable(working ${SOURCE_FILES})