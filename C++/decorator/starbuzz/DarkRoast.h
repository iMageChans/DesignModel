//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_DARKROAST_H
#define STARBUZZ_DARKROAST_H

#include "Beverage.h"

class DarkRoast : public Beverage{
public:
    DarkRoast();
    double cost() override;
};


#endif //STARBUZZ_DARKROAST_H
