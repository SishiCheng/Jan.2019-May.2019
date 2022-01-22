cmake_minimum_required(VERSION 3.13)
project(redefine)

set(CMAKE_CXX_STANDARD 14)

add_executable(redefine main.cpp GradedActivity.cpp CurvedActivity.cpp CurvedActivity.h)