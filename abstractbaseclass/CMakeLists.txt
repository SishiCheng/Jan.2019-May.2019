cmake_minimum_required(VERSION 3.13)
project(abstractbaseclass)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractbaseclass main.cpp Student.cpp Student.h CsStudent.cpp CsStudent.h)