//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONEEASTERN_H
#define CHALLENGE_ZONEEASTERN_H

#include "Zone.h"
#include "ZoneFactory.h"

class ZoneEastern : public Zone{
public:
    ZoneEastern();
};

class ZoneEasternFactory :public ZoneFactory{
public:
    Zone* CreateZone() override{
        return new ZoneEastern();
    }
};

#endif //CHALLENGE_ZONEEASTERN_H
