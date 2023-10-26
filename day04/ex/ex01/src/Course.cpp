// Course.cpp
#include "Course.hpp"
#include "Professor.hpp"
#include "Student.hpp"

Course::Course(std::string p_name)
    : _name(p_name), _responsable(NULL), _numberOfClassToGraduate(0), _maximumNumberOfStudent(30) {
    this->_name = p_name;

}

void Course::assign(Professor* p_professor) {
    _responsable = p_professor;
}

void Course::subscribe(Student* p_student) {
    if (_students.size() < static_cast<size_t>(_maximumNumberOfStudent)) {
        _students.push_back(p_student);
    } else {
        // Trate a capacidade máxima de alunos alcançada.
    }
}
