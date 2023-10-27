// SubscriptionToCourseForm.hpp
#ifndef SUBSCRIPTIONTOCOURSEFORM_HPP
#define SUBSCRIPTIONTOCOURSEFORM_HPP

#include "Form.hpp"

class SubscriptionToCourseForm : public Form {
private:

public:
    SubscriptionToCourseForm();
    void execute();
    void fillForm();
    std::string  getField1() const ;
    std::string  getField2() const ;
};

#endif // SUBSCRIPTIONTOCOURSEFORM_HPP
