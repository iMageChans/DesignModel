//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_SOY_H
#define STARBUZZ_SOY_H

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator{
public:
    explicit Soy(Beverage *b);

    std::string getDescription() override;

    double cost() override;
};


#endif //STARBUZZ_SOY_H
