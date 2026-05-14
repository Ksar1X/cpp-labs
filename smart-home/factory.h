#ifndef FACTORY_H
#define FACTORY_H

#include "Devices.h"
#include <memory>

class DeviceFactory {
public:
    virtual std::unique_ptr<Sensor> createSensor() = 0;
    virtual std::unique_ptr<Light> createLight() = 0;
    virtual ~DeviceFactory() = default;
};

class ZigbeeFactory : public DeviceFactory {
public:
    std::unique_ptr<Sensor> createSensor() override {
        return std::make_unique<ZigbeeSensor>();
    }

    std::unique_ptr<Light> createLight() override {
        return std::make_unique<ZigbeeLight>();
    }
};

#endif