//
// Created by Chans on 2020/2/7.
//
using namespace std;
#ifndef PARTY_TV_H
#define PARTY_TV_H

#include <string>

class TV {
public:
    string location;
    int channel;

    explicit TV(string loca);
    void on();
    void off();
    void setInputChannel(int volume);
};


#endif //PARTY_TV_H
