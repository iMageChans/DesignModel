//
// Created by Chans on 2020/2/7.
//

#ifndef DUCKS_WILDTURKEY_H
#define DUCKS_WILDTURKEY_H

#include "Turkey.h"

class WildTurkey : Turkey{
public:
    void gobble() override;

    void fly() override;
};


#endif //DUCKS_WILDTURKEY_H
