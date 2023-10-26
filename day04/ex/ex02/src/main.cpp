#include "FormFactory.hpp"
#include "Command.hpp"
#include "Form.hpp"
#include "FormType.hpp"

int main() {

    FormType formType = FormType::CourseFinished;
    
    Command* signAndExecuteCommand = new SignAndExecuteCommand();

    Form* subscriptionForm = FormFactory::createForm(FormType::SubscriptionToCourse);
    Form* courseFinishedForm = FormFactory::createForm(FormType::CourseFinished);

    // Execute o formulário de inscrição
    signAndExecuteCommand->execute(subscriptionForm);

    // Execute o formulário de término de curso
    signAndExecuteCommand->execute(courseFinishedForm);

    // Lembre-se de liberar a memória apropriada

    delete signAndExecuteCommand;

    return 0;
}
