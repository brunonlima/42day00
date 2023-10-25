#include "Apprentice.hpp"

Apprentice::Apprentice(int hourlyValue, int schoolHours) : Employee(hourlyValue), schoolHours(schoolHours) {}

int Apprentice::executeWorkday() {
    return logSchoolHours(schoolHours);
}

int Apprentice::getSchoolHours() const {
    return Apprentice::schoolHours;
}

int Apprentice::getWorkedHours() const {
    return this->getHourlyValue() + this->getSchoolHours();
}

int Apprentice::logSchoolHours(int hours) {
    return Apprentice::schoolHours += hours;
}

int Apprentice::getHourlyValue() const {
    return  this->hourlyValue;

}
