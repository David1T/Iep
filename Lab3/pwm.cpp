#include "pwm.h"
#include<stdio.h>
#include<stdlib.h>
#include "bcm2835.h"
#define PWM_CHANNEL 0

PWM::PWM()
{

    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
    bcm2835_pwm_set_range(PWM_CHANNEL, frecventa);
    bcm2835_pwm_set_data(PWM_CHANNEL, frecventa * factor_umplere / 100);

}

void PWM::set(int factor_nou, int frecventa_noua){
    this->factor_umplere=factor_nou;
    this->frecventa=frecventa_noua;
    bcm2835_pwm_set_range(PWM_CHANNEL, frecventa);
    bcm2835_pwm_set_data(PWM_CHANNEL, frecventa * factor_umplere / 100);

}
int PWM::getDutyCycle(){
    return this->factor_umplere;
}

int PWM::getFrequency(){
    return this->frecventa;
}

