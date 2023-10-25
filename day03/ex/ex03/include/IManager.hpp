#ifndef IMANAGER_HPP
#define IMANAGER_HPP

#include "Employee.hpp"

class IManager {
public:
    IManager();
    virtual ~IManager();

   virtual void addEmployee(Employee* employee) = 0;
   virtual void removeEmployee(Employee* employee) = 0;
   virtual void calculatePayroll() = 0;

};

#endif // EMPLOYEE_HPP