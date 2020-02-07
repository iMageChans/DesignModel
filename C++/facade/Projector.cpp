//
// Created by Chans on 2020/2/7.
//

#include "Projector.h"
#include <iostream>

Projector::Projector(string des, DvdPlayer *dvd) {

}

void Projector::on() {
    cout << description << " on" << endl;
}

void Projector::off() {
    cout << description << " off" << endl;
}

void Projector::wideScreenMode() {
    cout << description << " in widescreen mode (16x9 aspect ratio)" << endl;
}

void Projector::tvMode() {
    cout << description << " in tv mode (4x3 aspect ratio)" << endl;
}

string Projector::toString() {
    return description;
}
