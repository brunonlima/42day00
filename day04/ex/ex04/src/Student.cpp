
#include "Student.hpp"
#include "Course.hpp"
#include "Classroom.hpp"

//Student::Student() : _name("") {
//}
Student::Student(std::string name) : Person(name) {
    // Restante da inicialização do construtor da classe Student, se necessário
     _name = name;
}


