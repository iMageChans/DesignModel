//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_LIGHTOFFCOMMAND_H
#define PARTY_LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command{
public:
    Light *light;

    explicit LightOffCommand(Light *l);

    void execute() override;

    void undo() override;
};


#endif //PARTY_LIGHTOFFCOMMAND_H
