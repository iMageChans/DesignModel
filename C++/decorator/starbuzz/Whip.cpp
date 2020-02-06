//
// Created by Chans on 2020/2/6.
//

#include "Whip.h"

Whip::Whip(Beverage *b) {
    beverage = b;
}

std::string Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost(){
    return .10 + beverage->cost();
}
