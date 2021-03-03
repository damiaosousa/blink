/*
 * File:   main.c
 * Author: 20185076
 *
 * Created on 3 de Março de 2021, 15:50
 */

#include "config.h"
#include <xc.h>

void main(void) 

{
    TRISDbits.TRISD7 = 0;
    
    while(1)
    {
        PORTDbits.RD7 = 1;
        __delay_ms(500);
        PORTDbits.RD7 = 0;
        __delay_ms(500);
    }
}