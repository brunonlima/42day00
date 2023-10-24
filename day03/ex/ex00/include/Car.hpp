#ifndef CAR_HPP
#define CAR_HPP
#include "Engine.hpp"
#include "Transmission.hpp"
#include "Wheels.hpp"
#include "Brakes.hpp"

class Car {

private:
    Engine* engine;
    Transmission* transmission;
    Wheels* wheel;
    Brakes* brakes;

public:
   Car(Engine* engine, Transmission* transmission, Wheels* wheel, Brakes* brakes);
    void start();
    void stop();
    void accelerate(int speed);
    void shiftGearsUp();
    void shiftGearsDown();
    void reverse();
    void turnWheel(int angle);
    void straightenWheels();
    void applyForceOnBrakes(int force);
    void applyEmergencyBrakes();
};

#endif // CAR_HPP
