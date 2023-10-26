
#include "../src/repository/Repository.hpp"
#include "../src/person/student/Student.hpp"
#include "../src/repository/StudentList.hpp"

#include <iostream>

int main() {
    StudentList::getInstance().add(Student("Alice"));
    StudentList::getInstance().add(Student("Bob"));

    const Student& student = StudentList::getInstance().access(0);
    std::cout << "Student: " << student.getName() << std::endl;

    std::vector<Student> students = StudentList::getInstance().retrieveAll();
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "Student: " << students[i].getName() << std::endl;
    }

    return 0;
}
