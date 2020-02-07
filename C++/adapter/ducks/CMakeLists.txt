cmake_minimum_required(VERSION 3.15)
project(ducks)

set(CMAKE_CXX_STANDARD 14)

add_executable(ducks main.cpp Duck.cpp Duck.h Turkey.cpp Turkey.h DuckAdapter.cpp DuckAdapter.h TurkeyAdapter.cpp TurkeyAdapter.h MallardDuck.cpp MallardDuck.h WildTurkey.cpp WildTurkey.h)