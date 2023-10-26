// Student.hpp
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "../Person.hpp"
#include <vector>

class Course;
class Classroom;

class Student : public Person {
private:
    std::string _name;
    std::vector<Course*> _subscribedCourse;

public:
    Student();
    Student(std::string name);
    void attendClass(Classroom* p_classroom);
    void exitClass();
    void graduate(Course* p_course);
    std::string getName() const { return _name; }
    void setName(const std::string& name) { _name = name; }

};

#endif // STUDENT_HPP
