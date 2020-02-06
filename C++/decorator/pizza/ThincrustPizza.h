//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_THINCRUSTPIZZA_H
#define PIZZA_THINCRUSTPIZZA_H

#include "Pizza.h"

class ThincrustPizza : public Pizza{
public:
    ThincrustPizza();

    double cost() override;
};


#endif //PIZZA_THINCRUSTPIZZA_H
