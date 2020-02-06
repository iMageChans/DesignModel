//
// Created by Chans on 2020/2/6.
//

#include "MacroCommand.h"

#include <utility>

void MacroCommand::execute() {
    for(int i = 0; i < commands.max_size(); i++){
        if (i >= commands.size() || i < 0) break;
        commands[i]->execute();
    }
}

void MacroCommand::undo() {
    for(int i = commands.max_size() - 1; i >= 0; i--){
        if (i >= commands.size() || i < 0) break;
        commands[i]->undo();
    }
}

MacroCommand::MacroCommand(vector<Command *> obj) {
   commands = std::move(obj);
}
