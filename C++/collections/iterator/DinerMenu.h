//
// Created by Chans on 2020/2/13.
//

#ifndef ITERATOR_DINERMENU_H
#define ITERATOR_DINERMENU_H

using namespace std;

#include <vector>
#include <string>
#include <iostream>
#include "Menu.h"

class DinerMenu : public Menu{
public:
    const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    vector<string> menuItems;

    DinerMenu();
    void addItem(string name);
    vector<string> getMenuItems();
    Iterator* createIterator() override;
    virtual string toString() final {
        return "Diner Menu";
    };
};


#endif //ITERATOR_DINERMENU_H
