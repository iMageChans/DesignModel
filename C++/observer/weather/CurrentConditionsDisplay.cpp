//
// Created by Chans on 2020/2/5.
//

#include <iostream>
#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weather) {
    weatherData = weather;
    weather->registerObserver(this);
}

void CurrentConditionsDisplay::display() {
    std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
}

void CurrentConditionsDisplay::update(float temp, float h, float pressure) {
    temperature = temp;
    humidity = h;
    display();
}
