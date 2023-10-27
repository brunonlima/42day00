// StudentList.hpp
#ifndef STUDENTLIST_HPP
#define STUDENTLIST_HPP

#include "Singleton.hpp"
#include "Student.hpp"

class StudentList : public Singleton<Student> {
};

#endif // STUDENTLIST_HPP

// StaffList.hpp, CourseList.hpp e RoomList.hpp são semelhantes a StudentList.hpp
