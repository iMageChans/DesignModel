//
// Created by Chans on 2020/2/6.
//

#include <iostream>
#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(WeatherData *weather) {
    weatherData = weather;
    weather->registerObserver(this);
}

void StatisticsDisplay::display() {
    std::cout << "Avg/Max/Min temperature = " << tempSum / numReadings << maxTemp << minTemp << std::endl;
}

void StatisticsDisplay::update(float temp, float humidity, float pressure) {
    tempSum += temp;
    numReadings++;

    if (temp > maxTemp){
        maxTemp = temp;
    }

    if (temp < minTemp){
        minTemp = temp;
    }

    display();
}
