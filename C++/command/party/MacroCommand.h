//
// Created by Chans on 2020/2/6.
//
using namespace std;

#ifndef PARTY_MACROCOMMAND_H
#define PARTY_MACROCOMMAND_H

#include "Command.h"
#include <vector>

class MacroCommand : public Command{
public:
    vector<Command *> commands;
    explicit MacroCommand(vector<Command *> obj);
    void execute() override;
    void undo() override;
};


#endif //PARTY_MACROCOMMAND_H
