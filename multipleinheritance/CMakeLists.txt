cmake_minimum_required(VERSION 3.13)
project(multipleinheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(multipleinheritance main.cpp Date.cpp Date.h Time.cpp Time.h DateTime.cpp DateTime.h)