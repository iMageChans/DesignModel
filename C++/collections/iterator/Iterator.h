//
// Created by Chans on 2020/2/13.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H

using namespace std;

#include <string>

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual string next() = 0;
};


#endif //ITERATOR_ITERATOR_H
