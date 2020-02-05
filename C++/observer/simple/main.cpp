#include <iostream>
#include "SimpleSubject.h"
#include "SimpleObserver.h"

int main() {
    SimpleSubject *simpleSubject = new SimpleSubject();
    SimpleObserver *simpleObserver = new SimpleObserver(simpleSubject);
    simpleSubject->setValue(80);
    return 0;
}
