
#ifndef PIN_H
#define PIN_H

#define DIR_OUT 1
#define DIR_IN  0

class Pin
{
    public:
        Pin(int number, int direction, int state);
        void set();
        int get();
        void changeDirection();


    private:
        int number;
        int direction;
        int state;

};

#endif // PIN_H
