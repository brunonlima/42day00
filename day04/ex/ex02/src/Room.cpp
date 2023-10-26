// Room.cpp
#include "Room.hpp"
#include "Person.hpp"
#include <iostream>

Room::Room() : ID(0) {
    // Inicialize outros membros, se necessário.
}

bool Room::canEnter(Person* person) {
    if (person){
        return true;
    } else {
        return false;
    }
}

void Room::enter(Person* person) {
    if (canEnter(person)) {
        _occupants.push_back(person);
    } else {
        // Trate a situação em que a pessoa não pode entrar na sala.
    }
}

void Room::exit(Person* person) {
    for (std::vector<Person*>::iterator it = _occupants.begin(); it != _occupants.end(); ++it) {
        if (*it == person) {
            _occupants.erase(it);
            return; // Saia do loop assim que o elemento for encontrado e removido.
        }
    }
    // Trate a situação em que a pessoa não está na sala.
}

void Room::printOccupant() {
    std::cout << "Occupants of the room (ID: " << ID << "):" << std::endl;
    for (size_t i = 0; i < _occupants.size(); ++i) {
        std::cout << "Person: " << _occupants[i]->getName() << std::endl;
    }
}
