#include "logging_utils.hpp"

Logger::Logger(const std::string& filename) : logFile(filename, std::ios::app) {
    if (!logFile.is_open()) {
        throw std::runtime_error("Could not open log file: " + filename);
    }
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::log(const std::string& message) {
    std::lock_guard<std::mutex> guard(logMutex);
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    logFile << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << " - " << message << std::endl;
}