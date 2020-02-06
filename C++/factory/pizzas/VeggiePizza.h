//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_VEGGIEPIZZA_H
#define PIZZAS_VEGGIEPIZZA_H

#include "Pizza.h"
#include "SimplePizzaFactory.h"

class VeggiePizza : public Pizza{
public:
    VeggiePizza();
};


class VeggiePizzaFactory : public SimplePizzaFactory{
public:
    Pizza* createPizza() override;
};


#endif //PIZZAS_VEGGIEPIZZA_H
