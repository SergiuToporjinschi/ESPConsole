#include <Arduino.h>
#include <ESPConsole.h>

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SERIAL)
extern Stream *Console = &Serial;
#endif

void ESPConsole::initSerial(unsigned long boundRate)
{
    Serial.begin(boundRate);
    init(&Serial, OUTPUT_SERIAL);
}

void ESPConsole::init(Stream *strm, uint8_t outType)
{
    Console = strm;
    outputType = outType;
}

void ESPConsole::consoleLoop()
{
    if (outputType == OUTPUT_TELNET)
    {
        telnet.loop();
    }
}

void ESPConsole::initTelNet()
{
    WiFi.waitForConnectResult();
    Serial.print("- Telnet: ");
    if (telnet.begin())
    {
        Serial.println("running");
        init(telnet.getClient(), OUTPUT_TELNET);
    }
    else
    {
        Serial.println("No network connection");
    }
}
ESPConsole::ESPConsole(/* args */) {}
ESPConsole::~ESPConsole() {}