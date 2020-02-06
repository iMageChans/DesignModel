//
// Created by Chans on 2020/2/6.
//

#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza() {
    name = "Pepperoni Pizza";
    dough = "Crust";
    sauce = "Marinara sauce";
}

Pizza *PepperoniPizzaFactory::createPizza() {
    return new PepperoniPizza();
}
