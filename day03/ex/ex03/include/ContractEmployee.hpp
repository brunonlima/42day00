#ifndef CONTRACTEMPLOYEE_HPP
#define CONTRACTEMPLOYEE_HPP

#include "Employee.hpp"

class ContractEmployee : public Employee {
public:
    ContractEmployee(int hourlyValue);

    int executeWorkday() ;
    void logNonWorkedHours(int hours);
    int getNonWorkedHours() const;

private:
    int hoursNotWorked;
};

#endif // CONTRACTEMPLOYEE_HPP
