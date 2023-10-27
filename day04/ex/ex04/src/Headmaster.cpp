#include "Headmaster.hpp"
#include "Form.hpp"
#include <vector>

// Construtor da classe Headmaster
Headmaster::Headmaster() {
    // Inicialize qualquer estado da classe, se necessário.
}

// Método para receber um formulário
void Headmaster::receiveForm(Form* p_form) {
    if (p_form) {
        _formToValidate.push_back(p_form);
    }
    // Lembre-se de liberar a memória se necessário.
}

void Headmaster::execute(Form* form) {
    if (form) {
        form->toSign(true);
        form->execute(); // Execute o formulário.
    }
}

std::vector<Form*> Headmaster::getFormsToValidate() {
    return _formToValidate;
}
