#ifndef Console_h
#define Console_h
#include <Arduino.h>
#include <ESPTelnetExt.h>

#define OUTPUT_OTHER 0
#define OUTPUT_SERIAL 1
#define OUTPUT_TELNET 2

class ESPConsole
{
public:
    ESPConsole(/* args */);
    ~ESPConsole();
    void init(Stream *strm, uint8_t outType);
    void initSerial(unsigned long boundRate);
    void initTelNet();
    void consoleLoop();

private:
    ESPTelnetExt telnet;
    int8_t outputType = -1;
};

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL)
extern Stream *Console;
#endif

#endif