// FormFactory.hpp
#ifndef FORM_FACTORY_HPP
#define FORM_FACTORY_HPP

#include "Form.hpp"

class FormFactory {
public:
    static Form* createForm(FormType formType);
};

#endif // FORM_FACTORY_HPP
