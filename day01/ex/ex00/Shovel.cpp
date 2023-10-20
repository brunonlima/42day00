#include "Shovel.hpp"
#include <string>


Shovel::Shovel() {
    this->setName("Shovel");
}

Shovel::~Shovel() {
}
void Shovel::use() {
    if (numberOfUses > 0) {
        numberOfUses--;
    }
}

void Shovel::setNumberOfUses(int uses){
    this->numberOfUses = uses;
}

int Shovel::getNumberOfUses() const {
    return numberOfUses;
}

bool Shovel::isBusy()
{
    return busy;
}

void Shovel::setBusy(bool shovel_busy){
    busy = shovel_busy;
}

void Shovel::setName(std::string name){
    this->name = name;
}

std::string Shovel::getName() const {
    return this->name;
}
