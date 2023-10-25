#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"
#include "ILoggerDateHeader.hpp"
#include <string>
#include <fstream>

class FileLogger : public ILogger, public ILoggerDateHeader {
private:
    std::ofstream outputFile;
    bool useDate;

public:
    FileLogger(const std::string& filename, bool useDate);
    void write(const std::string& message);
    void useDateHeader(bool useDate);
};

#endif
