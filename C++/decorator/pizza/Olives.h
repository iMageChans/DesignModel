//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_OLIVES_H
#define PIZZA_OLIVES_H

#include "ToppingDecorator.h"

class Olives : public ToppingDecorator{
public:
    Olives(Pizza *p);

    string getDescription() override;

    double cost() override;
};


#endif //PIZZA_OLIVES_H
