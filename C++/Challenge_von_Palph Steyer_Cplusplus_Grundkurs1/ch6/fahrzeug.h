#ifndef FAHRZEUG_H
#define FAHRZEUG_H

class Fahrzeug {
public:
    Fahrzeug();

    virtual void showValues() const;

    float getSpeed() const;

    void setSpeed(float newSpeed);

private:
    float mSpeed = 0.0f;
};

#endif