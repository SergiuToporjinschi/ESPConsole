#include <Arduino.h>
#include <ESPConsole.h>
#include <TestClass.h>

TestClass test;

void setup()
{
  ESPConsole::initSerial(115200);
  Console->println("Setup");
  test.testing();
  // put your setup code here, to run once:
}

void loop()
{
  Console->println("loop");
  delay(100);
  // put your main code here, to run repeatedly:
}