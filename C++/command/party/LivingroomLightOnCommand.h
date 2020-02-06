//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_LIVINGROOMLIGHTONCOMMAND_H
#define PARTY_LIVINGROOMLIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

class LivingroomLightOnCommand : public Command{
public:
    Light *light{};

    explicit LivingroomLightOnCommand(Light *l);

    void execute() override;

    void undo() override;
};


#endif //PARTY_LIVINGROOMLIGHTONCOMMAND_H
