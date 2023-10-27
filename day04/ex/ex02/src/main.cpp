#include "Headmaster.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"

int main() {

    //FormType formType = FormType::CourseFinished;
    
    Headmaster* headmaster = new Headmaster();
    Secretary* secretary = new Secretary();

    Form* subscriptionForm = secretary->createForm(FormType::SubscriptionToCourse);
    Form* needCourseCreationForm = secretary->createForm(FormType::NeedCourseCreation);
    Form* needMoreClassRoom = secretary->createForm(FormType::NeedMoreClassRoom);
    Form* courseFinishedForm = secretary->createForm(FormType::CourseFinished);

    subscriptionForm->fillForm();
    needCourseCreationForm->fillForm();
    needMoreClassRoom->fillForm();
    courseFinishedForm->fillForm();

    //courseFinishedForm->execute();

    headmaster->receiveForm(subscriptionForm);
    headmaster->receiveForm(needCourseCreationForm);
    headmaster->receiveForm(needMoreClassRoom);
    headmaster->receiveForm(courseFinishedForm);

    for (size_t i = 0; i < headmaster->getFormsToValidate().size(); ++i) {
        Form* form = headmaster->getFormsToValidate()[i];
        headmaster->execute(form);
        std::cout << "Field 1 : " <<form->getField1() << std::endl;
        std::cout << "Field 2 : " <<form->getField2() << std::endl;
        std::cout << std::endl;
        
    }


    // Execute o formulário de inscrição
    //headmaster->execute(subscriptionForm);

    // Execute o formulário de término de curso
    //headmaster->execute(courseFinishedForm);

    // Lembre-se de liberar a memória apropriada

    //delete signAndExecuteCommand;

    return 0;
}
