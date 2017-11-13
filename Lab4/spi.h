#ifndef SPI_H
#define SPI_H
#include"serial.h"


class Spi : public Serial {
public:
    Spi();
    void transfer();
};

#endif // SPI_H
