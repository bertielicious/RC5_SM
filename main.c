/*
 * File:   main.c
 * Author: User
 *
 * Created on 31 January 2025, 20:09
 */

#include "configureMicrocontroller.h"
#include "basics.h"
#include "configOsc.h"
#include "putch.h"
#include "configEUSART.h"
#include "void configTMR1.h"
#include "configPins.h"
#include "enableISR.h"
#include "__interrupt.h"

void main(void) 
{
    configOsc();
    configEUSART();
    configTMR1();
    configPins();
    enableISR();
    
    printf("Hello state machine!\n");
    
    while(1)
    {
        
    }
    return;
}
