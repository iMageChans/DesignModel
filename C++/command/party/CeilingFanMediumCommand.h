//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_CEILINGFANMEDIUMCOMMAND_H
#define PARTY_CEILINGFANMEDIUMCOMMAND_H

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanMediumCommand : public Command{
public:
    CeilingFan *ceilingFan;
    int prevSpeed{};

    explicit CeilingFanMediumCommand(CeilingFan *c);

    void execute() override;

    void undo() override;
};


#endif //PARTY_CEILINGFANMEDIUMCOMMAND_H
