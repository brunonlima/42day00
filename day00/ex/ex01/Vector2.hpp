// Vector2.hpp
#ifndef VECTOR2_HPP
#define VECTOR2_HPP

class Vector2 {
private:
    float x;
    float y;

public:
    Vector2(float _x, float _y);

    float getX() const;
    void setX(float _x);
    float getY() const;
    void setY(float _y);
};

#endif // VECTOR2_HPP
