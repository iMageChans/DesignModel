//
// Created by Chans on 2020/2/5.
//

#ifndef OBSERVER_SIMPLEOBSERVER_H
#define OBSERVER_SIMPLEOBSERVER_H

#include "Observer.h"
#include "Subject.h"

class SimpleObserver : public Observer{
private:
    int value;
    Subject *subject;

public:
    SimpleObserver(Subject *simpleSubject);
    void update(int value) override;
    void display();
};


#endif //OBSERVER_SIMPLEOBSERVER_H
