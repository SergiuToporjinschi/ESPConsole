#include <Arduino.h>
#include <ESPConsole.h>

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL)
extern Stream *Console = &Serial;
#endif

void ESPConsole::initSerial(unsigned long boundRate)
{
    Serial.begin(boundRate);
    ESPConsole::init(&Serial);
}

void ESPConsole::init(Stream *strm)
{
    Console = strm;
}
void ESPConsole::initTelNet()
{
}