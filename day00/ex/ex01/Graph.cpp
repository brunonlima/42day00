#include "Graph.hpp"
#include <iostream>

Graph::Graph(const Vector2& size) : size(size) {}

void Graph::addPoint(const Vector2& point) {
    points.push_back(point);
}

void Graph::display() const {
    int maxX = 0, maxY = 0;
    for (std::vector<Vector2>::const_iterator it = points.begin(); it != points.end(); ++it) {
        maxX = std::max(maxX, static_cast<int>(it->getX()));
        maxY = std::max(maxY, static_cast<int>(it->getY()));
    }

    // Criar um grid para representar o gráfico
    std::vector<std::vector<char> > grid(maxY + 1, std::vector<char>(maxX + 1, '.'));

    // Marcar os pontos no grid
    for (std::vector<Vector2>::const_iterator it = points.begin(); it != points.end(); ++it) {
        int x = static_cast<int>(it->getX());
        int y = static_cast<int>(it->getY());
        grid[y][x] = 'X';  // Ajuste aqui para colocar 'X' na posição correta
    }

    // Exibir o gráfico
    std::cout << ">& Y" << std::endl;
    for (int i = maxY; i >= 0; --i) {
        std::cout << i << "| ";  // Adiciona coordenada Y

        for (int j = 0; j <= maxX; ++j)
            std::cout << grid[i][j] << ' ';
        
        std::cout << std::endl;
    }

    // Adicionar a linha de coordenadas X na parte inferior
    std::cout << "  +-";
    for (int i = 0; i <= maxX; ++i)
        std::cout << '-';
    std::cout << "> X" << std::endl;
    std::cout << "   ";
    for (int i = 0; i <= maxX; ++i)
        std::cout << i << ' ';
    std::cout << std::endl;
}
