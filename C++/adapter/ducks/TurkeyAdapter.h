//
// Created by Chans on 2020/2/7.
//

#ifndef DUCKS_TURKEYADAPTER_H
#define DUCKS_TURKEYADAPTER_H

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck {

public:
    Turkey *turkey;
    explicit TurkeyAdapter(Turkey *t);

    void quack() override;

    void fly() override;
};


#endif //DUCKS_TURKEYADAPTER_H
