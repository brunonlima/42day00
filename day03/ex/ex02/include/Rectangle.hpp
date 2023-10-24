#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double area();
    double perimeter();
};

#endif // RECTANGLE_HPP
