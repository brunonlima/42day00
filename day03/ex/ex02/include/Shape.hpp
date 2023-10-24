#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual double area()  = 0;
    virtual double perimeter()  = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_HPP
