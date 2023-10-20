#include "Hammer.hpp"
#include "Tool.hpp"
#include <string>

Hammer::Hammer() : Tool::Tool(){
  this->setName("Hammer");
}

Hammer::~Hammer() {}

void Hammer::use() {
    if (numberOfUses > 0) {
        numberOfUses--;
    }
}

void Hammer::setNumberOfUses(int uses){
    this->numberOfUses = uses;
}

int Hammer::getNumberOfUses() const {
    return numberOfUses;
}

bool Hammer::isBusy()
{
    return busy;
}

void Hammer::setBusy(bool Hammer_busy){
    busy = Hammer_busy;
}

void Hammer::setName(std::string name){
    this->name = name;
}

std::string Hammer::getName() const {
    return this->name;
}