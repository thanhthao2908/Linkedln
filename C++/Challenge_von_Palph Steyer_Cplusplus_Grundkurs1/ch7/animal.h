#ifndef ANIMAL_H
#define ANIMAL_H

#include "memory"
#include "zookeeper.h"

class Animal {
public: 
    Animal();

    virtual void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) = 0;

    std::unique_ptr<Zookeeper> &&releaseZooKeeper();

protected:
    std::unique_ptr<Zookeeper> mCurZookeeper;
};

class Elefant : public Animal {
public: 
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};

class Giraffe : public Animal {
public: 
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};

class Lion : public Animal {
public:
    void catchFoodFrom(std::unique_ptr<Zookeeper> &&zk) override;
};

#endif