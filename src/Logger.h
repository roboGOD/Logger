void wait();

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarn = 1;
    const int LogLevelInfo = 2;
private:
    int m_log_level;
public:
    void SetLogLevel(int level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};
