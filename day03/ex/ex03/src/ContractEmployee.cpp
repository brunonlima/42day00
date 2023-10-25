#include "ContractEmployee.hpp"
#include <iostream>

ContractEmployee::ContractEmployee(int hourlyValue) : Employee(hourlyValue), hoursNotWorked(0) {
    this->hourlyValue = hourlyValue;
}

int ContractEmployee::executeWorkday() {
    //std::cout << "Contract Employee worked value" << this->getWorkedHours() << " hours." << std::endl;
    return this->getWorkedHours();
}

int ContractEmployee::logNonWorkedHours(int hours) {
    return hoursNotWorked += hours;
}

int ContractEmployee::getNonWorkedHours() const {
    return hoursNotWorked;
}

int ContractEmployee::getWorkedHours() const {
     //std::cout << "Contract Employee hourly value" << this->hourlyValue << " hours." << std::endl;
     //int workerHours =  this->hourlyValue * ( 8 - this->getNonWorkedHours() );
      //std::cout << "Contract Employee worked value" << workerHours << " hours." << std::endl;
     return 8;
}

int ContractEmployee::getHourlyValue() const {
    return  this->hourlyValue;

}

