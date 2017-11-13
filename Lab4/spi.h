#ifndef SPI_H
#define SPI_H
#include"serial.h"
#include <bcm2835.h>

class Spi : public Serial {
public:
    Spi();
    uint8_t transfer(uint8_t send_data);
};

#endif // SPI_H
