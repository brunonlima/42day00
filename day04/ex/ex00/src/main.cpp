
#include "Repository.hpp"
#include "Student.hpp"
#include "StudentList.hpp"

#include <iostream>

int main() {
    StudentList::getInstance()->add(new Student("Alice"));
    StudentList::getInstance()->add(new Student("Bob"));

    Student  *student = StudentList::getInstance()->access(0);
    std::cout << "Student: " << student->getName() << std::endl;

    std::vector<Student*> students = StudentList::getInstance()->retrieveAll();
    
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }


 
    return 0;
}
