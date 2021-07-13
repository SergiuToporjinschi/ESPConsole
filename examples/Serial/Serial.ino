#include <Arduino.h>
#include <ESPConsole.h>


void setup()
{
  ESPConsole::initSerial(115200);
  Console->println("Setup");
}

void loop()
{
  Console->println("loop");
  delay(100);
}