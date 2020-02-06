#include <iostream>
#include "ToppingDecorator.h"
#include "ThincrustPizza.h"
#include "Cheese.h"
#include "Olives.h"

int main() {

    Pizza *pizza = new ThincrustPizza();
    Pizza *cheesePizza = new Cheese(pizza);
    Pizza *greekPizza = new Olives(pizza);

    std::cout << cheesePizza->getDescription() << " $" << cheesePizza->cost() << std::endl;
    std::cout << greekPizza->getDescription() << " $" << greekPizza->cost() << std::endl;
    return 0;
}
