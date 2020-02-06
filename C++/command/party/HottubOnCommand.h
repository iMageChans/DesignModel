//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_HOTTUBONCOMMAND_H
#define PARTY_HOTTUBONCOMMAND_H

#include "Command.h"
#include "Hottub.h"

class HottubOnCommand : public Command{
public:
    Hottub *hottub;
    explicit HottubOnCommand(Hottub *h);

    void execute() override;

    void undo() override;
};


#endif //PARTY_HOTTUBONCOMMAND_H
