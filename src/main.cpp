#include "Logger.h"


int main()
{
    Log log;
    log.SetLogLevel(log.LogLevelInfo);
    log.Error("There's an Error!");
    log.Warn("I Warned you!");
    log.Info("This is some Information. Don't pay much attention.");
    wait();
}

