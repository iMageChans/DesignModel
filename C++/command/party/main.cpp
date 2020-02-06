#include <iostream>
#include "RemoteControl.h"
#include "TV.h"
#include "Stereo.h"
#include "Hottub.h"
#include "LightOnCommand.h"
#include "StereoOnCommand.h"
#include "TVOnCommand.h"
#include "HottubOnCommand.h"
#include "LightOffCommand.h"
#include "StereoOffCommand.h"
#include "TVOffCommand.h"
#include "HottubOffCommand.h"
#include "MacroCommand.h"

#include "Command.h"
#include <vector>

using namespace std;

int main() {

    vector<Command *> partyOn;
    vector<Command *> partyOff;

    auto *remoteControl = new RemoteControl();

    auto *light = new Light("Living Room");
    TV *tv = new TV("Living Room");
    auto *stereo = new Stereo("Living Room");
    auto *hottub = new Hottub();

    Command *lightOnCommand = new LightOnCommand(light);
    Command *tvOnCommand = new TVOnCommand(tv);
    Command *stereoOnCommand = new StereoOnCommand(stereo);
    Command *hottubOnCommand = new HottubOnCommand(hottub);

    Command *lightOffCommand = new LightOffCommand(light);
    Command *tvOffCommand = new TVOffCommand(tv);
    Command *stereoOffCommand = new StereoOffCommand(stereo);
    Command *hottubOffCommand = new HottubOffCommand(hottub);

    partyOn.push_back(lightOnCommand);
    partyOn.push_back(tvOnCommand);
    partyOn.push_back(stereoOnCommand);
    partyOn.push_back(hottubOnCommand);

    partyOff.push_back(lightOffCommand);
    partyOff.push_back(tvOffCommand);
    partyOff.push_back(stereoOffCommand);
    partyOff.push_back(hottubOffCommand);

    Command *partyOnMacro = new MacroCommand(partyOn);
    Command *partyOffMacro = new MacroCommand(partyOff);

    remoteControl->setCommand(0, partyOnMacro, partyOffMacro);
    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->toString();

    return 0;
}
