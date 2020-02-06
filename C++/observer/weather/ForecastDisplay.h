//
// Created by Chans on 2020/2/5.
//

#ifndef WEATHER_FORECASTDISPLAY_H
#define WEATHER_FORECASTDISPLAY_H

#include "Observer.h"
#include "WeatherData.h"
#include "DisplayElement.h"

class ForecastDisplay : public Observer, DisplayElement{
private:
    float currentPressure = 29.92f;
    float lastPressure;
    WeatherData *weatherData;

public:
    explicit ForecastDisplay(WeatherData *weather);
    void display() override;
    void update(float temp, float humidity, float pressure) override;

};


#endif //WEATHER_FORECASTDISPLAY_H
