#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() {
    std::cout << "Rectangle" << std::endl;
    return width * height;
}

double Rectangle::perimeter() {
    std::cout << "Rectangle" << std::endl;
    return 2 * (width + height);
}
