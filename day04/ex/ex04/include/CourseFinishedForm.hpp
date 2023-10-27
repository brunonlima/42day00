// CourseFinishedForm.hpp
#ifndef COURSEFINISHEDFORM_HPP
#define COURSEFINISHEDFORM_HPP

#include "Form.hpp"
#include <iostream>

class CourseFinishedForm : public Form {
private:

public:
    void execute();
    CourseFinishedForm();
    void fillForm();
    std::string  getField1() const ;
    std::string  getField2() const ;
};

#endif // COURSEFINISHEDFORM_HPP
