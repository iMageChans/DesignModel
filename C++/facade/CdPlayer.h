//
// Created by Chans on 2020/2/7.
//

#ifndef FACADE_CDPLAYER_H
#define FACADE_CDPLAYER_H

using  namespace std;
#include <string>

class CdPlayer {
public:
    string description;
    int currentTrack;
    string title;

    explicit CdPlayer(string des);
    void on();
    void off();
    void eject();
    void play(string title);
    void play(int track);
    void stop();
    void pause();
    string toString();
};


#endif //FACADE_CDPLAYER_H
