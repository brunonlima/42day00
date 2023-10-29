// Form.hpp
#include "FormType.hpp"
#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>


class Form {
private:
    FormType _formType;

protected:
    bool sign;
    void toSign(bool sign);
    std::string field1, field2;


public:
    Form(FormType p_formType) { _formType = p_formType; }
    virtual void execute() = 0;
    bool isSigned();
    virtual void fillForm() = 0;
    std::string  getField1() const ;
    std::string  getField2() const ;

    friend class Headmaster;
};
    

#endif // FORM_HPP
