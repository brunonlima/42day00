#include "NeedMoreClassRoomForm.hpp"
#include <iostream>

NeedMoreClassRoomForm::NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {
    // Inicialize quaisquer atributos específicos, se necessário.
}

void NeedMoreClassRoomForm::execute() {

     if (NeedMoreClassRoomForm::isSigned()) {
        std::cout << "Need more classroom form executed." << std::endl;
    // Implemente a lógica de execução específica deste formulário, se necessário.
    } else {
        std::cout << "ERROR -- FORM DOES NOT SIGNED!!" << std::endl;
    }
}

