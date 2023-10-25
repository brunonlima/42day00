#include "Apprentice.hpp"

Apprentice::Apprentice(int hourlyValue, int schoolHours) : Employee(hourlyValue), schoolHours(schoolHours) {}

void Apprentice::executeWorkday() {
    logWorkedHours(7);
    logSchoolHours(schoolHours);
}

int Apprentice::getSchoolHours() const {
    return Apprentice::schoolHours;
}

int Apprentice::getWorkedHours() const {
    return this->getHourlyValue() + this->getSchoolHours();
}

void Apprentice::logSchoolHours(int hours) {
    Apprentice::schoolHours += hours;
}

