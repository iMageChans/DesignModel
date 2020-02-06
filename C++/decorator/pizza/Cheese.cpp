//
// Created by Chans on 2020/2/6.
//

#include "Cheese.h"

Cheese::Cheese(Pizza *p) {
    pizza = p;
}

string Cheese::getDescription(){
    return pizza->getDescription() + ", Cheese";
}

double Cheese::cost() {
    return pizza->cost();
}
