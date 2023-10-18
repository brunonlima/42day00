// Vector2.cpp
#include "Vector2.hpp"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

float Vector2::getX() const {
    return x;
}

void Vector2::setX(float _x) {
    x = _x;
}

float Vector2::getY() const {
    return y;
}

void Vector2::setY(float _y) {
    y = _y;
}
