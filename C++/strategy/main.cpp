#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "FakeQuack.h"

int main() {
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    mallard->performQuack();
    mallard->dispaly();

    mallard->setQuackBehavior(new FakeQuack());
    mallard->performQuack();

    return 0;
}
