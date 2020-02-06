//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_WHIP_H
#define STARBUZZ_WHIP_H

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator{
public:
    explicit Whip(Beverage *b);

    std::string getDescription() override;

    double cost() override;
};


#endif //STARBUZZ_WHIP_H
