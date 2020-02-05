//
// Created by Chans on 2020/2/5.
//

#ifndef STRATEGY_MALLARDDUCK_H
#define STRATEGY_MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck{
public:
    MallardDuck();
    ~MallardDuck();

    void dispaly() override;
};


#endif //STRATEGY_MALLARDDUCK_H
