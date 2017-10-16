
#ifndef PIN_H
#define PIN_H


class Pin
{
    public:
        Pin(int number, char *direction, int state);
        void set(Pin p);
        int get(Pin p);
        void change(Pin p);
    private:
        int number;
        char *direction;
        int state;

};

#endif // PIN_H
