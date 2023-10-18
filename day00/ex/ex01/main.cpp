#include "Graph.hpp"
#include <iostream>

int main() {
    Graph graph(Vector2(0, 0));
    int exit = 42;
    
    do {
        if (exit != 42)
            break;

        int x, y;
        std::cout << "Enter the X coordinate: ";
        std::cin >> x;

        std::cout << "Enter the Y coordinate : ";
        std::cin >> y;

        graph.addPoint(Vector2(x, y));
        graph.display();

        std::cout << "Enter 42 for continue  OR any number to exit program: ";
        std::cin >> exit;

    } while (true);

    return 0;
}