//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_CHEESEPIZZA_H
#define PIZZAS_CHEESEPIZZA_H

#include "Pizza.h"
#include "SimplePizzaFactory.h"

class CheesePizza : public Pizza{
public:
    CheesePizza();
};

class CheesePizzaFactory : public SimplePizzaFactory{
public:
    Pizza* createPizza() override;
};

#endif //PIZZAS_CHEESEPIZZA_H
