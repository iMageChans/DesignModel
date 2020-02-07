//
// Created by Chans on 2020/2/7.
//

#include "DuckAdapter.h"

DuckAdapter::DuckAdapter(Duck *d) {
    duck = d;
}

void DuckAdapter::gobble() {
    duck->quack();
}

void DuckAdapter::fly() {
    duck->fly();
}
