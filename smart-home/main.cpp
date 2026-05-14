#include "Factory.h"
#include <iostream>
#include <thread>
#include <chrono>

class ControlPanel : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "---[Contral Panel] A notification has been received: " << message << std::endl;
    }
};

int main() {
    std::unique_ptr<DeviceFactory> factory = std::make_unique<ZigbeeFactory>();

    auto motionSensor = factory->createSensor();
    auto hallLight = factory->createLight();

    ControlPanel centralHub;
    motionSensor->addObserver(&centralHub);

    std::cout << "System is active....\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    motionSensor->detect();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    hallLight->turnOn();

    return 0;
}