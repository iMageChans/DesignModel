//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_TOPPINGDECORATOR_H
#define PIZZA_TOPPINGDECORATOR_H

#include "Pizza.h"

class ToppingDecorator : public Pizza{
protected:
    Pizza *pizza;
};


#endif //PIZZA_TOPPINGDECORATOR_H
