cmake_minimum_required(VERSION 3.13)
project(constructor)

set(CMAKE_CXX_STANDARD 14)

add_executable(constructor main.cpp Rectangle.cpp Rectangle.h Box.cpp Box.h)