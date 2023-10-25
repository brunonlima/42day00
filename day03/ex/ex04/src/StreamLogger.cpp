#include "StreamLogger.hpp"
#include <ctime>

StreamLogger::StreamLogger(std::ostream& output, const std::string& customHeader)
    : outputStream(output), customHeader(customHeader), useDateHeader(false) {}

void StreamLogger::write(const std::string& message) {
    
    time_t now = time(0);
    char timestamp[100];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));
    outputStream <<  timestamp << " ";

    outputStream << customHeader << " - " << message << '\n';
}

void StreamLogger::setHeader(const std::string& customHeader) {
    this->customHeader = customHeader;
}


