//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZA_PIZZA_H
#define PIZZA_PIZZA_H

#include <xstring>

using namespace std;

class Pizza {
protected:
    string description = "Basic Pizza";
public:
    virtual string getDescription(){
        return description;
    }

    virtual double cost() = 0;
};


#endif //PIZZA_PIZZA_H
