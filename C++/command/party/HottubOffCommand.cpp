//
// Created by Chans on 2020/2/6.
//

#include "HottubOffCommand.h"

HottubOffCommand::HottubOffCommand(Hottub *h) {
    hottub = h;
}

void HottubOffCommand::execute() {
    hottub->setTemperature(98);
    hottub->off();
}

void HottubOffCommand::undo() {
    hottub->on();
}
