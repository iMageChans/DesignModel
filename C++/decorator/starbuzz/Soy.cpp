//
// Created by Chans on 2020/2/6.
//

#include "Soy.h"

Soy::Soy(Beverage *b) {
    beverage = b;
}

std::string Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return .15 + beverage->cost();
}
