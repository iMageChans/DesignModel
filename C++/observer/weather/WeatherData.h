//
// Created by Chans on 2020/2/5.
//

#ifndef WEATHER_WEATHERDATA_H
#define WEATHER_WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>

typedef std::list<Observer*> Observers;

class WeatherData : public Subject{
private:
    Observers observers;
    float temperature;
    float humidity;
    float pressure;

public:
    void registerObserver(Observer *observer) override;
    void removeObserver(Observer *observer) override;
    void notifyObservers() override;

    void measurementsChanged();
    void setMeasurements(float t, float h, float p);

    float getTemperature();
    float getHumidity();
    float getPressure();
};


#endif //WEATHER_WEATHERDATA_H
