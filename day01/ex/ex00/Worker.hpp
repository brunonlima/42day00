#ifndef WORKER_HPP
#define WORKER_HPP
#include "Tool.hpp"
#include <vector>
#include "Workshop.hpp"

class Tool;
class Workshop;

class Worker {
public:
    // Constructor
    Worker(int x, int y, int z, int level, int exp);

    // Destructor
    ~Worker();

    void assignTool(Tool* tool);
    void retrieveTool( Tool* tool );
    void useTools();
    void work();
    void registerToWorkshop(Workshop* workshop);
    void leaveWorkshop(Workshop* workshop);

    // Getters
    int getX() const;
    int getY() const;
    int getZ() const;
    int getLevel() const;
    int getExp() const;
    const std::vector<Tool*>& getTools() const;

    // Setters
    void setPosition(int x, int y, int z);
    void setStatistic(int level, int exp);

    // Method to display information
    void displayInfo();

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

    std::vector<Tool*> tools;
};

#endif
