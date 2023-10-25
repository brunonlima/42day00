#include "FileLogger.hpp"
#include <ctime>

FileLogger::FileLogger(const std::string& filename, bool useDate) {
    outputFile.open(filename.c_str()); // Open the file
    this->useDate = useDate;
}

void FileLogger::write(const std::string& message) {
     if (this->useDate) {
        time_t now = time(0);
        char timestamp[100];
        strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));

        outputFile<< timestamp << "  ";
     } 
     outputFile << "  " << message << '\n';
}

 void FileLogger::useDateHeader(bool useDate){
    this->useDate =  useDate;
 }


