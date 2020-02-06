//
// Created by Chans on 2020/2/6.
//

#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light *l) {
    light = l;
}

void LightOnCommand::execute() {
    light->on();
}

void LightOnCommand::undo() {
    light->off();
}
