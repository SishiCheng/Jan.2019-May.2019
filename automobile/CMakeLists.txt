cmake_minimum_required(VERSION 3.13)
project(automobile)

set(CMAKE_CXX_STANDARD 14)

add_executable(automobile main.cpp Automobile.cpp Automobile.h Car.cpp Car.h Truck.cpp Truck.h SUV.cpp SUV.h)