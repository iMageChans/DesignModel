//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_STEREOOFFCOMMAND_H
#define PARTY_STEREOOFFCOMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand : public Command{
public:
    Stereo *stereo;
    explicit StereoOffCommand(Stereo *s);
    void execute() override;
    void undo() override;
};


#endif //PARTY_STEREOOFFCOMMAND_H
