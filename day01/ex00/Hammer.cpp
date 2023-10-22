#include "Hammer.hpp"
#include "Tool.hpp"
#include <string>

Hammer::Hammer() : Tool::Tool(){
  this->setName("Hammer");
  this->setNumberOfUses(0);
}

Hammer::~Hammer() {}

void Hammer::use() {
    ++this->numberOfUses;

}

void Hammer::setNumberOfUses(int uses){
    this->numberOfUses = uses;
}

int Hammer::getNumberOfUses() const {
    return numberOfUses;
}

bool Hammer::isBusy(){
    return busy;
}

void Hammer::setBusy(bool Hammer_busy){
    busy = Hammer_busy;
}

void Hammer::setWorker(Worker* worker){
    this->worker = worker;
}

Worker* Hammer::getWorker() {
    return this->worker;
}

void Hammer::setName(std::string name){
    this->name = name;
}

std::string Hammer::getName() const {
    return this->name;
}