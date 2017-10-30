#ifndef PWM_H
#define PWM_H


class PWM
{
public:
    PWM();
    void set(int factor_nou, int frecventa_noua);
    int getDutyCycle();
    int getFrequency();

   private:
        int factor_umplere;
        int frecventa;
};

#endif // PWM_H
