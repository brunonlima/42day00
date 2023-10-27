#include "NeedCourseCreationForm.hpp"
#include <iostream>

NeedCourseCreationForm::NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {
    // Inicialize quaisquer atributos específicos, se necessário.
}

void NeedCourseCreationForm::execute() {
    if (NeedCourseCreationForm::isSigned()) {
        std::cout << "Need course creation form executed." << std::endl;
    
    } else {
        std::cout << "ERROR -- FORM DOES NOT SIGNED!!" << std::endl;
    }
}
void NeedCourseCreationForm::fillForm() {
   
    field1 = "Need course creation form - title";
    field2 = "Curse XX need Creation";
}

std::string NeedCourseCreationForm::getField1() const {
    return field1;
}

std::string NeedCourseCreationForm::getField2() const {
    return field2;
}