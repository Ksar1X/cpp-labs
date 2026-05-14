#include "Devices.h"

void ZigbeeSensor::detect() {
    std::cout << "---[Zigbee Sensor] Motion detected!" << std::endl;
    notify("Motion in the living room (via Zigbee)");
}

void ZigbeeLight::turnOn() {
    std::cout << "---[Zigbee Light] The light is on!" << std::endl;
}