#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "Tool.hpp" 

class Hammer : public Tool {
public:
    

    Hammer() ;

    ~Hammer(); 

    void setNumberOfUses(int uses);

    void use();

    int getNumberOfUses() const;

    bool isBusy();

    void setBusy(bool busy);

    void setName(std::string name);

    std::string getName();

private:
    int numberOfUses;
    bool busy;
    std::string name;

};


#endif
