#ifndef ILOGGERHEADER_HPP
#define ILOGGERHEADER_HPP

#include <string>

class ILoggerHeader {
public:
    virtual ~ILoggerHeader() {}
    virtual void setHeader(const std::string& header) = 0;
};

#endif