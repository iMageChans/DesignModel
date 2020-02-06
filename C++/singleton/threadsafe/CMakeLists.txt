cmake_minimum_required(VERSION 3.15)
project(threadsafe)

set(CMAKE_CXX_STANDARD 14)

add_executable(threadsafe main.cpp Singleton.h Singleton.cpp)