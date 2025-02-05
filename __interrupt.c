#include "basics.h"
void __interrupt() isr(void)
{
    if(PIR1bits.TMR1IF == HI)
    {
        TMR1H = 0xff;
        TMR1L = 0xc0;
        LED = ~LED;
    }
    PIR1bits.TMR1IF = LO;
}
