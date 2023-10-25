#ifndef STREAMLOGGER_HPP
#define STREAMLOGGER_HPP

#include "ILogger.hpp"
#include <string>
#include <ostream>

class StreamLogger : public ILogger {
private:
    std::ostream& outputStream;
    std::string customHeader;
    bool useDateHeader;

public:
    StreamLogger(std::ostream& output, const std::string& customHeader = "");
    void write(const std::string& message);
    void setHeader(const std::string& customHeader);
};

#endif
