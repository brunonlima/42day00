#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
    double manual_sqrt(double x);
    double manual_abs(double x);

public:
    Triangle(double s1, double s2, double s3);
    double area();
    double perimeter();
};

#endif // TRIANGLE_HPP
