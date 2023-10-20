#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include "Worker.hpp" 
#include <vector> 
class Worker;


class Workshop {
public:
    Workshop(); // Construtor
    ~Workshop();

    void registerWorker(Worker* worker);
    void releaseWorker(Worker* worker);
    void executeWorkDay();

private:
    std::vector<Worker*> workers; // Declare o vector aqui
};

#endif
