#include "Worker.hpp"
#include "Shovel.hpp"
#include "Tool.hpp"
#include <iostream>

Worker::Worker(int x, int y, int z, int level, int exp) {
        this->coordonnee.x = x;
        this->coordonnee.y = y;
        this->coordonnee.z = z;
        this->stat.level = level;
        this->stat.exp = exp;

}

Worker::~Worker() {
    // Delete the shovel object if it's not assigned to another worker
    
    
}

void Worker::assignTool(Tool* tool) {
    
    this->tool = tool;
    this->tool->setBusy(true);
    
}

void Worker::retrieveTool() {
    
    this->tool->setBusy(false);
    this->tool = NULL; // Remove the shovel from the worker

}

// Getters
int Worker::getX() const {
    return this->coordonnee.x;
}

int Worker::getY() const {
    return this->coordonnee.y;
}

int Worker::getZ() const {
    return this->coordonnee.z;
}

int Worker::getLevel() const {
    return this->stat.level;
}

int Worker::getExp() const {
    return this->stat.exp;
}

Tool *Worker::getTool() const
{
    return this->tool;
}

// Setters
void Worker::setPosition(int x, int y, int z) {
    this->coordonnee.x = x;
    this->coordonnee.y = y;
    this->coordonnee.z = z;
}

void Worker::setStatistic(int level, int exp) {
    this->stat.level = level;
    this->stat.exp = exp;
}

// Method to display information
void Worker::displayInfo() const {
    std::cout << "Position: x = " << this->coordonnee.x << ", y = " << this->coordonnee.y << ", z = " << this->coordonnee.z << std::endl;
    std::cout << "Statistic: level = " << this->stat.level << ", exp = " << this->stat.exp << std::endl;
}
