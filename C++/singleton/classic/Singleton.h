//
// Created by Chans on 2020/2/6.
//

#ifndef CLASSIC_SINGLETON_H
#define CLASSIC_SINGLETON_H


class Singleton {
private:
    Singleton();

public:
    static Singleton *instance;
    static Singleton *getInstance();
};


#endif //CLASSIC_SINGLETON_H
