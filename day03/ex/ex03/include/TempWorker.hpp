#ifndef TEMPWORKER_HPP
#define TEMPWORKER_HPP

#include "Employee.hpp"

class TempWorker : public Employee {
public:
    TempWorker(int hourlyValue);

    int executeWorkday();
};

#endif // TEMPWORKER_HPP
