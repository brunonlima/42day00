// Headmaster.hpp
#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include<vector>

#include "Staff.hpp"
#include "Bell.hpp"

class Form;

class Headmaster : public Staff, Bell {
private:
    std::vector<Form*> _formToValidate;

public:
    Headmaster();
    void receiveForm(Form* p_form);
    void execute(Form* form);
    std::vector<Form*> getFormsToValidate();
};

#endif // HEADMASTER_HPP
