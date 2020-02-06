//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONECENTRAL_H
#define CHALLENGE_ZONECENTRAL_H

#include "Zone.h"
#include "ZoneFactory.h"

class ZoneCentral : public Zone{
public:
    ZoneCentral();
};

class ZoneCentralFactory :public ZoneFactory{
public:
    Zone* CreateZone() override{
        return new ZoneCentral();
    }
};

#endif //CHALLENGE_ZONECENTRAL_H
