//
// Created by Chans on 2020/2/7.
//

#ifndef DUCKS_MALLARDDUCK_H
#define DUCKS_MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck{
public:
    void quack() override;

    void fly() override;
};


#endif //DUCKS_MALLARDDUCK_H
