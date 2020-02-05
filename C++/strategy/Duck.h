//
// Created by Chans on 2020/2/5.
//

#ifndef STRATEGY_DUCK_H
#define STRATEGY_DUCK_H

#include <type_traits>
#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
public:
    virtual void setFlyBehavior(FlyBehavior *behavior){
        this->flyBehavior = behavior;
    }

    virtual void setQuackBehavior(QuackBehavior *behavior){
        this->quackBehavior = behavior;
    }

    virtual void dispaly() = 0;

    virtual void performFly() {
        flyBehavior->fly();
    }

    virtual void performQuack() {
        quackBehavior->quack();
    }

    virtual void swim() {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }
};

#endif //STRATEGY_DUCK_H
