//
// Created by Chans on 2020/2/5.
//

#ifndef WEATHER_OBSERVER_H
#define WEATHER_OBSERVER_H


class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};


#endif //WEATHER_OBSERVER_H
