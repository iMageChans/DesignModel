//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_AMPLIFIER_H
#define FACADE_AMPLIFIER_H
using  namespace std;
#include <string>
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Tuner.h"

class Amplifier {
public:
    string description;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;

    explicit Amplifier(string des);
    void on();
    void off();
    void setSurroundSound();
    void setStereoSound();
    void setVolume(int level);
    void setTuner(Tuner *t);
    void setDvd(DvdPlayer *d);
    void setCd(CdPlayer *c);
    string toString();
};


#endif //FACADE_AMPLIFIER_H
