//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_SCREEN_H
#define FACADE_SCREEN_H

using  namespace std;
#include <string>

class Screen {
public:
    string description;
    explicit Screen(string des);
    void up();
    void down();
    string toString();
};


#endif //FACADE_SCREEN_H
