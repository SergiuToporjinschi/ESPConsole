#ifndef Console_h
#define Console_h
#include <Arduino.h>
#include <ESPTelnet.h>

class ESPConsole
{
private:
    ESPConsole(/* args */);
    ~ESPConsole();

public:
    static void init(Stream *strm);
    static void initSerial(unsigned long boundRate);
    static void initTelNet();
};

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL)
extern Stream *Console;
#endif

#endif