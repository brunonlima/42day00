#include "Engine.hpp"
#include <iostream>

Engine::Engine() {}

Engine::~Engine(){}

void Engine::start() {
    std::cout << "Engine started." << std::endl;
}

void Engine::stop() {
    std::cout << "Engine stopped." << std::endl;
}
