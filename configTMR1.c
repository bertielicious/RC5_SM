#include "basics.h"
void configTMR1(void)
{
    //TMR1 clock source is Fosc 16MHz/4 = 4 MHz
    T1CONbits.TMR1CS1 = LO;
    T1CONbits.TMR1CS0 = HI;
    
    //Prescaler is 1:1
    T1CONbits.T1CKPS1 = LO;
    T1CONbits.T1CKPS0 = LO;
    
    // Clear the TMR1 interrupt flag
    PIR1bits.TMR1IF = LO;
    //clear the register pair 
    TMR1H = 0xff;
    TMR1L = 0xc0;
   //enable TMR1 by setting the TMR1ON bit of T1CON register
    T1CONbits.TMR1ON = HI;
    
   // enable TMR1 interrupts
   //To enable the interrupt on rollover, set these bits:
    
    
  //TMR1IE bit of the PIE1 register
    PIE1bits.TMR1IE = HI;   
  //PEIE bit of the INTCON register
    INTCONbits.PEIE = HI;
  //GIE bit of the INTCON register
    INTCONbits.GIE = HI;
}
