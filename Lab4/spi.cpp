#include "spi.h"
#include <bcm2835.h>
#include <stdio.h>

Spi::Spi()
{
    bcm2835_spi_setBitOrder(BCM2835_SPI_BIT_ORDER_MSBFIRST);      // The default
    bcm2835_spi_setDataMode(BCM2835_SPI_MODE0);                   // The default
    bcm2835_spi_setClockDivider(BCM2835_SPI_CLOCK_DIVIDER_65536); // The default
    bcm2835_spi_chipSelect(BCM2835_SPI_CS0);                      // The default
    bcm2835_spi_setChipSelectPolarity(BCM2835_SPI_CS0, LOW);      // the default
}

uint8_t Spi::transfer(uint8_t send_data){


    uint8_t read_data = bcm2835_spi_transfer(send_data);
    return read_data;


}
