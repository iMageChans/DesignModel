//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_SIMPLEPIZZAFACTORY_H
#define PIZZAS_SIMPLEPIZZAFACTORY_H

#include "Pizza.h"

class SimplePizzaFactory {
public:
    virtual Pizza* createPizza() = 0;
};


#endif //PIZZAS_SIMPLEPIZZAFACTORY_H
