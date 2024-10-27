#include <xc.h>

// Configuration bits
#pragma config FOSC = HS      // High-speed oscillator
#pragma config WDTE = OFF     // Watchdog Timer (disabled)
#pragma config PWRTE = OFF    // Power-up Timer (disabled)
#pragma config BOREN = ON     // Brown-out Reset (enabled)
#pragma config LVP = OFF      // Low-Voltage Programming (disabled)
#pragma config CPD = OFF      // Data EEPROM Memory Code Protection (disabled)
#pragma config WRT = OFF      // Flash Program Memory Write Enable (disabled)
#pragma config CP = OFF       // Flash Program Memory Code Protection (disabled)

#define _XTAL_FREQ 20000000   // Define clock frequency (20 MHz)

void main() //The main function
{
    TRISB=0X00; //Instruct the MCU that the PORTB pins are used as Output.
    PORTB=0X00; //Make all output of RB3 LOW
    while(1)    //Get into the Infinite While loop
    {
        RB3=1; //LED ON
        __delay_ms(500);   //Wait
        RB3=0; //LED OFF
        __delay_ms(500);   //Wait
        //Repeat. 
    }
}
