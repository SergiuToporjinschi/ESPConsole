#include <Arduino.h>
#include <ESPConsole.h>

ESPConsole consoleInit;

void setup()
{
  consoleInit.initSerial(115200);
  Console->println("Setup...");
}

void loop()
{
  consoleInit.consoleLoop();
  Console->println("Loop");
  delay(100);
}