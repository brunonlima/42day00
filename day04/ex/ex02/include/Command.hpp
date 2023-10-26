// Command.hpp
#ifndef COMMAND_HPP
#define COMMAND_HPP

class Form;

class Command {
public:
    virtual void execute(Form* form) = 0;
};

class SignAndExecuteCommand : public Command {
public:
    void execute(Form* form);
};

#endif // COMMAND_HPP
