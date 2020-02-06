//
// Created by Chans on 2020/2/6.
//

#include "HottubOnCommand.h"

HottubOnCommand::HottubOnCommand(Hottub *h) {
    hottub = h;
}

void HottubOnCommand::execute() {
    hottub->setTemperature(98);
    hottub->on();
}

void HottubOnCommand::undo() {
    hottub->off();
}
