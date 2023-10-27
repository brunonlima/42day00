// NeedCourseCreationForm.hpp
#ifndef NEEDCOURSECREATIONFORM_HPP
#define NEEDCOURSECREATIONFORM_HPP

#include "Form.hpp"

class NeedCourseCreationForm : public Form {
private:
public:
    NeedCourseCreationForm();
    void execute();
    void fillForm();
    std::string  getField1() const ;
    std::string  getField2() const ;
};

#endif // NEEDCOURSECREATIONFORM_HPP
