#ifndef ESPTelnetExt_h
#define ESPTelnetExt_h

#include <ESPTelnet.h>

class ESPTelnetExt : public ESPTelnet
{
private:
public:
    ESPTelnetExt(/* args */);
    ~ESPTelnetExt();
    WiFiClient* getClient();
    boolean hasClient();
};

#endif