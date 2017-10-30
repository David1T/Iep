#include "pin.h"
#include "bcm2835.h"
#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

Pin::Pin(int number, int direction, int state)
{
    this->number=number;
    this->direction=direction;
    this->state=state;

    if(direction == DIR_IN)
    {
        bcm2835_gpio_fsel(number, BCM2835_GPIO_FSEL_INPT);
    }
    else
    {
        bcm2835_gpio_fsel(number, BCM2835_GPIO_FSEL_OUTP);
    }
}


void Pin::changeDirection(){
    if(this->direction==DIR_IN)
    {
        bcm2835_gpio_fsel(number, BCM2835_GPIO_FSEL_OUTP);
    }
    else
    {
        bcm2835_gpio_fsel(number, BCM2835_GPIO_FSEL_INPT);
    }


}

int Pin::get(){
   if(this->direction == DIR_IN)
   {
       uint8_t value = bcm2835_gpio_lev(number);
              printf("read from pin 15: %d\n", value);

              // wait a bit
              delay(500);
   }
   else
   {
       return -1;
   }
}

void Pin::set(){
    if(this->direction == DIR_OUT)
    {
                bcm2835_gpio_write(number, HIGH);

               // wait a bit
               bcm2835_delay(500);

               // turn it off
               bcm2835_gpio_write(number, LOW);

               // wait a bit
               bcm2835_delay(500);
    }
}
//ok
