#include "EmployeeManager.hpp"
#include "TempWorker.hpp"
#include "ContractEmployee.hpp"
#include "Apprentice.hpp"
#include <iostream>

int main() {
    EmployeeManager* manager = new EmployeeManager(30);

    
    Employee* temp1 = new TempWorker(15);
    Employee* temp2 = new TempWorker(12);
    Employee* contract1 = new ContractEmployee(20);
    Employee* apprentice1 = new Apprentice(10, 4);
  

    // Testing Liskov Substitution
    Employee* employees[] = {temp1, temp2, contract1, apprentice1};

      std::cout << "Executing a workday for each employee:" << std::endl;
    for (int i = 0; i < static_cast<int>(sizeof(employees) / sizeof(employees[0])); ++i) {
        Employee* employee = employees[i];
        employee->executeWorkday();
        //std::cout << "Employee worked for " << workedHours << " hours." << std::endl;
    }

    // Testing Interface Segregation
    manager->addEmployee(temp1);
    manager->addEmployee(temp2);
    manager->addEmployee(contract1);
    manager->addEmployee(apprentice1);

    manager->executeWorkday();
    manager->calculatePayroll();

    // Additional operations
    contract1->logWorkedHours(8); // Contract employee takes a day off

    std::cout << "Employee non-worked hours for Contract Employee: " << dynamic_cast<ContractEmployee*>(contract1)->getNonWorkedHours() << " hours." << std::endl;
    std::cout << "Employee school hours for Apprentice: " << dynamic_cast<Apprentice*>(apprentice1)->getSchoolHours() << " hours." << std::endl;

    // Clean up dynamic memory using delete
    //delete temp1;
    //delete temp2;
    //delete contract1;make val

    //delete apprentice1;

    return 0;
}
