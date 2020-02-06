//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_LIVINGROOMLIGHTOFFCOMMAND_H
#define PARTY_LIVINGROOMLIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

class LivingroomLightOffCommand : public Command{
public:
    Light *light;

    explicit LivingroomLightOffCommand(Light *l);

    void execute() override;

    void undo() override;
};


#endif //PARTY_LIVINGROOMLIGHTOFFCOMMAND_H
