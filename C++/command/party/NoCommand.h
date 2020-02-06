//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_NOCOMMAND_H
#define PARTY_NOCOMMAND_H

#include "Command.h"

class NoCommand : public Command{
public:
    void execute() override;
    void undo() override;
};


#endif //PARTY_NOCOMMAND_H
