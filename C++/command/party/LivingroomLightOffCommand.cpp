//
// Created by Chans on 2020/2/6.
//

#include "LivingroomLightOffCommand.h"

LivingroomLightOffCommand::LivingroomLightOffCommand(Light *l) {
    light = l;
}

void LivingroomLightOffCommand::execute() {
    light->off();
}

void LivingroomLightOffCommand::undo() {
    light->on();
}