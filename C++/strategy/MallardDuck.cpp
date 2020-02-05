//
// Created by Chans on 2020/2/5.
//

#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

MallardDuck::~MallardDuck() {
    delete this->flyBehavior;
    delete this->quackBehavior;
}

void MallardDuck::dispaly() {
    std::cout << "I'm a real Mallard duck" << std::endl;
}
