//BTS7960 Motor Driver
//ramhdi 06/08/2018

#include <arduino.h>

#ifndef _BTS7960_
#define _BTS7960_

#define DIR_STOP 0
#define DIR_CW 2
#define DIR_CCW 1

class BTS7960
{
    int _pin_len, _pin_ren, _pin_lpwm, _pin_rpwm;

  public:
    BTS7960(int, int, int, int);
    ~BTS7960();

    void attach(); //attach()
    void move(int, int); //move(int dir, int pwm)
};

#endif