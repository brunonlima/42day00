#ifndef CONTRACTEMPLOYEE_HPP
#define CONTRACTEMPLOYEE_HPP

#include "Employee.hpp"
#include "IContractWorker.hpp"

class ContractEmployee : public Employee , public IContractWorker {
public:
    ContractEmployee(int hourlyValue);

    int executeWorkday() ;
    int logNonWorkedHours(int hours);
    int getNonWorkedHours() const;
    int getWorkedHours() const;
    int getHourlyValue() const;

private:
    int hoursNotWorked;
    int hourlyValue;
};

#endif // CONTRACTEMPLOYEE_HPP
