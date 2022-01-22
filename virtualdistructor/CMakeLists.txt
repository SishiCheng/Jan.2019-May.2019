cmake_minimum_required(VERSION 3.13)
project(virtualdistructor)

set(CMAKE_CXX_STANDARD 14)

add_executable(virtualdistructor main.cpp Animal.cpp Animal.h Dog.cpp Dog.h)