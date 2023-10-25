#ifndef ILOGGERDATEHEADER_HPP
#define ILOGGERDATEHEADER_HPP

#include <string>

class ILoggerDateHeader {
public:
    virtual ~ILoggerDateHeader() {}
    virtual void useDateHeader(bool useDate) = 0;
};

#endif