//
// Created by Chans on 2020/2/5.
//

#ifndef SIMPLE_SIMPLESUBJECT_H
#define SIMPLE_SIMPLESUBJECT_H

#include "Subject.h"
#include "Observer.h"
#include <list>

typedef std::list<Observer*> Observers;

class SimpleSubject : public Subject{
private:
    Observers observers;
    int value;

public:
    SimpleSubject();

    void registerObserver(Observer *observer) override;
    void removeObserver(Observer *observer) override;
    void notifyObservers() override;
    void setValue(int value);
};


#endif //SIMPLE_SIMPLESUBJECT_H
