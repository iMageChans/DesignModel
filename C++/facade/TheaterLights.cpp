//
// Created by Chans on 2020/2/7.
//

#include <iostream>
#include <utility>
#include "TheaterLights.h"

TheaterLights::TheaterLights(string des) {
    description = std::move(des);
}

void TheaterLights::on() {
    cout << description << " on" << endl;
}

void TheaterLights::off() {
    cout << description << " off" << endl;
}

void TheaterLights::dim(int level) {
    cout << description << " dimming to " << level << "%" << endl;
}

string TheaterLights::toString() {
    return description;
}
