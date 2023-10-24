#include "Circle.hpp"
#include <iostream>

Circle::Circle(double r) : radius(r) {}

double Circle::area() {
     std::cout << "Circle" << std::endl;
    return 3.141592653589793238 * radius * radius; // Valor de PI aproximado
}

double Circle::perimeter() {
     std::cout << "Circle" << std::endl;
    return 2 * 3.141592653589793238 * radius; // Valor de PI aproximado
}
