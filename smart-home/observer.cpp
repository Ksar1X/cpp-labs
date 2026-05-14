#include "Observer.h"

void Subject::addObserver(Observer* obs) {
     if (obs) observers.push_back(obs); 
}

void Subject::notify(const std::string& msg) {
    for(auto* obs : observers) {
        obs->update(msg);
    }
}