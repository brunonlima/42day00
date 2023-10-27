
#include "Singleton.hpp"
#include "Student.hpp"
#include "StudentList.hpp"
#include "StaffList.hpp"
#include "CourseList.hpp"
#include "RoomList.hpp"

#include <iostream>

int main() {
    StudentList::getInstance()->add(new Student("Siegfried"));
    StudentList::getInstance()->add(new Student("Brunhild"));

    StaffList::getInstance()->add(new Staff());
    StaffList::getInstance()->add(new Staff());

    CourseList::getInstance()->add(new Course("42 - OO"));
    CourseList::getInstance()->add(new Course("42 - C"));

    RoomList::getInstance()->add(new Room());
    RoomList::getInstance()->add(new Room());
    

    Student  *student = StudentList::getInstance()->access(0);
    std::cout << "Student: " << student->getName() << std::endl;

    std::vector<Student*> students = StudentList::getInstance()->listAll();
    
    for (size_t i = 0; i < students.size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }

    bool deletado = StudentList::getInstance()->retrieve(0);

    if (deletado) {
        std::cout << "Student deleted" << std::endl;

    }
    std::cout << "***************StudentsList************************" << std::endl;
    for (size_t i = 0; i < StudentList::getInstance()->listAll().size(); ++i) {
        std::cout << "Student: " << students[i]->getName() << std::endl;
    }

    std::vector<Staff*> staffs = StaffList::getInstance()->listAll();
    std::cout << "***************StaffList************************" << std::endl;
    for (size_t i = 0; i < staffs.size(); ++i) {
        std::cout << "Staff: " << &staffs[i] << std::endl;
    }

    std::vector<Course*> courses = CourseList::getInstance()->listAll();
    std::cout << "***************CourseList************************" << std::endl;
    for (size_t i = 0; i < CourseList::getInstance()->listAll().size(); ++i) {
        std::cout << "Course: " << courses[i]->getName() << std::endl;
    }

    std::vector<Room*> rooms = RoomList::getInstance()->listAll();
    std::cout << "***************RoomList************************" << std::endl;
    for (size_t i = 0; i < RoomList::getInstance()->listAll().size(); ++i) {
        std::cout << "Room: " << &rooms[i] << std::endl;
    }




 
    return 0;
}
