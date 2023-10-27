// StudentList.hpp
#ifndef STAFFLIST_HPP
#define STAFFLIST_HPP

#include "Singleton.hpp"
#include "Staff.hpp"

class StaffList : public Singleton<Staff> {
};

#endif // STAFFLIST_HPP


