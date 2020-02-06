//
// Created by Chans on 2020/2/6.
//

#include "CeilingFanMediumCommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *c) {
    ceilingFan = c;
}

void CeilingFanMediumCommand::execute() {
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
}

void CeilingFanMediumCommand::undo() {
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
