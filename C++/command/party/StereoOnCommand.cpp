//
// Created by Chans on 2020/2/7.
//

#include "StereoOnCommand.h"


StereoOnCommand::StereoOnCommand(Stereo *s) {
    stereo = s;
}

void StereoOnCommand::execute() {
    stereo->on();
}

void StereoOnCommand::undo() {
    stereo->off();
}
