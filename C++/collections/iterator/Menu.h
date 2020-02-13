//
// Created by Chans on 2020/2/13.
//

#ifndef ITERATOR_MENU_H
#define ITERATOR_MENU_H

#include "Iterator.h"

class Menu {
public:
    virtual Iterator* createIterator() = 0;
};


#endif //ITERATOR_MENU_H
