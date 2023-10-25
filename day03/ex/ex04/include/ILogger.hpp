#ifndef ILOGGER_HPP
#define ILOGGER_HPP

#include <string>

class ILogger {
public:
    virtual ~ILogger() {}
    virtual void write(const std::string& message) = 0;
    virtual void setHeader(const std::string& header) = 0;
};

#endif
