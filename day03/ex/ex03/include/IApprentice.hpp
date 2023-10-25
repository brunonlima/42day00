#ifndef IAPPRENTICE_HPP
#define IAPPRENTICE_HPP

class IApprentice {
public:
    IApprentice();
    virtual ~IApprentice();
    virtual void logSchoolHours(int hours) = 0;

};

#endif // EMPLOYEE_HPP