#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee {
public:
    Employee(int hourlyValue);

    virtual int executeWorkday() = 0;

    virtual int getHourlyValue() const = 0;
    virtual int getWorkedHours() const = 0;

protected:
    int hourlyValue;
    int hoursWorked;
};

#endif // EMPLOYEE_HPP
