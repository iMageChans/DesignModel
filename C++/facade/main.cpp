#include <iostream>
using  namespace std;
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

int main() {
    Amplifier *amp = new Amplifier("Top-O-Line Amplifier");
    Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner");
    DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player");
    CdPlayer *cd = new CdPlayer("Top-O-Line CD Player");
    Projector *projector = new Projector("Top-O-Line Projector", dvd);
    TheaterLights *lights = new TheaterLights("Theater Ceiling Lights");
    Screen *screen = new Screen("Theater Screen");
    PopcornPopper *popper = new PopcornPopper("Popcorn Popper");

    HomeTheaterFacade *homeTheaterFacade = new HomeTheaterFacade(amp,tuner,dvd,cd,projector,lights,screen,popper);

    homeTheaterFacade->watchMovie("Raiders of the Lost Ark");
    homeTheaterFacade->endMovie();
    return 0;
}
