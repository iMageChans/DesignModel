//
// Created by Chans on 2020/2/7.
//

#include "TurkeyAdapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey *t) {
    turkey = t;
}

void TurkeyAdapter::quack() {
    turkey->gobble();
}

void TurkeyAdapter::fly() {
    turkey->fly();
}
