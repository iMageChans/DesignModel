//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_DECAF_H
#define STARBUZZ_DECAF_H

#include "Beverage.h"

class Decaf : public Beverage{
public:
    Decaf();
    double cost() override;
};


#endif //STARBUZZ_DECAF_H
