// Command.cpp
#include "Command.hpp"
#include "Form.hpp"
#include "FormType.hpp"

void SignAndExecuteCommand::execute(Form* form) {
    if (form) {
        // Assine o formulário, se necessário.
        form->execute(); // Execute o formulário.
    }
}
