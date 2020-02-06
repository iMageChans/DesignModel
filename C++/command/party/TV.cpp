//
// Created by Chans on 2020/2/7.
//
using namespace std;
#include "TV.h"

#include <iostream>

TV::TV(string loca) {
    location = loca;
}

void TV::on() {
    cout << location <<  " TV is on" << endl;
}

void TV::off() {
    cout << location <<  " TV is off" << endl;
}

void TV::setInputChannel(int volume) {
    channel = 3;
    cout << location <<  " TV channel is set for DVD" << endl;
}
