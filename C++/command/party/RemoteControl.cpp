//
// Created by Chans on 2020/2/7.
//

#include "RemoteControl.h"
#include "NoCommand.h"
#include <typeinfo>

RemoteControl::RemoteControl() {
    Command *noCommand = new NoCommand();
    vector<Command *> on(7, noCommand);
    onCommands = on;
    vector<Command *> off(7, noCommand);
    offCommands = off;
    undoCommand = noCommand;
}

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void RemoteControl::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void RemoteControl::undoButtonWasPushed() {
    undoCommand->undo();
}

void RemoteControl::toString() {
    for (int i = 0; i < onCommands.max_size(); ++i) {
        if (i >= onCommands.size() || i < 0) break;
        if (i >= offCommands.size() || i < 0) break;
        cout << "[slot " << i << "] " << typeid(onCommands[i]).name() << "    " << typeid(offCommands[i]).name() << endl;
    }
    cout << "[undo] " << typeid(undoCommand).name() << endl;
}


