#ifndef TOOL_HPP
#define TOOL_HPP
#include <string>

class Tool {
public:
    Tool() {}
    virtual ~Tool() {}

    virtual void use() = 0 ;

    virtual int getNumberOfUses() const = 0 ;

    virtual void setNumberOfUses(int uses) = 0 ;

    virtual bool isBusy() = 0;

    virtual void setBusy(bool busy) = 0;

    virtual void setName(std::string name) = 0;

    virtual std::string getName() const = 0;

protected:
    int numberOfUses;
    bool busy;
    std::string name;
};

#endif
