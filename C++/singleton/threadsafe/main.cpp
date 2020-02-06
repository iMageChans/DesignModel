#include <iostream>
#include "Singleton.h"

int main() {
    Singleton *singleton = Singleton::getInstance();
    singleton->display();
    return 0;
}
