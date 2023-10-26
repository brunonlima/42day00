// FormFactory.cpp
#include "FormFactory.hpp"
#include "Form.hpp"
#include "FormType.hpp"


Form* FormFactory::createForm(FormType formType) {
    static Form* createForm(FormType formType) {
        switch (formType) {
            case FormType::CourseFinished:
                return new CourseFinishedForm();
            case FormType::NeedMoreClassRoom:
                return new NeedMoreClassRoomForm();
            case FormType::NeedCourseCreation:
                return new NeedCourseCreationForm();
            case FormType::SubscriptionToCourse:
                return new SubscriptionToCourseForm();
            default:
                return nullptr;
        }
    }
}
