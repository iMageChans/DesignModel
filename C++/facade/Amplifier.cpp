//
// Created by Chans on 2020/2/7.
//

#include "Amplifier.h"
#include <iostream>

Amplifier::Amplifier(string des) {
    description = std::move(des);
}

void Amplifier::on() {
    cout << description << " on" << endl;
}

void Amplifier::off() {
    cout << description << " off" << endl;
}

void Amplifier::setStereoSound() {
    cout << description << "  stereo mode on" << endl;
}

void Amplifier::setSurroundSound() {
    cout << description << "  surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amplifier::setVolume(int level) {
    cout << description << " setting volume to " << level << endl;
}

void Amplifier::setTuner(Tuner *t) {
    cout << description << " setting tuner to " << t << endl;
}

void Amplifier::setDvd(DvdPlayer *d) {
    cout << description << " setting DVD player to " << d << endl;
}

void Amplifier::setCd(CdPlayer *c) {
    cout << description << " setting CD player to " << c << endl;
}

string Amplifier::toString() {
    return description;
}
