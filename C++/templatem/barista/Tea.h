//
// Created by Chans on 2020/2/11.
//

#ifndef BARISTA_TEA_H
#define BARISTA_TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage{
public:
    void brew() override;
    void addCondiments() override;
};


#endif //BARISTA_TEA_H
