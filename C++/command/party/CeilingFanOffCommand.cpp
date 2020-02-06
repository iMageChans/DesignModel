//
// Created by Chans on 2020/2/6.
//

#include "CeilingFanOffCommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *c) {
    ceilingFan = c;
}

void CeilingFanOffCommand::execute() {
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
}

void CeilingFanOffCommand::undo() {
    switch (prevSpeed){
        case HIGH:
            ceilingFan->high();
            break;
        case MEDIUM:
            ceilingFan->medium();
            break;
        case LOW:
            ceilingFan->low();
            break;
        default:
            ceilingFan->off();
            break;
    }
}
