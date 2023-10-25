#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"
#include <string>
#include <fstream>

class FileLogger : public ILogger {
private:
    std::ofstream outputFile;
    std::string customHeader;

public:
    FileLogger(const std::string& filename, const std::string& customHeader = "");
    void write(const std::string& message);
    void setHeader(const std::string& customHeader);
};

#endif
