//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_HOMETHEATERFACADE_H
#define FACADE_HOMETHEATERFACADE_H
using  namespace std;
#include <iostream>
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"

class HomeTheaterFacade {
public:
    Amplifier *amplifier;
    Tuner *tuner;
    DvdPlayer *dvdPlayer;
    CdPlayer *cdPlayer;
    Projector *projector;
    TheaterLights *theaterLights;
    Screen *screen;
    PopcornPopper *popcornPopper;

    HomeTheaterFacade(Amplifier *ampl,
                      Tuner *t,
                      DvdPlayer *dvd,
                      CdPlayer *cd,
                      Projector *pro,
                      TheaterLights *theater,
                      Screen *sc,
                      PopcornPopper *pop);

    void watchMovie (string movie);
    void endMovie();
    void listenToCd(string cdTitle);
    void endCd();
    void listenToRadio(double frequency);
    void endRadio();
};


#endif //FACADE_HOMETHEATERFACADE_H
