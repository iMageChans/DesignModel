//
// Created by Chans on 2020/2/5.
//

#include "SimpleSubject.h"

SimpleSubject::SimpleSubject() {

}

void SimpleSubject::registerObserver(Observer *observer) {
    observers.push_front(observer);
}

void SimpleSubject::removeObserver(Observer *observer) {
    observers.remove(observer);
}

void SimpleSubject::notifyObservers() {
    for(Observer *observer : observers) {
        observer->update(value);
    }
}

void SimpleSubject::setValue(int value) {
    this->value = value;
    notifyObservers();
}