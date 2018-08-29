#include <iostream>
#include "Logger.h"

void Log::SetLogLevel(LogLevel level)
{
    m_log_level = level;
}

void Log::Error(const char* message)
{
    if(m_log_level >= Log::LevelError)
        std::cout << "[Error] " << message << std::endl;
}

void Log::Warn(const char* message)
{
    if(m_log_level >= Log::LevelWarn)
        std::cout << "[Warn] " << message << std::endl;
}

void Log::Info(const char* message)
{
    if(m_log_level >= Log::LevelInfo)
        std::cout << "[Info] " << message << std::endl;
}

void wait()
{
    std::cin.get();
}