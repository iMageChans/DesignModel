//
// Created by Chans on 2020/2/7.
//

#include "StereoOffCommand.h"

StereoOffCommand::StereoOffCommand(Stereo *s) {
    stereo = s;
}

void StereoOffCommand::execute() {
    stereo->off();
}

void StereoOffCommand::undo() {
    stereo->on();
}
