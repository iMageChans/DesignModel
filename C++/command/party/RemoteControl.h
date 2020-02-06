//
// Created by Chans on 2020/2/7.
//

using namespace std;

#ifndef PARTY_REMOTECONTROL_H
#define PARTY_REMOTECONTROL_H

#include "Command.h"
#include <vector>
#include <string>
#include <iostream>

class RemoteControl {
public:
    Command *undoCommand;
    vector<Command *> onCommands;
    vector<Command *> offCommands;
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
    void toString();
};


#endif //PARTY_REMOTECONTROL_H
