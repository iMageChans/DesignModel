#include <iostream>
#include "MallardDuck.h"
#include "Turkey.h"
#include "DuckAdapter.h"

int main() {
    MallardDuck *mallardDuck = new MallardDuck();
    Turkey *duckAdapter = new DuckAdapter(mallardDuck);

    duckAdapter->gobble();
    duckAdapter->fly();
    return 0;
}
