#include "Workshop.hpp"
#include  <iostream>

Workshop::Workshop() {
}

Workshop::~Workshop(){

}

void Workshop::registerWorker(Worker* worker) {
    workers.push_back(worker);
}

void Workshop::releaseWorker(Worker* worker) {
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        if (*it == worker) {
            workers.erase(it);
            return;
        }
    }
}

void Workshop::executeWorkDay() {
    std::cout << "Workshop - "<< &(*this) << std::endl;;
    for (std::vector<Worker*>::iterator it = workers.begin(); it != workers.end(); ++it) {
        (*it)->work();
    }
}
