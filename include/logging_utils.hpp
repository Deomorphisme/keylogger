// logging_utils.hpp
#ifndef LOGGING_UTILS_HPP
#define LOGGING_UTILS_HPP
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>

class Logger {
public:
    Logger(const std::string& filename) : logFile(filename, std::ios::app) {}
    ~Logger();
    void log(const std::string& message);
    void writeLog(const std::string& msg, const std::string& pre, const std::string& time);
    void sendLog(const std::string& ipAddress, const std::string& port);

private:
    std::ofstream logFile;
    std::mutex logMutex;
    
    std::string prefix;
    std::string timestamp;
    int frequency = 60; // in seconds
};

#endif // LOGGING_UTILS_HPP