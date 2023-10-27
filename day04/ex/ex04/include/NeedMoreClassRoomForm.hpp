// NeedMoreClassRoomForm.hpp
#ifndef NEEDMORECLASSROOMFORM_HPP
#define NEEDMORECLASSROOMFORM_HPP

#include "Form.hpp"

class NeedMoreClassRoomForm : public Form {
private:
public:
    NeedMoreClassRoomForm();
    void execute();
    void fillForm();
    std::string  getField1() const ;
    std::string  getField2() const ;
};

#endif // NEEDMORECLASSROOMFORM_HPP
