//
// Created by Chans on 2020/2/5.
//

#ifndef WEATHER_CURRENTCONDITIONSDISPLAY_H
#define WEATHER_CURRENTCONDITIONSDISPLAY_H

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer, DisplayElement{
private:
    float temperature;
    float  humidity;
    Subject *weatherData;

public:
    explicit CurrentConditionsDisplay(Subject *weather);
    void display() override;
    void update(float temp, float humidity, float pressure) override;
};


#endif //WEATHER_CURRENTCONDITIONSDISPLAY_H
