//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_CEILINGFANHIGHCOMMAND_H
#define PARTY_CEILINGFANHIGHCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanHighCommand : public Command{
public:
    CeilingFan *ceilingFan;
    int prevSpeed{};

    explicit CeilingFanHighCommand(CeilingFan *c);

    void execute() override;

    void undo() override;
};


#endif //PARTY_CEILINGFANHIGHCOMMAND_H
