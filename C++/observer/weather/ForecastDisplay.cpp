//
// Created by Chans on 2020/2/5.
//

#include <iostream>
#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(WeatherData *weather) {
    weatherData = weather;
    weather->registerObserver(this);
}

void ForecastDisplay::display() {
    std::cout << "Forecast: " << std::endl;
    if (currentPressure > lastPressure){
        std::cout << "Improving weather on the way!" << std::endl;
    } else if (currentPressure == lastPressure){
        std::cout << "More of the same" << std::endl;
    } else if (currentPressure < lastPressure){
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }
}

void ForecastDisplay::update(float temp, float humidity, float pressure) {
    lastPressure = currentPressure;
    currentPressure = pressure;
    display();
}
