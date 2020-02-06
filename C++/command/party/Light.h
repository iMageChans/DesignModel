//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_LIGHT_H
#define PARTY_LIGHT_H

#include <string>

using namespace std;

class Light {
public:
    string location;
    int level{};

    explicit Light(string loca);

    void on();
    void off();
    void dim(int l);
    int getLevel();
};


#endif //PARTY_LIGHT_H
