//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_TUNER_H
#define FACADE_TUNER_H

using  namespace std;
#include <string>

class Tuner {
public:
    explicit Tuner(string des);

    string description;
    double frequency{};

    void on();
    void off();
    void setFrequency(double frequency);
    void setAm();
    void setFm();
    string toString();
};


#endif //FACADE_TUNER_H
