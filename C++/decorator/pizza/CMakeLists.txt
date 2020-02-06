cmake_minimum_required(VERSION 3.15)
project(pizza)

set(CMAKE_CXX_STANDARD 14)

add_executable(pizza main.cpp Pizza.cpp Pizza.h ToppingDecorator.cpp ToppingDecorator.h ThickcrustPizza.cpp ThickcrustPizza.h ThincrustPizza.cpp ThincrustPizza.h Cheese.cpp Cheese.h Olives.cpp Olives.h)