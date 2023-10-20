#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Tool.hpp" 
#include <string>

class Shovel : public Tool {
public:
    
    Shovel() ;
    ~Shovel(); 

    void setNumberOfUses(int uses);

    void use();

    int getNumberOfUses() const;

    bool isBusy();

    void setBusy(bool busy);

    void setName(std::string name);

    std::string getName() const;

private:
    int numberOfUses;
    bool busy;
    std::string name;
};


#endif
