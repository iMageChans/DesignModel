//
// Created by Chans on 2020/2/7.
//
using namespace std;
#include "Stereo.h"
#include <iostream>

Stereo::Stereo(string loca) {
    location = loca;
}

void Stereo::on() {
    cout << location <<  " stereo is on" << endl;
}

void Stereo::off() {
    cout << location <<  " stereo is off" << endl;
}

void Stereo::setCD() {
    cout << location <<  " stereo is set for CD input" << endl;
}

void Stereo::setDVD() {
    cout << location <<  " stereo is set for DVD input" << endl;
}

void Stereo::setRadio() {
    cout << location <<  " stereo is set for Radio" << endl;
}

void Stereo::setVolume(int volume) {
    cout << location <<  " Stereo volume set to" << volume << endl;
}
