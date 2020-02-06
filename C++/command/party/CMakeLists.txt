cmake_minimum_required(VERSION 3.15)
project(party)

set(CMAKE_CXX_STANDARD 14)

add_executable(party main.cpp Command.h Command.cpp CeilingFan.h CeilingFan.cpp CeilingFanHighCommand.cpp CeilingFanHighCommand.h CeilingFanMediumCommand.cpp CeilingFanMediumCommand.h CeilingFanOffCommand.cpp CeilingFanOffCommand.h Hottub.cpp Hottub.h HottubOffCommand.cpp HottubOffCommand.h HottubOnCommand.cpp HottubOnCommand.h Light.cpp Light.h LightOffCommand.cpp LightOffCommand.h LightOnCommand.cpp LightOnCommand.h LivingroomLightOffCommand.cpp LivingroomLightOffCommand.h LivingroomLightOnCommand.cpp LivingroomLightOnCommand.h MacroCommand.cpp MacroCommand.h NoCommand.cpp NoCommand.h RemoteControl.cpp RemoteControl.h Stereo.cpp Stereo.h StereoOffCommand.cpp StereoOffCommand.h StereoOnCommand.cpp StereoOnCommand.h StereoOnWithCDCommand.cpp StereoOnWithCDCommand.h TV.cpp TV.h TVOffCommand.cpp TVOffCommand.h TVOnCommand.cpp TVOnCommand.h)