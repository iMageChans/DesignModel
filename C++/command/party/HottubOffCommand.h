//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_HOTTUBOFFCOMMAND_H
#define PARTY_HOTTUBOFFCOMMAND_H

#include "Command.h"
#include "Hottub.h"

class HottubOffCommand : public Command{
public:
    Hottub *hottub;
    explicit HottubOffCommand(Hottub *h);

    void execute() override;

    void undo() override;
};


#endif //PARTY_HOTTUBOFFCOMMAND_H
