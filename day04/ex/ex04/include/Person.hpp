// Person.hpp
#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include "Event.hpp"

class Room;
class Bell;

class Person {
private:
    std::string _name;
    Room* _currentRoom;
    Room* _previousRoom;

public:
    Person();
    Person(std::string p_name);
    Room* room() { return _currentRoom; }
    std::string getName() const { return _name; }
    void setName(const std::string& name) { _name = name; }
    void moveTo(Room* room);
    void notify(Event event);
};

#endif // PERSON_HPP
