#include "FileLogger.hpp"
#include <ctime>

FileLogger::FileLogger(const std::string& filename, const std::string& customHeader)
    : customHeader(customHeader) {
    outputFile.open(filename.c_str()); // Open the file
}

void FileLogger::write(const std::string& message) {
    time_t now = time(0);
    char timestamp[100];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));
    outputFile <<  timestamp << " "; 

    outputFile<< customHeader << " - " << message << '\n';
}

void FileLogger::setHeader(const std::string& customHeader) {
    this->customHeader = customHeader;
}

