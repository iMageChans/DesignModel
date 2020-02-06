//
// Created by Chans on 2020/2/7.
//

#include "TVOffCommand.h"

TVOffCommand::TVOffCommand(TV *t) {
    tv = t;
}

void TVOffCommand::execute() {
    tv->off();
}

void TVOffCommand::undo() {
    tv->on();
}