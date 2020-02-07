//
// Created by Chans on 2020/2/7.
//

#include <iostream>
#include "PopcornPopper.h"

PopcornPopper::PopcornPopper(string des) {
    description = std::move(des);
}

void PopcornPopper::on() {
    cout << description << " on" << endl;
}

void PopcornPopper::off() {
    cout << description << " off" << endl;
}

void PopcornPopper::pop() {
    cout << description << " popping popcorn!" << endl;
}

string PopcornPopper::toString() {
    return description;
}
