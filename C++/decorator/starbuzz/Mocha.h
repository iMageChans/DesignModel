//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_MOCHA_H
#define STARBUZZ_MOCHA_H

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator{
public:
    explicit Mocha(Beverage *b);

    std::string getDescription() override;

    double cost() override;
};


#endif //STARBUZZ_MOCHA_H
