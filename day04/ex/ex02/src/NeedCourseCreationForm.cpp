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
