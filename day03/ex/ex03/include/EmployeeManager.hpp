#ifndef EMPLOYEEMANAGER_HPP
#define EMPLOYEEMANAGER_HPP

#include <vector>
#include "Employee.hpp"

class EmployeeManager {
public:
    void addEmployee(Employee* employee);
    void removeEmployee(Employee* employee);
    void executeWorkday();
    void calculatePayroll();

private:
    std::vector<Employee*> employees;
};

#endif // EMPLOYEEMANAGER_HPP
