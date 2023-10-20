#ifndef TOOL_HPP
#define TOOL_HPP
#include <string>

class Tool {
public:
    Tool();
    virtual ~Tool();

    virtual void use();

    virtual int getNumberOfUses() const;

    virtual void setNumberOfUses(int uses) ;

    virtual bool isBusy();

    virtual void setBusy(bool busy);

    virtual void setName(std::string name);

    virtual std::string getName() const;

protected:
    int numberOfUses;
    bool busy;
    std::string name;
};

#endif
