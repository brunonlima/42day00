#include "Shovel.hpp"
#include <string>


Shovel::Shovel() {
    this->setName("Shovel");
    this->setNumberOfUses(0);
}

Shovel::~Shovel() {
}
void Shovel::use() {
    ++this->numberOfUses;
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

void Shovel::setWorker(Worker* worker){
    this->worker = worker;
}

Worker* Shovel::getWorker() {
    return this->worker;
}

void Shovel::setName(std::string name){
    this->name = name;
}

std::string Shovel::getName() const {
    return this->name;
}
