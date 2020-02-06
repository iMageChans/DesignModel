//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONEMOUNTAIN_H
#define CHALLENGE_ZONEMOUNTAIN_H

#include "Zone.h"
#include "ZoneFactory.h"

class ZoneMountain : public Zone{
public:
    ZoneMountain();
};

class ZoneMountainFactory :public ZoneFactory{
public:
    Zone* CreateZone() override{
        return new ZoneMountain();
    }
};

#endif //CHALLENGE_ZONEMOUNTAIN_H
