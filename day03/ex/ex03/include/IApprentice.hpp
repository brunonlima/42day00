#ifndef IAPPRENTICE_HPP
#define IAPPRENTICE_HPP

class IApprentice {
public:
    IApprentice();
    virtual ~IApprentice();
    virtual int logSchoolHours(int hours) = 0;

};

#endif // EMPLOYEE_HPP