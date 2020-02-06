cmake_minimum_required(VERSION 3.15)
project(challenge)

set(CMAKE_CXX_STANDARD 14)

add_executable(challenge main.cpp Zone.h Zone.cpp ZonePacific.h ZonePacific.cpp ZoneMountain.cpp ZoneMountain.h ZoneEastern.cpp ZoneEastern.h ZoneCentral.cpp ZoneCentral.h ZoneFactory.cpp ZoneFactory.h Calendar.cpp Calendar.h PacificCalendar.cpp PacificCalendar.h)