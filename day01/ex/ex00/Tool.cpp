#include "Tool.hpp"
#include <string>


Tool::Tool() {
    
}

Tool::~Tool() {
  
}

void Tool::use() {
    
}

int Tool::getNumberOfUses() const {
    return numberOfUses;
}

void Tool::setNumberOfUses(int uses) {
    numberOfUses = uses;
}

bool Tool::isBusy() {
    return busy;
}

void Tool::setBusy(bool busy) {
    this->busy = busy;
}

void Tool::setName(std::string name) {
    this->name = name;
}

std::string Tool::getName() const {
    return name;
}
