//
// Created by Chans on 2020/2/7.
//
#include <iostream>
#include <utility>
#include "Tuner.h"

void Tuner::on() {
    cout << description << " on" << endl;
}

void Tuner::off() {
    cout << description << " off" << endl;
}

void Tuner::setFrequency(double fre) {
    cout << description << " setting frequency to " << frequency << endl;
    frequency = fre;
}

void Tuner::setAm() {
    cout << description << " setting AM mode" << endl;
}

void Tuner::setFm() {
    cout << description << " setting FM mode" << endl;
}

string Tuner::toString() {
    return description;
}

Tuner::Tuner(string des) {
    description = std::move(des);
}
