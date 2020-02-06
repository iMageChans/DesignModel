//
// Created by Chans on 2020/2/6.
//

#include "ClamPizza.h"

ClamPizza::ClamPizza() {
    name = "Clam Pizza";
    dough = "Thin crust";
    sauce = "White garlic sauce";
}

Pizza *ClamPizzaFactory::createPizza() {
    return new ClamPizza();
}
