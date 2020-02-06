//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_CEILINGFANOFFCOMMAND_H
#define PARTY_CEILINGFANOFFCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanOffCommand : public Command{
public:
    CeilingFan *ceilingFan{};
    int prevSpeed{};

    explicit CeilingFanOffCommand(CeilingFan *c);

    void execute() override;

    void undo() override;
};


#endif //PARTY_CEILINGFANOFFCOMMAND_H
