void wait();

class Log
{
public:
    enum LogLevel
    {
        LevelError = 0, LevelWarn, LevelInfo
    };
private:
    /* To hide the constructor so that only static methods can be used,
     we can make the constructor private */
    // Log(){}
    
    LogLevel m_log_level;
public:
    /* To delete the default constructor */
    // Log() = delete;
    
    Log()
    {
        m_log_level = LevelWarn;
    }
    
    Log(LogLevel level)
    {
        m_log_level = level;
    }
    ~Log()
    {
        // Do stuff when destroying the object.
        // You can uninitialize objects here.
    }
    void SetLogLevel(LogLevel level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};
