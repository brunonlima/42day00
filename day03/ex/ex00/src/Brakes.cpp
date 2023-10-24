#include "Brakes.hpp"
#include <iostream>


Brakes::Brakes(){}

Brakes::~Brakes(){}

void Brakes::applyForceOnBrakes(int force) {
    std::cout << "Applied " << force << " units of force on the brakes." << std::endl;
}

void Brakes::applyEmergencyBrakes() {
    std::cout << "Emergency brakes applied." << std::endl;
}
