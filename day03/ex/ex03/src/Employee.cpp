#include "Employee.hpp"

Employee::Employee(int hourlyValue) : hourlyValue(hourlyValue), hoursWorked(0) {}


int Employee::getHourlyValue() const {
    return hourlyValue;
}

void Employee::logWorkedHours(int hours) {
    hoursWorked += hours;
}


int Employee::getWorkedHours() const {
    return hoursWorked;
}

