#include <iostream>
#include "Logger.h"

void Log::SetLogLevel(int level)
{
    m_log_level = level;
}

void Log::Error(const char* message)
{
    if(m_log_level >= LogLevelError)
        std::cout << "[Error] " << message << std::endl;
}

void Log::Warn(const char* message)
{
    if(m_log_level >= LogLevelWarn)
        std::cout << "[Warn] " << message << std::endl;
}

void Log::Info(const char* message)
{
    if(m_log_level >= LogLevelInfo)
        std::cout << "[Info] " << message << std::endl;
}

void wait()
{
    std::cin.get();
}