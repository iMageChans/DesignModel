cmake_minimum_required(VERSION 3.15)
project(party)

set(CMAKE_CXX_STANDARD 14)

add_executable(party main.cpp Command.h Command.cpp CeilingFan.h CeilingFan.cpp CeilingFanHighCommand.cpp CeilingFanHighCommand.h CeilingFanMediumCommand.cpp CeilingFanMediumCommand.h CeilingFanOffCommand.cpp CeilingFanOffCommand.h Hottub.cpp Hottub.h)