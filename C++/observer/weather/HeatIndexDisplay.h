//
// Created by Chans on 2020/2/6.
//

#ifndef WEATHER_HEATINDEXDISPLAY_H
#define WEATHER_HEATINDEXDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class HeatIndexDisplay : public Observer, DisplayElement{
protected:
    float heatIndex = 0.0f;
private:
    WeatherData *weatherData;
    float computeHeatIndex(float t, float rh);
public:
    explicit HeatIndexDisplay(WeatherData *weather);
    void display() override;
    void update(float temp, float humidity, float pressure) override;
};


#endif //WEATHER_HEATINDEXDISPLAY_H
