//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_TVOFFCOMMAND_H
#define PARTY_TVOFFCOMMAND_H
#include "Command.h"
#include "TV.h"

class TVOffCommand : public Command{
public:
    TV *tv;
    explicit TVOffCommand(TV *t);
    void execute() override;
    void undo() override;
};


#endif //PARTY_TVOFFCOMMAND_H
