#include "CourseFinishedForm.hpp"
#include <iostream>

CourseFinishedForm::CourseFinishedForm() : Form(FormType::CourseFinished) {
    // Inicialize quaisquer atributos específicos, se necessário.
}

void CourseFinishedForm::execute() {

    if (CourseFinishedForm::isSigned()) {
        std::cout << "Course finished form executed." << std::endl;
    // Implemente a lógica de execução específica deste formulário, se necessário.
    } else {
        std::cout << "ERROR -- FORM DOES NOT SIGNED!!" << std::endl;
    }
}
