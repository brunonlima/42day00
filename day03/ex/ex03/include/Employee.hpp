#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee {
public:
    Employee(int hourlyValue);

    virtual void executeWorkday() = 0;

    int getHourlyValue() const;
    void logWorkedHours(int hours);
    int getWorkedHours() const;

private:
    int hourlyValue;
    int hoursWorked;
};

#endif // EMPLOYEE_HPP
