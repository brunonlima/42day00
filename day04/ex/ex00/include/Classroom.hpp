// Classroom.hpp
#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include "Room.hpp"

class Course;

class Classroom : public Room {
private:
    Course* _currentRoom;

public:
    Classroom();
    void assignCourse(Course* p_course);
};

#endif // CLASSROOM_HPP
