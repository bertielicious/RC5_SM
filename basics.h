/* 
 * File:   basics.h
 * Author: User
 *
 * Created on 31 January 2025, 20:09
 */

#ifndef BASICS_H
#define	BASICS_H
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

#define LED LATCbits.LATC7
enum
{
    LO,
    HI
};

#include <xc.h>
#define _XTAL_FREQ 16000000      // Internal clock 4MHz



#endif	/* BASICS_H */

