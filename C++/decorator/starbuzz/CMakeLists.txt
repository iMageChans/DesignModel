cmake_minimum_required(VERSION 3.15)
project(starbuzz)

set(CMAKE_CXX_STANDARD 14)

add_executable(starbuzz main.cpp Beverage.cpp Beverage.h CondimentDecorator.cpp CondimentDecorator.h DarkRoast.cpp DarkRoast.h Decaf.cpp Decaf.h Espresso.cpp Espresso.h HouseBlend.cpp HouseBlend.h Milk.cpp Milk.h Mocha.cpp Mocha.h Soy.cpp Soy.h Whip.cpp Whip.h)