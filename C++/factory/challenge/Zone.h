//
// Created by Chans on 2020/2/6.
//

#ifndef CHALLENGE_ZONE_H
#define CHALLENGE_ZONE_H

#include <xstring>

using namespace std;

class Zone {
protected:
    string displayName;
    int offset;
public:
    virtual string getDisplayName() {
        return displayName;
    }

    virtual int getOffset(){
        return offset;
    }
};


#endif //CHALLENGE_ZONE_H
