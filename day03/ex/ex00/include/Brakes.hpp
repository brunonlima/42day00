#ifndef BRAKES_HPP
#define BRAKES_HPP

class Brakes {
public:
    Brakes();
    ~Brakes();
    void applyForceOnBrakes(int force);
    void applyEmergencyBrakes();
};

#endif // BRAKES_HPP
