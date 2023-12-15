#include "dieselcar.h"

DieselCar::DieselCar() {

}

void DieselCar:: accelerate(const float seconds) {
    const auto pos = getPosition();
    const float boost = 0.5 * (mAcceleration * seconds * seconds)/(3600 * 3600); 
    setPosition(pos + boost);
    setSpeed(getSpeed() + mAcceleration*(seconds/3600));
}