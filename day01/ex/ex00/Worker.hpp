#ifndef WORKER_HPP
#define WORKER_HPP
#include "Tool.hpp"

class Shovel; 

class Worker {
public:
    // Constructor
    Worker(int x, int y, int z, int level, int exp);

    // Destructor
    ~Worker();

    void assignTool(Tool* tool);
    void retrieveTool();

    // Getters
    int getX() const;
    int getY() const;
    int getZ() const;
    int getLevel() const;
    int getExp() const;
    Tool* getTool() const;

    // Setters
    void setPosition(int x, int y, int z);
    void setStatistic(int level, int exp);

    // Method to display information
    void displayInfo() const;

private:
    struct Position {
        int x;
        int y;
        int z;
    } coordonnee;

    struct Statistic {
        int level;
        int exp;
    } stat;

    Tool* tool;
};

#endif
