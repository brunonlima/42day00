#include "Transmission.hpp"
#include <iostream>

void Transmission::shiftGearsUp() {
    std::cout << "Shifted up to the next gear." << std::endl;
}

void Transmission::shiftGearsDown() {
    std::cout << "Shifted down to the previous gear." << std::endl;
}

void Transmission::reverse() {
    std::cout << "Transmission in reverse gear." << std::endl;
}
