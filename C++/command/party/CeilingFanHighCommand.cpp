//
// Created by Chans on 2020/2/6.
//

#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *c) {
    ceilingFan = c;
}

void CeilingFanHighCommand::execute() {
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->high();
}

void CeilingFanHighCommand::undo() {
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
