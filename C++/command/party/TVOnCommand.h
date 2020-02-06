//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_TVONCOMMAND_H
#define PARTY_TVONCOMMAND_H
#include "Command.h"
#include "TV.h"

class TVOnCommand : public Command{
public:
    TV *tv;
    explicit TVOnCommand(TV *t);
    void execute() override;
    void undo() override;
};


#endif //PARTY_TVONCOMMAND_H
