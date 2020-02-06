//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_CALENDAR_H
#define CHALLENGE_CALENDAR_H


#include <iostream>
#include <list>
#include "Zone.h"

class Calendar {
protected:
    Zone *zone;
public:
    virtual void print(){
        cout <<  "--- " << zone->getDisplayName() << " Calendar ---" << endl;
        cout <<  "Offset from GMT: " << zone->getDisplayName()<< endl;
    }

    virtual void createCalendar(list<string> appointments) = 0;
};


#endif //CHALLENGE_CALENDAR_H
