#ifndef EMPLOYEEMANAGER_HPP
#define EMPLOYEEMANAGER_HPP

#include <vector>
#include "Employee.hpp"
#include "IManager.hpp"

class EmployeeManager : public Employee, public IManager  {
public:
    EmployeeManager(int hourlyValue);
    void addEmployee(Employee* employee);
    void removeEmployee(Employee* employee);
    int executeWorkday();
    void calculatePayroll();
    int getWorkedHours() const;
    int getHourlyValue() const;

private:
    std::vector<Employee*> employees;
};

#endif // EMPLOYEEMANAGER_HPP
