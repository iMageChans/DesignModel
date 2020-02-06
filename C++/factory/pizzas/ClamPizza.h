//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_CLAMPIZZA_H
#define PIZZAS_CLAMPIZZA_H

#include "Pizza.h"
#include "SimplePizzaFactory.h"

class ClamPizza : public Pizza{
public:
    ClamPizza();
};

class ClamPizzaFactory : public SimplePizzaFactory{
public:
    Pizza* createPizza() override;
};

#endif //PIZZAS_CLAMPIZZA_H
