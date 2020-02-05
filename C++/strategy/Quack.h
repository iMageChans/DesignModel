//
// Created by Chans on 2020/2/5.
//

#ifndef STRATEGY_QUACK_H
#define STRATEGY_QUACK_H


#include "QuackBehavior.h"

class Quack : public QuackBehavior{
public:
    void quack() override;
};


#endif //STRATEGY_QUACK_H
