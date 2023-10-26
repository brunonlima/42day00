// Person.hpp
#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Room;

class Person {
private:
    std::string _name;
    Room* _currentRoom;

public:
    Person();
    Person(std::string p_name);
    Room* room() { return _currentRoom; }
    std::string getName() const { return _name; }
    void setName(const std::string& name) { _name = name; }
};

#endif // PERSON_HPP
