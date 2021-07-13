#include <Arduino.h>
#include <ESPConsole.h>

ESPConsole consoleInit;

void setup()
{
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.persistent(true);
  WiFi.begin("zDay", "WiFi4MeToo");
  Serial.begin(115200);

  consoleInit.initTelNet();
  Console->println("Setup...");
}

void loop()
{
  consoleInit.consoleLoop();
  Console->println("Loop");
  delay(100);
}