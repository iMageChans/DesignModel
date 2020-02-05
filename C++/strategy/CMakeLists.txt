cmake_minimum_required(VERSION 3.15)
project(strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(strategy main.cpp QuackBehavior.h FlyBehavior.h Duck.h FakeQuack.cpp FakeQuack.h FlyWithWings.cpp FlyWithWings.h MallardDuck.cpp MallardDuck.h Quack.cpp Quack.h)