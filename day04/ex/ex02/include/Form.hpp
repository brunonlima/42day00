// Form.hpp
#include "FormType.hpp"
#ifndef FORM_HPP
#define FORM_HPP

class Form {
private:
    FormType _formType;

protected:
    bool sign;
    void toSign(bool sign);

public:
    Form(FormType p_formType) { _formType = p_formType; }
    virtual void execute() = 0;
    bool isSigned();
    friend class Headmaster;
};

#endif // FORM_HPP
