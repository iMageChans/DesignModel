//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_LIGHTONCOMMAND_H
#define PARTY_LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command{
public:
    Light *light{};

    explicit LightOnCommand(Light *l);

    void execute() override;

    void undo() override;
};


#endif //PARTY_LIGHTONCOMMAND_H
