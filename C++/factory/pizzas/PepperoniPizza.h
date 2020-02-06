//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_PEPPERONIPIZZA_H
#define PIZZAS_PEPPERONIPIZZA_H

#include "Pizza.h"
#include "SimplePizzaFactory.h"

class PepperoniPizza : public Pizza{
public:
    PepperoniPizza();
};

class PepperoniPizzaFactory : public SimplePizzaFactory{
public:
    Pizza* createPizza() override;
};

#endif //PIZZAS_PEPPERONIPIZZA_H
