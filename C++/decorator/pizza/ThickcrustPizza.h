//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_THICKCRUSTPIZZA_H
#define PIZZA_THICKCRUSTPIZZA_H

#include "Pizza.h"

class ThickcrustPizza : public Pizza{
public:
    ThickcrustPizza();

    double cost() override;
};


#endif //PIZZA_THICKCRUSTPIZZA_H
