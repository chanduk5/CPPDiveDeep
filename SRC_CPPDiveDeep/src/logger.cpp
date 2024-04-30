#include <iostream>
#include <filesystem>
#include <ctime>

#include "logger.h"

namespace fs = std::filesystem;

// Function to get current timestamp
static std::string currentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    return buf;
}

Logger::Logger(const std::string& filename, LogLevel defaultLevel) : m_defaultLevel(defaultLevel), m_mutex() {

    if (!fs::exists(filename)) {
        std::ofstream newFile(filename);

        if (!newFile.is_open()) {
            std::cerr << "Error: Unable to create log file!" << std::endl;
            return;
        }
        newFile.close();
    }

    logfile.open(filename);
    if (!logfile.is_open()) {
        std::cerr << "Error: Unable to open log file!" << std::endl;
    }
    else {
        for (int module = static_cast<int>(LogModule::COMP1); 
             module < static_cast<int>(LogModule::COMP3); 
             module++) {
            m_moduleLevels[static_cast<LogModule>(module)] = defaultLevel;
        }
    }
}

// Convert LogLevel enum to string
std::string Logger::levelToString(LogLevel level) {
    switch (level) {
    case LogLevel::TRACE: return "TRACE";
    case LogLevel::DEBUG: return "DEBUG";
    case LogLevel::INFO:  return "INFO";
    case LogLevel::WARN:  return "WARN";
    case LogLevel::ERROR: return "ERROR";
    case LogLevel::CRITICAL: return "CRITICAL";
    default: return "UNKNOWN";
    }
}

//Convert LogModule enum to the string
std::string Logger::moduleToString(LogModule module) {
    switch (module) {
    case LogModule::COMP1: return "COMP1";
    case LogModule::COMP2: return "COMP2";
    case LogModule::COMP3:  return "COMP3";
    default: return "UNKNOWN";
    }
}

// Log message with level, module name, and message
void Logger::LOG_Add(LogModule module, LogLevel level, const std::string& functionName, const std::string& message) {
    if (logfile.is_open()) {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (level >= m_moduleLevels[module]) {
            logfile << currentDateTime() << " " << levelToString(level) << " " << moduleToString(module) 
            << " " << functionName << " " << message << std::endl;
        }
    }
    else {
        std::cerr << "Error: Log file is not open!" << std::endl;
        return;
    }
}

// Set log level for a specific module
void Logger::setLogLevel(LogModule module, LogLevel level) {
    std::lock_guard<std::mutex> lock(m_mutex);
    m_moduleLevels[module] = level;
}

Logger::~Logger()
{
    if (logfile.is_open()) {
        logfile.close();
    }
}
