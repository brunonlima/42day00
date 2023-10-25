#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee {
public:
    Employee(int hourlyValue);

    virtual int executeWorkday() = 0;

    int getHourlyValue() const;
    void logWorkedHours(int hours);
    void logSchoolHours(int hours);
    int getWorkedHours() const;
    int getSchoolHours() const;

private:
    int hourlyValue;
    int hoursWorked;
    int hoursSchool;
};

#endif // EMPLOYEE_HPP
