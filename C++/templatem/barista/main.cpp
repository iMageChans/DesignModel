#include <iostream>
#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"

int main() {
    CaffeineBeverage *tea = new Tea();
    CaffeineBeverage *coffee = new Coffee();

    tea->prepareRecipe();
    coffee->prepareRecipe();
    return 0;
}
