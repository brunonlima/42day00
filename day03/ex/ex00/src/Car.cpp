#include "Car.hpp"
#include <iostream>


Car::Car(Engine* engine, Transmission* transmission, Wheels* wheels, Brakes* brakes)
    : engine(engine), transmission(transmission), wheel(wheels), brakes(brakes) {
}

void Car::start() {
    engine->start();
}

void Car::stop() {
    transmission->reverse();
    brakes->applyForceOnBrakes(50);
    engine->stop();
}

void Car::accelerate(int speed) {
    transmission->shiftGearsUp();
    std::cout << "Speedometer: " << speed << " quilometers per hours." << std::endl;
    
}

void Car::shiftGearsUp() {
    transmission->shiftGearsUp();
}

void Car::shiftGearsDown() {
    transmission->shiftGearsDown();
}

void Car::reverse() {
    transmission->reverse();
}

void Car::turnWheel(int angle) {
    wheel->turnWheel(angle);
}

void Car::straightenWheels() {
    wheel->straightenWheels();
}

void Car::applyForceOnBrakes(int force) {
    brakes->applyForceOnBrakes(force);
}

void Car::applyEmergencyBrakes() {
    brakes->applyEmergencyBrakes();
}
