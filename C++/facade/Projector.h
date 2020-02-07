//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_PROJECTOR_H
#define FACADE_PROJECTOR_H

using  namespace std;
#include <string>
#include "DvdPlayer.h"

class Projector {
public:
    string description;
    DvdPlayer *dvdPlayer;
    string movie;

    Projector(string des, DvdPlayer *dvd);
    void on();
    void off();
    void wideScreenMode();
    void tvMode();
    string toString();
};


#endif //FACADE_PROJECTOR_H
