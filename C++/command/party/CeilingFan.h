//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_CEILINGFAN_H
#define PARTY_CEILINGFAN_H

#include <xstring>

using namespace std;

enum Fan{
    HIGH = 3,
    MEDIUM = 2,
    LOW = 1,
    OFF = 0
};

class CeilingFan {
public:
    int HIGH = 3;
    int MEDIUM = 2;
    int LOW = 1;
    int OFF = 0;
    string location;
    int speed;

    explicit CeilingFan(string loca);
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();
};


#endif //PARTY_CEILINGFAN_H
