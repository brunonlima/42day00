#include "Employee.hpp"

Employee::Employee(int hourlyValue) : hourlyValue(hourlyValue), hoursWorked(0), hoursSchool(0) {}


int Employee::getHourlyValue() const {
    return hourlyValue;
}

void Employee::logWorkedHours(int hours) {
    hoursWorked += hours;
}

void Employee::logSchoolHours(int hours) {
    hoursSchool += hours;
}

int Employee::getWorkedHours() const {
    return hoursWorked;
}

int Employee::getSchoolHours() const {
    return hoursSchool;
}
