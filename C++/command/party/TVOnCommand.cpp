//
// Created by Chans on 2020/2/7.
//

#include "TVOnCommand.h"

TVOnCommand::TVOnCommand(TV *t) {
    tv = t;
}

void TVOnCommand::execute() {
    tv->on();
}

void TVOnCommand::undo() {
    tv->off();
}