//
// Created by Chans on 2020/2/7.
//
using  namespace std;
#ifndef FACADE_THEATERLIGHTS_H
#define FACADE_THEATERLIGHTS_H

#include <string>

class TheaterLights {
public:
    string description;
    explicit TheaterLights(string des);
    void on();
    void off();
    void dim(int level);
    string toString();
};


#endif //FACADE_THEATERLIGHTS_H
