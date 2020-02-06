//
// Created by Chans on 2020/2/6.
//

#include <iostream>
#include "CeilingFan.h"

CeilingFan::CeilingFan(string loca) {
    location = loca;
}

void CeilingFan::high() {
    speed = HIGH;
    cout << location << " ceiling fan is on high" <<endl;
}

void CeilingFan::medium() {
    speed = MEDIUM;
    cout << location << " ceiling fan is on medium" <<endl;
}

void CeilingFan::low() {
    speed = LOW;
    cout << location << " ceiling fan is on low" <<endl;
}

void CeilingFan::off() {
    speed = OFF;
    cout << location << " ceiling fan is on off" <<endl;
}

int CeilingFan::getSpeed() {
    return speed;
}
