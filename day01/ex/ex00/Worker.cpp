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

    
}

void Worker::assignTool(Tool* tool) {
    this->tools.push_back(tool);
    
    
}

void Worker::retrieveTool(Worker* nextWorker, Tool* tool) {
    
    for (std::vector<Tool*>::iterator it = this->tools.begin(); it != this->tools.end(); ++it) {
        if ((*it) == tool) {
            // Tool encontrada, remova-a da lista
            this->tools.erase(it);
            //Atribuir ao Worker
            nextWorker->assignTool((*it));           
            return ;
        } 
    }
    

    std::cout << "Tool NOT FOUND." << std::endl;

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

const std::vector<Tool*>& Worker::getTools() const{
    return this->tools;

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

void Worker::displayInfo() {
    std::cout << "Position: x = " << this->coordonnee.x << ", y = " << this->coordonnee.y << ", z = " << this->coordonnee.z << std::endl;
    std::cout << "Statistic: level = " << this->stat.level << ", exp = " << this->stat.exp << std::endl;
   
    if (!this->tools.empty()) {
        
        for (std::vector<Tool*>::iterator it = this->tools.begin(); it != this->tools.end(); ++it) {
            
            if ((*it) != NULL) {
                std::cout << "Used Tool: " << (*it)->getName()<<" -  "<< &(*it) << std::endl;
                std::cout << "Tool was used: " << (*it)->getNumberOfUses() << std::endl;
            } 
        }

    } else {
            std::cout << "I dont have tools!! " << std::endl;;
    }
}


void Worker::useTools() {
    if (!this->tools.empty()) {
        for (std::vector<Tool*>::iterator it = this->tools.begin(); it != this->tools.end(); ++it) {
            
            if ((*it) != NULL) { 
                //usar ferramentas
                (*it)->use();
            }
        }
    } else {
            std::cout << "I dont have tools " << std::endl;;
    }
}

void Worker::work(){
   std::cout <<" Worker At" << "Position: x = " << this->coordonnee.x << ", y = " << this->coordonnee.y << ", z = " << this->coordonnee.z <<" is working" << std::endl;
}

void Worker::registerToWorkshop(Workshop* workshop) {
        workshop->registerWorker(this);
}

void Worker::leaveWorkshop(Workshop* workshop) {
        workshop->releaseWorker(this);
}