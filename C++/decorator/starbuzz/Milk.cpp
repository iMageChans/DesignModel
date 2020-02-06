//
// Created by Chans on 2020/2/6.
//

#include "Milk.h"

Milk::Milk(Beverage *b) {
    beverage = b;
}

std::string Milk::getDescription() {
    return beverage->getDescription() + "Milk";
}

double Milk::cost() {
    return .10 + beverage->cost();
}
