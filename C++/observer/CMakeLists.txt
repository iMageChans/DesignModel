cmake_minimum_required(VERSION 3.15)
project(observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(observer main.cpp Observer.cpp Observer.h SimpleObserver.cpp SimpleObserver.h Subject.cpp Subject.h SimpleSubject.cpp SimpleSubject.h)