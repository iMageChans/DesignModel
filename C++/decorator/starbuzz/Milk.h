//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_MILK_H
#define STARBUZZ_MILK_H

#include "CondimentDecorator.h"

class Milk : public CondimentDecorator{
public:
    explicit Milk(Beverage *b);

    std::string getDescription() override;

    double cost() override;
};


#endif //STARBUZZ_MILK_H
