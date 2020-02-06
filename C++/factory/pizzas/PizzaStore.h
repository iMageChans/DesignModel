//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_PIZZASTORE_H
#define PIZZAS_PIZZASTORE_H


#include "SimplePizzaFactory.h"

class PizzaStore {
private:
    SimplePizzaFactory *factory;
public:
    explicit PizzaStore(SimplePizzaFactory *f);
    void orderPizza();
};


#endif //PIZZAS_PIZZASTORE_H
