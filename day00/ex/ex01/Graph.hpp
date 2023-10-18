#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vector2.hpp"
#include <vector>

class Graph {
private:
    Vector2 size;
    std::vector<Vector2> points;

public:
    Graph(const Vector2& size);

    void addPoint(const Vector2& point);
    void display() const;
};

#endif // GRAPH_HPP
