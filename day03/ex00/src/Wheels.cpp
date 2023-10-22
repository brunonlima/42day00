#include "Wheels.hpp"
#include <iostream>

void Wheels::turnWheel(int angle) {
    std::cout << "Wheels turned by " << angle << " degrees." << std::endl;
}

void Wheels::straightenWheels() {
    std::cout << "Wheels straightened." << std::endl;
}
