//
// Created by Chans on 2020/2/7.
//
#include <iostream>
#include "DvdPlayer.h"


DvdPlayer::DvdPlayer(string des) {
    description = des;
}

void DvdPlayer::on() {
    cout << description << " on" << endl;
}

void DvdPlayer::off() {
    cout << description << " off" << endl;
}

void DvdPlayer::eject() {
    movie = nullptr;
    cout << description << " eject" << endl;
}

void DvdPlayer::play(string t) {
    movie = t;
    currentTrack = 0;
    cout << description << " playing " << movie << endl;
}

void DvdPlayer::play(int track) {
    if (movie.empty()){
        cout << description << " can't play track"<< currentTrack << ", no cd inserted"  << endl;
    } else{
        currentTrack = track;
        cout << description << " playing track " << currentTrack << " of" << movie << endl;
    }
}

void DvdPlayer::stop() {
    currentTrack = 0;
    cout << description << " stopped" << endl;
}

void DvdPlayer::pause() {
    cout << description << " paused " << movie << endl;
}

string DvdPlayer::toString() {
    return description;
}

void DvdPlayer::setTwoChannelAudio() {
    cout << description << " set two channel audio" << endl;
}

void DvdPlayer::setSurroundAudio() {
    cout << description << " set surround audio" << endl;
}
