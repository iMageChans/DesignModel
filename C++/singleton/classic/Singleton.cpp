//
// Created by Chans on 2020/2/6.
//

#include "Singleton.h"

Singleton::Singleton() {

}

Singleton *Singleton::getInstance() {
    if (instance == nullptr){
        instance = new Singleton();
    }
    return instance;
}
