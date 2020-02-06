//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_ESPRESSO_H
#define STARBUZZ_ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage{
public:
    Espresso();
    double cost() override;
};


#endif //STARBUZZ_ESPRESSO_H
