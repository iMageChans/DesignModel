//
// Created by Chans on 2020/2/11.
//

#ifndef BARISTA_CAFFEINEBEVERAGE_H
#define BARISTA_CAFFEINEBEVERAGE_H

#include <iostream>

using namespace std;

class CaffeineBeverage {
public:
    virtual void boilWater(){
        cout << "Boiling water" << endl;
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    virtual void pourInCup(){
        cout << "Pouring into cup" << endl;
    }
};


#endif //BARISTA_CAFFEINEBEVERAGE_H
