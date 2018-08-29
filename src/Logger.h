void wait();

class Log
{
public:
    enum LogLevel
    {
        LevelError = 0, LevelWarn, LevelInfo
    };
private:
    LogLevel m_log_level;
public:
    void SetLogLevel(LogLevel level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};
