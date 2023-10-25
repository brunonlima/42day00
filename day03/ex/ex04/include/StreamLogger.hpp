#ifndef STREAMLOGGER_HPP
#define STREAMLOGGER_HPP

#include "ILogger.hpp"
#include "ILoggerHeader.hpp"
#include <string>
#include <ostream>

class StreamLogger : public ILogger, public ILoggerHeader {
private:
    std::ostream& outputStream;
    std::string customHeader;

public:
    StreamLogger(std::ostream& output, const std::string& customHeader = "");
    void write(const std::string& message);
    void setHeader(const std::string& customHeader);
};

#endif
