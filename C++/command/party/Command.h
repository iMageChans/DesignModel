//
// Created by Chans on 2020/2/6.
//

#ifndef PARTY_COMMAND_H
#define PARTY_COMMAND_H

class Command {
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};


#endif //PARTY_COMMAND_H
