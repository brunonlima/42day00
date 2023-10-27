// Person.cpp
#include "Person.hpp"
#include <iostream>
#include <Recreation.hpp>

Person::Person() : _name(""), _currentRoom(NULL) {}

Person::Person(std::string p_name) : _name(p_name), _currentRoom(NULL) {}

Person::Person(const std::string& p_name, Bell* bell)
        : _name(p_name), _currentRoom(NULL), _bell(bell) {}


bool Person::Person::inRecreation(){
    return this->_recreation;
}

void Person::Person::setRecration(bool recreation){
    this->_recreation = recreation;
}


void Person::Person::moveTo(Room* room) {
        if (_currentRoom != room) {
            if (_currentRoom != 0) {
                this->_currentRoom->exit(this);
            }
            _currentRoom = room;
            room->enter(this);
        }
}

void Person::Person::notify(Event event) {
        if (event == Event::RingBell) {
            std::cout << _name << ": I heard the bell ring." << std::endl;
             
             if (this->inRecreation()) {
                
             }
        
        }
};




