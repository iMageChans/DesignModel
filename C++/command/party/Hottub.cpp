//
// Created by Chans on 2020/2/6.
//

#include <iostream>
#include "Hottub.h"

using namespace std;

void Hottub::on() {
    on_off = true;
}

void Hottub::off() {
    on_off = false;
}

void Hottub::circulate() {
    if(on_off){
        cout << "Hottub is bubbling!" << endl;
    }
}

void Hottub::jetsOn() {
    if(on_off){
        cout << "Hottub jets are on" << endl;
    }
}

void Hottub::jetsOff() {
    if(on_off){
        cout << "Hottub jets are off" << endl;
    }
}

void Hottub::setTemperature(int t) {
    if (t > temperature){
        cout << "Hottub is heating to a steaming " << t << " degrees" << endl;
    }else{
        cout << "Hottub is cooling to " << t << " degrees" << endl;
    }
    temperature = t;
}
