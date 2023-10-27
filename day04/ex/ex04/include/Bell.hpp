
#ifndef BELLROOM_HPP
#define BELLROOM_HPP
#include "Student.hpp"
#include "Professor.hpp"
#include "Event.hpp"
#include <iostream>


class Bell {
private:
    std::vector<Student*> students;
    std::vector<Professor*> professors;

public:
    void addObserver(Student* student) {
        students.push_back(student);
    }

    void addObserver(Professor* professor) {
        professors.push_back(professor);
    }

    void ringBell() {
        std::cout << "Bell rings." << std::endl;
        for (size_t i = 0; i < students.size(); ++i) {
            students[i]->notify(Event::RingBell);
        }
        for (size_t i = 0; i < professors.size(); ++i) {
            professors[i]->notify(Event::RingBell);
        }
    }
};
#endif