#pragma once
#include <fstream>
#include <mutex>
#include <string>
#include <unordered_map>

enum class LogLevel {
  TRACE,
  DEBUG,
  INFO,
  WARN,
  ERROR,
  CRITICAL,
};

enum class LogModule {
  COMP1,
  COMP2,
  COMP3,
};

// Logger class
class Logger {
public:
    Logger(const std::string& filename, LogLevel defaultLevel);
    void LOG_Add(LogModule module, LogLevel level, const std::string& functionName, const std::string& message);
    void setLogLevel(LogModule module, LogLevel level);
    ~Logger();
 
private:
    std::string levelToString(LogLevel level);
    std::string moduleToString(LogModule module);
    std::ofstream logfile;
    std::mutex m_mutex;
    LogLevel m_defaultLevel;
    std::unordered_map<LogModule, LogLevel> m_moduleLevels;
};