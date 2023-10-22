#ifndef TOOL_HPP
#define TOOL_HPP
#include <string>
#include<Worker.hpp>

class Worker;

class Tool {
public:
    Tool() {}
    virtual ~Tool() {}

    virtual void use() = 0 ;

    virtual int getNumberOfUses() const = 0 ;

    virtual bool isBusy() = 0;

    virtual void setBusy(bool busy) = 0;

    virtual void setName(std::string name) = 0;

    virtual void setWorker(Worker* worker) = 0;

    virtual Worker* getWorker() = 0;

    virtual std::string getName() const = 0;

protected:
    Worker* worker;
    int numberOfUses;
    bool busy;
    std::string name;
    virtual void setNumberOfUses(int uses) = 0 ;

};

#endif
