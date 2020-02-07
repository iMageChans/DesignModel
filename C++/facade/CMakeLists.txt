cmake_minimum_required(VERSION 3.15)
project(facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(facade main.cpp TheaterLights.cpp TheaterLights.h Amplifier.cpp Amplifier.h CdPlayer.cpp CdPlayer.h DvdPlayer.cpp DvdPlayer.h Tuner.cpp Tuner.h Screen.cpp Screen.h Projector.cpp Projector.h PopcornPopper.cpp PopcornPopper.h HomeTheaterFacade.cpp HomeTheaterFacade.h)