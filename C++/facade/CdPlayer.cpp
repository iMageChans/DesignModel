//
// Created by Chans on 2020/2/7.
//

#include <iostream>
#include "CdPlayer.h"

CdPlayer::CdPlayer(string des) {
    description = des;
}

void CdPlayer::on() {
    cout << description << " on" << endl;
}

void CdPlayer::off() {
    cout << description << " off" << endl;
}

void CdPlayer::eject() {
    title = nullptr;
    cout << description << " eject" << endl;
}

void CdPlayer::play(string t) {
    title = t;
    currentTrack = 0;
    cout << description << " playing " << title << endl;
}

void CdPlayer::play(int track) {
    if (title.empty()){
        cout << description << " can't play track"<< currentTrack << ", no cd inserted"  << endl;
    } else{
        currentTrack = track;
        cout << description << " playing track " << currentTrack << endl;
    }
}

void CdPlayer::stop() {
    currentTrack = 0;
    cout << description << " stopped" << endl;
}

void CdPlayer::pause() {
    cout << description << " paused " << title << endl;
}

string CdPlayer::toString() {
    return description;
}
