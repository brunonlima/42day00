#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double area();
    double perimeter();
};

#endif // CIRCLE_HPP
