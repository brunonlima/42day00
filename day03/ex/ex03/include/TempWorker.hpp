#ifndef TEMPWORKER_HPP
#define TEMPWORKER_HPP

#include "ITempWorker.hpp"
#include "Employee.hpp"

class TempWorker : public Employee , public ITempWorker {
public:
    TempWorker(int hourlyValue);

    int executeWorkday();

    int logWorkedHours(int hours);
    int getWorkedHours() const;
    int getHourlyValue() const;
};

#endif // TEMPWORKER_HPP
