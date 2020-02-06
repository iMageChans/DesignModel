//
// Created by Chans on 2020/2/6.
//

#include <iostream>
#include "Light.h"

Light::Light(string loca) {
    location = loca;
}

void Light::on() {
    level = 100;
    cout << "Light is on" << endl;
}

void Light::off() {
    level = 0;
    cout << "Light is off" << endl;
}

void Light::dim(int l) {
    level = l;
    if (l == 0){
        off();
    } else{
        cout << "Light is dimmed to " << level << "%" << endl;
    }
}

int Light::getLevel() {
    return level;
}
