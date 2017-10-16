#include "pin.h"
#include <iostream>
#include <string>
using namespace std;

Pin::Pin(int number, char *direction, int state)
{
    this->number=number;
    this->direction=direction;
    this->state=state;
}
