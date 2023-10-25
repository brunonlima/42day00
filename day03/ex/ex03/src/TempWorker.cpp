#include "TempWorker.hpp"

TempWorker::TempWorker(int hourlyValue) : Employee(hourlyValue), ITempWorker() {}

int TempWorker::executeWorkday() {
    return logWorkedHours(7);
}


int TempWorker::logWorkedHours(int hours) { 
    return hoursWorked += hours;
}

int TempWorker::getHourlyValue() const {
    return  this->hourlyValue;

}


int TempWorker::getWorkedHours() const {
    return this->getHourlyValue() * this->getHourlyValue();
}
