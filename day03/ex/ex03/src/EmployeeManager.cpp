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

void EmployeeManager::executeWorkday() {
    for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
        Employee* employee = *it;
        employee->executeWorkday();
    }
}

void EmployeeManager::calculatePayroll() {
    for (std::vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) {
        Employee* employee = *it;
        int totalPay = (employee->getWorkedHours()) * employee->getHourlyValue();
        std::cout << "Pay for Employee: $" << totalPay << std::endl;
    }
}
