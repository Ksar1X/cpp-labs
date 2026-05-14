#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>
#include <vector>

class Observer {
    public:
    virtual void update(const std::string& message) = 0;
    virtual ~Observer() = default;
};

class Subject {
private:
    std::vector<Observer*> observers;
public:
    void addObserver(Observer* obs);
    void notify(const std::string& msg);
    virtual ~Subject() = default;
};

#endif