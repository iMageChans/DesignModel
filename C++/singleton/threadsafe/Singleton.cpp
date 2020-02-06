//
// Created by Chans on 2020/2/6.
//

#include "Singleton.h"

Singleton *Singleton::instance = nullptr;
std::mutex Singleton::m_mutex;

void Singleton::display() {
    std::cout << "Hello World" << std::endl;
}

Singleton *Singleton::getInstance() {
    if (instance == nullptr) {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (instance == nullptr){
            instance = new Singleton();
        }
    }
    return instance;
}
