//
// Created by Chans on 2020/2/13.
//

#include "DinerMenuIterator.h"

#include <utility>

DinerMenuIterator::DinerMenuIterator(vector<string> i) {
    items = std::move(i);
}

bool DinerMenuIterator::hasNext() {
    return !(position >= items.max_size() || items[position].empty());
}

string DinerMenuIterator::next() {
    string menuItem = items[position];
    position += 1;
    return menuItem;
}
