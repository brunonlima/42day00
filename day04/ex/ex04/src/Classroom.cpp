// Classroom.cpp
#include "Classroom.hpp"

Classroom::Classroom() : _currentRoom(nullptr) {}

void Classroom::assignCourse(Course* p_course) {
    _currentRoom = p_course;
}