#ifndef DEVICES_H
#define DEVICES_H

#include "Observer.h"
#include <iostream>

class Sensor : public Subject {
public:
    virtual void detect() = 0;
};

class Light {
public:
    virtual void turnOn() = 0;
    virtual ~Light() = default;
};

class ZigbeeSensor : public Sensor {
public: 
    void detect() override;
};

class ZigbeeLight : public Light {
public:
    void turnOn() override;
};

#endif