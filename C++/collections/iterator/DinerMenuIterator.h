//
// Created by Chans on 2020/2/13.
//

#ifndef ITERATOR_DINERMENUITERATOR_H
#define ITERATOR_DINERMENUITERATOR_H
using namespace std;

#include <vector>
#include <string>
#include "Iterator.h"

class DinerMenuIterator : public Iterator{
public:
    vector<string> items;
    int position = 0;

    explicit DinerMenuIterator(vector<string> i);
    bool hasNext() override;
    string next() override;
};


#endif //ITERATOR_DINERMENUITERATOR_H
