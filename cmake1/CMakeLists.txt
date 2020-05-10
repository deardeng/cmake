cmake_minimum_required(VERSION 3.0)
project(cmake)

set(CMAKE_CXX_STANDARD 14)

add_executable(DemoApp main.cpp liba.cpp
        liba.h)
add_library(Demolib SHARED main.cpp)

