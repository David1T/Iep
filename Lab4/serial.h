#ifndef SERIAL_H
#define SERIAL_H
#include <bcm2835.h>

class Serial
{
public:
    Serial();
    virtual uint8_t transfer(uint8_t send_data )=0;
};

#endif // SERIAL_H
