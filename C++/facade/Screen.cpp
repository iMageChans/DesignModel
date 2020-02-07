//
// Created by Chans on 2020/2/7.
//

#include <iostream>
#include "Screen.h"

Screen::Screen(string des) {
    description = std::move(des);
}

void Screen::up() {
    cout << description << " going up" << endl;
}

void Screen::down() {
    cout << description << " going down" << endl;
}

string Screen::toString() {
    return description;
}
