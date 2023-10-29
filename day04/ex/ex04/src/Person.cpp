// Person.cpp
#include "Person.hpp"
#include <iostream>
#include <RecreationList.hpp>
#include "Event.hpp"
#include "Room.hpp"

Person::Person() : _name(""), _currentRoom(NULL) {}

Person::Person(std::string p_name) : _name(p_name), _currentRoom(NULL) {}


bool Person::Person::inRecreation(){
    return this->_recreation;
}

void Person::Person::setRecreation(bool recreation){
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

        if (event == Event::PAUSE_START) {
            std::cout << _name << ": I heard the bell ring! - I Have free time now." << std::endl;
            this->_previousRoom = _currentRoom;
            this->_currentRoom->exit(this);
        } else if (event == Event::PAUSE_END) {
            std::cout << _name << ": I heard bell ring! - My free time is over. Time to return to class." << std::endl;
            this->_currentRoom = _previousRoom; 
            this->_currentRoom->enter(this);
        }
}






