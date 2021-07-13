#include <ESPTelnetExt.h>

ESPTelnetExt::ESPTelnetExt(/* args */)
{
}

ESPTelnetExt::~ESPTelnetExt()
{
}
boolean ESPTelnetExt::hasClient()
{
    return isConnected;
}
WiFiClient *ESPTelnetExt::getClient()
{
    return &client;
}