//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_STEREOONWITHCDCOMMAND_H
#define PARTY_STEREOONWITHCDCOMMAND_H
#include "Command.h"
#include "Stereo.h"

class StereoOnWithCDCommand : public Command{
public:
    Stereo *stereo;
    explicit StereoOnWithCDCommand(Stereo *s);
    void execute() override;
    void undo() override;
};


#endif //PARTY_STEREOONWITHCDCOMMAND_H
