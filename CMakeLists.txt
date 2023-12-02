cmake_minimum_required(VERSION 3.26)
project(passgen)

set(CMAKE_CXX_STANDARD 17)

add_executable(passgen main.cpp
        func.h)
