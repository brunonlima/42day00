#include "ContractEmployee.hpp"

ContractEmployee::ContractEmployee(int hourlyValue) : Employee(hourlyValue), hoursNotWorked(0) {}

int ContractEmployee::executeWorkday() {
    logWorkedHours(0);
    return 0;
}

void ContractEmployee::logNonWorkedHours(int hours) {
    hoursNotWorked += hours;
}

int ContractEmployee::getNonWorkedHours() const {
    return hoursNotWorked;
}
