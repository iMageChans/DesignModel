//
// Created by Chans on 2020/2/7.
//

#ifndef PARTY_STEREOONCOMMAND_H
#define PARTY_STEREOONCOMMAND_H
#include "Command.h"
#include "Stereo.h"

class StereoOnCommand : public Command{
public:
    Stereo *stereo;
    explicit StereoOnCommand(Stereo *s);
    void execute() override;
    void undo() override;
};


#endif //PARTY_STEREOONCOMMAND_H
