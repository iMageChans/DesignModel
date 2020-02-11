//
// Created by Chans on 2020/2/11.
//

#ifndef BARISTA_COFFEE_H
#define BARISTA_COFFEE_H

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage{
public:
    void brew() override;
    void addCondiments() override;
};


#endif //BARISTA_COFFEE_H
