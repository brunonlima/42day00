#include "SubscriptionToCourseForm.hpp"
#include <iostream>

SubscriptionToCourseForm::SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {
    // Inicialize quaisquer atributos específicos, se necessário.
}

void SubscriptionToCourseForm::execute() {
     if (SubscriptionToCourseForm::isSigned()) {
        std::cout << "Subscription to course form executed." << std::endl;
    // Implemente a lógica de execução específica deste formulário, se necessário.
    } else {
        std::cout << "ERROR -- FORM DOES NOT SIGNED!!" << std::endl;
    }

  
}
