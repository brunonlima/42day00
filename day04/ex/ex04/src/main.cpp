#include "Headmaster.hpp"
#include "Form.hpp"
#include "FormType.hpp"
#include "Classroom.hpp"
#include "Headmaster.hpp"
#include "StudentList.hpp"

int main() {

    
    Headmaster* headmaster = new Headmaster();
    Room* classRoom = new Classroom();
    
    Student* student1 = new Student("Siegfried");
    Student* student2 = new Student("Brunhild");

    student1->moveTo(classRoom);
    student2->moveTo(classRoom);

    StudentList::getInstance()->add(student1);
    StudentList::getInstance()->add(student2);

   


    
    return 0;
}
