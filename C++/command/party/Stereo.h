//
// Created by Chans on 2020/2/7.
//
using namespace std;
#ifndef PARTY_STEREO_H
#define PARTY_STEREO_H

#include <string>

class Stereo {
public:
    string location;
    explicit Stereo(string loca);
    void on();
    void off();
    void setCD();
    void setDVD();
    void setRadio();
    void setVolume(int volume);
};


#endif //PARTY_STEREO_H
