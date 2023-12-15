#ifndef DIESELCAR_H
#define DIESELCAR_H

#include "pkw.h"

class DieselCar : public PKW {
public:

    void accelerate(const float seconds);

    DieselCar();

private:

    const float mAcceleration = 10000.0f;
};

#endif