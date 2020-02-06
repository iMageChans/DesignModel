//
// Created by Chans on 2020/2/7.
//

#include "StereoOnWithCDCommand.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *s) {
    stereo = s;
}

void StereoOnWithCDCommand::execute() {
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo() {
    stereo->off();
}