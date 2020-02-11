cmake_minimum_required(VERSION 3.15)
project(barista)

set(CMAKE_CXX_STANDARD 14)

add_executable(barista main.cpp CaffeineBeverage.cpp CaffeineBeverage.h)