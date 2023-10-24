#include "Wheels.hpp"
#include <iostream>

Wheels::Wheels(){}

Wheels::~Wheels(){}

void Wheels::turnWheel(int angle) {
    std::cout << "Wheels turned by " << angle << " degrees." << std::endl;
}

void Wheels::straightenWheels() {
    std::cout << "Wheels straightened." << std::endl;
}
