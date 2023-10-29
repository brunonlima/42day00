
#ifndef BELL_HPP
#define BELL_HPP
#include "Student.hpp"
#include "Professor.hpp"
#include "Event.hpp"
#include "Headmaster.hpp"
#include <iostream>

class Headmaster;

class Bell {
private:
    std::vector<Person*> observers;

public:
    void addObserver(Person* observer) {
        observers.push_back(observer);
    }
    
    void ringBellStopPause() {
        std::cout << "Bell rings!. Pause will stop" << std::endl;
        for (size_t i = 0; i < observers.size(); ++i) {
            observers[i]->notify(Event::PAUSE_END);
        }
    }

    void ringBellStartPause() {
        std::cout << "Bell rings!. Pause will start" << std::endl;
        for (size_t i = 0; i < observers.size(); ++i) {
            observers[i]->notify(Event::PAUSE_START);
        }
    }
friend Headmaster;
};
#endif