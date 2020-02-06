//
// Created by Chans on 2020/2/6.
//

#include "VeggiePizza.h"

VeggiePizza::VeggiePizza() {
    name = "Veggie Pizza";
    dough = "Crust";
    sauce = "Marinara sauce";
}

Pizza* VeggiePizzaFactory::createPizza() {
    return new VeggiePizza();
}
