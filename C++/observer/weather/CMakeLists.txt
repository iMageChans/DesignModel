cmake_minimum_required(VERSION 3.15)
project(weather)

set(CMAKE_CXX_STANDARD 14)

add_executable(weather main.cpp Observer.cpp Observer.h Subject.cpp Subject.h DisplayElement.cpp DisplayElement.h CurrentConditionsDisplay.cpp CurrentConditionsDisplay.h ForecastDisplay.cpp ForecastDisplay.h WeatherData.cpp WeatherData.h HeatIndexDisplay.cpp HeatIndexDisplay.h StatisticsDisplay.cpp StatisticsDisplay.h)