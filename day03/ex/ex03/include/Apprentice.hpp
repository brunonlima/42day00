#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

#include "Employee.hpp"

class Apprentice : public Employee {
public:
    Apprentice(int hourlyValue, int schoolHours);

    int executeWorkday(); // No 'override' keyword in C++98

    int getSchoolHours() const;

private:
    int schoolHours;
};

#endif // APPRENTICE_HPP
