#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"

using namespace std;

int main() {
    Beverage *beverage = new Espresso();
    cout << beverage->getDescription() << " $" << beverage->cost() << endl;

    Beverage *beverage1 = new DarkRoast();
    beverage1 = new Mocha(beverage1);
    beverage1 = new Mocha(beverage1);
    beverage1 = new Whip(beverage1);
    cout << beverage1->getDescription() << " $" << beverage1->cost() << endl;

    Beverage *beverage2 = new HouseBlend();
    beverage2 = new Soy(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
    return 0;
}
