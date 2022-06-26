cmake_minimum_required(VERSION 3.22)
project(Giggle)

set(CMAKE_CXX_STANDARD 14)

add_executable(Giggle main.cpp src/types.h src/classloader.h)
