cmake_minimum_required(VERSION 3.13)
project(virtual)

set(CMAKE_CXX_STANDARD 14)

add_executable(virtual main.cpp GradedActivity.cpp PassFailActivity.cpp PassFailActivity.h)