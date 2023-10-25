#include "StreamLogger.hpp"
#include <ctime>

StreamLogger::StreamLogger(std::ostream& output, const std::string& customHeader)
    : outputStream(output), customHeader(customHeader) {}

void StreamLogger::write(const std::string& message) {

    outputStream << customHeader << " - " << message << '\n';
}

void StreamLogger::setHeader(const std::string& customHeader) {
    this->customHeader = customHeader;
}


