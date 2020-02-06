//
// Created by Chans on 2020/2/6.
//

#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory *f) {
    factory = f;
}

void PizzaStore::orderPizza() {
    Pizza *pizza = factory->createPizza();

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
}
