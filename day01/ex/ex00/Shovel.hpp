#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Tool.hpp" 
#include <string>

class Shovel : public Tool {
public:
    
    Shovel() ;
    ~Shovel(); 


    void use();

    int getNumberOfUses() const;

    bool isBusy();

    void setBusy(bool busy);

    void setWorker(Worker* worker);

    Worker* getWorker();

    void setName(std::string name);

    std::string getName() const;

private:
    int numberOfUses;
    bool busy;
    std::string name;
    void setNumberOfUses(int uses);
};


#endif
