// SecretarialOffice.hpp
#ifndef SECRETARIALOFFICE_HPP
#define SECRETARIALOFFICE_HPP

#include "Room.hpp"

class Form;

class SecretarialOffice : public Room {
private:
    std::vector<Form*> _archivedForms;

public:

};

#endif // SECRETARIALOFFICE_HPP
