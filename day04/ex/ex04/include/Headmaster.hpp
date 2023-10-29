// Headmaster.hpp
#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include<vector>
#include "Staff.hpp"
#include "Bell.hpp"

class Form;

class Headmaster : public Staff {
private:
    std::vector<Form*> _formToValidate;
    Bell * _bell;

public:
    Headmaster();
    void receiveForm(Form* p_form);
    void execute(Form* form);
    std::vector<Form*> getFormsToValidate();
    void ringBell();
    Bell* getBell();
};

#endif // HEADMASTER_HPP
