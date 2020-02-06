//
// Created by Chans on 2020/2/5.
//

#ifndef SIMPLE_SUBJECT_H
#define SIMPLE_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void registerObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
};


#endif //SIMPLE_SUBJECT_H