#include <iostream>
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "PepperoniPizza.h"
#include "PizzaStore.h"

int main() {
    SimplePizzaFactory *cheesePizza = new CheesePizzaFactory();
    auto *store = new PizzaStore(cheesePizza);
    store->orderPizza();

    SimplePizzaFactory *veggiePizza = new VeggiePizzaFactory();
    auto *store1 = new PizzaStore(veggiePizza);
    store1->orderPizza();

    SimplePizzaFactory *pepperoniPizza = new PepperoniPizzaFactory();
    auto *store2 = new PizzaStore(pepperoniPizza);
    store2->orderPizza();
    return 0;
}
