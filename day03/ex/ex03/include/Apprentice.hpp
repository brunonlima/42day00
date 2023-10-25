#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

#include "Employee.hpp"
#include "IApprentice.hpp"

class Apprentice : public Employee , public IApprentice {
public:
    Apprentice(int hourlyValue, int schoolHours);
    int executeWorkday(); 
    int getSchoolHours() const;
    int logSchoolHours(int hours);
    int getWorkedHours() const;
    int getHourlyValue() const;
    
private:
    int schoolHours;
};

#endif // APPRENTICE_HPP
