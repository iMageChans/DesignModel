//
// Created by Chans on 2020/2/6.
//

#ifndef THREADSAFE_SINGLETON_H
#define THREADSAFE_SINGLETON_H

#include <iostream>
#include <mutex>



class Singleton {
private:
    Singleton()= default;;
    static Singleton *instance;
    static std::mutex m_mutex;
public:
    static Singleton *getInstance();
    void display();
};


#endif //THREADSAFE_SINGLETON_H
