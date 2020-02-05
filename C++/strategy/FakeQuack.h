//
// Created by Chans on 2020/2/5.
//

#ifndef STRATEGY_FAKEQUACK_H
#define STRATEGY_FAKEQUACK_H

#include "../../../../Desktop/strategy/QuackBehavior.h"

class FakeQuack : public QuackBehavior{
public:
    void quack() override;
};


#endif //STRATEGY_FAKEQUACK_H
