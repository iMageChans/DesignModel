//
// Created by Chans on 2020/2/6.
//

#ifndef STARBUZZ_BEVERAGE_H
#define STARBUZZ_BEVERAGE_H

#include <string>

class Beverage {
protected:
    std::string description;
public:
    virtual std::string getDescription(){
        return description;
    }

    virtual double cost(){
        return 0;
    }
};


#endif //STARBUZZ_BEVERAGE_H
