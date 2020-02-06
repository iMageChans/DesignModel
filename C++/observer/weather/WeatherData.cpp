//
// Created by Chans on 2020/2/5.
//

#include "WeatherData.h"

void WeatherData::registerObserver(Observer *observer) {
    observers.push_front(observer);
}

void WeatherData::removeObserver(Observer *observer) {
    observers.remove(observer);
}

void WeatherData::notifyObservers() {
    for (Observer *observer : observers){
        observer->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float t, float h, float p) {
    temperature = t;
    humidity = h;
    pressure = p;
    measurementsChanged();
}

float WeatherData::getTemperature() {
    return temperature;
}

float WeatherData::getHumidity() {
    return humidity;
}

float WeatherData::getPressure() {
    return pressure;
}
