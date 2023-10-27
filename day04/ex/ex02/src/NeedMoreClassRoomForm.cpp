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

void NeedMoreClassRoomForm::fillForm() {

    field1 = "Need More Class Room form - title";
    field2 = "Class enough!!";
}

std::string NeedMoreClassRoomForm::getField1() const {
    return field1;
}

std::string NeedMoreClassRoomForm::getField2() const {
    return field2;
}