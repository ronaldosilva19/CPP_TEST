cmake_minimum_required(VERSION 3.23)
project(CPP_TEST)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPP_TEST
        Execute.cpp
        Execute.h)
