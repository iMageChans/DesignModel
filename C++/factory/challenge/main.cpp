#include <iostream>
#include "ZoneFactory.h"
#include "ZonePacific.h"
#include "Calendar.h"
#include "PacificCalendar.h"
#include "ZoneMountain.h"
#include "ZoneEastern.h"
#include "ZoneCentral.h"


int main() {
    ZoneFactory *zonePacific = new ZonePacificnFactory();
    Calendar *calendar = new PacificCalendar(zonePacific);
    calendar->print();

    ZoneFactory *zoneMountain = new ZoneMountainFactory();
    Calendar *calendar1 = new PacificCalendar(zoneMountain);
    calendar1->print();

    ZoneFactory *zoneEastern = new ZoneEasternFactory();
    Calendar *calendar2 = new PacificCalendar(zoneEastern);
    calendar2->print();

    ZoneFactory *zoneCentral = new ZoneCentralFactory();
    Calendar *calendar3 = new PacificCalendar(zoneCentral);
    calendar3->print();
    return 0;
}
