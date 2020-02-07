//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_DVDPLAYER_H
#define FACADE_DVDPLAYER_H

using  namespace std;
#include <string>

class DvdPlayer {
public:
    string description;
    int currentTrack;
    string movie;

    explicit DvdPlayer(string des);
    void on();
    void off();
    void eject();
    void play(string title);
    void play(int track);
    void stop();
    void pause();
    string toString();
    void setTwoChannelAudio();
    void setSurroundAudio();
};


#endif //FACADE_DVDPLAYER_H
