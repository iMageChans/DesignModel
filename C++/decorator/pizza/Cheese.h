//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_CHEESE_H
#define PIZZA_CHEESE_H

#include "ToppingDecorator.h"

class Cheese : public ToppingDecorator{
public:
    explicit Cheese(Pizza *p);

    string getDescription() override;

    double cost() override;
};


#endif //PIZZA_CHEESE_H
