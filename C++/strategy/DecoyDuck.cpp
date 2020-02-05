//
// Created by Chans on 2020/2/5.
//

#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "../../../../Desktop/strategy/MuteQuack.h"

DecoyDuck::DecoyDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}

DecoyDuck::~DecoyDuck() {
    delete this->flyBehavior;
    delete this->quackBehavior;
}

void DecoyDuck::dispaly() {
    std::cout << "I'm a duck Decoy" << std::endl;
}
