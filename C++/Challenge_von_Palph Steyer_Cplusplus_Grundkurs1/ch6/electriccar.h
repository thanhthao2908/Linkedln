#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "pkw.h"

class ElectricCar : public PKW {
public:

    void accelerate(const float seconds);

    ElectricCar();

private:

    const float mAcceleration = 20000.0f;
};

#endif