cmake_minimum_required(VERSION 3.15)
project(simple)

set(CMAKE_CXX_STANDARD 14)

add_executable(simple main.cpp Observer.cpp Observer.h SimpleObserver.cpp SimpleObserver.h Subject.cpp Subject.h SimpleSubject.cpp SimpleSubject.h)