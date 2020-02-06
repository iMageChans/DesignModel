cmake_minimum_required(VERSION 3.15)
project(classic)

set(CMAKE_CXX_STANDARD 14)

add_executable(classic main.cpp Singleton.cpp Singleton.h)