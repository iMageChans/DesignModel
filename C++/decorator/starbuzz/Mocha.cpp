//
// Created by Chans on 2020/2/6.
//

#include "Mocha.h"

Mocha::Mocha(Beverage *b) {
    beverage = b;
}

std::string Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return .20 + beverage->cost();
}
