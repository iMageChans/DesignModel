//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_PACIFICCALENDAR_H
#define CHALLENGE_PACIFICCALENDAR_H

#include "Calendar.h"
#include "ZoneFactory.h"

class PacificCalendar : public Calendar{
private:
    ZoneFactory *factory;
public:
    explicit PacificCalendar(ZoneFactory *zoneFactory);

    void createCalendar(list<string> appointments) override;
};


#endif //CHALLENGE_PACIFICCALENDAR_H
