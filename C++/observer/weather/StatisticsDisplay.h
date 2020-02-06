//
// Created by Chans on 2020/2/6.
//

#ifndef WEATHER_STATISTICSDISPLAY_H
#define WEATHER_STATISTICSDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class StatisticsDisplay : public Observer, DisplayElement{
private:
    float maxTemp = 0.0f;
    float minTemp = 0.0f;
    float tempSum = 0.0f;
    int numReadings;
    WeatherData *weatherData;
public:
    explicit StatisticsDisplay(WeatherData *weather);
    void display() override;
    void update(float temp, float humidity, float pressure) override;
};


#endif //WEATHER_STATISTICSDISPLAY_H
