//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_HOTTUB_H
#define PARTY_HOTTUB_H


class Hottub {
protected:
    bool on_off;
    int temperature;
public:
    void on();
    void off();
    void circulate();
    void jetsOn();
    void jetsOff();
    void setTemperature(int temperature);
};


#endif //PARTY_HOTTUB_H
