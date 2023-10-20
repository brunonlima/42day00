#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector> 
#include "Worker.hpp" 

class Workshop {
public:
    Workshop(); // Construtor

    void registerWorker(Worker* worker);
    void releaseWorker(Worker* worker);
    void executeWorkDay();

private:
    std::vector<Worker*> workers; // Declare o vector aqui
};

#endif
