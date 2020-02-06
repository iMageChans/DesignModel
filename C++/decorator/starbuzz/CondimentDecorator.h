//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_CONDIMENTDECORATOR_H
#define STARBUZZ_CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage{
protected:
    Beverage *beverage;
};


#endif //STARBUZZ_CONDIMENTDECORATOR_H
