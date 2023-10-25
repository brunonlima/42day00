#include <iostream>
#include <vector>
#include <string>
#include "FileLogger.hpp"
#include "StreamLogger.hpp"

int main() {
    std::vector<ILogger*> loggers;
    loggers.push_back(new FileLogger("logfile.txt", false));
    loggers.push_back(new StreamLogger(std::cout, "Console Logger: "));
    loggers.push_back(new StreamLogger(std::cerr, "Error Logger: "));

    std::vector<std::string> messages;
    messages.push_back("Message 1");
    messages.push_back("Message 2");
    messages.push_back("Message 3");

    for (std::vector<std::string>::const_iterator it = messages.begin(); it != messages.end(); ++it) {
        for (std::vector<ILogger*>::iterator loggerIt = loggers.begin(); loggerIt != loggers.end(); ++loggerIt) {
             (*loggerIt)->write(*it);
        }
    }

    // Clean up the loggers
    for (std::vector<ILogger*>::iterator it = loggers.begin(); it != loggers.end(); ++it) {
        delete *it;
    }

    return 0;
}
