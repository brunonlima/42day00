#include <iostream>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"


void getShape(Shape* shape) {
     std::cout << "Shape  - Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << std::endl;
}

int main() {
    Shape* rectangle = new Rectangle(4.0, 5.0);
    Shape* triangle = new Triangle(3.0, 4.0, 5.0);
    Shape* circle = new Circle(2.0);

    getShape(triangle);
    getShape(circle);
    getShape(rectangle);

    return 0;
}



