#include "Headmaster.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Classroom.hpp"
#include "Headmaster.hpp"
#include "StudentList.hpp"
#include "ProfessorList.hpp"

class Classroom;

int main() {

    
    Headmaster* headmaster = new Headmaster();
    Room* classRoom = new Classroom();
    
    Student* student1 = new Student("Siegfried");
    Student* student2 = new Student("Brunhild");

    student1->moveTo(classRoom);
    student2->moveTo(classRoom);

    Professor* professor1 = new Professor();

    professor1->moveTo(classRoom);


    headmaster->getBell()->addObserver(student1);
    headmaster->getBell()->addObserver(student2);
    headmaster->getBell()->addObserver(professor1);

    headmaster->ringBell();
   


    
    return 0;
}
