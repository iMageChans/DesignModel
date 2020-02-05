//
// Created by Chans on 2020/2/5.
//

#ifndef STRATEGY_DECOYDUCK_H
#define STRATEGY_DECOYDUCK_H

#include "Duck.h"

class DecoyDuck : public Duck{
public:
    DecoyDuck();
    ~DecoyDuck();

    void dispaly() override;
};


#endif //STRATEGY_DECOYDUCK_H
