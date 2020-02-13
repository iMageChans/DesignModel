//
// Created by Chans on 2020/2/13.
//

#include "DinerMenu.h"

#include <utility>
#include "DinerMenuIterator.h"

DinerMenu::DinerMenu() {
    addItem("Vegetarian BLT");
    addItem("BLT");
    addItem("Soup of the day");
    addItem("Hotdog");
    addItem("Steamed Veggies and Brown Rice");
    addItem("Pasta");
}

void DinerMenu::addItem(string name) {
    if (numberOfItems >= MAX_ITEMS) {
        cout << "Sorry, menu is full!  Can't add item to menu" << endl;
    } else {
        menuItems[numberOfItems] = std::move(name);
        numberOfItems = numberOfItems + 1;
    }
}

vector<string> DinerMenu::getMenuItems() {
    return menuItems;
}

Iterator *DinerMenu::createIterator() {
    return new DinerMenuIterator(menuItems);
}
