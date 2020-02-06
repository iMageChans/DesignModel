//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONEPACIFIC_H
#define CHALLENGE_ZONEPACIFIC_H

#include "Zone.h"
#include "ZoneFactory.h"

class ZonePacific : public Zone{
public:
    ZonePacific();
};

class ZonePacificnFactory : public ZoneFactory{
public:
    Zone* CreateZone() override{
        return new ZonePacific();
    }
};

#endif //CHALLENGE_ZONEPACIFIC_H
