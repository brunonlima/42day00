#include "EmployeeManager.hpp"
#include "IManager.hpp"
#include <iostream>
#include <algorithm>

EmployeeManager::EmployeeManager(int hourlyValue) : Employee(hourlyValue), IManager(){}

void EmployeeManager::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void EmployeeManager::removeEmployee(Employee* employee) {
    employees.erase(std::remove(employees.begin(), employees.end(), employee), employees.end());
}

int EmployeeManager::executeWorkday() {
    for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
        Employee* employee = *it;
        employee->executeWorkday();
    }

    return 0;
}

void EmployeeManager::calculatePayroll() {
    for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
        Employee* employee = *it;
        int totalPay = (employee->getWorkedHours()) * employee->getHourlyValue();
        std::cout << "Pay for Employee: $" << totalPay << std::endl;
    }
}

int EmployeeManager::getHourlyValue() const {
    return  this->hourlyValue;

}

int EmployeeManager::getWorkedHours() const {
     //std::cout << "Contract Employee hourly value" << this->hourlyValue << " hours." << std::endl;
     //int workerHours =  this->hourlyValue * ( 8 - this->getNonWorkedHours() );
      //std::cout << "Contract Employee worked value" << workerHours << " hours." << std::endl;
     return 8;
}
