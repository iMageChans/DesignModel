//
// Created by Chans on 2020/2/6.
//

#ifndef PIZZAS_PIZZA_H
#define PIZZAS_PIZZA_H

#include <xstring>
#include <iostream>

using namespace std;

class Pizza {
protected:
    string name;
    string dough;
    string sauce;

public:
    virtual string getName(){
        return name;
    }

    virtual void prepare(){
        cout << "Preparing " << name << endl;
    }

    virtual void bake(){
        cout << "Baking " << name << endl;
    }

    virtual void cut(){
        cout << "Cutting " << name << endl;
    }

    virtual void box(){
        cout << "Boxing " << name << endl;
    }
};


#endif //PIZZAS_PIZZA_H
