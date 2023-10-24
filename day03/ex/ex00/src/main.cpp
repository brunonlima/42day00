
#include "Car.hpp"
#include <iostream>

int main() {
    Engine* carEngine = new Engine();
    Transmission* carTransmission = new Transmission();
    Wheels* carWheels = new Wheels();
    Brakes *carBrakes = new Brakes();

    Car*  myCar = new Car(carEngine, carTransmission, carWheels, carBrakes);

    myCar->start();
    myCar->accelerate(40);
    myCar->shiftGearsUp();
    myCar->turnWheel(30);
    myCar->accelerate(60);
    myCar->straightenWheels();
    myCar->applyForceOnBrakes(30);
    myCar->stop();
    myCar->applyEmergencyBrakes();

    return 0;
}
