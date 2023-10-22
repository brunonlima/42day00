#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include "Worker.hpp" 
#include <vector> 

class Worker;

class Workshop {
public:
    Workshop(); 
    ~Workshop();

    void registerWorker(Worker* worker);
    void releaseWorker(Worker* worker);
    void executeWorkDay();

private:
    std::vector<Worker*> workers; 
};

#endif
