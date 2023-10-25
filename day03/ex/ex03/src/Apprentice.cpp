#include "Apprentice.hpp"

Apprentice::Apprentice(int hourlyValue, int schoolHours) : Employee(hourlyValue), schoolHours(schoolHours) {}

int Apprentice::executeWorkday() {
    logWorkedHours(7);
    logSchoolHours(schoolHours);
    return 7;
}

int Apprentice::getSchoolHours() const {
    return schoolHours;
}
