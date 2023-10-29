#include "Headmaster.hpp"
#include "Form.hpp"
#include <vector>

class Bell;

// Construtor da classe Headmaster
Headmaster::Headmaster() {
    // Inicialize qualquer estado da classe, se necessário.
    _bell = new Bell();
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

void Headmaster::ringBell() {
    // Simulate a break of 5 seconds using the sleep function
    _bell->ringBellStartPause();
    std::clock_t start_time = std::clock();
    while (static_cast<double>(std::clock() - start_time) / CLOCKS_PER_SEC < 5.0) {
            // Wait for 5 seconds
    }
    _bell->ringBellStopPause();  //  Ring the bell to end the break
}

Bell* Headmaster::getBell(){
    return this->_bell;
}
