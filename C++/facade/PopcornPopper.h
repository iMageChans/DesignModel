//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_POPCORNPOPPER_H
#define FACADE_POPCORNPOPPER_H

using  namespace std;
#include <string>

class PopcornPopper {
public:
    string description;

    explicit PopcornPopper(string des);

    void off();
    void pop();
    string toString();

public:
    void on();
};


#endif //FACADE_POPCORNPOPPER_H
