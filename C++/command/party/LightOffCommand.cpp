//
// Created by Chans on 2020/2/6.
//

#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light *l) {
    light = l;
}

void LightOffCommand::execute() {
    light->off();
}

void LightOffCommand::undo() {
    light->on();
}
