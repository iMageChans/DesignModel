//
// Created by Chans on 2020/2/6.
//

#include "LivingroomLightOnCommand.h"

LivingroomLightOnCommand::LivingroomLightOnCommand(Light *l) {
    light = l;
}

void LivingroomLightOnCommand::execute() {
    light->on();
}

void LivingroomLightOnCommand::undo() {
    light->off();
}
