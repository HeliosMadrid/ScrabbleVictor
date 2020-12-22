cmake_minimum_required(VERSION 3.17)
project(ScrabbleVictor)

set(CMAKE_CXX_STANDARD 14)

add_executable(ScrabbleVictor main.cpp headers/Functions.h src/Functions.cpp)