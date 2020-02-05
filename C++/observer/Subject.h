//
// Created by Chans on 2020/2/5.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void registerObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
};


#endif //OBSERVER_SUBJECT_H
