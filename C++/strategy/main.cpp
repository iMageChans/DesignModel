#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "FakeQuack.h"
#include "DecoyDuck.h"

int main() {
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    mallard->dispaly();

    mallard->setQuackBehavior(new FakeQuack());
    mallard->performQuack();

    Duck *decoy = new DecoyDuck();
    decoy->performFly();
    decoy->performQuack();
    decoy->dispaly();

    return 0;
}
