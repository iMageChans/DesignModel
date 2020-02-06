cmake_minimum_required(VERSION 3.15)
project(pizzas)

set(CMAKE_CXX_STANDARD 14)

add_executable(pizzas main.cpp Pizza.cpp Pizza.h SimplePizzaFactory.cpp SimplePizzaFactory.h VeggiePizza.cpp VeggiePizza.h PepperoniPizza.cpp PepperoniPizza.h ClamPizza.cpp ClamPizza.h CheesePizza.cpp CheesePizza.h PizzaStore.cpp PizzaStore.h)