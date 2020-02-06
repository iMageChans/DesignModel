//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONEFACTORY_H
#define CHALLENGE_ZONEFACTORY_H

#include "Zone.h"

class ZoneFactory {
public:
    virtual Zone *CreateZone() = 0;
};


#endif //CHALLENGE_ZONEFACTORY_H
