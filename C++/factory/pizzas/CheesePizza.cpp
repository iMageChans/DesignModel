//
// Created by Chans on 2020/2/6.
//

#include "CheesePizza.h"

CheesePizza::CheesePizza() {
    name = "Cheese Pizza";
    dough = "Regular Crust";
    sauce = "Marinara Pizza Sauce";
}

Pizza *CheesePizzaFactory::createPizza() {
    return new CheesePizza();
}
