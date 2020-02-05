//
// Created by Chans on 2020/2/5.
//
#include <iostream>
#include "SimpleObserver.h"

SimpleObserver::SimpleObserver(Subject *simpleSubject) {
    subject = simpleSubject;
    simpleSubject->registerObserver(this);
}

void SimpleObserver::update(int value) {
    this->value = value;
    display();
}

void SimpleObserver::display() {
    std::cout << "Value: " << value << std::endl;
}