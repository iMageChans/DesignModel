//
// Created by Chans on 2020/2/6.
//

#include "PacificCalendar.h"

PacificCalendar::PacificCalendar(ZoneFactory *zoneFactory) {
    factory = zoneFactory;
    zone = zoneFactory->CreateZone();
}

void PacificCalendar::createCalendar(list<string> appointments) {
    cout <<  "Making the calendar" << endl;
};
