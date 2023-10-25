#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

#include "Employee.hpp"
#include "IApprentice.hpp"

class Apprentice : public Employee , public IApprentice {
public:
    Apprentice(int hourlyValue, int schoolHours);
    void executeWorkday(); 
    int getSchoolHours() const;
    void logSchoolHours(int hours);
    int getWorkedHours() const;
    
private:
    int schoolHours;
};

#endif // APPRENTICE_HPP
