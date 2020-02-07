//
// Created by Chans on 2020/2/7.
//

#ifndef DUCKS_DUCKADAPTER_H
#define DUCKS_DUCKADAPTER_H

#include "Duck.h"
#include "Turkey.h"

class DuckAdapter : public Turkey{
public:
    Duck *duck;

    explicit DuckAdapter(Duck *d);

    void gobble() override;

    void fly() override;
};


#endif //DUCKS_DUCKADAPTER_H
