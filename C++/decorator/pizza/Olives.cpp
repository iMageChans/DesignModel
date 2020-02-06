//
// Created by Chans on 2020/2/6.
//

#include "Olives.h"

Olives::Olives(Pizza *p) {
    pizza = p;
}

string Olives::getDescription(){
    return pizza->getDescription() + ", Cheese";
}

double Olives::cost() {
    return pizza->cost() + .30;
}
