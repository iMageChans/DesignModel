//
// Created by Chans on 2020/2/7.
//

#include "HomeTheaterFacade.h"

HomeTheaterFacade::HomeTheaterFacade(Amplifier *ampl, Tuner *t, DvdPlayer *dvd, CdPlayer *cd, Projector *pro,
                                     TheaterLights *theater, Screen *sc, PopcornPopper *pop) {
    amplifier = ampl;
    tuner = t;
    dvdPlayer = dvd;
    cdPlayer = cd;
    projector = pro;
    theaterLights = theater;
    screen = sc;
    popcornPopper = pop;
}

void HomeTheaterFacade::watchMovie(string movie) {
    cout << "Get ready to watch a movie..." << endl;
    popcornPopper->on();
    popcornPopper->pop();
    theaterLights->dim(10);
    screen->down();
    projector->on();
    projector->wideScreenMode();
    amplifier->on();
    amplifier->setDvd(dvdPlayer);
    amplifier->setStereoSound();
    amplifier->setVolume(5);
    dvdPlayer->on();
    dvdPlayer->play(movie);
}

void HomeTheaterFacade::endMovie() {
    cout << "Shutting movie theater down...." << endl;
    popcornPopper->off();
    theaterLights->on();
    screen->up();
    projector->off();
    amplifier->off();
    dvdPlayer->stop();
    dvdPlayer->eject();
    dvdPlayer->off();
}

void HomeTheaterFacade::listenToCd(string cdTitle) {
    cout << "Get ready for an audiopile experence..." << endl;
    theaterLights->on();
    amplifier->on();
    amplifier->setVolume(5);
    amplifier->setCd(cdPlayer);
    amplifier->setStereoSound();
    cdPlayer->on();
    cdPlayer->play(cdTitle);
}

void HomeTheaterFacade::endCd() {
    cout << "Shutting down CD..." << endl;
    amplifier->off();
    amplifier->setCd(cdPlayer);
    cdPlayer->eject();
    cdPlayer->off();
}

void HomeTheaterFacade::listenToRadio(double frequency) {
    cout << "Tuning in the airwaves..." << endl;
    tuner->on();
    tuner->setFrequency(frequency);
    amplifier->on();
    amplifier->setVolume(5);
    amplifier->setTuner(tuner);
}

void HomeTheaterFacade::endRadio() {
    cout << "Shutting down the tuner..." << endl;
    tuner->off();
    amplifier->off();
}
